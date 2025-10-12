void SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgmEntity, (int32_t)inputBgmEntity, v7, v8);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemIds, 0, v9, v10);
  this->fields.prices = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.prices, 0, v11, v12);
  SoundPlayerListViewItem__analyzeOpenType(this, v13);
}


void SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *Instance; // x0
  struct BgmEntity_o *v8; // x8
  Il2CppClass *klass; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppClass *v12; // x1
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  struct BgmEntity_o *v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C330EA & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C330EA = 1;
  }
  entity = 0;
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
  {
    shopId = bgmEntity->fields.shopId;
    if ( shopId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsPurchaseShop(shopId, 1, 0) )
      {
        this->fields.openType = 0;
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
      v8 = this->fields.bgmEntity;
      if ( !v8 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v8->fields.shopId,
                                   (const MethodInfo_3396884 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          klass = entity[2].klass;
          this->fields.itemIds = (struct System_Int32_array *)klass;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemIds, (int32_t)klass, v2, v3);
          if ( !entity )
            goto LABEL_22;
          v12 = entity[5].klass;
          this->fields.prices = (struct System_Int32_array *)v12;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.prices, (int32_t)v12, v10, v11);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v13 = StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.notOpenStr, v13, v2, v3);
    if ( this->fields.openType == 2 )
      return;
    v15 = this->fields.bgmEntity;
    if ( v15 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_33799340(v15->fields.id, &this->fields.notOpenStr, v14) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_1C32E7C(Instance);
  }
}


void SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v5; // x20
  intptr_t m_CachedPtr; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4C330E9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SoundPlayerListViewObject_TypeInfo);
    byte_4C330E9 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewObject_TypeInfo )
      v5 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_CachedPtr = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !v5
      || (m_CachedPtr = v5[5].fields.m_CachedPtr) == 0
      || (SoundPlayerListViewItemDraw__apllyDisp((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v7),
          (m_CachedPtr = v5[5].fields.m_CachedPtr) == 0) )
    {
      sub_1C32E7C(m_CachedPtr);
    }
    SoundPlayerListViewItemDraw__applyUi((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v8);
  }
}


void SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v5; // x20
  intptr_t m_CachedPtr; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C330E8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SoundPlayerListViewObject_TypeInfo);
    byte_4C330E8 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewObject_TypeInfo )
      v5 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_CachedPtr = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !v5 || (m_CachedPtr = v5[5].fields.m_CachedPtr) == 0 )
      sub_1C32E7C(m_CachedPtr);
    SoundPlayerListViewItemDraw__attachPlayEffect((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v7);
  }
}


System_String_o *SoundPlayerListViewItem__getBgmCueName(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_4C330EF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C330EF = 1;
  }
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
    p_fileName = &bgmEntity->fields.fileName;
  else
    p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_fileName;
}


BgmEntity_o *SoundPlayerListViewItem__getBgmEntity(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.bgmEntity;
}


System_Int32_array *SoundPlayerListViewItem__getItemIds(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemIds;
}


System_String_o *SoundPlayerListViewItem__getNotOpenStr(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.notOpenStr;
}


int32_t SoundPlayerListViewItem__getOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


System_Int32_array *SoundPlayerListViewItem__getPrices(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.prices;
}


System_String_o *SoundPlayerListViewItem__getTitleName(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4C330EE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C330EE = 1;
  }
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
    p_name = &bgmEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


bool SoundPlayerListViewItem__get_isDisp(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isDisp_k__BackingField;
}


bool SoundPlayerListViewItem__get_isNew(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isNew_k__BackingField;
}


bool SoundPlayerListViewItem__get_isPlaySound(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isPlaySound_k__BackingField;
}


bool SoundPlayerListViewItem__get_isShop(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isShop_k__BackingField;
}


UnityEngine_GameObject_o *SoundPlayerListViewItem__get_playEffect(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._playEffect_k__BackingField;
}


bool SoundPlayerListViewItem__isBgmLock(int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *closedMessage; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C330EB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C330EB = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_33799340(bgmId, &closedMessage, v2);
}


