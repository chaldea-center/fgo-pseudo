void GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30E0E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
    byte_4D30E0E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.idToGiftEntityListDictionary,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    24,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppClass *klass; // x8
  _QWORD *v13; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D30E10 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    this = (GiftMaster_o *)sub_1C93AD4(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_4D30E10 = 1;
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
          (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    value = (Il2CppObject *)v11;
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      giftEntity->fields.id,
      (Il2CppObject *)v11,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v13 = Method_System_Collections_Generic_List_GiftEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_1C93D2C(this, giftEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)giftEntity,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v15[4] = giftEntity;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)giftEntity, v5, v6, v7, v8, v9, v10);
  }
}


void GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  GiftEntity_o *v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  if ( (byte_4D30E0F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_GiftEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D30E0F = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0) )
  {
    sub_1C93D2C(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_GiftEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GiftEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo, 0);
    }
    v14 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                            Enumerator,
                            *(_QWORD *)(v13 + 8));
    if ( v14 )
      GiftMaster__AddIdToGiftEntityListDictionary(this, v14, v15);
  }
  v16 = Enumerator->klass;
  v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v18 - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_25;
    }
    v19 = (__int64)&v16->vtable[*v18];
  }
  else
  {
LABEL_25:
    v19 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(Enumerator, *(_QWORD *)(v19 + 8));
}


