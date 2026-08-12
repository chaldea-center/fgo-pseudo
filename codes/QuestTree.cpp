void QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_object__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_List_object__o *v52; // x20
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7

  if ( (byte_596D433 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_2213A60(&MapControl_RootInfo_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_596D433 = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_2213CCC(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0);
  this->fields.mapControlRootInfo = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.allQuestInfoList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.allSpotInfoList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.allSpotRoadInfoList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.allMapGimmickInfoList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v38;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.allMapInfoList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.allWarInfoList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v52;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questReleaseEntList,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_47A304C *)Method_SingletonTemplate_QuestTree___ctor__);
}


bool QuestTree__CheckMapGimmickCond(
        QuestTree_o *this,
        int32_t mapGimmickId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_43442480(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckMapGimmickCond_43439552(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  MapGimmickEntity_o *Mine; // x0
  __int64 Time; // x0
  __int64 v9; // x1
  int64_t v10; // x20
  MapGimmickEntity_o *v11; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v13; // x8
  int64_t *v14; // x9
  int64_t v15; // x10
  int64_t v16; // t1

  if ( (byte_596D430 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D430 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, mapGimmickInfo, method);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0) )
  {
    LOBYTE(Mine) = 1;
  }
  else
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Time = NetworkManager__getTime(0);
    if ( !mapGimmickInfo )
      goto LABEL_26;
    v10 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0);
    if ( !Mine )
      return (char)Mine;
    v11 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_2213B20(long___TypeInfo, 2);
    if ( !Time )
      goto LABEL_26;
    v13 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v13 || (*(_QWORD *)(Time + 32) = v11->fields.startedAt, (_DWORD)v13 == 1) )
      sub_2213CE4(Time);
    *(_QWORD *)(Time + 40) = v11->fields.endedAt;
    if ( (int)v13 >= 1 )
    {
      v13 = (unsigned int)v13;
      v14 = (int64_t *)(Time + 32);
      do
      {
        v16 = *v14++;
        v15 = v16;
        if ( v16 > v10 && this->fields.forceUpdateTime > v15 )
          this->fields.forceUpdateTime = v15;
        --v13;
      }
      while ( v13 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_2213CDC(Time, v9);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v11, 0)
                && MapGimmickEntity__IsEnableTime(v11, v10, 0);
  }
  return (char)Mine;
}


int32_t QuestTree__CheckQuestOpen(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        MapControl_QuestInfo_o *questInfo,
        int32_t warId,
        const MethodInfo *method)
{
  QuestTree_o *v8; // x22
  int64_t Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // w24
  int64_t Time; // x23
  QuestAddEntity_o *ReplaceDataByQuestId; // x0
  int32_t *p_openedAt; // x8
  int32_t *p_closedAt; // x9
  __int64 v18; // x29
  __int64 v19; // x28
  _QWORD *v20; // x25
  __int64 v21; // x8
  int64_t *v22; // x9
  int64_t v23; // x10
  int64_t v24; // t1
  __int64 v25; // x2
  int v26; // w22
  _BOOL4 v27; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v34; // w23
  int32_t v35; // w20
  int32_t result; // w0
  int32_t v37; // w8
  UserQuestEntity_o *v38; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_596D42C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D42C = 1;
  }
  entity = 0;
  questReleaseNG = 0;
  v38 = 0;
  Instance = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !Instance )
    goto LABEL_74;
  v13 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)Instance,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  Time = NetworkManager__getTime(0);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !Instance )
    goto LABEL_74;
  ReplaceDataByQuestId = QuestAddMaster__GetReplaceDataByQuestId((QuestAddMaster_o *)Instance, questEnt->fields.id, 0);
  p_openedAt = &questEnt->fields.openedAt;
  if ( ReplaceDataByQuestId )
  {
    p_openedAt = &ReplaceDataByQuestId->fields.openedAt;
    p_closedAt = &ReplaceDataByQuestId->fields.closedAt;
  }
  else
  {
    p_closedAt = &questEnt->fields.closedAt;
  }
  v18 = *p_openedAt;
  v19 = *p_closedAt;
  v20 = (_QWORD *)sub_2213B20(long___TypeInfo, 3);
  Instance = QuestEntity__getNoticeAt(questEnt, 0);
  if ( !v20 )
    goto LABEL_74;
  v21 = v20[3];
  if ( !(_DWORD)v21 || (v20[4] = Instance, (_DWORD)v21 == 1) || (v20[5] = v18, (unsigned int)v21 <= 2) )
    sub_2213CE4(Instance);
  v20[6] = v19;
  if ( (int)v21 >= 1 )
  {
    v21 = (unsigned int)v21;
    v22 = v20 + 4;
    do
    {
      v24 = *v22++;
      v23 = v24;
      if ( v24 > Time && v8->fields.forceUpdateTime > v23 )
        v8->fields.forceUpdateTime = v23;
      --v21;
    }
    while ( v21 );
  }
  v26 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000, 0) )
  {
    v27 = 0;
    goto LABEL_56;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0);
  if ( HasFlag )
    v26 = 3;
  else
    v26 = 1;
  if ( HasFlag || v13 )
  {
    v27 = !HasFlag;
    goto LABEL_56;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0) > Time
    && QuestEntity__getNoticeAt(questEnt, 0) <= Time )
  {
    goto LABEL_54;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_74;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( questReleaseNG )
  {
    if ( questReleaseNG->fields.closedMessageId )
    {
      IsShop = entity;
      if ( entity )
      {
        IsShop = (Il2CppObject *)WarEntity__IsShop((WarEntity_o *)entity, 0);
        if ( ((unsigned __int8)IsShop & 1) != 0 )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_74;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v31);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (int64_t)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v31);
            Instance = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_74;
          if ( !UserQuestMaster__TryGetEntity(
                  (UserQuestMaster_o *)MasterData_object,
                  &v38,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0) )
            goto LABEL_55;
          Instance = (int64_t)v38;
          if ( !v38 )
            goto LABEL_74;
          if ( !UserQuestEntity__HasStatus(v38, 8, 0) )
            goto LABEL_55;
LABEL_54:
          v27 = 0;
          v26 = 2;
          goto LABEL_56;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v30);
  if ( !Instance )
    goto LABEL_74;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_54;
  }
LABEL_55:
  v27 = 0;
  v26 = 0;
LABEL_56:
  forceOperation = questEnt->fields.forceOperation;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v25);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
  if ( (Instance & 1) != 0 )
    v34 = 1;
  else
    v34 = forceOperation;
  if ( v34 )
    v35 = v34 != 2;
  else
    v35 = v26;
  if ( v35 == 2 && questReleaseNG )
  {
    if ( questInfo )
    {
      MapControl_QuestInfo__SetDispType_42937600(questInfo, 2, questReleaseNG, 0);
      goto LABEL_70;
    }
LABEL_74:
    sub_2213CDC(Instance, v10);
  }
  if ( !questInfo )
    goto LABEL_74;
  questInfo->fields.dispType = v35;
LABEL_70:
  result = v35;
  if ( v34 )
    v37 = v34 != 2;
  else
    v37 = v27;
  questInfo->fields.touchType = v37;
  return result;
}


bool QuestTree__CheckSpotCond(
        QuestTree_o *this,
        int32_t spotId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_43442480(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool QuestTree__CheckSpotCond_43442480(
        QuestTree_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  char v15; // w8
  TerminalSceneComponent_c *v17; // x0
  UnityEngine_Object_o *mInstance; // x25
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  __n128 inited; // q0
  int64_t Instance; // x0
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  int v26; // w9
  char v27; // w21
  __int64 v28; // x0
  __int64 v29; // x0
  UnityEngine_Object_o *v30; // x25
  bool IsMissionAchive; // w0
  int64_t v32; // x2
  int32_t v33; // w0
  int32_t v34; // w21
  int32_t v35; // w20
  int32_t v36; // w0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x8
  int64_t v40; // x20
  int32_t v41; // w23
  unsigned __int64 v42; // x24
  int32_t v43; // w22
  QuestEntity_o *v44; // x19
  int32_t WarId; // w0
  const MethodInfo *v46; // x4
  System_Collections_Generic_List_QuestGroupEntity__o *CacheByTypeGroup; // x0
  System_Collections_Generic_List_object__o *v48; // x20
  int32_t v49; // w24
  int32_t v50; // w22
  Il2CppObject *Item; // x23
  const MethodInfo *v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  Il2CppObject *MasterData_object; // x21
  long double v56; // q0
  int32_t num; // w8
  System_Collections_Generic_List_QuestGroupEntity__o *v58; // x0
  System_Collections_Generic_List_object__o *v59; // x20
  int32_t v60; // w24
  int32_t v61; // w22
  Il2CppObject *v62; // x23
  const MethodInfo *v63; // x1
  bool v64; // cc
  int32_t v65; // w8
  bool v66; // cc
  int32_t v67; // w8
  __int64 v68; // x8
  int64_t v69; // x20
  int32_t v70; // w23
  unsigned __int64 v71; // x24
  int32_t v72; // w22
  __int64 v73; // x8
  int64_t v74; // x20
  unsigned __int64 v75; // x24
  int32_t v76; // w22
  int32_t v77; // w8
  int32_t v78; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596D42F & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D42F = 1;
  }
  entity = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&commandType, *(_QWORD *)&commandTypeId);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0) )
  {
LABEL_6:
    v15 = 1;
    return v15 & 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13, v14);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13, v14);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v17->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_35;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v19, v20);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v19, v20);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v23 = **(_QWORD **)(Instance + 184);
  if ( !v23 )
    goto LABEL_209;
  if ( !*(_QWORD *)(v23 + 472) )
    goto LABEL_35;
  if ( !*(_DWORD *)(Instance + 228) )
    inited = j_il2cpp_runtime_class_init_0(Instance, v19, v20);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v19, v20);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v24 = **(_QWORD **)(Instance + 184);
  if ( !v24 )
    goto LABEL_209;
  v25 = *(_QWORD *)(v24 + 472);
  if ( !v25 )
    goto LABEL_209;
  v26 = *(_DWORD *)(v25 + 16);
  if ( v26 )
  {
    v27 = 0;
  }
  else
  {
LABEL_35:
    v28 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_WORD *)(v28 + 309) & 1) == 0 )
      v28 = sub_224B908(*(long double *)&inited);
    v29 = *(_QWORD *)(*(_QWORD *)(v28 + 192) + 16LL);
    if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
      v29 = sub_224B908(*(long double *)&inited);
    v30 = **(UnityEngine_Object_o ***)(v29 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    Instance = UnityEngine_Object__op_Inequality(v30, 0, 0);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0);
      v27 = Instance;
      v26 = 0;
    }
    else
    {
      v26 = 0;
      v27 = 1;
    }
  }
  v15 = 1;
  switch ( spotCondType )
  {
    case 1:
      return v15 & 1;
    case 2:
    case 14:
      Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
      if ( targetValue )
      {
        if ( Instance )
          return clsQuestCheck__IsQuestPhaseClear((clsQuestCheck_o *)Instance, targetId, targetValue, v27 & 1, 0);
LABEL_209:
        sub_2213CDC(Instance, v19);
      }
      if ( !Instance )
        goto LABEL_209;
      return clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, v27 & 1, 0);
    case 3:
    case 15:
      Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
      if ( targetValue )
      {
        if ( !Instance )
          goto LABEL_209;
        IsMissionAchive = clsQuestCheck__IsQuestPhaseClear(
                            (clsQuestCheck_o *)Instance,
                            targetId,
                            targetValue,
                            v27 & 1,
                            0);
      }
      else
      {
        if ( !Instance )
          goto LABEL_209;
        IsMissionAchive = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, v27 & 1, 0);
      }
LABEL_155:
      v15 = !IsMissionAchive;
      return v15 & 1;
    case 5:
      if ( v26 == targetId )
        goto LABEL_85;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      return CondType__IsMissionAchive(targetId, 0);
    case 6:
      Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
      if ( !Instance )
        goto LABEL_209;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, v27 & 1, 0) )
        goto LABEL_6;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0);
      if ( !Instance )
        goto LABEL_209;
      v44 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0);
      v15 = QuestTree__CheckQuestOpen(this, v44, 0, WarId, v46) == 1;
      return v15 & 1;
    case 7:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( this->fields.isUseCache )
      {
        if ( !Instance )
          goto LABEL_209;
        CacheByTypeGroup = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0);
        if ( CacheByTypeGroup )
        {
          v48 = (System_Collections_Generic_List_object__o *)CacheByTypeGroup;
          if ( CacheByTypeGroup->fields._size >= 1 )
          {
            v49 = 0;
            v50 = 0;
            while ( 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v48,
                       v50,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Item, v52);
              if ( !Item || !Instance )
                goto LABEL_209;
              ++v50;
              v49 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)Item[1].klass, v27 & 1, 0);
              if ( v50 >= v48->fields._size )
                goto LABEL_164;
            }
          }
        }
        v49 = 0;
LABEL_164:
        if ( targetValue <= 1 )
          v65 = 1;
        else
          v65 = targetValue;
        v66 = v49 < v65;
LABEL_206:
        v15 = v66;
        return v15 & 1;
      }
      if ( !Instance )
        goto LABEL_209;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0);
      if ( !Instance )
        goto LABEL_209;
      v68 = *(_QWORD *)(Instance + 24);
      v69 = Instance;
      if ( (int)v68 < 1 )
      {
        v70 = 0;
LABEL_202:
        if ( targetValue <= 1 )
          v78 = 1;
        else
          v78 = targetValue;
        v66 = v70 < v78;
        goto LABEL_206;
      }
      v70 = 0;
      v71 = 0;
      while ( v71 < (unsigned int)v68 )
      {
        v72 = *(_DWORD *)(v69 + 32 + 4 * v71);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
        if ( !Instance )
          goto LABEL_209;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v72, v27 & 1, 0);
        LODWORD(v68) = *(_DWORD *)(v69 + 24);
        ++v71;
        v70 += Instance & 1;
        if ( (__int64)v71 >= (int)v68 )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( this->fields.isUseCache )
      {
        if ( !Instance )
          goto LABEL_209;
        v58 = QuestGroupMaster__GetCacheByTypeGroup((QuestGroupMaster_o *)Instance, targetId, 2, 0);
        if ( v58 )
        {
          v59 = (System_Collections_Generic_List_object__o *)v58;
          if ( v58->fields._size >= 1 )
          {
            v60 = 0;
            v61 = 0;
            while ( 1 )
            {
              v62 = System_Collections_Generic_List_object___get_Item(
                      v59,
                      v61,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)v62, v63);
              if ( !v62 || !Instance )
                goto LABEL_209;
              ++v61;
              v60 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)v62[1].klass, v27 & 1, 0);
              if ( v61 >= v59->fields._size )
                goto LABEL_169;
            }
          }
        }
        v60 = 0;
LABEL_169:
        if ( targetValue <= 1 )
          v67 = 1;
        else
          v67 = targetValue;
        v64 = v60 < v67;
      }
      else
      {
        if ( !Instance )
          goto LABEL_209;
        Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0);
        if ( !Instance )
          goto LABEL_209;
        v73 = *(_QWORD *)(Instance + 24);
        v74 = Instance;
        if ( (int)v73 >= 1 )
        {
          v41 = 0;
          v75 = 0;
          while ( v75 < (unsigned int)v73 )
          {
            v76 = *(_DWORD *)(v74 + 32 + 4 * v75);
            Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
            if ( !Instance )
              goto LABEL_209;
            Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v76, v27 & 1, 0);
            LODWORD(v73) = *(_DWORD *)(v74 + 24);
            ++v75;
            v41 += Instance & 1;
            if ( (__int64)v75 >= (int)v73 )
              goto LABEL_194;
          }
LABEL_210:
          sub_2213CE4(Instance);
        }
LABEL_193:
        v41 = 0;
LABEL_194:
        if ( targetValue <= 1 )
          v77 = 1;
        else
          v77 = targetValue;
        v64 = v41 < v77;
      }
LABEL_198:
      v15 = !v64;
      return v15 & 1;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v56 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v53, v54);
      Instance = sub_2417958(0, v56);
      if ( !MasterData_object )
        goto LABEL_209;
      Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, targetId, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_209;
        num = entity->fields.num;
      }
      else
      {
        num = 0;
      }
      v64 = num < targetValue;
      goto LABEL_198;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
      if ( !Instance )
        goto LABEL_209;
      return clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, v27 & 1, 0);
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0);
      if ( !Instance )
        goto LABEL_209;
      v39 = *(_QWORD *)(Instance + 24);
      v40 = Instance;
      if ( (int)v39 < 1 )
        goto LABEL_193;
      v41 = 0;
      v42 = 0;
      while ( v42 < (unsigned int)v39 )
      {
        v43 = *(_DWORD *)(v40 + 32 + 4 * v42);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
        if ( !Instance )
          goto LABEL_209;
        Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v43, v27 & 1, 0);
        LODWORD(v39) = *(_DWORD *)(v40 + 24);
        ++v42;
        v41 += Instance & 1;
        if ( (__int64)v42 >= (int)v39 )
          goto LABEL_194;
      }
      goto LABEL_210;
    case 12:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      return CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0);
    case 13:
      v34 = targetId / 100;
      v35 = targetId % 100;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      return CondType__IsEventRaceGoalScriptPlayed(v34, v35, targetValue, 0);
    case 16:
      if ( v26 == targetId )
        return v15 & 1;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0);
      goto LABEL_155;
    case 17:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      return CondType__IsQuestAvailable(targetId, 0, 0);
    case 18:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 83;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 19:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 84;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 20:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 85;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 21:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 86;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 22:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 87;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 23:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 88;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 24:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 89;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 25:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 90;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 26:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 91;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 27:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 23;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 28:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 76;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 29:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      return CondType__IsMissionClearOnly(targetId, 0);
    case 30:
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v19, v20);
      v32 = targetValue;
      v33 = 97;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    case 31:
      Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v19);
      if ( !Instance )
        goto LABEL_209;
      v36 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, v27 & 1, 0);
      if ( (v36 & 0x80000000) == 0 )
        return CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v36, 1, 0);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v37, v38);
      v32 = targetValue;
      v33 = 113;
      return CondType__IsOpen(v33, targetId, v32, 0, 0, 0);
    default:
LABEL_85:
      v15 = 0;
      return v15 & 1;
  }
}


bool QuestTree__CheckSpotRoadCond(
        QuestTree_o *this,
        int32_t spoRoadtId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return QuestTree__CheckSpotCond_43442480(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_596D42A & 1) == 0 )
  {
    sub_2213A60(&QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
    byte_596D42A = 1;
  }
  v7 = sub_2213CCC(QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__49___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)v7, -2, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 72), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v7 + 64),
    (int32_t)blankEarthSpotMaster,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *)v7;
}


int64_t QuestTree__GetEndTime(QuestTree_o *this, MapControl_QuestInfo_o *questInfo, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t questId; // w21
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x23
  int64_t v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  __int64 v14; // x1
  EventEntity_o *Entity; // x0
  EventEntity_o *v16; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v18; // x0
  const MethodInfo *v19; // x3
  QuestEntity_o *Mine; // x0
  __int64 v21; // x1
  QuestEntity_o *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_596D42D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_596D42D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questInfo, method);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (QuestReleaseMaster__getListByQuestID_49559816(
          (QuestReleaseMaster_o *)this,
          questId,
          &v4->fields.questReleaseEntList,
          0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___),
        !v4->fields.questReleaseEntList) )
  {
LABEL_33:
    sub_2213CDC(this, questInfo);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)v4->fields.questReleaseEntList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v8 = 0;
  v26 = v25;
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v26;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_2213CDC(v9, v10);
    klass_high = HIDWORD(v26.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_2213CDC(v9, v10);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0);
        if ( FirstEntityFromQuestId )
        {
          if ( !v7 )
            sub_2213CDC(FirstEntityFromQuestId, v14);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v7,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v16 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0) )
            {
              EndTime = EventEntity__GetEndTime(v16, 1, 0);
LABEL_27:
              v8 = EndTime;
              goto LABEL_28;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !Mine )
          sub_2213CDC(0, v21);
        EndTime = QuestEntity__getClosedAt(Mine, 0);
        goto LABEL_27;
      case 13:
        v22 = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !v22 )
          sub_2213CDC(0, v23);
        EndTime = QuestEntity__GetEndTime(v22, 1, 0);
        goto LABEL_27;
      case 166:
        v18 = MapControl_QuestInfo__GetMine(questInfo, 0);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v18, v18, (QuestReleaseEntity_o *)current, v19);
        goto LABEL_27;
      default:
LABEL_28:
        if ( v8 >= 1 )
          goto LABEL_29;
        break;
    }
  }
LABEL_29:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v8;
}


int64_t QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  int64_t v9; // x21
  __int64 v10; // x2
  System_DateTime_o v12; // x0
  int64_t Time_48346468; // x0
  int64_t value; // x26
  int64_t v15; // x22
  System_DateTime_o v16; // x1
  System_DateTime_o v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w27
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t v23; // x22
  int64_t v24; // x26
  System_DateTime_o v25; // x1
  System_DateTime_o v26; // x2
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596D42E & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D42E = 1;
  }
  dateData = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, questEnt, questReleaseEnt);
  Time = NetworkManager__getTime(0);
  if ( !questEnt )
    goto LABEL_30;
  v8 = Time;
  v9 = 0;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0) )
    return v9;
  Time = QuestEntity__getClosedAt(questEnt, 0);
  v9 = 0;
  if ( v8 > Time )
    return v9;
  if ( !questReleaseEnt )
LABEL_30:
    sub_2213CDC(Time, v7);
  if ( questReleaseEnt->fields.targetId != 254 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v10);
    v12.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    Time_48346468 = NetworkManager__getTime_48346468(v12, 0);
    value = questReleaseEnt->fields.value;
    v15 = Time_48346468;
    dateData = NetworkManager__getDateTime_48347260(Time_48346468 - 3600 * value, 0).fields._dateData;
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v16.fields._dateData, v17.fields._dateData);
    if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(
                                                                (System_DateTime_o)&dateData,
                                                                0)
                                                            + 1))
        & 1) == 0 )
      return 0;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v19);
    v20 = 6;
    v9 = NetworkManager__getNextDayStartTime(0) + 3600 * questReleaseEnt->fields.value;
    v23 = v15 + 86400 - 3600 * value;
    v24 = v9 + 518400;
    while ( 1 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21, v22);
      dateData = NetworkManager__getDateTime_48347260(v23, 0).fields._dateData;
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v25.fields._dateData, v26.fields._dateData);
      if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(
                                                                  (System_DateTime_o)&dateData,
                                                                  0)
                                                              + 1))
          & 1) == 0 )
        break;
      --v20;
      v9 += 86400LL;
      v23 += 86400LL;
      if ( !v20 )
      {
        v9 = v24;
        break;
      }
    }
    if ( QuestEntity__getClosedAt(questEnt, 0) < v9 )
      return QuestEntity__getClosedAt(questEnt, 0);
    return v9;
  }
  return QuestEntity__getClosedAt(questEnt, 0);
}


MapControl_WarInfo_o *QuestTree__GetLatestGrandWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  QuestTree___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  struct QuestTree___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__42_0; // x21
  Il2CppObject *v11; // x22
  struct QuestTree___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  MapControl_WarInfo_o *current; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  BalanceConfig_c *v27; // x0
  int32_t warId; // w22
  QuestTree___c_c *v29; // x0
  struct QuestTree___c_StaticFields *v30; // x8
  System_Func_object__bool__o *_9__42_1; // x21
  Il2CppObject *v32; // x22
  struct QuestTree___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  BalanceConfig_c *v42; // x0
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596D423 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_2213A60(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_2213A60(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_2213A60(&Method_QuestTree___c__GetLatestGrandWarInfo_b__42_0__);
    sub_2213A60(&Method_QuestTree___c__GetLatestGrandWarInfo_b__42_1__);
    sub_2213A60(&QuestTree___c_TypeInfo);
    byte_596D423 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  memset(&v45, 0, sizeof(v45));
  if ( !mapControlRootInfo )
    goto LABEL_32;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 0, 1, 0);
  v7 = QuestTree___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, v5, v6);
    v7 = QuestTree___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__42_0 = (System_Func_object__int__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = QuestTree___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__42_0, v11, Method_QuestTree___c__GetLatestGrandWarInfo_b__42_0__, 0);
    v12 = QuestTree___c_TypeInfo->static_fields;
    v12->__9__42_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__42_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__42_0, (int32_t)_9__42_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TKey__o *)_9__42_0,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v19,
                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_32:
    sub_2213CDC(mapControlRootInfo, method);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)mapControlRootInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v45 = v44;
  v44.fields._list = 0;
  *(_QWORD *)&v44.fields._index = &v45;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v21 )
      break;
    current = (MapControl_WarInfo_o *)v45.fields._current;
    if ( !v45.fields._current )
      sub_2213CDC(v21, v22);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v45.fields._current[1].klass), v23) )
    {
      v27 = BalanceConfig_TypeInfo;
      warId = current->fields.warId;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25, v26);
        v27 = BalanceConfig_TypeInfo;
      }
      if ( warId != v27->static_fields->GrandExtra2WarId )
        goto LABEL_30;
      v29 = QuestTree___c_TypeInfo;
      if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, v25, v26);
        v29 = QuestTree___c_TypeInfo;
      }
      v30 = v29->static_fields;
      _9__42_1 = (System_Func_object__bool__o *)v30->__9__42_1;
      if ( !_9__42_1 )
      {
        if ( !*(&v29->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v29, v25, v26);
          v30 = QuestTree___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)v30->__9;
        _9__42_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MapControl_WarInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__42_1, v32, Method_QuestTree___c__GetLatestGrandWarInfo_b__42_1__, 0);
        v33 = QuestTree___c_TypeInfo->static_fields;
        v33->__9__42_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__42_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v33->__9__42_1,
          (int32_t)_9__42_1,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      current = (MapControl_WarInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                          v20,
                                          (System_Func_TSource__bool__o *)_9__42_1,
                                          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
      if ( current )
      {
        v42 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v41);
          v42 = BalanceConfig_TypeInfo;
        }
        if ( QuestTree__IsActiveWar(this, v42->static_fields->GrandExtra1WarId, v41) )
          goto LABEL_30;
      }
    }
  }
  current = 0;