bool SoundPlayerListViewItem__isBgmLock_33799340(
        int32_t bgmId,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  BgmReleaseEntity_array *Entitys; // x22
  System_Collections_Generic_Dictionary_int__object__o *v8; // x21
  const MethodInfo *v9; // x2
  il2cpp_array_size_t max_length; // x8
  int v11; // w19
  int v12; // w28
  BgmReleaseEntity_o *v13; // x24
  char v14; // w25
  int32_t priority; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v16; // x27
  const MethodInfo *v17; // x1
  Il2CppObject *Item; // x0
  int32_t condGroup; // w27
  SoundPlayerListViewItem_BgmPriorityData_o *v20; // x26
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v25; // x22
  System_Comparison_int__o *v26; // x23
  Il2CppObject *v27; // x24
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v33; // x23
  System_Collections_Generic_List_int__o *v34; // x24
  System_Collections_Generic_List_int__o *v35; // x23
  __int64 v36; // x0
  int v37; // w27
  Il2CppObject *v38; // x0
  char v39; // w28
  int v40; // w8
  int v41; // w29
  _BOOL8 v42; // x0
  __int64 v43; // x24
  _BOOL8 v44; // x0
  int32_t v45; // w1
  const MethodInfo *v46; // x4
  __int64 v47; // x0
  int32_t v48; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  char v52; // w23
  char v53; // w19
  int v54; // w28
  SoundPlayerListViewItem_BgmReleaseData_o v57; // [xsp+8h] [xbp-E8h] BYREF
  __int128 v58; // [xsp+18h] [xbp-D8h]
  Il2CppObject *entity; // [xsp+28h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v60; // [xsp+30h] [xbp-C0h] BYREF
  __int128 v61; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v62; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v63; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4C330EC & 1) == 0 )
  {
    sub_1C32C20(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
    sub_1C32C20(&System_Comparison_int__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C32C20(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Sort___78010392);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__);
    sub_1C32C20(&SoundPlayerListViewItem___c_TypeInfo);
    byte_4C330EC = 1;
  }
  memset(&v63, 0, sizeof(v63));
  memset(&v62, 0, sizeof(v62));
  v60 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v61 = 0u;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_62;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_62;
  max_length = Entitys->max_length;
  v11 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = Entitys->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.targetIds )
      {
        Instance = (void *)SoundPlayerComponent__checkOpen(v13, v13->fields.type, v9);
        if ( !v8 )
          break;
        v14 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v8,
                v13->fields.priority,
                (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v13->fields.priority;
          v16 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_1C32E6C(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v16, v17);
          System_Collections_Generic_Dictionary_int__object___Add(
            v8,
            priority,
            (Il2CppObject *)v16,
            (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v8,
                 v13->fields.priority,
                 (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v13->fields.condGroup;
        v20 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v57.fields.bgmReleaseEntity = v13;
        *(_QWORD *)&v57.fields.releaseCheck = v14 & 1;
        sub_1C32BC4((CGThumbnailListItem_o *)&v57.fields.bgmReleaseEntity, (int32_t)v13, v21, v22);
        if ( !v20 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v20, condGroup, v57, v23);
      }
      if ( v11 == v12 )
        goto LABEL_19;
      if ( (unsigned int)++v12 >= LODWORD(Entitys->max_length) )
        sub_1C32E84(Instance);
    }
LABEL_62:
    sub_1C32E7C(Instance);
  }
LABEL_19:
  if ( !v8 )
    goto LABEL_62;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v8,
           (const MethodInfo_33EF9DC *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58175596(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
  Instance = SoundPlayerListViewItem___c_TypeInfo;
  if ( !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    Instance = SoundPlayerListViewItem___c_TypeInfo;
  }
  v26 = *(System_Comparison_int__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = SoundPlayerListViewItem___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v26 = (System_Comparison_int__o *)sub_1C32E6C(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v26, v27, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0);
    static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = v26;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__37_0, (int32_t)v26, v29, v30);
  }
  if ( !v25 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Sort_58184124(
    v25,
    (System_Comparison_T__o *)v26,
    (const MethodInfo_377D1BC *)Method_System_Collections_Generic_List_int__Sort___78010392);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v25,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v63.fields._list = v57;
  *(_QWORD *)&v63.fields._current = v58;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v63,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v31 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v8,
            v63.fields._current,
            (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v31 )
      sub_1C32E7C(0);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v31[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v31[1].klass,
           (const MethodInfo_33EF9CC *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v33 = System_Collections_Generic_Dictionary_int__object___get_Keys(
              klass,
              (const MethodInfo_33EF9DC *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v34 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_58175596(
        v34,
        (System_Collections_Generic_IEnumerable_T__o *)v33,
        (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
      v35 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v35,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        sub_1C32E7C(v36);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v57,
        v34,
        (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v37 = 0;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v62.fields._list = v57;
      *(_QWORD *)&v62.fields._current = v58;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v62,
                (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v38 = System_Collections_Generic_Dictionary_int__object___get_Item(
                klass,
                v62.fields._current,
                (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v38 )
          sub_1C32E7C(0);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v38,
          (const MethodInfo_38552C8 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v39 = 0;
        v40 = v37;
        v60 = v57;
        v61 = v58;
LABEL_37:
        v41 = v40;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v60,
                  (const MethodInfo_35351FC *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v42 )
            break;
          if ( (v61 & 1) == 0 )
          {
            v43 = *((_QWORD *)&v61 + 1);
            if ( !*((_QWORD *)&v61 + 1) )
              sub_1C32E7C(v42);
            if ( !v6 )
              sub_1C32E7C(v42);
            v44 = DataMasterBase_object__object__int___TryGetEntity(
                    v6,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v61 + 1) + 52LL),
                    (const MethodInfo_3396884 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v39 = 1;
            if ( v44 )
            {
              if ( !v35 )
                sub_1C32E7C(v44);
              v39 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v35,
                      *(_DWORD *)(v43 + 52),
                      (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v45,
                  v41 & 1,
                  closedMessage,
                  v46);
                v48 = *(_DWORD *)(v43 + 52);
                items = v35->fields._items;
                v50 = Method_System_Collections_Generic_List_int__Add__;
                ++v35->fields._version;
                if ( !items )
                  sub_1C32E7C(v47);
                size = v35->fields._size;
                v39 = 1;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v35,
                    v48,
                    *(const MethodInfo_377B798 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v35->fields._size = size + 1;
                  items->m_Items[size] = v48;
                }
                v40 = 1;
                goto LABEL_37;
              }
            }
          }
        }
        v37 = v41;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v60,
          (const MethodInfo_35351F8 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v39 & 1) == 0 )
        {
          v52 = 1;
          goto LABEL_57;
        }
      }
      v52 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v62,
        (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( (v52 & 1) == 0 )
      {
        v53 = 1;
        v54 = 16;
        goto LABEL_61;
      }
    }
  }
  v53 = 0;
  v54 = 17;
LABEL_61:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v63,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v53 & (v54 == 16);
}


void SoundPlayerListViewItem__setNotOpenStr(
        ClosedMessageEntity_o *closedMesEntity,
        int32_t kind,
        bool isNewLine,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C330ED & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    byte_4C330ED = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_63518544(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *closedMessage = v8;
      sub_1C32BC4((CGThumbnailListItem_o *)closedMessage, (int32_t)v8, v9, v10);
    }
    v11 = System_String__Concat_63518544(*closedMessage, closedMesEntity->fields.message, 0);
    *closedMessage = v11;
    sub_1C32BC4((CGThumbnailListItem_o *)closedMessage, (int32_t)v11, v12, v13);
  }
}


void SoundPlayerListViewItem__setOpenType(SoundPlayerListViewItem_o *this, int32_t openType, const MethodInfo *method)
{
  this->fields.openType = openType;
}


void SoundPlayerListViewItem__set_isDisp(SoundPlayerListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDisp_k__BackingField = value;
}


void SoundPlayerListViewItem__set_isNew(SoundPlayerListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNew_k__BackingField = value;
}


void SoundPlayerListViewItem__set_isPlaySound(SoundPlayerListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isPlaySound_k__BackingField = value;
}


void SoundPlayerListViewItem__set_isShop(SoundPlayerListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._isShop_k__BackingField = value;
}


void SoundPlayerListViewItem__set_playEffect(
        SoundPlayerListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._playEffect_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._playEffect_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SoundPlayerListViewItem__startOpenAnim(
        SoundPlayerListViewItem_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v7; // x21
  intptr_t v8; // x0
  const MethodInfo *v9; // x4
  intptr_t m_CachedPtr; // x8
  __int64 v11; // x11
  SoundPlayerListViewManager_o *v12; // x1

  if ( (byte_4C330E7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SoundPlayerListViewManager_TypeInfo);
    sub_1C32C20(&SoundPlayerListViewObject_TypeInfo);
    byte_4C330E7 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewObject_TypeInfo )
      v7 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( (v8 & 1) == 0 )
  {
    if ( !v7
      || ((m_CachedPtr = v7[1].fields.m_CachedPtr) != 0
       && (v11 = SoundPlayerListViewManager_TypeInfo->_2.naturalAligment,
           *(unsigned __int8 *)(*(_QWORD *)m_CachedPtr + 304LL) >= (unsigned int)v11)
        ? (*(SoundPlayerListViewManager_c **)(*(_QWORD *)(*(_QWORD *)m_CachedPtr + 200LL) + 8 * v11 - 8) != SoundPlayerListViewManager_TypeInfo
         ? (v12 = 0)
         : (v12 = (SoundPlayerListViewManager_o *)v7[1].fields.m_CachedPtr))
        : (v12 = 0),
          (v8 = v7[5].fields.m_CachedPtr) == 0) )
    {
      sub_1C32E7C(v8);
    }
    SoundPlayerListViewItemDraw__startOpenAnim((SoundPlayerListViewItemDraw_o *)v8, v12, this, endCallback, v9);
  }
}


void SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C330F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
    byte_4C330F1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        int32_t condGroup,
        SoundPlayerListViewItem_BgmReleaseData_o data,
        const MethodInfo *method)
{
  struct BgmReleaseEntity_o *bgmReleaseEntity; // x19
  struct System_String_o *v5; // x20
  System_Collections_Generic_Dictionary_int__object__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v9; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Int32_array *buckets; // x8
  _QWORD *v14; // x9
  __int64 entries_low; // x10
  CGThumbnailListItem_o *v16; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v17; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(struct System_String_o **)&data.fields.releaseCheck;
  if ( (byte_4C330F0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    byte_4C330F0 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v9 = this->fields.collectList;
    v10 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_1C32E6C(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v10,
      (const MethodInfo_3853EF0 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v9 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v9,
      condGroup,
      (Il2CppObject *)v10,
      (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0
    || (buckets = collectList->fields._buckets,
        v14 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_1C32E7C(collectList);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
  {
    *(_QWORD *)&v17.fields.releaseCheck = v5;
    v17.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v17,
      *(const MethodInfo_3854770 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = (CGThumbnailListItem_o *)(&buckets->obj + entries_low);
    LODWORD(collectList->fields._entries) = entries_low + 1;
    v16->fields.sortValue0B = (int64_t)bgmReleaseEntity;
    v16 = (CGThumbnailListItem_o *)((char *)v16 + 40);
    v16[-1].fields._ThumbnailSpritePath_k__BackingField = v5;
    sub_1C32BC4(v16, 0, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewItem_BgmReleaseData___ctor(
        SoundPlayerListViewItem_BgmReleaseData_o this,
        bool releaseCheck,
        BgmReleaseEntity_o *bgmReleaseEntity,
        const MethodInfo *method)
{
  **(_BYTE **)&this.fields.releaseCheck = (__int64)this.fields.bgmReleaseEntity & 1;
  *(_QWORD *)(*(_QWORD *)&this.fields.releaseCheck + 8LL) = releaseCheck;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)(*(_QWORD *)&this.fields.releaseCheck + 8LL),
    releaseCheck,
    releaseCheck,
    (const MethodInfo *)bgmReleaseEntity);
}


void SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C330F2 & 1) == 0 )
  {
    sub_1C32C20(&SoundPlayerListViewItem___c_TypeInfo);
    byte_4C330F2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SoundPlayerListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SoundPlayerListViewItem___c___ctor(SoundPlayerListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SoundPlayerListViewItem___c___isBgmLock_b__37_0(
        SoundPlayerListViewItem___c_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  return y - x;
}