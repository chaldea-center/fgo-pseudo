void __fastcall SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_1C21DDC(&this->fields.bgmEntity, inputBgmEntity);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0LL;
  sub_1C21DDC(&this->fields.itemIds, 0LL);
  this->fields.prices = 0LL;
  sub_1C21DDC(&this->fields.prices, 0LL);
  SoundPlayerListViewItem__analyzeOpenType(this, v7);
}


void __fastcall SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct BgmEntity_o *v7; // x8
  Il2CppClass *klass; // x1
  Il2CppClass *v9; // x1
  void *v10; // x1
  const MethodInfo *v11; // x2
  struct BgmEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BD7EF6 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7EF6 = 1;
  }
  entity = 0LL;
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
  {
    shopId = bgmEntity->fields.shopId;
    if ( shopId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsPurchaseShop(shopId, 1, 0LL) )
      {
        this->fields.openType = 0;
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___);
      v7 = this->fields.bgmEntity;
      if ( !v7 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v7->fields.shopId,
                                   (const MethodInfo_325BE14 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          klass = entity[2].klass;
          this->fields.itemIds = (struct System_Int32_array *)klass;
          Instance = (Il2CppObject *)sub_1C21DDC(&this->fields.itemIds, klass);
          if ( !entity )
            goto LABEL_22;
          v9 = entity[5].klass;
          this->fields.prices = (struct System_Int32_array *)v9;
          sub_1C21DDC(&this->fields.prices, v9);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v10 = StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    Instance = (Il2CppObject *)sub_1C21DDC(&this->fields.notOpenStr, v10);
    if ( this->fields.openType == 2 )
      return;
    v12 = this->fields.bgmEntity;
    if ( v12 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_32697972(v12->fields.id, &this->fields.notOpenStr, v11) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_1C22094(Instance, v6);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v5; // x20
  SoundPlayerListViewItemDraw_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4BD7EF5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SoundPlayerListViewObject_TypeInfo);
    byte_4BD7EF5 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v5 = this->fields.viewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !v5
      || (v6 = *(SoundPlayerListViewItemDraw_o **)&v5[1].fields.m_CachedPtr) == 0LL
      || (SoundPlayerListViewItemDraw__apllyDisp(v6, this, v8),
          (v6 = *(SoundPlayerListViewItemDraw_o **)&v5[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1C22094(v6, v7);
    }
    SoundPlayerListViewItemDraw__applyUi(v6, this, v9);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v5; // x20
  SoundPlayerListViewItemDraw_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BD7EF4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SoundPlayerListViewObject_TypeInfo);
    byte_4BD7EF4 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v5 = this->fields.viewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !v5 || (v6 = *(SoundPlayerListViewItemDraw_o **)&v5[1].fields.m_CachedPtr) == 0LL )
      sub_1C22094(v6, v7);
    SoundPlayerListViewItemDraw__attachPlayEffect(v6, this, v8);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_4BD7EFB & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7EFB = 1;
  }
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
    p_fileName = &bgmEntity->fields.fileName;
  else
    p_fileName = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_fileName;
}


BgmEntity_o *__fastcall SoundPlayerListViewItem__getBgmEntity(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.bgmEntity;
}


System_Int32_array *__fastcall SoundPlayerListViewItem__getItemIds(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemIds;
}


System_String_o *__fastcall SoundPlayerListViewItem__getNotOpenStr(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.notOpenStr;
}


int32_t __fastcall SoundPlayerListViewItem__getOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


System_Int32_array *__fastcall SoundPlayerListViewItem__getPrices(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.prices;
}


System_String_o *__fastcall SoundPlayerListViewItem__getTitleName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4BD7EFA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7EFA = 1;
  }
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
    p_name = &bgmEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


bool __fastcall SoundPlayerListViewItem__get_isDisp(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isDisp_k__BackingField;
}


bool __fastcall SoundPlayerListViewItem__get_isNew(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isNew_k__BackingField;
}


