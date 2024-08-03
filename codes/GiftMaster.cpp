void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FC6E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo, v5);
    byte_49FC6E5 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.idToGiftEntityListDictionary, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    24,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void __fastcall GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x21
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v16; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49FC6E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, giftEntity);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    this = (GiftMaster_o *)sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v8);
    byte_49FC6E7 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_14;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         v9,
                                                         v10);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (Il2CppObject *)v12;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      giftEntity->fields.id,
      (Il2CppObject *)v12,
      (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v14 = Method_System_Collections_Generic_List_GiftEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1B64324(this);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)giftEntity,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v16[4] = giftEntity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)giftEntity, v10, v11);
  }
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  GiftEntity_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_49FC6E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__, v3);
    sub_1B640C8(&GiftEntity_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_49FC6E6 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0LL) )
  {
    sub_1B64324(idToGiftEntityListDictionary);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      methodPtr_low = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (GiftEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v18, v19);
      }
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_27;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_27:
    v24 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *__fastcall GiftMaster__GetEntity(
        GiftMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC6E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FC6E3 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_30D41FC *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0

  if ( (byte_49FC6EC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, *(_QWORD *)&giftId);
    byte_49FC6EC = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_1B64324(0LL);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)ListById,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetGiftListByIds(
        GiftMaster_o *this,
        System_Collections_Generic_IEnumerable_int__o *giftIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x20
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  int32_t v26; // w1
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *ListById; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_49FC6EB & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, giftIds);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v10);
    byte_49FC6EB = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                       giftIds,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( !giftIds )
    sub_1B64324(v12);
  klass = giftIds->klass;
  v14 = *(unsigned __int16 *)(&giftIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&giftIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(giftIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          giftIds,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_15;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_15:
      v21 = sub_1BB60A8(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v24 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_1BB60A8(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    ListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetListById(this, v26, v27);
    if ( !v11 )
      sub_1B64324(ListById);
    System_Collections_Generic_List_object___AddRange(
      v11,
      ListById,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  }
  v29 = *(_QWORD *)v17;
  v30 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_30;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_30:
    v32 = sub_1BB60A8(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v32)(v17, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_GiftEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Instance; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x21
  bool v15; // w22
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  signed __int64 v19; // x19
  __int64 v20; // x1
  int v21; // w8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  v3 = giftId;
  if ( (byte_49FC6ED & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&giftId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_GiftEntity___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_List_GiftEntity__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FC6ED = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v13);
  if ( Instance )
  {
    v3 = *((_DWORD *)Instance + 12);
    v14 = *((_QWORD *)Instance + 5);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = Instance != 0LL;
  if ( !this->fields.idToGiftEntityListDictionary )
    goto LABEL_20;
  Instance = (void *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary,
                       v3,
                       &value,
                       (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         v16,
                                                         v17);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v18;
  }
  v18 = (System_Collections_Generic_List_object__o *)value;
  if ( v14 )
  {
    if ( value )
    {
      v19 = 0LL;
      while ( v19 < v18->fields._size )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v18,
                     v19,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !Instance )
          goto LABEL_20;
        *((_BYTE *)Instance + 48) = v15;
        if ( v19 >= *(int *)(v14 + 24) )
        {
          v18 = (System_Collections_Generic_List_object__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                    (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        Instance = value;
        if ( value )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)value,
                       v19,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
          if ( v19 >= (unsigned __int64)*(unsigned int *)(v14 + 24) )
            sub_1B6432C(Instance, v20);
          if ( Instance )
          {
            v21 = *(_DWORD *)(v14 + 32 + 4 * v19++);
            *((_DWORD *)Instance + 11) = v21;
            v18 = (System_Collections_Generic_List_object__o *)value;
            if ( value )
              continue;
          }
        }
        goto LABEL_20;
      }
      return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
    }
LABEL_20:
    sub_1B64324(Instance);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetOriginalGiftData(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC6EE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_GiftEntity___, *(_QWORD *)&giftId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v6);
    byte_49FC6EE = 1;
  }
  value = 0LL;
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         idToGiftEntityListDictionary,
         giftId,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( value )
      return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)value,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
LABEL_17:
    sub_1B64324(idToGiftEntityListDictionary);
  }
  v9 = Method_System_Array_Empty_GiftEntity___;
  v10 = *((_QWORD *)Method_System_Array_Empty_GiftEntity___ + 7);
  if ( !v10 )
  {
    sub_1BB6000(Method_System_Array_Empty_GiftEntity___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  return **(GiftEntity_array ***)(v12 + 184);
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_NotImplementedException_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  GiftEntity_o *v29; // x22
  __int64 v30; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x21
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x20
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  System_Collections_IEnumerator_c **v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  GiftEntity_o *v54; // x21
  __int64 v55; // x8
  __int64 v56; // x10
  const MethodInfo *v57; // x2
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x20
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0

  v4 = this;
  if ( (byte_49FC6E9 & 1) == 0 )
  {
    sub_1B640C8(&GiftEntity_TypeInfo, e);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_IEnumerable_TypeInfo, v6);
    this = (GiftMaster_o *)sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_49FC6E9 = 1;
  }
  if ( !e )
    sub_1B64324(this);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v14 = sub_1B640DC(&System_NotImplementedException_TypeInfo);
        v17 = (System_NotImplementedException_o *)sub_1B64314(v14, v15, v16);
        System_NotImplementedException___ctor(v17, 0LL);
        v18 = sub_1B640DC(&Method_GiftMaster_OnListChangedImplementation__);
        sub_1B641F0(v17, v18);
      }
      GiftMaster__CreateIdToGiftEntityListDictionary(v4, (const MethodInfo *)e);
    }
  }
  else
  {
    oldItems = e->fields._oldItems;
    if ( oldItems )
    {
      klass = oldItems->klass;
      v11 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1BB60A8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v19 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v19 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
        {
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 4;
            if ( !v21 )
              goto LABEL_20;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_20:
          v23 = sub_1BB60A8(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
          break;
        v24 = *(_QWORD *)v19;
        v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
        {
          v26 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v25;
            v26 += 2;
            if ( !v25 )
              goto LABEL_27;
          }
          v27 = v24 + 16LL * (*(_DWORD *)v26 + 1) + 312;
        }
        else
        {
LABEL_27:
          v27 = sub_1BB60A8(v19, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
        v29 = (GiftEntity_o *)v28;
        if ( v28 )
        {
          v30 = *(_QWORD *)v28;
          methodPtr_low = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) >= (unsigned int)methodPtr_low
            && *(GiftEntity_c **)(*(_QWORD *)(v30 + 200) + 8 * methodPtr_low - 8) == GiftEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v30 + 376))(v28, *(_QWORD *)(v30 + 384)) )
              GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v29, v32);
          }
        }
      }
      v33 = sub_1B64204(v19, System_IDisposable_TypeInfo);
      if ( v33 )
      {
        v34 = *(_QWORD *)v33;
        v35 = v33;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_39;
          }
          v38 = v34 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_39:
          v38 = sub_1BB60A8(v33, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v40 = newItems->klass;
      v41 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_47;
        }
        v43 = (__int64)&v40->vtable[*v42].method;
      }
      else
      {
LABEL_47:
        v43 = sub_1BB60A8(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(newItems, *(_QWORD *)(v43 + 8));
      if ( !v44 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v45 = *(_QWORD *)v44;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_54;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_54:
          v48 = sub_1BB60A8(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
          break;
        v49 = *(_QWORD *)v44;
        v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v51 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v50;
            v51 += 2;
            if ( !v50 )
              goto LABEL_61;
          }
          v52 = v49 + 16LL * (*(_DWORD *)v51 + 1) + 312;
        }
        else
        {
LABEL_61:
          v52 = sub_1BB60A8(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
        v54 = (GiftEntity_o *)v53;
        if ( v53 )
        {
          v55 = *(_QWORD *)v53;
          v56 = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 304LL) >= (unsigned int)v56
            && *(GiftEntity_c **)(*(_QWORD *)(v55 + 200) + 8 * v56 - 8) == GiftEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v55 + 376))(v53, *(_QWORD *)(v55 + 384)) )
          {
            GiftMaster__AddIdToGiftEntityListDictionary(v4, v54, v57);
          }
        }
      }
      v58 = sub_1B64204(v44, System_IDisposable_TypeInfo);
      if ( v58 )
      {
        v59 = *(_QWORD *)v58;
        v60 = v58;
        v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
          {
            --v61;
            v62 += 4;
            if ( !v61 )
              goto LABEL_73;
          }
          v63 = v59 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_73:
          v63 = sub_1BB60A8(v58, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
      }
    }
  }
}


