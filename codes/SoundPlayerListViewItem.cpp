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

  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.itemIds, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.prices = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.prices, 0LL, v19, v20, v21, v22, v23, v24);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct BgmEntity_o *v17; // x8
  struct System_String_o *name; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Int32_array *v25; // x1
  System_Int32_array **v26; // x1
  const MethodInfo *v27; // x2
  struct BgmEntity_o *v28; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41876E5 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_41876E5 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
      v17 = this->fields.bgmEntity;
      if ( !v17 || !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &entity,
                                    v17->fields.shopId,
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_23;
        if ( LODWORD(entity->fields.emptyMessage) == 8 )
        {
          name = entity->fields.name;
          this->fields.itemIds = (struct System_Int32_array *)name;
          sub_B2C2F8(
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
          v25 = *(struct System_Int32_array **)&entity->fields.startType;
          this->fields.prices = v25;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.prices,
            (System_Int32_array **)v25,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v26 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.notOpenStr, v26, v2, v3, v4, v5, v6, v7);
    if ( this->fields.openType == 2 )
      return;
    v28 = this->fields.bgmEntity;
    if ( v28 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_24825024(v28->fields.id, &this->fields.notOpenStr, v27) )
        this->fields.openType = 2;
      return;
    }
LABEL_23:
    sub_B2C434(Instance, v16);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_41876E4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_41876E4 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v5 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v5 - 1] == SoundPlayerListViewObject_TypeInfo )
      v6 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !v6
      || (monitor = (SoundPlayerListViewItemDraw_o *)v6[5].monitor) == 0LL
      || (SoundPlayerListViewItemDraw__apllyDisp(monitor, this, v9),
          (monitor = (SoundPlayerListViewItemDraw_o *)v6[5].monitor) == 0LL) )
    {
      sub_B2C434(monitor, v8);
    }
    SoundPlayerListViewItemDraw__applyUi(monitor, this, v10);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_41876E3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_41876E3 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v5 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v5 - 1] == SoundPlayerListViewObject_TypeInfo )
      v6 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !v6 || (monitor = (SoundPlayerListViewItemDraw_o *)v6[5].monitor) == 0LL )
      sub_B2C434(monitor, v8);
    SoundPlayerListViewItemDraw__attachPlayEffect(monitor, this, v9);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_41876EA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41876EA = 1;
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

  if ( (byte_41876E9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41876E9 = 1;
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

  if ( (byte_41876E6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41876E6 = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_24825024(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_24825024(
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
  __int64 v34; // x1
  __int64 v35; // x1
  void *Instance; // x0
  __int64 v37; // x1
  BgmReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x20
  BgmReleaseEntity_array *Entitys; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x21
  const MethodInfo *v42; // x2
  __int64 v43; // x19
  il2cpp_array_size_t v44; // w27
  BgmReleaseEntity_o *v45; // x23
  int32_t type; // w24
  char v47; // w24
  int32_t priority; // w25
  SoundPlayerListViewItem_BgmPriorityData_o *v49; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v52; // x25
  const MethodInfo *v53; // x4
  __int64 v54; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v56; // x22
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__37_0; // x23
  Il2CppObject *v59; // x24
  struct SoundPlayerListViewItem___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v67; // x0
  __int64 v68; // x1
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *squareData; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v70; // x23
  System_Collections_Generic_List_int__o *v71; // x24
  System_Collections_Generic_List_int__o *v72; // x23
  __int64 v73; // x0
  __int64 v74; // x1
  int v75; // w28
  WarBoardEvalValueSquare_EvalValueSquare_o *v76; // x0
  __int64 v77; // x1
  char v78; // w26
  int v79; // w8
  _BOOL8 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x24
  _BOOL8 v83; // x0
  __int64 v84; // x1
  int32_t v85; // w1
  const MethodInfo *v86; // x4
  int v87; // w8
  int v88; // w8
  char v89; // w23
  int v90; // w8
  int v91; // w9
  bool result; // w0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v94; // [xsp+8h] [xbp-F8h]
  SoundPlayerListViewItem_BgmReleaseData_o v95; // [xsp+10h] [xbp-F0h] BYREF
  __int128 v96; // [xsp+20h] [xbp-E0h]
  _DWORD v97[5]; // [xsp+30h] [xbp-D0h]
  int v98; // [xsp+44h] [xbp-BCh]
  WarEntity_o *entity; // [xsp+48h] [xbp-B8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v100; // [xsp+50h] [xbp-B0h] BYREF
  __int128 v101; // [xsp+60h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v102; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v103; // [xsp+90h] [xbp-70h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v104; // 0:x0.16

  if ( (byte_41876E7 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, closedMessage);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v4);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__, v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__, v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v16);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort___67311520, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v30);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B2C35C(&SoundPlayerComponent_TypeInfo, v33);
    sub_B2C35C(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v34);
    sub_B2C35C(&SoundPlayerListViewItem___c_TypeInfo, v35);
    byte_41876E7 = 1;
  }
  memset(&v103, 0, sizeof(v103));
  v101 = 0u;
  memset(&v102, 0, sizeof(v102));
  v100 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  entity = 0LL;
  v98 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (BgmReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_73;
  v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys(MasterData_WarQuestSelectionMaster, bgmId, 0LL);
  v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v41,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_73;
  v43 = *(_QWORD *)&Entitys->max_length;
  v94 = v41;
  if ( (int)v43 >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      v45 = Entitys->m_Items[v44];
      if ( !v45 )
        break;
      if ( v45->fields.targetIds )
      {
        type = v45->fields.type;
        if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
        }
        Instance = (void *)SoundPlayerComponent__checkOpen(v45, type, v42);
        if ( !v41 )
          break;
        v47 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v41,
                v45->fields.priority,
                (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v45->fields.priority;
          v49 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_B2C42C(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v49, 0LL);
          v41 = v94;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v94,
            priority,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v49,
            (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v41,
                 v45->fields.priority,
                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v45->fields.condGroup;
        v52 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v104.fields.bgmReleaseEntity = (struct BgmReleaseEntity_o *)(v47 & 1);
        *(_QWORD *)&v104.fields.releaseCheck = &v95;
        v95 = (SoundPlayerListViewItem_BgmReleaseData_o)0LL;
        SoundPlayerListViewItem_BgmReleaseData___ctor(v104, (bool)v45, 0LL, v53);
        if ( !v52 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v52, condGroup, v95, 0LL);
        v41 = v94;
      }
      if ( (int)++v44 >= (int)v43 )
        goto LABEL_22;
      if ( v44 >= Entitys->max_length )
      {
        v54 = sub_B2C460(Instance);
        sub_B2C400(v54, 0LL);
      }
    }
LABEL_73:
    sub_B2C434(Instance, v37);
  }
LABEL_22:
  if ( !v41 )
    goto LABEL_73;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v41,
           (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v56 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v56,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
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
    v59 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__37_0,
      v59,
      Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__,
      (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
    v60 = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    v60->__9__37_0 = _9__37_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v60->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v56 )
    goto LABEL_73;
  System_Collections_Generic_List_int___Sort_49713300(
    v56,
    (System_Comparison_T__o *)_9__37_0,
    (const MethodInfo_2F69094 *)Method_System_Collections_Generic_List_int__Sort___67311520);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    v56,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_QWORD *)&v103.fields.current = v96;
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v103.fields.list = v95;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v103,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v67 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v94,
            v103.fields.current,
            (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v67 )
      sub_B2C434(0LL, v68);
    squareData = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v67->fields.squareData;
    if ( squareData
      && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v67->fields.squareData,
           (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v70 = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
              squareData,
              (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v71 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_49702036(
        v71,
        (System_Collections_Generic_IEnumerable_T__o *)v70,
        (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
      v72 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v72,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v71 )
        sub_B2C434(v73, v74);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v95,
        v71,
        (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v75 = 0;
      *(_QWORD *)&v102.fields.current = v96;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v102.fields.list = v95;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v102,
                (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v76 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)squareData,
                v102.fields.current,
                (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v76 )
          sub_B2C434(0LL, v77);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v95,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v76,
          (const MethodInfo_2EB9DCC *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v78 = 0;
        v79 = v75;
        v100 = v95;
        v101 = v96;
LABEL_42:
        v75 = v79;
        while ( 1 )
        {
          v80 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v100,
                  (const MethodInfo_255A314 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v80 )
            break;
          if ( !(_BYTE)v101 )
          {
            v82 = *((_QWORD *)&v101 + 1);
            if ( !*((_QWORD *)&v101 + 1) )
              sub_B2C434(v80, v81);
            if ( !v39 )
              sub_B2C434(v80, v81);
            v83 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    v39,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v101 + 1) + 52LL),
                    (const MethodInfo_24E412C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v78 = 1;
            if ( v83 )
            {
              if ( !v72 )
                sub_B2C434(v83, v84);
              v78 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v72,
                      *(_DWORD *)(v82 + 52),
                      (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v85,
                  v75 & 1,
                  closedMessage,
                  v86);
                v78 = 1;
                System_Collections_Generic_List_int___Add(
                  v72,
                  *(_DWORD *)(v82 + 52),
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                v79 = 1;
                goto LABEL_42;
              }
            }
          }
        }
        v97[v98++] = 460;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v100,
          (const MethodInfo_255A310 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        v87 = v98;
        if ( v98 && v97[v98 - 1] == 460 )
          v87 = --v98;
        if ( (v78 & 1) == 0 )
        {
          v97[v87] = 497;
          v88 = v98;
          v89 = 1;
          goto LABEL_60;
        }
      }
      v89 = 0;
      v97[v98] = 497;
      v88 = v98;
LABEL_60:
      v98 = v88 + 1;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v102,
        (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v90 = v98;
      if ( v98 && v97[v98 - 1] == 497 )
        v90 = --v98;
      if ( (v89 & 1) == 0 )
      {
        v97[v90] = 536;
        ++v98;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v103,
          (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        result = 1;
        goto LABEL_67;
      }
    }
  }
  v97[v98++] = 534;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v103,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  result = 0;
LABEL_67:
  if ( !v98 )
    return 0;
  v91 = v97[v98 - 1];
  if ( v91 == 534 )
  {
    result = 0;
  }
  else if ( v91 != 536 )
  {
    return 0;
  }
  --v98;
  return result;
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

  if ( (byte_41876E8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_26/*"\n"*/, *(_QWORD *)&kind);
    byte_41876E8 = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_44305532(*closedMessage, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *closedMessage = v8;
      sub_B2C2F8((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_String__Concat_44305532(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v15;
    sub_B2C2F8((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x21
  SoundPlayerListViewItemDraw_o *v10; // x0
  SoundPlayerListViewManager_o *v11; // x1
  const MethodInfo *v12; // x4
  void *monitor; // x8
  __int64 v14; // x11

  if ( (byte_41876E2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, endCallback);
    sub_B2C35C(&SoundPlayerListViewManager_TypeInfo, v5);
    sub_B2C35C(&SoundPlayerListViewObject_TypeInfo, v6);
    byte_41876E2 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v8 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v8 - 1] == SoundPlayerListViewObject_TypeInfo )
      v9 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
  {
    if ( !v9
      || ((monitor = v9[1].monitor) != 0LL
       && (v14 = *(&SoundPlayerListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v14)
        ? (*(SoundPlayerListViewManager_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v14 - 8) != SoundPlayerListViewManager_TypeInfo
         ? (v11 = 0LL)
         : (v11 = (SoundPlayerListViewManager_o *)v9[1].monitor))
        : (v11 = 0LL),
          (v10 = (SoundPlayerListViewItemDraw_o *)v9[5].monitor) == 0LL) )
    {
      sub_B2C434(v10, v11);
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v10, v11, this, endCallback, v12);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20

  if ( (byte_4184759 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo, v3);
    byte_4184759 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v4;
  sub_B2C2F8(&this->fields, v4);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v14; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v15; // x24
  SoundPlayerListViewItem_BgmReleaseData_o v16; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_4184758 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      *(_QWORD *)&condGroup);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v12);
    byte_4184758 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v14 = this->fields.collectList;
    v15 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_B2C42C(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v15,
      (const MethodInfo_2EB816C *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v14 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v14,
      condGroup,
      (WarBoardAIRoute_RouteData_o *)v15,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)collectList,
                                                                                                   condGroup,
                                                                                                   (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(collectList, *(_QWORD *)&condGroup);
  }
  *(_QWORD *)&v16.fields.releaseCheck = v5;
  v16.fields.bgmReleaseEntity = bgmReleaseEntity;
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___Add(
    (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
    v16,
    (const MethodInfo_2EB8EFC *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
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
  sub_B2C2F8(v4, releaseCheck);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_4184757 & 1) == 0 )
  {
    sub_B2C35C(&SoundPlayerListViewItem___c_TypeInfo, v1);
    byte_4184757 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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