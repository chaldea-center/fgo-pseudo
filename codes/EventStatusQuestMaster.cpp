void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AA0D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__, method);
    byte_418AA0D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    257,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
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

  if ( (byte_418AA0B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418AA0B = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  void *v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  __int64 v23; // x10
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v26; // x21
  struct EventStatusQuestMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_418AA0E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventStatusQuestEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventStatusQuestEntity__TypeInfo, v9);
    sub_B2C35C(&EventStatusQuestEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v14);
    sub_B2C35C(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v15);
    sub_B2C35C(&EventStatusQuestMaster___c_TypeInfo, v16);
    byte_418AA0E = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v22,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        v23 = *(&EventStatusQuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v23
          && *(EventStatusQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v23 - 8) == EventStatusQuestEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
        }
      }
      if ( ++v22 >= v21 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B2C434(list, v18);
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v26,
      Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventStatusQuestEntity___ctor__);
    v27 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v17;
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

  if ( (byte_418AA0C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__, entity);
    byte_418AA0C = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  EventStatusQuestMaster___c__DisplayClass4_0_o *v21; // x20
  System_Collections_Generic_List_int__o *v22; // x19
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v26; // x21
  EventStatusQuestMaster___c_c *v27; // x8
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x22
  Il2CppObject *v30; // x23
  struct EventStatusQuestMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  EventStatusQuestEntity_o *v38; // x0
  const MethodInfo *v39; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x22
  _BOOL8 v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418AA0F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&Method_System_Predicate_EventStatusQuestEntity___ctor__, v15);
    sub_B2C35C(&System_Predicate_EventStatusQuestEntity__TypeInfo, v16);
    sub_B2C35C(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v17);
    sub_B2C35C(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v18);
    sub_B2C35C(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v19);
    sub_B2C35C(&EventStatusQuestMaster___c_TypeInfo, v20);
    byte_418AA0F = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v21 = (EventStatusQuestMaster___c__DisplayClass4_0_o *)sub_B2C42C(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  EventStatusQuestMaster___c__DisplayClass4_0___ctor(v21, 0LL);
  v22 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v23);
  v26 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)EntityList;
  v27 = EventStatusQuestMaster___c_TypeInfo;
  if ( (BYTE3(EventStatusQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v27 = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v30,
      Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    v31 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v31->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v26 )
    goto LABEL_24;
  v38 = (EventStatusQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v26,
                                      (System_Predicate_T__o *)_9__4_0,
                                      (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v38 )
    return v22;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              v38,
                                                                              v39);
  if ( !v21 )
LABEL_24:
    sub_B2C434(EntityList, v25);
  v21->fields.maxPriority = (int)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v40,
      (Il2CppObject *)v21,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v26,
      (System_Predicate_T__o *)v40,
      (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v44,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    while ( 1 )
    {
      v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v44,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v41 )
        break;
      if ( !v44.fields.current )
        sub_B2C434(v41, v42);
      if ( !v22 )
        sub_B2C434(v41, v42);
      System_Collections_Generic_List_int___Add(
        v22,
        HIDWORD(v44.fields.current[1].monitor),
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v44,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v22;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418419B & 1) == 0 )
  {
    sub_B2C35C(&EventStatusQuestMaster___c_TypeInfo, v1);
    byte_418419B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, 0LL);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  __int64 v4; // x1
  clsQuestCheck_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_418419C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, a);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v4);
    byte_418419C = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v5 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !v5 )
    sub_B2C434(v5, v6);
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
    sub_B2C434(this, 0LL);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}