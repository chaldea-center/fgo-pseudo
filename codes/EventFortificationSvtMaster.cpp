void EventFortificationSvtMaster___ctor(EventFortificationSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27286 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
    byte_4C27286 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    393,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationSvtEntity_o *EventFortificationSvtMaster__GetEntity(
        EventFortificationSvtMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27287 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
    byte_4C27287 = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationSvtEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_338C850 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFortificationSvtMaster__TryGetEntity(
        EventFortificationSvtMaster_o *this,
        EventFortificationSvtEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27288 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
    byte_4C27288 = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
}


bool EventFortificationSvtMaster__TryGetEntityList(
        EventFortificationSvtMaster_o *this,
        System_Collections_Generic_List_EventFortificationSvtEntity__o **eventFortificationSvtList,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 IsOpen; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x24
  __int64 v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4C27289 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventFortificationSvtEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27289 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventFortificationSvtEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_17:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
               Enumerator,
               *(_QWORD *)(v20 + 8));
    v25 = (Il2CppObject *)IsOpen;
    if ( !IsOpen )
      sub_1C2D6EC(0, v22);
    if ( *(_DWORD *)(IsOpen + 16) == eventId )
    {
      v26 = *(unsigned int *)(IsOpen + 44);
      if ( !(_DWORD)v26 )
        goto LABEL_24;
      if ( !MasterData_object )
        sub_1C2D6EC(IsOpen, v26);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, v26, 0, 0, 0);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_24:
        if ( !v10 )
          sub_1C2D6EC(IsOpen, v26);
        items = v10->fields._items;
        v28 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C2D6EC(IsOpen, v26);
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v25,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v25;
          sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v25, v23, v24);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_33;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_33:
    v34 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  *eventFortificationSvtList = (System_Collections_Generic_List_EventFortificationSvtEntity__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)eventFortificationSvtList, (int32_t)v10, v35, v36);
  if ( !*eventFortificationSvtList )
LABEL_41:
    sub_1C2D6EC(Instance, v8);
  return (*eventFortificationSvtList)->fields._size > 0;
}