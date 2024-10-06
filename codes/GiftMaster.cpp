void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A70144 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__, v3);
    sub_1B90010(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo, v4);
    byte_4A70144 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_317BBF8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.idToGiftEntityListDictionary, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    24,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppClass *klass; // x8
  _QWORD *v13; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A70146 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, giftEntity);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__Add__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    this = (GiftMaster_o *)sub_1B90010(&System_Collections_Generic_List_GiftEntity__TypeInfo, v8);
    byte_4A70146 = 1;
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
          (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (Il2CppObject *)v11;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      giftEntity->fields.id,
      (Il2CppObject *)v11,
      (const MethodInfo_317C5B8 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v13 = Method_System_Collections_Generic_List_GiftEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1B9026C(this, giftEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)giftEntity,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v15[4] = giftEntity;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)giftEntity, v9, v10);
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
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  GiftEntity_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A70145 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__, v3);
    sub_1B90010(&GiftEntity_TypeInfo, v4);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4A70145 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_317C754 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0LL) )
  {
    sub_1B9026C(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                            Enumerator,
                            *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (GiftEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v19, v20);
      }
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
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

  if ( (byte_4A70142 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4A70142 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_312C900 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v6; // x1

  if ( (byte_4A7014B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, *(_QWORD *)&giftId);
    byte_4A7014B = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_1B9026C(0LL, v6);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)ListById,
                               (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  System_Collections_Generic_IEnumerable_T__o *ListById; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A7014A & 1) == 0 )
  {
    sub_1B90010(&System_IDisposable_TypeInfo, giftIds);
    sub_1B90010(&System_Collections_Generic_IEnumerable_int__TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_int__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_GiftEntity__TypeInfo, v10);
    byte_4A7014A = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( !giftIds )
    sub_1B9026C(v12, v13);
  klass = giftIds->klass;
  v15 = *(unsigned __int16 *)(&giftIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&giftIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BE1FF0(giftIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          giftIds,
          *(_QWORD *)(p_method + 8));
  if ( !v19 )
    sub_1B9026C(0LL, v18);
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
          goto LABEL_15;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_15:
      v23 = sub_1BE1FF0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v26 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_22;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_22:
      v27 = sub_1BE1FF0(v19, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    ListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetListById(this, v28, v29);
    if ( !v11 )
      sub_1B9026C(ListById, ListById);
    System_Collections_Generic_List_object___AddRange(
      v11,
      ListById,
      (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  }
  v31 = *(_QWORD *)v19;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_30;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_30:
    v34 = sub_1BE1FF0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v34)(v19, *(_QWORD *)(v34 + 8));
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x21
  bool v16; // w22
  System_Collections_Generic_List_object__o *v17; // x20
  signed __int64 v18; // x19
  int v19; // w8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  v3 = giftId;
  if ( (byte_4A7014C & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&giftId);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_GiftEntity___, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v9);
    sub_1B90010(&System_Collections_Generic_List_GiftEntity__TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A7014C = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v14);
  if ( Instance )
  {
    v3 = *((_DWORD *)Instance + 12);
    v15 = *((_QWORD *)Instance + 5);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = Instance != 0LL;
  if ( !this->fields.idToGiftEntityListDictionary )
    goto LABEL_20;
  Instance = (void *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary,
                       v3,
                       &value,
                       (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v17 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v17;
  }
  v17 = (System_Collections_Generic_List_object__o *)value;
  if ( v15 )
  {
    if ( value )
    {
      v18 = 0LL;
      while ( v18 < v17->fields._size )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v17,
                     v18,
                     (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !Instance )
          goto LABEL_20;
        *((_BYTE *)Instance + 48) = v16;
        if ( v18 >= *(int *)(v15 + 24) )
        {
          v17 = (System_Collections_Generic_List_object__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                    (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        Instance = value;
        if ( value )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)value,
                       v18,
                       (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
          if ( v18 >= (unsigned __int64)*(unsigned int *)(v15 + 24) )
            sub_1B90274(Instance, v13);
          if ( Instance )
          {
            v19 = *(_DWORD *)(v15 + 32 + 4 * v18++);
            *((_DWORD *)Instance + 11) = v19;
            v17 = (System_Collections_Generic_List_object__o *)value;
            if ( value )
              continue;
          }
        }
        goto LABEL_20;
      }
      return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
    }
LABEL_20:
    sub_1B9026C(Instance, v13);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v17;
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

  if ( (byte_4A7014D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_GiftEntity___, *(_QWORD *)&giftId);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v6);
    byte_4A7014D = 1;
  }
  value = 0LL;
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         idToGiftEntityListDictionary,
         giftId,
         &value,
         (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( value )
      return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)value,
                                   (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
LABEL_17:
    sub_1B9026C(idToGiftEntityListDictionary, *(_QWORD *)&giftId);
  }
  v9 = Method_System_Array_Empty_GiftEntity___;
  v10 = *((_QWORD *)Method_System_Array_Empty_GiftEntity___ + 7);
  if ( !v10 )
  {
    sub_1BE1F48(Method_System_Array_Empty_GiftEntity___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BE1EEC(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BE1EEC(v12);
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
  System_NotImplementedException_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  GiftEntity_o *v28; // x22
  __int64 v29; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x1
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
  if ( (byte_4A70148 & 1) == 0 )
  {
    sub_1B90010(&GiftEntity_TypeInfo, e);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_IEnumerable_TypeInfo, v6);
    this = (GiftMaster_o *)sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4A70148 = 1;
  }
  if ( !e )
    sub_1B9026C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v14 = sub_1B90024(&System_NotImplementedException_TypeInfo);
        v15 = (System_NotImplementedException_o *)sub_1B9025C(v14);
        System_NotImplementedException___ctor(v15, 0LL);
        v16 = sub_1B90024(&Method_GiftMaster_OnListChangedImplementation__);
        sub_1B90138(v15, v16);
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
        p_method = sub_1BE1FF0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v18 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v18 )
        sub_1B9026C(0LL, v17);
      while ( 1 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v20;
            v21 += 4;
            if ( !v20 )
              goto LABEL_20;
          }
          v22 = v19 + 16LL * *v21 + 312;
        }
        else
        {
LABEL_20:
          v22 = sub_1BE1FF0(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
          break;
        v23 = *(_QWORD *)v18;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_27;
          }
          v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
        }
        else
        {
LABEL_27:
          v26 = sub_1BE1FF0(v18, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
        v28 = (GiftEntity_o *)v27;
        if ( v27 )
        {
          v29 = *(_QWORD *)v27;
          methodPtr_low = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
            && *(GiftEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * methodPtr_low - 8) == GiftEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
              GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v28, v31);
          }
        }
      }
      v32 = sub_1B9014C(v18, System_IDisposable_TypeInfo);
      if ( v32 )
      {
        v33 = *(_QWORD *)v32;
        v34 = v32;
        v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_39;
          }
          v37 = v33 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_39:
          v37 = sub_1BE1FF0(v32, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v39 = newItems->klass;
      v40 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v41 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_47;
        }
        v42 = (__int64)&v39->vtable[*v41].method;
      }
      else
      {
LABEL_47:
        v42 = sub_1BE1FF0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(newItems, *(_QWORD *)(v42 + 8));
      if ( !v44 )
        sub_1B9026C(0LL, v43);
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
          v48 = sub_1BE1FF0(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v52 = sub_1BE1FF0(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      v58 = sub_1B9014C(v44, System_IDisposable_TypeInfo);
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
          v63 = sub_1BE1FF0(v58, System_IDisposable_TypeInfo, 0LL);
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
  if ( (byte_4A70147 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__, giftEntity);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__Remove__, v6);
    this = (GiftMaster_o *)sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v7);
    byte_4A70147 = 1;
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
          (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)value,
                           (Il2CppObject *)giftEntity,
                           (const MethodInfo_3511EE8 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1B9026C(this, giftEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_317DA54 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
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

  if ( (byte_4A70143 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__, entity);
    byte_4A70143 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  int32_t v13; // w21
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x8
  bool v15; // w20
  Il2CppObject *Item; // x22
  GiftEntity_o *v17; // x19
  const MethodInfo *v18; // x4
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = id;
  if ( (byte_4A70149 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&id);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5);
    sub_1B90010(&GiftEntity_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A70149 = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v11);
  if ( Instance )
  {
    v12 = *((_QWORD *)Instance + 5);
    if ( !v12 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1B90274(Instance, v10);
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
          (const MethodInfo_317DD58 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return 0LL;
  Instance = value;
  if ( !value )
LABEL_16:
    sub_1B9026C(Instance, v10);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)value,
           0,
           (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  v17 = (GiftEntity_o *)sub_1B9025C(GiftEntity_TypeInfo);
  GiftEntity___ctor_39418812(v17, (GiftEntity_o *)Item, v13, v15, v18);
  return v17;
}