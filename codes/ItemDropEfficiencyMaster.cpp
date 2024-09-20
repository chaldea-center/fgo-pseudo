void __fastcall ItemDropEfficiencyMaster___ctor(ItemDropEfficiencyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B462 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
    byte_4A5B462 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    515,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
}


System_Collections_Generic_List_ItemDropEfficiencyEntity__o *__fastcall ItemDropEfficiencyMaster__GetEnabledListByItemId(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  __int64 methodPtr_low; // x9
  int32_t monitor; // w23
  _BOOL8 IsOpen; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5B461 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ItemDropEfficiencyEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
    byte_4A5B461 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(ItemDropEfficiencyEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ItemDropEfficiencyEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != ItemDropEfficiencyEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_38:
      sub_1B8880C(v18, v19);
    }
    if ( LODWORD(v18[1].klass) == itemId )
    {
      monitor = (int32_t)v18[3].monitor;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(113, monitor, 0LL, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v5 )
          sub_1B8880C(IsOpen, v24);
        items = v5->fields._items;
        v28 = Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1B8880C(IsOpen, v24);
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v20,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v20;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v20, v25, v26);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_34;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_34:
    v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)v5;
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

  if ( (byte_4A5B463 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
    byte_4A5B463 = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(itemId, targetType, priority, *(const MethodInfo **)&priority);
  return (ItemDropEfficiencyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
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

  if ( (byte_4A5B464 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
    byte_4A5B464 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
}