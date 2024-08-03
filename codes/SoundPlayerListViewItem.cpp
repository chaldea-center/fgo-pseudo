void __fastcall SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_1B6406C(&this->fields.bgmEntity);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0LL;
  sub_1B6406C(&this->fields.itemIds);
  this->fields.prices = 0LL;
  sub_1B6406C(&this->fields.prices);
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
  struct BgmEntity_o *v10; // x8
  const MethodInfo *v11; // x2
  struct BgmEntity_o *v12; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49F7FA6 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F7FA6 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ShopMaster___);
      v10 = this->fields.bgmEntity;
      if ( !v10 || !Instance )
        goto LABEL_22;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   v10->fields.shopId,
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_22;
        if ( LODWORD(entity[4].monitor) == 8 )
        {
          this->fields.itemIds = (struct System_Int32_array *)entity[2].klass;
          Instance = (Il2CppObject *)sub_1B6406C(&this->fields.itemIds);
          if ( !entity )
            goto LABEL_22;
          this->fields.prices = (struct System_Int32_array *)entity[5].klass;
          sub_1B6406C(&this->fields.prices);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    Instance = (Il2CppObject *)sub_1B6406C(&this->fields.notOpenStr);
    if ( this->fields.openType == 2 )
      return;
    v12 = this->fields.bgmEntity;
    if ( v12 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_31355016(v12->fields.id, &this->fields.notOpenStr, v11) )
        this->fields.openType = 2;
      return;
    }
