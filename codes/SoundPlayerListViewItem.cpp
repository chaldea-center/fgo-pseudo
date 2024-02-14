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

  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.itemIds, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.prices = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.prices, 0LL, v19, v20, v21, v22, v23, v24);
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
  struct BgmEntity_o *v16; // x8
  struct System_String_o *name; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Int32_array *v24; // x1
  System_Int32_array **v25; // x1
  const MethodInfo *v26; // x2
  struct BgmEntity_o *v27; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214B1C & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4214B1C = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
      v16 = this->fields.bgmEntity;
      if ( !v16 || !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &entity,
                                    v16->fields.shopId,
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_23;
        if ( LODWORD(entity->fields.emptyMessage) == 8 )
        {
          name = entity->fields.name;
          this->fields.itemIds = (struct System_Int32_array *)name;
          sub_B0D840(
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
          v24 = *(struct System_Int32_array **)&entity->fields.startType;
          this->fields.prices = v24;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.prices,
            (System_Int32_array **)v24,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v25 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.notOpenStr, v25, v2, v3, v4, v5, v6, v7);
    if ( this->fields.openType == 2 )
      return;
    v27 = this->fields.bgmEntity;
    if ( v27 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_25015652(v27->fields.id, &this->fields.notOpenStr, v26) )
        this->fields.openType = 2;
      return;
    }
LABEL_23:
    sub_B0D97C(Instance);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4214B1B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_4214B1B = 1;
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
      || (SoundPlayerListViewItemDraw__apllyDisp(monitor, this, v8),
          (monitor = (SoundPlayerListViewItemDraw_o *)v6[5].monitor) == 0LL) )
    {
      sub_B0D97C(monitor);
    }
    SoundPlayerListViewItemDraw__applyUi(monitor, this, v9);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4214B1A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_4214B1A = 1;
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
      sub_B0D97C(monitor);
    SoundPlayerListViewItemDraw__attachPlayEffect(monitor, this, v8);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_4214B21 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4214B21 = 1;
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

  if ( (byte_4214B20 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4214B20 = 1;
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

  if ( (byte_4214B1D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4214B1D = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_25015652(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_25015652(
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
  BgmReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x20
  BgmReleaseEntity_array *Entitys; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v42; // x21
  const MethodInfo *v43; // x2
  __int64 v44; // x19
  il2cpp_array_size_t v45; // w27
  BgmReleaseEntity_o *v46; // x23
  int32_t type; // w24
  char v48; // w24
  __int64 v49; // x1
  __int64 v50; // x2
  int32_t priority; // w25
  SoundPlayerListViewItem_BgmPriorityData_o *v52; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v55; // x25
  const MethodInfo *v56; // x4
  __int64 v57; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_int__o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__37_0; // x23
  Il2CppObject *v66; // x24
  struct SoundPlayerListViewItem___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v74; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *squareData; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v76; // x23
  __int64 v77; // x1
  __int64 v78; // x2
  System_Collections_Generic_List_int__o *v79; // x24
  __int64 v80; // x1
  __int64 v81; // x2
  System_Collections_Generic_List_int__o *v82; // x23
  __int64 v83; // x0
  int v84; // w28
  WarBoardEvalValueSquare_EvalValueSquare_o *v85; // x0
  char v86; // w26
  int v87; // w8
  _BOOL8 v88; // x0
  __int64 v89; // x24
  _BOOL8 v90; // x0
  int32_t v91; // w1
  const MethodInfo *v92; // x4
  int v93; // w8
  int v94; // w8
  char v95; // w23
  int v96; // w8
  int v97; // w9
  bool result; // w0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v100; // [xsp+8h] [xbp-F8h]
  SoundPlayerListViewItem_BgmReleaseData_o v101; // [xsp+10h] [xbp-F0h] BYREF
  __int128 v102; // [xsp+20h] [xbp-E0h]
  _DWORD v103[5]; // [xsp+30h] [xbp-D0h]
  int v104; // [xsp+44h] [xbp-BCh]
  WarEntity_o *entity; // [xsp+48h] [xbp-B8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v106; // [xsp+50h] [xbp-B0h] BYREF
  __int128 v107; // [xsp+60h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v108; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v109; // [xsp+90h] [xbp-70h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v110; // 0:x0.16

  if ( (byte_4214B1E & 1) == 0 )
  {
    sub_B0D8A4(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, closedMessage);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v4);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__, v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v16);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort___67885080, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v30);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B0D8A4(&SoundPlayerComponent_TypeInfo, v33);
    sub_B0D8A4(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v34);
    sub_B0D8A4(&SoundPlayerListViewItem___c_TypeInfo, v35);
    byte_4214B1E = 1;
  }
  memset(&v109, 0, sizeof(v109));
  v107 = 0u;
  memset(&v108, 0, sizeof(v108));
  v106 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  entity = 0LL;
  v104 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (BgmReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_73;
  v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys(MasterData_WarQuestSelectionMaster, bgmId, 0LL);
  v42 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo,
                                                                                                   v40,
                                                                                                   v41);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v42,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_73;
  v44 = *(_QWORD *)&Entitys->max_length;
  v100 = v42;
  if ( (int)v44 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      v46 = Entitys->m_Items[v45];
      if ( !v46 )
        break;
      if ( v46->fields.targetIds )
      {
        type = v46->fields.type;
        if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
        }
        Instance = (void *)SoundPlayerComponent__checkOpen(v46, type, v43);
        if ( !v42 )
          break;
        v48 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v42,
                v46->fields.priority,
                (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v46->fields.priority;
          v52 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_B0D974(
                                                               SoundPlayerListViewItem_BgmPriorityData_TypeInfo,
                                                               v49,
                                                               v50);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v52, 0LL);
          v42 = v100;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v100,
            priority,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v52,
            (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v42,
                 v46->fields.priority,
                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v46->fields.condGroup;
        v55 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v110.fields.bgmReleaseEntity = (struct BgmReleaseEntity_o *)(v48 & 1);
        *(_QWORD *)&v110.fields.releaseCheck = &v101;
        v101 = (SoundPlayerListViewItem_BgmReleaseData_o)0LL;
        SoundPlayerListViewItem_BgmReleaseData___ctor(v110, (bool)v46, 0LL, v56);
        if ( !v55 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v55, condGroup, v101, 0LL);
        v42 = v100;
      }
      if ( (int)++v45 >= (int)v44 )
        goto LABEL_22;
      if ( v45 >= Entitys->max_length )
      {
        v57 = sub_B0D9A8(Instance);
        sub_B0D948(v57, 0LL);
      }
    }
LABEL_73:
    sub_B0D97C(Instance);
  }
LABEL_22:
  if ( !v42 )
    goto LABEL_73;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v42,
           (const MethodInfo_2E90034 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v61 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v59, v60);
  System_Collections_Generic_List_int____ctor_50000796(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, v62, v63);
    System_Comparison_int____ctor(
      _9__37_0,
      v66,
      Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__,
      (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
    v67 = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    v67->__9__37_0 = _9__37_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v67->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !v61 )
    goto LABEL_73;
  System_Collections_Generic_List_int___Sort_50012060(
    v61,
    (System_Comparison_T__o *)_9__37_0,
    (const MethodInfo_2FB1F9C *)Method_System_Collections_Generic_List_int__Sort___67885080);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v101,
    v61,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_QWORD *)&v109.fields.current = v102;
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v109.fields.list = v101;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v109,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v74 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v100,
            v109.fields.current,
            (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v74 )
      sub_B0D97C(0LL);
    squareData = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v74->fields.squareData;
    if ( squareData
      && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v74->fields.squareData,
           (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v76 = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
              squareData,
              (const MethodInfo_2E90034 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v79 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v77,
                                                        v78);
      System_Collections_Generic_List_int____ctor_50000796(
        v79,
        (System_Collections_Generic_IEnumerable_T__o *)v76,
        (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
      v82 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v80,
                                                        v81);
      System_Collections_Generic_List_int____ctor(
        v82,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v79 )
        sub_B0D97C(v83);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v101,
        v79,
        (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v84 = 0;
      *(_QWORD *)&v108.fields.current = v102;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v108.fields.list = v101;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v108,
                (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v85 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)squareData,
                v108.fields.current,
                (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v85 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v101,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v85,
          (const MethodInfo_2F080E4 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v86 = 0;
        v87 = v84;
        v106 = v101;
        v107 = v102;
LABEL_42:
        v84 = v87;
        while ( 1 )
        {
          v88 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v106,
                  (const MethodInfo_22967FC *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v88 )
            break;
          if ( !(_BYTE)v107 )
          {
            v89 = *((_QWORD *)&v107 + 1);
            if ( !*((_QWORD *)&v107 + 1) )
              sub_B0D97C(v88);
            if ( !v38 )
              sub_B0D97C(v88);
            v90 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    v38,
                    &entity,
                    *(_DWORD *)(*((_QWORD *)&v107 + 1) + 52LL),
                    (const MethodInfo_2669C30 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v86 = 1;
            if ( v90 )
            {
              if ( !v82 )
                sub_B0D97C(v90);
              v86 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v82,
                      *(_DWORD *)(v89 + 52),
                      (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v91,
                  v84 & 1,
                  closedMessage,
                  v92);
                v86 = 1;
                System_Collections_Generic_List_int___Add(
                  v82,
                  *(_DWORD *)(v89 + 52),
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                v87 = 1;
                goto LABEL_42;
              }
            }
          }
        }
        v103[v104++] = 460;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v106,
          (const MethodInfo_22967F8 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        v93 = v104;
        if ( v104 && v103[v104 - 1] == 460 )
          v93 = --v104;
        if ( (v86 & 1) == 0 )
        {
          v103[v93] = 497;
          v94 = v104;
          v95 = 1;
          goto LABEL_60;
        }
      }
      v95 = 0;
      v103[v104] = 497;
      v94 = v104;
LABEL_60:
      v104 = v94 + 1;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v108,
        (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v96 = v104;
      if ( v104 && v103[v104 - 1] == 497 )
        v96 = --v104;
      if ( (v95 & 1) == 0 )
      {
        v103[v96] = 536;
        ++v104;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v109,
          (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        result = 1;
        goto LABEL_67;
      }
    }
  }
  v103[v104++] = 534;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v109,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  result = 0;
LABEL_67:
  if ( !v104 )
    return 0;
  v97 = v103[v104 - 1];
  if ( v97 == 534 )
  {
    result = 0;
  }
  else if ( v97 != 536 )
  {
    return 0;
  }
  --v104;
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

  if ( (byte_4214B1F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, *(_QWORD *)&kind);
    byte_4214B1F = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_43849904(*closedMessage, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *closedMessage = v8;
      sub_B0D840((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_String__Concat_43849904(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v15;
    sub_B0D840((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  sub_B0D840(
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
  const MethodInfo *v11; // x4
  void *monitor; // x8
  __int64 v13; // x11
  SoundPlayerListViewManager_o *v14; // x1

  if ( (byte_4214B19 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, endCallback);
    sub_B0D8A4(&SoundPlayerListViewManager_TypeInfo, v5);
    sub_B0D8A4(&SoundPlayerListViewObject_TypeInfo, v6);
    byte_4214B19 = 1;
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
       && (v13 = *(&SoundPlayerListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v13)
        ? (*(SoundPlayerListViewManager_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v13 - 8) != SoundPlayerListViewManager_TypeInfo
         ? (v14 = 0LL)
         : (v14 = (SoundPlayerListViewManager_o *)v9[1].monitor))
        : (v14 = 0LL),
          (v10 = (SoundPlayerListViewItemDraw_o *)v9[5].monitor) == 0LL) )
    {
      sub_B0D97C(v10);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20

  if ( (byte_42116EE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo, v4);
    byte_42116EE = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v5;
  sub_B0D840(&this->fields, v5);
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
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v16; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v17; // x24
  SoundPlayerListViewItem_BgmReleaseData_o v18; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_42116ED & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      *(_QWORD *)&condGroup);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v12);
    byte_42116ED = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v16 = this->fields.collectList;
    v17 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_B0D974(
                                                                                         System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo,
                                                                                         v14,
                                                                                         v15);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v17,
      (const MethodInfo_2F06484 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v16 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v16,
      condGroup,
      (WarBoardAIRoute_RouteData_o *)v17,
      (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)collectList,
                                                                                                   condGroup,
                                                                                                   (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(collectList);
  }
  *(_QWORD *)&v18.fields.releaseCheck = v5;
  v18.fields.bgmReleaseEntity = bgmReleaseEntity;
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___Add(
    (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
    v18,
    (const MethodInfo_2F07214 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
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
  sub_B0D840(v4, releaseCheck);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42116EC & 1) == 0 )
  {
    sub_B0D8A4(&SoundPlayerListViewItem___c_TypeInfo, v1);
    byte_42116EC = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SoundPlayerListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v3;
  sub_B0D840(static_fields, v3);
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