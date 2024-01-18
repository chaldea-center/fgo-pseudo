void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A9C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__, method);
    byte_418A9C8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    121,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_array *__fastcall EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x11
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_418A9CC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&EventServantEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v12);
    byte_418A9CC = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v27 + 8));
    if ( v28 )
    {
      v30 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v30
        || (EventServantEntity_c *)v28->klass->_2.typeHierarchy[v30 - 1] != EventServantEntity_TypeInfo )
      {
        sub_B2C434(v28, v29);
      }
      if ( v28->fields.missionConditionDetailId == svtId )
      {
        if ( !v13 )
          sub_B2C434(v28, v29);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v28,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventServantEntity__Add__);
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_28:
    v34 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v34 + 8));
  if ( !v13 )
LABEL_34:
    sub_B2C434(list, v14);
  return (EventServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_418A9C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventServantEntity_TypeInfo, v7);
    byte_418A9C6 = 1;
  }
  if ( (BYTE3(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  }
  PK = EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_418A9C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&EventServantEntity_TypeInfo, v9);
    byte_418A9C7 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  EventServantEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_418A9C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventServantEntity_TypeInfo, v6);
    byte_418A9C9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v10,
                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == EventServantEntity_TypeInfo
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_14:
    sub_B2C434(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  void **v27; // x23
  int32_t v28; // w24
  __int64 v29; // x10
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v30; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x20

  if ( (byte_418A9CA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventServantEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantEntity__Find__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v11);
    sub_B2C35C(&Method_System_Predicate_EventServantEntity___ctor__, v12);
    sub_B2C35C(&System_Predicate_EventServantEntity__TypeInfo, v13);
    sub_B2C35C(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__, v14);
    sub_B2C35C(&EventServantMaster___c__DisplayClass4_0_TypeInfo, v15);
    byte_418A9CA = 1;
  }
  v16 = sub_B2C42C(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  EventServantMaster___c__DisplayClass4_0___ctor((EventServantMaster___c__DisplayClass4_0_o *)v16, 0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v16 )
    goto LABEL_19;
  *(_QWORD *)(v16 + 16) = v20;
  v27 = (void **)(v16 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  if ( Count >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v29 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (EventServantEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == EventServantEntity_TypeInfo
          && HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*v27;
          if ( !*v27 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
            v17,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventServantEntity__Add__);
        }
      }
      if ( ++v28 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B2C434(list, v17);
  }
LABEL_15:
  v30 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)*v27;
  if ( !*v27 )
    goto LABEL_19;
  if ( v30->fields._size < 1 )
    return 0LL;
  v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v31,
    (Il2CppObject *)v16,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_EventServantEntity___ctor__);
  return (EventServantEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   v30,
                                   (System_Predicate_T__o *)v31,
                                   (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_30508724(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  EventServantEntity_o *result; // x0
  __int64 v14; // x10

  if ( (byte_418A9CB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventServantEntity_TypeInfo, v8);
    byte_418A9CB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v12,
                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == EventServantEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184192 & 1) == 0 )
  {
    sub_B2C35C(&EventServantMaster___c_TypeInfo, v1);
    byte_4184192 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventServantMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
  EventServantMaster___c__DisplayClass4_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v11; // x0
  struct EventServantMaster___c_StaticFields *static_fields; // x8
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__4_1; // x20
  Il2CppObject *v14; // x21
  struct EventServantMaster___c_StaticFields *v15; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0

  v4 = this;
  if ( (byte_4184193 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___, a);
    sub_B2C35C(&Method_System_Func_EventServantEntity__long___ctor__, v5);
    sub_B2C35C(&System_Func_EventServantEntity__long__TypeInfo, v6);
    sub_B2C35C(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__, v7);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_B2C35C(&EventServantMaster___c_TypeInfo, v8);
    byte_4184193 = 1;
  }
  if ( !a )
    sub_B2C434(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v11 = EventServantMaster___c_TypeInfo;
  if ( (BYTE3(EventServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v11 = EventServantMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = EventServantMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__4_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__4_1,
      v14,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      (const MethodInfo_2712F70 *)Method_System_Func_EventServantEntity__long___ctor__);
    v15 = EventServantMaster___c_TypeInfo->static_fields;
    v15->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_B2C2F8(&v15->__9__4_1, _9__4_1);
  }
  v16 = System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_1A96A94 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_40444508((System_Collections_Generic_IEnumerable_long__o *)v16, 0LL);
}