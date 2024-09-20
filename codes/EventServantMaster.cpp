void __fastcall EventServantMaster___ctor(EventServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
    byte_4A5B2B9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    123,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string___ctor__);
}


EventServantEntity_array *__fastcall EventServantMaster__GetEntities(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5B2BD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventServantEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    byte_4A5B2BD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( v18 )
    {
      methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
        || *(EventServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != EventServantEntity_TypeInfo )
      {
        sub_1B8880C(v18, v19);
      }
      if ( *(_DWORD *)(v18 + 20) == svtId )
      {
        if ( !v5 )
          sub_1B8880C(v18, v19);
        items = v5->fields._items;
        v25 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1B8880C(v18, v19);
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v22;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), v22, v20, v21);
        }
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  if ( !v5 )
LABEL_38:
    sub_1B8880C(list, v6);
  return (EventServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__GetEntity(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B2B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
    sub_1B885B0(&EventServantEntity_TypeInfo);
    byte_4A5B2B7 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&svtId);
  return (EventServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantMaster__TryGetEntity(
        EventServantMaster_o *this,
        EventServantEntity_o **entity,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B2B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
    sub_1B885B0(&EventServantEntity_TypeInfo);
    byte_4A5B2B8 = 1;
  }
  if ( !EventServantEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventServantEntity_TypeInfo);
  PK = (Il2CppObject *)EventServantEntity__CreatePK(eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventServantMaster__EventServantEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  EventServantEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B2BA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventServantEntity_TypeInfo);
    byte_4A5B2BA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventServantEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         list,
                                         v8,
                                         (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_14:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


EventServantEntity_o *__fastcall EventServantMaster__getEntityServantIgnoreEnd(
        EventServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v9; // x24
  int32_t v10; // w2
  int32_t v11; // w3
  void **v12; // x23
  int32_t v13; // w24
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v18; // x9
  __int64 klass_low; // x10
  __int64 v20; // x8
  System_Collections_Generic_List_object__o *v21; // x19
  System_Predicate_object__o *v22; // x20

  if ( (byte_4A5B2BB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventServantEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventServantEntity__TypeInfo);
    sub_1B885B0(&System_Predicate_EventServantEntity__TypeInfo);
    sub_1B885B0(&Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__);
    sub_1B885B0(&EventServantMaster___c__DisplayClass4_0_TypeInfo);
    byte_4A5B2BB = 1;
  }
  v5 = sub_1B887FC(EventServantMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventServantEntity___ctor__);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = v9;
  v12 = (void **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v9, v10, v11);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventServantEntity_TypeInfo
          && HIDWORD(list->fields.items) == svtId )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*v12;
          if ( !*v12 )
            break;
          items = list->fields.items;
          v18 = Method_System_Collections_Generic_List_EventServantEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v6,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v20 + 32) = v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v6, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_18;
    }
LABEL_22:
    sub_1B8880C(list, v6);
  }
LABEL_18:
  v21 = (System_Collections_Generic_List_object__o *)*v12;
  if ( !*v12 )
    goto LABEL_22;
  if ( v21->fields._size < 1 )
    return 0LL;
  v22 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_EventServantMaster___c__DisplayClass4_0__getEntityServantIgnoreEnd_b__0__,
    0LL);
  return (EventServantEntity_o *)System_Collections_Generic_List_object___Find(
                                   v21,
                                   (System_Predicate_T__o *)v22,
                                   (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_EventServantEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
EventServantEntity_o *__fastcall EventServantMaster__getEntity_39266948(
        EventServantMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  EventServantEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B2BC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventServantEntity_TypeInfo);
    byte_4A5B2BC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                         (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


void __fastcall EventServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B2BE & 1) == 0 )
  {
    sub_1B885B0(&EventServantMaster___c_TypeInfo);
    byte_4A5B2BE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventServantMaster___c_TypeInfo->static_fields->__9 = (struct EventServantMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventServantMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
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
  System_Func_T__TResult__o *_9__4_1; // x20
  Il2CppObject *v9; // x21
  struct EventServantMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0

  v4 = this;
  if ( (byte_4A5B2BF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
    sub_1B885B0(&System_Func_EventServantEntity__long__TypeInfo);
    sub_1B885B0(&Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__);
    this = (EventServantMaster___c__DisplayClass4_0_o *)sub_1B885B0(&EventServantMaster___c_TypeInfo);
    byte_4A5B2BF = 1;
  }
  if ( !a )
    sub_1B8880C(this, a);
  endedAt = a->fields.endedAt;
  servantEntitys = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.servantEntitys;
  v7 = EventServantMaster___c_TypeInfo;
  if ( !EventServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantMaster___c_TypeInfo);
    v7 = EventServantMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_T__TResult__o *)v7->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventServantMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__4_1 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_EventServantEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__4_1,
      v9,
      Method_EventServantMaster___c__getEntityServantIgnoreEnd_b__4_1__,
      0LL);
    static_fields = EventServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_EventServantEntity__long__o *)_9__4_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v11, v12);
  }
  v13 = System_Linq_Enumerable__Select_object__long_(
          servantEntitys,
          (System_Func_TSource__TResult__o *)_9__4_1,
          (const MethodInfo_2EB0118 *)Method_System_Linq_Enumerable_Select_EventServantEntity__long___);
  return endedAt == System_Linq_Enumerable__Max_63930096((System_Collections_Generic_IEnumerable_long__o *)v13, 0LL);
}