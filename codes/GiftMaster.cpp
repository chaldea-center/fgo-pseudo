void GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C37DDA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
    byte_4C37DDA = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.idToGiftEntityListDictionary, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    24,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x21
  Il2CppClass *klass; // x8
  _QWORD *v9; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v11; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C37DDC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    this = (GiftMaster_o *)sub_1C32C20(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_4C37DDC = 1;
  }
  value = 0;
  if ( !giftEntity )
    goto LABEL_14;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (Il2CppObject *)v7;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      giftEntity->fields.id,
      (Il2CppObject *)v7,
      (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v9 = Method_System_Collections_Generic_List_GiftEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1C32E7C(this);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)giftEntity,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v11[4] = giftEntity;
    sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 4), (int32_t)giftEntity, v5, v6);
  }
}


void GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  GiftEntity_o *v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0

  if ( (byte_4C37DDB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GiftEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C37DDB = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0) )
  {
    sub_1C32E7C(idToGiftEntityListDictionary);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_GiftEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_10;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v8 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GiftEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_17;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_17:
      v12 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo, 0);
    }
    v13 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
                            Enumerator,
                            *(_QWORD *)(v12 + 8));
    if ( v13 )
      GiftMaster__AddIdToGiftEntityListDictionary(this, v13, v14);
  }
  v15 = Enumerator->klass;
  v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v17 = &v15->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v17 - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_25;
    }
    v18 = (__int64)&v15->vtable[*v17];
  }
  else
  {
LABEL_25:
    v18 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(Enumerator, *(_QWORD *)(v18 + 8));
}


