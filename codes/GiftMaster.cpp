void GiftMaster___ctor(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970C9F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
    byte_5970C9F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_GiftEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity____ctor__);
  this->fields.idToGiftEntityListDictionary = (struct System_Collections_Generic_Dictionary_int__List_GiftEntity___o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.idToGiftEntityListDictionary,
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
    (const MethodInfo_3F1339C *)Method_DataMasterBase_GiftMaster__GiftEntity__string___ctor__);
}


void GiftMaster__AddIdToGiftEntityListDictionary(
        GiftMaster_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  GiftMaster_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppClass *klass; // x8
  _QWORD *v13; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v15; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_5970CA1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    this = (GiftMaster_o *)sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_5970CA1 = 1;
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
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
    value = (Il2CppObject *)v11;
    if ( !this )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      giftEntity->fields.id,
      (Il2CppObject *)v11,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___set_Item__);
  }
  this = (GiftMaster_o *)value;
  if ( !value
    || (klass = value[1].klass,
        v13 = Method_System_Collections_Generic_List_GiftEntity__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_14:
    sub_2213CDC(this, giftEntity);
  }
  MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)giftEntity,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &klass->_1.image + MasterName_k__BackingField_low;
    LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    v15[4] = giftEntity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)giftEntity, v5, v6, v7, v8, v9, v10);
  }
}


