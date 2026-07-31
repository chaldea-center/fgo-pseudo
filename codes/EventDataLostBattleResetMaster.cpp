void EventDataLostBattleResetMaster___ctor(EventDataLostBattleResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59385B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
    byte_59385B5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    445,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventDataLostBattleResetEntity__o *EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x4
  Il2CppObject *v27; // x23
  _BOOL8 IsOpen; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Collections_Generic_IEnumerator_T__o *v45; // [xsp+18h] [xbp-48h]

  if ( (byte_59385B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventDataLostBattleResetEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
    byte_59385B4 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&dataLostBattleId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventDataLostBattleResetEntity__GetEnumerator__);
  v45 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v12);
  for ( i = Enumerator; ; i = v45 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            i,
            *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v45 )
      sub_21FFECC(v18, v19);
    v20 = v45->klass;
    v21 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_20:
      v23 = sub_2237E2C(v45, System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo, 0);
    }
    v24 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                            v45,
                            *(_QWORD *)(v23 + 8));
    v27 = v24;
    if ( v24 && LODWORD(v24[1].klass) == dataLostBattleId && LODWORD(v24[1].monitor) == eventId )
    {
      if ( !Master_object )
        sub_21FFECC(v24, v25);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, HIDWORD(v24[1].monitor), 0, 0, v26);
      if ( IsOpen )
      {
        if ( !v8
          || (items = v8->fields._items,
              v37 = Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__,
              ++v8->fields._version,
              !items) )
        {
          sub_21FFECC(IsOpen, v29);
        }
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v27,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v27;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v27, v30, v31, v32, v33, v34, v35);
        }
      }
    }
  }
  if ( v45 )
  {
    v40 = v45->klass;
    v41 = *(unsigned __int16 *)&v45->klass->_2.rank;
    if ( *(_WORD *)&v45->klass->_2.rank )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_39;
      }
      v43 = (__int64)&v40->vtable[*v42];
    }
    else
    {
LABEL_39:
      v43 = sub_2237E2C(v45, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(v45, *(_QWORD *)(v43 + 8));
  }
  return (System_Collections_Generic_List_EventDataLostBattleResetEntity__o *)v8;
}


EventDataLostBattleResetEntity_o *EventDataLostBattleResetMaster__GetEntity(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59385B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
    byte_59385B6 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0);
  return (EventDataLostBattleResetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
}


bool EventDataLostBattleResetMaster__TryGetEntity(
        EventDataLostBattleResetMaster_o *this,
        EventDataLostBattleResetEntity_o **entity,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59385B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
    byte_59385B7 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
}