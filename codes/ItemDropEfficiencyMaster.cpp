void __fastcall ItemDropEfficiencyMaster___ctor(ItemDropEfficiencyMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16501 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__, method, v2);
    byte_4B16501 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    515,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ItemDropEfficiencyEntity__o *__fastcall ItemDropEfficiencyMaster__GetEnabledListByItemId(
        ItemDropEfficiencyMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x22
  __int64 methodPtr_low; // x9
  int32_t monitor; // w23
  _BOOL8 IsOpen; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0

  if ( (byte_4B16500 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&itemId,
      method);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&ItemDropEfficiencyEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo, v20, v21);
    byte_4B16500 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo,
                                                       *(_QWORD *)&itemId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v23);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(ItemDropEfficiencyEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v35->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ItemDropEfficiencyEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != ItemDropEfficiencyEntity_TypeInfo )
    {
      sub_1BCACFC(v35);
LABEL_38:
      sub_1BCAA3C(v35, v36);
    }
    if ( LODWORD(v35[1].klass) == itemId )
    {
      monitor = (int32_t)v35[3].monitor;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, ItemDropEfficiencyEntity_TypeInfo);
      IsOpen = CondType__IsOpen(113, monitor, 0LL, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v22 )
          sub_1BCAA3C(IsOpen, v41);
        items = v22->fields._items;
        v49 = Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1BCAA3C(IsOpen, v41);
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v37,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v37;
          sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v37, v42, v43, v44, v45, v46, v47);
        }
      }
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_34;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_34:
    v55 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  return (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)v22;
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

  if ( (byte_4B16502 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__,
      *(_QWORD *)&itemId,
      *(_QWORD *)&targetType);
    byte_4B16502 = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(itemId, targetType, priority, *(const MethodInfo **)&priority);
  return (ItemDropEfficiencyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
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

  if ( (byte_4B16503 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&itemId);
    byte_4B16503 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
}