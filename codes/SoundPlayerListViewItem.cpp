void __fastcall SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_1BCA784(&this->fields.bgmEntity, inputBgmEntity);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0LL;
  sub_1BCA784(&this->fields.itemIds, 0LL);
  this->fields.prices = 0LL;
  sub_1BCA784(&this->fields.prices, 0LL);
  SoundPlayerListViewItem__analyzeOpenType(this, v7);
}


void __fastcall SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
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
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  struct BgmEntity_o *v16; // x8
  Il2CppClass *klass; // x1
  Il2CppClass *v18; // x1
  void *v19; // x1
  const MethodInfo *v20; // x2
  struct BgmEntity_o *v21; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B11C8E & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B11C8E = 1;
  }
  entity = 0LL;
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
  {
    shopId = bgmEntity->fields.shopId;
    if ( shopId )
    {
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      if ( CondType__IsPurchaseShop(shopId, 1, 0LL) )
      {
        this->fields.openType = 0;
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
      v16 = this->fields.bgmEntity;
      if ( !v16 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v16->fields.shopId,
                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          klass = entity[2].klass;
          this->fields.itemIds = (struct System_Int32_array *)klass;
          Instance = (Il2CppObject *)sub_1BCA784(&this->fields.itemIds, klass);
          if ( !entity )
            goto LABEL_22;
          v18 = entity[5].klass;
          this->fields.prices = (struct System_Int32_array *)v18;
          sub_1BCA784(&this->fields.prices, v18);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v19 = StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    Instance = (Il2CppObject *)sub_1BCA784(&this->fields.notOpenStr, v19);
    if ( this->fields.openType == 2 )
      return;
    v21 = this->fields.bgmEntity;
    if ( v21 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_32298768(v21->fields.id, &this->fields.notOpenStr, v20) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v15);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v8; // x20
  SoundPlayerListViewItemDraw_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_4B11C8D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundPlayerListViewObject_TypeInfo, v4, v5);
    byte_4B11C8D = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v8 = this->fields.viewObject;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( !v8
      || (v9 = *(SoundPlayerListViewItemDraw_o **)&v8[1].fields.m_CachedPtr) == 0LL
      || (SoundPlayerListViewItemDraw__apllyDisp(v9, this, v11),
          (v9 = *(SoundPlayerListViewItemDraw_o **)&v8[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1BCAA3C(v9, v10);
    }
    SoundPlayerListViewItemDraw__applyUi(v9, this, v12);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v8; // x20
  SoundPlayerListViewItemDraw_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B11C8C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundPlayerListViewObject_TypeInfo, v4, v5);
    byte_4B11C8C = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v8 = this->fields.viewObject;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( !v8 || (v9 = *(SoundPlayerListViewItemDraw_o **)&v8[1].fields.m_CachedPtr) == 0LL )
      sub_1BCAA3C(v9, v10);
    SoundPlayerListViewItemDraw__attachPlayEffect(v9, this, v11);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_4B11C93 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11C93 = 1;
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
  __int64 v2; // x2
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4B11C92 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11C92 = 1;
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

  if ( (byte_4B11C8F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11C8F = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_32298768(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_32298768(
        int32_t bgmId,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 Instance; // x0
  __int64 v65; // x1
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x20
  BgmReleaseEntity_array *Entitys; // x22
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_Dictionary_int__object__o *v72; // x21
  const MethodInfo *v73; // x2
  __int64 v74; // x8
  int v75; // w19
  int v76; // w28
  BgmReleaseEntity_o *v77; // x24
  char v78; // w25
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  int32_t priority; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v83; // x27
  const MethodInfo *v84; // x1
  Il2CppObject *Item; // x0
  int32_t condGroup; // w27
  SoundPlayerListViewItem_BgmPriorityData_o *v87; // x26
  const MethodInfo *v88; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Collections_Generic_List_int__o *v93; // x22
  __int64 v94; // x2
  __int64 v95; // x3
  System_Comparison_int__o *v96; // x23
  Il2CppObject *v97; // x24
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0
  Il2CppObject *v99; // x0
  __int64 v100; // x1
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v102; // x23
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_Collections_Generic_List_int__o *v106; // x24
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  System_Collections_Generic_List_int__o *v110; // x23
  __int64 v111; // x0
  __int64 v112; // x1
  int v113; // w27
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  char v116; // w28
  int v117; // w8
  int v118; // w29
  _BOOL8 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x24
  _BOOL8 v122; // x0
  __int64 v123; // x1
  int32_t v124; // w1
  const MethodInfo *v125; // x4
  __int64 v126; // x0
  __int64 v127; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v129; // x9
  __int64 size; // x10
  char v131; // w23
  char v132; // w19
  int v133; // w28
  SoundPlayerListViewItem_BgmReleaseData_o v136; // [xsp+8h] [xbp-E8h] BYREF
  __int128 v137; // [xsp+18h] [xbp-D8h]
  Il2CppObject *entity; // [xsp+28h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v139; // [xsp+30h] [xbp-C0h] BYREF
  __int128 v140; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v141; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v142; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4B11C90 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, closedMessage, method);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v26,
      v27);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo, v28, v29);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v30,
      v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v34, v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v36,
      v37);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v38,
      v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v44, v45);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__,
      v46,
      v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort___76787584, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v54, v55);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v56, v57);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58, v59);
    sub_1BCA7E0(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v60, v61);
    sub_1BCA7E0(&SoundPlayerListViewItem___c_TypeInfo, v62, v63);
    byte_4B11C90 = 1;
  }
  memset(&v142, 0, sizeof(v142));
  memset(&v141, 0, sizeof(v141));
  v139 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v140 = 0u;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_62;
  v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0LL);
  v72 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo,
                                                                  v69,
                                                                  v70,
                                                                  v71);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v72,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_62;
  v74 = *(_QWORD *)&Entitys->max_length;
  v75 = v74 - 1;
  if ( (int)v74 >= 1 )
  {
    v76 = 0;
    while ( 1 )
    {
      v77 = Entitys->m_Items[v76];
      if ( !v77 )
        break;
      if ( v77->fields.targetIds )
      {
        Instance = SoundPlayerComponent__checkOpen(v77, v77->fields.type, v73);
        if ( !v72 )
          break;
        v78 = Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v72,
                v77->fields.priority,
                (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v77->fields.priority;
          v83 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_1BCAA2C(
                                                               SoundPlayerListViewItem_BgmPriorityData_TypeInfo,
                                                               v79,
                                                               v80,
                                                               v81);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v83, v84);
          System_Collections_Generic_Dictionary_int__object___Add(
            v72,
            priority,
            (Il2CppObject *)v83,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v72,
                 v77->fields.priority,
                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v77->fields.condGroup;
        v87 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v136.fields.bgmReleaseEntity = v77;
        *(_QWORD *)&v136.fields.releaseCheck = v78 & 1;
        Instance = sub_1BCA784(&v136.fields.bgmReleaseEntity, v77);
        if ( !v87 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v87, condGroup, v136, v88);
      }
      if ( v75 == v76 )
        goto LABEL_19;
      if ( ++v76 >= Entitys->max_length )
        sub_1BCAA44(Instance, v65);
    }
LABEL_62:
    sub_1BCAA3C(Instance, v65);
  }
LABEL_19:
  if ( !v72 )
    goto LABEL_62;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v72,
           (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v93 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v90,
                                                    v91,
                                                    v92);
  System_Collections_Generic_List_int____ctor_56116492(
    v93,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  if ( !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo, v65);
    Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  }
  v96 = *(System_Comparison_int__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v96 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v65);
      Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
    }
    v97 = **(Il2CppObject ***)(Instance + 184);
    v96 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, v65, v94, v95);
    System_Comparison_int____ctor(v96, v97, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0LL);
    static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = v96;
    Instance = sub_1BCA784(&static_fields->__9__37_0, v96);
  }
  if ( !v93 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Sort_56125020(
    v93,
    (System_Comparison_T__o *)v96,
    (const MethodInfo_358665C *)Method_System_Collections_Generic_List_int__Sort___76787584);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    v93,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v142.fields._list = v136;
  *(_QWORD *)&v142.fields._current = v137;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v142,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v99 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v72,
            v142.fields._current,
            (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v99 )
      sub_1BCAA3C(0LL, v100);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v99[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v99[1].klass,
           (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v102 = System_Collections_Generic_Dictionary_int__object___get_Keys(
               klass,
               (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v106 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v103,
                                                         v104,
                                                         v105);
      System_Collections_Generic_List_int____ctor_56116492(
        v106,
        (System_Collections_Generic_IEnumerable_T__o *)v102,
        (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
      v110 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v107,
                                                         v108,
                                                         v109);
      System_Collections_Generic_List_int____ctor(
        v110,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v106 )
        sub_1BCAA3C(v111, v112);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v136,
        v106,
        (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v113 = 0;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v141.fields._list = v136;
      *(_QWORD *)&v141.fields._current = v137;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v141,
                (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v114 = System_Collections_Generic_Dictionary_int__object___get_Item(
                 klass,
                 v141.fields._current,
                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v114 )
          sub_1BCAA3C(0LL, v115);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v136,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v114,
          (const MethodInfo_3655D9C *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v116 = 0;
        v117 = v113;
        v139 = v136;
        v140 = v137;
LABEL_37:
        v118 = v117;
        while ( 1 )
        {
          v119 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                   (System_Collections_Generic_List_Enumerator_T__o *)&v139,
                   (const MethodInfo_3344D88 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v119 )
            break;
          if ( (v140 & 1) == 0 )
          {
            v121 = *((_QWORD *)&v140 + 1);
            if ( !*((_QWORD *)&v140 + 1) )
              sub_1BCAA3C(v119, v120);
            if ( !v67 )
              sub_1BCAA3C(v119, v120);
            v122 = DataMasterBase_object__object__int___TryGetEntity(
                     v67,
                     &entity,
                     *(_DWORD *)(*((_QWORD *)&v140 + 1) + 52LL),
                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v116 = 1;
            if ( v122 )
            {
              if ( !v110 )
                sub_1BCAA3C(v122, v123);
              v116 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v110,
                      *(_DWORD *)(v121 + 52),
                      (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v124,
                  v118 & 1,
                  closedMessage,
                  v125);
                v127 = *(unsigned int *)(v121 + 52);
                items = v110->fields._items;
                v129 = Method_System_Collections_Generic_List_int__Add__;
                ++v110->fields._version;
                if ( !items )
                  sub_1BCAA3C(v126, v127);
                size = v110->fields._size;
                v116 = 1;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v110,
                    v127,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
                }
                else
                {
                  v110->fields._size = size + 1;
                  items->m_Items[size + 1] = v127;
                }
                v117 = 1;
                goto LABEL_37;
              }
            }
          }
        }
        v113 = v118;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v139,
          (const MethodInfo_3344D84 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v116 & 1) == 0 )
        {
          v131 = 1;
          goto LABEL_57;
        }
      }
      v131 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v141,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( (v131 & 1) == 0 )
      {
        v132 = 1;
        v133 = 16;
        goto LABEL_61;
      }
    }
  }
  v132 = 0;
  v133 = 17;
LABEL_61:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v142,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v132 & (v133 == 16);
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
  System_String_o *v9; // x1

  if ( (byte_4B11C91 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, *(_QWORD *)&kind, isNewLine);
    byte_4B11C91 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_62401220(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      *closedMessage = v8;
      sub_1BCA784(closedMessage, v8);
    }
    v9 = System_String__Concat_62401220(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v9;
    sub_1BCA784(closedMessage, v9);
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
  sub_1BCA784(&this->fields._playEffect_k__BackingField, value);
}


void __fastcall SoundPlayerListViewItem__startOpenAnim(
        SoundPlayerListViewItem_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v11; // x21
  SoundPlayerListViewItemDraw_o *v12; // x0
  SoundPlayerListViewManager_o *v13; // x1
  const MethodInfo *v14; // x4
  struct ListViewManager_o *manager; // x8
  __int64 v16; // x11

  if ( (byte_4B11C8B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, endCallback, method);
    sub_1BCA7E0(&SoundPlayerListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&SoundPlayerListViewObject_TypeInfo, v7, v8);
    byte_4B11C8B = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (methodPtr_low = LOBYTE(SoundPlayerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SoundPlayerListViewObject_TypeInfo )
      v11 = this->fields.viewObject;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endCallback);
  v12 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( !v11
      || ((manager = v11->fields.manager) != 0LL
       && (v16 = LOBYTE(SoundPlayerListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v16)
        ? ((SoundPlayerListViewManager_c *)manager->klass->_2.typeHierarchy[v16 - 1] != SoundPlayerListViewManager_TypeInfo
         ? (v13 = 0LL)
         : (v13 = (SoundPlayerListViewManager_o *)v11->fields.manager))
        : (v13 = 0LL),
          (v12 = *(SoundPlayerListViewItemDraw_o **)&v11[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1BCAA3C(v12, v13);
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v12, v13, this, endCallback, v14);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20

  if ( (byte_4B11C95 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      method,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo,
      v5,
      v6);
    byte_4B11C95 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v7;
  sub_1BCA784(&this->fields, v7);
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
  System_Collections_Generic_Dictionary_int__object__o *collectList; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v21; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v22; // x24
  struct System_Int32_array *buckets; // x8
  _QWORD *v24; // x9
  __int64 entries_low; // x10
  __int64 v26; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v27; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_4B11C94 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      *(_QWORD *)&condGroup,
      *(_QWORD *)&data.fields.releaseCheck);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v16, v17);
    byte_4B11C94 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v21 = this->fields.collectList;
    v22 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_1BCAA2C(
                                                                                         System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo,
                                                                                         *(_QWORD *)&condGroup,
                                                                                         v19,
                                                                                         v20);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v22,
      (const MethodInfo_36549C4 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v21 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v21,
      condGroup,
      (Il2CppObject *)v22,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL
    || (buckets = collectList->fields._buckets,
        v24 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_1BCAA3C(collectList, *(_QWORD *)&condGroup);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= buckets->max_length )
  {
    *(_QWORD *)&v27.fields.releaseCheck = v5;
    v27.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v27,
      *(const MethodInfo_3655244 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = (__int64)buckets + 16 * entries_low;
    LODWORD(collectList->fields._entries) = entries_low + 1;
    *(_QWORD *)(v26 + 40) = bgmReleaseEntity;
    v26 += 40LL;
    *(_QWORD *)(v26 - 8) = v5;
    sub_1BCA784(v26, 0LL);
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
  sub_1BCA784(*(_QWORD *)&this.fields.releaseCheck + 8LL, releaseCheck);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11C96 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundPlayerListViewItem___c_TypeInfo, v1, v2);
    byte_4B11C96 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SoundPlayerListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v4;
  sub_1BCA784(SoundPlayerListViewItem___c_TypeInfo->static_fields, v4);
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