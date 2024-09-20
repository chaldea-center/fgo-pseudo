void __fastcall EventServantPointRankMaster___ctor(EventServantPointRankMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
    byte_4A5B2C4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    400,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *__fastcall EventServantPointRankMaster__GetEnableEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityListFromEventAndSvt; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int v13; // w21
  EventServantPointRankEntity_o *v14; // x24
  Il2CppObject *Item; // x0
  EventServantPointRankEntity_o *v16; // x22

  if ( (byte_4A5B2C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
    byte_4A5B2C7 = 1;
  }
  EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                                                             this,
                                                                             eventId,
                                                                             svtId,
                                                                             *(const MethodInfo **)&svtId);
  if ( !EntityListFromEventAndSvt
    || (v12 = EntityListFromEventAndSvt, svtId)
    && !EntityListFromEventAndSvt->fields._size
    && (EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)EventServantPointRankMaster__GetEntityListFromEventAndSvt(
                                                                                   this,
                                                                                   eventId,
                                                                                   0,
                                                                                   v11),
        (v12 = EntityListFromEventAndSvt) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(EntityListFromEventAndSvt, v10);
  }
  if ( v12->fields._size - 1 >= 1 )
  {
    v13 = 0;
    v14 = 0LL;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               v13++,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      v16 = (EventServantPointRankEntity_o *)Item;
      EntityListFromEventAndSvt = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 v12,
                                                                                 v13,
                                                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Item__);
      if ( !v16 )
        goto LABEL_22;
      if ( v16->fields.svtPoint <= svtPoint )
      {
        if ( !EntityListFromEventAndSvt )
          goto LABEL_22;
        if ( EntityListFromEventAndSvt->fields._size > svtPoint )
          goto LABEL_18;
      }
      else if ( !EntityListFromEventAndSvt )
      {
        goto LABEL_22;
      }
      if ( EntityListFromEventAndSvt->fields._size <= svtPoint )
        v16 = (EventServantPointRankEntity_o *)EntityListFromEventAndSvt;
      else
        v16 = v14;
LABEL_18:
      v14 = v16;
      if ( v13 >= v12->fields._size - 1 )
        return v16;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventServantPointRankEntity_o *__fastcall EventServantPointRankMaster__GetEntity(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B2C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
    byte_4A5B2C2 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&svtPoint);
  return (EventServantPointRankEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
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
  EventServantPointRankEntity_c *v23; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4A5B2C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventServantPointRankEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_4A5B2C5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
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
    if ( !v18 )
      goto LABEL_35;
    v23 = EventServantPointRankEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventServantPointRankEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_35:
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 16) == eventId )
    {
      if ( !v5 )
        sub_1B8880C(v18, EventServantPointRankEntity_TypeInfo);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v23);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v5;
}


System_Collections_Generic_List_EventServantPointRankEntity__o *__fastcall EventServantPointRankMaster__GetEntityListFromEventAndSvt(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  EventServantPointRankEntity_c *v25; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B2C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventServantPointRankEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
    byte_4A5B2C6 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventServantPointRankEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventServantPointRankEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
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
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      goto LABEL_36;
    v25 = EventServantPointRankEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventServantPointRankEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 304LL) < (unsigned int)methodPtr_low
      || *(EventServantPointRankEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * methodPtr_low - 8) != EventServantPointRankEntity_TypeInfo )
    {
      sub_1B88ACC(v20);
LABEL_36:
      sub_1B8880C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 16) == eventId && *(_DWORD *)(v20 + 20) == svtId )
    {
      if ( !v7 )
        sub_1B8880C(v20, EventServantPointRankEntity_TypeInfo);
      items = v7->fields._items;
      v28 = Method_System_Collections_Generic_List_EventServantPointRankEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1B8880C(v20, v25);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v22, v23);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_EventServantPointRankEntity__o *)v7;
}


bool __fastcall EventServantPointRankMaster__IsEnableEvent(
        EventServantPointRankMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventServantPointRankEntity__o *EntityListFromEvent; // x0
  __int64 v6; // x1

  if ( (byte_4A5B2C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventServantPointRankEntity__get_Count__);
    byte_4A5B2C8 = 1;
  }
  EntityListFromEvent = EventServantPointRankMaster__GetEntityListFromEvent(this, eventId, method);
  if ( !EntityListFromEvent )
    sub_1B8880C(0LL, v6);
  return EntityListFromEvent->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventServantPointRankMaster__TryGetEntity(
        EventServantPointRankMaster_o *this,
        EventServantPointRankEntity_o **entity,
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B2C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
    byte_4A5B2C3 = 1;
  }
  PK = (Il2CppObject *)EventServantPointRankEntity__CreatePK(eventId, svtPoint, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventServantPointRankMaster__EventServantPointRankEntity__string__TryGetEntity__);
}