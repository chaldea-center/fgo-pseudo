void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC463 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, method);
    byte_49FC463 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    459,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
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
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  System_Collections_ObjectModel_Collection_T__o *v24; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x24
  __int64 methodPtr_low; // x9
  int32_t v37; // w25
  int32_t klass_high; // w26
  _BOOL8 IsQuestPhaseClear_37339732; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_49FC461 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_1B640C8(&CondType_TypeInfo, v10);
    sub_1B640C8(&EventMuralEntity___TypeInfo, v11);
    sub_1B640C8(&EventMuralEntity_TypeInfo, v12);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v19);
    byte_49FC461 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1B64170(EventMuralEntity___TypeInfo, 0LL);
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMuralEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v24 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v24 )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v24,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_18;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_18:
      v33 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                            Enumerator,
                            *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( !v34 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(EventMuralEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventMuralEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMuralEntity_TypeInfo )
    {
      sub_1B645E4(v34);
LABEL_44:
      sub_1B64324(v34);
    }
    if ( LODWORD(v34[2].monitor) == eventId )
    {
      v37 = (int32_t)v34[3].klass;
      klass_high = HIDWORD(v34[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear_37339732 = CondType__IsQuestPhaseClear_37339732(v37, klass_high, -1, 0, 0LL);
      if ( IsQuestPhaseClear_37339732 )
      {
        if ( !v23 )
          sub_1B64324(IsQuestPhaseClear_37339732);
        items = v23->fields._items;
        v43 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1B64324(IsQuestPhaseClear_37339732);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            v35,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v35;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v35, v40, v41);
        }
        *dispNum += HIDWORD(v35[2].monitor);
      }
      *total += HIDWORD(v35[2].monitor);
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_39;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_39:
    v50 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v24 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                            Enumerator,
                                                            *(_QWORD *)(v50 + 8));
  if ( !v23 )
LABEL_47:
    sub_1B64324(v24);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v23,
                                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
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
  const MethodInfo *v13; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC462 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B640C8(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&EventMuralEntity___TypeInfo, v10);
    byte_49FC462 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1B64170(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1B64170(EventMuralEntity___TypeInfo, 0LL);
  v12 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v12 )
    return (EventMuralEntity_array *)sub_1B64170(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_1B64324(v12);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v13);
}