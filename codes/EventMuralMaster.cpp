void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC58A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
    byte_4BDC58A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    463,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x1
  int64_t v25; // x24
  int32_t v26; // w25
  int32_t v27; // w26
  _BOOL8 IsQuestPhaseClear_38891984; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4BDC588 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&EventMuralEntity___TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMuralEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMuralEntity__TypeInfo);
    byte_4BDC588 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1C21EE0(EventMuralEntity___TypeInfo, 0LL);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v12 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v12 )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v12,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMuralEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    v25 = (int64_t)v23;
    if ( !v23 )
      sub_1C22094(0LL, v24);
    if ( v23[10] == eventId )
    {
      v26 = v23[12];
      v27 = v23[13];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear_38891984 = CondType__IsQuestPhaseClear_38891984(v26, v27, -1, 0, 0LL);
      if ( IsQuestPhaseClear_38891984 )
      {
        if ( !v10 )
          sub_1C22094(IsQuestPhaseClear_38891984, v29);
        items = v10->fields._items;
        v37 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C22094(IsQuestPhaseClear_38891984, v29);
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v25,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v25;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v25, v30, v31, v32, v33, v34, v35);
        }
        *dispNum += *(_DWORD *)(v25 + 44);
      }
      *total += *(_DWORD *)(v25 + 44);
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_37;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_37:
    v44 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v12 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                            Enumerator,
                                                            *(_QWORD *)(v44 + 8));
  if ( !v10 )
LABEL_44:
    sub_1C22094(v12, v11);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v10,
                                     (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromId(
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

  if ( (byte_4BDC589 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__);
    sub_1C21E38(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_1C21E38(&EventMuralEntity___TypeInfo);
    byte_4BDC589 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1C21EE0(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1C21EE0(EventMuralEntity___TypeInfo, 0LL);
  v10 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v10 )
    return (EventMuralEntity_array *)sub_1C21EE0(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_1C22094(v10, v11);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v12);
}