void __fastcall GiftMaster__RemoveIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49FC6E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__, giftEntity);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Remove__, v6);
    this = (GiftMaster_o *)sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v7);
    byte_49FC6E8 = 1;
  }
  value = 0LL;
  if ( !giftEntity )
    goto LABEL_12;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)value,
                           (Il2CppObject *)giftEntity,
                           (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1B64324(this);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_3124E0C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GiftMaster__TryGetEntity(
        GiftMaster_o *this,
        GiftEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FC6E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__, entity);
    byte_49FC6E4 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *__fastcall GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *Instance; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x8
  int32_t v13; // w21
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x8
  bool v15; // w20
  Il2CppObject *Item; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  GiftEntity_o *v19; // x19
  const MethodInfo *v20; // x4
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = id;
  if ( (byte_49FC6EA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B640C8(&GiftEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FC6EA = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v10);
  if ( Instance )
  {
    v12 = *((_QWORD *)Instance + 5);
    if ( !v12 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1B6432C(Instance, v11);
    v3 = *((_DWORD *)Instance + 12);
    v13 = *(_DWORD *)(v12 + 32);
  }
  else
  {
    v13 = 0;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  v15 = Instance != 0LL;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)idToGiftEntityListDictionary,
          v3,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return 0LL;
  Instance = value;
  if ( !value )
LABEL_16:
    sub_1B64324(Instance);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)value,
           0,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  v19 = (GiftEntity_o *)sub_1B64314(GiftEntity_TypeInfo, v17, v18);
  GiftEntity___ctor_39044080(v19, (GiftEntity_o *)Item, v13, v15, v20);
  return v19;
}