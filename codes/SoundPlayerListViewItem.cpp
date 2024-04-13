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

  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.index = index;
  this->fields.bgmEntity = inputBgmEntity;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.itemIds, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.prices = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.prices, 0LL, v19, v20, v21, v22, v23, v24);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  struct BgmEntity_o *v25; // x8
  struct System_String_o *name; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Int32_array *v33; // x1
  System_Int32_array **v34; // x1
  const MethodInfo *v35; // x2
  struct BgmEntity_o *v36; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7988 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42E7988 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
      v25 = this->fields.bgmEntity;
      if ( !v25 || !Instance )
        goto LABEL_23;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &entity,
                                    v25->fields.shopId,
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_23;
        if ( LODWORD(entity->fields.emptyMessage) == 8 )
        {
          name = entity->fields.name;
          this->fields.itemIds = (struct System_Int32_array *)name;
          sub_B5D560(
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
          v33 = *(struct System_Int32_array **)&entity->fields.startType;
          this->fields.prices = v33;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.prices,
            (System_Int32_array **)v33,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          this->fields.openType = 1;
          this->fields._isShop_k__BackingField = 1;
        }
      }
    }
    v34 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.notOpenStr = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.notOpenStr, v34, v2, v3, v4, v5, v6, v7);
    if ( this->fields.openType == 2 )
      return;
    v36 = this->fields.bgmEntity;
    if ( v36 )
    {
      if ( SoundPlayerListViewItem__isBgmLock_23429508(v36->fields.id, &this->fields.notOpenStr, v35) )
        this->fields.openType = 2;
      return;
    }
LABEL_23:
    sub_B5D69C(Instance, v24);
  }
}


void __fastcall SoundPlayerListViewItem__applyUi(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewObject_o *viewObject; // x8
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_42E7987 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundPlayerListViewObject_TypeInfo, v5, v6, v7);
    byte_42E7987 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v9 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v9 - 1] == SoundPlayerListViewObject_TypeInfo )
      v10 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !v10
      || (monitor = (SoundPlayerListViewItemDraw_o *)v10[5].monitor) == 0LL
      || (SoundPlayerListViewItemDraw__apllyDisp(monitor, this, v13),
          (monitor = (SoundPlayerListViewItemDraw_o *)v10[5].monitor) == 0LL) )
    {
      sub_B5D69C(monitor, v12);
    }
    SoundPlayerListViewItemDraw__applyUi(monitor, this, v14);
  }
}


void __fastcall SoundPlayerListViewItem__attachPlayEffect(SoundPlayerListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewObject_o *viewObject; // x8
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x20
  SoundPlayerListViewItemDraw_o *monitor; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E7986 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundPlayerListViewObject_TypeInfo, v5, v6, v7);
    byte_42E7986 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v9 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v9 - 1] == SoundPlayerListViewObject_TypeInfo )
      v10 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) == 0 )
  {
    if ( !v10 || (monitor = (SoundPlayerListViewItemDraw_o *)v10[5].monitor) == 0LL )
      sub_B5D69C(monitor, v12);
    SoundPlayerListViewItemDraw__attachPlayEffect(monitor, this, v13);
  }
}