void GiftMaster__CreateIdToGiftEntityListDictionary(GiftMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  GiftEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__o *v23; // [xsp+18h] [xbp-28h]

  if ( (byte_5970CA0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_GiftEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970CA0 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  if ( !idToGiftEntityListDictionary
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          idToGiftEntityListDictionary,
          (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Clear__),
        (idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list) == 0) )
  {
    sub_2213CDC(idToGiftEntityListDictionary, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)idToGiftEntityListDictionary,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_GiftEntity__GetEnumerator__);
  v23 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v5);
  for ( i = Enumerator; ; i = v23 )
  {
    klass = i->klass;
    v8 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_11;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v10 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            i,
            *(_QWORD *)(v10 + 8));
    if ( (v11 & 1) == 0 )
      break;
    if ( !v23 )
      sub_2213CDC(v11, v12);
    v13 = v23->klass;
    v14 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GiftEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_224BC3C(v23, System_Collections_Generic_IEnumerator_GiftEntity__TypeInfo, 0);
    }
    v17 = (GiftEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            v23,
                            *(_QWORD *)(v16 + 8));
    if ( v17 )
      GiftMaster__AddIdToGiftEntityListDictionary(this, v17, v18);
  }
  if ( v23 )
  {
    v19 = v23->klass;
    v20 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_30;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_30:
      v22 = sub_224BC3C(v23, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(v23, *(_QWORD *)(v22 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_o *GiftMaster__GetEntity(
        GiftMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970C9D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
    byte_5970C9D = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&objectId);
  return (GiftEntity_o *)DataMasterBase_object__object__object___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           PK,
                           (const MethodInfo_3F157EC *)Method_DataMasterBase_GiftMaster__GiftEntity__string__GetEntity__);
}


GiftEntity_array *GiftMaster__GetGiftListById(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  __int64 v6; // x1

  if ( (byte_5970CA6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_5970CA6 = 1;
  }
  ListById = GiftMaster__GetListById(this, giftId, method);
  if ( !ListById )
    sub_2213CDC(0, v6);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)ListById,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
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
  __int64 v12; // x0
  __int64 v13; // x1
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
  __int64 v30; // [xsp+18h] [xbp-48h]

  if ( (byte_5970CA5 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_5970CA5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( !giftIds )
    sub_2213CDC(v6, v7);
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
    v11 = sub_224BC3C(giftIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v11)(
          giftIds,
          *(_QWORD *)(v11 + 8));
  v30 = v12;
  while ( 1 )
  {
    if ( !v30 )
      sub_2213CDC(v12, v13);
    v14 = *(_QWORD *)v30;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_16:
      v17 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v30, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    v18 = *(_QWORD *)v30;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v20 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_23;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_23:
      v21 = sub_224BC3C(v30, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v30, *(_QWORD *)(v21 + 8));
    ListById = (System_Collections_Generic_IEnumerable_T__o *)GiftMaster__GetListById(this, v22, v23);
    if ( !v5 )
      sub_2213CDC(ListById, ListById);
    System_Collections_Generic_List_object___AddRange(
      v5,
      ListById,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  }
  v25 = *(_QWORD *)v30;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_31;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_31:
    v28 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_GiftEntity__o *)v5;
}


System_Collections_Generic_List_GiftEntity__o *GiftMaster__GetListById(
        GiftMaster_o *this,
        int32_t giftId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v9; // x22
  struct System_Int32_array *priorGiftIconIds; // x23
  System_Int32_array *PriorGiftNums; // x19
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x20
  int32_t *m_Items; // x27
  __int64 max_length_low; // x8
  int32_t max_length; // w1
  __int64 v18; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970CA7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GiftEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970CA7 = 1;
  }
  value = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, giftId, v7);
  v9 = ValidPriorDataById;
  if ( ValidPriorDataById )
  {
    giftId = ValidPriorDataById->fields.priorGiftId;
    priorGiftIconIds = ValidPriorDataById->fields.priorGiftIconIds;
    PriorGiftNums = GiftAddEntity__GetPriorGiftNums(ValidPriorDataById, v6);
  }
  else
  {
    PriorGiftNums = 0;
    priorGiftIconIds = 0;
  }
  Instance = (DataManager_o *)this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                giftId,
                                &value,
                                (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
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
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( !Instance )
          goto LABEL_29;
        max_length_low = SLODWORD(priorGiftIconIds->max_length);
        v12 = (System_Collections_Generic_List_object__o *)value;
        BYTE4(Instance->fields.lookup) = v9 != 0;
        if ( v13 >= max_length_low )
          break;
        if ( !v12 )
          goto LABEL_29;
        Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                      v12,
                                      v13,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        if ( v13 >= (unsigned __int64)LODWORD(priorGiftIconIds->max_length) )
          goto LABEL_33;
        if ( !Instance )
          goto LABEL_29;
        HIDWORD(Instance->fields.datalist) = priorGiftIconIds->m_Items[v13];
        if ( PriorGiftNums )
        {
          max_length = PriorGiftNums->max_length;
          v18 = 0;
          System_Nullable_int____ctor(
            (System_Nullable_int__o)&v18,
            max_length,
            (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
          if ( (_BYTE)v18 )
          {
            if ( v13 < v18 >> 32 )
            {
              if ( v13 >= (unsigned __int64)LODWORD(PriorGiftNums->max_length) )
                goto LABEL_33;
              if ( (m_Items[v13] & 0x80000000) == 0 )
              {
                Instance = (DataManager_o *)value;
                if ( !value )
                  goto LABEL_29;
                Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)value,
                                              v13,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( v13 >= (unsigned __int64)LODWORD(PriorGiftNums->max_length) )
LABEL_33:
                  sub_2213CE4(Instance);
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
                                                                (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GiftEntity___);
    }
LABEL_29:
    sub_2213CDC(Instance, v6);
  }
  return (System_Collections_Generic_List_GiftEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
GiftEntity_array *GiftMaster__GetOriginalGiftData(GiftMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *idToGiftEntityListDictionary; // x0
  long double v6; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970CA8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_GiftEntity___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    byte_5970CA8 = 1;
  }
  idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.idToGiftEntityListDictionary;
  value = 0;
  if ( !idToGiftEntityListDictionary )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         idToGiftEntityListDictionary,
         giftId,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
  {
    idToGiftEntityListDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( value )
      return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)value,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
LABEL_17:
    sub_2213CDC(idToGiftEntityListDictionary, *(_QWORD *)&giftId);
  }
  v8 = Method_System_Array_Empty_GiftEntity___;
  v9 = *((_QWORD *)Method_System_Array_Empty_GiftEntity___ + 7);
  if ( !v9 )
  {
    sub_224B964(Method_System_Array_Empty_GiftEntity___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v6);
  if ( !*(_DWORD *)(v10 + 228) )
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10, *(_QWORD *)&giftId);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v6);
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
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 i; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  GiftEntity_o *v28; // x21
  __int64 v29; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x22
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 j; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  __int64 v57; // x0
  GiftEntity_o *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x10
  const MethodInfo *v62; // x2
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x21
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // [xsp+28h] [xbp-48h]
  __int64 v70; // [xsp+28h] [xbp-48h]

  v4 = this;
  if ( (byte_5970CA3 & 1) == 0 )
  {
    sub_2213A60(&GiftEntity_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerable_TypeInfo);
    this = (GiftMaster_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970CA3 = 1;
  }
  if ( !e )
    sub_2213CDC(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_2213A74(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_2213CCC(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_2213A74(&Method_GiftMaster_OnListChangedImplementation__);
        sub_2213BA0(v12, v13);
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
        v10 = sub_224BC3C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      v69 = v14;
      if ( !v14 )
        sub_2213CDC(v14, v15);
      for ( i = v14; ; i = v69 )
      {
        v17 = *(_QWORD *)i;
        v18 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
        if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
        {
          v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v18;
            v19 += 4;
            if ( !v18 )
              goto LABEL_21;
          }
          v20 = v17 + 16LL * *v19 + 312;
        }
        else
        {
LABEL_21:
          v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(i, *(_QWORD *)(v20 + 8));
        if ( (v21 & 1) == 0 )
          break;
        if ( !v69 )
          sub_2213CDC(v21, v22);
        v23 = *(_QWORD *)v69;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
        {
          v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_29;
          }
          v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
        }
        else
        {
LABEL_29:
          v26 = sub_224BC3C(v69, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v69, *(_QWORD *)(v26 + 8));
        v28 = (GiftEntity_o *)v27;
        if ( v27 )
        {
          v29 = *(_QWORD *)v27;
          naturalAligment = GiftEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)naturalAligment
            && *(GiftEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * naturalAligment - 8) == GiftEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
              GiftMaster__RemoveIdToGiftEntityListDictionary(v4, v28, v32);
          }
        }
      }
      v33 = sub_2213BB4(v69, System_IDisposable_TypeInfo);
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
              goto LABEL_43;
          }
          v38 = v34 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_43:
          v38 = sub_224BC3C(v33, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v40 = newItems->klass;
      v41 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_51;
        }
        v43 = (__int64)&v40->vtable[*v42];
      }
      else
      {
LABEL_51:
        v43 = sub_224BC3C(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(newItems, *(_QWORD *)(v43 + 8));
      v70 = v44;
      if ( !v44 )
        sub_2213CDC(v44, v45);
      for ( j = v44; ; j = v70 )
      {
        v47 = *(_QWORD *)j;
        v48 = *(unsigned __int16 *)(*(_QWORD *)j + 302LL);
        if ( *(_WORD *)(*(_QWORD *)j + 302LL) )
        {
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_59;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_59:
          v50 = sub_224BC3C(j, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(j, *(_QWORD *)(v50 + 8));
        if ( (v51 & 1) == 0 )
          break;
        if ( !v70 )
          sub_2213CDC(v51, v52);
        v53 = *(_QWORD *)v70;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
        {
          v55 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v54;
            v55 += 2;
            if ( !v54 )
              goto LABEL_67;
          }
          v56 = v53 + 16LL * (*(_DWORD *)v55 + 1) + 312;
        }
        else
        {
LABEL_67:
          v56 = sub_224BC3C(v70, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v70, *(_QWORD *)(v56 + 8));
        v58 = (GiftEntity_o *)v57;
        if ( v57 )
        {
          v59 = *(_QWORD *)v57;
          v60 = GiftEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v57 + 304LL) >= (unsigned int)v60
            && *(GiftEntity_c **)(*(_QWORD *)(v59 + 200) + 8 * v60 - 8) == GiftEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v59 + 376))(v57, *(_QWORD *)(v59 + 384)) )
              GiftMaster__AddIdToGiftEntityListDictionary(v4, v58, v62);
          }
        }
      }
      v63 = sub_2213BB4(v70, System_IDisposable_TypeInfo);
      if ( v63 )
      {
        v64 = *(_QWORD *)v63;
        v65 = v63;
        v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
        {
          v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
          {
            --v66;
            v67 += 4;
            if ( !v66 )
              goto LABEL_81;
          }
          v68 = v64 + 16LL * *v67 + 312;
        }
        else
        {
LABEL_81:
          v68 = sub_224BC3C(v63, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
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
  if ( (byte_5970CA2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Remove__);
    this = (GiftMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    byte_5970CA2 = 1;
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
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return;
  this = (GiftMaster_o *)value;
  if ( !value )
    goto LABEL_12;
  this = (GiftMaster_o *)System_Collections_Generic_List_object___Remove(
                           (System_Collections_Generic_List_object__o *)value,
                           (Il2CppObject *)giftEntity,
                           (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_GiftEntity__Remove__);
  if ( !value )
    goto LABEL_12;
  if ( LODWORD(value[1].monitor) )
    return;
  this = (GiftMaster_o *)v4->fields.idToGiftEntityListDictionary;
  if ( !this )
LABEL_12:
    sub_2213CDC(this, giftEntity);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    giftEntity->fields.id,
    (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___Remove__);
}


// local variable allocation has failed, the output may be wrong!
bool GiftMaster__TryGetEntity(
        GiftMaster_o *this,
        GiftEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970C9E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
    byte_5970C9E = 1;
  }
  PK = (Il2CppObject *)GiftEntity__CreatePK(id, type, objectId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__TryGetEntity__);
}


GiftEntity_o *GiftMaster__getDataById(GiftMaster_o *this, int32_t id, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  void *v8; // x22
  __int64 v9; // x8
  int32_t v10; // w21
  bool v11; // w20
  Il2CppObject *Item; // x22
  GiftEntity_o *v13; // x19
  const MethodInfo *v14; // x4
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970CA4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__);
    sub_2213A60(&GiftEntity_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970CA4 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftAddMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, id, v7);
  v8 = Instance;
  if ( Instance )
  {
    v9 = *((_QWORD *)Instance + 5);
    if ( !v9 )
      goto LABEL_16;
    if ( !*(_DWORD *)(v9 + 24) )
      sub_2213CE4(Instance);
    id = *((_DWORD *)Instance + 12);
    v10 = *(_DWORD *)(v9 + 32);
  }
  else
  {
    v10 = 0;
  }
  Instance = this->fields.idToGiftEntityListDictionary;
  if ( !Instance )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)Instance,
          id,
          &value,
          (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_GiftEntity___TryGetValue__) )
    return 0;
  Instance = value;
  if ( !value )
LABEL_16:
    sub_2213CDC(Instance, v6);
  v11 = v8 != 0;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)value,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
  v13 = (GiftEntity_o *)sub_2213CCC(GiftEntity_TypeInfo);
  GiftEntity___ctor_49346944(v13, (GiftEntity_o *)Item, v10, v11, v14);
  return v13;
}