bool __fastcall SoundPlayerListViewItem__get_isPlaySound(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isPlaySound_k__BackingField;
}


bool __fastcall SoundPlayerListViewItem__get_isShop(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isShop_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SoundPlayerListViewItem__get_playEffect(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._playEffect_k__BackingField;
}


bool __fastcall SoundPlayerListViewItem__isBgmLock(int32_t bgmId, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *closedMessage; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD7EF7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7EF7 = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_32697972(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_32697972(
        int32_t bgmId,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  BgmReleaseEntity_array *Entitys; // x22
  System_Collections_Generic_Dictionary_int__object__o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x8
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
  const MethodInfo *v22; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v24; // x22
  System_Comparison_int__o *v25; // x23
  Il2CppObject *v26; // x24
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v31; // x23
  System_Collections_Generic_List_int__o *v32; // x24
  System_Collections_Generic_List_int__o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  int v36; // w27
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  char v39; // w28
  int v40; // w8
  int v41; // w29
  _BOOL8 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x24
  _BOOL8 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w1
  const MethodInfo *v48; // x4
  __int64 v49; // x0
  __int64 v50; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  char v54; // w23
  char v55; // w19
  int v56; // w28
  SoundPlayerListViewItem_BgmReleaseData_o v59; // [xsp+8h] [xbp-E8h] BYREF
  __int128 v60; // [xsp+18h] [xbp-D8h]
  Il2CppObject *entity; // [xsp+28h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v62; // [xsp+30h] [xbp-C0h] BYREF
  __int128 v63; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v64; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v65; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4BD7EF8 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
    sub_1C21E38(&System_Comparison_int__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1C21E38(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Sort___77576768);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__);
    sub_1C21E38(&SoundPlayerListViewItem___c_TypeInfo);
    byte_4BD7EF8 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  v62 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v63 = 0u;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_62;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0LL);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_62;
  v11 = *(_QWORD *)&Entitys->max_length;
  v12 = v11 - 1;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = Entitys->m_Items[v13];
      if ( !v14 )
        break;
      if ( v14->fields.targetIds )
      {
        Instance = SoundPlayerComponent__checkOpen(v14, v14->fields.type, v10);
        if ( !v9 )
          break;
        v15 = Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v9,
                v14->fields.priority,
                (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v14->fields.priority;
          v17 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_1C22084(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v17, v18);
          System_Collections_Generic_Dictionary_int__object___Add(
            v9,
            priority,
            (Il2CppObject *)v17,
            (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v9,
                 v14->fields.priority,
                 (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v14->fields.condGroup;
        v21 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v59.fields.bgmReleaseEntity = v14;
        *(_QWORD *)&v59.fields.releaseCheck = v15 & 1;
        Instance = sub_1C21DDC(&v59.fields.bgmReleaseEntity, v14);
        if ( !v21 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v21, condGroup, v59, v22);
      }
      if ( v12 == v13 )
        goto LABEL_19;
      if ( ++v13 >= Entitys->max_length )
        sub_1C2209C(Instance, v5);
    }
LABEL_62:
    sub_1C22094(Instance, v5);
  }
LABEL_19:
  if ( !v9 )
    goto LABEL_62;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v9,
           (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56826212(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
  Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  if ( !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  }
  v25 = *(System_Comparison_int__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v25 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
    }
    v26 = **(Il2CppObject ***)(Instance + 184);
    v25 = (System_Comparison_int__o *)sub_1C22084(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v25, v26, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0LL);
    static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = v25;
    Instance = sub_1C21DDC(&static_fields->__9__37_0, v25);
  }
  if ( !v24 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Sort_56834740(
    v24,
    (System_Comparison_T__o *)v25,
    (const MethodInfo_3633AB4 *)Method_System_Collections_Generic_List_int__Sort___77576768);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v24,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v65.fields._list = v59;
  *(_QWORD *)&v65.fields._current = v60;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v65,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v28 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v9,
            v65.fields._current,
            (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v28 )
      sub_1C22094(0LL, v29);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v28[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v28[1].klass,
           (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v31 = System_Collections_Generic_Dictionary_int__object___get_Keys(
              klass,
              (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v32 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_56826212(
        v32,
        (System_Collections_Generic_IEnumerable_T__o *)v31,
        (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
      v33 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v33,
        (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v32 )
        sub_1C22094(v34, v35);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        v32,
        (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v36 = 0;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v64.fields._list = v59;
      *(_QWORD *)&v64.fields._current = v60;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v64,
                (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v37 = System_Collections_Generic_Dictionary_int__object___get_Item(
                klass,
                v64.fields._current,
                (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v37 )
          sub_1C22094(0LL, v38);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v59,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v37,
          (const MethodInfo_3702AB4 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v39 = 0;
        v40 = v36;
        v62 = v59;
        v63 = v60;
LABEL_37:
        v41 = v40;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v62,
                  (const MethodInfo_33F2EAC *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v42 )
            break;
          if ( (v63 & 1) == 0 )
          {
            v44 = *((_QWORD *)&v63 + 1);
            if ( !*((_QWORD *)&v63 + 1) )
              sub_1C22094(v42, v43);
            if ( !v7 )
              sub_1C22094(v42, v43);
            v45 = DataMasterBase_object__object__int___TryGetEntity(
                    v7,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v63 + 1) + 52LL),
                    (const MethodInfo_325BE14 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v39 = 1;
            if ( v45 )
            {
              if ( !v33 )
                sub_1C22094(v45, v46);
              v39 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v33,
                      *(_DWORD *)(v44 + 52),
                      (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v47,
                  v41 & 1,
                  closedMessage,
                  v48);
                v50 = *(unsigned int *)(v44 + 52);
                items = v33->fields._items;
                v52 = Method_System_Collections_Generic_List_int__Add__;
                ++v33->fields._version;
                if ( !items )
                  sub_1C22094(v49, v50);
                size = v33->fields._size;
                v39 = 1;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    v50,
                    *(const MethodInfo_3632090 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                }
                else
                {
                  v33->fields._size = size + 1;
                  items->m_Items[size + 1] = v50;
                }
                v40 = 1;
                goto LABEL_37;
              }
            }
          }
        }
        v36 = v41;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v62,
          (const MethodInfo_33F2EA8 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v39 & 1) == 0 )
        {
          v54 = 1;
          goto LABEL_57;
        }
      }
      v54 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v64,
        (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( (v54 & 1) == 0 )
      {
        v55 = 1;
        v56 = 16;
        goto LABEL_61;
      }
    }
  }
  v55 = 0;
  v56 = 17;
LABEL_61:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v65,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v55 & (v56 == 16);
}


void __fastcall SoundPlayerListViewItem__setNotOpenStr(
        ClosedMessageEntity_o *closedMesEntity,
        int32_t kind,
        bool isNewLine,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x1

  if ( (byte_4BD7EF9 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    byte_4BD7EF9 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_63115476(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *closedMessage = v8;
      sub_1C21DDC(closedMessage, v8);
    }
    v9 = System_String__Concat_63115476(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v9;
    sub_1C21DDC(closedMessage, v9);
  }
}


void __fastcall SoundPlayerListViewItem__setOpenType(
        SoundPlayerListViewItem_o *this,
        int32_t openType,
        const MethodInfo *method)
{
  this->fields.openType = openType;
}


void __fastcall SoundPlayerListViewItem__set_isDisp(
        SoundPlayerListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDisp_k__BackingField = value;
}


void __fastcall SoundPlayerListViewItem__set_isNew(
        SoundPlayerListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isNew_k__BackingField = value;
}


void __fastcall SoundPlayerListViewItem__set_isPlaySound(
        SoundPlayerListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isPlaySound_k__BackingField = value;
}


void __fastcall SoundPlayerListViewItem__set_isShop(
        SoundPlayerListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isShop_k__BackingField = value;
}


void __fastcall SoundPlayerListViewItem__set_playEffect(
        SoundPlayerListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._playEffect_k__BackingField = value;
  sub_1C21DDC(&this->fields._playEffect_k__BackingField, value);
}


void __fastcall SoundPlayerListViewItem__startOpenAnim(
        SoundPlayerListViewItem_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v7; // x21
  SoundPlayerListViewItemDraw_o *v8; // x0
  SoundPlayerListViewManager_o *v9; // x1
  const MethodInfo *v10; // x4
  struct ListViewManager_o *manager; // x8
  __int64 v12; // x11

  if ( (byte_4BD7EF3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SoundPlayerListViewManager_TypeInfo);
    sub_1C21E38(&SoundPlayerListViewObject_TypeInfo);
    byte_4BD7EF3 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v7 = this->fields.viewObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( !v7
      || ((manager = v7->fields.manager) != 0LL
       && (v12 = LOBYTE(SoundPlayerListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12)
        ? ((SoundPlayerListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != SoundPlayerListViewManager_TypeInfo
         ? (v9 = 0LL)
         : (v9 = (SoundPlayerListViewManager_o *)v7->fields.manager))
        : (v9 = 0LL),
          (v8 = *(SoundPlayerListViewItemDraw_o **)&v7[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1C22094(v8, v9);
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v8, v9, this, endCallback, v10);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20

  if ( (byte_4BD7EFD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
    byte_4BD7EFD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v3;
  sub_1C21DDC(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        int32_t condGroup,
        SoundPlayerListViewItem_BgmReleaseData_o data,
        const MethodInfo *method)
{
  struct BgmReleaseEntity_o *bgmReleaseEntity; // x19
  __int64 v5; // x20
  System_Collections_Generic_Dictionary_int__object__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v9; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v10; // x24
  struct System_Int32_array *buckets; // x8
  _QWORD *v12; // x9
  __int64 entries_low; // x10
  __int64 v14; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v15; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_4BD7EFC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    byte_4BD7EFC = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v9 = this->fields.collectList;
    v10 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_1C22084(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v10,
      (const MethodInfo_37016DC *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v9 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v9,
      condGroup,
      (Il2CppObject *)v10,
      (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL
    || (buckets = collectList->fields._buckets,
        v12 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_1C22094(collectList, *(_QWORD *)&condGroup);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= buckets->max_length )
  {
    *(_QWORD *)&v15.fields.releaseCheck = v5;
    v15.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v15,
      *(const MethodInfo_3701F5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = (__int64)buckets + 16 * entries_low;
    LODWORD(collectList->fields._entries) = entries_low + 1;
    *(_QWORD *)(v14 + 40) = bgmReleaseEntity;
    v14 += 40LL;
    *(_QWORD *)(v14 - 8) = v5;
    sub_1C21DDC(v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItem_BgmReleaseData___ctor(
        SoundPlayerListViewItem_BgmReleaseData_o this,
        bool releaseCheck,
        BgmReleaseEntity_o *bgmReleaseEntity,
        const MethodInfo *method)
{
  **(_BYTE **)&this.fields.releaseCheck = (__int64)this.fields.bgmReleaseEntity & 1;
  *(_QWORD *)(*(_QWORD *)&this.fields.releaseCheck + 8LL) = releaseCheck;
  sub_1C21DDC(*(_QWORD *)&this.fields.releaseCheck + 8LL, releaseCheck);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD7EFE & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerListViewItem___c_TypeInfo);
    byte_4BD7EFE = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v1;
  sub_1C21DDC(SoundPlayerListViewItem___c_TypeInfo->static_fields, v1);
}


void __fastcall SoundPlayerListViewItem___c___ctor(SoundPlayerListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SoundPlayerListViewItem___c___isBgmLock_b__37_0(
        SoundPlayerListViewItem___c_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  return y - x;
}