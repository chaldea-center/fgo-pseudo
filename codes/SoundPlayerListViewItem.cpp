void __fastcall SoundPlayerListViewItem___ctor(
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

  ListViewItem___ctor_42932312((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.bgmEntity, (int32_t)inputBgmEntity, v7, v8);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemIds, 0, v9, v10);
  this->fields.prices = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.prices, 0, v11, v12);
  SoundPlayerListViewItem__analyzeOpenType(this, v13);
}


void __fastcall SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct BgmEntity_o *v13; // x8
  Il2CppClass *klass; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppClass *v17; // x1
  int32_t v18; // w1
  const MethodInfo *v19; // x2
  struct BgmEntity_o *v20; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B17CE3 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ShopMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    byte_4B17CE3 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ShopMaster___);
      v13 = this->fields.bgmEntity;
      if ( !v13 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v13->fields.shopId,
                                   (const MethodInfo_32C7E4C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          klass = entity[2].klass;
          this->fields.itemIds = (struct System_Int32_array *)klass;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemIds, (int32_t)klass, v2, v3);
          if ( !entity )
            goto LABEL_22;
          v17 = entity[5].klass;
          this->fields.prices = (struct System_Int32_array *)v17;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.prices, (int32_t)v17, v15, v16);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v18 = (int)StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.notOpenStr, v18, v2, v3);
    if ( this->fields.openType == 2 )
      return;
    v20 = this->fields.bgmEntity;
    if ( v20 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_33161684(v20->fields.id, &this->fields.notOpenStr, v19) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_1BCB254(Instance, v12);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v6; // x20
  SoundPlayerListViewItemDraw_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4B17CE2 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_4B17CE2 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v6 = this->fields.viewObject;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( !v6
      || (v7 = *(SoundPlayerListViewItemDraw_o **)&v6[1].fields.m_CachedPtr) == 0LL
      || (SoundPlayerListViewItemDraw__apllyDisp(v7, this, v9),
          (v7 = *(SoundPlayerListViewItemDraw_o **)&v6[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1BCB254(v7, v8);
    }
    SoundPlayerListViewItemDraw__applyUi(v7, this, v10);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v6; // x20
  SoundPlayerListViewItemDraw_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B17CE1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_4B17CE1 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v6 = this->fields.viewObject;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( !v6 || (v7 = *(SoundPlayerListViewItemDraw_o **)&v6[1].fields.m_CachedPtr) == 0LL )
      sub_1BCB254(v7, v8);
    SoundPlayerListViewItemDraw__attachPlayEffect(v7, this, v9);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_4B17CE8 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B17CE8 = 1;
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

  if ( (byte_4B17CE7 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B17CE7 = 1;
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

  if ( (byte_4B17CE4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B17CE4 = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_33161684(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_33161684(
        int32_t bgmId,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  void *Instance; // x0
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x20
  BgmReleaseEntity_array *Entitys; // x22
  System_Collections_Generic_Dictionary_int__object__o *v39; // x21
  const MethodInfo *v40; // x2
  __int64 v41; // x8
  int v42; // w19
  int v43; // w28
  BgmReleaseEntity_o *v44; // x24
  char v45; // w25
  int32_t priority; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v47; // x27
  const MethodInfo *v48; // x1
  Il2CppObject *Item; // x0
  int32_t condGroup; // w27
  SoundPlayerListViewItem_BgmPriorityData_o *v51; // x26
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v56; // x22
  System_Comparison_int__o *v57; // x23
  Il2CppObject *v58; // x24
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  Il2CppObject *v62; // x0
  __int64 v63; // x1
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v65; // x23
  System_Collections_Generic_List_int__o *v66; // x24
  System_Collections_Generic_List_int__o *v67; // x23
  __int64 v68; // x0
  __int64 v69; // x1
  int v70; // w27
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  char v73; // w28
  int v74; // w8
  int v75; // w29
  _BOOL8 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x24
  _BOOL8 v79; // x0
  __int64 v80; // x1
  int32_t v81; // w1
  const MethodInfo *v82; // x4
  __int64 v83; // x0
  __int64 v84; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  char v88; // w23
  char v89; // w19
  int v90; // w28
  SoundPlayerListViewItem_BgmReleaseData_o v93; // [xsp+8h] [xbp-E8h] BYREF
  __int128 v94; // [xsp+18h] [xbp-D8h]
  Il2CppObject *entity; // [xsp+28h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v96; // [xsp+30h] [xbp-C0h] BYREF
  __int128 v97; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v98; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v99; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4B17CE5 & 1) == 0 )
  {
    sub_1BCAFF8(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, closedMessage);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__, v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v9);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__,
      v10);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v11);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v12);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v13);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v14);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v15);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo, v16);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v19);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v20);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Sort___76866632, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, v29);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1BCAFF8(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v32);
    sub_1BCAFF8(&SoundPlayerListViewItem___c_TypeInfo, v33);
    byte_4B17CE5 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  memset(&v98, 0, sizeof(v98));
  v96 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v97 = 0u;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_62;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0LL);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_62;
  v41 = *(_QWORD *)&Entitys->max_length;
  v42 = v41 - 1;
  if ( (int)v41 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      v44 = Entitys->m_Items[v43];
      if ( !v44 )
        break;
      if ( v44->fields.targetIds )
      {
        Instance = (void *)SoundPlayerComponent__checkOpen(v44, v44->fields.type, v40);
        if ( !v39 )
          break;
        v45 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v39,
                v44->fields.priority,
                (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v44->fields.priority;
          v47 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_1BCB244(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v47, v48);
          System_Collections_Generic_Dictionary_int__object___Add(
            v39,
            priority,
            (Il2CppObject *)v47,
            (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v39,
                 v44->fields.priority,
                 (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v44->fields.condGroup;
        v51 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v93.fields.bgmReleaseEntity = v44;
        *(_QWORD *)&v93.fields.releaseCheck = v45 & 1;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v93.fields.bgmReleaseEntity, (int32_t)v44, v52, v53);
        if ( !v51 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v51, condGroup, v93, v54);
      }
      if ( v42 == v43 )
        goto LABEL_19;
      if ( ++v43 >= Entitys->max_length )
        sub_1BCB25C(Instance, v35, v40);
    }
LABEL_62:
    sub_1BCB254(Instance, v35);
  }
LABEL_19:
  if ( !v39 )
    goto LABEL_62;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v39,
           (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v56 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57263232(
    v56,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
  Instance = SoundPlayerListViewItem___c_TypeInfo;
  if ( !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    Instance = SoundPlayerListViewItem___c_TypeInfo;
  }
  v57 = *(System_Comparison_int__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v57 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = SoundPlayerListViewItem___c_TypeInfo;
    }
    v58 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v57 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v57, v58, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0LL);
    static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = v57;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__37_0, (int32_t)v57, v60, v61);
  }
  if ( !v56 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Sort_57271760(
    v56,
    (System_Comparison_T__o *)v57,
    (const MethodInfo_369E5D0 *)Method_System_Collections_Generic_List_int__Sort___76866632);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    v56,
    (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v99.fields._list = v93;
  *(_QWORD *)&v99.fields._current = v94;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v99,
            (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v62 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v39,
            v99.fields._current,
            (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v62 )
      sub_1BCB254(0LL, v63);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v62[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v62[1].klass,
           (const MethodInfo_3320F94 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v65 = System_Collections_Generic_Dictionary_int__object___get_Keys(
              klass,
              (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v66 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_57263232(
        v66,
        (System_Collections_Generic_IEnumerable_T__o *)v65,
        (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
      v67 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v67,
        (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v66 )
        sub_1BCB254(v68, v69);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v93,
        v66,
        (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v70 = 0;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v98.fields._list = v93;
      *(_QWORD *)&v98.fields._current = v94;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v98,
                (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v71 = System_Collections_Generic_Dictionary_int__object___get_Item(
                klass,
                v98.fields._current,
                (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v71 )
          sub_1BCB254(0LL, v72);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v93,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v71,
          (const MethodInfo_3770854 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v73 = 0;
        v74 = v70;
        v96 = v93;
        v97 = v94;
LABEL_37:
        v75 = v74;
        while ( 1 )
        {
          v76 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v96,
                  (const MethodInfo_346137C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v76 )
            break;
          if ( (v97 & 1) == 0 )
          {
            v78 = *((_QWORD *)&v97 + 1);
            if ( !*((_QWORD *)&v97 + 1) )
              sub_1BCB254(v76, v77);
            if ( !v37 )
              sub_1BCB254(v76, v77);
            v79 = DataMasterBase_object__object__int___TryGetEntity(
                    v37,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v97 + 1) + 52LL),
                    (const MethodInfo_32C7E4C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v73 = 1;
            if ( v79 )
            {
              if ( !v67 )
                sub_1BCB254(v79, v80);
              v73 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v67,
                      *(_DWORD *)(v78 + 52),
                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v81,
                  v75 & 1,
                  closedMessage,
                  v82);
                v84 = *(unsigned int *)(v78 + 52);
                items = v67->fields._items;
                v86 = Method_System_Collections_Generic_List_int__Add__;
                ++v67->fields._version;
                if ( !items )
                  sub_1BCB254(v83, v84);
                size = v67->fields._size;
                v73 = 1;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v67,
                    v84,
                    *(const MethodInfo_369CBAC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v67->fields._size = size + 1;
                  items->m_Items[size + 1] = v84;
                }
                v74 = 1;
                goto LABEL_37;
              }
            }
          }
        }
        v70 = v75;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v96,
          (const MethodInfo_3461378 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v73 & 1) == 0 )
        {
          v88 = 1;
          goto LABEL_57;
        }
      }
      v88 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v98,
        (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( (v88 & 1) == 0 )
      {
        v89 = 1;
        v90 = 16;
        goto LABEL_61;
      }
    }
  }
  v89 = 0;
  v90 = 17;
LABEL_61:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v99,
    (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v89 & (v90 == 16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItem__setNotOpenStr(
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

  if ( (byte_4B17CE6 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, *(_QWORD *)&kind);
    byte_4B17CE6 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_62450424(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *closedMessage = v8;
      sub_1BCAF9C((CGThumbnailListItem_o *)closedMessage, (int32_t)v8, v9, v10);
    }
    v11 = System_String__Concat_62450424(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v11;
    sub_1BCAF9C((CGThumbnailListItem_o *)closedMessage, (int32_t)v11, v12, v13);
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
  const MethodInfo *v3; // x3

  this->fields._playEffect_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._playEffect_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SoundPlayerListViewItem__startOpenAnim(
        SoundPlayerListViewItem_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v9; // x21
  SoundPlayerListViewItemDraw_o *v10; // x0
  SoundPlayerListViewManager_o *v11; // x1
  const MethodInfo *v12; // x4
  struct ListViewManager_o *manager; // x8
  __int64 v14; // x11

  if ( (byte_4B17CE0 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, endCallback);
    sub_1BCAFF8(&SoundPlayerListViewManager_TypeInfo, v5);
    sub_1BCAFF8(&SoundPlayerListViewObject_TypeInfo, v6);
    byte_4B17CE0 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v9 = this->fields.viewObject;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
  {
    if ( !v9
      || ((manager = v9->fields.manager) != 0LL
       && (v14 = LOBYTE(SoundPlayerListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v14)
        ? ((SoundPlayerListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] != SoundPlayerListViewManager_TypeInfo
         ? (v11 = 0LL)
         : (v11 = (SoundPlayerListViewManager_o *)v9->fields.manager))
        : (v11 = 0LL),
          (v10 = *(SoundPlayerListViewItemDraw_o **)&v9[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1BCB254(v10, v11);
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v10, v11, this, endCallback, v12);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B17CEA & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo, v3);
    byte_4B17CEA = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
  struct System_String_o *v5; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v14; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Int32_array *buckets; // x8
  _QWORD *v19; // x9
  __int64 entries_low; // x10
  CGThumbnailListItem_o *v21; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v22; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(struct System_String_o **)&data.fields.releaseCheck;
  if ( (byte_4B17CE9 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      *(_QWORD *)&condGroup);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v12);
    byte_4B17CE9 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v14 = this->fields.collectList;
    v15 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_1BCB244(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v15,
      (const MethodInfo_376F47C *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v14 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v14,
      condGroup,
      (Il2CppObject *)v15,
      (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL
    || (buckets = collectList->fields._buckets,
        v19 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_1BCB254(collectList, *(_QWORD *)&condGroup);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= buckets->max_length )
  {
    *(_QWORD *)&v22.fields.releaseCheck = v5;
    v22.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v22,
      *(const MethodInfo_376FCFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = (CGThumbnailListItem_o *)(&buckets->obj + entries_low);
    LODWORD(collectList->fields._entries) = entries_low + 1;
    v21->fields.sortValue0B = (int64_t)bgmReleaseEntity;
    v21 = (CGThumbnailListItem_o *)((char *)v21 + 40);
    v21[-1].fields._ThumbnailSpritePath_k__BackingField = v5;
    sub_1BCAF9C(v21, 0, v16, v17);
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
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)(*(_QWORD *)&this.fields.releaseCheck + 8LL),
    releaseCheck,
    releaseCheck,
    (const MethodInfo *)bgmReleaseEntity);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B17CEB & 1) == 0 )
  {
    sub_1BCAFF8(&SoundPlayerListViewItem___c_TypeInfo, v1);
    byte_4B17CEB = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SoundPlayerListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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