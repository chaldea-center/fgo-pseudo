void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD1FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__, method);
    byte_40FD1FC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    257,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventStatusQuestEntity_o *__fastcall EventStatusQuestMaster__GetEntity(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FD1FA & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40FD1FA = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w23
  int32_t v26; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v29; // x10
  EventStatusQuestMaster___c_c *v30; // x0
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v33; // x21
  struct EventStatusQuestMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FD1FD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_EventStatusQuestEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventStatusQuestEntity__TypeInfo, v10);
    sub_B16FFC(&EventStatusQuestEntity_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v15);
    sub_B16FFC(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v16);
    sub_B16FFC(&EventStatusQuestMaster___c_TypeInfo, v17);
    byte_40FD1FD = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&statusId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v27 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v27,
                                                                      v26,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v29 = *(&EventStatusQuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (EventStatusQuestEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == EventStatusQuestEntity_TypeInfo
          && Item->fields.missionTargetId == eventId
          && Item->fields.missionConditionDetailId == statusId )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_15:
  v30 = EventStatusQuestMaster___c_TypeInfo;
  if ( (BYTE3(EventStatusQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v30 = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventStatusQuestEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v33,
      Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventStatusQuestEntity___ctor__);
    v34 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v34->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v18 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventStatusQuestMaster__TryGetEntity(
        EventStatusQuestMaster_o *this,
        EventStatusQuestEntity_o **entity,
        int32_t eventId,
        int32_t statusId,
        int32_t priority,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FD1FB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__, entity);
    byte_40FD1FB = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  EventStatusQuestMaster___c__DisplayClass4_0_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_int__o *v27; // x19
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x21
  EventStatusQuestMaster___c_c *v34; // x8
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x22
  Il2CppObject *v37; // x23
  struct EventStatusQuestMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  EventStatusQuestEntity_o *v45; // x0
  const MethodInfo *v46; // x1
  int32_t Priority; // w0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v52; // x22
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FD1FE & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&Method_System_Predicate_EventStatusQuestEntity___ctor__, v16);
    sub_B16FFC(&System_Predicate_EventStatusQuestEntity__TypeInfo, v17);
    sub_B16FFC(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v18);
    sub_B16FFC(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v19);
    sub_B16FFC(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v20);
    sub_B16FFC(&EventStatusQuestMaster___c_TypeInfo, v21);
    byte_40FD1FE = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v22 = (EventStatusQuestMaster___c__DisplayClass4_0_o *)sub_B170CC(
                                                           EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo,
                                                           *(_QWORD *)&eventId,
                                                           *(_QWORD *)&statusId,
                                                           method,
                                                           v4);
  EventStatusQuestMaster___c__DisplayClass4_0___ctor(v22, 0LL);
  v27 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25,
                                                    v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v28);
  v34 = EventStatusQuestMaster___c_TypeInfo;
  if ( (BYTE3(EventStatusQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v34 = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventStatusQuestEntity__TypeInfo,
                                                                         v29,
                                                                         v30,
                                                                         v31,
                                                                         v32);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v37,
      Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    v38 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v38->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v38->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  if ( !EntityList )
    goto LABEL_24;
  v45 = (EventStatusQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)EntityList,
                                      (System_Predicate_T__o *)_9__4_0,
                                      (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v45 )
    return v27;
  Priority = EventStatusQuestEntity__getPriority(v45, v46);
  if ( !v22 )
LABEL_24:
    sub_B170D4();
  v22->fields.maxPriority = Priority;
  if ( (Priority & 0x80000000) == 0 )
  {
    v52 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_EventStatusQuestEntity__TypeInfo,
                                                                     v48,
                                                                     v49,
                                                                     v50,
                                                                     v51);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v52,
      (Il2CppObject *)v22,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)EntityList,
      (System_Predicate_T__o *)v52,
      (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v54,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__) )
    {
      if ( !v54.fields.current )
        sub_B170D4();
      if ( !v27 )
        sub_B170D4();
      System_Collections_Generic_List_int___Add(
        v27,
        HIDWORD(v54.fields.current[1].monitor),
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v54,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v27;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F706A & 1) == 0 )
  {
    sub_B16FFC(&EventStatusQuestMaster___c_TypeInfo, v1);
    byte_40F706A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventStatusQuestMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventStatusQuestMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventStatusQuestMaster___c___ctor(EventStatusQuestMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventStatusQuestMaster___c___GetEntityList_b__3_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        EventStatusQuestEntity_o *b,
        const MethodInfo *method)
{
  int32_t Priority; // w0

  if ( !b || (Priority = EventStatusQuestEntity__getPriority(b, 0LL), !a) )
    sub_B170D4();
  return Priority - EventStatusQuestEntity__getPriority(a, 0LL);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  __int64 v4; // x1
  clsQuestCheck_o *v5; // x0

  if ( (byte_40F706B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, a);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v4);
    byte_40F706B = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v5 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !v5 )
    sub_B170D4();
  return clsQuestCheck__CheckQuestPlayableNow(v5, a->fields.questId, 0LL);
}


void __fastcall EventStatusQuestMaster___c__DisplayClass4_0___ctor(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventStatusQuestMaster___c__DisplayClass4_0___getMismatchQuestList_b__1(
        EventStatusQuestMaster___c__DisplayClass4_0_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}