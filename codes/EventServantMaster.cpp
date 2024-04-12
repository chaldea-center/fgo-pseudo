void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B34CE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
    byte_42B34CE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    122,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


EventServantEntity_array *__fastcall EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x11
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42B34D2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventServantEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    byte_42B34D2 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_34;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v22 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (EventServantEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != EventServantEntity_TypeInfo )
      {
        sub_B52A5C(v20, v21);
      }
      if ( v20->fields.missionConditionDetailId == svtId )
      {
        if ( !v5 )
          sub_B52A5C(v20, v21);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v20,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventServantEntity__Add__);
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v26 + 8));
  if ( !v5 )
LABEL_34:
    sub_B52A5C(list, v6);
  return (EventServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B34CC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
    sub_B52984(&EventServantEntity_TypeInfo);
    byte_42B34CC = 1;
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
                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B34CD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
    sub_B52984(&EventServantEntity_TypeInfo);
    byte_42B34CD = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  EventServantEntity_o *result; // x0
  __int64 v10; // x10

  if ( (byte_42B34CF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventServantEntity_TypeInfo);
    byte_42B34CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v8,
                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v10 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[v10 - 1] == EventServantEntity_TypeInfo
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( ++v8 >= v7 )
        return 0LL;
    }
LABEL_14:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


EventServantEntity_o *__fastcall EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x24
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  void **v16; // x23
  int32_t v17; // w24
  __int64 v18; // x10
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v19; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_42B34D0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventServantEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventServantEntity__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    sub_B52984(&Method_System_Predicate_EventServantEntity___ctor__);
    sub_B52984(&System_Predicate_EventServantEntity__TypeInfo);
    sub_B52984(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__);
    sub_B52984(&EventServantMaster___c__DisplayClass4_0_TypeInfo);
    byte_42B34D0 = 1;
  }
  v5 = sub_B52A54(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  EventServantMaster___c__DisplayClass4_0___ctor((EventServantMaster___c__DisplayClass4_0_o *)v5, 0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = v9;
  v16 = (void **)(v5 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v18 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventServantEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == EventServantEntity_TypeInfo
          && HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*v16;
          if ( !*v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
            v6,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventServantEntity__Add__);
        }
      }
      if ( ++v17 >= Count )
        goto LABEL_15;
    }
LABEL_19:
    sub_B52A5C(list, v6);
  }
LABEL_15:
  v19 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)*v16;
  if ( !*v16 )
    goto LABEL_19;
  if ( v19->fields._size < 1 )
    return 0LL;
  v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_EventServantEntity___ctor__);
  return (EventServantEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   v19,
                                   (System_Predicate_T__o *)v20,
                                   (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_31163732(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  EventServantEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_42B34D1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventServantEntity_TypeInfo);
    byte_42B34D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&EventServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == EventServantEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACDD4 & 1) == 0 )
  {
    sub_B52984(&EventServantMaster___c_TypeInfo);
    byte_42ACDD4 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventServantMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v7; // x0
  struct EventServantMaster___c_StaticFields *static_fields; // x8
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__4_1; // x20
  Il2CppObject *v10; // x21
  struct EventServantMaster___c_StaticFields *v11; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0

  v4 = this;
  if ( (byte_42ACDD5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
    sub_B52984(&Method_System_Func_EventServantEntity__long___ctor__);
    sub_B52984(&System_Func_EventServantEntity__long__TypeInfo);
    sub_B52984(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_B52984(&EventServantMaster___c_TypeInfo);
    byte_42ACDD5 = 1;
  }
  if ( !a )
    sub_B52A5C(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v7 = EventServantMaster___c_TypeInfo;
  if ( (BYTE3(EventServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v7 = EventServantMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__4_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = EventServantMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__4_1 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B52A54(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__4_1,
      v10,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      (const MethodInfo_2BCA428 *)Method_System_Func_EventServantEntity__long___ctor__);
    v11 = EventServantMaster___c_TypeInfo->static_fields;
    v11->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_B52920(&v11->__9__4_1);
  }
  v12 = System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_1B6A050 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_41106544((System_Collections_Generic_IEnumerable_long__o *)v12, 0LL);
}