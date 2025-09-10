void EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27275 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
    byte_4C27275 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    392,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
}


EventFortificationDetailEntity_array *EventFortificationDetailMaster__GetEntitiesByOpend(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4C27277 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
    sub_1C2D490(&System_Func_EventFortificationDetailEntity__bool__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__);
    sub_1C2D490(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
    byte_4C27277 = 1;
  }
  v7 = sub_1C2D6DC(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = eventId,
        *(_DWORD *)(v7 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v9);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v7 + 24) = MasterData_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)MasterData_object, v11, v12);
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v15,
                                                   (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationDetailEntity_o *EventFortificationDetailMaster__GetEntity(
        EventFortificationDetailMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27276 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
    byte_4C27276 = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_338C850 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFortificationDetailMaster__TryGetEntity(
        EventFortificationDetailMaster_o *this,
        EventFortificationDetailEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27278 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
    byte_4C27278 = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
}


bool EventFortificationDetailMaster__TryGetEntityList(
        EventFortificationDetailMaster_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o **entities,
        int32_t evenId,
        int32_t idx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  CommonReleaseMaster_o *v14; // x23
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x24
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v31; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4C27279 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27279 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)entities, (int32_t)v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v14 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_17:
      v24 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo, 0);
    }
    v25 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      sub_1C2D6EC(0, v26);
    if ( LODWORD(v25[1].klass) == evenId && HIDWORD(v25[1].klass) == idx )
    {
      monitor_high = HIDWORD(v25[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_25;
      if ( !v14 )
        sub_1C2D6EC(v25, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v14, monitor_high, 0, 0, 0) )
      {
LABEL_25:
        v31 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1C2D6EC(0, monitor_high);
        items = v31->fields._items;
        v33 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1C2D6EC(v31, monitor_high);
        size = v31->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            v29,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v29;
          sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v29, v27, v28);
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_34:
    v39 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                               Enumerator,
                               *(_QWORD *)(v39 + 8));
  if ( !*entities )
LABEL_42:
    sub_1C2D6EC(Instance, v13);
  return (*entities)->fields._size > 0;
}


void EventFortificationDetailMaster___c__DisplayClass2_0___ctor(
        EventFortificationDetailMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventFortificationDetailMaster___c__DisplayClass2_0___GetEntitiesByOpend_b__0(
        EventFortificationDetailMaster___c__DisplayClass2_0_o *this,
        EventFortificationDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    goto LABEL_7;
  if ( x->fields.eventId == this->fields.eventId && x->fields.fortificationIdx == this->fields.idx )
  {
    this = (EventFortificationDetailMaster___c__DisplayClass2_0_o *)this->fields.commonReleaseMaster;
    if ( this )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, x->fields.commonReleaseId, 0, 0, 0);
LABEL_7:
    sub_1C2D6EC(this, x);
  }
  return 0;
}