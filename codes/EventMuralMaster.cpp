void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DF94 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__, method);
    byte_4A2DF94 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    459,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
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
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *v23; // x0
  __int64 v24; // x1
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
  __int64 v35; // x1
  Il2CppObject *v36; // x24
  __int64 methodPtr_low; // x9
  int32_t v38; // w25
  int32_t klass_high; // w26
  _BOOL8 IsQuestPhaseClear_37472544; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4A2DF92 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_1B761C0(&CondType_TypeInfo, v10);
    sub_1B761C0(&EventMuralEntity___TypeInfo, v11);
    sub_1B761C0(&EventMuralEntity_TypeInfo, v12);
    sub_1B761C0(&System_IDisposable_TypeInfo, v13);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventMuralEntity__Add__, v16);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__, v18);
    sub_1B761C0(&System_Collections_Generic_List_EventMuralEntity__TypeInfo, v19);
    byte_4A2DF92 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1B76268(EventMuralEntity___TypeInfo, 0LL);
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v23 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v23 )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v23,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v24);
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
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v33 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                            Enumerator,
                            *(_QWORD *)(v33 + 8));
    v36 = v34;
    if ( !v34 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(EventMuralEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventMuralEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMuralEntity_TypeInfo )
    {
      sub_1B766DC(v34);
LABEL_44:
      sub_1B7641C(v34, v35);
    }
    if ( LODWORD(v34[2].monitor) == eventId )
    {
      v38 = (int32_t)v34[3].klass;
      klass_high = HIDWORD(v34[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear_37472544 = CondType__IsQuestPhaseClear_37472544(v38, klass_high, -1, 0, 0LL);
      if ( IsQuestPhaseClear_37472544 )
      {
        if ( !v21 )
          sub_1B7641C(IsQuestPhaseClear_37472544, v41);
        items = v21->fields._items;
        v45 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1B7641C(IsQuestPhaseClear_37472544, v41);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v36,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v36;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v36, v42, v43);
        }
        *dispNum += HIDWORD(v36[2].monitor);
      }
      *total += HIDWORD(v36[2].monitor);
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_39;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_39:
    v52 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v23 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                            Enumerator,
                                                            *(_QWORD *)(v52 + 8));
  if ( !v21 )
LABEL_47:
    sub_1B7641C(v23, v22);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v21,
                                     (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
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

  if ( (byte_4A2DF93 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B761C0(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__, v9);
    sub_1B761C0(&EventMuralEntity___TypeInfo, v10);
    byte_4A2DF93 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1B76268(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1B76268(EventMuralEntity___TypeInfo, 0LL);
  v12 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_30FF7D4 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v12 )
    return (EventMuralEntity_array *)sub_1B76268(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_1B7641C(v12, v13);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v14);
}