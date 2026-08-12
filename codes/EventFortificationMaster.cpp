void EventFortificationMaster___ctor(EventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59707F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
    byte_59707F4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    393,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationEntity_o *EventFortificationMaster__GetEntity(
        EventFortificationMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59707F5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
    byte_59707F5 = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventFortificationMaster__IsFortificationEvent(
        EventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  char v15; // w20
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerator_T__o *v26; // [xsp+18h] [xbp-38h]

  if ( (byte_59707F8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_59707F8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
  v26 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v26 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    v15 = v13;
    if ( (v13 & 1) == 0 )
      break;
    if ( !v26 )
      sub_2213CDC(v13, v14);
    v16 = v26->klass;
    v17 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_224BC3C(v26, System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v26,
            *(_QWORD *)(v19 + 8));
    if ( v20 && *(_DWORD *)(v20 + 16) == eventId )
      goto LABEL_25;
  }
  v15 = 0;
LABEL_25:
  if ( v26 )
  {
    v21 = v26->klass;
    v22 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_30;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_30:
      v24 = sub_224BC3C(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(v26, *(_QWORD *)(v24 + 8));
  }
  return v15 & 1;
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

  if ( (byte_59707F6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
    byte_59707F6 = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
}


bool EventFortificationMaster__TryGetEntityList(
        EventFortificationMaster_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o **entities,
        int32_t evenId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x21
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x4
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_IEnumerator_T__o *v51; // [xsp+18h] [xbp-48h]

  if ( (byte_59707F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59707F7 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationEntity__o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entities, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
  v51 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v17);
  for ( i = Enumerator; ; i = v51 )
  {
    klass = i->klass;
    v20 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_10;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v22 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
             i,
             *(_QWORD *)(v22 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v51 )
      sub_2213CDC(list, v14);
    v23 = v51->klass;
    v24 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_224BC3C(v51, System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v51,
            *(_QWORD *)(v26 + 8));
    v35 = v27;
    if ( !v27 )
      sub_2213CDC(0, v28);
    if ( *(_DWORD *)(v27 + 16) == evenId )
    {
      if ( !*(_DWORD *)(v27 + 60) )
        goto LABEL_26;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v37);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_object )
        sub_2213CDC(0, v39);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, *(_DWORD *)(v35 + 60), 0, 0, v40) )
      {
LABEL_26:
        v41 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities
          || (items = v41->fields._items,
              v43 = Method_System_Collections_Generic_List_EventFortificationEntity__Add__,
              ++v41->fields._version,
              !items) )
        {
          sub_2213CDC(v41, v28);
        }
        size = v41->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            (Il2CppObject *)v35,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v41->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v35;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), v35, v29, v30, v31, v32, v33, v34);
        }
      }
    }
  }
  if ( v51 )
  {
    v46 = v51->klass;
    v47 = *(unsigned __int16 *)&v51->klass->_2.rank;
    if ( *(_WORD *)&v51->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_38;
      }
      v49 = (__int64)&v46->vtable[*v48];
    }
    else
    {
LABEL_38:
      v49 = sub_224BC3C(v51, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
             v51,
             *(_QWORD *)(v49 + 8));
  }
  if ( !*entities )
LABEL_48:
    sub_2213CDC(list, v14);
  return (*entities)->fields._size > 0;
}