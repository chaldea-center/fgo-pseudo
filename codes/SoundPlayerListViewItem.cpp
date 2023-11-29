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

  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemIds, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.prices = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.prices, 0LL, v19, v20, v21, v22, v23, v24);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
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

  if ( (byte_40F9D17 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F9D17 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
      v17 = this->fields.bgmEntity;
      if ( !v17 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_23;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             v17->fields.shopId,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          goto LABEL_23;
        if ( LODWORD(entity->fields.emptyMessage) == 8 )
        {
          name = entity->fields.name;
          this->fields.itemIds = (struct System_Int32_array *)name;
          sub_B16F98(
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
          sub_B16F98(
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
    v26 = (System_Int32_array **)StringLiteral_1;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.notOpenStr, v26, v2, v3, v4, v5, v6, v7);
    if ( this->fields.openType == 2 )
      return;
    v28 = this->fields.bgmEntity;
    if ( v28 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_24862228(v28->fields.id, &this->fields.notOpenStr, v27) )
        this->fields.openType = 2;
      return;
    }
LABEL_23:
    sub_B170D4();
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x20
  const MethodInfo *v7; // x2
  SoundPlayerListViewItemDraw_o *monitor; // x0
  const MethodInfo *v9; // x2
  SoundPlayerListViewItemDraw_o *v10; // x0

  if ( (byte_40F9D16 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_40F9D16 = 1;
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
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    if ( !v6
      || (monitor = (SoundPlayerListViewItemDraw_o *)v6[5].monitor) == 0LL
      || (SoundPlayerListViewItemDraw__apllyDisp(monitor, this, v7),
          (v10 = (SoundPlayerListViewItemDraw_o *)v6[5].monitor) == 0LL) )
    {
      sub_B170D4();
    }
    SoundPlayerListViewItemDraw__applyUi(v10, this, v9);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewObject_o *viewObject; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x20
  const MethodInfo *v7; // x2
  SoundPlayerListViewItemDraw_o *monitor; // x0

  if ( (byte_40F9D15 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundPlayerListViewObject_TypeInfo, v3);
    byte_40F9D15 = 1;
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
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    if ( !v6 || (monitor = (SoundPlayerListViewItemDraw_o *)v6[5].monitor) == 0LL )
      sub_B170D4();
    SoundPlayerListViewItemDraw__attachPlayEffect(monitor, this, v7);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_40F9D1C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9D1C = 1;
  }
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
    p_fileName = &bgmEntity->fields.fileName;
  else
    p_fileName = (System_String_o **)&StringLiteral_1;
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

  if ( (byte_40F9D1B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9D1B = 1;
  }
  bgmEntity = this->fields.bgmEntity;
  if ( bgmEntity )
    p_name = &bgmEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1;
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

  if ( (byte_40F9D18 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9D18 = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1;
  return SoundPlayerListViewItem__isBgmLock_24862228(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_24862228(
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
  WebViewManager_o *Instance; // x0
  BgmReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v38; // x0
  WarQuestSelectionMaster_o *v39; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x20
  BgmReleaseEntity_array *Entitys; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v46; // x21
  __int64 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  __int64 v50; // x19
  il2cpp_array_size_t v51; // w27
  BgmReleaseEntity_o *v52; // x23
  int32_t type; // w24
  bool v54; // w0
  bool v55; // w24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  int32_t priority; // w25
  SoundPlayerListViewItem_BgmPriorityData_o *v61; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v64; // x25
  const MethodInfo *v65; // x4
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_int__o *v71; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  SoundPlayerListViewItem___c_c *v76; // x0
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__37_0; // x23
  Il2CppObject *v79; // x24
  struct SoundPlayerListViewItem___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v87; // x0
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *squareData; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v89; // x23
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  System_Collections_Generic_List_int__o *v94; // x24
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  System_Collections_Generic_List_int__o *v99; // x23
  int v100; // w28
  WarBoardEvalValueSquare_EvalValueSquare_o *v101; // x0
  char v102; // w26
  int v103; // w8
  __int64 v104; // x24
  int32_t v105; // w1
  const MethodInfo *v106; // x4
  int v107; // w8
  int v108; // w8
  char v109; // w23
  int v110; // w8
  int v111; // w9
  bool result; // w0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v114; // [xsp+8h] [xbp-F8h]
  SoundPlayerListViewItem_BgmReleaseData_o v115; // [xsp+10h] [xbp-F0h] BYREF
  __int128 v116; // [xsp+20h] [xbp-E0h]
  _DWORD v117[5]; // [xsp+30h] [xbp-D0h]
  int v118; // [xsp+44h] [xbp-BCh]
  WarEntity_o *entity; // [xsp+48h] [xbp-B8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v120; // [xsp+50h] [xbp-B0h] BYREF
  __int128 v121; // [xsp+60h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v122; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v123; // [xsp+90h] [xbp-70h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v124; // 0:x0.16

  if ( (byte_40F9D19 & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, closedMessage);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v4);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort___66737336, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v30);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_B16FFC(&SoundPlayerComponent_TypeInfo, v33);
    sub_B16FFC(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v34);
    sub_B16FFC(&SoundPlayerListViewItem___c_TypeInfo, v35);
    byte_40F9D19 = 1;
  }
  memset(&v123, 0, sizeof(v123));
  v121 = 0u;
  memset(&v122, 0, sizeof(v122));
  v120 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  entity = 0LL;
  v118 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (BgmReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v38 )
    goto LABEL_73;
  v39 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v38,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_73;
  v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)v39;
  Entitys = BgmReleaseMaster__getEntitys(MasterData_WarQuestSelectionMaster, bgmId, 0LL);
  v46 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo,
                                                                                                   v42,
                                                                                                   v43,
                                                                                                   v44,
                                                                                                   v45);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v46,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_73;
  v50 = *(_QWORD *)&Entitys->max_length;
  v114 = v46;
  if ( (int)v50 >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      v52 = Entitys->m_Items[v51];
      if ( !v52 )
        break;
      if ( v52->fields.targetIds )
      {
        type = v52->fields.type;
        if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
        }
        v54 = SoundPlayerComponent__checkOpen(v52, type, v49);
        if ( !v46 )
          break;
        v55 = v54;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v46,
                v52->fields.priority,
                (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v52->fields.priority;
          v61 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_B170CC(
                                                               SoundPlayerListViewItem_BgmPriorityData_TypeInfo,
                                                               v56,
                                                               v57,
                                                               v58,
                                                               v59);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v61, 0LL);
          v46 = v114;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v114,
            priority,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v61,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v46,
                 v52->fields.priority,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v52->fields.condGroup;
        v64 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v124.fields.bgmReleaseEntity = (struct BgmReleaseEntity_o *)v55;
        *(_QWORD *)&v124.fields.releaseCheck = &v115;
        v115 = (SoundPlayerListViewItem_BgmReleaseData_o)0LL;
        SoundPlayerListViewItem_BgmReleaseData___ctor(v124, (bool)v52, 0LL, v65);
        if ( !v64 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v64, condGroup, v115, 0LL);
        v46 = v114;
      }
      if ( (int)++v51 >= (int)v50 )
        goto LABEL_22;
      if ( v51 >= Entitys->max_length )
      {
        sub_B17100(v47, v48, v49);
        sub_B170A0();
      }
    }
LABEL_73:
    sub_B170D4();
  }
LABEL_22:
  if ( !v46 )
    goto LABEL_73;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v46,
           (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v71 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v67,
                                                    v68,
                                                    v69,
                                                    v70);
  System_Collections_Generic_List_int____ctor_49346956(
    v71,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  v76 = SoundPlayerListViewItem___c_TypeInfo;
  if ( (BYTE3(SoundPlayerListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerListViewItem___c_TypeInfo);
    v76 = SoundPlayerListViewItem___c_TypeInfo;
  }
  static_fields = v76->static_fields;
  _9__37_0 = static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    }
    v79 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Comparison_int__o *)sub_B170CC(System_Comparison_int__TypeInfo, v72, v73, v74, v75);
    System_Comparison_int____ctor(
      _9__37_0,
      v79,
      Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__,
      (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
    v80 = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    v80->__9__37_0 = _9__37_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v80->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  if ( !v71 )
    goto LABEL_73;
  System_Collections_Generic_List_int___Sort_49358220(
    v71,
    (System_Comparison_T__o *)_9__37_0,
    (const MethodInfo_2F1258C *)Method_System_Collections_Generic_List_int__Sort___66737336);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    v71,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_QWORD *)&v123.fields.current = v116;
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v123.fields.list = v115;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v123,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v87 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
            v114,
            v123.fields.current,
            (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v87 )
      sub_B170D4();
    squareData = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v87->fields.squareData;
    if ( squareData
      && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v87->fields.squareData,
           (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v89 = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
              squareData,
              (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v94 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v90,
                                                        v91,
                                                        v92,
                                                        v93);
      System_Collections_Generic_List_int____ctor_49346956(
        v94,
        (System_Collections_Generic_IEnumerable_T__o *)v89,
        (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
      v99 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v95,
                                                        v96,
                                                        v97,
                                                        v98);
      System_Collections_Generic_List_int____ctor(
        v99,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v94 )
        sub_B170D4();
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v115,
        v94,
        (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v100 = 0;
      *(_QWORD *)&v122.fields.current = v116;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v122.fields.list = v115;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v122,
                (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v101 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)squareData,
                 v122.fields.current,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v101 )
          sub_B170D4();
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v115,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v101,
          (const MethodInfo_2E7E8F0 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v102 = 0;
        v103 = v100;
        v120 = v115;
        v121 = v116;
LABEL_42:
        v100 = v103;
        while ( System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v120,
                  (const MethodInfo_207BBB4 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__) )
        {
          if ( !(_BYTE)v121 )
          {
            v104 = *((_QWORD *)&v121 + 1);
            if ( !*((_QWORD *)&v121 + 1) )
              sub_B170D4();
            if ( !v40 )
              sub_B170D4();
            v102 = 1;
            if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v40,
                   &entity,
                   *(_DWORD *)(*((_QWORD *)&v121 + 1) + 52LL),
                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
            {
              if ( !v99 )
                sub_B170D4();
              v102 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v99,
                      *(_DWORD *)(v104 + 52),
                      (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v105,
                  v100 & 1,
                  closedMessage,
                  v106);
                v102 = 1;
                System_Collections_Generic_List_int___Add(
                  v99,
                  *(_DWORD *)(v104 + 52),
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                v103 = 1;
                goto LABEL_42;
              }
            }
          }
        }
        v117[v118++] = 460;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v120,
          (const MethodInfo_207BBB0 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        v107 = v118;
        if ( v118 && v117[v118 - 1] == 460 )
          v107 = --v118;
        if ( (v102 & 1) == 0 )
        {
          v117[v107] = 497;
          v108 = v118;
          v109 = 1;
          goto LABEL_60;
        }
      }
      v109 = 0;
      v117[v118] = 497;
      v108 = v118;
LABEL_60:
      v118 = v108 + 1;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v122,
        (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v110 = v118;
      if ( v118 && v117[v118 - 1] == 497 )
        v110 = --v118;
      if ( (v109 & 1) == 0 )
      {
        v117[v110] = 536;
        ++v118;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v123,
          (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        result = 1;
        goto LABEL_67;
      }
    }
  }
  v117[v118++] = 534;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v123,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  result = 0;
LABEL_67:
  if ( !v118 )
    return 0;
  v111 = v117[v118 - 1];
  if ( v111 == 534 )
  {
    result = 0;
  }
  else if ( v111 != 536 )
  {
    return 0;
  }
  --v118;
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

  if ( (byte_40F9D1A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_26, *(_QWORD *)&kind);
    byte_40F9D1A = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_43743732(*closedMessage, (System_String_o *)StringLiteral_26, 0LL);
      *closedMessage = v8;
      sub_B16F98((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_String__Concat_43743732(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v15;
    sub_B16F98((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  sub_B16F98(
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
  const MethodInfo *v10; // x4
  void *monitor; // x8
  __int64 v12; // x11
  SoundPlayerListViewManager_o *v13; // x1
  SoundPlayerListViewItemDraw_o *v14; // x0

  if ( (byte_40F9D14 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, endCallback);
    sub_B16FFC(&SoundPlayerListViewManager_TypeInfo, v5);
    sub_B16FFC(&SoundPlayerListViewObject_TypeInfo, v6);
    byte_40F9D14 = 1;
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
  if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    if ( !v9
      || ((monitor = v9[1].monitor) != 0LL
       && (v12 = *(&SoundPlayerListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v12)
        ? (*(SoundPlayerListViewManager_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v12 - 8) != SoundPlayerListViewManager_TypeInfo
         ? (v13 = 0LL)
         : (v13 = (SoundPlayerListViewManager_o *)v9[1].monitor))
        : (v13 = 0LL),
          (v14 = (SoundPlayerListViewItemDraw_o *)v9[5].monitor) == 0LL) )
    {
      sub_B170D4();
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v14, v13, this, endCallback, v10);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7A28 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo, v6);
    byte_40F7A28 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *collectList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v18; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v19; // x24
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v20; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  SoundPlayerListViewItem_BgmReleaseData_o v22; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_40F7A27 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      *(_QWORD *)&condGroup);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v12);
    byte_40F7A27 = 1;
  }
  collectList = this->fields.collectList;
  if ( !collectList )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)collectList,
          condGroup,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v18 = this->fields.collectList;
    v19 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_B170CC(
                                                                                         System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo,
                                                                                         v14,
                                                                                         v15,
                                                                                         v16,
                                                                                         v17);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v19,
      (const MethodInfo_2E7CC90 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v18 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v18,
      condGroup,
      (WarBoardAIRoute_RouteData_o *)v19,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  v20 = this->fields.collectList;
  if ( !v20
    || (Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v20,
                 condGroup,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  *(_QWORD *)&v22.fields.releaseCheck = v5;
  v22.fields.bgmReleaseEntity = bgmReleaseEntity;
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___Add(
    (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)Item,
    v22,
    (const MethodInfo_2E7DA20 *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerListViewItem_BgmReleaseData___ctor(
        SoundPlayerListViewItem_BgmReleaseData_o this,
        bool releaseCheck,
        BgmReleaseEntity_o *bgmReleaseEntity,
        const MethodInfo *method)
{
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *v7; // x0

  **(_BYTE **)&this.fields.releaseCheck = (__int64)this.fields.bgmReleaseEntity & 1;
  v7 = (BattleServantConfConponent_o *)(*(_QWORD *)&this.fields.releaseCheck + 8LL);
  v7->klass = (BattleServantConfConponent_c *)releaseCheck;
  sub_B16F98(
    v7,
    (System_Int32_array **)releaseCheck,
    (System_String_array **)releaseCheck,
    (System_String_array **)bgmReleaseEntity,
    (System_Boolean_array **)method,
    v4,
    v5,
    v6);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A26 & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerListViewItem___c_TypeInfo, v1);
    byte_40F7A26 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SoundPlayerListViewItem___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SoundPlayerListViewItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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