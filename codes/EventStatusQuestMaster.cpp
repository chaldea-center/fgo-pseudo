void __fastcall EventStatusQuestMaster___ctor(EventStatusQuestMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC0D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC0D1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    258,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string___ctor__);
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

  if ( (byte_42EC0CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__,
      eventId,
      statusId,
      *(_QWORD *)&priority);
    byte_42EC0CF = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&questId);
  return (EventStatusQuestEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventStatusQuestEntity__o *__fastcall EventStatusQuestMaster__GetEntityList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x19
  void *v38; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v41; // w23
  int32_t v42; // w24
  __int64 v43; // x10
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v46; // x21
  struct EventStatusQuestMaster___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_42EC0D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, statusId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventStatusQuestEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventStatusQuestEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&EventStatusQuestEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__, v31, v32, v33);
    sub_B5D5C4(&EventStatusQuestMaster___c_TypeInfo, v34, v35, v36);
    byte_42EC0D2 = 1;
  }
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventStatusQuestEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventStatusQuestEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v41 = Count;
    v42 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v42,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v38 = list;
        v43 = *(&EventStatusQuestEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v43
          && *(EventStatusQuestEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v43 - 8) == EventStatusQuestEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId
          && *((_DWORD *)list + 5) == statusId )
        {
          if ( !v37 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v37,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Add__);
        }
      }
      if ( ++v42 >= v41 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B5D69C(list, v38);
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
    v46 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventStatusQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v46,
      Method_EventStatusQuestMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventStatusQuestEntity___ctor__);
    v47 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v47->__9__3_0 = (struct System_Comparison_EventStatusQuestEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v37 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventStatusQuestEntity__o *)v37;
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

  if ( (byte_42EC0D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&statusId);
    byte_42EC0D0 = 1;
  }
  PK = EventStatusQuestEntity__CreatePK(eventId, statusId, priority, questId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventStatusQuestMaster__EventStatusQuestEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall EventStatusQuestMaster__getMismatchQuestList(
        EventStatusQuestMaster_o *this,
        int32_t eventId,
        int32_t statusId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  EventStatusQuestMaster___c__DisplayClass4_0_o *v49; // x20
  System_Collections_Generic_List_int__o *v50; // x19
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_EventStatusQuestEntity__o *EntityList; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v54; // x21
  EventStatusQuestMaster___c_c *v55; // x8
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__4_0; // x22
  Il2CppObject *v58; // x23
  struct EventStatusQuestMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  EventStatusQuestEntity_o *v66; // x0
  const MethodInfo *v67; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v68; // x22
  _BOOL8 v69; // x0
  __int64 v70; // x1
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EC0D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__,
      eventId,
      statusId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Predicate_EventStatusQuestEntity___ctor__, v31, v32, v33);
    sub_B5D5C4(&System_Predicate_EventStatusQuestEntity__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__, v37, v38, v39);
    sub_B5D5C4(&Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__, v40, v41, v42);
    sub_B5D5C4(&EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&EventStatusQuestMaster___c_TypeInfo, v46, v47, v48);
    byte_42EC0D3 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v49 = (EventStatusQuestMaster___c__DisplayClass4_0_o *)sub_B5D694(EventStatusQuestMaster___c__DisplayClass4_0_TypeInfo);
  EventStatusQuestMaster___c__DisplayClass4_0___ctor(v49, 0LL);
  v50 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v50,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  EntityList = EventStatusQuestMaster__GetEntityList(this, eventId, statusId, v51);
  v54 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)EntityList;
  v55 = EventStatusQuestMaster___c_TypeInfo;
  if ( (BYTE3(EventStatusQuestMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventStatusQuestMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventStatusQuestMaster___c_TypeInfo);
    v55 = EventStatusQuestMaster___c_TypeInfo;
  }
  static_fields = v55->static_fields;
  _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__4_0,
      v58,
      Method_EventStatusQuestMaster___c__getMismatchQuestList_b__4_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    v59 = EventStatusQuestMaster___c_TypeInfo->static_fields;
    v59->__9__4_0 = (struct System_Predicate_EventStatusQuestEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  if ( !v54 )
    goto LABEL_24;
  v66 = (EventStatusQuestEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      v54,
                                      (System_Predicate_T__o *)_9__4_0,
                                      (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__Find__);
  if ( !v66 )
    return v50;
  EntityList = (System_Collections_Generic_List_EventStatusQuestEntity__o *)EventStatusQuestEntity__getPriority(
                                                                              v66,
                                                                              v67);
  if ( !v49 )
LABEL_24:
    sub_B5D69C(EntityList, v53);
  v49->fields.maxPriority = (int)EntityList;
  if ( ((unsigned int)EntityList & 0x80000000) == 0 )
  {
    v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventStatusQuestEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v68,
      (Il2CppObject *)v49,
      Method_EventStatusQuestMaster___c__DisplayClass4_0__getMismatchQuestList_b__1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventStatusQuestEntity___ctor__);
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v54,
      (System_Predicate_T__o *)v68,
      (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_EventStatusQuestEntity__RemoveAll__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v72,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v54,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventStatusQuestEntity__GetEnumerator__);
    while ( 1 )
    {
      v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v72,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__MoveNext__);
      if ( !v69 )
        break;
      if ( !v72.fields.current )
        sub_B5D69C(v69, v70);
      if ( !v50 )
        sub_B5D69C(v69, v70);
      System_Collections_Generic_List_int___Add(
        v50,
        HIDWORD(v72.fields.current[1].monitor),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v72,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventStatusQuestEntity__Dispose__);
  }
  return v50;
}


void __fastcall EventStatusQuestMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventStatusQuestMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5693 & 1) == 0 )
  {
    sub_B5D5C4(&EventStatusQuestMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5693 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventStatusQuestMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventStatusQuestMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventStatusQuestMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return (_DWORD)this - EventStatusQuestEntity__getPriority(a, 0LL);
}


bool __fastcall EventStatusQuestMaster___c___getMismatchQuestList_b__4_0(
        EventStatusQuestMaster___c_o *this,
        EventStatusQuestEntity_o *a,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  clsQuestCheck_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E5694 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, (_DWORD)a, (_DWORD)method, v3);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v5, v6, v7);
    byte_42E5694 = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !a || !v8 )
    sub_B5D69C(v8, v9);
  return clsQuestCheck__CheckQuestPlayableNow(v8, a->fields.questId, 0LL);
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
    sub_B5D69C(this, 0LL);
  return a->fields.priority >= 0 && a->fields.priority == this->fields.maxPriority;
}