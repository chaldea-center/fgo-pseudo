void SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x1

  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.bgmEntity,
    (int32_t)inputBgmEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.itemIds, 0, v13, v14, v15, v16, v17, v18);
  this->fields.prices = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.prices, 0, v19, v20, v21, v22, v23, v24);
  SoundPlayerListViewItem__analyzeOpenType(this, v25);
}


void SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct BgmEntity_o *v13; // x8
  Il2CppClass *klass; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppClass *v21; // x1
  int32_t v22; // w1
  const MethodInfo *v23; // x2
  struct BgmEntity_o *v24; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D27E0B & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C94098(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27E0B = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopMaster___);
      v13 = this->fields.bgmEntity;
      if ( !v13 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v13->fields.shopId,
                                   (const MethodInfo_345B50C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          klass = entity[2].klass;
          this->fields.itemIds = (struct System_Int32_array *)klass;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.itemIds, (int32_t)klass, v2, v3, v4, v5, v6, v7);
          if ( !entity )
            goto LABEL_22;
          v21 = entity[5].klass;
          this->fields.prices = (struct System_Int32_array *)v21;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.prices, (int32_t)v21, v15, v16, v17, v18, v19, v20);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v22 = StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.notOpenStr, v22, v2, v3, v4, v5, v6, v7);
    if ( this->fields.openType == 2 )
      return;
    v24 = this->fields.bgmEntity;
    if ( v24 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_34490096(v24->fields.id, &this->fields.notOpenStr, v23) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_1C942F0(Instance, v12);
  }
}


void SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v5; // x20
  intptr_t m_CachedPtr; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4D27E0A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SoundPlayerListViewObject_TypeInfo);
    byte_4D27E0A = 1;
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
      || (SoundPlayerListViewItemDraw__apllyDisp((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v8),
          (m_CachedPtr = v5[5].fields.m_CachedPtr) == 0) )
    {
      sub_1C942F0(m_CachedPtr, v7);
    }
    SoundPlayerListViewItemDraw__applyUi((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v9);
  }
}


void SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v5; // x20
  intptr_t m_CachedPtr; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D27E09 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SoundPlayerListViewObject_TypeInfo);
    byte_4D27E09 = 1;
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
      sub_1C942F0(m_CachedPtr, v7);
    SoundPlayerListViewItemDraw__attachPlayEffect((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v8);
  }
}