LABEL_30:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return current;
}


MapControl_WarInfo_o *QuestTree__GetLatestProgressWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  QuestTree___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  struct QuestTree___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__41_0; // x21
  Il2CppObject *v11; // x22
  struct QuestTree___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596D422 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_2213A60(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_2213A60(&Method_QuestTree___c__GetLatestProgressWarInfo_b__41_0__);
    sub_2213A60(&QuestTree___c_TypeInfo);
    byte_596D422 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  memset(&v25, 0, sizeof(v25));
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0, 0);
  v7 = QuestTree___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, v5, v6);
    v7 = QuestTree___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__41_0 = (System_Func_object__int__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = QuestTree___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__41_0, v11, Method_QuestTree___c__GetLatestProgressWarInfo_b__41_0__, 0);
    v12 = QuestTree___c_TypeInfo->static_fields;
    v12->__9__41_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__41_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__41_0, (int32_t)_9__41_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TKey__o *)_9__41_0,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v19,
                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_2213CDC(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v20 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_2213CDC(v20, v21);
    if ( QuestTree__IsActiveWar(
           this,
           *(_DWORD *)((char *)&v25.fields._current->klass + (unsigned __int64)&dword_14),
           v22) )
    {
      goto LABEL_17;
    }
  }
  current = 0;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


MapControl_MapGimmickInfo_o *QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass27_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_596D418 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_2213A60(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass27_0__GetMapGimmickInfo_b__0__);
    sub_2213A60(&QuestTree___c__DisplayClass27_0_TypeInfo);
    byte_596D418 = 1;
  }
  v5 = (QuestTree___c__DisplayClass27_0_o *)sub_2213CCC(QuestTree___c__DisplayClass27_0_TypeInfo);
  QuestTree___c__DisplayClass27_0___ctor(v5, 0);
  if ( !v5
    || (allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v5->fields.mapGimmickId = mapGimmickId,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass27_0__GetMapGimmickInfo_b__0__,
          0),
        !allMapGimmickInfoList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
}


int32_t QuestTree__GetMapIdByQuestId(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v5; // x1
  int32_t SpotID; // w0
  const MethodInfo *v7; // x2

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( !QuestInfo
    || (SpotID = MapControl_QuestInfo__GetSpotID(QuestInfo, 0),
        (QuestInfo = (MapControl_QuestInfo_o *)QuestTree__GetSpotInfo(this, SpotID, v7)) == 0) )
  {
    sub_2213CDC(QuestInfo, v5);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0);
}


int32_t QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  MapControl_WarInfo_o *v7; // x22
  WarEntity_o *Mine; // x0
  __int64 v9; // x1
  WarEntity_o *v10; // x21
  void *HasFlag; // x0
  const MethodInfo *v12; // x2
  MapControl_WarInfo_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  bool IsContainPrioredEntity; // w22
  int v17; // w8
  int32_t v18; // w19
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_object__o *UserReachableMapList; // x22
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v24; // x1
  __int128 v25; // q0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v28; // x0
  const MethodInfo *v29; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  System_Collections_Generic_List_int__o *v31; // x21
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *v33; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  MapControl_SpotInfo_o *current; // x22
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_int__o *v40; // x0
  __int64 v41; // x1
  int v42; // w19
  _BOOL8 v43; // x0
  __int64 v44; // x1
  __int64 Item; // x0
  __int64 v46; // x1
  int32_t v47; // w23
  _BOOL8 v48; // x0
  __int64 v49; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  int32_t v54; // [xsp+14h] [xbp-FCh]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+38h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v56; // [xsp+50h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+70h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_596D41B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_596D41B = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  memset(&v56, 0, sizeof(v56));
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0);
  if ( !ChildByWarID )
    return 0;
  v7 = ChildByWarID;
  Mine = MapControl_WarInfo__GetMine(ChildByWarID, 0);
  if ( !Mine )
    goto LABEL_71;
  v10 = Mine;
  HasFlag = (void *)WarEntity__HasFlag(Mine, 0x8000000, 0);
  if ( ((unsigned __int8)HasFlag & 1) == 0 )
    goto LABEL_22;
  HasFlag = this->fields.mapControlRootInfo;
  if ( !HasFlag )
    goto LABEL_22;
  HasFlag = MapControl_RootInfo__GetChildByWarID((MapControl_RootInfo_o *)HasFlag, v10->fields.targetId, 0);
  if ( !HasFlag )
    goto LABEL_22;
  v13 = (MapControl_WarInfo_o *)HasFlag;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)HasFlag, 0);
  if ( !Mine )
    goto LABEL_71;
  IsContainPrioredEntity = WarEntity__IsContainPrioredEntity(Mine, 15, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_71:
    sub_2213CDC(Mine, v9);
  HasFlag = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Mine, v10->fields.targetId, 0);
  if ( HasFlag )
  {
    HasFlag = (void *)WarReleaseEntity__IsHide((WarReleaseEntity_o *)HasFlag, 0);
    v17 = (unsigned __int8)HasFlag & 1;
  }
  else
  {
    v17 = 0;
  }
  if ( v17 | IsContainPrioredEntity )
  {
    Mine = MapControl_WarInfo__GetMine(v13, 0);
    if ( !Mine )
      goto LABEL_71;
    HasFlag = QuestTree__GetSpotInfo(this, Mine->fields.parentBlankEarthSpotId, v19);
    v7 = v13;
    if ( HasFlag )
      return *((_DWORD *)HasFlag + 7);
  }
  else
  {
    v7 = v13;
  }
LABEL_22:
  UserReachableMapList = (System_Collections_Generic_List_object__o *)QuestTree__GetUserReachableMapList(
                                                                        (QuestTree_o *)HasFlag,
                                                                        v7,
                                                                        v12);
  v21 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    goto LABEL_71;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    UserReachableMapList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v58 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v58.fields._current )
      sub_2213CDC(0, v22);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v58.fields._current,
                                                              0);
    if ( !SpotList )
      sub_2213CDC(0, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      SpotList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v25 = *(_OWORD *)&v55.fields._list;
    v55.fields._list = 0;
    *(_QWORD *)&v55.fields._index = &v57;
    *(_OWORD *)&v57.fields._list = v25;
    v57.fields._current = v55.fields._current;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v57.fields._current )
        sub_2213CDC(0, v26);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v57.fields._current,
                                                                              0,
                                                                              0);
      if ( !v21 )
        sub_2213CDC(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v21,
        AvailableQuestIdList,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v28, v21, v29);
  v31 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    UserReachableMapList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v58 = v55;
  v18 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v58.fields._current )
      sub_2213CDC(0, v32);
    v33 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v58.fields._current,
                                                         0);
    if ( !v33 )
      sub_2213CDC(0, v34);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      v33,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v57 = v55;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v35 )
        break;
      current = (MapControl_SpotInfo_o *)v57.fields._current;
      if ( !v57.fields._current )
        sub_2213CDC(v35, v36);
      if ( HIDWORD(v57.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_2213CDC(0, v39);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0) )
          continue;
      }
      v40 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0);
      if ( !v40 )
        sub_2213CDC(0, v41);
      v54 = v18;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v55,
        v40,
        (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v42 = 0;
      v56 = (System_Collections_Generic_List_Enumerator_int__o)v55;
      v55.fields._list = 0;
      *(_QWORD *)&v55.fields._index = &v56;
      while ( 1 )
      {
        v43 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v56,
                (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v43 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_2213CDC(v43, v44);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 v56.fields._current,
                 (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v47 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v31 )
            sub_2213CDC(Item, v46);
          v48 = System_Collections_Generic_List_int___Contains(
                  v31,
                  Item,
                  (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v48 )
          {
            ++v42;
          }
          else
          {
            items = v31->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v31->fields._version;
            if ( !items )
              sub_2213CDC(v48, v49);
            size = v31->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v31,
                v47,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v31->fields._size = size + 1;
              items->m_Items[size] = v47;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v56,
        (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v18 = v54 - v42 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return v18;
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestTree__GetQuestCountForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
{
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  MapControl_MapInfo_o *v8; // x20
  System_Collections_Generic_List_int__o *v9; // x21
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  System_Collections_Generic_List_int__o *v19; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  MapControl_SpotInfo_o *v22; // x23
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x1
  int v27; // w20
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 Item; // x0
  __int64 v31; // x1
  int32_t v32; // w24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int v39; // [xsp+4h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_596D41E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_596D41E = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = v40;
    v40.fields._list = 0;
    *(_QWORD *)&v40.fields._index = &v42;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_2213CDC(v12, v13);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0);
        if ( !v9 )
          sub_2213CDC(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v42.fields._current )
          sub_2213CDC(v12, v13);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
    v19 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
LABEL_49:
      sub_2213CDC(SpotList, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v39 = 0;
    v42 = v40;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v20 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v39;
        return (int)MapInfoByMapID;
      }
      v22 = (MapControl_SpotInfo_o *)v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_2213CDC(v20, v21);
LABEL_22:
        if ( v22->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_2213CDC(0, v24);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v22->fields.spotId, 0) )
        {
LABEL_25:
          v25 = MapControl_SpotInfo__GetAvailableQuestIdList(v22, 1, 0);
          if ( !v25 )
            sub_2213CDC(0, v26);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            v25,
            (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v27 = 0;
          v41 = (System_Collections_Generic_List_Enumerator_int__o)v40;
          v40.fields._list = 0;
          *(_QWORD *)&v40.fields._index = &v41;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v41,
                    (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v28 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_2213CDC(v28, v29);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     v41.fields._current,
                     (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v32 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v19 )
                sub_2213CDC(Item, v31);
              v33 = System_Collections_Generic_List_int___Contains(
                      v19,
                      Item,
                      (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( v33 )
              {
                ++v27;
              }
              else
              {
                items = v19->fields._items;
                v36 = Method_System_Collections_Generic_List_int__Add__;
                ++v19->fields._version;
                if ( !items )
                  sub_2213CDC(v33, v34);
                size = v19->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v32,
                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v19->fields._size = size + 1;
                  items->m_Items[size] = v32;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v41,
            (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v39 = v39 - v27 + v22->fields.questCount;
        }
      }
      else
      {
        if ( !v42.fields._current )
          sub_2213CDC(v20, v21);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
          goto LABEL_22;
      }
    }
  }
  return (int)MapInfoByMapID;
}


MapControl_QuestInfo_o *QuestTree__GetQuestInfo(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass28_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_596D419 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_2213A60(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass28_0__GetQuestInfo_b__0__);
    sub_2213A60(&QuestTree___c__DisplayClass28_0_TypeInfo);
    byte_596D419 = 1;
  }
  v5 = (QuestTree___c__DisplayClass28_0_o *)sub_2213CCC(QuestTree___c__DisplayClass28_0_TypeInfo);
  QuestTree___c__DisplayClass28_0___ctor(v5, 0);
  if ( !v5
    || (allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v5->fields.questId = questId,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass28_0__GetQuestInfo_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x0
  _BOOL8 v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *current; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  __int64 v21; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v22; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596D431 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_596D431 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_2213CDC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    allQuestInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v21 = 0;
  v22 = &v23;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_2213CDC(v8, 0);
    if ( *(_DWORD *)((char *)&v23.fields._current->klass + (unsigned __int64)&dword_40) == warId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v17 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v8, current);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v19[4] = (Il2CppClass *)current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)current, v9, v10, v11, v12, v13, v14);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596D41D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D41D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0);
}


MapControl_SpotInfo_o *QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass26_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allSpotInfoList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_596D417 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_2213A60(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass26_0__GetSpotInfo_b__0__);
    sub_2213A60(&QuestTree___c__DisplayClass26_0_TypeInfo);
    byte_596D417 = 1;
  }
  v5 = (QuestTree___c__DisplayClass26_0_o *)sub_2213CCC(QuestTree___c__DisplayClass26_0_TypeInfo);
  QuestTree___c__DisplayClass26_0___ctor(v5, 0);
  if ( !v5
    || (allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v5->fields.spotId = spotId,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass26_0__GetSpotInfo_b__0__,
          0),
        !allSpotInfoList) )
  {
    sub_2213CDC(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *QuestTree__GetUserReachableMapList(
        QuestTree_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v4; // x20
  WarEntity_o *Mine; // x0
  __int64 mapId; // x1
  System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x22
  System_Collections_Generic_List_int__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x21
  QuestTree___c_c *v20; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__34_0; // x23
  Il2CppObject *v23; // x24
  struct QuestTree___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  System_Predicate_object__o *v35; // x21

  if ( (byte_596D41C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_2213A60(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestTree___c__GetUserReachableMapList_b__34_0__);
    sub_2213A60(&Method_QuestTree___c__DisplayClass34_0__GetUserReachableMapList_b__1__);
    sub_2213A60(&QuestTree___c__DisplayClass34_0_TypeInfo);
    sub_2213A60(&QuestTree___c_TypeInfo);
    byte_596D41C = 1;
  }
  v4 = sub_2213CCC(QuestTree___c__DisplayClass34_0_TypeInfo);
  QuestTree___c__DisplayClass34_0___ctor((QuestTree___c__DisplayClass34_0_o *)v4, 0);
  if ( !warInfo )
    goto LABEL_28;
  mapInfoList = warInfo->fields.mapInfoList;
  if ( !MapControl_WarInfo__IsMultiMap(warInfo, 0) )
    return mapInfoList;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0);
  if ( !Mine )
    goto LABEL_28;
  BaseMap = WarEntity__GetBaseMap(Mine, 0);
  Map = MapControl_WarInfo__GetMap(warInfo, BaseMap, 0);
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0);
  v11 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !OpenedButtons )
    goto LABEL_28;
  v19 = *(System_Collections_Generic_List_int__o **)(v4 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v20 = QuestTree___c_TypeInfo;
    if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, mapId, v18);
      v20 = QuestTree___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__34_0 = (System_Func_object__int__o *)static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, mapId, v18);
        static_fields = QuestTree___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__34_0, v23, Method_QuestTree___c__GetUserReachableMapList_b__34_0__, 0);
      v24 = QuestTree___c_TypeInfo->static_fields;
      v24->__9__34_0 = (struct System_Func_MapButtonEntity__int__o *)_9__34_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__34_0, (int32_t)_9__34_0, v25, v26, v27, v28, v29, v30);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__34_0,
                            (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v19 )
    {
      System_Collections_Generic_List_int___AddRange(
        v19,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_2213CDC(Mine, mapId);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v19 )
    goto LABEL_28;
  items = v19->fields._items;
  mapId = (unsigned int)Map->fields.mapId;
  v33 = Method_System_Collections_Generic_List_int__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v19->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      mapId,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    items->m_Items[size] = mapId;
  }
LABEL_26:
  v35 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v35,
    (Il2CppObject *)v4,
    Method_QuestTree___c__DisplayClass34_0__GetUserReachableMapList_b__1__,
    0);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v35,
                                                                    (const MethodInfo_448436C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass38_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x20
  System_Predicate_object__o *v9; // x19
  Il2CppObject *v10; // x0

  if ( (byte_596D420 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_2213A60(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass38_0__GetWarID_ByQuestID_b__0__);
    sub_2213A60(&QuestTree___c__DisplayClass38_0_TypeInfo);
    byte_596D420 = 1;
  }
  v5 = (QuestTree___c__DisplayClass38_0_o *)sub_2213CCC(QuestTree___c__DisplayClass38_0_TypeInfo);
  QuestTree___c__DisplayClass38_0___ctor(v5, 0);
  if ( !v5
    || (allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v5->fields.questId = questId,
        v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass38_0__GetWarID_ByQuestID_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_2213CDC(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v10 )
    LODWORD(v10) = v10[4].klass;
  return (int)v10;
}


System_Collections_Generic_List_MapControl_WarInfo__o *QuestTree__GetWarInfoAll(
        QuestTree_o *this,
        const MethodInfo *method)
{
  return this->fields.allWarInfoList;
}


System_Collections_Generic_List_MapControl_WarInfo__o *QuestTree__GetWarInfoAll_OrderMaterial(
        QuestTree_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestTree___c_c *v4; // x0
  struct System_Collections_Generic_List_MapControl_WarInfo__o *allWarInfoList; // x19
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__19_0; // x20
  Il2CppObject *v8; // x21
  struct QuestTree___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_596D413 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_MapControl_WarInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_2213A60(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_2213A60(&Method_QuestTree___c__GetWarInfoAll_OrderMaterial_b__19_0__);
    sub_2213A60(&QuestTree___c_TypeInfo);
    byte_596D413 = 1;
  }
  v4 = QuestTree___c_TypeInfo;
  allWarInfoList = this->fields.allWarInfoList;
  if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method, v2);
    v4 = QuestTree___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__19_0 = (System_Func_object__int__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = QuestTree___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__19_0, v8, Method_QuestTree___c__GetWarInfoAll_OrderMaterial_b__19_0__, 0);
    v9 = QuestTree___c_TypeInfo->static_fields;
    v9->__9__19_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__19_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__19_0, (int32_t)_9__19_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)allWarInfoList,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_MapControl_WarInfo__int___);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v16,
                                                                    (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
}


System_Collections_Generic_List_MapControl_WarInfo__o *QuestTree__GetWarInfoAll_OrderReverse(
        QuestTree_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596D412 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___91679824);
    sub_2213A60(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_596D412 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v4,
    allWarInfoList,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___91679824);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_4485554 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v4;
}


MapControl_WarInfo_o *QuestTree__GetWarInfoByEventID(QuestTree_o *this, int32_t eventId, const MethodInfo *method)
{
  MapControl_WarInfo_o *result; // x0

  result = (MapControl_WarInfo_o *)this->fields.mapControlRootInfo;
  if ( result )
    return MapControl_RootInfo__GetChildByEventID((MapControl_RootInfo_o *)result, eventId, 0);
  return result;
}


System_Collections_IEnumerator_o *QuestTree__Init(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596D414 & 1) == 0 )
  {
    sub_2213A60(&QuestTree__Init_d__20_TypeInfo);
    byte_596D414 = 1;
  }
  v5 = sub_2213CCC(QuestTree__Init_d__20_TypeInfo);
  QuestTree__Init_d__20___ctor((QuestTree__Init_d__20_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)endCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestTree__InitInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x8
  int32_t v8; // w2
  int v9; // w9
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *allSpotRoadInfoList; // x8
  int32_t v11; // w2
  int v12; // w9
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x8
  int32_t v14; // w2
  int v15; // w9
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x8
  int32_t v17; // w2
  int v18; // w9
  struct System_Collections_Generic_List_MapControl_WarInfo__o *allWarInfoList; // x8
  int32_t v20; // w2
  int v21; // w9

  if ( (byte_596D42B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_596D42B = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_23;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    goto LABEL_23;
  size = allQuestInfoList->fields._size;
  v6 = allQuestInfoList->fields._version + 1;
  allQuestInfoList->fields._size = 0;
  allQuestInfoList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allQuestInfoList->fields._items, 0, size, 0);
  allSpotInfoList = this->fields.allSpotInfoList;
  if ( !allSpotInfoList )
    goto LABEL_23;
  v8 = allSpotInfoList->fields._size;
  v9 = allSpotInfoList->fields._version + 1;
  allSpotInfoList->fields._size = 0;
  allSpotInfoList->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotInfoList->fields._items, 0, v8, 0);
  allSpotRoadInfoList = this->fields.allSpotRoadInfoList;
  if ( !allSpotRoadInfoList )
    goto LABEL_23;
  v11 = allSpotRoadInfoList->fields._size;
  v12 = allSpotRoadInfoList->fields._version + 1;
  allSpotRoadInfoList->fields._size = 0;
  allSpotRoadInfoList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotRoadInfoList->fields._items, 0, v11, 0);
  allMapGimmickInfoList = this->fields.allMapGimmickInfoList;
  if ( !allMapGimmickInfoList )
    goto LABEL_23;
  v14 = allMapGimmickInfoList->fields._size;
  v15 = allMapGimmickInfoList->fields._version + 1;
  allMapGimmickInfoList->fields._size = 0;
  allMapGimmickInfoList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)allMapGimmickInfoList->fields._items, 0, v14, 0);
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    goto LABEL_23;
  v17 = allMapInfoList->fields._size;
  v18 = allMapInfoList->fields._version + 1;
  allMapInfoList->fields._size = 0;
  allMapInfoList->fields._version = v18;
  if ( v17 >= 1 )
    System_Array__Clear((System_Array_o *)allMapInfoList->fields._items, 0, v17, 0);
  allWarInfoList = this->fields.allWarInfoList;
  if ( !allWarInfoList )
LABEL_23:
    sub_2213CDC(mapControlRootInfo, method);
  v20 = allWarInfoList->fields._size;
  v21 = allWarInfoList->fields._version + 1;
  allWarInfoList->fields._size = 0;
  allWarInfoList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)allWarInfoList->fields._items, 0, v20, 0);
}


bool QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596D425 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D425 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_43437100(this, (WarEntity_o *)entity, v7);
}


bool QuestTree__IsActiveEventWar_43437100(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t id; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  WarReleaseEntity_o *v11; // x21
  bool v12; // w20
  int64_t Time; // x21
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v16; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  int64_t v18; // x10
  int64_t v19; // t1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_596D426 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&long___TypeInfo);
    this = (QuestTree_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596D426 = 1;
  }
  entity = 0;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, warEnt, method);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !this )
    goto LABEL_33;
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)this, id, 0);
  if ( OpenEntity )
  {
    v11 = OpenEntity;
    if ( WarReleaseEntity__IsOpen(OpenEntity, 0) )
      return 1;
    if ( WarReleaseEntity__IsAnnouncement(v11, 0) || WarReleaseEntity__IsClose(v11, 0) )
      return 0;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  Time = NetworkManager__getTime(0);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v14);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_33;
    v12 = Time < (__int64)entity[6].klass;
  }
  else
  {
    v12 = 0;
  }
  this = (QuestTree_o *)sub_2213B20(long___TypeInfo, 1);
  if ( !entity || !this )
LABEL_33:
    sub_2213CDC(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_2213CE4(this);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v16 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v19 = (int64_t)*p_allSpotInfoList++;
      v18 = v19;
      if ( v19 > Time && v4->fields.forceUpdateTime > v18 )
        v4->fields.forceUpdateTime = v18;
      --v16;
    }
    while ( v16 );
  }
  return v12;
}


bool QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *v6; // x20
  WarEntity_o *Mine; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v12; // x21
  WarEntity_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_596D424 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596D424 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  mapControlRootInfo = (MapControl_RootInfo_o *)MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0);
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  v6 = (MapControl_WarInfo_o *)mapControlRootInfo;
  if ( MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)mapControlRootInfo, 0) )
  {
    Mine = MapControl_WarInfo__GetMine(v6, 0);
    if ( !Mine )
      goto LABEL_25;
    if ( WarEntity__IsGrandBoard(Mine, 0) )
    {
      Mine = MapControl_WarInfo__GetMine(v6, 0);
      if ( !Mine )
        goto LABEL_25;
      if ( !WarEntity__IsContainPrioredEntity(Mine, 15, 0) )
      {
        LOBYTE(mapControlRootInfo) = 1;
        return (char)mapControlRootInfo;
      }
    }
  }
  LODWORD(mapControlRootInfo) = MapControl_WarInfo__GetStatus(v6, 0);
  if ( !(_DWORD)mapControlRootInfo )
    return (char)mapControlRootInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_25:
    sub_2213CDC(Mine, v8);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Mine, warId, 0);
  if ( OpenEntity )
  {
    v12 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0) || WarReleaseEntity__IsClose(v12, 0) )
      goto LABEL_18;
  }
  if ( MapControl_WarInfo__IsClosedWar(v6, 0) )
    goto LABEL_18;
  mapControlRootInfo = (MapControl_RootInfo_o *)MapControl_WarInfo__GetMine(v6, 0);
  if ( !mapControlRootInfo )
    return (char)mapControlRootInfo;
  v13 = (WarEntity_o *)mapControlRootInfo;
  if ( WarEntity__IsEvent((WarEntity_o *)mapControlRootInfo, 0) && !QuestTree__IsActiveEventWar_43437100(this, v13, v14) )
LABEL_18:
    LOBYTE(mapControlRootInfo) = 0;
  else
    LOBYTE(mapControlRootInfo) = QuestTree__IsWarOpen(this, v13->fields.id, v14);
  return (char)mapControlRootInfo;
}


