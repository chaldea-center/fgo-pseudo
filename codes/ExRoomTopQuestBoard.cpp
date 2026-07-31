void ExRoomTopQuestBoard___ctor(ExRoomTopQuestBoard_o *this, const MethodInfo *method)
{
  this->fields.infoFrameSideSize = 82;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomTopQuestBoard__Awake(ExRoomTopQuestBoard_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomTopQuestBoard__GetExRoomMissionCounts(
        int32_t *totalCount,
        int32_t *completedCount,
        int32_t *receivableCount,
        const MethodInfo *method)
{
  DataManager_c *v7; // x0
  int v8; // w8
  Il2CppObject *Master_object; // x19
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UserEventMissionMaster_o *v13; // x22
  int64_t Time; // x24
  Il2CppObject *v15; // x25
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x26
  int32_t i; // w27
  EventMissionEntity_o *Item; // x0
  EventMissionEntity_o *v21; // x28
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t MissionProgressType; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w19
  NetworkManager_c *v28; // x0
  const MethodInfo *v29; // x5
  int32_t v30; // w0
  int32_t *v31; // [xsp+8h] [xbp-88h]
  bool IsEventPeriod; // [xsp+20h] [xbp-70h]
  bool IsReceivablePeriod; // [xsp+24h] [xbp-6Ch]
  UserEventMissionEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5932DA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__getEntityList__);
    sub_21FFC50(&ExRoomMissionStatusResolver_TypeInfo);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932DA5 = 1;
  }
  v7 = DataManager_TypeInfo;
  v31 = completedCount;
  *totalCount = 0;
  *completedCount = 0;
  *receivableCount = 0;
  v8 = *(&v7->_2.cctor_finished + 1);
  entity = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, completedCount, receivableCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( Master_object )
  {
    v13 = (UserEventMissionMaster_o *)v10;
    if ( v10 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      Time = NetworkManager__getTime(0);
      v15 = (Il2CppObject *)sub_21FFEBC(ExRoomMissionStatusResolver_TypeInfo);
      System_Object___ctor(v15, 0);
      monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor;
      if ( !monitor )
LABEL_31:
        sub_21FFECC(v16, v17);
      if ( System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__) >= 1 )
      {
        for ( i = 0;
              i < System_Collections_ObjectModel_Collection_object___get_Count(
                    monitor,
                    (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
              ++i )
        {
          Item = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           monitor,
                                           i,
                                           (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
          if ( Item )
          {
            v21 = Item;
            if ( Item->fields.type == 8 )
            {
              IsEventPeriod = EventMissionEntity__IsEventPeriod(Item, Time, 0);
              IsReceivablePeriod = EventMissionEntity__IsReceivablePeriod(v21, Time, 0);
              if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v22, v23);
              MissionProgressType = MissionInfoMaker__GetMissionProgressType(v21, 0);
              if ( MissionProgressType )
              {
                v27 = MissionProgressType;
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25, v26);
                if ( !byte_5931D52 )
                {
                  sub_21FFC50(&NetworkManager_TypeInfo);
                  byte_5931D52 = 1;
                }
                v28 = NetworkManager_TypeInfo;
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25, v26);
                  v28 = NetworkManager_TypeInfo;
                }
                v16 = UserEventMissionMaster__TryGetEntity(
                        v13,
                        &entity,
                        v28->static_fields->userIdNumber,
                        v21->fields.id,
                        0);
                if ( !v15 )
                  goto LABEL_31;
                v30 = ExRoomMissionStatusResolver__Resolve(
                        (ExRoomMissionStatusResolver_o *)v16,
                        v21,
                        entity,
                        v27,
                        Time,
                        v29);
                if ( IsEventPeriod )
                {
                  ++*totalCount;
                  if ( (unsigned int)(v30 - 3) <= 1 )
                    ++*v31;
                }
                if ( IsReceivablePeriod && v30 == 3 )
                  ++*receivableCount;
              }
            }
          }
        }
      }
    }
  }
}


