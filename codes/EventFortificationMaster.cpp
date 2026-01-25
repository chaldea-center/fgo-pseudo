void EventFortificationMaster___ctor(EventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE649 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
    byte_4CEE649 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    391,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationEntity_o *EventFortificationMaster__GetEntity(
        EventFortificationMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE64A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
    byte_4CEE64A = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3432DB4 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFortificationMaster__IsFortificationEvent(
        EventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4CEE64D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    byte_4CEE64D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( v17 && *(_DWORD *)(v17 + 16) == eventId )
      goto LABEL_22;
  }
  v12 = 0;
LABEL_22:
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_26:
    v21 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool EventFortificationMaster__TryGetEntity(
        EventFortificationMaster_o *this,
        EventFortificationEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE64B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
    byte_4CEE64B = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
}


bool EventFortificationMaster__TryGetEntityList(
        EventFortificationMaster_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o **entities,
        int32_t evenId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x22
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x4
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_4CEE64C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE64C = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationEntity__o *)v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)entities, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v21 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_16:
      v25 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v34 = v26;
    if ( !v26 )
      sub_1C7BD40(0, v27);
    if ( *(_DWORD *)(v26 + 16) == evenId )
    {
      if ( !*(_DWORD *)(v26 + 60) )
        goto LABEL_24;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C7BD40(0, v36);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_object )
        sub_1C7BD40(0, v38);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, *(_DWORD *)(v34 + 60), 0, 0, v39) )
      {
LABEL_24:
        v40 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1C7BD40(0, v27);
        items = v40->fields._items;
        v42 = Method_System_Collections_Generic_List_EventFortificationEntity__Add__;
        ++v40->fields._version;
        if ( !items )
          sub_1C7BD40(v40, v27);
        size = v40->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)v34,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          v40->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v34;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v44 + 4), v34, v28, v29, v30, v31, v32, v33);
        }
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_33;
    }
    v48 = (__int64)&v45->vtable[*v47];
  }
  else
  {
LABEL_33:
    v48 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                                             Enumerator,
                                                             *(_QWORD *)(v48 + 8));
  if ( !*entities )
LABEL_42:
    sub_1C7BD40(list, v14);
  return (*entities)->fields._size > 0;
}