bool QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  int32_t MonitoringDataMasterRevision; // w21
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t forceUpdateTime; // x19

  if ( (byte_596D415 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D415 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  if ( MonitoringDataMasterRevision != DataManager__getRevisionTotal((DataManager_o *)Instance, 0) )
    return 1;
  forceUpdateTime = this->fields.forceUpdateTime;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  return forceUpdateTime <= NetworkManager__getTime(0);
}


// local variable allocation has failed, the output may be wrong!
bool QuestTree__IsNextSpotForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
{
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  bool v12; // w21
  Il2CppObject *current; // x22
  SpotEntity_o *Mine; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596D41F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_596D41F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return 0;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0);
  if ( !SpotList )
    sub_2213CDC(0, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    SpotList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v18.fields._current;
    if ( layer < 1 )
    {
      if ( !v18.fields._current )
        sub_2213CDC(v10, v11);
      goto LABEL_12;
    }
    if ( !v18.fields._current )
      sub_2213CDC(v10, v11);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v18.fields._current, 0) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v15)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0) )
      {
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  return v12;
}


bool QuestTree__IsQuestTreeUpdateFinished(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.isQuestTreeUpdateFinished;
}


bool QuestTree__IsSpotSatisfyingActiveCond(QuestTree_o *this, SpotEntity_o *spotEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_2213CDC(this, 0);
  return QuestTree__CheckSpotCond_43442480(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.activeCondType,
           spotEnt->fields.activeTargetId,
           spotEnt->fields.activeTargetValue,
           v3);
}


bool QuestTree__IsSpotSatisfyingDisplayCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        bool checkBeforeClearQuest,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x6
  const MethodInfo *v8; // x6

  if ( !spotEnt )
    sub_2213CDC(this, 0);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0))
      && QuestTree__CheckSpotCond_43442480(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_43442480(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType2,
           spotEnt->fields.dispTargetId2,
           spotEnt->fields.dispTargetValue2,
           v8);
}


bool QuestTree__IsUseCache(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.isUseCache;
}


bool QuestTree__IsWarNew(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *QuestInfoByWarId; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  bool v9; // w19
  Il2CppObject *current; // x22
  clsQuestCheck_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596D432 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_596D432 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_2213CDC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestInfoByWarId,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  do
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v9 = v7;
    if ( !v7 )
      break;
    current = v14.fields._current;
    v11 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_2213CDC(v11, v12);
    if ( !v11 )
      sub_2213CDC(0, v12);
  }
  while ( clsQuestCheck__mfCheck_IsQuestNew(v11, *(_DWORD *)((char *)&word_10 + (_QWORD)current), 0) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return !v9;
}


// local variable allocation has failed, the output may be wrong!
bool QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  clsQuestCheck_o *QuestInfoByWarId; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  _BOOL8 v10; // x0
  __int64 v11; // x1
  char v12; // w19
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  __int64 v16; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v17; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_596D421 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_596D421 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_20;
  v7 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0);
  if ( v7 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
  if ( !QuestInfoByWarId )
LABEL_20:
    sub_2213CDC(QuestInfoByWarId, v6);
  if ( clsQuestCheck__IsWarClear(QuestInfoByWarId, warId, 0)
    || (mapControlRootInfo = v4->fields.mapControlRootInfo) != 0
    && (ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0)) != 0
    && MapControl_WarInfo__GetStatus(ChildByWarID, 0) != 2 )
  {
    v12 = 1;
    return v12 & 1;
  }
LABEL_5:
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v9);
  if ( !QuestInfoByWarId )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v16 = 0;
  v17 = &v18;
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    if ( !v18.fields._current )
      sub_2213CDC(v10, v11);
  }
  while ( *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&qword_20) != 1 );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 & 1;
}


void QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v6; // x21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_String_o *name; // x1
  int32_t mapId; // w8
  __int64 v17; // x1
  __int64 v18; // x2
  long double v19; // q0
  __int64 v20; // x0
  __int64 v21; // x0
  UnityEngine_Object_o *v22; // x22
  bool IsExistCommand; // w21
  int32_t v24; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_596D427 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&SpotEntity_TypeInfo);
    byte_596D427 = 1;
  }
  v6 = sub_2213CCC(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  name = blankEarthSpotEnt->fields.name;
  mapId = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 32) = name;
  *(_DWORD *)(v6 + 24) = mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)name, v9, v10, v11, v12, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_224B908(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
    v21 = sub_224B908(v19);
  v22 = **(UnityEngine_Object_o ***)(v21 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_2213CDC(Instance, v8);
  v24 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v24, 0, 0);
  spotInfo->fields.dispType = IsOpenForQAA;
  spotInfo->fields.touchType = IsOpenForQAA;
}


void QuestTree__SetupMapGimmickInfo(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o **mapGimmickInfo,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  MapControl_MapGimmickInfo_o *v6; // x8
  int v7; // w9

  v4 = QuestTree__CheckMapGimmickCond_43439552(this, *mapGimmickInfo, method);
  v6 = *mapGimmickInfo;
  if ( !v4 )
  {
    if ( v6 )
    {
      v7 = 0;
      goto LABEL_6;
    }
LABEL_7:
    sub_2213CDC(v4, v5);
  }
  if ( !v6 )
    goto LABEL_7;
  v7 = 1;
LABEL_6:
  v6->fields.dispType = v7;
}


void QuestTree__SetupSpotInfo(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        MapControl_SpotInfo_o **spotInfo,
        const MethodInfo *method)
{
  _BOOL8 IsSpotSatisfyingDisplayCond; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  MapControl_SpotInfo_o *v10; // x8
  __int64 v11; // d0

  IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingDisplayCond(this, spotEnt, 1, method);
  if ( IsSpotSatisfyingDisplayCond )
  {
    IsSpotSatisfyingDisplayCond = QuestTree__IsSpotSatisfyingActiveCond(this, spotEnt, v9);
    v10 = *spotInfo;
    if ( IsSpotSatisfyingDisplayCond )
    {
      v11 = 0x100000001LL;
      if ( !v10 )
LABEL_10:
        sub_2213CDC(IsSpotSatisfyingDisplayCond, v8);
    }
    else
    {
      if ( !v10 )
        goto LABEL_10;
      v11 = 0x100000002LL;
    }
  }
  else
  {
    v10 = *spotInfo;
    if ( !*spotInfo )
      goto LABEL_10;
    v11 = 0;
  }
  *(_QWORD *)&v10->fields.dispType = v11;
}


void QuestTree__SetupSpotRoadInfo(
        QuestTree_o *this,
        SpotRoadEntity_o *spotRoadEnt,
        MapControl_SpotRoadInfo_o **spotRoadInfo,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int32_t id; // w22
  QuestTree_o *v8; // x20
  const MethodInfo *v9; // x6
  const MethodInfo *v10; // x6
  MapControl_SpotRoadInfo_o *v11; // x8
  int v12; // w9

  if ( !spotRoadEnt )
    goto LABEL_12;
  id = spotRoadEnt->fields.id;
  v8 = this;
  this = (QuestTree_o *)QuestTree__CheckSpotCond_43442480(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_43442480(
                                v8,
                                1,
                                id,
                                spotRoadEnt->fields.dispCondType2,
                                spotRoadEnt->fields.dispTargetId2,
                                spotRoadEnt->fields.dispTargetValue2,
                                v9),
        ((unsigned __int8)this & 1) == 0) )
  {
    v11 = *spotRoadInfo;
    if ( *spotRoadInfo )
    {
      v12 = 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_2213CDC(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_43442480(
                          v8,
                          1,
                          id,
                          spotRoadEnt->fields.activeCondType,
                          spotRoadEnt->fields.activeTargetId,
                          spotRoadEnt->fields.activeTargetValue,
                          v10);
  v11 = *spotRoadInfo;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v11 )
    {
      v12 = 2;
      goto LABEL_9;
    }
    goto LABEL_12;
  }
  if ( !v11 )
    goto LABEL_12;
  v12 = 1;
LABEL_9:
  v11->fields.dispType = v12;
}


void QuestTree__UpdateForceUpdateTime(
        QuestTree_o *this,
        int64_t nowTime,
        System_Int64_array *times,
        const MethodInfo *method)
{
  __int64 max_length; // x8
  int64_t *m_Items; // x9
  int64_t v6; // x10
  int64_t v7; // t1

  if ( !times )
    sub_2213CDC(this, nowTime);
  if ( (int)times->max_length >= 1 )
  {
    max_length = (unsigned int)times->max_length;
    m_Items = times->m_Items;
    do
    {
      v7 = *m_Items++;
      v6 = v7;
      if ( v7 > nowTime && this->fields.forceUpdateTime > v6 )
        this->fields.forceUpdateTime = v6;
      --max_length;
    }
    while ( max_length );
  }
}


void QuestTree__UpdateMonitoringValue(QuestTree_o *this, const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596D416 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D416 = 1;
  }
  v3 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance(v3);
  if ( !Instance )
    sub_2213CDC(0, v5);
  this->fields.MonitoringDataMasterRevision = DataManager__getRevisionTotal((DataManager_o *)Instance, 0);
}


void QuestTree__UpdateQuestInfo(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v5; // x20
  QuestEntity_o *Mine; // x0
  QuestEntity_o *v7; // x21
  int32_t WarId; // w3
  const MethodInfo *v9; // x4

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( QuestInfo )
  {
    v5 = QuestInfo;
    Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0);
    if ( Mine )
    {
      v7 = Mine;
      WarId = QuestEntity__GetWarId(Mine, 0);
      QuestTree__CheckQuestOpen(this, v7, v5, WarId, v9);
    }
  }
}


clsQuestCheck_o *QuestTree__get_QuestCheckInst(QuestTree_o *this, const MethodInfo *method)
{
  if ( (byte_596D411 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_596D411 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596D428 & 1) == 0 )
  {
    sub_2213A60(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_TypeInfo);
    byte_596D428 = 1;
  }
  v5 = sub_2213CCC(QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)endCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *QuestTree__mfBaseTreeUpdateWithOpenCheck(
        QuestTree_o *this,
        int32_t targetWarId,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596D429 & 1) == 0 )
  {
    sub_2213A60(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_TypeInfo);
    byte_596D429 = 1;
  }
  v7 = sub_2213CCC(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *)v7, 0, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 72), (int32_t)endCallback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


MapControl_RootInfo_o *QuestTree__mfGetMapCtrlP(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.mapControlRootInfo;
}


MapControl_MapInfo_o *QuestTree__mfGetMapInfoByMapID(QuestTree_o *this, int32_t mapId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass32_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_596D41A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_2213A60(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass32_0__mfGetMapInfoByMapID_b__0__);
    sub_2213A60(&QuestTree___c__DisplayClass32_0_TypeInfo);
    byte_596D41A = 1;
  }
  v5 = (QuestTree___c__DisplayClass32_0_o *)sub_2213CCC(QuestTree___c__DisplayClass32_0_TypeInfo);
  QuestTree___c__DisplayClass32_0___ctor(v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  v5->fields.mapId = mapId;
  if ( !allMapInfoList )
    return 0;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass32_0__mfGetMapInfoByMapID_b__0__,
    0);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *QuestTree__mfGetQuestInfoListP(
        QuestTree_o *this,
        const MethodInfo *method)
{
  return this->fields.allQuestInfoList;
}


WarEntity_o *QuestTree__mfGetWarEntityByWarID(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0

  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( mapControlRootInfo && (ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0)) != 0 )
    return MapControl_WarInfo__GetMine(ChildByWarID, 0);
  else
    return 0;
}


MapControl_WarInfo_o *QuestTree__mfGetWarInfoByWarID(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_WarInfo_o *result; // x0

  result = (MapControl_WarInfo_o *)this->fields.mapControlRootInfo;
  if ( result )
    return MapControl_RootInfo__GetChildByWarID((MapControl_RootInfo_o *)result, warId, 0);
  return result;
}


void QuestTree__EnumerateBlankEarthSpotInfo_d__49___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestTree__EnumerateBlankEarthSpotInfo_d__49__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *v8; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotEntity_array *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  int32_t max_length; // w10
  BlankEarthSpotEntity_o *v24; // x21
  QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *v25; // x22
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  v8 = this;
  if ( (byte_596D632 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)sub_2213A60(&BlankEarthSpotMaster_TypeInfo);
    byte_596D632 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap2 = v8->fields.__7__wrap2;
    v8->fields.__1__state = -1;
    v20 = _7__wrap2 + 1;
    v8->fields.__7__wrap2 = v20;
  }
  else
  {
    if ( _1__state )
      return 0;
    mapInfo = v8->fields.mapInfo;
    v8->fields.__1__state = -1;
    if ( !mapInfo )
      goto LABEL_21;
    mapId = mapInfo->fields.mapId;
    if ( !*(&BlankEarthSpotMaster_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo, method, v2);
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)v8->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v13 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0);
    v8->fields.__7__wrap1 = v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)&v8->fields.__7__wrap1;
  _7__wrap1 = v8->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v20 < max_length )
  {
    if ( v20 >= (unsigned int)max_length )
      sub_2213CE4(this);
    v24 = _7__wrap1->m_Items[v20];
    if ( v24 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)v8->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v24->fields.id,
                                                                   0);
        if ( _4__this )
        {
          v25 = this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v24, (MapControl_SpotInfo_o *)this, 0);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v25;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_2213A04(p__2__current, (int32_t)v25, v27, v28, v29, v30, v31, v32);
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return 1;
        }
      }
    }
LABEL_21:
    sub_2213CDC(this, method);
  }
  this->klass = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *v10; // x20
  int32_t CurrentManagedThreadId; // w0
  struct QuestTree_o *_4__this; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596D633 & 1) == 0 )
  {
    sub_2213A60(&QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
    byte_596D633 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)sub_2213CCC(QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    v10->fields.__4__this = _4__this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.__4__this,
      (int32_t)_4__this,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v10->fields.mapInfo = _3__mapInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.blankEarthSpotMaster,
    (int32_t)_3__blankEarthSpotMaster,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v10;
}


MapControl_SpotInfo_o *QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__49_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__Init_d__20___ctor(QuestTree__Init_d__20_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__Init_d__20__MoveNext(QuestTree__Init_d__20_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestTree__Init_d__20_o *v3; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  long double v6; // q0
  TerminalPramsManager_c *v7; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  int32_t v9; // w1
  __int64 v11; // x0
  __int64 v12; // x0
  UnityEngine_Object_o *v13; // x20
  struct System_Action_o *endCallback; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  long double v17; // q0
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_Object_o *v20; // x21
  System_Collections_IEnumerator_o *v21; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v3 = this;
  if ( (byte_596D634 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__20_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D634 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_44;
  if ( _4__this->fields.isInit && !QuestTree__IsNeedUpdateQuestTree(_4__this, 0) )
  {
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v6);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_224B908(v6);
    v13 = **(UnityEngine_Object_o ***)(v12 + 184);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
    {
      this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_44;
      QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
      this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !this )
        goto LABEL_44;
      QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
    }
    endCallback = v3->fields.endCallback;
    if ( endCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
        endCallback->fields.method_code,
        endCallback->fields.method);
    return 0;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596D6CA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D6CA = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v7 = TerminalPramsManager_TypeInfo;
  }
  isInvisibleConnectAndLoad = v7->static_fields->isInvisibleConnectAndLoad;
  this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( isInvisibleConnectAndLoad )
  {
    if ( !this )
      goto LABEL_44;
    v9 = 0;
  }
  else
  {
    if ( !this )
      goto LABEL_44;
    v9 = 1;
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, v9, 0);
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
    v18 = sub_224B908(v17);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_224B908(v17);
  v20 = **(UnityEngine_Object_o ***)(v19 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( !UnityEngine_Object__op_Inequality(v20, 0, 0) )
    goto LABEL_43;
  this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !this
    || (QuestAfterAction__Init((QuestAfterAction_o *)this, 0),
        (this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__)) == 0) )
  {
LABEL_44:
    sub_2213CDC(this, method);
  }
  QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
LABEL_43:
  QuestTree__UpdateMonitoringValue(_4__this, 0);
  v21 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v3->fields.endCallback, 0);
  v3->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_2213A04(p__2__current, (int32_t)v21, v23, v24, v25, v26, v27, v28);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
}


Il2CppObject *QuestTree__Init_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__Init_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__Init_d__20__System_Collections_IEnumerator_Reset(
        QuestTree__Init_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestTree__Init_d__20_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestTree__Init_d__20__System_Collections_IEnumerator_get_Current(
        QuestTree__Init_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__Init_d__20__System_IDisposable_Dispose(QuestTree__Init_d__20_o *this, const MethodInfo *method)
{
  ;
}


void QuestTree___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D62D & 1) == 0 )
  {
    sub_2213A60(&QuestTree___c_TypeInfo);
    byte_596D62D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestTree___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestTree___c___GetLatestGrandWarInfo_b__42_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields.warId;
}


bool QuestTree___c___GetLatestGrandWarInfo_b__42_1(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  int32_t warId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_596D62E & 1) == 0 )
  {
    this = (QuestTree___c_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596D62E = 1;
  }
  if ( !info )
    sub_2213CDC(this, info);
  warId = info->fields.warId;
  v5 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, info, method);
    v5 = BalanceConfig_TypeInfo;
  }
  return warId == v5->static_fields->GrandExtra1WarId;
}


int32_t QuestTree___c___GetLatestProgressWarInfo_b__41_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields.warId;
}


int32_t QuestTree___c___GetUserReachableMapList_b__34_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.targetMapId;
}


