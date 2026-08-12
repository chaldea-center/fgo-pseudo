void EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59708C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
    byte_59708C4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    467,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


EventMuralEntity_array *EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x23
  int32_t v27; // w24
  int32_t klass_high; // w25
  _BOOL8 IsQuestPhaseClear_47347536; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Collections_Generic_IEnumerator_T__o *v46; // [xsp+18h] [xbp-68h]

  if ( (byte_59708C2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&EventMuralEntity___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMuralEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMuralEntity__TypeInfo);
    byte_59708C2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  *total = 0;
  *dispNum = 0;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_2213B20(EventMuralEntity___TypeInfo, 0);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v12 = (__int64)this->fields.list;
  if ( !v12 )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)v12,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
  v46 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v14);
  for ( i = Enumerator; ; i = v46 )
  {
    klass = i->klass;
    v17 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_12;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v19 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            i,
            *(_QWORD *)(v19 + 8));
    if ( (v12 & 1) == 0 )
      break;
    if ( !v46 )
      sub_2213CDC(v12, v11);
    v20 = v46->klass;
    v21 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMuralEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo )
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
      v23 = sub_224BC3C(v46, System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo, 0);
    }
    v24 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                            v46,
                            *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_2213CDC(0, v25);
    if ( LODWORD(v24[2].monitor) == eventId )
    {
      v27 = (int32_t)v24[3].klass;
      klass_high = HIDWORD(v24[3].klass);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v25);
      IsQuestPhaseClear_47347536 = CondType__IsQuestPhaseClear_47347536(v27, klass_high, -1, 0, 0);
      if ( IsQuestPhaseClear_47347536 )
      {
        if ( !v10
          || (items = v10->fields._items,
              v38 = Method_System_Collections_Generic_List_EventMuralEntity__Add__,
              ++v10->fields._version,
              !items) )
        {
          sub_2213CDC(IsQuestPhaseClear_47347536, v30);
        }
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v26,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v26;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v26, v31, v32, v33, v34, v35, v36);
        }
        *dispNum += HIDWORD(v26[2].monitor);
      }
      *total += HIDWORD(v26[2].monitor);
    }
  }
  if ( v46 )
  {
    v42 = v46->klass;
    v43 = *(unsigned __int16 *)&v46->klass->_2.rank;
    if ( *(_WORD *)&v46->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_42;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_42:
      v45 = sub_224BC3C(v46, System_IDisposable_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            v46,
            *(_QWORD *)(v45 + 8));
  }
  if ( !v10 )
LABEL_50:
    sub_2213CDC(v12, v11);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v10,
                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


EventMuralEntity_array *EventMuralMaster__GetOpenedEntitiesFromId(
        EventMuralMaster_o *this,
        int32_t id,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59708C3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__);
    sub_2213A60(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_2213A60(&EventMuralEntity___TypeInfo);
    byte_59708C3 = 1;
  }
  entity = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  *total = 0;
  *dispNum = 0;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_2213B20(EventMuralEntity___TypeInfo, 0);
  }
  v10 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v10 )
    return (EventMuralEntity_array *)sub_2213B20(EventMuralEntity___TypeInfo, 0);
  if ( !entity )
    sub_2213CDC(v10, v11);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v12);
}