int64_t ExRoomTopQuestBoard__GetNotClearQuestCloseTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  intptr_t m_CachedPtr; // x0
  __int64 v6; // x1
  int64_t v7; // x19
  int64_t v8; // x8
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932DA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5932DA3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v1, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v1, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  m_CachedPtr = UnityEngine_Object__op_Equality(mInstance, 0, 0);
  v7 = 0;
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !mInstance
      || (m_CachedPtr = mInstance[10].fields.m_CachedPtr) == 0
      || (m_CachedPtr = (intptr_t)ScrTerminalListTop__CreateExRoomQuestInfoListFromCaldeaFolder(
                                    (ScrTerminalListTop_o *)m_CachedPtr,
                                    0)) == 0 )
    {
      sub_21FFECC(m_CachedPtr, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)m_CachedPtr,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v8 = 0;
LABEL_16:
    v7 = v8;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v9 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current )
        sub_21FFECC(v9, v10);
      if ( !MapControl_QuestInfo__IsClear((MapControl_QuestInfo_o *)v13.fields._current, 0) )
      {
        v8 = *(__int64 *)((char *)&qword_90 + (_QWORD)current);
        if ( v7 < 1 || v8 < v7 )
          goto LABEL_16;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  }
  return v7;
}


void ExRoomTopQuestBoard__InitInfo(ExRoomTopQuestBoard_o *this, const MethodInfo *method)
{
  ExRoomTopQuestBoard_o *v2; // x19
  int64_t NotClearQuestCloseTime; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *infoRoot; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *infoFrameSprite; // x19

  v2 = this;
  if ( (byte_5932DA2 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    this = (ExRoomTopQuestBoard_o *)sub_21FFC50(&StringLiteral_18435/*"caldeagate_notice_00"*/);
    byte_5932DA2 = 1;
  }
  NotClearQuestCloseTime = ExRoomTopQuestBoard__GetNotClearQuestCloseTime((const MethodInfo *)this);
  infoRoot = v2->fields.infoRoot;
  v2->fields.targetTime = NotClearQuestCloseTime;
  if ( !infoRoot )
    sub_21FFECC(NotClearQuestCloseTime, v4);
  UnityEngine_GameObject__SetActive(infoRoot, NotClearQuestCloseTime > 0, 0);
  infoFrameSprite = v2->fields.infoFrameSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetBanner(infoFrameSprite, (System_String_o *)StringLiteral_18435/*"caldeagate_notice_00"*/, 0);
}


void ExRoomTopQuestBoard__InitSet(
        ExRoomTopQuestBoard_o *this,
        ExRoomTopComponent_o *topComponent,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ExRoomTopComponent_o **p_topDisp; // x20
  AtlasManagerUnit_o *exRoomAtlasManagerUnit; // x0
  const MethodInfo *v12; // x1
  struct ExRoomRootComponent_o *root; // x8
  struct ExRoomResourceCatalogAssetBundle_o *ResourceCatalog_k__BackingField; // x8
  int v15; // w25
  int v16; // w24
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  __int64 v20; // x2
  struct NoticeNumberComponent_o **p_noticeNumber; // x21
  UnityEngine_Object_o *noticeNumber; // x22
  __int64 v23; // x2
  struct ExRoomRootComponent_o *v24; // x8
  Il2CppObject *noticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  struct ExRoomRootComponent_o *v37; // x8
  struct ExRoomResourceCatalogAssetBundle_o *v38; // x8
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+0h] [xbp-90h] BYREF
  int32_t completedCount[2]; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-70h] BYREF
  int32_t receivableCount; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_5932DA1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21058/*"icon_balloon_exroom_quest"*/);
    sub_21FFC50(&StringLiteral_18549/*"chaldea_category_1007"*/);
    byte_5932DA1 = 1;
  }
  receivableCount = 0;
  this->fields.topDisp = topComponent;
  p_topDisp = &this->fields.topDisp;
  memset(&v41, 0, sizeof(v41));
  *(_QWORD *)completedCount = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.topDisp,
    (int32_t)topComponent,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.topDisp )
    goto LABEL_42;
  root = this->fields.topDisp->fields.root;
  if ( !root )
    goto LABEL_42;
  ResourceCatalog_k__BackingField = root->fields._ResourceCatalog_k__BackingField;
  if ( !ResourceCatalog_k__BackingField )
    goto LABEL_42;
  exRoomAtlasManagerUnit = ResourceCatalog_k__BackingField->fields.exRoomAtlasManagerUnit;
  if ( !exRoomAtlasManagerUnit )
    goto LABEL_42;
  AtlasManagerUnit__SetUI(exRoomAtlasManagerUnit, this->fields.boardSprite, (System_String_o *)StringLiteral_18549/*"chaldea_category_1007"*/, 0);
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)this->fields.boardSprite;
  if ( !exRoomAtlasManagerUnit )
    goto LABEL_42;
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)((__int64 (__fastcall *)(AtlasManagerUnit_o *, void *))exRoomAtlasManagerUnit->klass[2]._1.parent)(
                                                   exRoomAtlasManagerUnit,
                                                   exRoomAtlasManagerUnit->klass[2]._1.generic_class);
  if ( !*p_topDisp )
    goto LABEL_42;
  if ( !(*p_topDisp)->fields.root )
    goto LABEL_42;
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)ExRoomRootComponent__get_TerminalScene(
                                                   (ExRoomRootComponent_o *)exRoomAtlasManagerUnit,
                                                   v12);
  if ( !exRoomAtlasManagerUnit )
    goto LABEL_42;
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)exRoomAtlasManagerUnit[4].klass;
  if ( !exRoomAtlasManagerUnit )
    goto LABEL_42;
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)ScrTerminalListTop__CreateExRoomQuestInfoListFromCaldeaFolder(
                                                   (ScrTerminalListTop_o *)exRoomAtlasManagerUnit,
                                                   0);
  if ( !exRoomAtlasManagerUnit )
    goto LABEL_42;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)exRoomAtlasManagerUnit,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v15 = 0;
  v16 = 0;
  v41 = v39;
  v39.fields._list = 0;
  *(_QWORD *)&v39.fields._index = &v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
  {
    if ( !v41.fields._current )
      sub_21FFECC(0, v17);
    v16 += LOBYTE(v41.fields._current[2].monitor);
    v15 += !MapControl_QuestInfo__IsClear((MapControl_QuestInfo_o *)v41.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  ExRoomTopQuestBoard__GetExRoomMissionCounts(&completedCount[1], completedCount, &receivableCount, v18);
  p_noticeNumber = &this->fields.noticeNumber;
  noticeNumber = (UnityEngine_Object_o *)this->fields.noticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)UnityEngine_Object__op_Equality(noticeNumber, 0, 0);
  if ( ((unsigned __int8)exRoomAtlasManagerUnit & 1) != 0 )
  {
    if ( !*p_topDisp )
      goto LABEL_42;
    v24 = (*p_topDisp)->fields.root;
    if ( !v24 )
      goto LABEL_42;
    noticeNumberPrefab = (Il2CppObject *)v24->fields.noticeNumberPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v23);
    exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)UnityEngine_Object__Instantiate_object_(
                                                     noticeNumberPrefab,
                                                     (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.noticeNumberRoot )
      goto LABEL_42;
    v26 = (UnityEngine_GameObject_o *)exRoomAtlasManagerUnit;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.noticeNumberRoot, 0);
    GameObjectExtensions__SafeSetParent(v26, transform, 0);
    if ( !v26 )
      goto LABEL_42;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v26,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_noticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.noticeNumber,
      (int32_t)Component_object,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)*p_noticeNumber;
  if ( !*p_noticeNumber )
    goto LABEL_42;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)exRoomAtlasManagerUnit, receivableCount + v15, 0);
  ExRoomTopQuestBoard__InitInfo(this, v35);
  ExRoomTopQuestBoard__UpdateInfo(this, v36);
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)this->fields.balloonSprite;
  if ( v16 >= 1 )
  {
    if ( exRoomAtlasManagerUnit )
    {
      exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)exRoomAtlasManagerUnit,
                                                       0);
      if ( exRoomAtlasManagerUnit )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomAtlasManagerUnit, 1, 0);
        if ( *p_topDisp )
        {
          v37 = (*p_topDisp)->fields.root;
          if ( v37 )
          {
            v38 = v37->fields._ResourceCatalog_k__BackingField;
            if ( v38 )
            {
              exRoomAtlasManagerUnit = v38->fields.exRoomAtlasManagerUnit;
              if ( exRoomAtlasManagerUnit )
              {
                AtlasManagerUnit__SetUI(
                  exRoomAtlasManagerUnit,
                  this->fields.balloonSprite,
                  (System_String_o *)StringLiteral_21058/*"icon_balloon_exroom_quest"*/,
                  0);
                exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)this->fields.balloonSprite;
                if ( exRoomAtlasManagerUnit )
                {
                  ((void (__fastcall *)(AtlasManagerUnit_o *, void *))exRoomAtlasManagerUnit->klass[2]._1.parent)(
                    exRoomAtlasManagerUnit,
                    exRoomAtlasManagerUnit->klass[2]._1.generic_class);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_21FFECC(exRoomAtlasManagerUnit, v12);
  }
  if ( !exRoomAtlasManagerUnit )
    goto LABEL_42;
  exRoomAtlasManagerUnit = (AtlasManagerUnit_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)exRoomAtlasManagerUnit,
                                                   0);
  if ( !exRoomAtlasManagerUnit )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomAtlasManagerUnit, 0, 0);
}


