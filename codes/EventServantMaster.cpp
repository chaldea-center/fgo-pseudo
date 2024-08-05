void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE662 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__, method);
    byte_49FE662 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    123,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FE666 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B64870(&EventServantEntity_TypeInfo, v5);
    sub_1B64870(&System_IDisposable_TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v12);
    byte_49FE666 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v30 = v26;
    if ( v26 )
    {
      methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != EventServantEntity_TypeInfo )
      {
        sub_1B64ACC(v26, v27);
      }
      if ( *(_DWORD *)(v26 + 20) == svtId )
      {
        if ( !v13 )
          sub_1B64ACC(v26, v27);
        items = v13->fields._items;
        v33 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1B64ACC(v26, v27);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v26,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v30;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), v30, v28, v29);
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                             Enumerator,
                                                             *(_QWORD *)(v39 + 8));
  if ( !v13 )
LABEL_38:
    sub_1B64ACC(list, v14);
  return (EventServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v13,
                                       (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_49FE660 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_1B64870(&EventServantEntity_TypeInfo, v7);
    byte_49FE660 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30D64D8 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_49FE661 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__, entity);
    sub_1B64870(&EventServantEntity_TypeInfo, v9);
    byte_49FE661 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  EventServantEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FE663 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&EventServantEntity_TypeInfo, v6);
    byte_49FE663 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v10,
                                         (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantEntity_TypeInfo
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_14:
    sub_1B64ACC(list, *(_QWORD *)&svtId);
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
  __int64 v15; // x21
  Il2CppObject *v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  void **v22; // x23
  int32_t v23; // w24
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v28; // x9
  __int64 klass_low; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_object__o *v31; // x19
  System_Predicate_object__o *v32; // x20

  if ( (byte_49FE664 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&EventServantEntity_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_EventServantEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_EventServantEntity__Find__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_EventServantEntity___ctor__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__, v10);
    sub_1B64870(&System_Collections_Generic_List_EventServantEntity__TypeInfo, v11);
    sub_1B64870(&System_Predicate_EventServantEntity__TypeInfo, v12);
    sub_1B64870(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__, v13);
    sub_1B64870(&EventServantMaster___c__DisplayClass4_0_TypeInfo, v14);
    byte_49FE664 = 1;
  }
  v15 = sub_1B64ABC(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v15 )
    goto LABEL_22;
  *(_QWORD *)(v15 + 16) = v19;
  v22 = (void **)(v15 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v19, v20, v21);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantEntity_TypeInfo
          && HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*v22;
          if ( !*v22 )
            break;
          items = list->fields.items;
          v28 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v16,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v30 + 32) = v16;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v16, v24, v25);
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_18;
    }
LABEL_22:
    sub_1B64ACC(list, v16);
  }
LABEL_18:
  v31 = (System_Collections_Generic_List_object__o *)*v22;
  if ( !*v22 )
    goto LABEL_22;
  if ( v31->fields._size < 1 )
    return 0LL;
  v32 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v32,
    (Il2CppObject *)v15,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    0LL);
  return (EventServantEntity_o *)System_Collections_Generic_List_object___Find(
                                   v31,
                                   (System_Predicate_T__o *)v32,
                                   (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_38950396(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  EventServantEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FE665 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&EventServantEntity_TypeInfo, v8);
    byte_49FE665 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v12,
                                         (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventServantEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.svtId == svtId )
        {
          return result;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_15:
    sub_1B64ACC(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FE667 & 1) == 0 )
  {
    sub_1B64870(&EventServantMaster___c_TypeInfo, v1);
    byte_49FE667 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventServantMaster___c_TypeInfo->static_fields->__9 = (struct EventServantMaster___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)EventServantMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64ACC(this, 0LL);
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
  int64_t endedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *servantEntitys; // x19
  EventServantMaster___c_c *v10; // x0
  System_Func_T__TResult__o *_9__4_1; // x20
  Il2CppObject *v12; // x21
  struct EventServantMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0

  v4 = this;
  if ( (byte_49FE668 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___, a);
    sub_1B64870(&System_Func_EventServantEntity__long__TypeInfo, v5);
    sub_1B64870(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__, v6);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_1B64870(&EventServantMaster___c_TypeInfo, v7);
    byte_49FE668 = 1;
  }
  if ( !a )
    sub_1B64ACC(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v10 = EventServantMaster___c_TypeInfo;
  if ( !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v10 = EventServantMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_T__TResult__o *)v10->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventServantMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_1 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__4_1,
      v12,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      0LL);
    static_fields = EventServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_2E6B394 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_63606632((System_Collections_Generic_IEnumerable_long__o *)v16, 0LL);
}