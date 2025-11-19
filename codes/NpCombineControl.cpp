void NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CBA373 & 1) == 0 )
  {
    sub_1C6BA08(&CombineMenuControl_TypeInfo);
    byte_4CBA373 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool NpCombineControl__CheckConfirm(int64_t myUserSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CBA36E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA36E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_48868436((UserServantEntity_o *)Entity, v6);
}


bool NpCombineControl__CheckConfirm_48868436(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
{
  UserServantEntity_o *v2; // x19
  int64_t hiddenValue; // x8
  int v4; // w9
  int v5; // w10

  if ( !selectUsrSvtEnt )
    goto LABEL_17;
  v2 = selectUsrSvtEnt;
  if ( selectUsrSvtEnt->fields.exp > 0
    || selectUsrSvtEnt->fields.skillLv1 > 1
    || selectUsrSvtEnt->fields.skillLv2 > 1
    || selectUsrSvtEnt->fields.skillLv3 > 1 )
  {
    return 1;
  }
  selectUsrSvtEnt = (UserServantEntity_o *)UserServantEntity__getAppendSkillInfo(selectUsrSvtEnt, 0);
  if ( !selectUsrSvtEnt || (hiddenValue = selectUsrSvtEnt->fields.id.fields.hiddenValue) == 0 )
LABEL_17:
    sub_1C6BC60(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        sub_1C6BC68(selectUsrSvtEnt);
      if ( *(int *)(hiddenValue + 4LL * v5 + 32) >= 2 )
        return 1;
    }
    while ( v4 != ++v5 );
  }
  if ( v2->fields.adjustAtk > 0 || v2->fields.adjustHp > 0 )
    return 1;
  return v2->fields.treasureDeviceLv1 > 1;
}


bool NpCombineControl__CheckTdLvMax(NpCombineControl_o *this, UserServantEntity_o *resData, const MethodInfo *method)
{
  NpCombineControl_o *v4; // x20
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t currentId; // w21

  v4 = this;
  if ( (byte_4CBA369 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    this = (NpCombineControl_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA369 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0)) == 0
    || !resData )
  {
    sub_1C6BC60(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.baseUserServantEntity);
}


void NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array *assetList; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CBA365 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA365 = 1;
  }
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_18;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0);
  if ( !wrapContent )
    goto LABEL_18;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        break;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0);
      if ( !wrapContent )
        break;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)wrapContent,
                                                 v5 - 2,
                                                 0);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71659864(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1C6BC60(wrapContent, method);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40774692(assetList, 0);
    this->fields.assetList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetList, 0, v8, v9);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x8
  int v8; // w9

  if ( (byte_4CBA366 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA366 = 1;
  }
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_16;
  materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(materialGrid, 0);
  if ( !materialGrid )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)materialGrid, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
      if ( !materialGrid )
        break;
      materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(materialGrid, 0);
      if ( !materialGrid )
        break;
      materialGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)materialGrid,
                                                  v5 - 2,
                                                  0);
      if ( !materialGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(materialGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1C6BC60(materialGrid, method);
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
  {
    v8 = selectMtUsrSvtIdList->fields._version + 1;
    selectMtUsrSvtIdList->fields._size = 0;
    selectMtUsrSvtIdList->fields._version = v8;
  }
}


UserServantEntity_o *NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  CGThumbnailListItem_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4CBA364 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (NpCombineControl_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA364 = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (CGThumbnailListItem_o *)&v2->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v12, 0);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C6BC60(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (CGThumbnailListItem_c *)Entity;
  sub_1C6B9AC(p_baseUserServantEntity, (int32_t)Entity, v9, v10);
  return (UserServantEntity_o *)Entity;
}


// local variable allocation has failed, the output may be wrong!
int32_t NpCombineControl__GetLimitCountForMulti(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        int32_t condLimitCount,
        int32_t index,
        bool fixedFlag,
        const MethodInfo *method)
{
  long double v7; // q0
  __int64 v13; // x0
  Il2CppObject *MasterData_object; // x0
  int v15; // w25
  bool v16; // cc
  int v17; // w24
  DataManager_o *v18; // x21
  int32_t v19; // w26
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x23
  int32_t v21; // w22
  DataManager_o *v22; // x27
  _BOOL4 v23; // w8
  DataManager_o *v24; // x20

  if ( (byte_4CBA360 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CBA360 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C41A9C(v7);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (BYTE5(MasterData_object[19].klass) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_1C41A9C(v7);
  v15 = condLimitCount - 1;
  v16 = index < 1;
  if ( index >= 1 )
    v17 = -1;
  else
    v17 = condLimitCount - 1;
  v18 = *(DataManager_o **)MasterData_object[11].monitor;
  if ( v16 )
    v19 = -1;
  else
    v19 = condLimitCount;
  if ( !v18 )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        v18,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_36;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         (ServantTreasureDeviceReleaseMaster_o *)MasterData_object,
                         svtId,
                         0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  MasterData_object = (Il2CppObject *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0);
  v21 = (int)MasterData_object;
  if ( v19 >= 0 && (_DWORD)MasterData_object != v19 && fixedFlag )
    v22 = v18;
  else
    v22 = 0;
  if ( v19 >= 0 && (_DWORD)MasterData_object != v19 && fixedFlag )
  {
    if ( (int)MasterData_object < 11 )
      goto LABEL_24;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          (int32_t)MasterData_object,
                                          (const MethodInfo_36B16B0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v18 = v22;
    if ( ((unsigned __int8)MasterData_object & 1) == 0 )
LABEL_24:
      v21 = v19;
  }
  v23 = v17 >= 0 && v21 > v17 && fixedFlag;
  if ( v17 >= 0 && v21 > v17 && fixedFlag )
    v24 = v18;
  else
    v24 = 0;
  if ( v23 )
  {
    if ( v21 < 11 )
      goto LABEL_32;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          v21,
                                          (const MethodInfo_36B16B0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v18 = v24;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
LABEL_32:
      v21 = v15;
  }
  if ( !v18
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v18,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
LABEL_36:
    sub_1C6BC60(MasterData_object, *(_QWORD *)&svtId);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           v21,
           0);
}


int32_t NpCombineControl__GetLimitCountForSingle(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  long double v8; // q0
  __int64 v9; // x8
  __int64 v10; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4CBA35F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CBA35F = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(v8);
  MasterData_object = **(Il2CppObject ***)(v10 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, v6);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           LimitCountByImageLimitCostumeIn,
           0);
}


System_Collections_Generic_List_SvtUseNpData__o *NpCombineControl__GetNpAddDataList(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        TreasureDvcInfo_o *tdInfo,
        ServantTreasureDeviceAddEntity_o *tdAddEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 v9; // x1
  long double v10; // q0
  __int64 v11; // x0
  __int64 v12; // x0
  DataManager_o *MasterData_object; // x0
  TreasureDvcMaster_o *v14; // x19
  System_Int32_array *FixedCardLimitCounts; // x27
  __int64 v16; // x20
  struct System_Int32_array *treasureDeviceIds; // x8
  unsigned __int64 v18; // x24
  int32_t v19; // w26
  __int64 v20; // x23
  __int64 v21; // x25
  DataManager_o *v22; // x27
  TreasureDvcInfo_o *v23; // x23
  int32_t v24; // w0
  struct System_Int32_array *hideCardChara; // x8
  int *p_saveNameList; // x9
  TreasureDvcMaster_o *v27; // x28
  TreasureDvcInfo_o *v28; // x19
  int32_t v29; // w23
  __int64 v30; // x25
  __int64 v31; // x23
  __int64 v32; // x29
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  TreasureDvcInfo_o *v35; // x26
  __int64 v36; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t DispLimitCount; // w23
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x6
  char v45; // w5
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x8
  System_Int32_array *v54; // [xsp+8h] [xbp-98h]
  ServantTreasureDeviceAddEntity_o *v55; // [xsp+10h] [xbp-90h]
  int32_t *p_cardId; // [xsp+18h] [xbp-88h]
  int v57; // [xsp+20h] [xbp-80h]
  bool v58; // [xsp+24h] [xbp-7Ch]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4CBA35E & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&SvtUseNpData_TypeInfo);
    byte_4CBA35E = 1;
  }
  tdExplanation = 0;
  tdName = 0;
  *(_QWORD *)tdGuageCount = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C41A9C(v10);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C41A9C(v10);
  MasterData_object = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_object )
    goto LABEL_41;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_41;
  v14 = (TreasureDvcMaster_o *)MasterData_object;
  FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(tdAddEntity, 0);
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                         (const MethodInfo_315B034 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v16 = 8;
    v55 = tdAddEntity;
    p_cardId = &tdInfo->fields.cardId;
    v54 = FixedCardLimitCounts;
    while ( 1 )
    {
      treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      v18 = v16 - 8;
      if ( v16 - 8 >= (unsigned __int64)LODWORD(treasureDeviceIds->max_length) )
        goto LABEL_42;
      if ( !usrSvtData )
        break;
      v19 = *((_DWORD *)&treasureDeviceIds->obj.klass + v16);
      v21 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v62.fields.currentCryptoKey = v21;
      *(_QWORD *)&v62.fields.fakeValue = v20;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v62, 0);
      if ( !v14 )
        break;
      MasterData_object = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                             v14,
                                             (int32_t)MasterData_object,
                                             v19,
                                             0);
      if ( !tdInfo )
        break;
      v22 = MasterData_object;
      if ( !MasterData_object )
        break;
      v23 = tdInfo;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        tdInfo->fields.lv,
        0);
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(usrSvtData->fields.svtId, 0);
      MasterData_object = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v24, v19, 0);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_saveNameList = (int *)&MasterData_object->fields.saveNameList;
      if ( !MasterData_object )
        p_saveNameList = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v18 >= LODWORD(hideCardChara->max_length) )
        goto LABEL_42;
      v27 = v14;
      v28 = v23;
      v57 = *p_saveNameList;
      v29 = *((_DWORD *)&hideCardChara->obj.klass + v16);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v58 = System_Convert__ToBoolean_65045288(v29, 0);
      v30 = sub_1C6BC54(SvtUseNpData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v30, 0);
      v31 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = v31;
      *(_QWORD *)&v63.fields.fakeValue = v32;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v63, 0);
      if ( !v30 )
        break;
      *(_DWORD *)(v30 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v30 + 20) = v19;
      v35 = v28;
      *(_QWORD *)(v30 + 24) = *(_QWORD *)&v28->fields.id;
      v36 = *(_QWORD *)&v22->fields._DispLog;
      *(_QWORD *)(v30 + 32) = v36;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 32), v36, v33, v34);
      m_CancellationTokenSource = v22->fields.m_CancellationTokenSource;
      *(_QWORD *)(v30 + 40) = m_CancellationTokenSource;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 40), (int32_t)m_CancellationTokenSource, v38, v39);
      *(_DWORD *)(v30 + 48) = v57;
      *(_DWORD *)(v30 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v30 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0);
      v41 = (int)tdExplanation;
      *(_QWORD *)(v30 + 56) = tdExplanation;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 56), v41, v42, v43);
      v45 = 1;
      *(_BYTE *)(v30 + 64) = v58;
      *(_BYTE *)(v30 + 65) = 1;
      if ( v54 )
      {
        tdAddEntity = v55;
        if ( v18 >= LODWORD(v54->max_length) )
LABEL_42:
          sub_1C6BC68(MasterData_object);
        v14 = v27;
        v45 = *((_DWORD *)&v54->obj.klass + v16) != 0;
      }
      else
      {
        tdAddEntity = v55;
        v14 = v27;
      }
      tdInfo = v35;
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             (NpCombineControl_o *)MasterData_object,
                                             *(_DWORD *)(v30 + 16),
                                             *(_DWORD *)(v30 + 72),
                                             tdAddEntity->fields.condLimitCount,
                                             v16 - 8,
                                             v45,
                                             v44);
      *(_DWORD *)(v30 + 68) = (_DWORD)MasterData_object;
      if ( !v8 )
        break;
      items = v8->fields._items;
      v49 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v30,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v30;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v51 + 4), v30, v46, v47);
      }
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                             (const MethodInfo_315B034 *)Method_System_Linq_Enumerable_Count_int___);
      v52 = v16 - 7;
      ++v16;
      if ( v52 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v8;
    }