GiftEntity_o *GiftMaster__GetEntity(
        GiftMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37DD8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
    byte_4C37DD8 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, 0);
  return (GiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_339B2F0 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


GiftEntity_array *GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0

  if ( (byte_4C37DE1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_4C37DE1 = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_1C32E7C(0);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)ListById,
                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


System_Collections_Generic_List_GiftEntity__o *GiftMaster__GetGiftListByIds(
        GiftMaster_o *this,
        System_Collections_Generic_IEnumerable_int__o *giftIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  int32_t v20; // w1
  const MethodInfo *v21; // x2
  System_Collections_Generic_IEnumerable_T__o *ListById; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C37DE0 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_4C37DE0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( !giftIds )
    sub_1C32E7C(v6);
  klass = giftIds->klass;
  v8 = *(unsigned __int16 *)&giftIds->klass->_2.rank;
  if ( *(_WORD *)&giftIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v10 = sub_1C83438(giftIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v10)(
          giftIds,
          *(_QWORD *)(v10 + 8));
  if ( !v11 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_15;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_15:
      v15 = sub_1C83438(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v18 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_22;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_22:
      v19 = sub_1C83438(v11, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    ListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetListById(this, v20, v21);
    if ( !v5 )
      sub_1C32E7C(ListById);
    System_Collections_Generic_List_object___AddRange(
      v5,
      ListById,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  }
  v23 = *(_QWORD *)v11;
  v24 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
  {
    v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_30;
    }
    v26 = v23 + 16LL * *v25 + 312;
  }
  else
  {
LABEL_30:
    v26 = sub_1C83438(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v26)(v11, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_GiftEntity__o *)v5;
}


System_Collections_Generic_List_GiftEntity__o *GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x22
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x8
  bool v8; // w20
  System_Collections_Generic_List_object__o *v9; // x21
  signed __int64 v10; // x19
  int v11; // w8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C37DE2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_GiftEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37DE2 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, giftId, 0);
  if ( Instance )
  {
    giftId = *((_DWORD *)Instance + 12);
    v6 = *((_QWORD *)Instance + 5);
  }
  else
  {
    v6 = 0;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  v8 = Instance != 0;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_20;
  Instance = (void *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__object__o *)idToGiftEntityListDictionary,
                       giftId,
                       &value,
                       (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v9;
  }
  v9 = (System_Collections_Generic_List_object__o *)value;
  if ( v6 )
  {
    if ( value )
    {
      v10 = 0;
      while ( v10 < v9->fields._size )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v9,
                     v10,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !Instance )
          goto LABEL_20;
        GiftEntity__SetReplacedData((GiftEntity_o *)Instance, v8, 0);
        if ( v10 >= *(int *)(v6 + 24) )
        {
          v9 = (System_Collections_Generic_List_object__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                                    (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        Instance = value;
        if ( value )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)value,
                       v10,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
          if ( v10 >= (unsigned __int64)*(unsigned int *)(v6 + 24) )
            sub_1C32E84(Instance);
          if ( Instance )
          {
            v11 = *(_DWORD *)(v6 + 32 + 4 * v10++);
            *((_DWORD *)Instance + 11) = v11;
            v9 = (System_Collections_Generic_List_object__o *)value;
            if ( value )
              continue;
          }
        }
        goto LABEL_20;
      }
      return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                                (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
    }
LABEL_20:
    sub_1C32E7C(Instance);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v9;
}


GiftEntity_array *GiftMaster__GetOriginalGiftData(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37DE3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_GiftEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_4C37DE3 = 1;
  }
  value = 0;
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         idToGiftEntityListDictionary,
         giftId,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( value )
      return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)value,
                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
LABEL_17:
    sub_1C32E7C(idToGiftEntityListDictionary);
  }
  v8 = Method_System_Array_Empty_GiftEntity___;
  v9 = *((_QWORD *)Method_System_Array_Empty_GiftEntity___ + 7);
  if ( !v9 )
  {
    sub_1C83390(Method_System_Array_Empty_GiftEntity___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C83334(inited);
  return **(GiftEntity_array ***)(v11 + 184);
}


void GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x19
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  System_NotImplementedException_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  GiftEntity_o *v24; // x22
  __int64 v25; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v27; // x2
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  System_Collections_IEnumerator_c **v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  GiftEntity_o *v49; // x21
  __int64 v50; // x8
  __int64 v51; // x10
  const MethodInfo *v52; // x2
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x20
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0

  v4 = this;
  if ( (byte_4C37DDE & 1) == 0 )
  {
    sub_1C32C20(&GiftEntity_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerable_TypeInfo);
    this = (GiftMaster_o *)sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C37DDE = 1;
  }
  if ( !e )
    sub_1C32E7C(this);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_1C32E6C(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_1C32C34(&Method_GiftMaster_OnListChangedImplementation__);
        sub_1C32D48(v12, v13);
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
      v8 = *(unsigned __int16 *)&oldItems->klass->_2.rank;
      if ( *(_WORD *)&oldItems->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v8;
          p_offset += 4;
          if ( !v8 )
            goto LABEL_10;
        }
        v10 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v10 = sub_1C83438(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      if ( !v14 )
        sub_1C32E7C(0);
      while ( 1 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v16;
            v17 += 4;
            if ( !v16 )
              goto LABEL_20;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_20:
          v18 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = *(_QWORD *)v14;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v21 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v20;
            v21 += 2;
            if ( !v20 )
              goto LABEL_27;
          }
          v22 = v19 + 16LL * (*(_DWORD *)v21 + 1) + 312;
        }
        else
        {
LABEL_27:
          v22 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
        v24 = (GiftEntity_o *)v23;
        if ( v23 )
        {
          v25 = *(_QWORD *)v23;
          naturalAligment = GiftEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) >= (unsigned int)naturalAligment
            && *(GiftEntity_c **)(*(_QWORD *)(v25 + 200) + 8 * naturalAligment - 8) == GiftEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v25 + 376))(v23, *(_QWORD *)(v25 + 384)) )
              GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v24, v27);
          }
        }
      }
      v28 = sub_1C32D5C(v14, System_IDisposable_TypeInfo);
      if ( v28 )
      {
        v29 = *(_QWORD *)v28;
        v30 = v28;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_39;
          }
          v33 = v29 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_39:
          v33 = sub_1C83438(v28, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v35 = newItems->klass;
      v36 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v37 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_47;
        }
        v38 = (__int64)&v35->vtable[*v37];
      }
      else
      {
LABEL_47:
        v38 = sub_1C83438(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v39 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v38)(newItems, *(_QWORD *)(v38 + 8));
      if ( !v39 )
        sub_1C32E7C(0);
      while ( 1 )
      {
        v40 = *(_QWORD *)v39;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_54;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_54:
          v43 = sub_1C83438(v39, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
          break;
        v44 = *(_QWORD *)v39;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v46 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *(v46 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v45;
            v46 += 2;
            if ( !v45 )
              goto LABEL_61;
          }
          v47 = v44 + 16LL * (*(_DWORD *)v46 + 1) + 312;
        }
        else
        {
LABEL_61:
          v47 = sub_1C83438(v39, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
        v49 = (GiftEntity_o *)v48;
        if ( v48 )
        {
          v50 = *(_QWORD *)v48;
          v51 = GiftEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 304LL) >= (unsigned int)v51
            && *(GiftEntity_c **)(*(_QWORD *)(v50 + 200) + 8 * v51 - 8) == GiftEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v50 + 376))(v48, *(_QWORD *)(v50 + 384)) )
          {
            GiftMaster__AddIdToGiftEntityListDictionary(v4, v49, v52);
          }
        }
      }
      v53 = sub_1C32D5C(v39, System_IDisposable_TypeInfo);
      if ( v53 )
      {
        v54 = *(_QWORD *)v53;
        v55 = v53;
        v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
        {
          v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
          {
            --v56;
            v57 += 4;
            if ( !v56 )
              goto LABEL_73;
          }
          v58 = v54 + 16LL * *v57 + 312;
        }
        else
        {
LABEL_73:
          v58 = sub_1C83438(v53, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
      }
    }
  }
}


void GiftMaster__RemoveIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C37DDD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__Remove__);
    this = (GiftMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    byte_4C37DDD = 1;
  }
  value = 0;
  if ( !giftEntity )
    goto LABEL_12;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          giftEntity->fields.id,
          &value,
          (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)value,
                           (Il2CppObject *)giftEntity,
                           (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1C32E7C(this);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_33F11A4 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
}


bool GiftMaster__TryGetEntity(
        GiftMaster_o *this,
        GiftEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37DD9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
    byte_4C37DD9 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


GiftEntity_o *GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x8
  int32_t v7; // w21
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x8
  bool v9; // w20
  Il2CppObject *Item; // x22
  GiftEntity_o *v11; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37DDF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C32C20(&GiftEntity_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37DDF = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, id, 0);
  if ( Instance )
  {
    v6 = *((_QWORD *)Instance + 5);
    if ( !v6 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v6 + 24) )
      sub_1C32E84(Instance);
    id = *((_DWORD *)Instance + 12);
    v7 = *(_DWORD *)(v6 + 32);
  }
  else
  {
    v7 = 0;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  v9 = Instance != 0;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)idToGiftEntityListDictionary,
          id,
          &value,
          (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return 0;
  Instance = value;
  if ( !value )
LABEL_16:
    sub_1C32E7C(Instance);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)value,
           0,
           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  v11 = (GiftEntity_o *)sub_1C32E6C(GiftEntity_TypeInfo);
  GiftEntity___ctor_42143040(v11, (GiftEntity_o *)Item, v7, v9, 0);
  return v11;
}