System_String_o *__fastcall SoundPlayerListViewItem__getBgmCueName(
        SoundPlayerListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_fileName; // x8

  if ( (byte_42E798D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E798D = 1;
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
  int v2; // w2
  __int64 v3; // x3
  struct BgmEntity_o *bgmEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_42E798C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E798C = 1;
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
  __int64 v3; // x3
  System_String_o *closedMessage; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7989 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7989 = 1;
  }
  closedMessage = (System_String_o *)StringLiteral_1/*""*/;
  return SoundPlayerListViewItem__isBgmLock_23429508(bgmId, &closedMessage, v2);
}


bool __fastcall SoundPlayerListViewItem__isBgmLock_23429508(
        int32_t bgmId,
        System_String_o **closedMessage,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  void *Instance; // x0
  __int64 v102; // x1
  BgmReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // x20
  BgmReleaseEntity_array *Entitys; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v106; // x21
  const MethodInfo *v107; // x2
  __int64 v108; // x19
  il2cpp_array_size_t v109; // w27
  BgmReleaseEntity_o *v110; // x23
  int32_t type; // w24
  char v112; // w24
  int32_t priority; // w25
  SoundPlayerListViewItem_BgmPriorityData_o *v114; // x26
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int32_t condGroup; // w26
  SoundPlayerListViewItem_BgmPriorityData_o *v117; // x25
  const MethodInfo *v118; // x4
  __int64 v119; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x23
  System_Collections_Generic_List_int__o *v121; // x22
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__37_0; // x23
  Il2CppObject *v124; // x24
  struct SoundPlayerListViewItem___c_StaticFields *v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o *v132; // x0
  __int64 v133; // x1
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *squareData; // x22
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v135; // x23
  System_Collections_Generic_List_int__o *v136; // x24
  System_Collections_Generic_List_int__o *v137; // x23
  __int64 v138; // x0
  __int64 v139; // x1
  int v140; // w28
  WarBoardEvalValueSquare_EvalValueSquare_o *v141; // x0
  __int64 v142; // x1
  char v143; // w26
  int v144; // w8
  _BOOL8 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x24
  _BOOL8 v148; // x0
  __int64 v149; // x1
  int32_t v150; // w1
  const MethodInfo *v151; // x4
  int v152; // w8
  int v153; // w8
  char v154; // w23
  int v155; // w8
  int v156; // w9
  bool result; // w0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v159; // [xsp+8h] [xbp-F8h]
  SoundPlayerListViewItem_BgmReleaseData_o v160; // [xsp+10h] [xbp-F0h] BYREF
  __int128 v161; // [xsp+20h] [xbp-E0h]
  _DWORD v162[5]; // [xsp+30h] [xbp-D0h]
  int v163; // [xsp+44h] [xbp-BCh]
  WarEntity_o *entity; // [xsp+48h] [xbp-B8h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v165; // [xsp+50h] [xbp-B0h] BYREF
  __int128 v166; // [xsp+60h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v167; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v168; // [xsp+90h] [xbp-70h] BYREF
  SoundPlayerListViewItem_BgmReleaseData_o v169; // 0:x0.16

  if ( (byte_42E798A & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerListViewItem_BgmPriorityData_TypeInfo, (_DWORD)closedMessage, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ClosedMessageMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__,
      v41,
      v42,
      v43);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo,
      v44,
      v45,
      v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v47, v48, v49);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__,
      v50,
      v51,
      v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v53, v54, v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v59, v60, v61);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__get_Current__,
      v62,
      v63,
      v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v71, v72, v73);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__,
      v74,
      v75,
      v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort___68740352, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v80, v81, v82);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v83, v84, v85);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v86, v87, v88);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v89, v90, v91);
    sub_B5D5C4(&SoundPlayerComponent_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__, v95, v96, v97);
    sub_B5D5C4(&SoundPlayerListViewItem___c_TypeInfo, v98, v99, v100);
    byte_42E798A = 1;
  }
  memset(&v168, 0, sizeof(v168));
  v166 = 0u;
  memset(&v167, 0, sizeof(v167));
  v165 = (SoundPlayerListViewItem_BgmReleaseData_o)0;
  entity = 0LL;
  v163 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (BgmReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_73;
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Entitys = BgmReleaseMaster__getEntitys(MasterData_WarQuestSelectionMaster, bgmId, 0LL);
  v106 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v106,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___ctor__);
  if ( !Entitys )
    goto LABEL_73;
  v108 = *(_QWORD *)&Entitys->max_length;
  v159 = v106;
  if ( (int)v108 >= 1 )
  {
    v109 = 0;
    while ( 1 )
    {
      v110 = Entitys->m_Items[v109];
      if ( !v110 )
        break;
      if ( v110->fields.targetIds )
      {
        type = v110->fields.type;
        if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
        }
        Instance = (void *)SoundPlayerComponent__checkOpen(v110, type, v107);
        if ( !v106 )
          break;
        v112 = (char)Instance;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v106,
                v110->fields.priority,
                (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__ContainsKey__) )
        {
          priority = v110->fields.priority;
          v114 = (SoundPlayerListViewItem_BgmPriorityData_o *)sub_B5D694(SoundPlayerListViewItem_BgmPriorityData_TypeInfo);
          SoundPlayerListViewItem_BgmPriorityData___ctor(v114, 0LL);
          v106 = v159;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v159,
            priority,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v114,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__Add__);
        }
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v106,
                 v110->fields.priority,
                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
        condGroup = v110->fields.condGroup;
        v117 = (SoundPlayerListViewItem_BgmPriorityData_o *)Item;
        v169.fields.bgmReleaseEntity = (struct BgmReleaseEntity_o *)(v112 & 1);
        *(_QWORD *)&v169.fields.releaseCheck = &v160;
        v160 = (SoundPlayerListViewItem_BgmReleaseData_o)0LL;
        SoundPlayerListViewItem_BgmReleaseData___ctor(v169, (bool)v110, 0LL, v118);
        if ( !v117 )
          break;
        SoundPlayerListViewItem_BgmPriorityData__AddBgmReleaseData(v117, condGroup, v160, 0LL);
        v106 = v159;
      }
      if ( (int)++v109 >= (int)v108 )
        goto LABEL_22;
      if ( v109 >= Entitys->max_length )
      {
        v119 = sub_B5D6C8(Instance);
        sub_B5D668(v119, 0LL);
      }
    }