void ExRoomTopQuestBoard__OnClickQuest(ExRoomTopQuestBoard_o *this, const MethodInfo *method)
{
  ExRoomTopComponent_o *topDisp; // x0

  topDisp = this->fields.topDisp;
  if ( !topDisp )
    sub_21FFECC(0, method);
  ExRoomTopComponent__OnClickQuest(topDisp, method);
}


// attributes: thunk
void ExRoomTopQuestBoard__Update(ExRoomTopQuestBoard_o *this, const MethodInfo *method)
{
  ExRoomTopQuestBoard__UpdateInfo(this, method);
}


void ExRoomTopQuestBoard__UpdateInfo(ExRoomTopQuestBoard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *RestTime; // x0
  void *infoFrameSprite; // x0
  __int64 v7; // x1
  struct UILabel_o *infoLabel; // x8
  System_String_o *v9; // x20
  float FontWidth; // s0
  int v11; // w9

  if ( (byte_5932DA4 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13953/*"TIME_REST_QUEST"*/);
    byte_5932DA4 = 1;
  }
  if ( this->fields.targetTime >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13953/*"TIME_REST_QUEST"*/, 0);
    RestTime = LocalizationManager__GetRestTime(this->fields.targetTime, 0);
    infoFrameSprite = System_String__Concat_75438412(v4, RestTime, 0);
    infoLabel = this->fields.infoLabel;
    if ( !infoLabel )
      goto LABEL_16;
    v9 = (System_String_o *)infoFrameSprite;
    if ( !infoFrameSprite )
      goto LABEL_16;
    if ( System_String__Equals_75473208((System_String_o *)infoFrameSprite, infoLabel->fields.mText, 0) )
      return;
    infoFrameSprite = this->fields.infoLabel;
    if ( !infoFrameSprite
      || (UILabel__set_text((UILabel_o *)infoFrameSprite, v9, 0), (infoFrameSprite = this->fields.infoLabel) == 0)
      || (FontWidth = WrapControlText__getFontWidth(
                        (UILabel_o *)infoFrameSprite,
                        *((System_String_o **)infoFrameSprite + 52),
                        *((_DWORD *)infoFrameSprite + 106),
                        0),
          (infoFrameSprite = this->fields.infoFrameSprite) == 0) )
    {
LABEL_16:
      sub_21FFECC(infoFrameSprite, v7);
    }
    v11 = (int)FontWidth;
    if ( FontWidth == INFINITY )
      v11 = 0x80000000;
    UIWidget__set_width((UIWidget_o *)infoFrameSprite, this->fields.infoFrameSideSize + v11, 0);
  }
}