LABEL_41:
    sub_1C6BC60(MasterData_object, v9);
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v8;
}


int32_t NpCombineControl__GetNpLv(
        UserServantEntity_o *baseUsrSvtData,
        System_Int64_array *mtSvtIdList,
        int32_t *tmpTargetLv,
        const MethodInfo *method)
{
  System_Int64_array *v5; // x21
  UserServantEntity_o *v6; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  int64_t v9; // x22
  UserServantEntity_o *v10; // x22
  int32_t treasureDeviceLv1; // w8
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-58h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_4CBA36C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseUsrSvtData = (UserServantEntity_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA36C = 1;
  }
  *(_QWORD *)tdMaxLv = 0;
  *tmpTargetLv = 0;
  if ( !v5 )
    goto LABEL_17;
  max_length = v5->max_length;
  if ( (int)max_length < 1 )
  {
    mtSvtIdList = 0;
    if ( v6 )
      return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0);
LABEL_17:
    sub_1C6BC60(baseUsrSvtData, mtSvtIdList);
  }
  v8 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C6BC68(baseUsrSvtData);
    v9 = v5->m_Items[v8];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v9,
                                              (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    v10 = baseUsrSvtData;
    baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__IsMaterialTd(baseUsrSvtData, 0);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      treasureDeviceLv1 = v10->fields.treasureDeviceLv1;
      tdMaxLv[1] = treasureDeviceLv1;
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_43421032(
                                                v10,
                                                &tdMaxLv[1],
                                                tdMaxLv,
                                                0);
      treasureDeviceLv1 = tdMaxLv[1];
    }
    ++v8;
    mtSvtIdList = (System_Int64_array *)(unsigned int)(treasureDeviceLv1 + *tmpTargetLv);
    *tmpTargetLv = (int)mtSvtIdList;
    LODWORD(max_length) = v5->max_length;
  }
  while ( (__int64)v8 < (int)max_length );
  if ( !v6 )
    goto LABEL_17;
  return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0);
}