LABEL_73:
    sub_B5D69C(Instance, v102);
  }
LABEL_22:
  if ( !v106 )
    goto LABEL_73;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v106,
           (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Keys__);
  v121 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v121,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
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
    v124 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__37_0,
      v124,
      Method_SoundPlayerListViewItem___c__isBgmLock_b__37_0__,
      (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
    v125 = SoundPlayerListViewItem___c_TypeInfo->static_fields;
    v125->__9__37_0 = _9__37_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v125->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v126,
      v127,
      v128,
      v129,
      v130,
      v131);
  }
  if ( !v121 )
    goto LABEL_73;
  System_Collections_Generic_List_int___Sort_50881704(
    v121,
    (System_Comparison_T__o *)_9__37_0,
    (const MethodInfo_30864A8 *)Method_System_Collections_Generic_List_int__Sort___68740352);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v160,
    v121,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_QWORD *)&v168.fields.current = v161;
  *(SoundPlayerListViewItem_BgmReleaseData_o *)&v168.fields.list = v160;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v168,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v132 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             v159,
             v168.fields.current,
             (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__get_Item__);
    if ( !v132 )
      sub_B5D69C(0LL, v133);
    squareData = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v132->fields.squareData;
    if ( squareData
      && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v132->fields.squareData,
           (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Count__) >= 1 )
    {
      v135 = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
               squareData,
               (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Keys__);
      v136 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor_50870440(
        v136,
        (System_Collections_Generic_IEnumerable_T__o *)v135,
        (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
      v137 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v137,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      if ( !v136 )
        sub_B5D69C(v138, v139);
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v160,
        v136,
        (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v140 = 0;
      *(_QWORD *)&v167.fields.current = v161;
      *(SoundPlayerListViewItem_BgmReleaseData_o *)&v167.fields.list = v160;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v167,
                (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        v141 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)squareData,
                 v167.fields.current,
                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__);
        if ( !v141 )
          sub_B5D69C(0LL, v142);
        System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v160,
          (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)v141,
          (const MethodInfo_2FD72BC *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__GetEnumerator__);
        v143 = 0;
        v144 = v140;
        v165 = v160;
        v166 = v161;
LABEL_42:
        v140 = v144;
        while ( 1 )
        {
          v145 = System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___MoveNext(
                   (System_Collections_Generic_List_Enumerator_T__o *)&v165,
                   (const MethodInfo_22ED4A0 *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__MoveNext__);
          if ( !v145 )
            break;
          if ( !(_BYTE)v166 )
          {
            v147 = *((_QWORD *)&v166 + 1);
            if ( !*((_QWORD *)&v166 + 1) )
              sub_B5D69C(v145, v146);
            if ( !v104 )
              sub_B5D69C(v145, v146);
            v148 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     v104,
                     &entity,
                     *(_DWORD *)(*((_QWORD *)&v166 + 1) + 52LL),
                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
            v143 = 1;
            if ( v148 )
            {
              if ( !v137 )
                sub_B5D69C(v148, v149);
              v143 = 1;
              if ( !System_Collections_Generic_List_int___Contains(
                      v137,
                      *(_DWORD *)(v147 + 52),
                      (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
              {
                SoundPlayerListViewItem__setNotOpenStr(
                  (ClosedMessageEntity_o *)entity,
                  v150,
                  v140 & 1,
                  closedMessage,
                  v151);
                v143 = 1;
                System_Collections_Generic_List_int___Add(
                  v137,
                  *(_DWORD *)(v147 + 52),
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                v144 = 1;
                goto LABEL_42;
              }
            }
          }
        }
        v162[v163++] = 460;
        System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v165,
          (const MethodInfo_22ED49C *)Method_System_Collections_Generic_List_Enumerator_SoundPlayerListViewItem_BgmReleaseData__Dispose__);
        v152 = v163;
        if ( v163 && v162[v163 - 1] == 460 )
          v152 = --v163;
        if ( (v143 & 1) == 0 )
        {
          v162[v152] = 497;
          v153 = v163;
          v154 = 1;
          goto LABEL_60;
        }
      }
      v154 = 0;
      v162[v163] = 497;
      v153 = v163;
LABEL_60:
      v163 = v153 + 1;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v167,
        (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v155 = v163;
      if ( v163 && v162[v163 - 1] == 497 )
        v155 = --v163;
      if ( (v154 & 1) == 0 )
      {
        v162[v155] = 536;
        ++v163;
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v168,
          (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        result = 1;
        goto LABEL_67;
      }
    }
  }
  v162[v163++] = 534;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v168,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  result = 0;
LABEL_67:
  if ( !v163 )
    return 0;
  v156 = v162[v163 - 1];
  if ( v156 == 534 )
  {
    result = 0;
  }
  else if ( v156 != 536 )
  {
    return 0;
  }
  --v163;
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

  if ( (byte_42E798B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, kind, isNewLine, closedMessage);
    byte_42E798B = 1;
  }
  if ( closedMesEntity )
  {
    if ( isNewLine )
    {
      v8 = System_String__Concat_44577788(*closedMessage, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      *closedMessage = v8;
      sub_B5D560((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    }
    v15 = System_String__Concat_44577788(*closedMessage, closedMesEntity->fields.message, 0LL);
    *closedMessage = v15;
    sub_B5D560((BattleServantConfConponent_o *)closedMessage, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ListViewObject_o *viewObject; // x8
  __int64 v13; // x11
  UnityEngine_Object_o *v14; // x21
  SoundPlayerListViewItemDraw_o *v15; // x0
  SoundPlayerListViewManager_o *v16; // x1
  const MethodInfo *v17; // x4
  void *monitor; // x8
  __int64 v19; // x11

  if ( (byte_42E7985 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)endCallback, (_DWORD)method, v3);
    sub_B5D5C4(&SoundPlayerListViewManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundPlayerListViewObject_TypeInfo, v9, v10, v11);
    byte_42E7985 = 1;
  }
  viewObject = this->fields.viewObject;
  if ( viewObject
    && (v13 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&viewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (SoundPlayerListViewObject_c *)viewObject->klass->_2.typeHierarchy[v13 - 1] == SoundPlayerListViewObject_TypeInfo )
      v14 = (UnityEngine_Object_o *)this->fields.viewObject;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = (SoundPlayerListViewItemDraw_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    if ( !v14
      || ((monitor = v14[1].monitor) != 0LL
       && (v19 = *(&SoundPlayerListViewManager_TypeInfo->_2.bitflags2 + 1),
           *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v19)
        ? (*(SoundPlayerListViewManager_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v19 - 8) != SoundPlayerListViewManager_TypeInfo
         ? (v16 = 0LL)
         : (v16 = (SoundPlayerListViewManager_o *)v14[1].monitor))
        : (v16 = 0LL),
          (v15 = (SoundPlayerListViewItemDraw_o *)v14[5].monitor) == 0LL) )
    {
      sub_B5D69C(v15, v16);
    }
    SoundPlayerListViewItemDraw__startOpenAnim(v15, v16, this, endCallback, v17);
  }
}


void __fastcall SoundPlayerListViewItem_BgmPriorityData___ctor(
        SoundPlayerListViewItem_BgmPriorityData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20

  if ( (byte_42E6408 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo,
      v5,
      v6,
      v7);
    byte_42E6408 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData____ctor__);
  this->fields.collectList = (struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *)v8;
  sub_B5D560(&this->fields);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *collectList; // x0
  struct System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___o *v24; // x23
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *v25; // x24
  SoundPlayerListViewItem_BgmReleaseData_o v26; // 0:x1.16

  bgmReleaseEntity = data.fields.bgmReleaseEntity;
  v5 = *(_QWORD *)&data.fields.releaseCheck;
  if ( (byte_42E6407 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__,
      condGroup,
      *(_DWORD *)&data.fields.releaseCheck,
      data.fields.bgmReleaseEntity);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo, v20, v21, v22);
    byte_42E6407 = 1;
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          collectList,
          condGroup,
          (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___ContainsKey__) )
  {
    v24 = this->fields.collectList;
    v25 = (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)sub_B5D694(System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__TypeInfo);
    System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData____ctor(
      v25,
      (const MethodInfo_2FD565C *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___ctor__);
    if ( !v24 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v24,
      condGroup,
      (WarBoardAIRoute_RouteData_o *)v25,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___set_Item__);
  }
  collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.collectList;
  if ( !collectList
    || (collectList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)collectList,
                                                                                                   condGroup,
                                                                                                   (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_SoundPlayerListViewItem_BgmReleaseData___get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(collectList, *(_QWORD *)&condGroup);
  }
  *(_QWORD *)&v26.fields.releaseCheck = v5;
  v26.fields.bgmReleaseEntity = bgmReleaseEntity;
  System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData___Add(
    (System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__o *)collectList,
    v26,
    (const MethodInfo_2FD63EC *)Method_System_Collections_Generic_List_SoundPlayerListViewItem_BgmReleaseData__Add__);
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
  sub_B5D560(v4);
}


void __fastcall SoundPlayerListViewItem___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SoundPlayerListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E6406 & 1) == 0 )
  {
    sub_B5D5C4(&SoundPlayerListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E6406 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SoundPlayerListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SoundPlayerListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SoundPlayerListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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