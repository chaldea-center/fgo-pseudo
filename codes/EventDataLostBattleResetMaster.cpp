void EventDataLostBattleResetMaster___ctor(EventDataLostBattleResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C797 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
    byte_4D2C797 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    443,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
}


System_Collections_Generic_List_EventDataLostBattleResetEntity__o *EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x4
  Il2CppObject *v24; // x24
  _BOOL8 IsOpen; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4D2C796 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventDataLostBattleResetEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
    byte_4D2C796 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_EventDataLostBattleResetEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v11);
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
          goto LABEL_11;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v16 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo, 0);
    }
    v21 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    v24 = v21;
    if ( v21 && LODWORD(v21[1].klass) == dataLostBattleId && LODWORD(v21[1].monitor) == eventId )
    {
      if ( !Master_object )
        sub_1C942F0(v21, v22);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, HIDWORD(v21[1].monitor), 0, 0, v23);
      if ( IsOpen )
      {
        if ( !v8 )
          sub_1C942F0(IsOpen, v26);
        items = v8->fields._items;
        v34 = Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C942F0(IsOpen, v26);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v24,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v24;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v24, v27, v28, v29, v30, v31, v32);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_34;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_34:
    v40 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_EventDataLostBattleResetEntity__o *)v8;
}


EventDataLostBattleResetEntity_o *EventDataLostBattleResetMaster__GetEntity(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C798 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
    byte_4D2C798 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0);
  return (EventDataLostBattleResetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_345FF78 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
}


bool EventDataLostBattleResetMaster__TryGetEntity(
        EventDataLostBattleResetMaster_o *this,
        EventDataLostBattleResetEntity_o **entity,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C799 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
    byte_4D2C799 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
}