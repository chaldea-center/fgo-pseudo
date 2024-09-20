void __fastcall EventMuralMaster___ctor(EventMuralMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
    byte_4A5B1B2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    459,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int___ctor__);
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
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x24
  __int64 methodPtr_low; // x9
  int32_t v27; // w25
  int32_t klass_high; // w26
  _BOOL8 IsQuestPhaseClear_37650740; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4A5B1B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&EventMuralEntity___TypeInfo);
    sub_1B885B0(&EventMuralEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMuralEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMuralEntity__TypeInfo);
    byte_4A5B1B0 = 1;
  }
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
  {
    return (EventMuralEntity_array *)sub_1B88658(EventMuralEntity___TypeInfo, 0LL);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMuralEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMuralEntity___ctor__);
  v12 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v12 )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v12,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v13);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v22 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            Enumerator,
                            *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_44;
    methodPtr_low = LOBYTE(EventMuralEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventMuralEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMuralEntity_TypeInfo )
    {
      sub_1B88ACC(v23);
LABEL_44:
      sub_1B8880C(v23, v24);
    }
    if ( LODWORD(v23[2].monitor) == eventId )
    {
      v27 = (int32_t)v23[3].klass;
      klass_high = HIDWORD(v23[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear_37650740 = CondType__IsQuestPhaseClear_37650740(v27, klass_high, -1, 0, 0LL);
      if ( IsQuestPhaseClear_37650740 )
      {
        if ( !v10 )
          sub_1B8880C(IsQuestPhaseClear_37650740, v30);
        items = v10->fields._items;
        v34 = Method_System_Collections_Generic_List_EventMuralEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1B8880C(IsQuestPhaseClear_37650740, v30);
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v25,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v25;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v25, v31, v32);
        }
        *dispNum += HIDWORD(v25[2].monitor);
      }
      *total += HIDWORD(v25[2].monitor);
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_39;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_39:
    v41 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v12 = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                            Enumerator,
                                                            *(_QWORD *)(v41 + 8));
  if ( !v10 )
LABEL_47:
    sub_1B8880C(v12, v11);
  return (EventMuralEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v10,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMuralEntity__ToArray__);
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

  if ( (byte_4A5B1B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
    sub_1B885B0(&EventMuralEntity___TypeInfo);
    byte_4A5B1B1 = 1;
  }
  entity = 0LL;
  *total = 0;
  *dispNum = 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    return (EventMuralEntity_array *)sub_1B88658(EventMuralEntity___TypeInfo, 0LL);
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    return (EventMuralEntity_array *)sub_1B88658(EventMuralEntity___TypeInfo, 0LL);
  v10 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          id,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventMuralMaster__EventMuralEntity__int__TryGetEntity__);
  if ( !v10 )
    return (EventMuralEntity_array *)sub_1B88658(EventMuralEntity___TypeInfo, 0LL);
  if ( !entity )
    sub_1B8880C(v10, v11);
  return EventMuralMaster__GetOpenedEntitiesFromEventId(this, (int32_t)entity[2].monitor, dispNum, total, v12);
}