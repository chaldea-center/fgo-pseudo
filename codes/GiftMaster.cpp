void __fastcall GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B164D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo, v7, v8);
    byte_4B164D2 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.idToGiftEntityListDictionary,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    24,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void __fastcall GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  __int64 v14; // x3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x21
  Il2CppClass *klass; // x8
  _QWORD *v21; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v23; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B164D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, giftEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v9, v10);
    this = (GiftMaster_o *)sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v11, v12);
    byte_4B164D4 = 1;
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
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         giftEntity,
                                                         v13,
                                                         v14);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (Il2CppObject *)v19;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      giftEntity->fields.id,
      (Il2CppObject *)v19,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v21 = Method_System_Collections_Generic_List_GiftEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1BCAA3C(this, giftEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)giftEntity,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v23[4] = giftEntity;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)giftEntity, v13, v14, v15, v16, v17, v18);
  }
}


void __fastcall GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
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
  GiftEntity_o *v25; // x0
  const MethodInfo *v26; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B164D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__, v4, v5);
    sub_1BCA7E0(&GiftEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    byte_4B164D3 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0LL) )
  {
    sub_1BCAA3C(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v15);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_17:
      v24 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (GiftEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] == GiftEntity_TypeInfo )
      {
        GiftMaster__AddIdToGiftEntityListDictionary(this, v25, v26);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_27;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_27:
    v31 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
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

  if ( (byte_4B164D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__, *(_QWORD *)&id, *(_QWORD *)&type);
    byte_4B164D0 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_31B3198 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v6; // x1

  if ( (byte_4B164D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, *(_QWORD *)&giftId, method);
    byte_4B164D9 = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_1BCAA3C(0LL, v6);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)ListById,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetGiftListByIds(
        GiftMaster_o *this,
        System_Collections_Generic_IEnumerable_int__o *giftIds,
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
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  int32_t v35; // w1
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_T__o *ListById; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4B164D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, giftIds, method);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v16, v17);
    byte_4B164D8 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                       giftIds,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( !giftIds )
    sub_1BCAA3C(v19, v20);
  klass = giftIds->klass;
  v22 = *(unsigned __int16 *)(&giftIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&giftIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(giftIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          giftIds,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_15;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_15:
      v30 = sub_1C1C7C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v33 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_22;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_22:
      v34 = sub_1C1C7C0(v26, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    ListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetListById(this, v35, v36);
    if ( !v18 )
      sub_1BCAA3C(ListById, ListById);
    System_Collections_Generic_List_object___AddRange(
      v18,
      ListById,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  }
  v38 = *(_QWORD *)v26;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_30;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_30:
    v41 = sub_1C1C7C0(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v26, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_GiftEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GiftEntity__o *__fastcall GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  void *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  __int64 v22; // x21
  bool v23; // w22
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  signed __int64 v27; // x19
  int v28; // w8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  v3 = giftId;
  if ( (byte_4B164DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&giftId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_GiftEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B164DA = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v21);
  if ( Instance )
  {
    v3 = *((_DWORD *)Instance + 12);
    v22 = *((_QWORD *)Instance + 5);
  }
  else
  {
    v22 = 0LL;
  }
  v23 = Instance != 0LL;
  if ( !this->fields.idToGiftEntityListDictionary )
    goto LABEL_20;
  Instance = (void *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                       (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary,
                       v3,
                       &value,
                       (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                         v20,
                                                         v24,
                                                         v25);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v26;
  }
  v26 = (System_Collections_Generic_List_object__o *)value;
  if ( v22 )
  {
    if ( value )
    {
      v27 = 0LL;
      while ( v27 < v26->fields._size )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v26,
                     v27,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !Instance )
          goto LABEL_20;
        *((_BYTE *)Instance + 48) = v23;
        if ( v27 >= *(int *)(v22 + 24) )
        {
          v26 = (System_Collections_Generic_List_object__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                                    (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        Instance = value;
        if ( value )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)value,
                       v27,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
          if ( v27 >= (unsigned __int64)*(unsigned int *)(v22 + 24) )
            sub_1BCAA44(Instance, v20);
          if ( Instance )
          {
            v28 = *(_DWORD *)(v22 + 32 + 4 * v27++);
            *((_DWORD *)Instance + 11) = v28;
            v26 = (System_Collections_Generic_List_object__o *)value;
            if ( value )
              continue;
          }
        }
        goto LABEL_20;
      }
      return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                                (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
    }
LABEL_20:
    sub_1BCAA3C(Instance, v20);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v26;
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *__fastcall GiftMaster__GetOriginalGiftData(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  long double inited; // q0
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B164DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_GiftEntity___, *(_QWORD *)&giftId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__, v7, v8);
    byte_4B164DB = 1;
  }
  value = 0LL;
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         idToGiftEntityListDictionary,
         giftId,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( value )
      return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)value,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
LABEL_17:
    sub_1BCAA3C(idToGiftEntityListDictionary, *(_QWORD *)&giftId);
  }
  v12 = Method_System_Array_Empty_GiftEntity___;
  v13 = *((_QWORD *)Method_System_Array_Empty_GiftEntity___ + 7);
  if ( !v13 )
  {
    sub_1C1C718(Method_System_Array_Empty_GiftEntity___, *(_QWORD *)&giftId);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14, *(_QWORD *)&giftId);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(inited);
  return **(GiftEntity_array ***)(v15 + 184);
}


void __fastcall GiftMaster__OnListChangedImplementation(
        GiftMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_NotImplementedException_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  System_Collections_IEnumerator_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  GiftEntity_o *v35; // x22
  __int64 v36; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x21
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x20
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  System_Collections_IEnumerator_c **v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  GiftEntity_o *v61; // x21
  __int64 v62; // x8
  __int64 v63; // x10
  const MethodInfo *v64; // x2
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x20
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0

  v4 = this;
  if ( (byte_4B164D6 & 1) == 0 )
  {
    sub_1BCA7E0(&GiftEntity_TypeInfo, e, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerable_TypeInfo, v7, v8);
    this = (GiftMaster_o *)sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    byte_4B164D6 = 1;
  }
  if ( !e )
    sub_1BCAA3C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v17 = sub_1BCA7F4(&System_NotImplementedException_TypeInfo, e);
        v21 = (System_NotImplementedException_o *)sub_1BCAA2C(v17, v18, v19, v20);
        System_NotImplementedException___ctor(v21, 0LL);
        v23 = sub_1BCA7F4(&Method_GiftMaster_OnListChangedImplementation__, v22);
        sub_1BCA908(v21, v23);
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
      v14 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1C1C7C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v25 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v25 )
        sub_1BCAA3C(0LL, v24);
      while ( 1 )
      {
        v26 = *(_QWORD *)v25;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_20;
          }
          v29 = v26 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_20:
          v29 = sub_1C1C7C0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
          break;
        v30 = *(_QWORD *)v25;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v32 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v31;
            v32 += 2;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = v30 + 16LL * (*(_DWORD *)v32 + 1) + 312;
        }
        else
        {
LABEL_27:
          v33 = sub_1C1C7C0(v25, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
        v35 = (GiftEntity_o *)v34;
        if ( v34 )
        {
          v36 = *(_QWORD *)v34;
          methodPtr_low = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) >= (unsigned int)methodPtr_low
            && *(GiftEntity_c **)(*(_QWORD *)(v36 + 200) + 8 * methodPtr_low - 8) == GiftEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v36 + 376))(v34, *(_QWORD *)(v36 + 384)) )
              GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v35, v38);
          }
        }
      }
      v39 = sub_1BCA91C(v25, System_IDisposable_TypeInfo);
      if ( v39 )
      {
        v40 = *(_QWORD *)v39;
        v41 = v39;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_39;
          }
          v44 = v40 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_39:
          v44 = sub_1C1C7C0(v39, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v46 = newItems->klass;
      v47 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v48 = &v46->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v48 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_47;
        }
        v49 = (__int64)&v46->vtable[*v48].method;
      }
      else
      {
LABEL_47:
        v49 = sub_1C1C7C0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v51 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v49)(newItems, *(_QWORD *)(v49 + 8));
      if ( !v51 )
        sub_1BCAA3C(0LL, v50);
      while ( 1 )
      {
        v52 = *(_QWORD *)v51;
        v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v53;
            v54 += 4;
            if ( !v53 )
              goto LABEL_54;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_54:
          v55 = sub_1C1C7C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
          break;
        v56 = *(_QWORD *)v51;
        v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v58 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *(v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v57;
            v58 += 2;
            if ( !v57 )
              goto LABEL_61;
          }
          v59 = v56 + 16LL * (*(_DWORD *)v58 + 1) + 312;
        }
        else
        {
LABEL_61:
          v59 = sub_1C1C7C0(v51, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
        v61 = (GiftEntity_o *)v60;
        if ( v60 )
        {
          v62 = *(_QWORD *)v60;
          v63 = LOBYTE(GiftEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v60 + 304LL) >= (unsigned int)v63
            && *(GiftEntity_c **)(*(_QWORD *)(v62 + 200) + 8 * v63 - 8) == GiftEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v62 + 376))(v60, *(_QWORD *)(v62 + 384)) )
          {
            GiftMaster__AddIdToGiftEntityListDictionary(v4, v61, v64);
          }
        }
      }
      v65 = sub_1BCA91C(v51, System_IDisposable_TypeInfo);
      if ( v65 )
      {
        v66 = *(_QWORD *)v65;
        v67 = v65;
        v68 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
        {
          v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
          {
            --v68;
            v69 += 4;
            if ( !v68 )
              goto LABEL_73;
          }
          v70 = v66 + 16LL * *v69 + 312;
        }
        else
        {
LABEL_73:
          v70 = sub_1C1C7C0(v65, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B164D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__, giftEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Remove__, v7, v8);
    this = (GiftMaster_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v9, v10);
    byte_4B164D5 = 1;
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
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)value,
                           (Il2CppObject *)giftEntity,
                           (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1BCAA3C(this, giftEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
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

  if ( (byte_4B164D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B164D1 = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *__fastcall GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x8
  int32_t v17; // w21
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x8
  bool v19; // w20
  Il2CppObject *Item; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  GiftEntity_o *v24; // x19
  const MethodInfo *v25; // x4
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = id;
  if ( (byte_4B164D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftAddMaster___, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__, v5, v6);
    sub_1BCA7E0(&GiftEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B164D7 = 1;
  }
  value = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, v3, v15);
  if ( Instance )
  {
    v16 = *((_QWORD *)Instance + 5);
    if ( !v16 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v16 + 24) )
      sub_1BCAA44(Instance, v14);
    v3 = *((_DWORD *)Instance + 12);
    v17 = *(_DWORD *)(v16 + 32);
  }
  else
  {
    v17 = 0;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  v19 = Instance != 0LL;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)idToGiftEntityListDictionary,
          v3,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return 0LL;
  Instance = value;
  if ( !value )
LABEL_16:
    sub_1BCAA3C(Instance, v14);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)value,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  v24 = (GiftEntity_o *)sub_1BCAA2C(GiftEntity_TypeInfo, v21, v22, v23);
  GiftEntity___ctor_40088616(v24, (GiftEntity_o *)Item, v17, v19, v25);
  return v24;
}