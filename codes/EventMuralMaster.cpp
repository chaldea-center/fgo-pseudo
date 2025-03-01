void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD794 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, method);
    byte_4BFD794 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    463,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromEventId(
        EventMuralMaster_o *this,
        int32_t eventId,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  _DWORD *v33; // x0
  __int64 v34; // x1
  int64_t v35; // x24
  int32_t v36; // w25
  int32_t v37; // w26
  _BOOL8 IsQuestPhaseClear_38961020; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4BFD792 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__, v9);
    sub_1C2E12C(&CondType_TypeInfo, v10);
    sub_1C2E12C(&EventMuralEntity___TypeInfo, v11);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v12);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo, v13);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v17);
    sub_1C2E12C(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v18);
    byte_4BFD792 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1C2E1D4(EventMuralEntity___TypeInfo, 0LL);
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v22 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v22 )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v22,
                 (const MethodInfo_3216144 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2E388(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMuralEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_18;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_18:
      v32 = sub_1C8010C(Enumerator, System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo, 0LL);
    }
    v33 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                      Enumerator,
                      *(_QWORD *)(v32 + 8));
    v35 = (int64_t)v33;
    if ( !v33 )
      sub_1C2E388(0LL, v34);
    if ( v33[10] == eventId )
    {
      v36 = v33[12];
      v37 = v33[13];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear_38961020 = CondType__IsQuestPhaseClear_38961020(v36, v37, -1, 0, 0LL);
      if ( IsQuestPhaseClear_38961020 )
      {
        if ( !v20 )
          sub_1C2E388(IsQuestPhaseClear_38961020, v39);
        items = v20->fields._items;
        v47 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1C2E388(IsQuestPhaseClear_38961020, v39);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v35,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v35;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 4), v35, v40, v41, v42, v43, v44, v45);
        }
        *dispNum += *(_DWORD *)(v35 + 44);
      }
      *total += *(_DWORD *)(v35 + 44);
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_37;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_37:
    v54 = sub_1C8010C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v22 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                            Enumerator,
                                                            *(_QWORD *)(v54 + 8));
  if ( !v20 )
LABEL_44:
    sub_1C2E388(v22, v21);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v20,
                                     (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMuralEntity_array *__fastcall EventMuralMaster__GetOpenedEntitiesFromId(
        EventMuralMaster_o *this,
        int32_t id,
        int32_t *dispNum,
        int32_t *total,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFD793 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__, *(_QWORD *)&id);
    sub_1C2E12C(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9);
    sub_1C2E12C(&EventMuralEntity___TypeInfo, v10);
    byte_4BFD793 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1C2E1D4(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1C2E1D4(EventMuralEntity___TypeInfo, 0LL);
  v12 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v12 )
    return (EventMuralEntity_array *)sub_1C2E1D4(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_1C2E388(v12, v13);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v14);
}