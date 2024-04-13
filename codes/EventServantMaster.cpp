void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC08C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC08C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    122,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


EventServantEntity_array *__fastcall EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x11
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42EC090 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventServantEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v27, v28, v29);
    byte_42EC090 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v44 + 8));
    if ( v45 )
    {
      v47 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v47
        || (EventServantEntity_c *)v45->klass->_2.typeHierarchy[v47 - 1] != EventServantEntity_TypeInfo )
      {
        sub_B5D69C(v45, v46);
      }
      if ( v45->fields.missionConditionDetailId == svtId )
      {
        if ( !v30 )
          sub_B5D69C(v45, v46);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          v45,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventServantEntity__Add__);
      }
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_28:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v51 + 8));
  if ( !v30 )
LABEL_34:
    sub_B5D69C(list, v31);
  return (EventServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42EC08A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__,
      eventId,
      svtId,
      method);
    sub_B5D5C4(&EventServantEntity_TypeInfo, v7, v8, v9);
    byte_42EC08A = 1;
  }
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  }
  PK = EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42EC08B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&svtId);
    sub_B5D5C4(&EventServantEntity_TypeInfo, v9, v10, v11);
    byte_42EC08B = 1;
  }
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  }
  PK = EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  EventServantEntity_o *result; // x0
  __int64 v17; // x10

  if ( (byte_42EC08D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventServantEntity_TypeInfo, v9, v10, v11);
    byte_42EC08D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v15,
                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v17 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] == EventServantEntity_TypeInfo
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_14:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


EventServantEntity_o *__fastcall EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  void **v50; // x23
  int32_t v51; // w24
  __int64 v52; // x10
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v53; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x20

  if ( (byte_42EC08E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventServantEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantEntity__Find__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Predicate_EventServantEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Predicate_EventServantEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__, v33, v34, v35);
    sub_B5D5C4(&EventServantMaster___c__DisplayClass4_0_TypeInfo, v36, v37, v38);
    byte_42EC08E = 1;
  }
  v39 = sub_B5D694(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  EventServantMaster___c__DisplayClass4_0___ctor((EventServantMaster___c__DisplayClass4_0_o *)v39, 0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v39 )
    goto LABEL_19;
  *(_QWORD *)(v39 + 16) = v43;
  v50 = (void **)(v39 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
  if ( Count >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v51,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v52 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v52
          && (EventServantEntity_c *)list->klass->_2.typeHierarchy[v52 - 1] == EventServantEntity_TypeInfo
          && HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*v50;
          if ( !*v50 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
            v40,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventServantEntity__Add__);
        }
      }
      if ( ++v51 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B5D69C(list, v40);
  }
LABEL_15:
  v53 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)*v50;
  if ( !*v50 )
    goto LABEL_19;
  if ( v53->fields._size < 1 )
    return 0LL;
  v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v54,
    (Il2CppObject *)v39,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_EventServantEntity___ctor__);
  return (EventServantEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   v53,
                                   (System_Predicate_T__o *)v54,
                                   (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_31581864(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  EventServantEntity_o *result; // x0
  __int64 v18; // x10

  if ( (byte_42EC08F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, svtId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventServantEntity_TypeInfo, v10, v11, v12);
    byte_42EC08F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v16,
                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v18 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[v18 - 1] == EventServantEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( ++v16 >= v15 )
        return 0LL;
    }
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E568A & 1) == 0 )
  {
    sub_B5D5C4(&EventServantMaster___c_TypeInfo, v1, v2, v3);
    byte_42E568A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventServantMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventServantMaster___c___ctor(EventServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventServantMaster___c___getEntityServantIgnoreEnd_b__4_1(
        EventServantMaster___c_o *this,
        EventServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.endedAt;
}


void __fastcall EventServantMaster___c__DisplayClass4_0___ctor(
        EventServantMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventServantMaster___c__DisplayClass4_0___getEntityServantIgnoreEnd_b__0(
        EventServantMaster___c__DisplayClass4_0_o *this,
        EventServantEntity_o *a,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventServantMaster___c__DisplayClass4_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v20; // x0
  struct EventServantMaster___c_StaticFields *static_fields; // x8
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__4_1; // x20
  Il2CppObject *v23; // x21
  struct EventServantMaster___c_StaticFields *v24; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0

  v5 = this;
  if ( (byte_42E568B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___, (_DWORD)a, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_EventServantEntity__long___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_EventServantEntity__long__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__, v12, v13, v14);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_B5D5C4(&EventServantMaster___c_TypeInfo, v15, v16, v17);
    byte_42E568B = 1;
  }
  if ( !a )
    sub_B5D69C(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.servantEntitys;
  v20 = EventServantMaster___c_TypeInfo;
  if ( (BYTE3(EventServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v20 = EventServantMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__4_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = EventServantMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__4_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__4_1,
      v23,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      (const MethodInfo_2C3003C *)Method_System_Func_EventServantEntity__long___ctor__);
    v24 = EventServantMaster___c_TypeInfo->static_fields;
    v24->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_B5D560(&v24->__9__4_1);
  }
  v25 = System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_1CB32A0 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_41210692((System_Collections_Generic_IEnumerable_long__o *)v25, 0LL);
}