void EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C272E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
    byte_4C272E2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    140,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
}


System_Collections_Generic_List_EventMissionCondDetailEntity__o *EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  EventMissionConditionMaster_o *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppClass *klass; // x25
  const char *namespaze; // x8
  unsigned __int64 v14; // x26
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C272E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
    byte_4C272E4 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v8)) == 0 )
  {
    sub_1C2D6EC(Master_object, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v24 = v22;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v9 )
      break;
    if ( !v24.fields._current )
      sub_1C2D6EC(v9, v10);
    klass = v24.fields._current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( namespaze )
      {
        if ( (int)namespaze >= 1 )
        {
          v14 = 0;
          do
          {
            if ( v14 >= (unsigned int)namespaze )
              sub_1C2D6F4(v9, v10, v11);
            v9 = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &entity,
                   *((_DWORD *)&klass->_1.byval_arg.data + v14),
                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v9 )
            {
              if ( !v5 )
                sub_1C2D6EC(v9, v10);
              v16 = entity;
              items = v5->fields._items;
              v18 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                sub_1C2D6EC(v9, v16);
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  v16,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v20 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v20[4] = (Il2CppClass *)v16;
                sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v16, v11, v15);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v14;
          }
          while ( (__int64)v14 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v5;
}


System_Collections_Generic_List_EventMissionCondDetailEntity__o *EventMissionCondDetailMaster__getEntitiesFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionTargetId,
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
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4C272E3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventMissionCondDetailEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
    byte_4C272E3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_EventMissionCondDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( v18 && *(_DWORD *)(v18 + 20) == missionTargetId )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v18);
      items = v5->fields._items;
      v23 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v18);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), v21, v19, v20);
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_29:
    v29 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v5;
}