int32_t NpCombineControl__GetQp(int32_t currentId, int32_t currentLv, int32_t resNpLv, const MethodInfo *method)
{
  int32_t v7; // w22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  TreasureDvcLvEntity_o *Entity; // x0

  if ( (byte_4CBA36D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA36D = 1;
  }
  if ( currentLv >= resNpLv )
    return 0;
  v7 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
    {
      sub_1C6BC60(Instance, v9);
    }
    Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, currentId, currentLv, 0);
    if ( Entity )
      v7 += Entity->fields.qp;
    ++currentLv;
  }
  while ( resNpLv != currentLv );
  return v7;
}


System_Collections_Generic_List_SvtUseNpData__o *NpCombineControl__GetSvtNpData(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 MasterData_object; // x0
  DataManager_o *v8; // x21
  ServantTreasureDeviceAddMaster_o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x22
  int32_t TransformCount; // w0
  __int64 v15; // x21
  __int64 v16; // x23
  int32_t v17; // w0
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_object__o *v19; // x21
  Il2CppObject *v20; // x22
  int32_t v21; // w23
  int32_t TransformedServantId; // w25
  __int64 v23; // x26
  int32_t *p_cardId; // x8
  int32_t v25; // w29
  __int64 v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int v29; // w8
  __int64 v30; // x1
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t DispLimitCount; // w25
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  NpCombineControl_o *v40; // x0
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-88h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-78h] BYREF
  TreasureDvcInfo_o *v52; // [xsp+20h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4CBA35D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&SvtUseNpData_TypeInfo);
    byte_4CBA35D = 1;
  }
  v52 = 0;
  tdInfo = 0;
  tdName = 0;
  tdExplanation = 0;
  *(_QWORD *)tdGuageCount = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(v3);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C41A9C(v3);
  v8 = **(DataManager_o ***)(MasterData_object + 184);
  if ( !v8 )
    goto LABEL_38;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 v8,
                                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_38;
  v9 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v11;
  *(_QWORD *)&v54.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v54, 0);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                        usrSvtData->fields.limitCount,
                        0);
  if ( !v9 )
    goto LABEL_38;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v9, v12, MasterData_object, 0, 0, 0, 0);
  TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0);
  if ( !EnableEntity )
  {
    v20 = DataManager__GetMasterData_object_(
            v8,
            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v19 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal < 1 )
      return (System_Collections_Generic_List_SvtUseNpData__o *)v19;
    v21 = 0;
    while ( 1 )
    {
      MasterData_object = (__int64)this->fields.baseUserServantEntity;
      if ( !MasterData_object )
        break;
      TransformedServantId = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)MasterData_object,
                               v21,
                               0);
      MasterData_object = UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                            usrSvtData,
                            &v52,
                            v21,
                            -1,
                            -1,
                            0,
                            0);
      if ( !v52 )
        break;
      if ( !v20 )
        break;
      MasterData_object = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)v20,
                                     TransformedServantId,
                                     v52->fields.id,
                                     0);
      if ( !v52 )
        break;
      v23 = MasterData_object;
      if ( !MasterData_object )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v52->fields.lv,
        0);
      MasterData_object = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(
                                     TransformedServantId,
                                     *(_DWORD *)(v23 + 16),
                                     0);
      if ( MasterData_object )
      {
        p_cardId = (int32_t *)(MasterData_object + 64);
      }
      else
      {
        if ( !v52 )
          break;
        p_cardId = &v52->fields.cardId;
      }
      v25 = *p_cardId;
      v26 = sub_1C6BC54(SvtUseNpData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v26, 0);
      if ( !v26 )
        break;
      *(_DWORD *)(v26 + 16) = TransformedServantId;
      v29 = *(_DWORD *)(v23 + 16);
      *(_DWORD *)(v26 + 20) = v29;
      *(_DWORD *)(v26 + 24) = v29;
      if ( !v52 )
        break;
      *(_DWORD *)(v26 + 28) = v52->fields.lv;
      v30 = *(_QWORD *)(v23 + 32);
      *(_QWORD *)(v26 + 32) = v30;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 32), v30, v27, v28);
      v31 = *(_QWORD *)(v23 + 24);
      *(_QWORD *)(v26 + 40) = v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 40), v31, v32, v33);
      *(_DWORD *)(v26 + 48) = v25;
      *(_DWORD *)(v26 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v26 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0);
      v35 = (int)tdExplanation;
      *(_QWORD *)(v26 + 56) = tdExplanation;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 56), v35, v36, v37);
      *(_BYTE *)(v26 + 64) = 0;
      v38 = *(_DWORD *)(v26 + 16);
      v39 = *(_DWORD *)(v26 + 72);
      *(_BYTE *)(v26 + 65) = this->fields.transformTotal > 1;
      MasterData_object = NpCombineControl__GetLimitCountForSingle(v40, v38, v39, v41);
      *(_DWORD *)(v26 + 68) = MasterData_object;
      if ( !v19 )
        break;
      items = v19->fields._items;
      v45 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v19->fields._version;
      if ( !items )
        break;
      size = v19->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v26,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v47 + 4), v26, v42, v43);
      }
      if ( ++v21 >= this->fields.transformTotal )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v19;
    }
LABEL_38:
    sub_1C6BC60(MasterData_object, usrSvtData);
  }
  UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0);
  v16 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v16;
  *(_QWORD *)&v55.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v55, 0);
  EventTutorialMaster__CheckTutorial(-1, 69, 0, v17, 0, 0, 0, 0);
  return NpCombineControl__GetNpAddDataList(this, usrSvtData, tdInfo, EnableEntity, v18);
}


SetLevelUpData_o *NpCombineControl__GetTargetData(NpCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.lvUpData;
}


int32_t NpCombineControl__GetTutorialOpenType(NpCombineControl_o *this, const MethodInfo *method)
{
  return 39;
}


