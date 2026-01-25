void ItemDropEfficiencyMaster___ctor(ItemDropEfficiencyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEAF7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
    byte_4CEEAF7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    522,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
}


System_Collections_Generic_List_ItemDropEfficiencyEntity__o *ItemDropEfficiencyMaster__GetEnabledListByItemId(
        ItemDropEfficiencyMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  int32_t v21; // w23
  _BOOL8 IsOpen; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4CEEAF6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ItemDropEfficiencyEntity__GetEnumerator__);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
    byte_4CEEAF6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C7BD40(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_ItemDropEfficiencyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_ItemDropEfficiencyEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v20 = (Il2CppObject *)v18;
    if ( !v18 )
      sub_1C7BD40(0, v19);
    if ( *(_DWORD *)(v18 + 16) == itemId )
    {
      v21 = *(_DWORD *)(v18 + 56);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(113, v21, 0, 0, 0, 0);
      if ( IsOpen )
      {
        if ( !v5 )
          sub_1C7BD40(IsOpen, v23);
        items = v5->fields._items;
        v31 = Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C7BD40(IsOpen, v23);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v20,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v20, v24, v25, v26, v27, v28, v29);
        }
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_32;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_32:
    v37 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
ItemDropEfficiencyEntity_o *ItemDropEfficiencyMaster__GetEntity(
        ItemDropEfficiencyMaster_o *this,
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEAF8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
    byte_4CEEAF8 = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(itemId, targetType, priority, *(const MethodInfo **)&priority);
  return (ItemDropEfficiencyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3432DB4 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ItemDropEfficiencyMaster__TryGetEntity(
        ItemDropEfficiencyMaster_o *this,
        ItemDropEfficiencyEntity_o **entity,
        int32_t itemId,
        int32_t targetType,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEAF9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
    byte_4CEEAF9 = 1;
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
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
}