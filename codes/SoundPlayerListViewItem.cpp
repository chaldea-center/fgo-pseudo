void SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1

  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bgmEntity,
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemIds, 0, v13, v14, v15, v16, v17, v18);
  this->fields.prices = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.prices, 0, v19, v20, v21, v22, v23, v24);
  SoundPlayerListViewItem__analyzeOpenType(this, v25);
}


void SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct BgmEntity_o *v13; // x8
  Il2CppClass *klass; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppClass *v21; // x1
  int32_t v22; // w1
  const MethodInfo *v23; // x2
  struct BgmEntity_o *v24; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596BCEE & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BCEE = 1;
  }
  bgmEntity = this->fields.bgmEntity;
  entity = 0;
  if ( bgmEntity )
  {
    shopId = bgmEntity->fields.shopId;
    if ( shopId )
    {
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
      if ( CondType__IsPurchaseShop(shopId, 1, 0) )
      {
        this->fields.openType = 0;
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
      v13 = this->fields.bgmEntity;
      if ( !v13 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v13->fields.shopId,
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          klass = entity[2].klass;
          this->fields.itemIds = (struct System_Int32_array *)klass;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemIds, (int32_t)klass, v2, v3, v4, v5, v6, v7);
          if ( !entity )
            goto LABEL_22;
          v21 = entity[5].klass;
          this->fields.prices = (struct System_Int32_array *)v21;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.prices,
            (int32_t)v21,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v22 = (int)StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.notOpenStr, v22, v2, v3, v4, v5, v6, v7);
    if ( this->fields.openType == 2 )
      return;
    v24 = this->fields.bgmEntity;
    if ( v24 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_40636588(v24->fields.id, &this->fields.notOpenStr, v23) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_2213CDC(Instance, v12);
  }
}


void SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v6; // x20
  intptr_t m_CachedPtr; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_596BCED & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundPlayerListViewObject_TypeInfo);
    byte_596BCED = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewObject_TypeInfo )
      v6 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  m_CachedPtr = UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !v6
      || (m_CachedPtr = v6[5].fields.m_CachedPtr) == 0
      || (SoundPlayerListViewItemDraw__apllyDisp((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v9),
          (m_CachedPtr = v6[5].fields.m_CachedPtr) == 0) )
    {
      sub_2213CDC(m_CachedPtr, v8);
    }
    SoundPlayerListViewItemDraw__applyUi((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v10);
  }
}


void SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewObject_o *viewObject; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v6; // x20
  intptr_t m_CachedPtr; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596BCEC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundPlayerListViewObject_TypeInfo);
    byte_596BCEC = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (naturalAligment = SoundPlayerListViewObject_TypeInfo->_2.naturalAligment,
        viewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SoundPlayerListViewObject_TypeInfo )
      v6 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  m_CachedPtr = UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( (m_CachedPtr & 1) == 0 )
  {
    if ( !v6 || (m_CachedPtr = v6[5].fields.m_CachedPtr) == 0 )
      sub_2213CDC(m_CachedPtr, v8);
    SoundPlayerListViewItemDraw__attachPlayEffect((SoundPlayerListViewItemDraw_o *)m_CachedPtr, this, v9);
  }
}