void NpCombineControl__InitDispCombineInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *currentInfoLb; // x0
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBA35A & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_858/*"-"*/);
    sub_1C6BA08(&StringLiteral_9235/*"NEED_QP_INFO"*/);
    byte_4CBA35A = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  currentInfoLb = (UILabel_o *)this->fields.maxLvStatusInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_17;
  UILabel__set_text(needQpLb, (System_String_o *)currentInfoLb, 0);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  currentInfoLb = (UILabel_o *)System_Int32__ToString((int)this + 400, 0);
  if ( !qpLb )
    goto LABEL_17;
  UILabel__set_text(qpLb, (System_String_o *)currentInfoLb, 0);
  currentInfoLb = this->fields.qpLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  v10.fields.r = 1.0;
  v10.fields.g = 1.0;
  v10.fields.b = 1.0;
  v10.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentInfoLb, v10, 0);
  NpCombineControl__SetHaveQpInfo(this, v6);
  NpCombineControl__SetSelectMaterialEnable(this, v7);
  currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0);
  currentInfoLb = (UILabel_o *)this->fields.arrowInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v8);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v9);
  currentInfoLb = (UILabel_o *)this->fields.switchButton;
  if ( !currentInfoLb
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0),
        (currentInfoLb = this->fields.servantName) == 0)
    || (currentInfoLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentInfoLb, 0)) == 0 )
  {
LABEL_17:
    sub_1C6BC60(currentInfoLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
}


void NpCombineControl__InitInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v7; // x1
  int64_t klass; // x8
  UILabel_o *preSelectBaseLb; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CBA358 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8803/*"MSG_PRESELECT_BASE_SVT"*/);
    byte_4CBA358 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v3);
  NpCombineControl__InitDispCombineInfo(this, v4);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v5);
  SelfUserGame = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_25;
  klass = (int64_t)SelfUserGame[4].klass;
  SelfUserGame = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  this->fields.userQP = klass;
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8803/*"MSG_PRESELECT_BASE_SVT"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_25;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)SelfUserGame, 0);
  SelfUserGame = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
  if ( !SelfUserGame )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_25;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v10, v11);
  v14 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v14 && v14->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      v14,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v15 )
        break;
      if ( !v18.fields._current )
        sub_1C6BC60(v15, v16);
      if ( *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&dword_14) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1C6BC60(v15, v16);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v15,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v18.fields._current->klass + (unsigned __int64)off_50),
          v17);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_1C6BC60(SelfUserGame, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
}


void NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *charaGraph; // x20
  CGThumbnailListItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CBA357 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA357 = 1;
  }
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  NpCombineControl__InitInfo(this, v5);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (CGThumbnailListItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_1C6B9AC(p_charaGraph, 0, v9, v10);
      return;
    }
LABEL_12:
    sub_1C6BC60(helpBtn, v3);
  }
}


void NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_4CBA370 & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    byte_4CBA370 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.eventNoticeImg;
}


void NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  int32_t childCount; // w0
  int32_t v11; // w20
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_4CBA371 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NpCombineControl_OnClickArrow__);
    byte_4CBA371 = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_15;
  currentMoveIdx = this->fields.currentMoveIdx;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0);
  if ( !wrapContent )
    goto LABEL_15;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0);
  v11 = childCount ? ((currentMoveIdx + delte) % childCount + childCount) % childCount : 0;
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  this->fields.currentMoveIdx = v11;
  if ( !wrapContent
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wrapContent, 1, 0),
        (wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent) == 0)
    || (centerChild = this->fields.centerChild,
        (wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0)) == 0)
    || (wrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)wrapContent,
                                                   v11,
                                                   0),
        !centerChild) )
  {
LABEL_15:
    sub_1C6BC60(wrapContent, v7);
  }
  UICenterOnChild__CenterOn_49450812(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0);
}


void NpCombineControl__OnClickExeCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4CBA368 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBA368 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v10,
    selectMtUsrSvtIdList,
    (const MethodInfo_37E947C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v11,
            (const MethodInfo_35839E4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v11.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C6BC60(0, v8);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v11,
    (const MethodInfo_35839E0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_1C6BC60(selectMtUsrSvtIdList, method);
  SetRarityDialogControl__SetNpCombineInfo(
    (SetRarityDialogControl_o *)selectMtUsrSvtIdList,
    this->fields.baseUserServantEntity,
    this->fields.selectMtUsrSvtIdList,
    this->fields.lvUpData,
    this->fields.isExceedMaxLv,
    this->fields.isCombineSvt,
    this->fields.isExceeded,
    0,
    0);
}


void NpCombineControl__OnClickMaterialSelectList(NpCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4CBA36B & 1) == 0 )
  {
    sub_1C6BA08(&Method_NpCombineControl_OnClickMaterialSelectList__);
    byte_4CBA36B = 1;
  }
  v3 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_NpCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C6BC60(0, v5);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0);
}


void NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  ServantNpInfoIconComponent_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x21
  float value; // s0
  UserServantEntity_o *baseUserServantEntity; // x21
  Il2CppObject *Item; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CBA372 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1C6BA08(&Method_NpCombineControl_OnClickSwitchButton__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA372 = 1;
  }
  transformInfo = 0;
  if ( this->fields.baseSvtId >= 1 )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
    {
      Component_object = this->fields.targetObject;
      if ( !Component_object )
        goto LABEL_22;
      Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       Component_object,
                                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
      if ( !this->fields.svtNpDataList )
        goto LABEL_22;
      v5 = (ServantNpInfoIconComponent_o *)Component_object;
      Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
      if ( !v5 )
        goto LABEL_22;
      v6 = Component_object;
      Component_object = (UnityEngine_GameObject_o *)ServantNpInfoIconComponent__get_TextScrollBar(v5, 0);
      if ( !Component_object )
        goto LABEL_22;
      value = UIProgressBar__get_value((UIProgressBar_o *)Component_object, 0);
      if ( !v6 )
        goto LABEL_22;
      *(float *)&v6[3].monitor = value;
      Component_object = (UnityEngine_GameObject_o *)this->fields.svtNpDataList;
      method = (const MethodInfo *)(unsigned int)((this->fields.displayTransformIndex + 1) % this->fields.transformTotal);
      this->fields.displayTransformIndex = (int)method;
      if ( !Component_object )
        goto LABEL_22;
      baseUserServantEntity = this->fields.baseUserServantEntity;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Component_object,
               (int32_t)method,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
      ServantNpInfoIconComponent__SetNpInfo(v5, baseUserServantEntity, 0, (SvtUseNpData_o *)Item, 1, 0.0, 0.0, 0);
    }
  }
  if ( this->fields.transformTotal <= 1 )
    goto LABEL_19;
  Component_object = (UnityEngine_GameObject_o *)this->fields.baseUserServantEntity;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                         (UserServantEntity_o *)Component_object,
                                                         &transformInfo,
                                                         this->fields.displayTransformIndex,
                                                         0),
        !transformInfo)
    || (Component_object = (UnityEngine_GameObject_o *)this->fields.servantName) == 0 )
  {
LABEL_22:
    sub_1C6BC60(Component_object, method);
  }
  UILabel__set_text((UILabel_o *)Component_object, transformInfo->fields.titleText, 0);
LABEL_19:
  v10 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C6BA20(Method_NpCombineControl_OnClickSwitchButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
}


void NpCombineControl__RefreshSvtNpCombineEndShowServant(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  int64_t klass; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v16; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *charaGraph; // x20
  CGThumbnailListItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4CBA359 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_858/*"-"*/);
    sub_1C6BA08(&StringLiteral_9235/*"NEED_QP_INFO"*/);
    byte_4CBA359 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  EventTutorialMaster__CheckTutorial(0, 39, 0, 0, 0, 0, 0, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v5);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  helpBtn = this->fields.maxLvStatusInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_35;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0);
  NpCombineControl__SetHaveQpInfo(this, v7);
  NpCombineControl__SetSelectMaterialEnable(this, v8);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v9);
  NpCombineControl__ResetScrollView(this, v10);
  helpBtn = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !helpBtn )
    goto LABEL_35;
  klass = (int64_t)helpBtn[4].klass;
  helpBtn = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  this->fields.userQP = klass;
  if ( !helpBtn )
    goto LABEL_35;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  helpBtn = this->fields.baseSelectInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_35;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v12, v13);
  v16 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v16 && v16->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      v16,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v17 )
        break;
      if ( !v26.fields._current )
        sub_1C6BC60(v17, v18);
      if ( HIDWORD(v26.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1C6BC60(v17, v18);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v17,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v26.fields._current[5].klass,
          v19);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  helpBtn = this->fields.baseLvInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (CGThumbnailListItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_1C6B9AC(p_charaGraph, 0, v23, v24);
      return;
    }
LABEL_35:
    sub_1C6BC60(helpBtn, v3);
  }
}


void NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 scrollView; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA36F & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4CBA36F = 1;
  }
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0);
  scrollView = (__int64)this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_15;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)scrollView, 0);
  scrollView = (__int64)this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_15;
  UIWrapContent__resetScroll((UIWrapContent_o *)scrollView, 0);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
  v4 = (UnityEngine_Transform_o *)scrollView;
  if ( !byte_4CAFC09 )
  {
    scrollView = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)scrollView,
                          (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_15;
  v5.fields.y = *(float *)(scrollView + 336);
  v5.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v5, 0);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView
    || (v6.fields.x = 0.0,
        v6.fields.y = 0.0,
        v6.fields.z = 0.0,
        UIScrollView__set_currentMomentum((UIScrollView_o *)scrollView, v6, 0),
        (scrollView = (__int64)this->fields.scrollView) == 0) )
  {
LABEL_15:
    sub_1C6BC60(scrollView, method);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)scrollView, 0);
}


void NpCombineControl__SetBaseSvtCardImg(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(NpCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_charaGraph, (int32_t)v5, v6, v7);
}


void NpCombineControl__SetBaseSvtNpInfo(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UIIconLabel_o *iconLabel; // x22
  int32_t lv; // w23
  UnityEngine_GameObject_o *LevelMax; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_array **p_assetList; // x22
  System_String_array *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_String_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_String_array *assetList; // x22
  unsigned __int64 v27; // x23
  __int64 v28; // x29
  int32_t TransformedServantId; // w0
  __int64 v30; // x25
  __int64 v31; // x26
  int32_t v32; // w24
  int32_t v33; // w25
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4CBA35C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_NpCombineControl_SetCombineNpList__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ServantAssetLoadManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    byte_4CBA35C = 1;
  }
  if ( usrSvtEn )
  {
    v6 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = v6;
    *(_QWORD *)&v37.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v37, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)usrSvtEn, v9, v10);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0);
    if ( !iconLabel )
      goto LABEL_26;
    UIIconLabel__Set_41344128(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0, 0);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v15);
    this->fields.svtNpDataList = SvtNpData;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.svtNpDataList, (int32_t)SvtNpData, v17, v18);
    p_assetList = &this->fields.assetList;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetList, 0) )
    {
      v20 = *p_assetList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_40774692(v20, 0);
      *p_assetList = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetList, 0, v21, v22);
    }
    v23 = (struct System_String_array *)sub_1C6BAB0(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v23;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetList, (int32_t)v23, v24, v25);
    assetList = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v27 = 0;
      v28 = 32;
      while ( 1 )
      {
        LevelMax = (UnityEngine_GameObject_o *)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v27, 0);
        v31 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v30 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        v32 = TransformedServantId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v31;
        *(_QWORD *)&v38.fields.fakeValue = v30;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v38, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v32, v33, 0);
        if ( !assetList )
          break;
        if ( v27 >= LODWORD(assetList->max_length) )
          sub_1C6BC68(LevelMax);
        *(Il2CppClass **)((char *)&assetList->obj.klass + v28) = (Il2CppClass *)LevelMax;
        sub_1C6B9AC((CGThumbnailListItem_o *)((char *)assetList + v28), (int32_t)LevelMax, v34, v35);
        assetList = this->fields.assetList;
        ++v27;
        v28 += 8;
        if ( (__int64)v27 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_1C6BC60(LevelMax, v14);
    }
LABEL_22:
    v36 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_40772344(assetList, v36, 1, 0);
  }
}


