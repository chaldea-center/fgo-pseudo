void __fastcall ItemDropEfficiencyMaster___ctor(ItemDropEfficiencyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7DD4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__, method);
    byte_4BC7DD4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    519,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ItemDropEfficiencyEntity__o *__fastcall ItemDropEfficiencyMaster__GetEnabledListByItemId(
        ItemDropEfficiencyMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  int32_t v28; // w23
  _BOOL8 IsOpen; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4BC7DD3 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_ItemDropEfficiencyEntity__GetEnumerator__,
      *(_QWORD *)&itemId);
    sub_1C1ABD4(&CondType_TypeInfo, v5);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo, v11);
    byte_4BC7DD3 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_ItemDropEfficiencyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v27 = (Il2CppObject *)v25;
    if ( !v25 )
      sub_1C1AE30(0LL, v26);
    if ( *(_DWORD *)(v25 + 16) == itemId )
    {
      v28 = *(_DWORD *)(v25 + 56);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(113, v28, 0LL, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v12 )
          sub_1C1AE30(IsOpen, v30);
        items = v12->fields._items;
        v38 = Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1C1AE30(IsOpen, v30);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v27,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v27;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v27, v31, v32, v33, v34, v35, v36);
        }
      }
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
        goto LABEL_32;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_32:
    v44 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
ItemDropEfficiencyEntity_o *__fastcall ItemDropEfficiencyMaster__GetEntity(
        ItemDropEfficiencyMaster_o *this,
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7DD5 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__,
      *(_QWORD *)&itemId);
    byte_4BC7DD5 = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(itemId, targetType, priority, *(const MethodInfo **)&priority);
  return (ItemDropEfficiencyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_324D130 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemDropEfficiencyMaster__TryGetEntity(
        ItemDropEfficiencyMaster_o *this,
        ItemDropEfficiencyEntity_o **entity,
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7DD6 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__,
      entity);
    byte_4BC7DD6 = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(
                         itemId,
                         targetType,
                         priority,
                         *(const MethodInfo **)&targetType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
}