System_String_o *SoundPlayerListViewItem__getBgmCueName(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_596BCF3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BCF3 = 1;
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

  if ( (byte_596BCF2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BCF2 = 1;
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

  if ( (byte_596BCEF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BCEF = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_40636588(bgmId, &closedMessage, v2);
}


bool SoundPlayerListViewItem__isBgmLock_40636588(
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
  il2cpp_array_size_t max_length; // x19
  __int64 v12; // x27
  const MethodInfo_3F9C6A4 **v13; // x26
  struct BgmReleaseEntity_o *v14; // x23
  char v15; // w24
  int32_t priority; // w25
  const MethodInfo_3F9C6A4 **v17; // x29
  SoundPlayerListViewItem_BgmPriorityData_o *v18; // x26
  const MethodInfo *v19; // x1
  Il2CppObject *v20; // x2
  Il2CppObject *Item; // x25
  unsigned __int8 v22; // w8
  int32_t condGroup; // w24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v32; // x22
  __int64 v33; // x2
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__37_0; // x23
  Il2CppObject *v36; // x24
  struct SoundPlayerListViewItem___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v47; // x23
  System_Collections_Generic_List_int__o *v48; // x24
  System_Collections_Generic_List_int__o *v49; // x23
  __int64 v50; // x0
  __int64 v51; // x1
  int v52; // w25
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  SoundPlayerListViewItem_BgmReleaseData_o v55; // q0
  char v56; // w28
  int v57; // w8
  int v58; // w27
  _BOOL8 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x24
  _BOOL8 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w1
  const MethodInfo *v65; // x4
  __int64 v66; // x0
  struct System_Int32_array *items; // x8
  __int64 v68; // x1
  _QWORD *v69; // x9
  __int64 size; // x10
  char v71; // w22
  bool v72; // w20
  __int64 v73; // x19
  SoundPlayerListViewItem_BgmReleaseData_o v76; // [xsp+18h] [xbp-108h] BYREF
  __int128 v77; // [xsp+28h] [xbp-F8h]
  __int64 v78; // [xsp+38h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_int__o *v79; // [xsp+40h] [xbp-E0h]
  __int64 v80; // [xsp+48h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_int__o *v81; // [xsp+50h] [xbp-D0h]
  Il2CppObject *entity; // [xsp+58h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v83; // [xsp+60h] [xbp-C0h] BYREF
  __int128 v84; // [xsp+70h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v85; // [xsp+80h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v86; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_596BCF0 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
    sub_2213A60(&System_Comparison_int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_2213A60(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort___91653640);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__);
    sub_2213A60(&SoundPlayerListViewItem___c_TypeInfo);
    byte_596BCF0 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  memset(&v85, 0, sizeof(v85));
  v83 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v84 = 0u;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_63;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_63;
  max_length = Entitys->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = (const MethodInfo_3F9C6A4 **)&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= LODWORD(Entitys->max_length) )
        sub_2213CE4(Instance);
      v14 = Entitys->m_Items[v12];
      if ( !v14 )
        break;
      if ( v14->fields.targetIds )
      {
        Instance = (void *)SoundPlayerComponent__checkOpen(Entitys->m_Items[v12], v14->fields.type, v10);
        if ( !v9 )
          break;
        v15 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v9, v14->fields.priority, *v13) )
        {
          priority = v14->fields.priority;
          v17 = v13;
          v18 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_2213CCC(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v18, v19);
          v20 = (Il2CppObject *)v18;
          v13 = v17;
          System_Collections_Generic_Dictionary_int__object___Add(
            v9,
            priority,
            v20,
            (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v9,
                 v14->fields.priority,
                 (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        v22 = v15 & 1;
        condGroup = v14->fields.condGroup;
        v76.fields.bgmReleaseEntity = v14;
        *(_QWORD *)&v76.fields.releaseCheck = v22;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v76.fields.bgmReleaseEntity,
          (int32_t)v14,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        if ( !Item )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(
          (SoundPlayerListViewItem_BgmPriorityData_o *)Item,
          condGroup,
          v76,
          v30);
      }
      if ( (_DWORD)max_length == (_DWORD)++v12 )
        goto LABEL_18;
    }
LABEL_63:
    sub_2213CDC(Instance, v5);
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_63;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v9,
           (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v32 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v32,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  Instance = SoundPlayerListViewItem___c_TypeInfo;
  if ( !*(&SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo, v5, v33);
    Instance = SoundPlayerListViewItem___c_TypeInfo;
  }
  static_fields = (struct SoundPlayerListViewItem___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__37_0 = static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v5, v33);
      static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Comparison_int__o *)sub_2213CCC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(_9__37_0, v36, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0);
    v37 = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    v37->__9__37_0 = _9__37_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__37_0, (int32_t)_9__37_0, v38, v39, v40, v41, v42, v43);
  }
  if ( !v32 )
    goto LABEL_63;
  System_Collections_Generic_List_int___Sort_71732312(
    v32,
    (System_Comparison_T__o *)_9__37_0,
    (const MethodInfo_4468C58 *)Method_System_Collections_Generic_List_int__Sort___91653640);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    v32,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_QWORD *)&v86.fields._current = v77;
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v86.fields._list = v76;
  v80 = 0;
  v81 = &v86;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v86,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v44 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v9,
            v86.fields._current,
            (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v44 )
      sub_2213CDC(0, v45);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v44[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v44[1].klass,
           (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v47 = System_Collections_Generic_Dictionary_int__object___get_Keys(
              klass,
              (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v48 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_71723804(
        v48,
        (System_Collections_Generic_IEnumerable_T__o *)v47,
        (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
      v49 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v49,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v48 )
        sub_2213CDC(v50, v51);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v76,
        v48,
        (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v52 = 0;
      *(_QWORD *)&v85.fields._current = v77;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v85.fields._list = v76;
      v78 = 0;
      v79 = &v85;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v85,
                (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v53 = System_Collections_Generic_Dictionary_int__object___get_Item(
                klass,
                v85.fields._current,
                (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v53 )
          sub_2213CDC(0, v54);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v76,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v53,
          (const MethodInfo_453A450 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v55 = v76;
        v56 = 0;
        v57 = v52;
        *(_QWORD *)&v76.fields.releaseCheck = 0;
        v76.fields.bgmReleaseEntity = (struct BgmReleaseEntity_o *)&v83;
        v83 = v55;
        v84 = v77;
LABEL_36:
        v58 = v57;
        while ( 1 )
        {
          v59 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v83,
                  (const MethodInfo_4144104 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v59 )
            break;
          if ( (v84 & 1) == 0 )
          {
            v61 = *((_QWORD *)&v84 + 1);
            if ( !*((_QWORD *)&v84 + 1) )
              sub_2213CDC(v59, v60);
            if ( !v7 )
              sub_2213CDC(v59, v60);
            v62 = DataMasterBase_object__object__int___TryGetEntity(
                    v7,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v84 + 1) + 52LL),
                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v56 = 1;
            if ( v62 )
            {
              if ( !v49 )
                sub_2213CDC(v62, v63);
              v56 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v49,
                      *(_DWORD *)(v61 + 52),
                      (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v64,
                  v58 & 1,
                  closedMessage,
                  v65);
                items = v49->fields._items;
                v68 = *(unsigned int *)(v61 + 52);
                v69 = Method_System_Collections_Generic_List_int__Add__;
                ++v49->fields._version;
                if ( !items )
                  sub_2213CDC(v66, v68);
                size = v49->fields._size;
                v56 = 1;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v49,
                    v68,
                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                }
                else
                {
                  v49->fields._size = size + 1;
                  items->m_Items[size] = v68;
                }
                v57 = 1;
                goto LABEL_36;
              }
            }
          }
        }
        v52 = v58;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v83,
          (const MethodInfo_4144100 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v56 & 1) == 0 )
        {
          v71 = 1;
          goto LABEL_57;
        }
      }
      v71 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        v79,
        (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( v78 )
        sub_2213CD4(v78);
      if ( (v71 & 1) == 0 )
      {
        v72 = 1;
        goto LABEL_61;
      }
    }
  }
  v72 = 0;
LABEL_61:
  v73 = v80;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    v81,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v73 )
    sub_2213CD4(v73);
  return v72;
}


void SoundPlayerListViewItem__setNotOpenStr(
        ClosedMessageEntity_o *closedMesEntity,
        int32_t kind,
        bool isNewLine,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596BCF1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    byte_596BCF1 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_75651716(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      *closedMessage = v8;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)closedMessage, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_String__Concat_75651716(*closedMessage, closedMesEntity->fields.message, 0);
    *closedMessage = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)closedMessage, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._playEffect_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._playEffect_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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

  if ( (byte_596BCEB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundPlayerListViewManager_TypeInfo);
    sub_2213A60(&SoundPlayerListViewObject_TypeInfo);
    byte_596BCEB = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endCallback, method);
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
      sub_2213CDC(v8, v9);
    }
    SoundPlayerListViewItemDraw__startOpenAnim((SoundPlayerListViewItemDraw_o *)v8, v9, this, endCallback, v10);
  }
}


void SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596BCF7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
    byte_596BCF7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        int32_t condGroup,
        SoundPlayerListViewItem_BgmReleaseData_o data,
        const MethodInfo *method)
{
  struct BgmReleaseEntity_o *bgmReleaseEntity; // x20
  __int64 v5; // x19
  System_Collections_Generic_Dictionary_int__object__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v9; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v10; // x24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Int32_array *buckets; // x8
  _QWORD *v18; // x9
  __int64 entries_low; // x10
  __int64 v20; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v21; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_596BCF6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    byte_596BCF6 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v9 = this->fields.collectList;
    v10 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_2213CCC(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v10,
      (const MethodInfo_4539068 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v9 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v9,
      condGroup,
      (Il2CppObject *)v10,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0
    || (buckets = collectList->fields._buckets,
        v18 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_2213CDC(collectList, *(_QWORD *)&condGroup);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
  {
    *(_QWORD *)&v21.fields.releaseCheck = v5;
    v21.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v21,
      *(const MethodInfo_4539920 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (__int64)buckets + 16 * entries_low;
    LODWORD(collectList->fields._entries) = entries_low + 1;
    *(_QWORD *)(v20 + 40) = bgmReleaseEntity;
    *(_QWORD *)(v20 + 32) = v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 40), 0, v11, v12, v13, v14, v15, v16);
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
  bool v5; // w6
  bool v6; // w7

  **(_BYTE **)&this.fields.releaseCheck = this.fields.bgmReleaseEntity;
  *(_QWORD *)(*(_QWORD *)&this.fields.releaseCheck + 8LL) = releaseCheck;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(*(_QWORD *)&this.fields.releaseCheck + 8LL),
    releaseCheck,
    (System_String_o *)releaseCheck,
    (System_String_o *)bgmReleaseEntity,
    (int32_t)method,
    v4,
    v5,
    v6);
}


void SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BCF8 & 1) == 0 )
  {
    sub_2213A60(&SoundPlayerListViewItem___c_TypeInfo);
    byte_596BCF8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SoundPlayerListViewItem___c_TypeInfo->static_fields,
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