GiftEntity_o *GiftMaster__GetEntity(
        GiftMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D30E0C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
    byte_4D30E0C = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, 0);
  return (GiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_34681D4 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


GiftEntity_array *GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v6; // x1

  if ( (byte_4D30E15 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_4D30E15 = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_1C93D2C(0, v6);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)ListById,
                               (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


System_Collections_Generic_List_GiftEntity__o *GiftMaster__GetGiftListByIds(
        GiftMaster_o *this,
        System_Collections_Generic_IEnumerable_int__o *giftIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  int32_t v22; // w1
  const MethodInfo *v23; // x2
  System_Collections_Generic_IEnumerable_T__o *ListById; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( (byte_4D30E14 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_4D30E14 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( !giftIds )
    sub_1C93D2C(v6, v7);
  klass = giftIds->klass;
  v9 = *(unsigned __int16 *)&giftIds->klass->_2.rank;
  if ( *(_WORD *)&giftIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v11 = sub_1C69E5C(giftIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v11)(
          giftIds,
          *(_QWORD *)(v11 + 8));
  if ( !v13 )
    sub_1C93D2C(0, v12);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_15;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_15:
      v17 = sub_1C69E5C(v13, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    v18 = *(_QWORD *)v13;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v20 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_22;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_22:
      v21 = sub_1C69E5C(v13, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
    ListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetListById(this, v22, v23);
    if ( !v5 )
      sub_1C93D2C(ListById, ListById);
    System_Collections_Generic_List_object___AddRange(
      v5,
      ListById,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  }
  v25 = *(_QWORD *)v13;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_30;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_30:
    v28 = sub_1C69E5C(v13, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_GiftEntity__o *)v5;
}


System_Collections_Generic_List_GiftEntity__o *GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v8; // x22
  struct System_Int32_array *priorGiftIconIds; // x23
  System_Int32_array *PriorGiftNums; // x19
  bool v11; // w20
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 v13; // x21
  int32_t *m_Items; // x25
  __int64 v16; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D30E16 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_GiftEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30E16 = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, giftId, 0);
  v8 = ValidPriorDataById;
  if ( ValidPriorDataById )
  {
    giftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    PriorGiftNums = GiftAddEntity__GetPriorGiftNums(ValidPriorDataById, 0);
  }
  else
  {
    PriorGiftNums = 0;
    priorGiftIconIds = 0;
  }
  Instance = (DataManager_o *)this->fields.idToGiftEntityListDictionary;
  v11 = v8 != 0;
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                giftId,
                                &value,
                                (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    return (System_Collections_Generic_List_GiftEntity__o *)v12;
  }
  v12 = (System_Collections_Generic_List_object__o *)value;
  if ( priorGiftIconIds )
  {
    if ( value )
    {
      v13 = 0;
      m_Items = PriorGiftNums->m_Items;
      while ( v13 < v12->fields._size )
      {
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v12,
                                      v13,
                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !Instance )
          goto LABEL_29;
        GiftEntity__SetReplacedData((GiftEntity_o *)Instance, v11, 0);
        if ( v13 >= SLODWORD(priorGiftIconIds->max_length) )
        {
          v12 = (System_Collections_Generic_List_object__o *)value;
          return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                                    (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
        }
        Instance = (DataManager_o *)value;
        if ( !value )
          goto LABEL_29;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)value,
                                      v13,
                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( v13 >= (unsigned __int64)LODWORD(priorGiftIconIds->max_length) )
          goto LABEL_34;
        if ( !Instance )
          goto LABEL_29;
        HIDWORD(Instance->fields.datalist) = priorGiftIconIds->m_Items[v13];
        if ( PriorGiftNums )
        {
          v16 = 0;
          System_Nullable_int____ctor(
            (System_Nullable_int__o)&v16,
            PriorGiftNums->max_length,
            (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
          if ( (_BYTE)v16 )
          {
            if ( v13 < v16 >> 32 )
            {
              if ( v13 >= (unsigned __int64)LODWORD(PriorGiftNums->max_length) )
                goto LABEL_34;
              if ( (m_Items[v13] & 0x80000000) == 0 )
              {
                Instance = (DataManager_o *)value;
                if ( !value )
                  goto LABEL_29;
                Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)value,
                                              v13,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( v13 >= (unsigned __int64)LODWORD(PriorGiftNums->max_length) )
LABEL_34:
                  sub_1C93D34(Instance);
                if ( !Instance )
                  goto LABEL_29;
                LODWORD(Instance->fields.lookup) = m_Items[v13];
              }
            }
          }
        }
        v12 = (System_Collections_Generic_List_object__o *)value;
        ++v13;
        if ( !value )
          goto LABEL_29;
      }
      return (System_Collections_Generic_List_GiftEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                                (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
    }
LABEL_29:
    sub_1C93D2C(Instance, v6);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *GiftMaster__GetOriginalGiftData(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D30E17 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_GiftEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_4D30E17 = 1;
  }
  value = 0;
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         idToGiftEntityListDictionary,
         giftId,
         &value,
         (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( value )
      return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)value,
                                   (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
LABEL_17:
    sub_1C93D2C(idToGiftEntityListDictionary, *(_QWORD *)&giftId);
  }
  v8 = Method_System_Array_Empty_GiftEntity___;
  v9 = *((_QWORD *)Method_System_Array_Empty_GiftEntity___ + 7);
  if ( !v9 )
  {
    sub_1C69BC4(Method_System_Array_Empty_GiftEntity___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C69B68(inited);
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
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  GiftEntity_o *v25; // x22
  __int64 v26; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x21
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  System_Collections_IEnumerator_c **v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  GiftEntity_o *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x10
  const MethodInfo *v54; // x2
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x20
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0

  v4 = this;
  if ( (byte_4D30E12 & 1) == 0 )
  {
    sub_1C93AD4(&GiftEntity_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerable_TypeInfo);
    this = (GiftMaster_o *)sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D30E12 = 1;
  }
  if ( !e )
    sub_1C93D2C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_1C93AE8(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_1C93D20(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_1C93AE8(&Method_GiftMaster_OnListChangedImplementation__);
        sub_1C93BFC(v12, v13);
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
        v10 = sub_1C69E5C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      if ( !v15 )
        sub_1C93D2C(0, v14);
      while ( 1 )
      {
        v16 = *(_QWORD *)v15;
        v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 4;
            if ( !v17 )
              goto LABEL_20;
          }
          v19 = v16 + 16LL * *v18 + 312;
        }
        else
        {
LABEL_20:
          v19 = sub_1C69E5C(v15, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
          break;
        v20 = *(_QWORD *)v15;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v22 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_27;
          }
          v23 = v20 + 16LL * (*(_DWORD *)v22 + 1) + 312;
        }
        else
        {
LABEL_27:
          v23 = sub_1C69E5C(v15, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        v25 = (GiftEntity_o *)v24;
        if ( v24 )
        {
          v26 = *(_QWORD *)v24;
          naturalAligment = GiftEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)naturalAligment
            && *(GiftEntity_c **)(*(_QWORD *)(v26 + 200) + 8 * naturalAligment - 8) == GiftEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v26 + 376))(v24, *(_QWORD *)(v26 + 384)) )
              GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v25, v28);
          }
        }
      }
      v29 = sub_1C93C10(v15, System_IDisposable_TypeInfo);
      if ( v29 )
      {
        v30 = *(_QWORD *)v29;
        v31 = v29;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_39;
          }
          v34 = v30 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_39:
          v34 = sub_1C69E5C(v29, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v36 = newItems->klass;
      v37 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v38 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_47;
        }
        v39 = (__int64)&v36->vtable[*v38];
      }
      else
      {
LABEL_47:
        v39 = sub_1C69E5C(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v41 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v39)(newItems, *(_QWORD *)(v39 + 8));
      if ( !v41 )
        sub_1C93D2C(0, v40);
      while ( 1 )
      {
        v42 = *(_QWORD *)v41;
        v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_54;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_54:
          v45 = sub_1C69E5C(v41, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
          break;
        v46 = *(_QWORD *)v41;
        v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v48 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v47;
            v48 += 2;
            if ( !v47 )
              goto LABEL_61;
          }
          v49 = v46 + 16LL * (*(_DWORD *)v48 + 1) + 312;
        }
        else
        {
LABEL_61:
          v49 = sub_1C69E5C(v41, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
        v51 = (GiftEntity_o *)v50;
        if ( v50 )
        {
          v52 = *(_QWORD *)v50;
          v53 = GiftEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) >= (unsigned int)v53
            && *(GiftEntity_c **)(*(_QWORD *)(v52 + 200) + 8 * v53 - 8) == GiftEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v52 + 376))(v50, *(_QWORD *)(v52 + 384)) )
          {
            GiftMaster__AddIdToGiftEntityListDictionary(v4, v51, v54);
          }
        }
      }
      v55 = sub_1C93C10(v41, System_IDisposable_TypeInfo);
      if ( v55 )
      {
        v56 = *(_QWORD *)v55;
        v57 = v55;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_73;
          }
          v60 = v56 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_73:
          v60 = sub_1C69E5C(v55, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
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
  if ( (byte_4D30E11 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__Remove__);
    this = (GiftMaster_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    byte_4D30E11 = 1;
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
          (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)value,
                           (Il2CppObject *)giftEntity,
                           (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_1C93D2C(this, giftEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
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

  if ( (byte_4D30E0D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
    byte_4D30E0D = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


GiftEntity_o *GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  int32_t v8; // w21
  struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *idToGiftEntityListDictionary; // x8
  bool v10; // w20
  Il2CppObject *Item; // x22
  GiftEntity_o *v12; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D30E13 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_1C93AD4(&GiftEntity_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30E13 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, id, 0);
  if ( Instance )
  {
    v7 = *((_QWORD *)Instance + 5);
    if ( !v7 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v7 + 24) )
      sub_1C93D34(Instance);
    id = *((_DWORD *)Instance + 12);
    v8 = *(_DWORD *)(v7 + 32);
  }
  else
  {
    v8 = 0;
  }
  idToGiftEntityListDictionary = this->fields.idToGiftEntityListDictionary;
  v10 = Instance != 0;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)idToGiftEntityListDictionary,
          id,
          &value,
          (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return 0;
  Instance = value;
  if ( !value )
LABEL_16:
    sub_1C93D2C(Instance, v6);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)value,
           0,
           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  v12 = (GiftEntity_o *)sub_1C93D20(GiftEntity_TypeInfo);
  GiftEntity___ctor_43050996(v12, (GiftEntity_o *)Item, v8, v10, 0);
  return v12;
}