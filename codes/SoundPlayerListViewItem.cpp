void __fastcall SoundPlayerListViewItem___ctor(
        SoundPlayerListViewItem_o *this,
        int32_t index,
        BgmEntity_o *inputBgmEntity,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1

  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.bgmEntity,
    (System_Int32_array **)inputBgmEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.openType = 0;
  *(_DWORD *)&this->fields._isDisp_k__BackingField = 65537;
  this->fields.itemIds = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.itemIds, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.prices = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.prices, 0LL, v19, v20, v21, v22, v23, v24);
  SoundPlayerListViewItem__analyzeOpenType(this, v25);
}


void __fastcall SoundPlayerListViewItem__Finalize(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


void __fastcall SoundPlayerListViewItem__analyzeOpenType(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct BgmEntity_o *v13; // x8
  struct System_String_o *name; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Int32_array *v21; // x1
  System_Int32_array **v22; // x1
  const MethodInfo *v23; // x2
  struct BgmEntity_o *v24; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF45E & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF45E = 1;
  }
  entity = 0LL;
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
  {
    shopId = bgmEntity->fields.shopId;
    if ( shopId )
    {
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsPurchaseShop(shopId, 1, 0LL) )
      {
        this->fields.openType = 0;
        return;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___);
      v13 = this->fields.bgmEntity;
      if ( !v13 || !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &entity,
                                    v13->fields.shopId,
                                    (const MethodInfo_23E2334 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_23;
        if ( LODWORD(entity->fields.emptyMessage) == 8 )
        {
          name = entity->fields.name;
          this->fields.itemIds = (struct System_Int32_array *)name;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.itemIds,
            (System_Int32_array **)name,
            v2,
            v3,
            v4,
            v5,
            v6,
            v7);
          if ( !entity )
            goto LABEL_23;
          v21 = *(struct System_Int32_array **)&entity->fields.startType;
          this->fields.prices = v21;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.prices,
            (System_Int32_array **)v21,
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
    v22 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.notOpenStr, v22, v2, v3, v4, v5, v6, v7);
    if ( this->fields.openType == 2 )
      return;
    v24 = this->fields.bgmEntity;
    if ( v24 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_23826316(v24->fields.id, &this->fields.notOpenStr, v23) )
        this->fields.openType = 2;
      return;
    }
LABEL_23:
    sub_B52A5C(Instance, v12);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x8
  __int64 v4; // x11
  UnityEngine_Object_o *v5; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_42AF45D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundPlayerListViewObject_TypeInfo);
    byte_42AF45D = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v4 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v4 - 1] == SoundPlayerListViewObject_TypeInfo )
      v5 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !v5
      || (monitor = (SoundPlayerListViewItemDraw_o *)v5[5].monitor) == 0LL
      || (SoundPlayerListViewItemDraw__apllyDisp(monitor, this, v8),
          (monitor = (SoundPlayerListViewItemDraw_o *)v5[5].monitor) == 0LL) )
    {
      sub_B52A5C(monitor, v7);
    }
    SoundPlayerListViewItemDraw__applyUi(monitor, this, v9);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x8
  __int64 v4; // x11
  UnityEngine_Object_o *v5; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_42AF45C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundPlayerListViewObject_TypeInfo);
    byte_42AF45C = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v4 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v4 - 1] == SoundPlayerListViewObject_TypeInfo )
      v5 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !v5 || (monitor = (SoundPlayerListViewItemDraw_o *)v5[5].monitor) == 0LL )
      sub_B52A5C(monitor, v7);
    SoundPlayerListViewItemDraw__attachPlayEffect(monitor, this, v8);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_42AF463 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF463 = 1;
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

  if ( (byte_42AF462 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF462 = 1;
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
  System_String_o *closedMessage; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AF45F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF45F = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_23826316(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_23826316(
        int32_t bgmId,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  BgmReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x20
  BgmReleaseEntity_array *Entitys; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x19
  il2cpp_array_size_t v12; // w27
  BgmReleaseEntity_o *v13; // x23
  int32_t type; // w24
  char v15; // w24
  int32_t priority; // w25
  SoundPlayerListViewItem_BgmPriorityData_o *v17; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v20; // x25
  const MethodInfo *v21; // x4
  __int64 v22; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v24; // x22
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__37_0; // x23
  Il2CppObject *v27; // x24
  struct SoundPlayerListViewItem___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *squareData; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v38; // x23
  System_Collections_Generic_List_int__o *v39; // x24
  System_Collections_Generic_List_int__o *v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  int v43; // w28
  WarBoardEvalValueSquare_EvalValueSquare_o *v44; // x0
  __int64 v45; // x1
  char v46; // w26
  int v47; // w8
  _BOOL8 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x24
  _BOOL8 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w1
  const MethodInfo *v54; // x4
  int v55; // w8
  int v56; // w8
  char v57; // w23
  int v58; // w8
  int v59; // w9
  bool result; // w0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v62; // [xsp+8h] [xbp-F8h]
  SoundPlayerListViewItem_BgmReleaseData_o v63; // [xsp+10h] [xbp-F0h] BYREF
  __int128 v64; // [xsp+20h] [xbp-E0h]
  _DWORD v65[5]; // [xsp+30h] [xbp-D0h]
  int v66; // [xsp+44h] [xbp-BCh]
  WarEntity_o *entity; // [xsp+48h] [xbp-B8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v68; // [xsp+50h] [xbp-B0h] BYREF
  __int128 v69; // [xsp+60h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v70; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v71; // [xsp+90h] [xbp-70h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v72; // 0:x0.16

  if ( (byte_42AF460 & 1) == 0 )
  {
    sub_B52984(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
    sub_B52984(&Method_System_Comparison_int___ctor__);
    sub_B52984(&System_Comparison_int__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_B52984(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort___68512952);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundPlayerComponent_TypeInfo);
    sub_B52984(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__);
    sub_B52984(&SoundPlayerListViewItem___c_TypeInfo);
    byte_42AF460 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v69 = 0u;
  memset(&v70, 0, sizeof(v70));
  v68 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  entity = 0LL;
  v66 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (BgmReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_73;
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys(MasterData_WarQuestSelectionMaster, bgmId, 0LL);
  v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v9,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_73;
  v11 = *(_QWORD *)&Entitys->max_length;
  v62 = v9;
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = Entitys->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.targetIds )
      {
        type = v13->fields.type;
        if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
        }
        Instance = (void *)SoundPlayerComponent__checkOpen(v13, type, v10);
        if ( !v9 )
          break;
        v15 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v9,
                v13->fields.priority,
                (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v13->fields.priority;
          v17 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_B52A54(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v17, 0LL);
          v9 = v62;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v62,
            priority,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v17,
            (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v9,
                 v13->fields.priority,
                 (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v13->fields.condGroup;
        v20 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v72.fields.bgmReleaseEntity = (struct BgmReleaseEntity_o *)(v15 & 1);
        *(_QWORD *)&v72.fields.releaseCheck = &v63;
        v63 = (SoundPlayerListViewItem_BgmReleaseData_o)0LL;
        SoundPlayerListViewItem_BgmReleaseData___ctor(v72, (bool)v13, 0LL, v21);
        if ( !v20 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v20, condGroup, v63, 0LL);
        v9 = v62;
      }
      if ( (int)++v12 >= (int)v11 )
        goto LABEL_22;
      if ( v12 >= Entitys->max_length )
      {
        v22 = sub_B52A88(Instance);
        sub_B52A28(v22, 0LL);
      }
    }
LABEL_73:
    sub_B52A5C(Instance, v5);
  }
LABEL_22:
  if ( !v9 )
    goto LABEL_73;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v9,
           (const MethodInfo_2F27914 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v24 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  Instance = SoundPlayerListViewItem___c_TypeInfo;
  if ( (BYTE3(SoundPlayerListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    Instance = SoundPlayerListViewItem___c_TypeInfo;
  }
  static_fields = (struct SoundPlayerListViewItem___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__37_0 = static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Comparison_int__o *)sub_B52A54(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__37_0,
      v27,
      Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__,
      (const MethodInfo_2481A3C *)Method_System_Comparison_int___ctor__);
    v28 = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    v28->__9__37_0 = _9__37_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v28->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v24 )
    goto LABEL_73;
  System_Collections_Generic_List_int___Sort_50696268(
    v24,
    (System_Comparison_T__o *)_9__37_0,
    (const MethodInfo_305904C *)Method_System_Collections_Generic_List_int__Sort___68512952);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    v24,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_QWORD *)&v71.fields.current = v64;
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v71.fields.list = v63;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v71,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v35 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v62,
            v71.fields.current,
            (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v35 )
      sub_B52A5C(0LL, v36);
    squareData = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v35->fields.squareData;
    if ( squareData
      && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v35->fields.squareData,
           (const MethodInfo_2F27904 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v38 = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
              squareData,
              (const MethodInfo_2F27914 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v39 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_50685004(
        v39,
        (System_Collections_Generic_IEnumerable_T__o *)v38,
        (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
      v40 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v40,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v39 )
        sub_B52A5C(v41, v42);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v39,
        (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v43 = 0;
      *(_QWORD *)&v70.fields.current = v64;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v70.fields.list = v63;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v70,
                (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v44 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)squareData,
                v70.fields.current,
                (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v44 )
          sub_B52A5C(0LL, v45);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v63,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v44,
          (const MethodInfo_2FB6F48 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v46 = 0;
        v47 = v43;
        v68 = v63;
        v69 = v64;
LABEL_42:
        v43 = v47;
        while ( 1 )
        {
          v48 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v68,
                  (const MethodInfo_230E554 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v48 )
            break;
          if ( !(_BYTE)v69 )
          {
            v50 = *((_QWORD *)&v69 + 1);
            if ( !*((_QWORD *)&v69 + 1) )
              sub_B52A5C(v48, v49);
            if ( !v7 )
              sub_B52A5C(v48, v49);
            v51 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    v7,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v69 + 1) + 52LL),
                    (const MethodInfo_23E2334 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v46 = 1;
            if ( v51 )
            {
              if ( !v40 )
                sub_B52A5C(v51, v52);
              v46 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v40,
                      *(_DWORD *)(v50 + 52),
                      (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v53,
                  v43 & 1,
                  closedMessage,
                  v54);
                v46 = 1;
                System_Collections_Generic_List_int___Add(
                  v40,
                  *(_DWORD *)(v50 + 52),
                  (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                v47 = 1;
                goto LABEL_42;
              }
            }
          }
        }
        v65[v66++] = 460;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v68,
          (const MethodInfo_230E550 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        v55 = v66;
        if ( v66 && v65[v66 - 1] == 460 )
          v55 = --v66;
        if ( (v46 & 1) == 0 )
        {
          v65[v55] = 497;
          v56 = v66;
          v57 = 1;
          goto LABEL_60;
        }
      }
      v57 = 0;
      v65[v66] = 497;
      v56 = v66;
LABEL_60:
      v66 = v56 + 1;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v70,
        (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v58 = v66;
      if ( v66 && v65[v66 - 1] == 497 )
        v58 = --v66;
      if ( (v57 & 1) == 0 )
      {
        v65[v58] = 536;
        ++v66;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v71,
          (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        result = 1;
        goto LABEL_67;
      }
    }
  }
  v65[v66++] = 534;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v71,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  result = 0;
LABEL_67:
  if ( !v66 )
    return 0;
  v59 = v65[v66 - 1];
  if ( v59 == 534 )
  {
    result = 0;
  }
  else if ( v59 != 536 )
  {
    return 0;
  }
  --v66;
  return result;
}


void __fastcall SoundPlayerListViewItem__setNotOpenStr(
        ClosedMessageEntity_o *closedMesEntity,
        int32_t kind,
        bool isNewLine,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42AF461 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_26/*"\n"*/);
    byte_42AF461 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_44568316(*closedMessage, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *closedMessage = v8;
      sub_B52920((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_String__Concat_44568316(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v15;
    sub_B52920((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._playEffect_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._playEffect_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SoundPlayerListViewItem__startOpenAnim(
        SoundPlayerListViewItem_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  struct ListViewObject_o *viewObject; // x8
  __int64 v6; // x11
  UnityEngine_Object_o *v7; // x21
  SoundPlayerListViewItemDraw_o *v8; // x0
  SoundPlayerListViewManager_o *v9; // x1
  const MethodInfo *v10; // x4
  void *monitor; // x8
  __int64 v12; // x11

  if ( (byte_42AF45B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SoundPlayerListViewManager_TypeInfo);
    sub_B52984(&SoundPlayerListViewObject_TypeInfo);
    byte_42AF45B = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v6 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v6 - 1] == SoundPlayerListViewObject_TypeInfo )
      v7 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( !v7
      || ((monitor = v7[1].monitor) != 0LL
       && (v12 = *(&SoundPlayerListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v12)
        ? (*(SoundPlayerListViewManager_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v12 - 8) != SoundPlayerListViewManager_TypeInfo
         ? (v9 = 0LL)
         : (v9 = (SoundPlayerListViewManager_o *)v7[1].monitor))
        : (v9 = 0LL),
          (v8 = (SoundPlayerListViewItemDraw_o *)v7[5].monitor) == 0LL) )
    {
      sub_B52A5C(v8, v9);
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v8, v9, this, endCallback, v10);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20

  if ( (byte_42ADD2E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
    byte_42ADD2E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v3;
  sub_B52920(&this->fields);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v9; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v10; // x24
  SoundPlayerListViewItem_BgmReleaseData_o v11; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_42ADD2D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    sub_B52984(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    byte_42ADD2D = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v9 = this->fields.collectList;
    v10 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_B52A54(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v10,
      (const MethodInfo_2FB52E8 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v9 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v9,
      condGroup,
      (WarBoardAIRoute_RouteData_o *)v10,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)collectList,
                                                                                                   condGroup,
                                                                                                   (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(collectList, *(_QWORD *)&condGroup);
  }
  *(_QWORD *)&v11.fields.releaseCheck = v5;
  v11.fields.bgmReleaseEntity = bgmReleaseEntity;
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___Add(
    (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
    v11,
    (const MethodInfo_2FB6078 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItem_BgmReleaseData___ctor(
        SoundPlayerListViewItem_BgmReleaseData_o this,
        bool releaseCheck,
        BgmReleaseEntity_o *bgmReleaseEntity,
        const MethodInfo *method)
{
  _QWORD *v4; // x0

  **(_BYTE **)&this.fields.releaseCheck = (__int64)this.fields.bgmReleaseEntity & 1;
  v4 = (_QWORD *)(*(_QWORD *)&this.fields.releaseCheck + 8LL);
  *v4 = releaseCheck;
  sub_B52920(v4);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42ADD2C & 1) == 0 )
  {
    sub_B52984(&SoundPlayerListViewItem___c_TypeInfo);
    byte_42ADD2C = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v1;
  sub_B52920(static_fields);
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