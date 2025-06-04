void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02074 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, method);
    byte_4B02074 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    465,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
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
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x24
  int32_t v36; // w25
  int32_t klass_high; // w26
  _BOOL8 IsQuestPhaseClear_39426252; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4B02072 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__, v9);
    sub_1BC3008(&CondType_TypeInfo, v10);
    sub_1BC3008(&EventMuralEntity___TypeInfo, v11);
    sub_1BC3008(&System_IDisposable_TypeInfo, v12);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo, v13);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v17);
    sub_1BC3008(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v18);
    byte_4B02072 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1BC30B0(EventMuralEntity___TypeInfo, 0LL);
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v22 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v22 )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v22,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v23);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v32 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_EventMuralEntity__TypeInfo, 0LL);
    }
    v33 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                            Enumerator,
                            *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      sub_1BC3264(0LL, v34);
    if ( LODWORD(v33[2].monitor) == eventId )
    {
      v36 = (int32_t)v33[3].klass;
      klass_high = HIDWORD(v33[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear_39426252 = CondType__IsQuestPhaseClear_39426252(v36, klass_high, -1, 0, 0LL);
      if ( IsQuestPhaseClear_39426252 )
      {
        if ( !v20 )
          sub_1BC3264(IsQuestPhaseClear_39426252, v39);
        items = v20->fields._items;
        v43 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1BC3264(IsQuestPhaseClear_39426252, v39);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v35,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v35;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v35, v40, v41);
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
        goto LABEL_37;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_37:
    v50 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v22 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                            Enumerator,
                                                            *(_QWORD *)(v50 + 8));
  if ( !v20 )
LABEL_44:
    sub_1BC3264(v22, v21);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v20,
                                     (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
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

  if ( (byte_4B02073 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__, *(_QWORD *)&id);
    sub_1BC3008(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&EventMuralEntity___TypeInfo, v10);
    byte_4B02073 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1BC30B0(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventMuralEntity__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1BC30B0(EventMuralEntity___TypeInfo, 0LL);
  v12 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v12 )
    return (EventMuralEntity_array *)sub_1BC30B0(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_1BC3264(v12, v13);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v14);
}