void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43556AC & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
    byte_43556AC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    258,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
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

  if ( (byte_43556AA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
    byte_43556AA = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21C0890 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  void *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v16; // x21
  struct EventStatusQuestMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_43556AD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_EventStatusQuestEntity___ctor__);
    sub_B70694(&System_Comparison_EventStatusQuestEntity__TypeInfo);
    sub_B70694(&EventStatusQuestEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
    sub_B70694(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__);
    sub_B70694(&EventStatusQuestMaster___c_TypeInfo);
    byte_43556AD = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v13 = *(&EventStatusQuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v13
          && *(EventStatusQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) == EventStatusQuestEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
        }
      }
      if ( ++v12 >= v11 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B7076C(list, v8);
  }
LABEL_15:
  list = EventStatusQuestMaster___c_TypeInfo;
  if ( (BYTE3(EventStatusQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    list = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = (struct EventStatusQuestMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v16,
      Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventStatusQuestEntity___ctor__);
    v17 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v17->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)_9__3_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v7 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v7;
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

  if ( (byte_43556AB & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
    byte_43556AB = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  EventStatusQuestMaster___c__DisplayClass4_0_o *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v12; // x21
  EventStatusQuestMaster___c_c *v13; // x8
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x22
  Il2CppObject *v16; // x23
  struct EventStatusQuestMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  EventStatusQuestEntity_o *v24; // x0
  const MethodInfo *v25; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43556AE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_System_Predicate_EventStatusQuestEntity___ctor__);
    sub_B70694(&System_Predicate_EventStatusQuestEntity__TypeInfo);
    sub_B70694(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__);
    sub_B70694(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__);
    sub_B70694(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
    sub_B70694(&EventStatusQuestMaster___c_TypeInfo);
    byte_43556AE = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v7 = (EventStatusQuestMaster___c__DisplayClass4_0_o *)sub_B70764(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  EventStatusQuestMaster___c__DisplayClass4_0___ctor(v7, 0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v9);
  v12 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)EntityList;
  v13 = EventStatusQuestMaster___c_TypeInfo;
  if ( (BYTE3(EventStatusQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v13 = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v16,
      Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    v17 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v17->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v12 )
    goto LABEL_24;
  v24 = (EventStatusQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v12,
                                      (System_Predicate_T__o *)_9__4_0,
                                      (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v24 )
    return v8;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              v24,
                                                                              v25);
  if ( !v7 )
LABEL_24:
    sub_B7076C(EntityList, v11);
  v7->fields.maxPriority = (int)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v26,
      (Il2CppObject *)v7,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v12,
      (System_Predicate_T__o *)v26,
      (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v30,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v12,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v30,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v27 )
        break;
      if ( !v30.fields.current )
        sub_B7076C(v27, v28);
      if ( !v8 )
        sub_B7076C(v27, v28);
      System_Collections_Generic_List_int___Add(
        v8,
        HIDWORD(v30.fields.current[1].monitor),
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v30,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v8;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434EA78 & 1) == 0 )
  {
    sub_B70694(&EventStatusQuestMaster___c_TypeInfo);
    byte_434EA78 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v1;
  sub_B70630(static_fields);
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
  if ( !b || (this = (EventStatusQuestMaster___c_o *)EventStatusQuestEntity__getPriority(b, 0LL), !a) )
    sub_B7076C(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, 0LL);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  clsQuestCheck_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_434EA79 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_434EA79 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !v4 )
    sub_B7076C(v4, v5);
  return clsQuestCheck__CheckQuestPlayableNow(v4, a->fields.questId, 0LL);
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
    sub_B7076C(this, 0LL);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}