int32_t QuestTree___c___GetWarInfoAll_OrderMaterial_b__19_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *v,
        const MethodInfo *method)
{
  if ( !v || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(v, 0)) == 0 )
    sub_2213CDC(this, v);
  return WarEntity__GetMaterialPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__47_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0)) == 0) )
  {
    sub_2213CDC(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__47_1(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)QuestEntity__getPriority((QuestEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(a, 0)) == 0) )
  {
    sub_2213CDC(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__48_11(
        QuestTree___c_o *this,
        MapControl_QuestInfo_o *a,
        MapControl_QuestInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)QuestEntity__getPriority((QuestEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_QuestInfo__GetMine(a, 0)) == 0) )
  {
    sub_2213CDC(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__48_2(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0)) == 0
    || (this = (QuestTree___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0)) == 0) )
  {
    sub_2213CDC(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__48_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotId;
}


void QuestTree___c__DisplayClass26_0___ctor(QuestTree___c__DisplayClass26_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass26_0___GetSpotInfo_b__0(
        QuestTree___c__DisplayClass26_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass27_0___ctor(QuestTree___c__DisplayClass27_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass27_0___GetMapGimmickInfo_b__0(
        QuestTree___c__DisplayClass27_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass28_0___ctor(QuestTree___c__DisplayClass28_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass28_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass28_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.questId == this->fields.questId;
}


void QuestTree___c__DisplayClass32_0___ctor(QuestTree___c__DisplayClass32_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass32_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass32_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass34_0___ctor(QuestTree___c__DisplayClass34_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass34_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass34_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass34_0_o *v4; // x20

  v4 = this;
  if ( (byte_596D62F & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass34_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596D62F = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass34_0_o *)v4->fields.reachableMapIds) == 0 )
    sub_2213CDC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
}


void QuestTree___c__DisplayClass38_0___ctor(QuestTree___c__DisplayClass38_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass38_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass38_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass38_0_o *v3; // x19

  if ( !x || (v3 = this, (this = (QuestTree___c__DisplayClass38_0_o *)MapControl_QuestInfo__GetMine(x, 0)) == 0) )
    sub_2213CDC(this, x);
  return this->fields.questId == v3->fields.questId;
}


void QuestTree___c__DisplayClass47_0___ctor(QuestTree___c__DisplayClass47_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass47_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void QuestTree___c__DisplayClass48_0___ctor(QuestTree___c__DisplayClass48_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass48_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.id == this->fields.targetWarId;
}


void QuestTree___c__DisplayClass48_1___ctor(QuestTree___c__DisplayClass48_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass48_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.warId == this->fields.warId;
}


bool QuestTree___c__DisplayClass48_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass48_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


bool QuestTree___c__DisplayClass48_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass48_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass48_2___ctor(QuestTree___c__DisplayClass48_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass48_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass48_3___ctor(QuestTree___c__DisplayClass48_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass48_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass48_3_o *v4; // x20

  v4 = this;
  if ( (byte_596D630 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass48_3_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_596D630 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass48_3_o *)v4->fields.spotIdHashSet) == 0 )
    sub_2213CDC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void QuestTree___c__DisplayClass48_4___ctor(QuestTree___c__DisplayClass48_4_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass48_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void QuestTree___c__DisplayClass48_5___ctor(QuestTree___c__DisplayClass48_5_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass48_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass48_6___ctor(QuestTree___c__DisplayClass48_6_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass48_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass48_6_o *v4; // x20

  v4 = this;
  if ( (byte_596D631 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass48_6_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596D631 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass48_6_o *)v4->fields.spotInfoList) == 0 )
    sub_2213CDC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool QuestTree___c__DisplayClass48_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass48_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool QuestTree___c__DisplayClass48_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass48_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.questId == this->fields.questId;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__47___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  int32_t _1__state; // w8
  struct QuestTree_o *_4__this; // x20
  __int64 dataManager_5__2; // x0
  int32_t warIdx_5__18; // w8
  struct System_Action_o *v8; // x8
  Il2CppObject *Instance; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *MasterData_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppObject *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  Il2CppObject *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  Il2CppObject *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  Il2CppObject *v86; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  Il2CppObject *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  System_Collections_Generic_Dictionary_int__object__o *v100; // x21
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  System_Object_array *Entitys; // x0
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  __int64 v114; // x1
  __int64 v115; // x2
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v118; // w8
  int32_t questIdx_5__25; // w8
  struct WarEntity_array *v120; // x9
  WarEntity_o *v121; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v123; // x29
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  int64_t nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusEntity_o *v135; // x23
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  int64_t v137; // x23
  Il2CppObject *v138; // x8
  unsigned int v139; // w9
  __int64 v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  __int64 v143; // x8
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  __int64 v149; // x28
  unsigned __int64 v150; // x21
  __int64 v151; // x8
  int32_t v152; // w24
  System_String_o *v153; // x2
  System_String_o *v154; // x3
  int32_t v155; // w4
  int32_t v156; // w5
  bool v157; // w6
  bool v158; // w7
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v161; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v163; // x23
  Il2CppClass **v164; // x0
  __int64 v165; // x19
  __int64 v166; // x25
  __int64 v167; // x26
  __int64 v168; // x22
  __int64 v169; // x8
  unsigned int v170; // w8
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  __int64 v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  __int64 v180; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  __int64 v182; // x19
  __int64 v183; // x25
  __int64 v184; // x26
  __int64 v185; // x22
  __int64 v186; // x8
  unsigned int v187; // w8
  System_String_o *v188; // x2
  System_String_o *v189; // x3
  int32_t v190; // w4
  int32_t v191; // w5
  bool v192; // w6
  bool v193; // w7
  __int64 v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  __int64 v197; // x8
  __int64 v198; // x19
  __int64 v199; // x24
  __int64 v200; // x22
  __int64 v201; // x8
  System_String_o *v202; // x2
  System_String_o *v203; // x3
  int32_t v204; // w4
  int32_t v205; // w5
  bool v206; // w6
  bool v207; // w7
  __int64 v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  __int64 v211; // x8
  Il2CppObject **p__2__current; // x26
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__47_0; // x22
  Il2CppObject *v216; // x23
  struct QuestTree___c_StaticFields *v217; // x0
  System_String_o *v218; // x2
  System_String_o *v219; // x3
  int32_t v220; // w4
  int32_t v221; // w5
  bool v222; // w6
  bool v223; // w7
  Il2CppObject *v224; // x22
  struct QuestTree___c__DisplayClass47_0_o **p__8__1; // x21
  System_String_o *v226; // x2
  System_String_o *v227; // x3
  int32_t v228; // w4
  int32_t v229; // w5
  bool v230; // w6
  bool v231; // w7
  int64_t v232; // x22
  MapControl_WarInfo_o *v233; // x23
  System_String_o *v234; // x2
  System_String_o *v235; // x3
  int32_t v236; // w4
  int32_t v237; // w5
  bool v238; // w6
  bool v239; // w7
  MapControl_MapInfo_o *v240; // x22
  System_String_o *v241; // x2
  System_String_o *v242; // x3
  int32_t v243; // w4
  int32_t v244; // w5
  bool v245; // w6
  bool v246; // w7
  MapControl_SpotInfo_o *v247; // x22
  System_String_o *v248; // x2
  System_String_o *v249; // x3
  int32_t v250; // w4
  int32_t v251; // w5
  bool v252; // w6
  bool v253; // w7
  WarEntity_o *v254; // x22
  System_String_o *v255; // x2
  System_String_o *v256; // x3
  int32_t v257; // w4
  int32_t v258; // w5
  bool v259; // w6
  bool v260; // w7
  Il2CppObject *v261; // x0
  System_String_o *v262; // x2
  System_String_o *v263; // x3
  int32_t v264; // w4
  int32_t v265; // w5
  bool v266; // w6
  bool v267; // w7
  __int64 v268; // x1
  __int64 v269; // x2
  __int64 v270; // x2
  OptionManager_c *v271; // x0
  bool v272; // zf
  int32_t v273; // w8
  __int64 v274; // x2
  QuestEntity_o *v275; // x22
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  __int64 v277; // x21
  bool v278; // w0
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass47_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v281; // x25
  System_Predicate_object__o *_9__2; // x26
  System_String_o *v283; // x2
  System_String_o *v284; // x3
  int32_t v285; // w4
  int32_t v286; // w5
  bool v287; // w6
  bool v288; // w7
  Il2CppObject *v289; // x0
  System_String_o *v290; // x2
  System_String_o *v291; // x3
  int32_t v292; // w4
  int32_t v293; // w5
  bool v294; // w6
  bool v295; // w7
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_String_o *v298; // x2
  System_String_o *v299; // x3
  int32_t v300; // w4
  int32_t v301; // w5
  bool v302; // w6
  bool v303; // w7
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  System_String_o *v305; // x2
  System_String_o *v306; // x3
  int32_t v307; // w4
  int32_t v308; // w5
  bool v309; // w6
  bool v310; // w7
  WarEntity_o *Mine; // x0
  System_String_o *v312; // x2
  System_String_o *v313; // x3
  int32_t v314; // w4
  int32_t v315; // w5
  bool v316; // w6
  bool v317; // w7
  int v318; // w25
  System_String_o *v319; // x2
  System_String_o *v320; // x3
  int32_t v321; // w4
  int32_t v322; // w5
  bool v323; // w6
  bool v324; // w7
  __int64 v325; // x24
  int invoker_method_high; // w8
  struct MapControl_SpotInfo_o *spotInfo_5__22; // x1
  System_String_o *v328; // x2
  System_String_o *v329; // x3
  int32_t v330; // w4
  int32_t v331; // w5
  bool v332; // w6
  bool v333; // w7
  WarEntity_o *warEnt_5__23; // x8
  bool IsStartTypeQuest; // w8
  int v336; // w19
  __int64 v337; // x2
  Il2CppObject *Master_object; // x25
  struct MapControl_SpotInfo_o *v339; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v341; // x8
  struct MapControl_MapInfo_o *v342; // x9
  bool v343; // w8
  QuestPhaseMaster_o *questPhaseMaster_5__7; // x8
  System_String_o *v345; // x2
  System_String_o *v346; // x3
  int32_t v347; // w4
  int32_t v348; // w5
  bool v349; // w6
  bool v350; // w7
  __int64 v351; // x19
  __int64 v352; // x21
  __int64 v353; // x22
  __int64 v354; // x8
  __int64 v355; // x8
  _QWORD *v356; // x9
  __int64 v357; // x10
  __int64 v358; // x8
  System_String_o *v359; // x3
  int32_t v360; // w4
  int32_t v361; // w5
  bool v362; // w6
  bool v363; // w7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  struct QuestTree___c_StaticFields *v365; // x8
  System_Comparison_T__o *_9__47_1; // x22
  Il2CppObject *v367; // x23
  struct QuestTree___c_StaticFields *v368; // x0
  System_String_o *v369; // x2
  System_String_o *v370; // x3
  int32_t v371; // w4
  int32_t v372; // w5
  bool v373; // w6
  bool v374; // w7
  System_String_o *v375; // x2
  System_String_o *v376; // x3
  int32_t v377; // w4
  int32_t v378; // w5
  bool v379; // w6
  bool v380; // w7
  System_String_o *v381; // x2
  System_String_o *v382; // x3
  int32_t v383; // w4
  int32_t v384; // w5
  bool v385; // w6
  bool v386; // w7
  System_String_o *v387; // x2
  System_String_o *v388; // x3
  int32_t v389; // w4
  int32_t v390; // w5
  bool v391; // w6
  bool v392; // w7
  System_String_o *v393; // x2
  System_String_o *v394; // x3
  int32_t v395; // w4
  int32_t v396; // w5
  bool v397; // w6
  bool v398; // w7
  System_String_o *v399; // x2
  System_String_o *v400; // x3
  int32_t v401; // w4
  int32_t v402; // w5
  bool v403; // w6
  bool v404; // w7
  System_String_o *v405; // x2
  System_String_o *v406; // x3
  int32_t v407; // w4
  int32_t v408; // w5
  bool v409; // w6
  bool v410; // w7
  System_String_o *v411; // x2
  System_String_o *v412; // x3
  int32_t v413; // w4
  int32_t v414; // w5
  bool v415; // w6
  bool v416; // w7
  struct System_Action_o *endCallback; // x8
  Il2CppObject **v418; // x26
  int v419; // w8
  __int64 v421; // [xsp+8h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v422; // [xsp+10h] [xbp-A0h]
  Il2CppObject *value; // [xsp+18h] [xbp-98h] BYREF
  UserQuestEntity_o *v424; // [xsp+20h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+28h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+30h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v428; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_596D635 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MapMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_2213A60(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_2213A60(&MapControl_MapInfo_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&MapControl_SpotInfo_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_0__);
    sub_2213A60(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_1__);
    sub_2213A60(&Method_QuestTree___c__DisplayClass47_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_2213A60(&QuestTree___c__DisplayClass47_0_TypeInfo);
    sub_2213A60(&QuestTree___c_TypeInfo);
    sub_2213A60(&WarEntity_TypeInfo);
    sub_2213A60(&MapControl_WarInfo_TypeInfo);
    byte_596D635 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  dataManager_5__2 = 0;
  v428 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v424 = 0;
  mapGimmickInfo = 0;
  v422 = this;
  value = 0;
  if ( _1__state <= 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_286;
      QuestTree__InitInfo(_4__this, 0);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      this->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._dataManager_5__2,
        (int32_t)Instance,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)dataManager_5__2,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapMaster___);
      this->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._mapMaster_5__3,
        (int32_t)MasterData_object,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v23 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotMaster___);
      this->fields._spotMaster_5__4 = (struct SpotMaster_o *)v23;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._spotMaster_5__4,
        (int32_t)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v30 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      this->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v30;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._blankEarthSpotMaster_5__5,
        (int32_t)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v37 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
      this->fields._questMaster_5__6 = (struct QuestMaster_o *)v37;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._questMaster_5__6,
        (int32_t)v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v44 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      this->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v44;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._questPhaseMaster_5__7,
        (int32_t)v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v51 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      this->fields._eventMaster_5__8 = (struct EventMaster_o *)v51;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._eventMaster_5__8,
        (int32_t)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v58 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      this->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v58;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._eventDetailMaster_5__9,
        (int32_t)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v65 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventStatusMaster___);
      this->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v65;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._eventStatusMaster_5__10,
        (int32_t)v65,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v72 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      this->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v72;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._eventStatusQuestMaster_5__11,
        (int32_t)v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v79 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      this->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v79;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._spotRoadMaster_5__12,
        (int32_t)v79,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v86 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      this->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v86;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._mapGimmickMaster_5__13,
        (int32_t)v86,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v93 = DataManager__GetMasterData_object_(
              (DataManager_o *)dataManager_5__2,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      this->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v93;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._questPickupMaster_5__14,
        (int32_t)v93,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      v100 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v100,
        (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      this->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v100;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v100,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106);
      dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      dataManager_5__2 = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)dataManager_5__2,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !dataManager_5__2 )
        goto LABEL_286;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)dataManager_5__2,
                  (const MethodInfo_3F0FEAC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      this->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._warList_5__16,
        (int32_t)Entitys,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v114, v115);
      dataManager_5__2 = NetworkManager__getTime(0);
      warList_5__16 = this->fields._warList_5__16;
      this->fields._nowTime_5__17 = dataManager_5__2;
      this->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_286;
      max_length = warList_5__16->max_length;
      v118 = 0;
      this->fields._warCount_5__19 = max_length;
      goto LABEL_33;
    }
    if ( _1__state != 1 )
      return dataManager_5__2;
    warIdx_5__18 = this->fields._warIdx_5__18;
    this->fields.__1__state = -1;
    while ( 1 )
    {
      v118 = warIdx_5__18 + 1;
      max_length = this->fields._warCount_5__19;
      this->fields._warIdx_5__18 = v118;
LABEL_33:
      if ( v118 >= max_length )
        break;
      v120 = this->fields._warList_5__16;
      if ( !v120 )
        goto LABEL_286;
      if ( (unsigned int)v118 >= LODWORD(v120->max_length) )
        goto LABEL_287;
      v121 = v120->m_Items[v118];
      if ( !v121 )
        goto LABEL_286;
      if ( !_4__this )
        goto LABEL_286;
      dataManager_5__2 = (__int64)_4__this->fields.mapControlRootInfo;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      id = v121->fields.id;
      dataManager_5__2 = (__int64)MapControl_RootInfo__AddChild(
                                    (MapControl_RootInfo_o *)dataManager_5__2,
                                    id,
                                    this->fields._nowTime_5__17,
                                    0);
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v123 = (MapControl_WarInfo_o *)dataManager_5__2;
      if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)dataManager_5__2, 0) )
      {
        eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._eventMaster_5__8;
        dataManager_5__2 = MapControl_WarInfo__GetEventId(v123, 0);
        if ( !eventMaster_5__8 )
          goto LABEL_286;
        dataManager_5__2 = DataMasterBase_object__object__int___TryGetEntity(
                             eventMaster_5__8,
                             &entity,
                             dataManager_5__2,
                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( (dataManager_5__2 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_286;
          nowTime_5__17 = this->fields._nowTime_5__17;
          if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
            MapControl_WarInfo__SetStatusCheckFlag(v123, 1, 0, 0);
          eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields._eventDetailMaster_5__9;
          dataManager_5__2 = MapControl_WarInfo__GetEventId(v123, 0);
          if ( !eventDetailMaster_5__9 )
            goto LABEL_286;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 eventDetailMaster_5__9,
                 &v428,
                 dataManager_5__2,
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            dataManager_5__2 = (__int64)v428;
            if ( !v428 )
              goto LABEL_286;
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v428, 0x2000000, 0) )
            {
              dataManager_5__2 = (__int64)entity;
              if ( !entity )
                goto LABEL_286;
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, this->fields._nowTime_5__17, 0) )
              {
                eventStatusMaster_5__10 = this->fields._eventStatusMaster_5__10;
                dataManager_5__2 = MapControl_WarInfo__GetEventId(v123, 0);
                if ( !eventStatusMaster_5__10 )
                  goto LABEL_286;
                NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, dataManager_5__2, 0);
                if ( NowEntity )
                {
                  v135 = NowEntity;
                  eventStatusQuestMaster_5__11 = this->fields._eventStatusQuestMaster_5__11;
                  dataManager_5__2 = MapControl_WarInfo__GetEventId(v123, 0);
                  if ( !eventStatusQuestMaster_5__11 )
                    goto LABEL_286;
                  dataManager_5__2 = (__int64)EventStatusQuestMaster__getMismatchQuestList(
                                                eventStatusQuestMaster_5__11,
                                                dataManager_5__2,
                                                v135->fields.statusId,
                                                0);
                  if ( !this->fields._eventStatusQuestMismatchDictionary_5__15 )
                    goto LABEL_286;
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this->fields._eventStatusQuestMismatchDictionary_5__15,
                    id,
                    (Il2CppObject *)dataManager_5__2,
                    (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v137 = this->fields._nowTime_5__17;
          dataManager_5__2 = sub_2213B20(long___TypeInfo, 3);
          v138 = entity;
          if ( !entity || !dataManager_5__2 )
            goto LABEL_286;
          v139 = *(_DWORD *)(dataManager_5__2 + 24);
          if ( !v139 )
            goto LABEL_287;
          *(_QWORD *)(dataManager_5__2 + 32) = entity[5].klass;
          if ( v139 == 1 )
            goto LABEL_287;
          *(_QWORD *)(dataManager_5__2 + 40) = v138[5].monitor;
          if ( v139 <= 2 )
            goto LABEL_287;
          *(_QWORD *)(dataManager_5__2 + 48) = v138[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v137, (System_Int64_array *)dataManager_5__2, 0);
        }
      }
      dataManager_5__2 = (__int64)_4__this->fields.allWarInfoList;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v140 = *(_QWORD *)(dataManager_5__2 + 16);
      v141 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++*(_DWORD *)(dataManager_5__2 + 28);
      if ( !v140 )
        goto LABEL_286;
      v142 = *(int *)(dataManager_5__2 + 24);
      if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)dataManager_5__2,
          (Il2CppObject *)v123,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
      }
      else
      {
        v143 = v140 + 8 * v142;
        *(_DWORD *)(dataManager_5__2 + 24) = v142 + 1;
        *(_QWORD *)(v143 + 32) = v123;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v143 + 32), (int32_t)v123, v124, v125, v126, v127, v128, v129);
      }
      dataManager_5__2 = (__int64)this->fields._mapMaster_5__3;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      dataManager_5__2 = (__int64)MapMaster__getList((MapMaster_o *)dataManager_5__2, id, 0);
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v149 = dataManager_5__2;
      v421 = *(unsigned int *)(dataManager_5__2 + 24);
      if ( *(int *)(dataManager_5__2 + 24) >= 1 )
      {
        v150 = 0;
        while ( 1 )
        {
          if ( v150 >= *(unsigned int *)(v149 + 24) )
            goto LABEL_287;
          v151 = *(_QWORD *)(v149 + 8 * v150 + 32);
          if ( !v151 )
            goto LABEL_286;
          v152 = *(_DWORD *)(v151 + 16);
          dataManager_5__2 = (__int64)MapControl_WarInfo__AddChild(v123, v152, 0);
          allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !allMapInfoList )
            goto LABEL_286;
          items = allMapInfoList->fields._items;
          v161 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
          ++allMapInfoList->fields._version;
          if ( !items )
            goto LABEL_286;
          size = allMapInfoList->fields._size;
          v163 = (MapControl_MapInfo_o *)dataManager_5__2;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              allMapInfoList,
              (Il2CppObject *)dataManager_5__2,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
          }
          else
          {
            v164 = &items->obj.klass + size;
            allMapInfoList->fields._size = size + 1;
            v164[4] = (Il2CppClass *)v163;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v164 + 4),
              (int32_t)v163,
              v153,
              v154,
              v155,
              v156,
              v157,
              v158);
          }
          dataManager_5__2 = (__int64)this->fields._spotMaster_5__4;
          if ( !dataManager_5__2 )
            goto LABEL_286;
          dataManager_5__2 = (__int64)SpotMaster__getList((SpotMaster_o *)dataManager_5__2, v152, 0);
          if ( !dataManager_5__2 )
            goto LABEL_286;
          v165 = *(_QWORD *)(dataManager_5__2 + 24);
          v166 = dataManager_5__2;
          if ( (int)v165 >= 1 )
            break;
LABEL_94:
          allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          dataManager_5__2 = (__int64)QuestTree__EnumerateBlankEarthSpotInfo(
                                        _4__this,
                                        v163,
                                        v422->fields._blankEarthSpotMaster_5__5,
                                        0);
          if ( !allSpotInfoList )
            goto LABEL_286;
          System_Collections_Generic_List_object___AddRange(
            allSpotInfoList,
            (System_Collections_Generic_IEnumerable_T__o *)dataManager_5__2,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
          dataManager_5__2 = (__int64)v422->fields._spotRoadMaster_5__12;
          if ( !dataManager_5__2 )
            goto LABEL_286;
          dataManager_5__2 = (__int64)SpotRoadMaster__getList((SpotRoadMaster_o *)dataManager_5__2, v152, 0);
          if ( !dataManager_5__2 )
            goto LABEL_286;
          v182 = *(_QWORD *)(dataManager_5__2 + 24);
          v183 = dataManager_5__2;
          if ( (int)v182 >= 1 )
          {
            v184 = 0;
            v185 = dataManager_5__2 + 32;
            while ( (unsigned int)v184 < *(_DWORD *)(v183 + 24) )
            {
              v186 = *(_QWORD *)(v185 + 8 * v184);
              if ( !v186 || !v163 )
                goto LABEL_286;
              dataManager_5__2 = (__int64)MapControl_MapInfo__AddSpotRoad(v163, *(_DWORD *)(v186 + 16), 0);
              v187 = *(_DWORD *)(v183 + 24);
              spotRoadInfo = (MapControl_SpotRoadInfo_o *)dataManager_5__2;
              if ( (unsigned int)v184 >= v187 )
                goto LABEL_287;
              QuestTree__SetupSpotRoadInfo(_4__this, *(SpotRoadEntity_o **)(v185 + 8 * v184), &spotRoadInfo, 0);
              dataManager_5__2 = (__int64)_4__this->fields.allSpotRoadInfoList;
              if ( !dataManager_5__2 )
                goto LABEL_286;
              v194 = *(_QWORD *)(dataManager_5__2 + 16);
              method = (const MethodInfo *)spotRoadInfo;
              v195 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
              ++*(_DWORD *)(dataManager_5__2 + 28);
              if ( !v194 )
                goto LABEL_286;
              v196 = *(int *)(dataManager_5__2 + 24);
              if ( (unsigned int)v196 >= *(_DWORD *)(v194 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)dataManager_5__2,
                  (Il2CppObject *)method,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
              }
              else
              {
                v197 = v194 + 8 * v196;
                *(_DWORD *)(dataManager_5__2 + 24) = v196 + 1;
                *(_QWORD *)(v197 + 32) = method;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v197 + 32),
                  (int32_t)method,
                  v188,
                  v189,
                  v190,
                  v191,
                  v192,
                  v193);
              }
              if ( (_DWORD)v182 == (_DWORD)++v184 )
                goto LABEL_109;
            }
            goto LABEL_287;
          }
LABEL_109:
          this = v422;
          dataManager_5__2 = (__int64)v422->fields._mapGimmickMaster_5__13;
          if ( !dataManager_5__2 )
            goto LABEL_286;
          dataManager_5__2 = (__int64)MapGimmickMaster__getList((MapGimmickMaster_o *)dataManager_5__2, v152, 0);
          if ( !dataManager_5__2 )
            goto LABEL_286;
          v198 = *(_QWORD *)(dataManager_5__2 + 24);
          v199 = dataManager_5__2;
          if ( (int)v198 >= 1 )
          {
            v200 = 0;
            while ( (unsigned int)v200 < *(_DWORD *)(v199 + 24) )
            {
              v201 = *(_QWORD *)(v199 + 32 + 8 * v200);
              if ( !v201 )
                goto LABEL_286;
              if ( !v163 )
                goto LABEL_286;
              mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v163, *(_DWORD *)(v201 + 16), 0);
              QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0);
              dataManager_5__2 = (__int64)_4__this->fields.allMapGimmickInfoList;
              if ( !dataManager_5__2 )
                goto LABEL_286;
              v208 = *(_QWORD *)(dataManager_5__2 + 16);
              method = (const MethodInfo *)mapGimmickInfo;
              v209 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
              ++*(_DWORD *)(dataManager_5__2 + 28);
              if ( !v208 )
                goto LABEL_286;
              v210 = *(int *)(dataManager_5__2 + 24);
              if ( (unsigned int)v210 >= *(_DWORD *)(v208 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)dataManager_5__2,
                  (Il2CppObject *)method,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
              }
              else
              {
                v211 = v208 + 8 * v210;
                *(_DWORD *)(dataManager_5__2 + 24) = v210 + 1;
                *(_QWORD *)(v211 + 32) = method;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v211 + 32),
                  (int32_t)method,
                  v202,
                  v203,
                  v204,
                  v205,
                  v206,
                  v207);
              }
              if ( (_DWORD)v198 == (_DWORD)++v200 )
                goto LABEL_122;
            }
            goto LABEL_287;
          }
LABEL_122:
          if ( ++v150 == v421 )
            goto LABEL_123;
        }
        v167 = 0;
        v168 = dataManager_5__2 + 32;
        while ( (unsigned int)v167 < *(_DWORD *)(v166 + 24) )
        {
          v169 = *(_QWORD *)(v168 + 8 * v167);
          if ( !v169 || !v163 )
            goto LABEL_286;
          dataManager_5__2 = (__int64)MapControl_MapInfo__AddChild(v163, *(_DWORD *)(v169 + 16), 0);
          v170 = *(_DWORD *)(v166 + 24);
          spotInfo = (MapControl_SpotInfo_o *)dataManager_5__2;
          if ( (unsigned int)v167 >= v170 )
            break;
          QuestTree__SetupSpotInfo(_4__this, *(SpotEntity_o **)(v168 + 8 * v167), &spotInfo, 0);
          dataManager_5__2 = (__int64)_4__this->fields.allSpotInfoList;
          if ( !dataManager_5__2 )
            goto LABEL_286;
          v177 = *(_QWORD *)(dataManager_5__2 + 16);
          method = (const MethodInfo *)spotInfo;
          v178 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
          ++*(_DWORD *)(dataManager_5__2 + 28);
          if ( !v177 )
            goto LABEL_286;
          v179 = *(int *)(dataManager_5__2 + 24);
          if ( (unsigned int)v179 >= *(_DWORD *)(v177 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)dataManager_5__2,
              (Il2CppObject *)method,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
          }
          else
          {
            v180 = v177 + 8 * v179;
            *(_DWORD *)(dataManager_5__2 + 24) = v179 + 1;
            *(_QWORD *)(v180 + 32) = method;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v180 + 32),
              (int32_t)method,
              v171,
              v172,
              v173,
              v174,
              v175,
              v176);
          }
          if ( (_DWORD)v165 == (_DWORD)++v167 )
            goto LABEL_94;
        }
LABEL_287:
        sub_2213CE4(dataManager_5__2);
      }
LABEL_123:
      warIdx_5__18 = this->fields._warIdx_5__18;
      if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v144, v145, v146, v147, v148);
        *((_DWORD *)p__2__current - 2) = 1;
        LOBYTE(dataManager_5__2) = 1;
        return dataManager_5__2;
      }
    }
    if ( !_4__this )
      goto LABEL_286;
    allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
    dataManager_5__2 = (__int64)QuestTree___c_TypeInfo;
    if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method, v2);
      dataManager_5__2 = (__int64)QuestTree___c_TypeInfo;
    }
    static_fields = *(struct QuestTree___c_StaticFields **)(dataManager_5__2 + 184);
    _9__47_0 = (System_Comparison_T__o *)static_fields->__9__47_0;
    if ( !_9__47_0 )
    {
      if ( !*(_DWORD *)(dataManager_5__2 + 228) )
      {
        j_il2cpp_runtime_class_init_0(dataManager_5__2, method, v2);
        static_fields = QuestTree___c_TypeInfo->static_fields;
      }
      v216 = (Il2CppObject *)static_fields->__9;
      _9__47_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MapControl_WarInfo__TypeInfo);
      System_Comparison_object____ctor(_9__47_0, v216, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_0__, 0);
      v217 = QuestTree___c_TypeInfo->static_fields;
      v217->__9__47_0 = (struct System_Comparison_MapControl_WarInfo__o *)_9__47_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v217->__9__47_0,
        (int32_t)_9__47_0,
        v218,
        v219,
        v220,
        v221,
        v222,
        v223);
    }
    if ( !allWarInfoList )
      goto LABEL_286;
    System_Collections_Generic_List_object___Sort_71849708(
      allWarInfoList,
      _9__47_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    v224 = (Il2CppObject *)sub_2213CCC(QuestTree___c__DisplayClass47_0_TypeInfo);
    System_Object___ctor(v224, 0);
    this->fields.__8__1 = (struct QuestTree___c__DisplayClass47_0_o *)v224;
    p__8__1 = &this->fields.__8__1;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__8__1,
      (int32_t)v224,
      v226,
      v227,
      v228,
      v229,
      v230,
      v231);
    v232 = this->fields._nowTime_5__17;
    v233 = (MapControl_WarInfo_o *)sub_2213CCC(MapControl_WarInfo_TypeInfo);
    MapControl_WarInfo___ctor(v233, v232, 0);
    this->fields._warInfo_5__20 = v233;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._warInfo_5__20,
      (int32_t)v233,
      v234,
      v235,
      v236,
      v237,
      v238,
      v239);
    v240 = (MapControl_MapInfo_o *)sub_2213CCC(MapControl_MapInfo_TypeInfo);
    MapControl_MapInfo___ctor(v240, 0);
    this->fields._mapInfo_5__21 = v240;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._mapInfo_5__21,
      (int32_t)v240,
      v241,
      v242,
      v243,
      v244,
      v245,
      v246);
    v247 = (MapControl_SpotInfo_o *)sub_2213CCC(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v247, 0);
    this->fields._spotInfo_5__22 = v247;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._spotInfo_5__22,
      (int32_t)v247,
      v248,
      v249,
      v250,
      v251,
      v252,
      v253);
    v254 = (WarEntity_o *)sub_2213CCC(WarEntity_TypeInfo);
    WarEntity___ctor(v254, 0);
    this->fields._warEnt_5__23 = v254;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._warEnt_5__23,
      (int32_t)v254,
      v255,
      v256,
      v257,
      v258,
      v259,
      v260);
    dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
    if ( !dataManager_5__2 )
      goto LABEL_286;
    v261 = DataManager__GetMasterData_object_(
             (DataManager_o *)dataManager_5__2,
             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    this->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v261;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._userQuestMaster_5__24,
      (int32_t)v261,
      v262,
      v263,
      v264,
      v265,
      v266,
      v267);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v268, v269);
    dataManager_5__2 = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    if ( !*p__8__1 )
      goto LABEL_286;
    (*p__8__1)->fields.spotInfoNow = -1;
    v271 = OptionManager_TypeInfo;
    *(_QWORD *)&this->fields._mapInfoNow_5__27 = -1;
    if ( !*(&v271->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v271, method, v270);
    v272 = !OptionManager__isSavedMemoryMode(0);
    dataManager_5__2 = (__int64)this->fields._questMaster_5__6;
    v273 = v272 ? 5000 : 500;
    this->fields._questIdx_5__25 = 0;
    this->fields._breakInterval_5__29 = v273;
    if ( !dataManager_5__2 )
      goto LABEL_286;
    dataManager_5__2 = QuestMaster__Count((QuestMaster_o *)dataManager_5__2, 0);
    method = (const MethodInfo *)(unsigned int)this->fields._questIdx_5__25;
    this->fields._questCount_5__26 = dataManager_5__2;
    while ( 1 )
    {
      if ( (int)method >= (int)dataManager_5__2 )
      {
        if ( !_4__this )
          goto LABEL_286;
        allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
        dataManager_5__2 = (__int64)QuestTree___c_TypeInfo;
        if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method, v2);
          dataManager_5__2 = (__int64)QuestTree___c_TypeInfo;
        }
        v365 = *(struct QuestTree___c_StaticFields **)(dataManager_5__2 + 184);
        _9__47_1 = (System_Comparison_T__o *)v365->__9__47_1;
        if ( !_9__47_1 )
        {
          if ( !*(_DWORD *)(dataManager_5__2 + 228) )
          {
            j_il2cpp_runtime_class_init_0(dataManager_5__2, method, v2);
            v365 = QuestTree___c_TypeInfo->static_fields;
          }
          v367 = (Il2CppObject *)v365->__9;
          _9__47_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MapControl_QuestInfo__TypeInfo);
          System_Comparison_object____ctor(
            _9__47_1,
            v367,
            Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_1__,
            0);
          v368 = QuestTree___c_TypeInfo->static_fields;
          v368->__9__47_1 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__47_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v368->__9__47_1,
            (int32_t)_9__47_1,
            v369,
            v370,
            v371,
            v372,
            v373,
            v374);
        }
        if ( !allQuestInfoList )
          goto LABEL_286;
        System_Collections_Generic_List_object___Sort_71849708(
          allQuestInfoList,
          _9__47_1,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
        this->fields.__8__1 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, 0, v375, v376, v377, v378, v379, v380);
        this->fields._warInfo_5__20 = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._warInfo_5__20,
          0,
          v381,
          v382,
          v383,
          v384,
          v385,
          v386);
        this->fields._mapInfo_5__21 = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._mapInfo_5__21,
          0,
          v387,
          v388,
          v389,
          v390,
          v391,
          v392);
        this->fields._spotInfo_5__22 = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._spotInfo_5__22,
          0,
          v393,
          v394,
          v395,
          v396,
          v397,
          v398);
        this->fields._warEnt_5__23 = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._warEnt_5__23,
          0,
          v399,
          v400,
          v401,
          v402,
          v403,
          v404);
        this->fields._userQuestMaster_5__24 = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._userQuestMaster_5__24,
          0,
          v405,
          v406,
          v407,
          v408,
          v409,
          v410);
        dataManager_5__2 = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !dataManager_5__2 )
          goto LABEL_286;
        CommonUI__SetLoadMode((CommonUI_o *)dataManager_5__2, 0, 0);
        endCallback = this->fields.endCallback;
        _4__this->fields.isInit = 1;
        if ( endCallback )
        {
          this->fields.__2__current = 0;
          v418 = &this->fields.__2__current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)v418, 0, v411, v412, v413, v414, v415, v416);
          v419 = 3;