void NpCombineControl__SetCombineNpList(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  UnityEngine_Object_o *centerChild; // x20
  const MethodInfo *currentMoveIdx; // x1
  UnityEngine_Component_o *wrapContent; // x0
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t transformTotal; // w20
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v18; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v23; // x8
  int size; // w25
  bool isScrollNpInfo; // w1
  int v26; // w8
  struct UICenterOnChild_o *v27; // x20
  SpringPanel_OnFinished_o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  int i; // w28
  _BOOL8 v33; // x0
  __int64 v34; // x1
  SvtUseNpData_o *current; // x21
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x22
  UnityEngine_Transform_o *v38; // x2
  UnityEngine_Object_o *v39; // x22
  System_String_o *v40; // x0
  Il2CppObject *Component_object; // x0
  __int64 v42; // x1
  ServantNpInfoIconComponent_o *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  Il2CppObject *Item; // x21
  UIScrollView_o *TextScrollView; // x23
  UIScrollBar_o *TextScrollBar; // x0
  __int64 v49; // x1
  UnityEngine_GameObject_o *v50; // x0
  Il2CppObject *v51; // x23
  UIScrollView_o *v52; // x24
  UIScrollBar_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x1
  int v58; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-90h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+40h] [xbp-70h] BYREF
  int32_t idx; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4CBA361 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__SyncScrollComponent__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__);
    sub_1C6BA08(&Method_GameObjectExtensions_SafeGetComponent_SyncScrollComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1C6BA08(&Method_NpCombineControl_OnCenterOnChildFinished__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SpringPanel_OnFinished_TypeInfo);
    sub_1C6BA08(&StringLiteral_4943/*"D3"*/);
    byte_4CBA361 = 1;
  }
  idx = 0;
  transformInfo = 0;
  memset(&v60, 0, sizeof(v60));
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(centerChild, 0, 0) )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_65;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0);
      if ( !wrapContent )
        goto LABEL_65;
      v7 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)wrapContent,
             (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v7;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerChild, (int32_t)v7, v8, v9);
    }
    wrapContent = (UnityEngine_Component_o *)this->fields.defaultNpInfo;
    if ( !wrapContent )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0);
    wrapContent = (UnityEngine_Component_o *)this->fields.switchButton;
    this->fields.displayTransformIndex = 0;
    if ( !wrapContent )
      goto LABEL_65;
    transformTotal = this->fields.transformTotal;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, transformTotal > 1, 0);
    wrapContent = (UnityEngine_Component_o *)this->fields.servantName;
    if ( !wrapContent )
      goto LABEL_65;
    wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0);
    if ( !wrapContent )
      goto LABEL_65;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, transformTotal > 1, 0);
    if ( transformTotal >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( wrapContent )
      {
        npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
        transform = UnityEngine_Component__get_transform(wrapContent, 0);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, npCombineInfoPrefab, transform, 0, 0);
        this->fields.targetObject = Object;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)Object, v15, v16);
        wrapContent = (UnityEngine_Component_o *)this->fields.targetObject;
        if ( wrapContent )
        {
          wrapContent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)wrapContent,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( this->fields.svtNpDataList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v18 = (ServantNpInfoIconComponent_o *)wrapContent;
            wrapContent = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
            if ( v18 )
            {
              ServantNpInfoIconComponent__SetNpInfo(
                v18,
                baseUserServantEntity,
                0,
                (SvtUseNpData_o *)wrapContent,
                1,
                3.0,
                10.0,
                0);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
              GameObjectExtensions__SetLocalPositionY(gameObject, -18.5, 0);
              v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
              GameObjectExtensions__SetLocalScale_36358148(v20, this->fields.scaleOffset, 0);
              this->fields.isSelectBase = 1;
              NpCombineControl__SetSelectMaterialEnable(this, v21);
              NpCombineControl__SetSvtNpCombineData(this, v22);
              wrapContent = (UnityEngine_Component_o *)this->fields.baseUserServantEntity;
              if ( wrapContent )
              {
                wrapContent = (UnityEngine_Component_o *)UserServantEntity__GetTransformedServantInfo(
                                                           (UserServantEntity_o *)wrapContent,
                                                           &transformInfo,
                                                           this->fields.displayTransformIndex,
                                                           0);
                if ( transformInfo )
                {
                  wrapContent = (UnityEngine_Component_o *)this->fields.servantName;
                  if ( wrapContent )
                  {
                    UILabel__set_text((UILabel_o *)wrapContent, transformInfo->fields.titleText, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_65:
      sub_1C6BC60(wrapContent, currentMoveIdx);
    }
    v23 = this->fields.svtNpDataList;
    if ( !v23 )
      goto LABEL_65;
    size = v23->fields._size;
    if ( size >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
      this->fields.isScrollNpInfo = 1;
      if ( !wrapContent )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0);
      v27 = this->fields.centerChild;
      v28 = (SpringPanel_OnFinished_o *)sub_1C6BC54(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v28, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0);
      if ( !v27 )
        goto LABEL_65;
      v27->fields.onFinished = v28;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v27->fields.onFinished, (int32_t)v28, v29, v30);
      isScrollNpInfo = this->fields.isScrollNpInfo;
      v26 = 2;
    }
    else
    {
      isScrollNpInfo = 0;
      v26 = 1;
      this->fields.isScrollNpInfo = 0;
    }
    v58 = v26;
    NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v11);
    idx = 0;
    v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__SyncScrollComponent__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v31,
      (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent___ctor__);
    for ( i = 0; i != v58; ++i )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
      if ( !wrapContent )
        goto LABEL_65;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        (System_Collections_Generic_List_object__o *)wrapContent,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
      v60 = v59;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v60,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
        if ( !v33 )
          break;
        current = (SvtUseNpData_o *)v60.fields._current;
        if ( !v60.fields._current )
          sub_1C6BC60(v33, v34);
        if ( ((__int64)v60.fields._current[1].monitor & 0x80000000) == 0 )
        {
          v36 = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !v36 )
            sub_1C6BC60(0, v34);
          v37 = this->fields.npCombineInfoPrefab;
          v38 = UnityEngine_Component__get_transform(v36, 0);
          v39 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v37, v38, 0, 0);
          v40 = System_Int32__ToString_65475288((int32_t)&idx, (System_String_o *)StringLiteral_4943/*"D3"*/, 0);
          if ( !v39 )
            sub_1C6BC60(v40, v40);
          UnityEngine_Object__set_name(v39, v40, 0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v39,
                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          v43 = (ServantNpInfoIconComponent_o *)Component_object;
          if ( !Component_object )
            sub_1C6BC60(0, v42);
          ServantNpInfoIconComponent__SetNpInfo(
            (ServantNpInfoIconComponent_o *)Component_object,
            this->fields.baseUserServantEntity,
            idx++,
            current,
            0,
            0.0,
            0.0,
            0);
          if ( size >= 2 )
          {
            if ( i )
            {
              if ( !v31 )
                sub_1C6BC60(v44, v45);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       v31,
                       current->fields.svtDispNpId,
                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__get_Item__);
              TextScrollView = ServantNpInfoIconComponent__get_TextScrollView(v43, 0);
              TextScrollBar = ServantNpInfoIconComponent__get_TextScrollBar(v43, 0);
              if ( !Item )
                sub_1C6BC60(TextScrollBar, v49);
              SyncScrollComponent__AddTarget((SyncScrollComponent_o *)Item, TextScrollView, TextScrollBar, 0);
            }
            else
            {
              v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v43, 0);
              v51 = GameObjectExtensions__SafeGetComponent_object_(
                      v50,
                      (const MethodInfo_3194C14 *)Method_GameObjectExtensions_SafeGetComponent_SyncScrollComponent___);
              v52 = ServantNpInfoIconComponent__get_TextScrollView(v43, 0);
              v53 = ServantNpInfoIconComponent__get_TextScrollBar(v43, 0);
              if ( !v51 )
                sub_1C6BC60(v53, v54);
              SyncScrollComponent__AddTarget((SyncScrollComponent_o *)v51, v52, v53, 0);
              if ( !v31 )
                sub_1C6BC60(v55, v56);
              System_Collections_Generic_Dictionary_int__object___set_Item(
                v31,
                current->fields.svtDispNpId,
                v51,
                (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__set_Item__);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v60,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    }
    if ( this->fields.isScrollNpInfo )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_65;
      LODWORD(wrapContent[1].monitor) = 700;
      UIWrapContent__WrapContent((UIWrapContent_o *)wrapContent, 0);
    }
    NpCombineControl__ResetScrollView(this, currentMoveIdx);
    currentMoveIdx = (const MethodInfo *)(unsigned int)this->fields.currentMoveIdx;
    if ( (int)currentMoveIdx >= 1 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_65;
      UIWrapContent__setScrollPos((UIWrapContent_o *)wrapContent, (int32_t)currentMoveIdx, 0);
    }
    this->fields.isSelectBase = 1;
    NpCombineControl__SetSelectMaterialEnable(this, currentMoveIdx);
    NpCombineControl__SetSvtNpCombineData(this, v57);
  }
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetEnableCombineBtn(NpCombineControl_o *this, bool isCombine, const MethodInfo *method)
{
  UIWidget_o *combineBtn; // x0
  float v5; // s8
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  combineBtn = (UIWidget_o *)this->fields.combineBtn;
  if ( !combineBtn
    || (!isCombine ? (v5 = 0.5) : (v5 = 1.0),
        ((void (__fastcall *)(UIWidget_o *))combineBtn->klass->vtable._5_get_isAnchoredVertically.methodPtr)(combineBtn),
        (combineBtn = (UIWidget_o *)this->fields.combineBtnTxt) == 0) )
  {
    sub_1C6BC60(combineBtn, isCombine);
  }
  v6.fields.a = 1.0;
  v6.fields.r = v5;
  v6.fields.g = v5;
  v6.fields.b = v5;
  UIWidget__set_color(combineBtn, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetEnabledNpInfoScroll(NpCombineControl_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20

  if ( (enabled & ~this->fields.isScrollNpInfo & 1) == 0 )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.wrapContent) == 0) )
    {
      sub_1C6BC60(scrollView, enabled);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, v5, 0);
  }
}


void NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CBA367 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CBA367 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v8, 0);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0);
          UITweener__PlayForward((UITweener_o *)v7, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_1C6BC60(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0);
}


void NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4CBA35B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CBA35B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65480464(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C6BC60(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetNpCombineData(NpCombineControl_o *this, SetCombineData_o *data, const MethodInfo *method)
{
  __int64 materialGrid; // x0
  __int64 v6; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  il2cpp_array_size_t max_length; // x23
  System_Collections_Generic_List_long__o *v9; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned __int64 v13; // x22
  struct System_Int64_array *v14; // x8
  int64_t v15; // x24
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x25
  UnityEngine_Transform_o *v19; // x26
  UnityEngine_Transform_o *v20; // x26
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *baseUserServantEntity; // x25
  NpMaterialSvtInfo_o *v23; // x26
  NpMaterialSvtInfo_ClickDelegate_o *v24; // x27
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  const MethodInfo *v28; // x3
  int32_t v29; // w21
  const MethodInfo *v30; // x3
  struct System_Int64_array *v31; // x22
  il2cpp_array_size_t v32; // x8
  unsigned __int64 v33; // x23
  int64_t v34; // x20
  const MethodInfo *v35; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  _BOOL8 v40; // x0
  __int64 v41; // x1
  float v42; // s0
  int v43; // w8
  UILabel_o *qpLb; // x22
  float v45; // s1 OVERLAPPED
  float v46; // s0
  float v47; // s3
  float v48; // s2
  struct SetLevelUpData_o *v49; // x8
  int64_t spendQpVal; // x9
  bool v51; // w20
  float v52; // s0 OVERLAPPED
  float v53; // s1
  float v54; // s2
  float v55; // s3
  const MethodInfo *v56; // x1
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA363 & 1) == 0 )
  {
    sub_1C6BA08(&NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CBA363 = 1;
  }
  tmpTargetLv = 0;
  memset(&v58, 0, sizeof(v58));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_62;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_62;
  max_length = materialUsrSvtIdList->max_length;
  v9 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectMtUsrSvtIdList, (int32_t)v9, v11, v12);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)max_length < 1 )
    return;
  v13 = 0;
  do
  {
    v14 = data->fields.materialUsrSvtIdList;
    if ( !v14 )
      goto LABEL_62;
    if ( v13 >= LODWORD(v14->max_length) )
LABEL_63:
      sub_1C6BC68(materialGrid);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    v15 = v14->m_Items[v13];
    materialSvtPrefab = this->fields.materialSvtPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)materialGrid, 0);
    materialGrid = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              materialSvtPrefab,
                              transform,
                              0,
                              0);
    if ( !materialGrid )
      goto LABEL_62;
    v18 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v19 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0);
    if ( !materialGrid )
      goto LABEL_62;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)materialGrid, 0);
    if ( !v19 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v19, localPosition, 0);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v18, 0);
    v20 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_4CAFC09 )
    {
      materialGrid = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    if ( !v20 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v18,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    v23 = (NpMaterialSvtInfo_o *)Component_object;
    v24 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_1C6BC54(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v24,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0);
    if ( !v23 )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo(v23, v13, baseUserServantEntity, v15, v24, 0);
    materialGrid = (__int64)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_62;
    v25 = *(_QWORD *)(materialGrid + 16);
    v26 = Method_System_Collections_Generic_List_long__Add__;
    ++*(_DWORD *)(materialGrid + 28);
    if ( !v25 )
      goto LABEL_62;
    v27 = *(int *)(materialGrid + 24);
    if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        (System_Collections_Generic_List_long__o *)materialGrid,
        v15,
        *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v27 + 1;
      *(_QWORD *)(v25 + 8 * v27 + 32) = v15;
    }
    ++v13;
  }
  while ( (unsigned int)max_length != v13 );
  materialGrid = (__int64)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_62;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0);
  materialGrid = NpCombineControl__GetNpLv(
                   this->fields.baseUserServantEntity,
                   data->fields.materialUsrSvtIdList,
                   &tmpTargetLv,
                   v28);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_62;
  v29 = materialGrid;
  materialGrid = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0);
  this->fields.isExceedMaxLv = materialGrid & 1;
  this->fields.isCombineSvt = 0;
  v31 = data->fields.materialUsrSvtIdList;
  if ( !v31 )
    goto LABEL_62;
  v32 = v31->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v32 )
        goto LABEL_63;
      v34 = v31->m_Items[v33];
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v34,
                                (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_62;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = NpCombineControl__CheckConfirm(v34, v35);
      if ( (materialGrid & 1) != 0 )
        break;
      LODWORD(v32) = v31->max_length;
      if ( (__int64)++v33 >= (int)v32 )
        goto LABEL_39;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_39:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_62;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v29, v30);
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v57,
      combineEventList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v58 = v57;
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v58,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v40 )
        break;
      if ( !v58.fields._current )
        sub_1C6BC60(v40, v41);
      if ( HIDWORD(v58.fields._current[1].klass) == 10 )
      {
        v42 = *(float *)&v58.fields._current[3].monitor * (float)*p_spendQpVal;
        v43 = (int)v42;
        if ( v42 == INFINITY )
          v43 = 0x80000000;
        *p_spendQpVal = v43;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v58,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_65475288((int)this + 400, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0);
  materialGrid = (__int64)this->fields.qpLb;
  v45 = 0.0;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
    v45 = 1.0;
  if ( !materialGrid )
    goto LABEL_62;
  v46 = 1.0;
  v47 = 1.0;
  v48 = v45;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)(&v45 - 1), 0);
  v49 = this->fields.lvUpData;
  if ( !v49 )
    goto LABEL_62;
  v49->fields.nextLv = v29;
  spendQpVal = this->fields.spendQpVal;
  v49->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v52 = 1.0;
      v51 = 1;
      v53 = 1.0;
      goto LABEL_60;
    }
