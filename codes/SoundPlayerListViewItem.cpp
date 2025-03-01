void __fastcall SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  ListViewItem___ctor_42081352((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_1C2E0D0(&this->fields.bgmEntity);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0LL;
  sub_1C2E0D0(&this->fields.itemIds);
  this->fields.prices = 0LL;
  sub_1C2E0D0(&this->fields.prices);
  SoundPlayerListViewItem__analyzeOpenType(this, v7);
}


void __fastcall SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct BgmEntity_o *v11; // x8
  const MethodInfo *v12; // x2
  struct BgmEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BF90A2 & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1C2E12C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C2E12C(&StringLiteral_1/*""*/, v6);
    byte_4BF90A2 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ShopMaster___);
      v11 = this->fields.bgmEntity;
      if ( !v11 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v11->fields.shopId,
                                   (const MethodInfo_327B1CC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          this->fields.itemIds = (struct System_Int32_array *)entity[2].klass;
          Instance = (Il2CppObject *)sub_1C2E0D0(&this->fields.itemIds);
          if ( !entity )
            goto LABEL_22;
          this->fields.prices = (struct System_Int32_array *)entity[5].klass;
          sub_1C2E0D0(&this->fields.prices);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    Instance = (Il2CppObject *)sub_1C2E0D0(&this->fields.notOpenStr);
    if ( this->fields.openType == 2 )
      return;
    v13 = this->fields.bgmEntity;
    if ( v13 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_32730676(v13->fields.id, &this->fields.notOpenStr, v12) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_1C2E388(Instance, v10);
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

  if ( (byte_4BF90A1 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_4BF90A1 = 1;
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
      sub_1C2E388(v7, v8);
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

  if ( (byte_4BF90A0 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_4BF90A0 = 1;
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
      sub_1C2E388(v7, v8);
    SoundPlayerListViewItemDraw__attachPlayEffect(v7, this, v9);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_4BF90A7 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BF90A7 = 1;
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

  if ( (byte_4BF90A6 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BF90A6 = 1;
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

  if ( (byte_4BF90A3 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BF90A3 = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_32730676(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_32730676(
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
  __int64 Instance; // x0
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
  const MethodInfo *v52; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v54; // x22
  System_Comparison_int__o *v55; // x23
  Il2CppObject *v56; // x24
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v61; // x23
  System_Collections_Generic_List_int__o *v62; // x24
  System_Collections_Generic_List_int__o *v63; // x23
  __int64 v64; // x0
  __int64 v65; // x1
  int v66; // w27
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  char v69; // w28
  int v70; // w8
  int v71; // w29
  _BOOL8 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x24
  _BOOL8 v75; // x0
  __int64 v76; // x1
  int32_t v77; // w1
  const MethodInfo *v78; // x4
  __int64 v79; // x0
  __int64 v80; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  char v84; // w23
  char v85; // w19
  int v86; // w28
  SoundPlayerListViewItem_BgmReleaseData_o v89; // [xsp+8h] [xbp-E8h] BYREF
  __int128 v90; // [xsp+18h] [xbp-D8h]
  Il2CppObject *entity; // [xsp+28h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v92; // [xsp+30h] [xbp-C0h] BYREF
  __int128 v93; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v94; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v95; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_4BF90A4 & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, closedMessage);
    sub_1C2E12C(&System_Comparison_int__TypeInfo, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v6);
    sub_1C2E12C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__, v8);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v9);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__,
      v10);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v11);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v12);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v13);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v14);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v15);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo, v16);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v19);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v20);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__, v25);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Sort___77707704, v27);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor___77707560, v29);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1C2E12C(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v32);
    sub_1C2E12C(&SoundPlayerListViewItem___c_TypeInfo, v33);
    byte_4BF90A4 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  memset(&v94, 0, sizeof(v94));
  v92 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v93 = 0u;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_62;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0LL);
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
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
        Instance = SoundPlayerComponent__checkOpen(v44, v44->fields.type, v40);
        if ( !v39 )
          break;
        v45 = Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v39,
                v44->fields.priority,
                (const MethodInfo_32D50C8 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v44->fields.priority;
          v47 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_1C2E378(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v47, v48);
          System_Collections_Generic_Dictionary_int__object___Add(
            v39,
            priority,
            (Il2CppObject *)v47,
            (const MethodInfo_32D4ED4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v39,
                 v44->fields.priority,
                 (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v44->fields.condGroup;
        v51 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v89.fields.bgmReleaseEntity = v44;
        *(_QWORD *)&v89.fields.releaseCheck = v45 & 1;
        Instance = sub_1C2E0D0(&v89.fields.bgmReleaseEntity);
        if ( !v51 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v51, condGroup, v89, v52);
      }
      if ( v42 == v43 )
        goto LABEL_19;
      if ( ++v43 >= Entitys->max_length )
        sub_1C2E390(Instance, v35);
    }
LABEL_62:
    sub_1C2E388(Instance, v35);
  }
LABEL_19:
  if ( !v39 )
    goto LABEL_62;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v39,
           (const MethodInfo_32D4B94 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v54 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56942940(
    v54,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_364E15C *)Method_System_Collections_Generic_List_int___ctor___77707560);
  Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  if ( !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  }
  v55 = *(System_Comparison_int__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v55 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
    }
    v56 = **(Il2CppObject ***)(Instance + 184);
    v55 = (System_Comparison_int__o *)sub_1C2E378(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v55, v56, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0LL);
    static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = v55;
    Instance = sub_1C2E0D0(&static_fields->__9__37_0);
  }
  if ( !v54 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Sort_56951468(
    v54,
    (System_Comparison_T__o *)v55,
    (const MethodInfo_36502AC *)Method_System_Collections_Generic_List_int__Sort___77707704);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    v54,
    (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v95.fields._list = v89;
  *(_QWORD *)&v95.fields._current = v90;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v95,
            (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v58 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v39,
            v95.fields._current,
            (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v58 )
      sub_1C2E388(0LL, v59);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v58[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v58[1].klass,
           (const MethodInfo_32D4B84 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v61 = System_Collections_Generic_Dictionary_int__object___get_Keys(
              klass,
              (const MethodInfo_32D4B94 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v62 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_56942940(
        v62,
        (System_Collections_Generic_IEnumerable_T__o *)v61,
        (const MethodInfo_364E15C *)Method_System_Collections_Generic_List_int___ctor___77707560);
      v63 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v63,
        (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v62 )
        sub_1C2E388(v64, v65);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v89,
        v62,
        (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v66 = 0;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v94.fields._list = v89;
      *(_QWORD *)&v94.fields._current = v90;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v94,
                (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v67 = System_Collections_Generic_Dictionary_int__object___get_Item(
                klass,
                v94.fields._current,
                (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v67 )
          sub_1C2E388(0LL, v68);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v89,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v67,
          (const MethodInfo_371F034 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v69 = 0;
        v70 = v66;
        v92 = v89;
        v93 = v90;
LABEL_37:
        v71 = v70;
        while ( 1 )
        {
          v72 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v92,
                  (const MethodInfo_3411DD4 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v72 )
            break;
          if ( (v93 & 1) == 0 )
          {
            v74 = *((_QWORD *)&v93 + 1);
            if ( !*((_QWORD *)&v93 + 1) )
              sub_1C2E388(v72, v73);
            if ( !v37 )
              sub_1C2E388(v72, v73);
            v75 = DataMasterBase_object__object__int___TryGetEntity(
                    v37,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v93 + 1) + 52LL),
                    (const MethodInfo_327B1CC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v69 = 1;
            if ( v75 )
            {
              if ( !v63 )
                sub_1C2E388(v75, v76);
              v69 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v63,
                      *(_DWORD *)(v74 + 52),
                      (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v77,
                  v71 & 1,
                  closedMessage,
                  v78);
                v80 = *(unsigned int *)(v74 + 52);
                items = v63->fields._items;
                v82 = Method_System_Collections_Generic_List_int__Add__;
                ++v63->fields._version;
                if ( !items )
                  sub_1C2E388(v79, v80);
                size = v63->fields._size;
                v69 = 1;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v63,
                    v80,
                    *(const MethodInfo_364E888 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
                }
                else
                {
                  v63->fields._size = size + 1;
                  items->m_Items[size + 1] = v80;
                }
                v70 = 1;
                goto LABEL_37;
              }
            }
          }
        }
        v66 = v71;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v92,
          (const MethodInfo_3411DD0 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v69 & 1) == 0 )
        {
          v84 = 1;
          goto LABEL_57;
        }
      }
      v84 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v94,
        (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( (v84 & 1) == 0 )
      {
        v85 = 1;
        v86 = 16;
        goto LABEL_61;
      }
    }
  }
  v85 = 0;
  v86 = 17;
LABEL_61:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v95,
    (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v85 & (v86 == 16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItem__setNotOpenStr(
        ClosedMessageEntity_o *closedMesEntity,
        int32_t kind,
        bool isNewLine,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  if ( (byte_4BF90A5 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, *(_QWORD *)&kind);
    byte_4BF90A5 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      *closedMessage = System_String__Concat_63235584(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      sub_1C2E0D0(closedMessage);
    }
    *closedMessage = System_String__Concat_63235584(*closedMessage, closedMesEntity->fields.message, 0LL);
    sub_1C2E0D0(closedMessage);
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
  sub_1C2E0D0(&this->fields._playEffect_k__BackingField);
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

  if ( (byte_4BF909F & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, endCallback);
    sub_1C2E12C(&SoundPlayerListViewManager_TypeInfo, v5);
    sub_1C2E12C(&SoundPlayerListViewObject_TypeInfo, v6);
    byte_4BF909F = 1;
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
      sub_1C2E388(v10, v11);
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

  if ( (byte_4BF90A9 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      method);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo, v3);
    byte_4BF90A9 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v4;
  sub_1C2E0D0(&this->fields);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__object__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v14; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v15; // x24
  struct System_Int32_array *buckets; // x8
  _QWORD *v17; // x9
  __int64 entries_low; // x10
  __int64 v19; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v20; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_4BF90A8 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      *(_QWORD *)&condGroup);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v12);
    byte_4BF90A8 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_32D50C8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v14 = this->fields.collectList;
    v15 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_1C2E378(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v15,
      (const MethodInfo_371DC5C *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v14 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v14,
      condGroup,
      (Il2CppObject *)v15,
      (const MethodInfo_32D4EC0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_32D4E34 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL
    || (buckets = collectList->fields._buckets,
        v17 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_1C2E388(collectList, *(_QWORD *)&condGroup);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= buckets->max_length )
  {
    *(_QWORD *)&v20.fields.releaseCheck = v5;
    v20.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v20,
      *(const MethodInfo_371E4DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = (__int64)buckets + 16 * entries_low;
    LODWORD(collectList->fields._entries) = entries_low + 1;
    *(_QWORD *)(v19 + 40) = bgmReleaseEntity;
    v19 += 40LL;
    *(_QWORD *)(v19 - 8) = v5;
    sub_1C2E0D0(v19);
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
  sub_1C2E0D0(*(_QWORD *)&this.fields.releaseCheck + 8LL);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4BF90AA & 1) == 0 )
  {
    sub_1C2E12C(&SoundPlayerListViewItem___c_TypeInfo, v1);
    byte_4BF90AA = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v2;
  sub_1C2E0D0(SoundPlayerListViewItem___c_TypeInfo->static_fields);
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