LABEL_285:
          *((_DWORD *)v418 - 2) = v419;
          LOBYTE(dataManager_5__2) = 1;
          return dataManager_5__2;
        }
LABEL_145:
        dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
        _4__this->fields.isQuestTreeUpdateFinished = 1;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        dataManager_5__2 = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)dataManager_5__2,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !dataManager_5__2 )
          goto LABEL_286;
        CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)dataManager_5__2, 0);
        dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        dataManager_5__2 = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)dataManager_5__2,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestAddMaster___);
        if ( !dataManager_5__2 )
          goto LABEL_286;
        QuestAddMaster__DeleteCache((QuestAddMaster_o *)dataManager_5__2, 0);
        dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        dataManager_5__2 = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)dataManager_5__2,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !dataManager_5__2 )
          goto LABEL_286;
        QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)dataManager_5__2, 0);
        dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        dataManager_5__2 = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)dataManager_5__2,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
        if ( !dataManager_5__2 )
          goto LABEL_286;
        QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)dataManager_5__2, 0);
        dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        dataManager_5__2 = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)dataManager_5__2,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !dataManager_5__2 )
          goto LABEL_286;
        UserQuestMaster__DeleteCache((UserQuestMaster_o *)dataManager_5__2, 0);
        dataManager_5__2 = (__int64)this->fields._dataManager_5__2;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        dataManager_5__2 = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)dataManager_5__2,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarAddMaster___);
        if ( !dataManager_5__2 )
          goto LABEL_286;
        WarAddMaster__DeleteCache((WarAddMaster_o *)dataManager_5__2, 0);
        LOBYTE(dataManager_5__2) = 0;
        _4__this->fields.isUseCache = 0;
        return dataManager_5__2;
      }
      dataManager_5__2 = (__int64)this->fields._questMaster_5__6;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      dataManager_5__2 = (__int64)QuestMaster__GetQuestEntitybyIdx(
                                    (QuestMaster_o *)dataManager_5__2,
                                    (int32_t)method,
                                    0);
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v275 = (QuestEntity_o *)dataManager_5__2;
      userQuestMaster_5__24 = this->fields._userQuestMaster_5__24;
      v277 = *(int *)(dataManager_5__2 + 16);
      v424 = 0;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v274);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      dataManager_5__2 = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v274);
        dataManager_5__2 = (__int64)NetworkManager_TypeInfo;
      }
      if ( !userQuestMaster_5__24 )
        goto LABEL_286;
      v278 = UserQuestMaster__TryGetEntity(
               userQuestMaster_5__24,
               &v424,
               *(_QWORD *)(*(_QWORD *)(dataManager_5__2 + 184) + 64LL),
               v277,
               0);
      QuestPhase = 0;
      if ( v278 )
      {
        dataManager_5__2 = (__int64)v424;
        if ( !v424 )
          goto LABEL_286;
        QuestPhase = UserQuestEntity__getQuestPhase(v424, 0);
      }
      dataManager_5__2 = QuestEntity__getSpotId_49489968(v275, QuestPhase + 1, 0);
      _8__1 = this->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_286;
      if ( _8__1->fields.spotInfoNow != (_DWORD)dataManager_5__2 )
      {
        _8__1->fields.spotInfoNow = dataManager_5__2;
        if ( !_4__this )
          goto LABEL_286;
        v281 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__2,
            (Il2CppObject *)_8__1,
            Method_QuestTree___c__DisplayClass47_0__mfBaseTreeMakeWithOpenCheck_b__2__,
            0);
          _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&_8__1->fields.__9__2,
            (int32_t)_9__2,
            v283,
            v284,
            v285,
            v286,
            v287,
            v288);
        }
        if ( !v281 )
          goto LABEL_286;
        v289 = System_Collections_Generic_List_object___Find(
                 v281,
                 (System_Predicate_T__o *)_9__2,
                 (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
        this = v422;
        v422->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v289;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v422->fields._spotInfo_5__22,
          (int32_t)v289,
          v290,
          v291,
          v292,
          v293,
          v294,
          v295);
        dataManager_5__2 = (__int64)v422->fields._spotInfo_5__22;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)dataManager_5__2, 0);
        if ( v422->fields._mapInfoNow_5__27 != MapID )
        {
          v422->fields._mapInfoNow_5__27 = MapID;
          MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0);
          v422->fields._mapInfo_5__21 = MapInfoByMapID;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v422->fields._mapInfo_5__21,
            (int32_t)MapInfoByMapID,
            v298,
            v299,
            v300,
            v301,
            v302,
            v303);
          dataManager_5__2 = (__int64)v422->fields._mapInfo_5__21;
          if ( !dataManager_5__2 )
            goto LABEL_286;
          dataManager_5__2 = (__int64)MapControl_MapInfo__GetMine((MapControl_MapInfo_o *)dataManager_5__2, 0);
          if ( !dataManager_5__2 )
            goto LABEL_286;
          method = (const MethodInfo *)*(unsigned int *)(dataManager_5__2 + 20);
          if ( v422->fields._warInfoNow_5__28 != (_DWORD)method )
          {
            v422->fields._warInfoNow_5__28 = (int)method;
            WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0);
            v422->fields._warInfo_5__20 = WarInfoByWarID;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v422->fields._warInfo_5__20,
              (int32_t)WarInfoByWarID,
              v305,
              v306,
              v307,
              v308,
              v309,
              v310);
            dataManager_5__2 = (__int64)v422->fields._warInfo_5__20;
            if ( !dataManager_5__2 )
              goto LABEL_286;
            Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)dataManager_5__2, 0);
            v422->fields._warEnt_5__23 = Mine;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v422->fields._warEnt_5__23,
              (int32_t)Mine,
              v312,
              v313,
              v314,
              v315,
              v316,
              v317);
          }
        }
      }
      dataManager_5__2 = (__int64)this->fields._warInfo_5__20;
      if ( !v424 )
        goto LABEL_202;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)dataManager_5__2, 1, 0, 0);
      dataManager_5__2 = (__int64)v424;
      if ( !v424 )
        goto LABEL_286;
      dataManager_5__2 = UserQuestEntity__HasStatus(v424, 8, 0);
      if ( (dataManager_5__2 & 1) == 0 )
        goto LABEL_190;
      if ( !v424 )
        goto LABEL_286;
      if ( v424->fields.challengeNum >= 1 )
      {
LABEL_190:
        dataManager_5__2 = (__int64)this->fields._warInfo_5__20;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)dataManager_5__2, 4, 0, 0);
      }
      dataManager_5__2 = (__int64)v424;
      if ( !v424 )
        goto LABEL_286;
      if ( UserQuestEntity__getClearNum(v424, 0) < 1 )
        break;
      dataManager_5__2 = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !v424 )
        goto LABEL_286;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      dataManager_5__2 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)dataManager_5__2, v424->fields.questId, 0, 0);
      if ( !this->fields._warInfo_5__20 )
        goto LABEL_286;
      v318 = dataManager_5__2;
      dataManager_5__2 = (__int64)MapControl_WarInfo__GetMine(this->fields._warInfo_5__20, 0);
      if ( !dataManager_5__2 )
        goto LABEL_286;
      if ( *(_DWORD *)(dataManager_5__2 + 100) == (_DWORD)v277 )
      {
        dataManager_5__2 = (__int64)this->fields._warInfo_5__20;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)dataManager_5__2, 8, 1, 0);
      }
LABEL_204:
      dataManager_5__2 = (__int64)this->fields._spotInfo_5__22;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      dataManager_5__2 = (__int64)MapControl_SpotInfo__AddChild((MapControl_SpotInfo_o *)dataManager_5__2, v277, 0);
      method = (const MethodInfo *)this->fields._warInfo_5__20;
      if ( !method )
        goto LABEL_286;
      v325 = dataManager_5__2;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      invoker_method_high = HIDWORD(method->invoker_method);
      *(_QWORD *)(dataManager_5__2 + 104) = method;
      *(_DWORD *)(dataManager_5__2 + 64) = invoker_method_high;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(dataManager_5__2 + 104),
        (int32_t)method,
        v319,
        v320,
        v321,
        v322,
        v323,
        v324);
      spotInfo_5__22 = this->fields._spotInfo_5__22;
      *(_QWORD *)(v325 + 96) = spotInfo_5__22;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v325 + 96),
        (int32_t)spotInfo_5__22,
        v328,
        v329,
        v330,
        v331,
        v332,
        v333);
      if ( !_4__this )
        goto LABEL_286;
      dataManager_5__2 = QuestTree__GetEndTime(_4__this, (MapControl_QuestInfo_o *)v325, 0);
      warEnt_5__23 = this->fields._warEnt_5__23;
      *(_QWORD *)(v325 + 144) = dataManager_5__2;
      if ( !warEnt_5__23 )
        goto LABEL_286;
      IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__23, 0);
      dataManager_5__2 = (__int64)this->fields._warEnt_5__23;
      if ( !IsStartTypeQuest )
        goto LABEL_214;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      if ( *(_QWORD *)(dataManager_5__2 + 88) == v277 )
      {
        if ( !WarEntity__HasFlag((WarEntity_o *)dataManager_5__2, 0x8000, 0) )
          goto LABEL_219;
        dataManager_5__2 = (__int64)this->fields._warEnt_5__23;
LABEL_214:
        if ( !dataManager_5__2 )
          goto LABEL_286;
      }
      if ( !this->fields._eventStatusQuestMismatchDictionary_5__15 )
        goto LABEL_286;
      if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)this->fields._eventStatusQuestMismatchDictionary_5__15,
             *(_DWORD *)(dataManager_5__2 + 16),
             &value,
             (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
      {
        dataManager_5__2 = (__int64)value;
        if ( !value )
          goto LABEL_286;
        if ( System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)value,
               v277,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
LABEL_219:
          *(_QWORD *)(v325 + 32) = 0;
          v336 = 1;
          goto LABEL_223;
        }
      }
      v336 = 1;
      if ( QuestTree__CheckQuestOpen(_4__this, v275, (MapControl_QuestInfo_o *)v325, this->fields._warInfoNow_5__28, 0) == 1 )
      {
        dataManager_5__2 = (__int64)this->fields._warInfo_5__20;
        if ( !dataManager_5__2 )
          goto LABEL_286;
        MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)dataManager_5__2, 1, 0, 0);
        v336 = 0;
      }
LABEL_223:
      if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v325, 0) )
      {
        if ( ((v318 | v336) & 1) == 0 )
        {
          if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v325, 0) != 8 )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v337);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestResetMaster___);
            dataManager_5__2 = sub_2213B20(long___TypeInfo, 1);
            if ( !dataManager_5__2 )
              goto LABEL_286;
            method = (const MethodInfo *)dataManager_5__2;
            if ( !*(_DWORD *)(dataManager_5__2 + 24) )
              goto LABEL_287;
            *(_QWORD *)(dataManager_5__2 + 32) = v277;
            if ( !Master_object )
              goto LABEL_286;
            if ( !DataMasterBase_object__object__int___isEntityExistsFromId(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    (System_Int64_array *)dataManager_5__2,
                    (const MethodInfo_3F10208 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__)
              || !v424
              || !UserQuestEntity__IsResetStatus(v424, 0) )
            {
              dataManager_5__2 = (__int64)this->fields._spotInfo_5__22;
              if ( !dataManager_5__2 )
                goto LABEL_286;
              MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)dataManager_5__2, 1, 0);
            }
          }
          dataManager_5__2 = (__int64)this->fields._spotInfo_5__22;
          if ( !dataManager_5__2 )
            goto LABEL_286;
          MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)dataManager_5__2, *(_DWORD *)(v325 + 16), 0);
        }
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v325, 0) == 1 )
        {
          dataManager_5__2 = (__int64)MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)v325, 0);
          if ( !dataManager_5__2 )
            goto LABEL_286;
          dataManager_5__2 = QuestEntity__HasFlag((QuestEntity_o *)dataManager_5__2, 0x400000000000LL, 0);
          if ( (dataManager_5__2 & 1) == 0 )
          {
            v339 = this->fields._spotInfo_5__22;
            if ( !v339 )
              goto LABEL_286;
            v339->fields._IsNext_k__BackingField = 1;
          }
          mapInfo_5__21 = this->fields._mapInfo_5__21;
          if ( !mapInfo_5__21 )
            goto LABEL_286;
          mapInfo_5__21->fields._IsNext_k__BackingField = 1;
        }
        dataManager_5__2 = MapControl_QuestInfo__IsDisplayQuestNextIcon((MapControl_QuestInfo_o *)v325, 0);
        if ( (dataManager_5__2 & 1) != 0 )
        {
          v341 = this->fields._spotInfo_5__22;
          if ( !v341 )
            goto LABEL_286;
          v342 = this->fields._mapInfo_5__21;
          v341->fields._IsNext_k__BackingField = 1;
          if ( !v342 )
            goto LABEL_286;
          v342->fields._IsNext_k__BackingField = 1;
        }
        if ( QuestEntity__HasFlag(v275, 0x8000000000LL, 0) )
        {
          dataManager_5__2 = (__int64)this->fields._spotInfo_5__22;
          if ( !dataManager_5__2 )
            goto LABEL_286;
          MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)dataManager_5__2, 1, 0);
        }
      }
      v343 = 1;
      if ( v424 )
      {
        dataManager_5__2 = UserQuestEntity__HasStatus(v424, 8, 0);
        v343 = 0;
        if ( (dataManager_5__2 & 1) != 0 )
        {
          if ( !v424 )
            goto LABEL_286;
          v343 = v424->fields.challengeNum == 0;
        }
      }
      dataManager_5__2 = (__int64)this->fields._questPickupMaster_5__14;
      *(_BYTE *)(v325 + 40) = v343;
      *(_DWORD *)(v325 + 44) = QuestPhase;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      dataManager_5__2 = QuestPickupMaster__GetPriority((QuestPickupMaster_o *)dataManager_5__2, v277, 0);
      questPhaseMaster_5__7 = this->fields._questPhaseMaster_5__7;
      *(_DWORD *)(v325 + 48) = dataManager_5__2;
      if ( !questPhaseMaster_5__7 )
        goto LABEL_286;
      dataManager_5__2 = (__int64)QuestPhaseMaster__getList(questPhaseMaster_5__7, v277, 0);
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v351 = *(_QWORD *)(dataManager_5__2 + 24);
      v352 = dataManager_5__2;
      if ( (int)v351 >= 1 )
      {
        v353 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v353 >= *(_DWORD *)(v352 + 24) )
            goto LABEL_287;
          v354 = *(_QWORD *)(v352 + 32 + 8 * v353);
          if ( !v354 )
            break;
          dataManager_5__2 = (__int64)MapControl_QuestInfo__AddChild(
                                        (MapControl_QuestInfo_o *)v325,
                                        *(_DWORD *)(v354 + 16),
                                        *(_DWORD *)(v354 + 20),
                                        0);
          if ( (_DWORD)v351 == (_DWORD)++v353 )
            goto LABEL_264;
        }
LABEL_286:
        sub_2213CDC(dataManager_5__2, method);
      }
LABEL_264:
      dataManager_5__2 = (__int64)_4__this->fields.allQuestInfoList;
      if ( !dataManager_5__2 )
        goto LABEL_286;
      v355 = *(_QWORD *)(dataManager_5__2 + 16);
      v356 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++*(_DWORD *)(dataManager_5__2 + 28);
      if ( !v355 )
        goto LABEL_286;
      v357 = *(int *)(dataManager_5__2 + 24);
      if ( (unsigned int)v357 >= *(_DWORD *)(v355 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)dataManager_5__2,
          (Il2CppObject *)v325,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v356[4] + 192LL) + 112LL));
      }
      else
      {
        v358 = v355 + 8 * v357;
        *(_DWORD *)(dataManager_5__2 + 24) = v357 + 1;
        *(_QWORD *)(v358 + 32) = v325;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v358 + 32), v325, v345, v346, v347, v348, v349, v350);
      }
      questIdx_5__25 = this->fields._questIdx_5__25;
      if ( questIdx_5__25 && !(questIdx_5__25 % this->fields._breakInterval_5__29) )
      {
        this->fields.__2__current = 0;
        v418 = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)v418, 0, v2, v359, v360, v361, v362, v363);
        v419 = 2;
        goto LABEL_285;
      }
LABEL_271:
      dataManager_5__2 = (unsigned int)this->fields._questCount_5__26;
      method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
      this->fields._questIdx_5__25 = (int)method;
    }
    dataManager_5__2 = (__int64)this->fields._warInfo_5__20;