LABEL_22:
    sub_1B64324(Instance);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v6; // x20
  SoundPlayerListViewItemDraw_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_49F7FA5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_49F7FA5 = 1;
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
      || (SoundPlayerListViewItemDraw__apllyDisp(v7, this, v8),
          (v7 = *(SoundPlayerListViewItemDraw_o **)&v6[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1B64324(v7);
    }
    SoundPlayerListViewItemDraw__applyUi(v7, this, v9);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x9
  __int64 methodPtr_low; // x12
  struct ListViewObject_o *v6; // x20
  SoundPlayerListViewItemDraw_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49F7FA4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_49F7FA4 = 1;
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
      sub_1B64324(v7);
    SoundPlayerListViewItemDraw__attachPlayEffect(v7, this, v8);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_49F7FAB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F7FAB = 1;
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

  if ( (byte_49F7FAA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F7FAA = 1;
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

  if ( (byte_49F7FA7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F7FA7 = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_31355016(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_31355016(
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
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x20
  BgmReleaseEntity_array *Entitys; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_Dictionary_int__object__o *v40; // x21
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  __int64 v43; // x8
  int v44; // w19
  int v45; // w28
  BgmReleaseEntity_o *v46; // x24
  char v47; // w25
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t priority; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v51; // x27
  const MethodInfo *v52; // x1
  Il2CppObject *Item; // x0
  int32_t condGroup; // w27
  SoundPlayerListViewItem_BgmPriorityData_o *v55; // x26
  const MethodInfo *v56; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  System_Collections_Generic_List_int__o *v60; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  System_Comparison_int__o *v63; // x23
  Il2CppObject *v64; // x24
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0
  Il2CppObject *v66; // x0
  System_Collections_Generic_Dictionary_int__object__o *klass; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  System_Collections_Generic_List_int__o *v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_List_int__o *v74; // x23
  __int64 v75; // x0
  int v76; // w27
  Il2CppObject *v77; // x0
  char v78; // w28
  int v79; // w8
  int v80; // w29
  _BOOL8 v81; // x0
  __int64 v82; // x24
  _BOOL8 v83; // x0
  int32_t v84; // w1
  const MethodInfo *v85; // x4
  __int64 v86; // x0
  int32_t v87; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  char v91; // w23
  char v92; // w19
  int v93; // w28
  SoundPlayerListViewItem_BgmReleaseData_o v96; // [xsp+8h] [xbp-E8h] BYREF
  __int128 v97; // [xsp+18h] [xbp-D8h]
  Il2CppObject *entity; // [xsp+28h] [xbp-C8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v99; // [xsp+30h] [xbp-C0h] BYREF
  __int128 v100; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v101; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v102; // [xsp+70h] [xbp-80h] BYREF

  if ( (byte_49F7FA8 & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, closedMessage);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__,
      v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v15);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo, v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v19);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v20);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort___75657344, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v29);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B640C8(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v32);
    sub_1B640C8(&SoundPlayerListViewItem___c_TypeInfo, v33);
    byte_49F7FA8 = 1;
  }
  memset(&v102, 0, sizeof(v102));
  memset(&v101, 0, sizeof(v101));
  v99 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  v100 = 0u;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_object )
    goto LABEL_62;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys((BgmReleaseMaster_o *)MasterData_object, bgmId, 0LL);
  v40 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo,
                                                                  v38,
                                                                  v39);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v40,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_62;
  v43 = *(_QWORD *)&Entitys->max_length;
  v44 = v43 - 1;
  if ( (int)v43 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      v46 = Entitys->m_Items[v45];
      if ( !v46 )
        break;
      if ( v46->fields.targetIds )
      {
        Instance = SoundPlayerComponent__checkOpen(v46, v46->fields.type, v42);
        if ( !v40 )
          break;
        v47 = Instance;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v40,
                v46->fields.priority,
                (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v46->fields.priority;
          v51 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_1B64314(
                                                               SoundPlayerListViewItem_BgmPriorityData_TypeInfo,
                                                               v48,
                                                               v49);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v51, v52);
          System_Collections_Generic_Dictionary_int__object___Add(
            v40,
            priority,
            (Il2CppObject *)v51,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 v40,
                 v46->fields.priority,
                 (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v46->fields.condGroup;
        v55 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v96.fields.bgmReleaseEntity = v46;
        *(_QWORD *)&v96.fields.releaseCheck = v47 & 1;
        Instance = sub_1B6406C(&v96.fields.bgmReleaseEntity);
        if ( !v55 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v55, condGroup, v96, v56);
      }
      if ( v44 == v45 )
        goto LABEL_19;
      if ( ++v45 >= Entitys->max_length )
        sub_1B6432C(Instance, v41);
    }
LABEL_62:
    sub_1B64324(Instance);
  }
LABEL_19:
  if ( !v40 )
    goto LABEL_62;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v40,
           (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v60 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v58, v59);
  System_Collections_Generic_List_int____ctor_55113648(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  if ( !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
  }
  v63 = *(System_Comparison_int__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v63 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)SoundPlayerListViewItem___c_TypeInfo;
    }
    v64 = **(Il2CppObject ***)(Instance + 184);
    v63 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, v61, v62);
    System_Comparison_int____ctor(v63, v64, Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, 0LL);
    static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = v63;
    Instance = sub_1B6406C(&static_fields->__9__37_0);
  }
  if ( !v60 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Sort_55122336(
    v60,
    (System_Comparison_T__o *)v63,
    (const MethodInfo_34919A0 *)Method_System_Collections_Generic_List_int__Sort___75657344);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    v60,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v102.fields._list = v96;
  *(_QWORD *)&v102.fields._current = v97;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v102,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v66 = System_Collections_Generic_Dictionary_int__object___get_Item(
            v40,
            v102.fields._current,
            (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v66 )
      sub_1B64324(0LL);
    klass = (System_Collections_Generic_Dictionary_int__object__o *)v66[1].klass;
    if ( klass
      && System_Collections_Generic_Dictionary_int__object___get_Count(
           (System_Collections_Generic_Dictionary_int__object__o *)v66[1].klass,
           (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v68 = System_Collections_Generic_Dictionary_int__object___get_Keys(
              klass,
              (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v71 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v69,
                                                        v70);
      System_Collections_Generic_List_int____ctor_55113648(
        v71,
        (System_Collections_Generic_IEnumerable_T__o *)v68,
        (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
      v74 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v72,
                                                        v73);
      System_Collections_Generic_List_int____ctor(
        v74,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v71 )
        sub_1B64324(v75);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v96,
        v71,
        (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v76 = 0;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v101.fields._list = v96;
      *(_QWORD *)&v101.fields._current = v97;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v101,
                (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v77 = System_Collections_Generic_Dictionary_int__object___get_Item(
                klass,
                v101.fields._current,
                (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v77 )
          sub_1B64324(0LL);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v96,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v77,
          (const MethodInfo_353AB60 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v78 = 0;
        v79 = v76;
        v99 = v96;
        v100 = v97;
LABEL_37:
        v80 = v79;
        while ( 1 )
        {
          v81 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v99,
                  (const MethodInfo_3259700 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v81 )
            break;
          if ( (v100 & 1) == 0 )
          {
            v82 = *((_QWORD *)&v100 + 1);
            if ( !*((_QWORD *)&v100 + 1) )
              sub_1B64324(v81);
            if ( !v36 )
              sub_1B64324(v81);
            v83 = DataMasterBase_object__object__int___TryGetEntity(
                    v36,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v100 + 1) + 52LL),
                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v78 = 1;
            if ( v83 )
            {
              if ( !v74 )
                sub_1B64324(v83);
              v78 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v74,
                      *(_DWORD *)(v82 + 52),
                      (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v84,
                  v80 & 1,
                  closedMessage,
                  v85);
                v87 = *(_DWORD *)(v82 + 52);
                items = v74->fields._items;
                v89 = Method_System_Collections_Generic_List_int__Add__;
                ++v74->fields._version;
                if ( !items )
                  sub_1B64324(v86);
                size = v74->fields._size;
                v78 = 1;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v74,
                    v87,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                }
                else
                {
                  v74->fields._size = size + 1;
                  items->m_Items[size + 1] = v87;
                }
                v79 = 1;
                goto LABEL_37;
              }
            }
          }
        }
        v76 = v80;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v99,
          (const MethodInfo_32596FC *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        if ( (v78 & 1) == 0 )
        {
          v91 = 1;
          goto LABEL_57;
        }
      }
      v91 = 0;
LABEL_57:
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v101,
        (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( (v91 & 1) == 0 )
      {
        v92 = 1;
        v93 = 16;
        goto LABEL_61;
      }
    }
  }
  v92 = 0;
  v93 = 17;
LABEL_61:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v102,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v92 & (v93 == 16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItem__setNotOpenStr(
        ClosedMessageEntity_o *closedMesEntity,
        int32_t kind,
        bool isNewLine,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  if ( (byte_49F7FA9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_43/*"\n"*/, *(_QWORD *)&kind);
    byte_49F7FA9 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      *closedMessage = System_String__Concat_61375396(*closedMessage, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      sub_1B6406C(closedMessage);
    }
    *closedMessage = System_String__Concat_61375396(*closedMessage, closedMesEntity->fields.message, 0LL);
    sub_1B6406C(closedMessage);
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
  sub_1B6406C(&this->fields._playEffect_k__BackingField);
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
  const MethodInfo *v11; // x4
  struct ListViewManager_o *manager; // x8
  __int64 v13; // x11
  SoundPlayerListViewManager_o *v14; // x1

  if ( (byte_49F7FA3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, endCallback);
    sub_1B640C8(&SoundPlayerListViewManager_TypeInfo, v5);
    sub_1B640C8(&SoundPlayerListViewObject_TypeInfo, v6);
    byte_49F7FA3 = 1;
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
       && (v13 = LOBYTE(SoundPlayerListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v13)
        ? ((SoundPlayerListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] != SoundPlayerListViewManager_TypeInfo
         ? (v14 = 0LL)
         : (v14 = (SoundPlayerListViewManager_o *)v9->fields.manager))
        : (v14 = 0LL),
          (v10 = *(SoundPlayerListViewItemDraw_o **)&v9[1].fields.m_CachedPtr) == 0LL) )
    {
      sub_1B64324(v10);
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v10, v14, this, endCallback, v11);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20

  if ( (byte_49F7FAD & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo, v4);
    byte_49F7FAD = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v5;
  sub_1B6406C(&this->fields);
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
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v16; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v17; // x24
  struct System_Int32_array *buckets; // x8
  _QWORD *v19; // x9
  __int64 entries_low; // x10
  __int64 v21; // x8
  SoundPlayerListViewItem_BgmReleaseData_o v22; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_49F7FAC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      *(_QWORD *)&condGroup);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v12);
    byte_49F7FAC = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v16 = this->fields.collectList;
    v17 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_1B64314(
                                                                                         System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo,
                                                                                         v14,
                                                                                         v15);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v17,
      (const MethodInfo_35396E4 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v16 )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v16,
      condGroup,
      (Il2CppObject *)v17,
      (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                collectList,
                                                                                condGroup,
                                                                                (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL
    || (buckets = collectList->fields._buckets,
        v19 = Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__,
        ++HIDWORD(collectList->fields._entries),
        !buckets) )
  {
LABEL_13:
    sub_1B64324(collectList);
  }
  entries_low = SLODWORD(collectList->fields._entries);
  if ( (unsigned int)entries_low >= buckets->max_length )
  {
    *(_QWORD *)&v22.fields.releaseCheck = v5;
    v22.fields.bgmReleaseEntity = bgmReleaseEntity;
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___AddWithResize(
      (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
      v22,
      *(const MethodInfo_3539F64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = (__int64)buckets + 16 * entries_low;
    LODWORD(collectList->fields._entries) = entries_low + 1;
    *(_QWORD *)(v21 + 40) = bgmReleaseEntity;
    v21 += 40LL;
    *(_QWORD *)(v21 - 8) = v5;
    sub_1B6406C(v21);
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
  sub_1B6406C(*(_QWORD *)&this.fields.releaseCheck + 8LL);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7FAE & 1) == 0 )
  {
    sub_1B640C8(&SoundPlayerListViewItem___c_TypeInfo, v1);
    byte_49F7FAE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SoundPlayerListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SoundPlayerListViewItem___c_TypeInfo->static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v3;
  sub_1B6406C(SoundPlayerListViewItem___c_TypeInfo->static_fields);
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