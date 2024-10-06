void __fastcall ItemDropEfficiencyMaster___ctor(ItemDropEfficiencyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A7016D & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__, method);
    byte_4A7016D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    515,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string___ctor__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  __int64 methodPtr_low; // x9
  int32_t monitor; // w23
  _BOOL8 IsOpen; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4A7016C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&itemId);
    sub_1B90010(&CondType_TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B90010(&ItemDropEfficiencyEntity_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo, v12);
    byte_4A7016C = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ItemDropEfficiencyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                            Enumerator,
                            *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(ItemDropEfficiencyEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v26->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (ItemDropEfficiencyEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != ItemDropEfficiencyEntity_TypeInfo )
    {
      sub_1B9052C(v26);
LABEL_38:
      sub_1B9026C(v26, v27);
    }
    if ( LODWORD(v26[1].klass) == itemId )
    {
      monitor = (int32_t)v26[3].monitor;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(113, monitor, 0LL, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v13 )
          sub_1B9026C(IsOpen, v32);
        items = v13->fields._items;
        v36 = Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1B9026C(IsOpen, v32);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v28,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v28;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v28, v33, v34);
        }
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_34;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_34:
    v42 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)v13;
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

  if ( (byte_4A7016E & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__,
      *(_QWORD *)&itemId);
    byte_4A7016E = 1;
  }
  PK = (Il2CppObject *)ItemDropEfficiencyEntity__CreatePK(itemId, targetType, priority, *(const MethodInfo **)&priority);
  return (ItemDropEfficiencyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_312C900 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__GetEntity__);
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

  if ( (byte_4A7016F & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__,
      entity);
    byte_4A7016F = 1;
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
           (const MethodInfo_312C950 *)Method_DataMasterBase_ItemDropEfficiencyMaster__ItemDropEfficiencyEntity__string__TryGetEntity__);
}