LABEL_202:
    if ( !dataManager_5__2 )
      goto LABEL_286;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)dataManager_5__2, 2, 0, 0);
    v318 = 0;
    goto LABEL_204;
  }
  if ( _1__state == 2 )
  {
    questIdx_5__25 = this->fields._questIdx_5__25;
    this->fields.__1__state = -1;
    goto LABEL_271;
  }
  if ( _1__state == 3 )
  {
    v8 = this->fields.endCallback;
    this->fields.__1__state = -1;
    if ( !v8 )
      goto LABEL_286;
    dataManager_5__2 = ((__int64 (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(
                         v8->fields.method_code,
                         v8->fields.method);
    if ( !_4__this )
      goto LABEL_286;
    goto LABEL_145;
  }
  return dataManager_5__2;
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  bool v8; // w8
  int32_t _1__state; // w9
  struct QuestTree_o *_4__this; // x19
  struct MapControl_MapInfo_o **p_mapInfo_5__16; // x0
  struct QuestTree___c_StaticFields **isSavedMemoryMode; // x0
  __int64 v13; // x2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v14; // x8
  int32_t mapCount_5__13; // w10
  int32_t v16; // w9
  struct System_Action_o *endCallback; // x8
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x0
  __int64 v29; // x1
  struct QuestTree___c__DisplayClass48_0_o *_8__2; // x8
  const MethodInfo_47A29F8 *v31; // x0
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v44; // x0
  Il2CppObject *v45; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  DataManager_o *v54; // x0
  Il2CppObject *v55; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  __int64 v63; // x1
  DataManager_o *v64; // x0
  Il2CppObject *v65; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  DataManager_o *v74; // x0
  Il2CppObject *v75; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x1
  DataManager_o *v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x24
  DataManager_o *v87; // x0
  __int64 v88; // x1
  Il2CppObject *v89; // x21
  DataManager_o *v90; // x0
  __int64 v91; // x1
  DataManager_o *v92; // x0
  __int64 v93; // x1
  DataManager_o *v94; // x0
  Il2CppObject *v95; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v96; // x0
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  __int64 v103; // x1
  DataManager_o *v104; // x0
  Il2CppObject *v105; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v106; // x0
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  __int64 v113; // x1
  DataManager_o *v114; // x0
  Il2CppObject *v115; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v116; // x0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  __int64 v123; // x0
  __int64 v124; // x1
  System_Collections_Generic_Dictionary_int__object__o *v125; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v126; // x0
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  __int64 v133; // x1
  __int64 v134; // x2
  int64_t Time; // x0
  QuestTree___c__DisplayClass48_1_c *v136; // x8
  Il2CppObject *v137; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v138; // x0
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  __int64 v145; // x1
  DataManager_o *v146; // x0
  Il2CppObject *v147; // x0
  __int64 v148; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x25
  Il2CppObject *v150; // x27
  System_Func_object__bool__o *v151; // x26
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  struct QuestTree___c__DisplayClass48_1_o *v154; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v158; // x27
  System_Predicate_object__o *v159; // x26
  __int64 v160; // x0
  __int64 v161; // x1
  __int64 v162; // x0
  __int64 v163; // x1
  System_Collections_Generic_List_object__o *v164; // x0
  struct QuestTree___c__DisplayClass48_1_o *v165; // x9
  MapControl_RootInfo_o *v166; // x0
  struct MapControl_WarInfo_o *v167; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v168; // x0
  System_String_o *v169; // x2
  System_String_o *v170; // x3
  int32_t v171; // w4
  int32_t v172; // w5
  bool v173; // w6
  bool v174; // w7
  __int64 v175; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  Il2CppObject *v177; // x1
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  MapControl_WarInfo_o *v184; // x0
  __int64 EventId; // x0
  __int64 v186; // x1
  _BOOL8 v187; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v188; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v190; // x0
  MapControl_WarInfo_o *v191; // x0
  __int64 v192; // x0
  __int64 v193; // x1
  __int64 v194; // x1
  __int64 v195; // x1
  __int64 v196; // x1
  MapControl_WarInfo_o *v197; // x0
  __int64 v198; // x1
  __int64 v199; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v201; // x0
  __int64 v202; // x1
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v204; // x1
  struct QuestTree___c__DisplayClass48_1_o *v205; // x8
  Il2CppObject *v206; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v208; // x21
  __int64 v209; // x0
  __int64 v210; // x1
  Il2CppObject *v211; // x8
  unsigned int v212; // w9
  System_Collections_Generic_List_object__o *v213; // x0
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  Il2CppClass **v217; // x8
  __int64 v218; // x0
  __int64 v219; // x1
  struct QuestTree___c__DisplayClass48_1_o *_8__1; // x8
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *List; // x0
  __int64 v223; // x1
  SpotRoadEntity_array *v224; // x20
  il2cpp_array_size_t max_length; // x25
  __int64 v226; // x26
  __int64 v227; // x22
  __int64 v228; // x0
  __int64 v229; // x1
  SpotRoadEntity_o *v230; // x21
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v232; // x24
  __int64 v233; // x0
  __int64 v234; // x1
  unsigned int Index; // w0
  __int64 v236; // x1
  System_Collections_Generic_List_object__o *v237; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  Il2CppObject *v239; // x1
  System_String_o *v240; // x2
  System_String_o *v241; // x3
  int32_t v242; // w4
  int32_t v243; // w5
  bool v244; // w6
  bool v245; // w7
  System_Collections_Generic_List_object__o *v246; // x0
  struct System_Object_array *items; // x8
  _QWORD *v248; // x9
  __int64 size; // x10
  Il2CppClass **v250; // x8
  struct QuestTree___c__DisplayClass48_1_o *v251; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v253; // x0
  __int64 v254; // x1
  System_String_o *v255; // x2
  System_String_o *v256; // x3
  int32_t v257; // w4
  int32_t v258; // w5
  bool v259; // w6
  bool v260; // w7
  MapGimmickEntity_array *v261; // x20
  il2cpp_array_size_t v262; // x24
  __int64 v263; // x25
  __int64 v264; // x21
  __int64 v265; // x0
  __int64 v266; // x1
  MapGimmickEntity_o *v267; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v269; // x23
  __int64 v270; // x0
  __int64 v271; // x1
  unsigned int v272; // w0
  __int64 v273; // x1
  System_Collections_Generic_List_object__o *v274; // x0
  MapControl_MapInfo_o *v275; // x0
  Il2CppObject *v276; // x1
  System_String_o *v277; // x2
  System_String_o *v278; // x3
  int32_t v279; // w4
  int32_t v280; // w5
  bool v281; // w6
  bool v282; // w7
  System_Collections_Generic_List_object__o *v283; // x0
  struct System_Object_array *v284; // x8
  _QWORD *v285; // x9
  __int64 v286; // x10
  Il2CppClass **v287; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v288; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v289; // x8
  int v290; // w9
  int32_t v291; // w8
  struct MapControl_WarInfo_o *v292; // x8
  struct MapEntity_array *v293; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v294; // x0
  System_String_o *v295; // x2
  System_String_o *v296; // x3
  int32_t v297; // w4
  int32_t v298; // w5
  bool v299; // w6
  bool v300; // w7
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v302; // x10
  MapEntity_o *v303; // x9
  struct QuestTree___c__DisplayClass48_1_o *v304; // x21
  struct MapControl_WarInfo_o *v305; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x22
  System_String_o *v308; // x2
  System_String_o *v309; // x3
  int32_t v310; // w4
  int32_t v311; // w5
  bool v312; // w6
  bool v313; // w7
  struct MapControl_WarInfo_o *v314; // x8
  System_Collections_Generic_List_object__o *v315; // x0
  struct QuestTree___c__DisplayClass48_1_o *v316; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  System_String_o *v319; // x2
  System_String_o *v320; // x3
  int32_t v321; // w4
  int32_t v322; // w5
  bool v323; // w6
  bool v324; // w7
  __int64 v325; // x0
  __int64 v326; // x1
  System_Collections_Generic_List_object__o *v327; // x0
  struct QuestTree___c__DisplayClass48_1_o *v328; // x8
  MapControl_WarInfo_o *v329; // x0
  struct MapControl_MapInfo_o *v330; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v331; // x0
  System_String_o *v332; // x2
  System_String_o *v333; // x3
  int32_t v334; // w4
  int32_t v335; // w5
  bool v336; // w6
  bool v337; // w7
  Il2CppObject *v338; // x1
  System_String_o *v339; // x2
  System_String_o *v340; // x3
  int32_t v341; // w4
  int32_t v342; // w5
  bool v343; // w6
  bool v344; // w7
  System_Collections_Generic_List_object__o *v345; // x0
  struct System_Object_array *v346; // x8
  _QWORD *v347; // x9
  __int64 v348; // x10
  Il2CppClass **v349; // x8
  __int64 v350; // x0
  __int64 v351; // x1
  System_Collections_Generic_List_object__o *v352; // x20
  struct QuestTree___c_StaticFields *v353; // x8
  System_Comparison_T__o *_9__48_2; // x21
  Il2CppObject *v355; // x22
  struct QuestTree___c_StaticFields *v356; // x0
  System_String_o *v357; // x2
  System_String_o *v358; // x3
  int32_t v359; // w4
  int32_t v360; // w5
  bool v361; // w6
  bool v362; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v363; // x0
  System_String_o *v364; // x2
  System_String_o *v365; // x3
  int32_t v366; // w4
  int32_t v367; // w5
  bool v368; // w6
  bool v369; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v370; // x0
  System_String_o *v371; // x2
  System_String_o *v372; // x3
  int32_t v373; // w4
  int32_t v374; // w5
  bool v375; // w6
  bool v376; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v377; // x0
  System_String_o *v378; // x2
  System_String_o *v379; // x3
  int32_t v380; // w4
  int32_t v381; // w5
  bool v382; // w6
  bool v383; // w7
  Il2CppObject *v384; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v385; // x0
  System_String_o *v386; // x2
  System_String_o *v387; // x3
  int32_t v388; // w4
  int32_t v389; // w5
  bool v390; // w6
  bool v391; // w7
  int64_t v392; // x21
  MapControl_WarInfo_o *v393; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v394; // x0
  System_String_o *v395; // x2
  System_String_o *v396; // x3
  int32_t v397; // w4
  int32_t v398; // w5
  bool v399; // w6
  bool v400; // w7
  MapControl_MapInfo_o *v401; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v402; // x0
  System_String_o *v403; // x2
  System_String_o *v404; // x3
  int32_t v405; // w4
  int32_t v406; // w5
  bool v407; // w6
  bool v408; // w7
  MapControl_SpotInfo_o *v409; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v410; // x0
  System_String_o *v411; // x2
  System_String_o *v412; // x3
  int32_t v413; // w4
  int32_t v414; // w5
  bool v415; // w6
  bool v416; // w7
  WarEntity_o *v417; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v418; // x0
  System_String_o *v419; // x2
  System_String_o *v420; // x3
  int32_t v421; // w4
  int32_t v422; // w5
  bool v423; // w6
  bool v424; // w7
  __int64 v425; // x1
  DataManager_o *v426; // x0
  Il2CppObject *v427; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v428; // x0
  System_String_o *v429; // x2
  System_String_o *v430; // x3
  int32_t v431; // w4
  int32_t v432; // w5
  bool v433; // w6
  bool v434; // w7
  __int64 v435; // x1
  __int64 v436; // x2
  Il2CppObject *Master_object; // x0
  __int64 v438; // x1
  __int64 v439; // x2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v440; // x8
  struct QuestTree___c__DisplayClass48_6_o *_8__3; // x9
  OptionManager_c *v442; // x0
  struct QuestTree___c__DisplayClass48_6_o *v443; // x20
  int32_t v444; // w10
  System_Collections_Generic_List_int__c *v445; // x0
  System_Collections_Generic_List_int__o *v446; // x21
  __int64 v447; // x0
  __int64 v448; // x1
  System_String_o *v449; // x2
  System_String_o *v450; // x3
  int32_t v451; // w4
  int32_t v452; // w5
  bool v453; // w6
  bool v454; // w7
  __int64 v455; // x1
  System_Collections_Generic_List_object__o *v456; // x0
  Il2CppObject *current; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v458; // x9
  System_String_o *v459; // x2
  System_String_o *v460; // x3
  int32_t v461; // w4
  int32_t v462; // w5
  bool v463; // w6
  bool v464; // w7
  const MethodInfo *v465; // x1
  bool v466; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v467; // x0
  struct MapControl_SpotInfo_o *v468; // x20
  __int64 spotId; // x1
  System_String_o *v470; // x2
  System_String_o *v471; // x3
  int32_t v472; // w4
  int32_t v473; // w5
  bool v474; // w6
  bool v475; // w7
  SpotEntity_o *Mine; // x8
  struct QuestTree___c__DisplayClass48_0_o *v477; // x9
  struct QuestTree___c__DisplayClass48_6_o *v478; // x8
  System_Collections_Generic_List_int__o *spotInfoList; // x8
  struct System_Int32_array *v480; // x9
  _QWORD *v481; // x10
  __int64 v482; // x11
  unsigned __int64 v483; // t2
  __int64 v484; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v485; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v487; // x20
  Il2CppObject *v488; // x22
  System_Func_object__bool__o *v489; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v490; // x0
  System_Object_array *v491; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v492; // x0
  System_String_o *v493; // x2
  System_String_o *v494; // x3
  int32_t v495; // w4
  int32_t v496; // w5
  bool v497; // w6
  bool v498; // w7
  System_Collections_Generic_IEnumerable_TSource__o *questList_5__24; // x0
  int32_t mapIdx_5__12; // w8
  int32_t v501; // w9
  struct QuestTree___c__DisplayClass48_1_o *v502; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v504; // x0
  __int64 v505; // x1
  SpotEntity_array *v506; // x20
  il2cpp_array_size_t v507; // x25
  __int64 v508; // x26
  __int64 v509; // x22
  __int64 v510; // x0
  __int64 v511; // x1
  SpotEntity_o *v512; // x21
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v514; // x24
  __int64 v515; // x0
  __int64 v516; // x1
  unsigned int v517; // w0
  __int64 v518; // x1
  System_Collections_Generic_List_object__o *v519; // x0
  MapControl_MapInfo_o *v520; // x0
  Il2CppObject *v521; // x1
  System_String_o *v522; // x2
  System_String_o *v523; // x3
  int32_t v524; // w4
  int32_t v525; // w5
  bool v526; // w6
  bool v527; // w7
  System_Collections_Generic_List_object__o *v528; // x0
  struct System_Object_array *v529; // x8
  _QWORD *v530; // x9
  __int64 v531; // x10
  Il2CppClass **v532; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v533; // x0
  System_Object_array *v534; // x0
  __int64 v535; // x1
  System_String_o *v536; // x2
  System_String_o *v537; // x3
  int32_t v538; // w4
  int32_t v539; // w5
  bool v540; // w6
  bool v541; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v542; // x20
  __int64 v543; // x21
  __int64 v544; // x1
  __int64 v545; // x2
  QuestTree___c_c *v546; // x0
  struct QuestTree___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__48_6; // x22
  Il2CppObject *v549; // x23
  struct QuestTree___c_StaticFields *v550; // x0
  System_String_o *v551; // x2
  System_String_o *v552; // x3
  int32_t v553; // w4
  int32_t v554; // w5
  bool v555; // w6
  bool v556; // w7
  System_Collections_Generic_IEnumerable_T__o *v557; // x23
  System_Collections_Generic_HashSet_int__o *v558; // x22
  __int64 v559; // x0
  __int64 v560; // x1
  System_String_o *v561; // x2
  System_String_o *v562; // x3
  int32_t v563; // w4
  int32_t v564; // w5
  bool v565; // w6
  bool v566; // w7
  System_Collections_Generic_List_T__o *v567; // x22
  System_Func_object__bool__o *v568; // x23
  __int64 v569; // x1
  System_Collections_Generic_List_object__o *v570; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v571; // x0
  struct QuestEntity_array *v572; // x8
  QuestEntity_o *v573; // x20
  struct QuestTree___c__DisplayClass48_6_o *v574; // x9
  NetworkManager_c *v575; // x8
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  int v577; // w11
  NetworkManager_c *v578; // x0
  struct QuestTree___c__DisplayClass48_6_o *v579; // x8
  bool v580; // w0
  __int64 v581; // x1
  int32_t QuestPhase; // w21
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v583; // x22
  struct QuestTree___c__DisplayClass48_6_o *v584; // x25
  System_Predicate_object__o *_9__12; // x24
  System_Collections_Generic_List_object__o *v586; // x23
  System_String_o *v587; // x2
  System_String_o *v588; // x3
  int32_t v589; // w4
  int32_t v590; // w5
  bool v591; // w6
  bool v592; // w7
  Il2CppObject *v593; // x0
  System_String_o *v594; // x2
  System_String_o *v595; // x3
  int32_t v596; // w4
  int32_t v597; // w5
  bool v598; // w6
  bool v599; // w7
  __int64 v600; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v603; // x0
  System_String_o *v604; // x2
  System_String_o *v605; // x3
  int32_t v606; // w4
  int32_t v607; // w5
  bool v608; // w6
  bool v609; // w7
  __int64 v610; // x1
  MapControl_MapInfo_o *v611; // x0
  __int64 v612; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v614; // x0
  System_String_o *v615; // x2
  System_String_o *v616; // x3
  int32_t v617; // w4
  int32_t v618; // w5
  bool v619; // w6
  bool v620; // w7
  __int64 v621; // x1
  MapControl_WarInfo_o *v622; // x0
  struct WarEntity_o *v623; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v624; // x0
  System_String_o *v625; // x2
  System_String_o *v626; // x3
  int32_t v627; // w4
  int32_t v628; // w5
  bool v629; // w6
  bool v630; // w7
  struct QuestTree___c__DisplayClass48_6_o *v631; // x25
  System_Collections_Generic_List_object__o *v632; // x22
  System_Predicate_object__o *_9__13; // x23
  System_String_o *v634; // x2
  System_String_o *v635; // x3
  int32_t v636; // w4
  int32_t v637; // w5
  bool v638; // w6
  bool v639; // w7
  unsigned int v640; // w0
  __int64 v641; // x1
  System_Collections_Generic_List_object__o *v642; // x0
  MapControl_WarInfo_o *v643; // x0
  __int64 v644; // x1
  _BOOL8 HasStatus; // x0
  __int64 v646; // x1
  MapControl_WarInfo_o *v647; // x0
  bool v648; // cc
  __int64 v649; // x1
  WarEntity_o *v650; // x0
  __int64 v651; // x1
  struct QuestTree___c__DisplayClass48_6_o *v652; // x9
  int v653; // w23
  MapControl_WarInfo_o *v654; // x0
  struct QuestTree___c__DisplayClass48_6_o *v655; // x8
  MapControl_SpotInfo_o *v656; // x0
  MapControl_QuestInfo_o *v657; // x0
  System_String_o *v658; // x2
  System_String_o *v659; // x3
  int32_t v660; // w4
  int32_t v661; // w5
  bool v662; // w6
  bool v663; // w7
  struct MapControl_WarInfo_o *v664; // x1
  MapControl_QuestInfo_o *v665; // x22
  int32_t warId; // w8
  struct MapControl_SpotInfo_o *v667; // x1
  System_String_o *v668; // x2
  System_String_o *v669; // x3
  int32_t v670; // w4
  int32_t v671; // w5
  bool v672; // w6
  bool v673; // w7
  int64_t EndTime; // x0
  __int64 v675; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v676; // x9
  WarEntity_o *warEnt_5__18; // x0
  WarEntity_o *IsStartTypeQuest; // x0
  __int64 v679; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v680; // x8
  struct QuestTree___c__DisplayClass48_6_o *v681; // x9
  struct WarEntity_o *v682; // x9
  System_Collections_Generic_Dictionary_int__object__o *v683; // x0
  _BOOL8 v684; // x0
  __int64 v685; // x1
  struct QuestTree___c__DisplayClass48_6_o *v686; // x8
  int v687; // w24
  __int64 v688; // x1
  MapControl_WarInfo_o *v689; // x0
  __int64 v690; // x1
  __int64 v691; // x1
  __int64 v692; // x2
  Il2CppObject *v693; // x23
  __int64 v694; // x0
  struct QuestTree___c__DisplayClass48_6_o *v695; // x8
  bool isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v697; // x0
  MapControl_SpotInfo_o *v698; // x0
  QuestEntity_o *v699; // x0
  __int64 v700; // x1
  _BOOL8 HasFlag; // x0
  __int64 v702; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v703; // x8
  struct MapControl_SpotInfo_o *v704; // x9
  struct MapControl_MapInfo_o *v705; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v707; // x1
  struct MapControl_SpotInfo_o *v708; // x8
  struct MapControl_MapInfo_o *v709; // x9
  MapControl_SpotInfo_o *v710; // x0
  UserQuestEntity_o *v711; // x0
  bool v712; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v713; // x10
  struct QuestTree___c__DisplayClass48_6_o *v714; // x9
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v717; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v718; // x9
  struct QuestTree___c__DisplayClass48_6_o *v719; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v721; // x0
  __int64 v722; // x1
  System_String_o *v723; // x2
  System_String_o *v724; // x3
  int32_t v725; // w4
  int32_t v726; // w5
  bool v727; // w6
  bool v728; // w7
  _QWORD *v729; // x20
  __int64 v730; // x21
  __int64 v731; // x23
  __int64 v732; // x8
  System_Collections_Generic_List_object__o *v733; // x0
  struct System_Object_array *v734; // x8
  _QWORD *v735; // x9
  __int64 v736; // x10
  Il2CppClass **v737; // x8
  System_String_o *v738; // x3
  int32_t v739; // w4
  int32_t v740; // w5
  bool v741; // w6
  bool v742; // w7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x20
  struct QuestTree___c_StaticFields *v744; // x8
  System_Comparison_T__o *_9__48_11; // x21
  Il2CppObject *v746; // x22
  struct QuestTree___c_StaticFields *v747; // x0
  System_String_o *v748; // x2
  System_String_o *v749; // x3
  int32_t v750; // w4
  int32_t v751; // w5
  bool v752; // w6
  bool v753; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v754; // x0
  System_String_o *v755; // x2
  System_String_o *v756; // x3
  int32_t v757; // w4
  int32_t v758; // w5
  bool v759; // w6
  bool v760; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v761; // x0
  System_String_o *v762; // x2
  System_String_o *v763; // x3
  int32_t v764; // w4
  int32_t v765; // w5
  bool v766; // w6
  bool v767; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v768; // x0
  System_String_o *v769; // x2
  System_String_o *v770; // x3
  int32_t v771; // w4
  int32_t v772; // w5
  bool v773; // w6
  bool v774; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v775; // x0
  System_String_o *v776; // x2
  System_String_o *v777; // x3
  int32_t v778; // w4
  int32_t v779; // w5
  bool v780; // w6
  bool v781; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v782; // x0
  System_String_o *v783; // x2
  System_String_o *v784; // x3
  int32_t v785; // w4
  int32_t v786; // w5
  bool v787; // w6
  bool v788; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v789; // x0
  System_String_o *v790; // x2
  System_String_o *v791; // x3
  int32_t v792; // w4
  int32_t v793; // w5
  bool v794; // w6
  bool v795; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v796; // x0
  System_String_o *v797; // x2
  System_String_o *v798; // x3
  int32_t v799; // w4
  int32_t v800; // w5
  bool v801; // w6
  bool v802; // w7
  Il2CppObject *v803; // x0
  __int64 v804; // x1
  System_String_o *v805; // x2
  System_String_o *v806; // x3
  int32_t v807; // w4
  int32_t v808; // w5
  bool v809; // w6
  bool v810; // w7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v811; // x0
  __int64 v812; // x19
  EventStatusQuestMaster_o *v814; // [xsp+8h] [xbp-F8h]
  EventStatusMaster_o *v815; // [xsp+10h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v816[2]; // [xsp+18h] [xbp-E8h] BYREF
  __int64 v817; // [xsp+50h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o **v818; // [xsp+58h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+60h] [xbp-A0h] BYREF
  UserQuestEntity_o *v820; // [xsp+68h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+70h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+78h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+80h] [xbp-80h] BYREF
  Il2CppObject *v824; // [xsp+88h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+90h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v826; // [xsp+98h] [xbp-68h] BYREF

  v826 = this;
  if ( (byte_596D636 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_2213A60(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MapMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_2213A60(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_2213A60(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_2213A60(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_WarEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_QuestEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor___91630040);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&MapControl_MapInfo_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&MapControl_SpotInfo_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_11__);
    sub_2213A60(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_2__);
    sub_2213A60(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_6__);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_2213A60(&QuestTree___c__DisplayClass48_0_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_2213A60(&QuestTree___c__DisplayClass48_1_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_2213A60(&QuestTree___c__DisplayClass48_2_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_2213A60(&QuestTree___c__DisplayClass48_3_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_2213A60(&QuestTree___c__DisplayClass48_4_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_2213A60(&QuestTree___c__DisplayClass48_5_TypeInfo);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_2213A60(&Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_2213A60(&QuestTree___c__DisplayClass48_6_TypeInfo);
    sub_2213A60(&QuestTree___c_TypeInfo);
    sub_2213A60(&WarEntity_TypeInfo);
    sub_2213A60(&MapControl_WarInfo_TypeInfo);
    this = v826;
    byte_596D636 = 1;
  }
  entity = 0;
  v8 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  spotInfo = 0;
  v824 = 0;
  mapGimmickInfo = 0;
  spotRoadInfo = 0;
  value = 0;
  v820 = 0;
  v817 = 0;
  v818 = &v826;
  if ( _1__state <= 2 )
  {
    if ( _1__state )
    {
      if ( _1__state == 1 )
      {
        _8__1 = this->fields.__8__1;
        this->fields.__1__state = -1;
        if ( !_8__1 )
          sub_2213CDC(this, method);
        spotRoadMaster_5__7 = this->fields._spotRoadMaster_5__7;
        if ( !spotRoadMaster_5__7 )
          sub_2213CDC(0, method);
        List = SpotRoadMaster__getList(spotRoadMaster_5__7, _8__1->fields.mapId, 0);
        v224 = List;
        if ( !List )
          sub_2213CDC(0, v223);
        max_length = List->max_length;
        if ( (int)max_length >= 1 )
        {
          v226 = 0;
          do
          {
            v227 = sub_2213CCC(QuestTree___c__DisplayClass48_4_TypeInfo);
            System_Object___ctor((Il2CppObject *)v227, 0);
            if ( (unsigned int)v226 >= LODWORD(v224->max_length) )
              sub_2213CE4(v228);
            v230 = v224->m_Items[v226];
            if ( !v230 )
              sub_2213CDC(v228, v229);
            if ( !v227 )
              sub_2213CDC(v228, v229);
            *(_DWORD *)(v227 + 16) = v230->fields.id;
            if ( !_4__this )
              sub_2213CDC(v228, v229);
            allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            v232 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
            System_Predicate_object____ctor(
              v232,
              (Il2CppObject *)v227,
              Method_QuestTree___c__DisplayClass48_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
              0);
            if ( !allSpotRoadInfoList )
              sub_2213CDC(v233, v234);
            Index = System_Collections_Generic_List_object___FindIndex(
                      allSpotRoadInfoList,
                      (System_Predicate_T__o *)v232,
                      (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
            v236 = Index;
            if ( Index != -1 )
            {
              v237 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
              if ( !v237 )
                sub_2213CDC(0, v236);
              System_Collections_Generic_List_object___RemoveAt(
                v237,
                v236,
                (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
            }
            mapInfo_5__16 = v826->fields._mapInfo_5__16;
            if ( !mapInfo_5__16 )
              sub_2213CDC(0, v236);
            spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v227 + 16), 0);
            QuestTree__SetupSpotRoadInfo(_4__this, v230, &spotRoadInfo, 0);
            v246 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v246
              || (items = v246->fields._items,
                  v239 = (Il2CppObject *)spotRoadInfo,
                  v248 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__,
                  ++v246->fields._version,
                  !items) )
            {
              sub_2213CDC(v246, v239);
            }
            size = v246->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v246,
                v239,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
            }
            else
            {
              v250 = &items->obj.klass + size;
              v246->fields._size = size + 1;
              v250[4] = (Il2CppClass *)v239;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v250 + 4),
                (int32_t)v239,
                v240,
                v241,
                v242,
                v243,
                v244,
                v245);
            }
            ++v226;
          }
          while ( (_DWORD)max_length != (_DWORD)v226 );
        }
        v251 = v826->fields.__8__1;
        if ( !v251 )
          sub_2213CDC(List, v223);
        mapGimmickMaster_5__8 = v826->fields._mapGimmickMaster_5__8;
        if ( !mapGimmickMaster_5__8 )
          sub_2213CDC(0, v223);
        v253 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v251->fields.mapId, 0);
        v261 = v253;
        if ( !v253 )
          sub_2213CDC(0, v254);
        v262 = v253->max_length;
        if ( (int)v262 >= 1 )
        {
          v263 = 0;
          do
          {
            v264 = sub_2213CCC(QuestTree___c__DisplayClass48_5_TypeInfo);
            System_Object___ctor((Il2CppObject *)v264, 0);
            if ( (unsigned int)v263 >= LODWORD(v261->max_length) )
              sub_2213CE4(v265);
            v267 = v261->m_Items[v263];
            if ( !v267 )
              sub_2213CDC(v265, v266);
            if ( !v264 )
              sub_2213CDC(v265, v266);
            *(_DWORD *)(v264 + 16) = v267->fields.id;
            if ( !_4__this )
              sub_2213CDC(v265, v266);
            allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            v269 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
            System_Predicate_object____ctor(
              v269,
              (Il2CppObject *)v264,
              Method_QuestTree___c__DisplayClass48_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
              0);
            if ( !allMapGimmickInfoList )
              sub_2213CDC(v270, v271);
            v272 = System_Collections_Generic_List_object___FindIndex(
                     allMapGimmickInfoList,
                     (System_Predicate_T__o *)v269,
                     (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
            v273 = v272;
            if ( v272 != -1 )
            {
              v274 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
              if ( !v274 )
                sub_2213CDC(0, v273);
              System_Collections_Generic_List_object___RemoveAt(
                v274,
                v273,
                (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
            }
            v275 = v826->fields._mapInfo_5__16;
            if ( !v275 )
              sub_2213CDC(0, v273);
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v275, *(_DWORD *)(v264 + 16), 0);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0);
            v283 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v283
              || (v284 = v283->fields._items,
                  v276 = (Il2CppObject *)mapGimmickInfo,
                  v285 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__,
                  ++v283->fields._version,
                  !v284) )
            {
              sub_2213CDC(v283, v276);
            }
            v286 = v283->fields._size;
            if ( (unsigned int)v286 >= LODWORD(v284->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v283,
                v276,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v285[4] + 192LL) + 112LL));
            }
            else
            {
              v287 = &v284->obj.klass + v286;
              v283->fields._size = v286 + 1;
              v287[4] = (Il2CppClass *)v276;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v287 + 4),
                (int32_t)v276,
                v277,
                v278,
                v279,
                v280,
                v281,
                v282);
            }
            ++v263;
          }
          while ( (_DWORD)v262 != (_DWORD)v263 );
        }
        v288 = v826;
        v826->fields.__2__current = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v288->fields.__2__current,
          0,
          v255,
          v256,
          v257,
          v258,
          v259,
          v260);
        v289 = v826;
        v290 = 2;
LABEL_326:
        v289->fields.__1__state = v290;
        v8 = 1;
        goto LABEL_471;
      }
      if ( _1__state != 2 )
        goto LABEL_471;
      this->fields._mapInfo_5__16 = 0;
      p_mapInfo_5__16 = &this->fields._mapInfo_5__16;
      *((_DWORD *)p_mapInfo_5__16 - 42) = -1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mapInfo_5__16, 0, v2, v3, v4, v5, v6, v7);
      v14 = v826;
      mapCount_5__13 = v826->fields._mapCount_5__13;
      v16 = v826->fields._mapIdx_5__12 + 1;
      v826->fields._mapIdx_5__12 = v16;
    }
    else
    {
      this->fields.__1__state = -1;
      v20 = (Il2CppObject *)sub_2213CCC(QuestTree___c__DisplayClass48_0_TypeInfo);
      System_Object___ctor(v20, 0);
      v21 = v826;
      v826->fields.__8__2 = (struct QuestTree___c__DisplayClass48_0_o *)v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->fields.__8__2, (int32_t)v20, v22, v23, v24, v25, v26, v27);
      _8__2 = v826->fields.__8__2;
      if ( !_8__2 )
        sub_2213CDC(v28, v29);
      v31 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
      _8__2->fields.targetWarId = v826->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance(v31);
      v33 = v826;
      v826->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v33->fields._dataManager_5__2,
        (int32_t)Instance,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      dataManager_5__2 = v826->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_2213CDC(0, v40);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapMaster___);
      v44 = v826->fields._dataManager_5__2;
      if ( !v44 )
        sub_2213CDC(0, v42);
      v45 = DataManager__GetMasterData_object_(
              v44,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotMaster___);
      v46 = v826;
      v826->fields._spotMaster_5__3 = (struct SpotMaster_o *)v45;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v46->fields._spotMaster_5__3,
        (int32_t)v45,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      v54 = v826->fields._dataManager_5__2;
      if ( !v54 )
        sub_2213CDC(0, v53);
      v55 = DataManager__GetMasterData_object_(
              v54,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v56 = v826;
      v826->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v55;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v56->fields._blankEarthSpotMaster_5__4,
        (int32_t)v55,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      v64 = v826->fields._dataManager_5__2;
      if ( !v64 )
        sub_2213CDC(0, v63);
      v65 = DataManager__GetMasterData_object_(
              v64,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
      v66 = v826;
      v826->fields._questMaster_5__5 = (struct QuestMaster_o *)v65;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v66->fields._questMaster_5__5,
        (int32_t)v65,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      v74 = v826->fields._dataManager_5__2;
      if ( !v74 )
        sub_2213CDC(0, v73);
      v75 = DataManager__GetMasterData_object_(
              v74,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v76 = v826;
      v826->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v75;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v76->fields._questPhaseMaster_5__6,
        (int32_t)v75,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      v84 = v826->fields._dataManager_5__2;
      if ( !v84 )
        sub_2213CDC(0, v83);
      v86 = DataManager__GetMasterData_object_(
              v84,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      v87 = v826->fields._dataManager_5__2;
      if ( !v87 )
        sub_2213CDC(0, v85);
      v89 = DataManager__GetMasterData_object_(
              v87,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v90 = v826->fields._dataManager_5__2;
      if ( !v90 )
        sub_2213CDC(0, v88);
      v815 = (EventStatusMaster_o *)DataManager__GetMasterData_object_(
                                      v90,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v92 = v826->fields._dataManager_5__2;
      if ( !v92 )
        sub_2213CDC(0, v91);
      v814 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v92,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v94 = v826->fields._dataManager_5__2;
      if ( !v94 )
        sub_2213CDC(0, v93);
      v95 = DataManager__GetMasterData_object_(
              v94,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v96 = v826;
      v826->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v95;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v96->fields._spotRoadMaster_5__7,
        (int32_t)v95,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      v104 = v826->fields._dataManager_5__2;
      if ( !v104 )
        sub_2213CDC(0, v103);
      v105 = DataManager__GetMasterData_object_(
               v104,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v106 = v826;
      v826->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v105;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v106->fields._mapGimmickMaster_5__8,
        (int32_t)v105,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      v114 = v826->fields._dataManager_5__2;
      if ( !v114 )
        sub_2213CDC(0, v113);
      v115 = DataManager__GetMasterData_object_(
               v114,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v116 = v826;
      v826->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v115;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v116->fields._questPickupMaster_5__9,
        (int32_t)v115,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
      if ( !_4__this )
        sub_2213CDC(v123, v124);
      _4__this->fields.isQuestTreeUpdateFinished = 0;
      v125 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v125,
        (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v126 = v826;
      v826->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v125;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v126->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v125,
        v127,
        v128,
        v129,
        v130,
        v131,
        v132);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v133, v134);
      Time = NetworkManager__getTime(0);
      v136 = QuestTree___c__DisplayClass48_1_TypeInfo;
      v826->fields._nowTime_5__11 = Time;
      v137 = (Il2CppObject *)sub_2213CCC(v136);
      System_Object___ctor(v137, 0);
      v138 = v826;
      v826->fields.__8__1 = (struct QuestTree___c__DisplayClass48_1_o *)v137;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v138->fields.__8__1,
        (int32_t)v137,
        v139,
        v140,
        v141,
        v142,
        v143,
        v144);
      v146 = v826->fields._dataManager_5__2;
      if ( !v146 )
        sub_2213CDC(0, v145);
      v147 = DataManager__GetMasterData_object_(
               v146,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v147 )
        sub_2213CDC(0, v148);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v147,
                                                                       (const MethodInfo_3F0FEAC *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v150 = (Il2CppObject *)v826->fields.__8__2;
      v151 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v151,
        v150,
        Method_QuestTree___c__DisplayClass48_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0);
      v152 = System_Linq_Enumerable__SingleOrDefault_object__59347436(
               Entitys,
               (System_Func_TSource__bool__o *)v151,
               (const MethodInfo_38991EC *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v152 )
        sub_2213CDC(0, v153);
      v154 = v826->fields.__8__1;
      if ( !v154 )
        sub_2213CDC(v152, v153);
      klass_low = LODWORD(v152[1].klass);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      v154->fields.warId = klass_low;
      if ( !mapControlRootInfo )
        sub_2213CDC(0, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v158 = (Il2CppObject *)v826->fields.__8__1;
      v159 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v159,
        v158,
        Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0);
      if ( !allWarInfoList )
        sub_2213CDC(v160, v161);
      v162 = System_Collections_Generic_List_object___FindIndex(
               allWarInfoList,
               (System_Predicate_T__o *)v159,
               (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v163 = (unsigned int)v162;
      if ( (_DWORD)v162 != -1 )
      {
        v164 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v164 )
          sub_2213CDC(0, v163);
        System_Collections_Generic_List_object___RemoveAt(
          v164,
          v163,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v165 = v826->fields.__8__1;
      if ( !v165 )
        sub_2213CDC(v162, v163);
      v166 = _4__this->fields.mapControlRootInfo;
      if ( !v166 )
        sub_2213CDC(0, v163);
      v167 = MapControl_RootInfo__AddChild(v166, v165->fields.warId, v826->fields._nowTime_5__11, 0);
      v168 = v826;
      v826->fields._warInfo_5__14 = v167;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v168->fields._warInfo_5__14,
        (int32_t)v167,
        v169,
        v170,
        v171,
        v172,
        v173,
        v174);
      warInfo_5__14 = v826->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_2213CDC(0, v175);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0) )
      {
        v184 = v826->fields._warInfo_5__14;
        if ( !v184 )
          sub_2213CDC(0, v177);
        EventId = MapControl_WarInfo__GetEventId(v184, 0);
        if ( !v86 )
          sub_2213CDC(EventId, v186);
        v187 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v86,
                 &entity,
                 EventId,
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v187 )
        {
          if ( !entity )
            sub_2213CDC(v187, v177);
          v188 = v826;
          nowTime_5__11 = v826->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v190 = v826->fields._warInfo_5__14;
            if ( !v190 )
              sub_2213CDC(0, v177);
            MapControl_WarInfo__SetStatusCheckFlag(v190, 1, 0, 0);
            v188 = v826;
          }
          v191 = v188->fields._warInfo_5__14;
          if ( !v191 )
            sub_2213CDC(0, v177);
          v192 = MapControl_WarInfo__GetEventId(v191, 0);
          if ( !v89 )
            sub_2213CDC(v192, v193);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v89,
                 &v824,
                 v192,
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v824 )
              sub_2213CDC(0, v194);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v824, 0x2000000, 0) )
            {
              if ( !entity )
                sub_2213CDC(0, v195);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v826->fields._nowTime_5__11, 0) )
              {
                v197 = v826->fields._warInfo_5__14;
                if ( !v197 )
                  sub_2213CDC(0, v196);
                v198 = (unsigned int)MapControl_WarInfo__GetEventId(v197, 0);
                if ( !v815 )
                  sub_2213CDC(0, v198);
                NowEntity = EventStatusMaster__getNowEntity(v815, v198, 0);
                if ( NowEntity )
                {
                  v201 = v826->fields._warInfo_5__14;
                  if ( !v201 )
                    sub_2213CDC(0, v199);
                  v202 = (unsigned int)MapControl_WarInfo__GetEventId(v201, 0);
                  if ( !v814 )
                    sub_2213CDC(0, v202);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v814,
                                        v202,
                                        NowEntity->fields.statusId,
                                        0);
                  v205 = v826->fields.__8__1;
                  if ( !v205 )
                    sub_2213CDC(MismatchQuestList, v204);
                  v206 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v826->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_2213CDC(0, v204);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v205->fields.warId,
                    v206,
                    (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v208 = v826->fields._nowTime_5__11;
          v209 = sub_2213B20(long___TypeInfo, 3);
          v211 = entity;
          if ( !entity )
            sub_2213CDC(v209, v210);
          if ( !v209 )
            sub_2213CDC(0, v210);
          v212 = *(_DWORD *)(v209 + 24);
          if ( !v212 )
            sub_2213CE4(v209);
          *(_QWORD *)(v209 + 32) = entity[5].klass;
          if ( v212 == 1 )
            sub_2213CE4(v209);
          *(_QWORD *)(v209 + 40) = v211[5].monitor;
          if ( v212 <= 2 )
            sub_2213CE4(v209);
          *(_QWORD *)(v209 + 48) = v211[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v208, (System_Int64_array *)v209, 0);
        }
      }
      v213 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v213
        || (v214 = v213->fields._items,
            v177 = (Il2CppObject *)v826->fields._warInfo_5__14,
            v215 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__,
            ++v213->fields._version,
            !v214) )
      {
        sub_2213CDC(v213, v177);
      }
      v216 = v213->fields._size;
      if ( (unsigned int)v216 >= LODWORD(v214->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v213,
          v177,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
      }
      else
      {
        v217 = &v214->obj.klass + v216;
        v213->fields._size = v216 + 1;
        v217[4] = (Il2CppClass *)v177;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v217 + 4), (int32_t)v177, v178, v179, v180, v181, v182, v183);
      }
      v292 = v826->fields._warInfo_5__14;
      if ( !v292 )
        sub_2213CDC(v218, v219);
      if ( !MasterData_object )
        sub_2213CDC(v218, v219);
      v293 = MapMaster__getList((MapMaster_o *)MasterData_object, v292->fields.warId, 0);
      v294 = v826;
      v826->fields._mapList_5__15 = v293;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v294->fields._mapList_5__15,
        (int32_t)v293,
        v295,
        v296,
        v297,
        v298,
        v299,
        v300);
      v14 = v826;
      mapList_5__15 = v826->fields._mapList_5__15;
      v826->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_2213CDC(isSavedMemoryMode, method);
      mapCount_5__13 = mapList_5__15->max_length;
      v16 = 0;
      v14->fields._mapCount_5__13 = mapCount_5__13;
    }
    if ( v16 < mapCount_5__13 )
    {
      v302 = v14->fields._mapList_5__15;
      if ( !v302 )
        sub_2213CDC(isSavedMemoryMode, method);
      if ( (unsigned int)v16 >= LODWORD(v302->max_length) )
        sub_2213CE4(isSavedMemoryMode);
      v303 = v302->m_Items[v16];
      if ( !v303 )
        sub_2213CDC(isSavedMemoryMode, method);
      v304 = v14->fields.__8__1;
      if ( !v304 )
        sub_2213CDC(isSavedMemoryMode, method);
      v305 = v14->fields._warInfo_5__14;
      v304->fields.mapId = v303->fields.id;
      if ( !v305 )
        sub_2213CDC(isSavedMemoryMode, method);
      mapInfoList = (System_Collections_Generic_List_object__o *)v305->fields.mapInfoList;
      if ( mapInfoList )
      {
        _9__3 = (System_Predicate_object__o *)v304->fields.__9__3;
        if ( !_9__3 )
        {
          _9__3 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__3,
            (Il2CppObject *)v304,
            Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
            0);
          v304->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v304->fields.__9__3,
            (int32_t)_9__3,
            v308,
            v309,
            v310,
            v311,
            v312,
            v313);
        }
        isSavedMemoryMode = (struct QuestTree___c_StaticFields **)System_Collections_Generic_List_object___FindIndex(
                                                                    mapInfoList,
                                                                    (System_Predicate_T__o *)_9__3,
                                                                    (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        method = (const MethodInfo *)(unsigned int)isSavedMemoryMode;
        if ( (_DWORD)isSavedMemoryMode != -1 )
        {
          v314 = v826->fields._warInfo_5__14;
          if ( !v314 )
            sub_2213CDC(isSavedMemoryMode, (unsigned int)isSavedMemoryMode);
          v315 = (System_Collections_Generic_List_object__o *)v314->fields.mapInfoList;
          if ( !v315 )
            sub_2213CDC(0, method);
          System_Collections_Generic_List_object___RemoveAt(
            v315,
            (int32_t)method,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
      }
      if ( !_4__this )
        sub_2213CDC(isSavedMemoryMode, method);
      v316 = v826->fields.__8__1;
      if ( !v316 )
        sub_2213CDC(isSavedMemoryMode, method);
      allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
      _9__4 = (System_Predicate_object__o *)v316->fields.__9__4;
      if ( !_9__4 )
      {
        _9__4 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_MapInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__4,
          (Il2CppObject *)v316,
          Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
          0);
        v316->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v316->fields.__9__4,
          (int32_t)_9__4,
          v319,
          v320,
          v321,
          v322,
          v323,
          v324);
      }
      if ( allMapInfoList )
      {
        v325 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v326 = (unsigned int)v325;
        if ( (_DWORD)v325 != -1 )
        {
          v327 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v327 )
            sub_2213CDC(0, v326);
          System_Collections_Generic_List_object___RemoveAt(
            v327,
            v326,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v328 = v826->fields.__8__1;
        if ( !v328 )
          sub_2213CDC(v325, v326);
        v329 = v826->fields._warInfo_5__14;
        if ( !v329 )
          sub_2213CDC(0, v326);
        v330 = MapControl_WarInfo__AddChild(v329, v328->fields.mapId, 0);
        v331 = v826;
        v826->fields._mapInfo_5__16 = v330;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v331->fields._mapInfo_5__16,
          (int32_t)v330,
          v332,
          v333,
          v334,
          v335,
          v336,
          v337);
        v345 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v345
          || (v346 = v345->fields._items,
              v338 = (Il2CppObject *)v826->fields._mapInfo_5__16,
              v347 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__,
              ++v345->fields._version,
              !v346) )
        {
          sub_2213CDC(v345, v338);
        }
        v348 = v345->fields._size;
        if ( (unsigned int)v348 >= LODWORD(v346->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v345,
            v338,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
        }
        else
        {
          v349 = &v346->obj.klass + v348;
          v345->fields._size = v348 + 1;
          v349[4] = (Il2CppClass *)v338;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v349 + 4), (int32_t)v338, v339, v340, v341, v342, v343, v344);
        }
        v502 = v826->fields.__8__1;
        if ( !v502 )
          sub_2213CDC(v350, v351);
        spotMaster_5__3 = v826->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_2213CDC(0, v351);
        v504 = SpotMaster__getList(spotMaster_5__3, v502->fields.mapId, 0);
        v506 = v504;
        if ( !v504 )
          sub_2213CDC(0, v505);
        v507 = v504->max_length;
        if ( (int)v507 >= 1 )
        {
          v508 = 0;
          do
          {
            v509 = sub_2213CCC(QuestTree___c__DisplayClass48_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v509, 0);
            if ( (unsigned int)v508 >= LODWORD(v506->max_length) )
              sub_2213CE4(v510);
            v512 = v506->m_Items[v508];
            if ( !v512 )
              sub_2213CDC(v510, v511);
            if ( !v509 )
              sub_2213CDC(v510, v511);
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            *(_DWORD *)(v509 + 16) = v512->fields.id;
            v514 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v514,
              (Il2CppObject *)v509,
              Method_QuestTree___c__DisplayClass48_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0);
            if ( !allSpotInfoList )
              sub_2213CDC(v515, v516);
            v517 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v514,
                     (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v518 = v517;
            if ( v517 != -1 )
            {
              v519 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v519 )
                sub_2213CDC(0, v518);
              System_Collections_Generic_List_object___RemoveAt(
                v519,
                v518,
                (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v520 = v826->fields._mapInfo_5__16;
            if ( !v520 )
              sub_2213CDC(0, v518);
            spotInfo = MapControl_MapInfo__AddChild(v520, *(_DWORD *)(v509 + 16), 0);
            QuestTree__SetupSpotInfo(_4__this, v512, &spotInfo, 0);
            v528 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v528
              || (v529 = v528->fields._items,
                  v521 = (Il2CppObject *)spotInfo,
                  v530 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__,
                  ++v528->fields._version,
                  !v529) )
            {
              sub_2213CDC(v528, v521);
            }
            v531 = v528->fields._size;
            if ( (unsigned int)v531 >= LODWORD(v529->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v528,
                v521,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v530[4] + 192LL) + 112LL));
            }
            else
            {
              v532 = &v529->obj.klass + v531;
              v528->fields._size = v531 + 1;
              v532[4] = (Il2CppClass *)v521;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v532 + 4),
                (int32_t)v521,
                v522,
                v523,
                v524,
                v525,
                v526,
                v527);
            }
            ++v508;
          }
          while ( (_DWORD)v507 != (_DWORD)v508 );
        }
        v533 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v826->fields._mapInfo_5__16,
                 v826->fields._blankEarthSpotMaster_5__4,
                 0);
        v534 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v533,
                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v542 = (System_Collections_Generic_IEnumerable_TSource__o *)v534;
        if ( !v534 )
          sub_2213CDC(0, v535);
        if ( v534->max_length )
        {
          v543 = sub_2213CCC(QuestTree___c__DisplayClass48_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v543, 0);
          v546 = QuestTree___c_TypeInfo;
          if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, v544, v545);
            v546 = QuestTree___c_TypeInfo;
          }
          static_fields = v546->static_fields;
          _9__48_6 = (System_Func_object__int__o *)static_fields->__9__48_6;
          if ( !_9__48_6 )
          {
            if ( !*(&v546->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v546, v544, v545);
              static_fields = QuestTree___c_TypeInfo->static_fields;
            }
            v549 = (Il2CppObject *)static_fields->__9;
            _9__48_6 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__48_6,
              v549,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_6__,
              0);
            v550 = QuestTree___c_TypeInfo->static_fields;
            v550->__9__48_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__48_6;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v550->__9__48_6,
              (int32_t)_9__48_6,
              v551,
              v552,
              v553,
              v554,
              v555,
              v556);
          }
          v557 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v542,
                                                                  (System_Func_TSource__TResult__o *)_9__48_6,
                                                                  (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v558 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_69943008(
            v558,
            v557,
            (const MethodInfo_42B3EE0 *)Method_System_Collections_Generic_HashSet_int___ctor___91630040);
          if ( !v543 )
            sub_2213CDC(v559, v560);
          *(_QWORD *)(v543 + 16) = v558;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v543 + 16),
            (int32_t)v558,
            v561,
            v562,
            v563,
            v564,
            v565,
            v566);
          v567 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v568 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v568,
            (Il2CppObject *)v543,
            Method_QuestTree___c__DisplayClass48_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0);
          BasicHelper__RemoveElements_object_(
            v567,
            (System_Func_T__bool__o *)v568,
            (const MethodInfo_3815910 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v570 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v570 )
            sub_2213CDC(0, v569);
          System_Collections_Generic_List_object___AddRange(
            v570,
            (System_Collections_Generic_IEnumerable_T__o *)v542,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v571 = v826;
        v826->fields.__2__current = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v571->fields.__2__current,
          0,
          v536,
          v537,
          v538,
          v539,
          v540,
          v541);
        v8 = 1;
        v826->fields.__1__state = 1;
        goto LABEL_471;
      }
      goto LABEL_477;
    }
    if ( !_4__this )
      sub_2213CDC(isSavedMemoryMode, method);
    v352 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
    isSavedMemoryMode = (struct QuestTree___c_StaticFields **)QuestTree___c_TypeInfo;
    if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method, v13);
      isSavedMemoryMode = (struct QuestTree___c_StaticFields **)QuestTree___c_TypeInfo;
    }
    v353 = isSavedMemoryMode[23];
    _9__48_2 = (System_Comparison_T__o *)v353->__9__48_2;
    if ( !_9__48_2 )
    {
      if ( !*((_DWORD *)isSavedMemoryMode + 57) )
      {
        j_il2cpp_runtime_class_init_0(isSavedMemoryMode, method, v13);
        v353 = QuestTree___c_TypeInfo->static_fields;
      }
      v355 = (Il2CppObject *)v353->__9;
      _9__48_2 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MapControl_WarInfo__TypeInfo);
      System_Comparison_object____ctor(_9__48_2, v355, Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_2__, 0);
      v356 = QuestTree___c_TypeInfo->static_fields;
      v356->__9__48_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__48_2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v356->__9__48_2,
        (int32_t)_9__48_2,
        v357,
        v358,
        v359,
        v360,
        v361,
        v362);
    }
    if ( !v352 )
      goto LABEL_477;
    System_Collections_Generic_List_object___Sort_71849708(
      v352,
      _9__48_2,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    v363 = v826;
    v826->fields.__8__1 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v363->fields.__8__1, 0, v364, v365, v366, v367, v368, v369);
    v370 = v826;
    v826->fields._warInfo_5__14 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v370->fields._warInfo_5__14, 0, v371, v372, v373, v374, v375, v376);
    v377 = v826;
    v826->fields._mapList_5__15 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v377->fields._mapList_5__15, 0, v378, v379, v380, v381, v382, v383);
    v384 = (Il2CppObject *)sub_2213CCC(QuestTree___c__DisplayClass48_6_TypeInfo);
    System_Object___ctor(v384, 0);
    v385 = v826;
    v826->fields.__8__3 = (struct QuestTree___c__DisplayClass48_6_o *)v384;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v385->fields.__8__3,
      (int32_t)v384,
      v386,
      v387,
      v388,
      v389,
      v390,
      v391);
    v392 = v826->fields._nowTime_5__11;
    v393 = (MapControl_WarInfo_o *)sub_2213CCC(MapControl_WarInfo_TypeInfo);
    MapControl_WarInfo___ctor(v393, v392, 0);
    v394 = v826;
    v826->fields._warInfo_5__14 = v393;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v394->fields._warInfo_5__14,
      (int32_t)v393,
      v395,
      v396,
      v397,
      v398,
      v399,
      v400);
    v401 = (MapControl_MapInfo_o *)sub_2213CCC(MapControl_MapInfo_TypeInfo);
    MapControl_MapInfo___ctor(v401, 0);
    v402 = v826;
    v826->fields._mapInfo_5__16 = v401;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v402->fields._mapInfo_5__16,
      (int32_t)v401,
      v403,
      v404,
      v405,
      v406,
      v407,
      v408);
    v409 = (MapControl_SpotInfo_o *)sub_2213CCC(MapControl_SpotInfo_TypeInfo);
    MapControl_SpotInfo___ctor(v409, 0);
    v410 = v826;
    v826->fields._spotInfo_5__17 = v409;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v410->fields._spotInfo_5__17,
      (int32_t)v409,
      v411,
      v412,
      v413,
      v414,
      v415,
      v416);
    v417 = (WarEntity_o *)sub_2213CCC(WarEntity_TypeInfo);
    WarEntity___ctor(v417, 0);
    v418 = v826;
    v826->fields._warEnt_5__18 = v417;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v418->fields._warEnt_5__18,
      (int32_t)v417,
      v419,
      v420,
      v421,
      v422,
      v423,
      v424);
    v426 = v826->fields._dataManager_5__2;
    if ( !v426 )
      sub_2213CDC(0, v425);
    v427 = DataManager__GetMasterData_object_(
             v426,
             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    v428 = v826;
    v826->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v427;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v428->fields._userQuestMaster_5__19,
      (int32_t)v427,
      v429,
      v430,
      v431,
      v432,
      v433,
      v434);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v435, v436);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    v440 = v826;
    _8__3 = v826->fields.__8__3;
    if ( !_8__3 )
      sub_2213CDC(Master_object, v438);
    _8__3->fields.nowSpotId = -1;
    v442 = OptionManager_TypeInfo;
    *(_QWORD *)&v440->fields._nowMapId_5__20 = -1;
    if ( !*(&v442->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v442, v438, v439);
    isSavedMemoryMode = (struct QuestTree___c_StaticFields **)OptionManager__isSavedMemoryMode(0);
    if ( !v826 )
      goto LABEL_477;
    v443 = v826->fields.__8__3;
    if ( ((unsigned __int8)isSavedMemoryMode & 1) != 0 )
      v444 = 500;
    else
      v444 = 5000;
    v445 = System_Collections_Generic_List_int__TypeInfo;
    v826->fields._breakInterval_5__22 = v444;
    v446 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v445);
    System_Collections_Generic_List_int____ctor(
      v446,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v443 )
      sub_2213CDC(v447, v448);
    v443->fields.spotInfoList = v446;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v443->fields, (int32_t)v446, v449, v450, v451, v452, v453, v454);
    v456 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
    v826->fields._cnt_5__23 = 0;
    if ( !v456 )
      sub_2213CDC(0, v455);
    System_Collections_Generic_List_object___GetEnumerator(
      v816,
      v456,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    current = v816[0].fields._current;
    v458 = v826;
    v816[1] = v816[0];
    *(_OWORD *)&v826->fields.__7__wrap24.fields._list = *(_OWORD *)&v816[0].fields._list;
    v458->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v458->fields.__7__wrap24, 0, v459, v460, v461, v462, v463, v464);
    this = v826;
    goto LABEL_171;
  }
  switch ( _1__state )
  {
    case 3:
LABEL_171:
      this->fields.__1__state = -3;
      while ( 1 )
      {
        v466 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
                 (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v467 = v826;
        if ( !v466 )
          break;
        v468 = v826->fields.__7__wrap24.fields._current;
        ++v826->fields._cnt_5__23;
        if ( !v468 )
          sub_2213CDC(v467, v465);
        Mine = MapControl_SpotInfo__GetMine(v468, 0);
        if ( !Mine )
          sub_2213CDC(0, spotId);
        this = v826;
        v477 = v826->fields.__8__2;
        if ( !v477 )
          sub_2213CDC(v826, spotId);
        if ( Mine->fields.warId == v477->fields.targetWarId )
        {
          v478 = v826->fields.__8__3;
          if ( !v478 )
            sub_2213CDC(v826, spotId);
          spotInfoList = v478->fields.spotInfoList;
          if ( !spotInfoList
            || (v480 = spotInfoList->fields._items,
                spotId = (unsigned int)v468->fields.spotId,
                v481 = Method_System_Collections_Generic_List_int__Add__,
                ++spotInfoList->fields._version,
                !v480) )
          {
            sub_2213CDC(this, spotId);
          }
          v482 = spotInfoList->fields._size;
          if ( (unsigned int)v482 >= LODWORD(v480->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v481[4] + 192LL) + 112LL));
            this = v826;
          }
          else
          {
            spotInfoList->fields._size = v482 + 1;
            v480->m_Items[v482] = spotId;
          }
        }
        HIDWORD(v483) = 28633112 - 1775253149 * this->fields._cnt_5__23;
        LODWORD(v483) = HIDWORD(v483);
        if ( (unsigned int)(v483 >> 2) < 0xDA740D )
        {
          this->fields.__2__current = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
            0,
            v470,
            v471,
            v472,
            v473,
            v474,
            v475);
          v289 = v826;
          v290 = 3;
          goto LABEL_326;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48____m__Finally1(v826, v465);
      v485 = v826;
      questMaster_5__5 = (DataMasterBase_TMaster__TEntity__PKType__o *)v826->fields._questMaster_5__5;
      *(_QWORD *)&v826->fields.__7__wrap24.fields._index = 0;
      v485->fields.__7__wrap24.fields._current = 0;
      v485->fields.__7__wrap24.fields._list = 0;
      if ( !questMaster_5__5 )
        sub_2213CDC(0, v484);
      v487 = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                    questMaster_5__5,
                                                                    (const MethodInfo_3F0FEAC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
      v488 = (Il2CppObject *)v826->fields.__8__3;
      v489 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v489,
        v488,
        Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0);
      v490 = System_Linq_Enumerable__Where_object_(
               v487,
               (System_Func_TSource__bool__o *)v489,
               (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v491 = System_Linq_Enumerable__ToArray_object_(
               v490,
               (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v492 = v826;
      v826->fields._questList_5__24 = (struct QuestEntity_array *)v491;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v492->fields._questList_5__24,
        (int32_t)v491,
        v493,
        v494,
        v495,
        v496,
        v497,
        v498);
      questList_5__24 = (System_Collections_Generic_IEnumerable_TSource__o *)v826->fields._questList_5__24;
      v826->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       questList_5__24,
                       (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      this = v826;
      v501 = v826->fields._mapCount_5__13;
      v826->fields._mapIdx_5__12 = mapIdx_5__12;
      while ( 1 )
      {
        if ( v501 >= mapIdx_5__12 )
        {
          if ( !_4__this )
            sub_2213CDC(this, method);
          allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
          isSavedMemoryMode = (struct QuestTree___c_StaticFields **)QuestTree___c_TypeInfo;
          if ( !*(&QuestTree___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method, v2);
            isSavedMemoryMode = (struct QuestTree___c_StaticFields **)QuestTree___c_TypeInfo;
          }
          v744 = isSavedMemoryMode[23];
          _9__48_11 = (System_Comparison_T__o *)v744->__9__48_11;
          if ( !_9__48_11 )
          {
            if ( !*((_DWORD *)isSavedMemoryMode + 57) )
            {
              j_il2cpp_runtime_class_init_0(isSavedMemoryMode, method, v2);
              v744 = QuestTree___c_TypeInfo->static_fields;
            }
            v746 = (Il2CppObject *)v744->__9;
            _9__48_11 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MapControl_QuestInfo__TypeInfo);
            System_Comparison_object____ctor(
              _9__48_11,
              v746,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_11__,
              0);
            v747 = QuestTree___c_TypeInfo->static_fields;
            v747->__9__48_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__48_11;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v747->__9__48_11,
              (int32_t)_9__48_11,
              v748,
              v749,
              v750,
              v751,
              v752,
              v753);
          }
          if ( allQuestInfoList )
          {
            System_Collections_Generic_List_object___Sort_71849708(
              allQuestInfoList,
              _9__48_11,
              (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
            v754 = v826;
            v826->fields.__8__3 = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v754->fields.__8__3, 0, v755, v756, v757, v758, v759, v760);
            v761 = v826;
            v826->fields._warInfo_5__14 = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v761->fields._warInfo_5__14,
              0,
              v762,
              v763,
              v764,
              v765,
              v766,
              v767);
            v768 = v826;
            v826->fields._mapInfo_5__16 = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v768->fields._mapInfo_5__16,
              0,
              v769,
              v770,
              v771,
              v772,
              v773,
              v774);
            v775 = v826;
            v826->fields._spotInfo_5__17 = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v775->fields._spotInfo_5__17,
              0,
              v776,
              v777,
              v778,
              v779,
              v780,
              v781);
            v782 = v826;
            v826->fields._warEnt_5__18 = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v782->fields._warEnt_5__18,
              0,
              v783,
              v784,
              v785,
              v786,
              v787,
              v788);
            v789 = v826;
            v826->fields._userQuestMaster_5__19 = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v789->fields._userQuestMaster_5__19,
              0,
              v790,
              v791,
              v792,
              v793,
              v794,
              v795);
            v796 = v826;
            v826->fields._questList_5__24 = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v796->fields._questList_5__24,
              0,
              v797,
              v798,
              v799,
              v800,
              v801,
              v802);
            v803 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !v803 )
              sub_2213CDC(0, v804);
            CommonUI__SetLoadMode((CommonUI_o *)v803, 0, 0);
            v811 = v826;
            _4__this->fields.isInit = 1;
            if ( v811->fields.endCallback )
            {
              v811->fields.__2__current = 0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v811->fields.__2__current,
                0,
                v805,
                v806,
                v807,
                v808,
                v809,
                v810);
              v289 = v826;
              v290 = 5;
              goto LABEL_326;
            }
