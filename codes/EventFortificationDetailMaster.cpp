void EventFortificationDetailMaster___ctor(EventFortificationDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C819 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
    byte_4D2C819 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    392,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string___ctor__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4D2C81B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__getEntityList__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
    sub_1C94098(&System_Func_EventFortificationDetailEntity__bool__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__);
    sub_1C94098(&EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
    byte_4D2C81B = 1;
  }
  v7 = sub_1C942E4(EventFortificationDetailMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = eventId,
        *(_DWORD *)(v7 + 20) = idx,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
    sub_1C942F0(Instance, v9);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  *(_QWORD *)(v7 + 24) = MasterData_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)MasterData_object, v11, v12, v13, v14, v15, v16);
  list = this->fields.list;
  v18 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventFortificationDetailEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_EventFortificationDetailMaster___c__DisplayClass2_0__GetEntitiesByOpend_b__0__,
    0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_EventFortificationDetailEntity___);
  return (EventFortificationDetailEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                   v19,
                                                   (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_EventFortificationDetailEntity___);
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

  if ( (byte_4D2C81A & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
    byte_4D2C81A = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_345FF78 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__GetEntity__);
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

  if ( (byte_4D2C81C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
    byte_4D2C81C = 1;
  }
  PK = (Il2CppObject *)EventFortificationDetailEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventFortificationDetailMaster__EventFortificationDetailEntity__string__TryGetEntity__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  CommonReleaseMaster_o *v18; // x23
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *v37; // x24
  __int64 monitor_high; // x1
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_4D2C81D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C81D = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventFortificationDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationDetailEntity__o *)v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)entities, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_42;
  v18 = (CommonReleaseMaster_o *)Instance;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_EventFortificationDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_10;
      }
      v24 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v24 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8))
        & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_17;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_17:
      v28 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationDetailEntity__TypeInfo, 0);
    }
    v29 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                            Enumerator,
                            *(_QWORD *)(v28 + 8));
    v37 = v29;
    if ( !v29 )
      sub_1C942F0(0, v30);
    if ( LODWORD(v29[1].klass) == evenId && HIDWORD(v29[1].klass) == idx )
    {
      monitor_high = HIDWORD(v29[2].monitor);
      if ( !(_DWORD)monitor_high )
        goto LABEL_25;
      if ( !v18 )
        sub_1C942F0(v29, monitor_high);
      if ( CommonReleaseMaster__IsOpen(v18, monitor_high, 0, 0, (const MethodInfo *)v33) )
      {
LABEL_25:
        v39 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1C942F0(0, monitor_high);
        items = v39->fields._items;
        v41 = Method_System_Collections_Generic_List_EventFortificationDetailEntity__Add__;
        ++v39->fields._version;
        if ( !items )
          sub_1C942F0(v39, monitor_high);
        size = v39->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            v37,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v39->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v37;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v37, v31, v32, v33, v34, v35, v36);
        }
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_34;
    }
    v47 = (__int64)&v44->vtable[*v46];
  }
  else
  {
LABEL_34:
    v47 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                               Enumerator,
                               *(_QWORD *)(v47 + 8));
  if ( !*entities )
LABEL_42:
    sub_1C942F0(Instance, v17);
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
  const MethodInfo *v3; // x4

  if ( !x )
    goto LABEL_7;
  if ( x->fields.eventId == this->fields.eventId && x->fields.fortificationIdx == this->fields.idx )
  {
    this = (EventFortificationDetailMaster___c__DisplayClass2_0_o *)this->fields.commonReleaseMaster;
    if ( this )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)this, x->fields.commonReleaseId, 0, 0, v3);
LABEL_7:
    sub_1C942F0(this, x);
  }
  return 0;
}