LABEL_62:
    sub_1C6BC60(materialGrid, v6);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v51 = 0;
  v52 = 1.0;
  v53 = 0.0;
LABEL_60:
  v54 = v53;
  v55 = v52;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v52, 0);
  this->fields._IsExeCombine_k__BackingField = v51;
  NpCombineControl__SetExeBtnState(this, v56);
}


void NpCombineControl__SetNpCombineNullData(NpCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *qpLb; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  NpCombineControl__DestroyMaterialGrid(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  v4 = System_Int32__ToString((int)this + 400, 0);
  if ( !qpLb || (UILabel__set_text(qpLb, v4, 0), (v4 = (System_String_o *)this->fields.qpLb) == 0) )
    sub_1C6BC60(v4, v5);
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v4, v7, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v6);
}


void NpCombineControl__SetSelectMaterialEnable(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn) == 0) )
  {
    sub_1C6BC60(preSelectBaseLb, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0);
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4CBA36A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7201/*"HEADER_MSG_NPUP_MATERIAL"*/);
    sub_1C6BA08(&StringLiteral_5780/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C6BA08(&StringLiteral_7444/*"INFO_MSG_NPUP_BASE"*/);
    sub_1C6BA08(&StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA36A = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_25:
    sub_1C6BC60(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5780/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7201/*"HEADER_MSG_NPUP_MATERIAL"*/;
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7444/*"INFO_MSG_NPUP_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0);
}


void NpCombineControl__SetSvtNpCombineData(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 v4; // x1
  char *Item; // x0
  int32_t v6; // w22
  char *v7; // x21
  int32_t v8; // w20
  long double v9; // q0
  __int64 v10; // x0
  DataManager_o *v11; // x24
  int32_t v12; // w25
  char *v13; // x23
  UILabel_o *currentInfoLb; // x24
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w24
  UserServantEntity_o *baseUserServantEntity; // x24
  System_Int64_array *v19; // x0
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x26
  struct SetLevelUpData_o **p_lvUpData; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int64_t userQP; // x8
  CGThumbnailListItem_o *v34; // x0
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CBA362 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1C6BA08(&SetLevelUpData_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CBA362 = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = (char *)this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     0,
                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    if ( !Item )
      goto LABEL_29;
    v6 = *((_DWORD *)Item + 6);
    v7 = Item;
    if ( v6 >= 1 )
    {
      Item = (char *)this->fields.maxLvStatusInfo;
      if ( !Item )
        goto LABEL_29;
      v8 = *((_DWORD *)v7 + 7);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 0, 0);
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C41A9C(v9);
      Item = *(char **)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (Item[309] & 1) == 0 )
        Item = (char *)sub_1C41A9C(v9);
      v11 = (DataManager_o *)**((_QWORD **)Item + 23);
      if ( !v11 )
        goto LABEL_29;
      Item = (char *)DataManager__GetMasterData_object_(
                       v11,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                       (TreasureDvcMaster_o *)Item,
                       *((_DWORD *)v7 + 4),
                       v6,
                       0);
      if ( !Item )
        goto LABEL_29;
      v12 = *((_DWORD *)Item + 12);
      v13 = Item;
      Item = (char *)DataManager__GetMasterData_object_(
                       v11,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Item, v6, v8, 0);
      if ( !Item )
        goto LABEL_29;
      currentInfoLb = this->fields.currentInfoLb;
      Item = (char *)TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)Item, 0);
      if ( !currentInfoLb )
        goto LABEL_29;
      UILabel__set_text(currentInfoLb, (System_String_o *)Item, 0);
      if ( v8 < v12 )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = v8;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v19 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v19, &tmpTargetLv, v20);
        }
        v21 = (Il2CppObject *)sub_1C6BC54(SetLevelUpData_TypeInfo);
        System_Object___ctor(v21, 0);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = (struct SetLevelUpData_o *)v21;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.lvUpData, (int32_t)v21, v23, v24);
        Item = (char *)this->fields.lvUpData;
        if ( Item )
        {
          *((_DWORD *)Item + 4) = v6;
          *((_DWORD *)Item + 5) = v6;
          *((_QWORD *)Item + 3) = 1;
          Item[112] = v7[65];
          v27 = *((_QWORD *)v13 + 4);
          *((_QWORD *)Item + 4) = v27;
          sub_1C6B9AC((CGThumbnailListItem_o *)(Item + 32), v27, v25, v26);
          Item = (char *)*p_lvUpData;
          if ( *p_lvUpData )
          {
            v30 = *((_QWORD *)v13 + 3);
            *((_QWORD *)Item + 5) = v30;
            sub_1C6B9AC((CGThumbnailListItem_o *)(Item + 40), v30, v28, v29);
            Item = (char *)*p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_DWORD *)Item + 16) = v8;
              *((_DWORD *)Item + 17) = NpLv;
              *((_DWORD *)Item + 19) = this->fields.spendQpVal;
              userQP = this->fields.userQP;
              *((_QWORD *)Item + 12) = 0;
              v34 = (CGThumbnailListItem_o *)(Item + 96);
              *(_QWORD *)&v34[-1].fields._Type_k__BackingField = userQP;
              sub_1C6B9AC(v34, 0, v31, v32);
              return;
            }
          }
        }
LABEL_29:
        sub_1C6BC60(Item, v4);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v15);
      Item = (char *)this->fields.qpLb;
      if ( !Item )
        goto LABEL_29;
      UILabel__set_text((UILabel_o *)Item, (System_String_o *)StringLiteral_1115/*"0"*/, 0);
    }
  }
}


bool NpCombineControl__get_isExchangeSvtInList(NpCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._isExchangeSvtInList_k__BackingField;
}


void NpCombineControl__onClickLeftArrow(NpCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NpCombineControl__OnClickArrow(this, -1, v2);
}


void NpCombineControl__onClickRightArrow(NpCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NpCombineControl__OnClickArrow(this, 1, v2);
}


void NpCombineControl__set_isExchangeSvtInList(NpCombineControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._isExchangeSvtInList_k__BackingField = value;
}