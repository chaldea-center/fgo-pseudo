void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4217A06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__, method);
    byte_4217A06 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    257,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
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

  if ( (byte_4217A04 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4217A04 = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  void *v20; // x1
  __int64 v21; // x2
  int32_t v22; // w23
  int32_t v23; // w24
  __int64 v24; // x10
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v27; // x21
  struct EventStatusQuestMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4217A07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_EventStatusQuestEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_EventStatusQuestEntity__TypeInfo, v9);
    sub_B0D8A4(&EventStatusQuestEntity_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v14);
    sub_B0D8A4(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v15);
    sub_B0D8A4(&EventStatusQuestMaster___c_TypeInfo, v16);
    byte_4217A07 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&statusId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v23,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = list;
        v24 = *(&EventStatusQuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v24
          && *(EventStatusQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v24 - 8) == EventStatusQuestEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
        }
      }
      if ( ++v23 >= v22 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B0D97C(list);
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
    v27 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventStatusQuestEntity__TypeInfo,
                                                                          v20,
                                                                          v21);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v27,
      Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventStatusQuestEntity___ctor__);
    v28 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v28->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
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

  if ( (byte_4217A05 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__, entity);
    byte_4217A05 = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_int__o *v24; // x19
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v29; // x21
  EventStatusQuestMaster___c_c *v30; // x8
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x22
  Il2CppObject *v33; // x23
  struct EventStatusQuestMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  EventStatusQuestEntity_o *v41; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x22
  _BOOL8 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4217A08 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Predicate_EventStatusQuestEntity___ctor__, v15);
    sub_B0D8A4(&System_Predicate_EventStatusQuestEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v17);
    sub_B0D8A4(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v18);
    sub_B0D8A4(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v19);
    sub_B0D8A4(&EventStatusQuestMaster___c_TypeInfo, v20);
    byte_4217A08 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v21 = (EventStatusQuestMaster___c__DisplayClass4_0_o *)sub_B0D974(
                                                           EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo,
                                                           *(_QWORD *)&eventId,
                                                           *(_QWORD *)&statusId);
  EventStatusQuestMaster___c__DisplayClass4_0___ctor(v21, 0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v22, v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v25);
  v29 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)EntityList;
  v30 = EventStatusQuestMaster___c_TypeInfo;
  if ( (BYTE3(EventStatusQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v30 = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventStatusQuestEntity__TypeInfo,
                                                                         v27,
                                                                         v28);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v33,
      Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    v34 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v34->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v34->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v29 )
    goto LABEL_24;
  v41 = (EventStatusQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v29,
                                      (System_Predicate_T__o *)_9__4_0,
                                      (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v41 )
    return v24;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              v41,
                                                                              v42);
  if ( !v21 )
LABEL_24:
    sub_B0D97C(EntityList);
  v21->fields.maxPriority = (int)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_EventStatusQuestEntity__TypeInfo,
                                                                     v43,
                                                                     v44);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v45,
      (Il2CppObject *)v21,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v29,
      (System_Predicate_T__o *)v45,
      (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v48,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v29,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v48,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v46 )
        break;
      if ( !v48.fields.current )
        sub_B0D97C(v46);
      if ( !v24 )
        sub_B0D97C(v46);
      System_Collections_Generic_List_int___Add(
        v24,
        HIDWORD(v48.fields.current[1].monitor),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v48,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v24;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4210F17 & 1) == 0 )
  {
    sub_B0D8A4(&EventStatusQuestMaster___c_TypeInfo, v1);
    byte_4210F17 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventStatusQuestMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, 0LL);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  __int64 v4; // x1
  clsQuestCheck_o *v5; // x0

  if ( (byte_4210F18 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, a);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v4);
    byte_4210F18 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v5 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !v5 )
    sub_B0D97C(v5);
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
    sub_B0D97C(this);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}