System_String_o *SoundPlayerListViewItem__getBgmCueName(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_4D27E10 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27E10 = 1;
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

  if ( (byte_4D27E0F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27E0F = 1;
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

  if ( (byte_4D27E0C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27E0C = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_34490096(bgmId, &closedMessage, v2);
}


bool SoundPlayerListViewItem__isBgmLock_34490096(
        int32_t bgmId,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  BgmReleaseEntity_array *Entitys; // x22
  System_Collections_Generic_Dictionary_int__object__o *v9; // x21
  const MethodInfo *v10; // x2
  il2cpp_array_size_t max_length; // x8
  int v12; // w19
  int v13; // w28
  BgmReleaseEntity_o *v14; // x24
  char v15; // w25
  int32_t priority; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v17; // x27
  const MethodInfo *v18; // x1
  Il2CppObject *Item; // x0
  int32_t condGroup; // w27
  SoundPlayerListViewItem_BgmPriorityData_o *v21; // x26
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v30; // x22
  System_Comparison_int__o *v31; // x23
  Il2CppObject *v32; // x24
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v43; // x23
  System_Collections_Generic_List_int__o *v44; // x24
  System_Collections_Generic_List_int__o *v45; // x23
  __int64 v46; // x0
  __int64 v47; // x1
  int v48; // w27
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  char v51; // w28
  int v52; // w8
  int v53; // w29
  _BOOL8 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x24
  _BOOL8 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w1
  const MethodInfo *v60; // x4
  __int64 v61; // x0
  __int64 v62; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  char v66; // w23
  char v67; // w19
  int v68; // w28
  SoundPlayerListViewItem_BgmReleaseData_o v71; // [xsp+8h] [xbp-E8h] BYREF
  __int128 v72; // [xsp+18h] [xbp-D8h]
  Il2CppObject *entity; // [xsp+28h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v74; // [xsp+30h] [xbp-C0h] BYREF
  __int128 v75; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v77; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4D27E0D & 1) == 0 )
  {
    sub_1C94098(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
    sub_1C94098(&System_Comparison_int__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C94098(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Sort___78995448);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor___78995296);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__);
    sub_1C94098(&SoundPlayerListViewItem___c_TypeInfo);
    byte_4D27E0D = 1;
  }
  memset(&v77, 0, sizeof(v77));
  memset(&v76, 0, sizeof(v76));
  v74 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v75 = 0u;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_62;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_62;
  max_length = Entitys->max_length;
  v12 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = Entitys->m_Items[v13];
      if ( !v14 )
        break;
      if ( v14->fields.targetIds )
      {
        Instance = (void *)SoundPlayerComponent__checkOpen(v14, v14->fields.type, v10);
        if ( !v9 )
          break;
        v15 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v9,
                v14->fields.priority,
                (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v14->fields.priority;
          v17 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_1C942E4(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v17, v18);
          System_Collections_Generic_Dictionary_int__object___Add(
            v9,
            priority,
            (Il2CppObject *)v17,
            (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v9,
                 v14->fields.priority,
                 (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v14->fields.condGroup;
        v21 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v71.fields.bgmReleaseEntity = v14;
        *(_QWORD *)&v71.fields.releaseCheck = v15 & 1;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v71.fields.bgmReleaseEntity,
          (int32_t)v14,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        if ( !v21 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v21, condGroup, v71, v28);
      }
      if ( v12 == v13 )
        goto LABEL_19;
      if ( (unsigned int)++v13 >= LODWORD(Entitys->max_length) )
        sub_1C942F8(Instance);
    }
LABEL_62:
    sub_1C942F0(Instance, v5);
  }
LABEL_19:
  if ( !v9 )
    goto LABEL_62;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v9,
           (const MethodInfo_34B4594 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v30 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59037412(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_384D6E4 *)Method_System_Collections_Generic_List_int___ctor___78995296);
  Instance = SoundPlayerListViewItem___c_TypeInfo;
  if ( !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    Instance = SoundPlayerListViewItem___c_TypeInfo;
  }
  v31 = *(System_Comparison_int__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = SoundPlayerListViewItem___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v31 = (System_Comparison_int__o *)sub_1C942E4(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v31, v32, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0);
    static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = v31;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__37_0, (int32_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v30 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Sort_59045940(
    v30,
    (System_Comparison_T__o *)v31,
    (const MethodInfo_384F834 *)Method_System_Collections_Generic_List_int__Sort___78995448);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v30,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v77.fields._list = v71;
  *(_QWORD *)&v77.fields._current = v72;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v77,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v40 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v9,
            v77.fields._current,
            (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v40 )
      sub_1C942F0(0, v41);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v40[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v40[1].klass,
           (const MethodInfo_34B4584 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v43 = System_Collections_Generic_Dictionary_int__object___get_Keys(
              klass,
              (const MethodInfo_34B4594 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v44 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_59037412(
        v44,
        (System_Collections_Generic_IEnumerable_T__o *)v43,
        (const MethodInfo_384D6E4 *)Method_System_Collections_Generic_List_int___ctor___78995296);
      v45 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v45,
        (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v44 )
        sub_1C942F0(v46, v47);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v71,
        v44,
        (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v48 = 0;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v76.fields._list = v71;
      *(_QWORD *)&v76.fields._current = v72;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v76,
                (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v49 = System_Collections_Generic_Dictionary_int__object___get_Item(
                klass,
                v76.fields._current,
                (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v49 )
          sub_1C942F0(0, v50);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v71,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v49,
          (const MethodInfo_3927B1C *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v51 = 0;
        v52 = v48;
        v74 = v71;
        v75 = v72;
LABEL_37:
        v53 = v52;
        while ( 1 )
        {
          v54 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v74,
                  (const MethodInfo_35FEF5C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v54 )
            break;
          if ( (v75 & 1) == 0 )
          {
            v56 = *((_QWORD *)&v75 + 1);
            if ( !*((_QWORD *)&v75 + 1) )
              sub_1C942F0(v54, v55);
            if ( !v7 )
              sub_1C942F0(v54, v55);
            v57 = DataMasterBase_object__object__int___TryGetEntity(
                    v7,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v75 + 1) + 52LL),
                    (const MethodInfo_345B50C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v51 = 1;
            if ( v57 )
            {
              if ( !v45 )
                sub_1C942F0(v57, v58);
              v51 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v45,
                      *(_DWORD *)(v56 + 52),
                      (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v59,
                  v53 & 1,
                  closedMessage,
                  v60);
                v62 = *(unsigned int *)(v56 + 52);
                items = v45->fields._items;
                v64 = Method_System_Collections_Generic_List_int__Add__;
                ++v45->fields._version;
                if ( !items )
                  sub_1C942F0(v61, v62);
                size = v45->fields._size;
                v51 = 1;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v45,
                    v62,
                    *(const MethodInfo_384DE10 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                }
                else
                {
                  v45->fields._size = size + 1;
                  items->m_Items[size] = v62;
                }
                v52 = 1;
                goto LABEL_37;
              }
            }
          }
        }
        v48 = v53;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v74,
          (const MethodInfo_35FEF58 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v51 & 1) == 0 )
        {
          v66 = 1;
          goto LABEL_57;
        }
      }
      v66 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v76,
        (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( (v66 & 1) == 0 )
      {
        v67 = 1;
        v68 = 16;
        goto LABEL_61;
      }
    }
  }
  v67 = 0;
  v68 = 17;
LABEL_61:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v77,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v67 & (v68 == 16);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D27E0E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    byte_4D27E0E = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_64417744(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *closedMessage = v8;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)closedMessage, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_String__Concat_64417744(*closedMessage, closedMesEntity->fields.message, 0);
    *closedMessage = v15;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)closedMessage, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._playEffect_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._playEffect_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  SoundPlayerListViewManager_o *v9; // x1
  const MethodInfo *v10; // x4
  intptr_t m_CachedPtr; // x8
  __int64 v12; // x11

  if ( (byte_4D27E08 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SoundPlayerListViewManager_TypeInfo);
    sub_1C94098(&SoundPlayerListViewObject_TypeInfo);
    byte_4D27E08 = 1;
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
       && (v12 = SoundPlayerListViewManager_TypeInfo->_2.naturalAligment,
           *(unsigned __int8 *)(*(_QWORD *)m_CachedPtr + 304LL) >= (unsigned int)v12)
        ? (*(SoundPlayerListViewManager_c **)(*(_QWORD *)(*(_QWORD *)m_CachedPtr + 200LL) + 8 * v12 - 8) != SoundPlayerListViewManager_TypeInfo
         ? (v9 = 0)
         : (v9 = (SoundPlayerListViewManager_o *)v7[1].fields.m_CachedPtr))
        : (v9 = 0),
          (v8 = v7[5].fields.m_CachedPtr) == 0) )
    {
      sub_1C942F0(v8, v9);
    }
    SoundPlayerListViewItemDraw__startOpenAnim((SoundPlayerListViewItemDraw_o *)v8, v9, this, endCallback, v10);
  }
}


void SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D27E14 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
    byte_4D27E14 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Int32_array *buckets; // x8
  _QWORD *v18; // x9
  __int64 entries_low; // x10
  GrandQuestFolderBoardItem_o *v20; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v21; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(struct System_String_o **)&data.fields.releaseCheck;
  if ( (byte_4D27E13 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    byte_4D27E13 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_34B4AC8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v9 = this->fields.collectList;
    v10 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_1C942E4(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v10,
      (const MethodInfo_3926744 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v9 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v9,
      condGroup,
      (Il2CppObject *)v10,
      (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_34B4834 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0
    || (buckets = collectList->fields._buckets,
        v18 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_1C942F0(collectList, *(_QWORD *)&condGroup);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
  {
    *(_QWORD *)&v21.fields.releaseCheck = v5;
    v21.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v21,
      *(const MethodInfo_3926FC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (GrandQuestFolderBoardItem_o *)(&buckets->obj + entries_low);
    LODWORD(collectList->fields._entries) = entries_low + 1;
    v20->fields.sortValue0B = (int64_t)bgmReleaseEntity;
    v20 = (GrandQuestFolderBoardItem_o *)((char *)v20 + 40);
    v20[-1].fields._ClosedMessage_k__BackingField = v5;
    sub_1C9403C(v20, 0, v11, v12, v13, v14, v15, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewItem_BgmReleaseData___ctor(
        SoundPlayerListViewItem_BgmReleaseData_o this,
        bool releaseCheck,
        BgmReleaseEntity_o *bgmReleaseEntity,
        const MethodInfo *method)
{
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  **(_BYTE **)&this.fields.releaseCheck = (__int64)this.fields.bgmReleaseEntity & 1;
  *(_QWORD *)(*(_QWORD *)&this.fields.releaseCheck + 8LL) = releaseCheck;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)(*(_QWORD *)&this.fields.releaseCheck + 8LL),
    releaseCheck,
    releaseCheck,
    (int32_t)bgmReleaseEntity,
    (System_String_o *)method,
    v4,
    v5,
    v6);
}


void SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D27E15 & 1) == 0 )
  {
    sub_1C94098(&SoundPlayerListViewItem___c_TypeInfo);
    byte_4D27E15 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SoundPlayerListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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