LABEL_470:
            v8 = 0;
            _4__this->fields.isQuestTreeUpdateFinished = 1;
            goto LABEL_471;
          }
LABEL_477:
          sub_2213CDC(isSavedMemoryMode, method);
        }
        v572 = this->fields._questList_5__24;
        if ( !v572 )
          sub_2213CDC(this, method);
        if ( (unsigned int)v501 >= LODWORD(v572->max_length) )
          sub_2213CE4(this);
        v573 = v572->m_Items[v501];
        if ( !v573 )
          sub_2213CDC(this, method);
        v574 = this->fields.__8__3;
        if ( !v574 )
          sub_2213CDC(this, method);
        v575 = NetworkManager_TypeInfo;
        userQuestMaster_5__19 = this->fields._userQuestMaster_5__19;
        v577 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
        v574->fields.questId = v573->fields.id;
        if ( !v577 )
          j_il2cpp_runtime_class_init_0(v575, method, v2);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v578 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
          v578 = NetworkManager_TypeInfo;
        }
        v579 = v826->fields.__8__3;
        if ( !v579 )
          sub_2213CDC(v578, method);
        if ( !userQuestMaster_5__19 )
          sub_2213CDC(v578, method);
        v580 = UserQuestMaster__TryGetEntity(
                 userQuestMaster_5__19,
                 &v820,
                 v578->static_fields->userIdNumber,
                 v579->fields.questId,
                 0);
        QuestPhase = 0;
        if ( v580 )
        {
          if ( !v820 )
            sub_2213CDC(0, v581);
          QuestPhase = UserQuestEntity__getQuestPhase(v820, 0);
        }
        isSavedMemoryMode = (struct QuestTree___c_StaticFields **)QuestEntity__getSpotId_49489968(
                                                                    v573,
                                                                    QuestPhase + 1,
                                                                    0);
        v583 = v826;
        v584 = v826->fields.__8__3;
        if ( !v584 )
          sub_2213CDC(isSavedMemoryMode, method);
        if ( v584->fields.nowSpotId == (_DWORD)isSavedMemoryMode )
        {
          if ( !_4__this )
            sub_2213CDC(isSavedMemoryMode, method);
        }
        else
        {
          v584->fields.nowSpotId = (int)isSavedMemoryMode;
          if ( !_4__this )
            sub_2213CDC(isSavedMemoryMode, method);
          _9__12 = (System_Predicate_object__o *)v584->fields.__9__12;
          v586 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !_9__12 )
          {
            _9__12 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__12,
              (Il2CppObject *)v584,
              Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
              0);
            v584->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v584->fields.__9__12,
              (int32_t)_9__12,
              v587,
              v588,
              v589,
              v590,
              v591,
              v592);
          }
          if ( !v586 )
            goto LABEL_477;
          v593 = System_Collections_Generic_List_object___Find(
                   v586,
                   (System_Predicate_T__o *)_9__12,
                   (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
          v583->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v593;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v583->fields._spotInfo_5__17,
            (int32_t)v593,
            v594,
            v595,
            v596,
            v597,
            v598,
            v599);
          spotInfo_5__17 = v826->fields._spotInfo_5__17;
          if ( !spotInfo_5__17 )
            sub_2213CDC(0, v600);
          isSavedMemoryMode = (struct QuestTree___c_StaticFields **)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0);
          method = (const MethodInfo *)(unsigned int)isSavedMemoryMode;
          v583 = v826;
          if ( v826->fields._nowMapId_5__20 != (_DWORD)isSavedMemoryMode )
          {
            v826->fields._nowMapId_5__20 = (int)isSavedMemoryMode;
            MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)isSavedMemoryMode, 0);
            v603 = v826;
            v826->fields._mapInfo_5__16 = MapInfoByMapID;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v603->fields._mapInfo_5__16,
              (int32_t)MapInfoByMapID,
              v604,
              v605,
              v606,
              v607,
              v608,
              v609);
            v611 = v826->fields._mapInfo_5__16;
            if ( !v611 )
              sub_2213CDC(0, v610);
            isSavedMemoryMode = (struct QuestTree___c_StaticFields **)MapControl_MapInfo__GetMine(v611, 0);
            if ( !isSavedMemoryMode )
              sub_2213CDC(0, v612);
            v583 = v826;
            method = (const MethodInfo *)*((unsigned int *)isSavedMemoryMode + 5);
            if ( v826->fields._nowWarId_5__21 != (_DWORD)method )
            {
              v826->fields._nowWarId_5__21 = (int)method;
              WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0);
              v614 = v826;
              v826->fields._warInfo_5__14 = WarInfoByWarID;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v614->fields._warInfo_5__14,
                (int32_t)WarInfoByWarID,
                v615,
                v616,
                v617,
                v618,
                v619,
                v620);
              v622 = v826->fields._warInfo_5__14;
              if ( !v622 )
                sub_2213CDC(0, v621);
              v623 = MapControl_WarInfo__GetMine(v622, 0);
              v624 = v826;
              v826->fields._warEnt_5__18 = v623;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v624->fields._warEnt_5__18,
                (int32_t)v623,
                v625,
                v626,
                v627,
                v628,
                v629,
                v630);
              v583 = v826;
            }
          }
        }
        v631 = v583->fields.__8__3;
        if ( !v631 )
          sub_2213CDC(isSavedMemoryMode, method);
        v632 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
        _9__13 = (System_Predicate_object__o *)v631->fields.__9__13;
        if ( !_9__13 )
        {
          _9__13 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_QuestInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__13,
            (Il2CppObject *)v631,
            Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
            0);
          v631->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v631->fields.__9__13,
            (int32_t)_9__13,
            v634,
            v635,
            v636,
            v637,
            v638,
            v639);
        }
        if ( !v632 )
          goto LABEL_477;
        v640 = System_Collections_Generic_List_object___FindIndex(
                 v632,
                 (System_Predicate_T__o *)_9__13,
                 (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
        v641 = v640;
        if ( v640 != -1 )
        {
          v642 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
          if ( !v642 )
            sub_2213CDC(0, v641);
          System_Collections_Generic_List_object___RemoveAt(
            v642,
            v641,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
        }
        v643 = v826->fields._warInfo_5__14;
        if ( !v820 )
        {
          if ( !v643 )
            sub_2213CDC(0, v641);
          goto LABEL_385;
        }
        if ( !v643 )
          sub_2213CDC(0, v641);
        MapControl_WarInfo__SetStatusCheckFlag(v643, 1, 0, 0);
        if ( !v820 )
          sub_2213CDC(0, v644);
        HasStatus = UserQuestEntity__HasStatus(v820, 8, 0);
        if ( !HasStatus )
          break;
        if ( !v820 )
          sub_2213CDC(HasStatus, v646);
        if ( v820->fields.challengeNum >= 1 )
        {
          v647 = v826->fields._warInfo_5__14;
          if ( !v647 )
            sub_2213CDC(0, v646);
LABEL_375:
          MapControl_WarInfo__SetStatusCheckFlag(v647, 4, 0, 0);
        }
        if ( !v820 )
          sub_2213CDC(0, v646);
        v648 = UserQuestEntity__getClearNum(v820, 0) < 1;
        v643 = v826->fields._warInfo_5__14;
        if ( v648 )
        {
          if ( !v643 )
            sub_2213CDC(0, v649);
LABEL_385:
          MapControl_WarInfo__SetStatusCheckFlag(v643, 2, 0, 0);
          v653 = 0;
          goto LABEL_386;
        }
        if ( !v643 )
          sub_2213CDC(0, v649);
        v650 = MapControl_WarInfo__GetMine(v643, 0);
        if ( !v650 )
          sub_2213CDC(0, v651);
        v652 = v826->fields.__8__3;
        if ( !v652 )
          sub_2213CDC(v650, v651);
        v653 = 1;
        if ( v650->fields.lastQuestId == v652->fields.questId )
        {
          v654 = v826->fields._warInfo_5__14;
          if ( !v654 )
            sub_2213CDC(0, v651);
          MapControl_WarInfo__SetStatusCheckFlag(v654, 8, 1, 0);
        }
LABEL_386:
        v655 = v826->fields.__8__3;
        if ( !v655 )
          sub_2213CDC(v650, v651);
        v656 = v826->fields._spotInfo_5__17;
        if ( !v656 )
          sub_2213CDC(0, v651);
        v657 = MapControl_SpotInfo__AddChild(v656, v655->fields.questId, 0);
        v664 = v826->fields._warInfo_5__14;
        if ( !v664 )
          sub_2213CDC(v657, 0);
        v665 = v657;
        if ( !v657 )
          sub_2213CDC(0, v664);
        warId = v664->fields.warId;
        v657->fields._WarInfo_k__BackingField = v664;
        v657->fields.warId = warId;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v657->fields._WarInfo_k__BackingField,
          (int32_t)v664,
          v658,
          v659,
          v660,
          v661,
          v662,
          v663);
        v667 = v826->fields._spotInfo_5__17;
        v665->fields._SpotInfo_k__BackingField = v667;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v665->fields._SpotInfo_k__BackingField,
          (int32_t)v667,
          v668,
          v669,
          v670,
          v671,
          v672,
          v673);
        EndTime = QuestTree__GetEndTime(_4__this, v665, 0);
        v676 = v826;
        v665->fields.endTime = EndTime;
        warEnt_5__18 = v676->fields._warEnt_5__18;
        if ( !warEnt_5__18 )
          sub_2213CDC(0, v675);
        IsStartTypeQuest = (WarEntity_o *)WarEntity__IsStartTypeQuest(warEnt_5__18, 0);
        v680 = v826;
        if ( ((unsigned __int8)IsStartTypeQuest & 1) != 0 )
        {
          IsStartTypeQuest = v826->fields._warEnt_5__18;
          if ( !IsStartTypeQuest )
            sub_2213CDC(0, v679);
          v681 = v826->fields.__8__3;
          if ( !v681 )
            sub_2213CDC(IsStartTypeQuest, v679);
          if ( IsStartTypeQuest->fields.targetId == v681->fields.questId )
          {
            IsStartTypeQuest = (WarEntity_o *)WarEntity__HasFlag(IsStartTypeQuest, 0x8000, 0);
            if ( ((unsigned __int8)IsStartTypeQuest & 1) == 0 )
              goto LABEL_403;
            v680 = v826;
          }
        }
        v682 = v680->fields._warEnt_5__18;
        if ( !v682 )
          sub_2213CDC(IsStartTypeQuest, v679);
        v683 = (System_Collections_Generic_Dictionary_int__object__o *)v680->fields._eventStatusQuestMismatchDictionary_5__10;
        if ( !v683 )
          sub_2213CDC(0, v679);
        v684 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
                 v683,
                 v682->fields.id,
                 &value,
                 (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
        if ( v684 )
        {
          v686 = v826->fields.__8__3;
          if ( !v686 )
            sub_2213CDC(v684, v685);
          if ( !value )
            sub_2213CDC(0, v685);
          if ( System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)value,
                 v686->fields.questId,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
LABEL_403:
            v687 = 1;
            *(_QWORD *)&v665->fields.dispType = 0;
            goto LABEL_407;
          }
        }
        v687 = 1;
        if ( QuestTree__CheckQuestOpen(_4__this, v573, v665, v826->fields._nowWarId_5__21, 0) == 1 )
        {
          v689 = v826->fields._warInfo_5__14;
          if ( !v689 )
            sub_2213CDC(0, v688);
          MapControl_WarInfo__SetStatusCheckFlag(v689, 1, 0, 0);
          v687 = 0;
        }
LABEL_407:
        if ( MapControl_QuestInfo__IsDisaplayable(v665, 0) )
        {
          if ( ((v653 | v687) & 1) == 0 )
          {
            if ( MapControl_QuestInfo__GetQuestType(v665, 0) != 8 )
            {
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v691, v692);
              v693 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestResetMaster___);
              v694 = sub_2213B20(long___TypeInfo, 1);
              v695 = v826->fields.__8__3;
              if ( !v695 )
                sub_2213CDC(v694, v694);
              if ( !v694 )
                goto LABEL_520;
              if ( !*(_DWORD *)(v694 + 24) )
                sub_2213CE4(v694);
              *(_QWORD *)(v694 + 32) = v695->fields.questId;
              if ( !v693 )
LABEL_520:
                sub_2213CDC(v694, v694);
              isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v693,
                                       (System_Int64_array *)v694,
                                       (const MethodInfo_3F10208 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
              if ( !isEntityExistsFromId || v820 == 0 || !UserQuestEntity__IsResetStatus(v820, 0) )
              {
                v697 = v826->fields._spotInfo_5__17;
                if ( !v697 )
                  sub_2213CDC(0, v691);
                MapControl_SpotInfo__AddQuestCount(v697, 1, 0);
              }
            }
            v698 = v826->fields._spotInfo_5__17;
            if ( !v698 )
              sub_2213CDC(0, v691);
            MapControl_SpotInfo__AddAvailableQuestId(v698, v665->fields.questId, 0);
          }
          if ( MapControl_QuestInfo__GetQuestType(v665, 0) == 1 )
          {
            v699 = MapControl_QuestInfo__GetMine(v665, 0);
            if ( !v699 )
              sub_2213CDC(0, v700);
            HasFlag = QuestEntity__HasFlag(v699, 0x400000000000LL, 0);
            v703 = v826;
            if ( !HasFlag )
            {
              v704 = v826->fields._spotInfo_5__17;
              if ( !v704 )
                sub_2213CDC(HasFlag, v702);
              v704->fields._IsNext_k__BackingField = 1;
            }
            v705 = v703->fields._mapInfo_5__16;
            if ( !v705 )
              sub_2213CDC(HasFlag, v702);
            v705->fields._IsNext_k__BackingField = 1;
          }
          IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v665, 0);
          if ( IsDisplayQuestNextIcon )
          {
            v708 = v826->fields._spotInfo_5__17;
            if ( !v708 )
              sub_2213CDC(IsDisplayQuestNextIcon, v707);
            v709 = v826->fields._mapInfo_5__16;
            v708->fields._IsNext_k__BackingField = 1;
            if ( !v709 )
              sub_2213CDC(IsDisplayQuestNextIcon, v707);
            v709->fields._IsNext_k__BackingField = 1;
          }
          if ( QuestEntity__HasFlag(v573, 0x8000000000LL, 0) )
          {
            v710 = v826->fields._spotInfo_5__17;
            if ( !v710 )
              sub_2213CDC(0, v690);
            MapControl_SpotInfo__AddFreeQuestCount(v710, 1, 0);
          }
        }
        v711 = v820;
        v712 = 1;
        if ( v820 )
        {
          v711 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v820, 8, 0);
          v712 = 0;
          if ( ((unsigned __int8)v711 & 1) != 0 )
          {
            if ( !v820 )
              sub_2213CDC(v711, v690);
            v712 = v820->fields.challengeNum == 0;
          }
        }
        v713 = v826;
        v665->fields.isNew = v712;
        v665->fields.questPhase = QuestPhase;
        v714 = v713->fields.__8__3;
        if ( !v714 )
          sub_2213CDC(v711, v690);
        questPickupMaster_5__9 = v713->fields._questPickupMaster_5__9;
        if ( !questPickupMaster_5__9 )
          sub_2213CDC(0, v690);
        Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v714->fields.questId, 0);
        v718 = v826;
        v665->fields.pickupPriority = Priority;
        v719 = v718->fields.__8__3;
        if ( !v719 )
          sub_2213CDC(Priority, v717);
        questPhaseMaster_5__6 = v718->fields._questPhaseMaster_5__6;
        if ( !questPhaseMaster_5__6 )
          sub_2213CDC(0, v717);
        v721 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v719->fields.questId, 0);
        v729 = v721;
        if ( !v721 )
          sub_2213CDC(0, v722);
        v730 = v721[3];
        if ( (int)v730 >= 1 )
        {
          v731 = 0;
          do
          {
            if ( (unsigned int)v731 >= *((_DWORD *)v729 + 6) )
              sub_2213CE4(v721);
            v732 = v729[v731 + 4];
            if ( !v732 )
              sub_2213CDC(v721, v722);
            v721 = MapControl_QuestInfo__AddChild(v665, *(_DWORD *)(v732 + 16), *(_DWORD *)(v732 + 20), 0);
            ++v731;
          }
          while ( (_DWORD)v730 != (_DWORD)v731 );
        }
        v733 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
        if ( !v733
          || (v734 = v733->fields._items,
              v735 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
              ++v733->fields._version,
              !v734) )
        {
          sub_2213CDC(v733, v722);
        }
        v736 = v733->fields._size;
        if ( (unsigned int)v736 >= LODWORD(v734->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v733,
            (Il2CppObject *)v665,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v735[4] + 192LL) + 112LL));
        }
        else
        {
          v737 = &v734->obj.klass + v736;
          v733->fields._size = v736 + 1;
          v737[4] = (Il2CppClass *)v665;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v737 + 4), (int32_t)v665, v723, v724, v725, v726, v727, v728);
        }
        this = v826;
        v291 = v826->fields._mapCount_5__13;
        if ( v291 && !(v291 % v826->fields._breakInterval_5__22) )
        {
          v826->fields.__2__current = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
            0,
            v2,
            v738,
            v739,
            v740,
            v741,
            v742);
          v289 = v826;
          v290 = 4;
          goto LABEL_326;
        }
LABEL_457:
        v501 = v291 + 1;
        mapIdx_5__12 = this->fields._mapIdx_5__12;
        this->fields._mapCount_5__13 = v501;
      }
      v647 = v826->fields._warInfo_5__14;
      if ( !v647 )
        sub_2213CDC(0, v646);
      goto LABEL_375;
    case 4:
      v291 = this->fields._mapCount_5__13;
      this->fields.__1__state = -1;
      goto LABEL_457;
    case 5:
      endCallback = this->fields.endCallback;
      this->fields.__1__state = -1;
      if ( !endCallback )
        sub_2213CDC(this, method);
      v18 = ((__int64 (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
              endCallback->fields.method_code,
              endCallback->fields.method);
      if ( !_4__this )
        sub_2213CDC(v18, v19);
      goto LABEL_470;
  }
LABEL_471:
  v812 = v817;
  if ( v817 )
  {
    sub_2007F40(&v818);
    sub_2213CD4(v812);
  }
  return v8;
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48____m__Finally1(this, method);
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_596D637 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_596D637 = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    v3);
}