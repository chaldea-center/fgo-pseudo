void EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970708 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
    byte_5970708 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    244,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


System_Collections_Generic_List_EventBulletinBoardEntity__o *EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        int32_t mapId,
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
  System_Predicate_EventBulletinBoardEntity__c *v16; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Predicate_object__o *v18; // x19

  if ( (byte_5970709 & 1) == 0 )
  {
    sub_2213A60(&Method_ObservableCollectionExtensions_FindAll_EventBulletinBoardEntity___);
    sub_2213A60(&System_Predicate_EventBulletinBoardEntity__TypeInfo);
    sub_2213A60(&Method_EventBulletinBoardMaster___c__DisplayClass1_0__GetAvailableEntityList_b__0__);
    sub_2213A60(&EventBulletinBoardMaster___c__DisplayClass1_0_TypeInfo);
    byte_5970709 = 1;
  }
  v7 = sub_2213CCC(EventBulletinBoardMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = System_Predicate_EventBulletinBoardEntity__TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_DWORD *)(v7 + 24) = eventId;
  *(_DWORD *)(v7 + 28) = mapId;
  v18 = (System_Predicate_object__o *)sub_2213CCC(v16);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_EventBulletinBoardMaster___c__DisplayClass1_0__GetAvailableEntityList_b__0__,
    0);
  return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)ObservableCollectionExtensions__FindAll_object_(
                                                                          list,
                                                                          (System_Predicate_T__o *)v18,
                                                                          (const MethodInfo_38F47D0 *)Method_ObservableCollectionExtensions_FindAll_EventBulletinBoardEntity___);
}


bool EventBulletinBoardMaster__IsAvailable(
        EventBulletinBoardMaster_o *this,
        EventBulletinBoardEntity_o *eventBulletinBoardEntity,
        int32_t eventId,
        int32_t mapId,
        const MethodInfo *method)
{
  int v9; // w8
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  EventBulletinBoardReleaseMaster_o *v13; // x23
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t FollowId; // w0
  const MethodInfo *v18; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_597070A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
    byte_597070A = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventBulletinBoardEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !eventBulletinBoardEntity )
    goto LABEL_15;
  if ( eventBulletinBoardEntity->fields.eventId != eventId )
    return 0;
  v13 = (EventBulletinBoardReleaseMaster_o *)Master_object;
  Master_object = (Il2CppObject *)EventBulletinBoardEntity__IsMatchMapId(eventBulletinBoardEntity, mapId, v12);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v13 )
LABEL_15:
    sub_2213CDC(Master_object, v11);
  if ( EventBulletinBoardReleaseMaster__IsOpen(v13, eventBulletinBoardEntity->fields.id, v14) )
  {
    if ( EventBulletinBoardEntity__GetFollowId(eventBulletinBoardEntity, v15) < 1 )
      return 1;
    FollowId = EventBulletinBoardEntity__GetFollowId(eventBulletinBoardEntity, v16);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           FollowId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__)
      && EventBulletinBoardMaster__IsAvailable(this, (EventBulletinBoardEntity_o *)entity, eventId, mapId, v18) )
    {
      return 1;
    }
  }
  return 0;
}


void EventBulletinBoardMaster___c__DisplayClass1_0___ctor(
        EventBulletinBoardMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventBulletinBoardMaster___c__DisplayClass1_0___GetAvailableEntityList_b__0(
        EventBulletinBoardMaster___c__DisplayClass1_0_o *this,
        EventBulletinBoardEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_2213CDC(this, entity);
  return EventBulletinBoardMaster__IsAvailable(
           this->fields.__4__this,
           entity,
           this->fields.eventId,
           this->fields.mapId,
           v3);
}