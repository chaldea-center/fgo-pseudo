void NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4D34B1D & 1) == 0 )
  {
    sub_1C93AD4(&CombineMenuControl_TypeInfo);
    byte_4D34B1D = 1;
  }
  this->fields.EnableMaskScrollViewWidth = 684.0;
  *(_QWORD *)&this->fields.DefaultScrollViewWidth = 0x432A0000442F0000LL;
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

  if ( (byte_4D34B18 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34B18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_49402436((UserServantEntity_o *)Entity, v6);
}


bool NpCombineControl__CheckConfirm_49402436(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
    sub_1C93D2C(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        sub_1C93D34(selectUsrSvtEnt);
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
  if ( (byte_4D34B13 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    this = (NpCombineControl_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34B13 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0)) == 0
    || !resData )
  {
    sub_1C93D2C(this, resData);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D34B0D & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34B0D = 1;
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
      UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1C93D2C(wrapContent, method);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_41257108(assetList, 0);
    this->fields.assetList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetList, 0, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4D34B0E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34B0E = 1;
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
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1C93D2C(materialGrid, method);
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
  GrandQuestFolderBoardItem_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4D34B0C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (NpCombineControl_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34B0C = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (GrandQuestFolderBoardItem_o *)&v2->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v16, 0);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_1C93D2C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (GrandQuestFolderBoardItem_c *)Entity;
  sub_1C93A78(p_baseUserServantEntity, (int32_t)Entity, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4D34B08 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D34B08 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C69B68(v7);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (BYTE5(MasterData_object[19].klass) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_1C69B68(v7);
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
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
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
                                          (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
                                          (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v18 = v24;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
LABEL_32:
      v21 = v15;
  }
  if ( !v18
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v18,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
LABEL_36:
    sub_1C93D2C(MasterData_object, *(_QWORD *)&svtId);
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

  if ( (byte_4D34B07 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D34B07 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C69B68(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C69B68(v8);
  MasterData_object = **(Il2CppObject ***)(v10 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_1C93D2C(MasterData_object, v6);
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
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t DispLimitCount; // w23
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  char v55; // w26
  NpCombineControl_o *v56; // x0
  const MethodInfo *v57; // x6
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  __int64 v68; // x8
  TreasureDvcInfo_o *v70; // [xsp+0h] [xbp-A0h]
  System_Int32_array *v71; // [xsp+8h] [xbp-98h]
  ServantTreasureDeviceAddEntity_o *v72; // [xsp+10h] [xbp-90h]
  int32_t *p_cardId; // [xsp+18h] [xbp-88h]
  int v74; // [xsp+20h] [xbp-80h]
  bool v75; // [xsp+24h] [xbp-7Ch]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4D34B06 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&SvtUseNpData_TypeInfo);
    byte_4D34B06 = 1;
  }
  tdExplanation = 0;
  tdName = 0;
  *(_QWORD *)tdGuageCount = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C69B68(v10);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C69B68(v10);
  MasterData_object = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_object )
    goto LABEL_41;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_41;
  v14 = (TreasureDvcMaster_o *)MasterData_object;
  FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(tdAddEntity, 0);
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                         (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v16 = 8;
    v72 = tdAddEntity;
    p_cardId = &tdInfo->fields.cardId;
    v70 = tdInfo;
    v71 = FixedCardLimitCounts;
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
      *(_QWORD *)&v79.fields.currentCryptoKey = v21;
      *(_QWORD *)&v79.fields.fakeValue = v20;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v79, 0);
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
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(usrSvtData->fields.svtId, 0);
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
      v74 = *p_saveNameList;
      v29 = *((_DWORD *)&hideCardChara->obj.klass + v16);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v75 = System_Convert__ToBoolean_65504220(v29, 0);
      v30 = sub_1C93D20(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v30, 0);
      v31 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v80.fields.currentCryptoKey = v31;
      *(_QWORD *)&v80.fields.fakeValue = v32;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v80, 0);
      if ( !v30 )
        break;
      *(_DWORD *)(v30 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v30 + 20) = v19;
      *(_QWORD *)(v30 + 24) = *(_QWORD *)&v28->fields.id;
      v39 = *(_QWORD *)&v22->fields._DispLog;
      *(_QWORD *)(v30 + 32) = v39;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 32), v39, v33, v34, v35, v36, v37, v38);
      m_CancellationTokenSource = v22->fields.m_CancellationTokenSource;
      *(_QWORD *)(v30 + 40) = m_CancellationTokenSource;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)(v30 + 40),
        (int32_t)m_CancellationTokenSource,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      *(_DWORD *)(v30 + 48) = v74;
      *(_DWORD *)(v30 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v30 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0);
      v48 = (int)tdExplanation;
      *(_QWORD *)(v30 + 56) = tdExplanation;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 56), v48, v49, v50, v51, v52, v53, v54);
      v55 = 1;
      *(_BYTE *)(v30 + 64) = v75;
      *(_BYTE *)(v30 + 65) = 1;
      if ( v71 )
      {
        tdAddEntity = v72;
        if ( v18 >= LODWORD(v71->max_length) )
LABEL_42:
          sub_1C93D34(MasterData_object);
        v14 = v27;
        v55 = *((_DWORD *)&v71->obj.klass + v16) != 0;
      }
      else
      {
        tdAddEntity = v72;
        v14 = v27;
      }
      tdInfo = v70;
      ServantTreasureDeviceAddEntity__GetMaskInfo(
        tdAddEntity,
        v16 - 8,
        (bool *)(v30 + 84),
        (System_String_o **)(v30 + 88),
        0);
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             v56,
                                             *(_DWORD *)(v30 + 16),
                                             *(_DWORD *)(v30 + 72),
                                             tdAddEntity->fields.condLimitCount,
                                             v16 - 8,
                                             v55,
                                             v57);
      *(_DWORD *)(v30 + 68) = (_DWORD)MasterData_object;
      if ( !v8 )
        break;
      items = v8->fields._items;
      v65 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v30,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v30;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v67 + 4), v30, v58, v59, v60, v61, v62, v63);
      }
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                             (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
      v68 = v16 - 7;
      ++v16;
      if ( v68 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v8;
    }
LABEL_41:
    sub_1C93D2C(MasterData_object, v9);
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
  if ( (byte_4D34B16 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseUsrSvtData = (UserServantEntity_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34B16 = 1;
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
    sub_1C93D2C(baseUsrSvtData, mtSvtIdList);
  }
  v8 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C93D34(baseUsrSvtData);
    v9 = v5->m_Items[v8];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v9,
                                              (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_43875668(
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

  if ( (byte_4D34B17 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34B17 = 1;
  }
  if ( currentLv >= resNpLv )
    return 0;
  v7 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
    {
      sub_1C93D2C(Instance, v9);
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
  DataManager_o *v8; // x22
  ServantTreasureDeviceAddMaster_o *v9; // x28
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  struct System_Int32_array *treasureDeviceIds; // x8
  Il2CppObject *v15; // x26
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t v17; // w24
  NpCombineControl_o *v18; // x23
  int32_t TransformedServantId; // w25
  __int64 v20; // x27
  int32_t *p_cardId; // x8
  int32_t v22; // w29
  __int64 v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int v30; // w8
  ServantTreasureDeviceAddMaster_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t DispLimitCount; // w28
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  __int64 v48; // x28
  __int64 v49; // x29
  int32_t v50; // w0
  ServantTreasureDeviceAddEntity_o *v51; // x0
  const MethodInfo *v52; // x3
  ServantTreasureDeviceAddEntity_o *v53; // x25
  int32_t v54; // w0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x21
  __int64 v66; // x22
  int32_t v67; // w0
  const MethodInfo *v68; // x4
  Il2CppObject *v70; // [xsp+0h] [xbp-90h]
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-88h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+20h] [xbp-70h] BYREF
  TreasureDvcInfo_o *v75; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4D34B05 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&SvtUseNpData_TypeInfo);
    byte_4D34B05 = 1;
  }
  tdInfo = 0;
  v75 = 0;
  tdName = 0;
  tdExplanation = 0;
  *(_QWORD *)tdGuageCount = 0;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v3);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C69B68(v3);
  v8 = **(DataManager_o ***)(MasterData_object + 184);
  if ( !v8 )
    goto LABEL_45;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 v8,
                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_45;
  v9 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v11;
  *(_QWORD *)&v76.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v76, 0);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                        usrSvtData->fields.limitCount,
                        0);
  if ( !v9 )
    goto LABEL_45;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v9, v12, MasterData_object, 0, 0, 0, 0);
  CombineMenuControl__SetTransformInfo((CombineMenuControl_o *)this, 0);
  if ( !EnableEntity )
    goto LABEL_15;
  treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
  if ( !treasureDeviceIds )
    goto LABEL_45;
  if ( SLODWORD(treasureDeviceIds->max_length) > 1 )
  {
    UserServantEntity__getTreasureDeviceInfo(usrSvtData, &v75, -1, -1, 0, 0);
    v66 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v65 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v78.fields.currentCryptoKey = v66;
    *(_QWORD *)&v78.fields.fakeValue = v65;
    v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v78, 0);
    EventTutorialMaster__CheckTutorial(-1, 69, 0, v67, 0, 0, 0, 0);
    return NpCombineControl__GetNpAddDataList(this, usrSvtData, v75, EnableEntity, v68);
  }
  else
  {
LABEL_15:
    v15 = DataManager__GetMasterData_object_(
            v8,
            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal >= 1 )
    {
      v17 = 0;
      v18 = this;
      v70 = v15;
      while ( 1 )
      {
        MasterData_object = (__int64)this->fields.baseUserServantEntity;
        if ( !MasterData_object )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId(
                                 (UserServantEntity_o *)MasterData_object,
                                 v17,
                                 0);
        MasterData_object = UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                              usrSvtData,
                              &tdInfo,
                              v17,
                              -1,
                              -1,
                              0,
                              0);
        if ( !tdInfo )
          break;
        if ( !v15 )
          break;
        MasterData_object = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)v15,
                                       TransformedServantId,
                                       tdInfo->fields.id,
                                       0);
        if ( !tdInfo )
          break;
        v20 = MasterData_object;
        if ( !MasterData_object )
          break;
        TreasureDvcEntity__getEffectExplanation(
          (TreasureDvcEntity_o *)MasterData_object,
          &tdName,
          &tdExplanation,
          &tdGuageCount[1],
          tdGuageCount,
          tdInfo->fields.lv,
          0);
        MasterData_object = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(
                                       TransformedServantId,
                                       *(_DWORD *)(v20 + 16),
                                       0);
        if ( MasterData_object )
        {
          p_cardId = (int32_t *)(MasterData_object + 64);
        }
        else
        {
          if ( !tdInfo )
            break;
          p_cardId = &tdInfo->fields.cardId;
        }
        v22 = *p_cardId;
        v23 = sub_1C93D20(SvtUseNpData_TypeInfo);
        SvtUseNpData___ctor((SvtUseNpData_o *)v23, 0);
        if ( !v23 )
          break;
        *(_DWORD *)(v23 + 16) = TransformedServantId;
        v30 = *(_DWORD *)(v20 + 16);
        *(_DWORD *)(v23 + 20) = v30;
        *(_DWORD *)(v23 + 24) = v30;
        if ( !tdInfo )
          break;
        v31 = v9;
        *(_DWORD *)(v23 + 28) = tdInfo->fields.lv;
        v32 = *(_QWORD *)(v20 + 32);
        *(_QWORD *)(v23 + 32) = v32;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 32), v32, v24, v25, v26, v27, v28, v29);
        v33 = *(_QWORD *)(v20 + 24);
        *(_QWORD *)(v23 + 40) = v33;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 40), v33, v34, v35, v36, v37, v38, v39);
        *(_DWORD *)(v23 + 48) = v22;
        *(_DWORD *)(v23 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0);
        DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0);
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        *(_DWORD *)(v23 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0);
        v41 = (int)tdExplanation;
        *(_QWORD *)(v23 + 56) = tdExplanation;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 56), v41, v42, v43, v44, v45, v46, v47);
        *(_BYTE *)(v23 + 64) = 0;
        *(_BYTE *)(v23 + 65) = v18->fields._IsTransformServant_k__BackingField;
        v49 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
        v48 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v49;
        *(_QWORD *)&v77.fields.fakeValue = v48;
        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v77, 0);
        v9 = v31;
        v51 = ServantTreasureDeviceAddMaster__GetEnableEntity(
                v31,
                TransformedServantId,
                v50,
                0,
                *(_DWORD *)(v20 + 16),
                0,
                0);
        if ( v51 )
        {
          v53 = v51;
          v54 = System_Array__IndexOf_int_(
                  v51->fields.treasureDeviceIds,
                  *(_DWORD *)(v20 + 16),
                  (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
          ServantTreasureDeviceAddEntity__GetMaskInfo(v53, v54, (bool *)(v23 + 84), (System_String_o **)(v23 + 88), 0);
        }
        MasterData_object = NpCombineControl__GetLimitCountForSingle(
                              (NpCombineControl_o *)v51,
                              *(_DWORD *)(v23 + 16),
                              *(_DWORD *)(v23 + 72),
                              v52);
        *(_DWORD *)(v23 + 68) = MasterData_object;
        if ( !v16 )
          break;
        items = v16->fields._items;
        v62 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v23,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v64[4] = (Il2CppClass *)v23;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v64 + 4), v23, v55, v56, v57, v58, v59, v60);
        }
        v15 = v70;
        ++v17;
        this = v18;
        if ( v17 >= v18->fields.transformTotal )
          return (System_Collections_Generic_List_SvtUseNpData__o *)v16;
      }
LABEL_45:
      sub_1C93D2C(MasterData_object, usrSvtData);
    }
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v16;
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
  UIWidget_o *transformSvtName; // x20
  UIWidget_o *transformBgSprite; // x19
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D34B02 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_9292/*"NEED_QP_INFO"*/);
    byte_4D34B02 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_19;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_859/*"-"*/, 0);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_19;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_859/*"-"*/, 0);
  currentInfoLb = (UILabel_o *)this->fields.maxLvStatusInfo;
  if ( !currentInfoLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9292/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_19;
  UILabel__set_text(needQpLb, (System_String_o *)currentInfoLb, 0);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  currentInfoLb = (UILabel_o *)System_Int32__ToString((int)this + 488, 0);
  if ( !qpLb )
    goto LABEL_19;
  UILabel__set_text(qpLb, (System_String_o *)currentInfoLb, 0);
  currentInfoLb = this->fields.qpLb;
  if ( !currentInfoLb )
    goto LABEL_19;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentInfoLb, v12, 0);
  NpCombineControl__SetHaveQpInfo(this, v6);
  NpCombineControl__SetSelectMaterialEnable(this, v7);
  currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo;
  if ( !currentInfoLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0);
  currentInfoLb = (UILabel_o *)this->fields.arrowInfo;
  if ( !currentInfoLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v8);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v9);
  currentInfoLb = (UILabel_o *)this->fields.switchButton;
  if ( !currentInfoLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
  currentInfoLb = this->fields.transformSvtName;
  if ( !currentInfoLb
    || (currentInfoLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentInfoLb, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0),
        transformSvtName = (UIWidget_o *)this->fields.transformSvtName,
        DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0),
        !transformSvtName)
    || (UIWidget__set_color(transformSvtName, DefaultCondTitleLabelColor, 0),
        transformBgSprite = (UIWidget_o *)this->fields.transformBgSprite,
        DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0),
        !transformBgSprite) )
  {
LABEL_19:
    sub_1C93D2C(currentInfoLb, method);
  }
  UIWidget__set_color(transformBgSprite, DefaultCondTitleSpriteColor, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D34B00 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8857/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34B00 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8857/*"MSG_PRESELECT_BASE_SVT"*/, 0);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.combineEventList,
    (int32_t)combineEventList,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v18 && v18->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      v18,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v19 )
        break;
      if ( !v24.fields._current )
        sub_1C93D2C(v19, v20);
      if ( *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&dword_14) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1C93D2C(v19, v20);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v19,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v24.fields._current->klass + (unsigned __int64)off_50),
          v21);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_1C93D2C(SelfUserGame, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  NpCombineControl__SetTransformNpMask(this, 0, (System_String_o *)StringLiteral_1/*""*/, v22);
  NpCombineControl__SetScrollViewSize(
    this,
    this->fields.DefaultScrollViewWidth,
    this->fields.DefaultScrollViewHeight,
    v23);
}


void NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *charaGraph; // x20
  GrandQuestFolderBoardItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D34AFF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34AFF = 1;
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
    p_charaGraph = (GrandQuestFolderBoardItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_1C93A78(p_charaGraph, 0, v9, v10, v11, v12, v13, v14);
      return;
    }
LABEL_12:
    sub_1C93D2C(helpBtn, v3);
  }
}


void NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_4D34B1A & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    byte_4D34B1A = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.currentInfoLb;
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

  if ( (byte_4D34B1B & 1) == 0 )
  {
    sub_1C93AD4(&Method_NpCombineControl_OnClickArrow__);
    byte_4D34B1B = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
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
    sub_1C93D2C(wrapContent, v7);
  }
  UICenterOnChild__CenterOn_49871820(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0);
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

  if ( (byte_4D34B12 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34B12 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v10,
    selectMtUsrSvtIdList,
    (const MethodInfo_38624A4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v11,
            (const MethodInfo_35F74D8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v11.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C93D2C(0, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C93D2C(0, v8);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v11,
    (const MethodInfo_35F74D4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_1C93D2C(selectMtUsrSvtIdList, method);
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

  if ( (byte_4D34B15 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NpCombineControl_OnClickMaterialSelectList__);
    byte_4D34B15 = 1;
  }
  v3 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_NpCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C93D2C(0, v5);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0);
}


void NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  ServantNpInfoIconComponent_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x21
  float value; // s0
  SvtUseNpData_o *Item; // x21
  const MethodInfo *v9; // x3
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D34B1C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1C93AD4(&Method_NpCombineControl_OnClickSwitchButton__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34B1C = 1;
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
        goto LABEL_23;
      Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       Component_object,
                                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
      if ( !this->fields.svtNpDataList )
        goto LABEL_23;
      v5 = (ServantNpInfoIconComponent_o *)Component_object;
      Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
      if ( !v5 )
        goto LABEL_23;
      v6 = Component_object;
      Component_object = (UnityEngine_GameObject_o *)ServantNpInfoIconComponent__get_TextScrollBar(v5, 0);
      if ( !Component_object )
        goto LABEL_23;
      value = UIProgressBar__get_value((UIProgressBar_o *)Component_object, 0);
      if ( !v6 )
        goto LABEL_23;
      *(float *)&v6[3].monitor = value;
      Component_object = (UnityEngine_GameObject_o *)this->fields.svtNpDataList;
      method = (const MethodInfo *)(unsigned int)((this->fields.displayTransformIndex + 1) % this->fields.transformTotal);
      this->fields.displayTransformIndex = (int)method;
      if ( !Component_object )
        goto LABEL_23;
      Item = (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)Component_object,
                                 (int32_t)method,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
      ServantNpInfoIconComponent__SetNpInfo(v5, this->fields.baseUserServantEntity, 0, Item, 1, 0.0, 0.0, 0);
      if ( !Item )
        goto LABEL_23;
      NpCombineControl__SetTransformNpMask(this, Item->fields.MaskFlag, Item->fields.ClosedMessage, v9);
    }
  }
  if ( !this->fields._IsTransformServant_k__BackingField )
    goto LABEL_20;
  Component_object = (UnityEngine_GameObject_o *)this->fields.baseUserServantEntity;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                         (UserServantEntity_o *)Component_object,
                                                         &transformInfo,
                                                         this->fields.displayTransformIndex,
                                                         0),
        !transformInfo)
    || (Component_object = (UnityEngine_GameObject_o *)this->fields.transformSvtName) == 0 )
  {
LABEL_23:
    sub_1C93D2C(Component_object, method);
  }
  UILabel__set_text((UILabel_o *)Component_object, transformInfo->fields.titleText, 0);
LABEL_20:
  v10 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C93AEC(Method_NpCombineControl_OnClickSwitchButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v10, v10[4]);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *charaGraph; // x20
  GrandQuestFolderBoardItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4D34B01 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_9292/*"NEED_QP_INFO"*/);
    byte_4D34B01 = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_859/*"-"*/, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_859/*"-"*/, 0);
  helpBtn = this->fields.maxLvStatusInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9292/*"NEED_QP_INFO"*/, 0);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.combineEventList,
    (int32_t)combineEventList,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v20 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v20 && v20->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v20,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v34 = v33;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v21 )
        break;
      if ( !v34.fields._current )
        sub_1C93D2C(v21, v22);
      if ( HIDWORD(v34.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1C93D2C(v21, v22);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v21,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v34.fields._current[5].klass,
          v23);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    p_charaGraph = (GrandQuestFolderBoardItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_1C93A78(p_charaGraph, 0, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_35:
    sub_1C93D2C(helpBtn, v3);
  }
}


void NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 scrollView; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34B19 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4D34B19 = 1;
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
  if ( !byte_4D2A139 )
  {
    scrollView = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)scrollView,
                          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C93D2C(scrollView, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(NpCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_charaGraph, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UIIconLabel_o *iconLabel; // x22
  int32_t lv; // w23
  UnityEngine_GameObject_o *LevelMax; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_String_array **p_assetList; // x22
  System_String_array *v28; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_String_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_String_array *assetList; // x22
  unsigned __int64 v43; // x23
  __int64 v44; // x29
  int32_t TransformedServantId; // w0
  __int64 v46; // x25
  __int64 v47; // x26
  int32_t v48; // w24
  int32_t v49; // w25
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Action_o *v56; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4D34B04 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_NpCombineControl_SetCombineNpList__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    byte_4D34B04 = 1;
  }
  if ( usrSvtEn )
  {
    v6 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v57.fields.currentCryptoKey = v6;
    *(_QWORD *)&v57.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v57, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v7;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseUserServantEntity,
      (int32_t)usrSvtEn,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0);
    if ( !iconLabel )
      goto LABEL_26;
    UIIconLabel__Set_41834012(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0, 0);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v19);
    this->fields.svtNpDataList = SvtNpData;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.svtNpDataList,
      (int32_t)SvtNpData,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    p_assetList = &this->fields.assetList;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetList, 0) )
    {
      v28 = *p_assetList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_41257108(v28, 0);
      *p_assetList = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetList, 0, v29, v30, v31, v32, v33, v34);
    }
    v35 = (struct System_String_array *)sub_1C93B7C(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v35;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetList, (int32_t)v35, v36, v37, v38, v39, v40, v41);
    assetList = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v43 = 0;
      v44 = 32;
      while ( 1 )
      {
        LevelMax = (UnityEngine_GameObject_o *)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v43, 0);
        v47 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v46 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        v48 = TransformedServantId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v58.fields.currentCryptoKey = v47;
        *(_QWORD *)&v58.fields.fakeValue = v46;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v58, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v48, v49, 0);
        if ( !assetList )
          break;
        if ( v43 >= LODWORD(assetList->max_length) )
          sub_1C93D34(LevelMax);
        *(Il2CppClass **)((char *)&assetList->obj.klass + v44) = (Il2CppClass *)LevelMax;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)((char *)assetList + v44),
          (int32_t)LevelMax,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        assetList = this->fields.assetList;
        ++v43;
        v44 += 8;
        if ( (__int64)v43 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_1C93D2C(LevelMax, v18);
    }
LABEL_22:
    v56 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v56, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_41254760(assetList, v56, 1, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  SvtUseNpData_o *v24; // x20
  UnityEngine_Component_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3
  struct System_Collections_Generic_List_SvtUseNpData__o *v31; // x8
  int size; // w25
  bool isScrollNpInfo; // w1
  int v34; // w26
  struct UICenterOnChild_o *v35; // x20
  SpringPanel_OnFinished_o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_Dictionary_int__object__o *v43; // x20
  bool v44; // w29
  int i; // w28
  _BOOL8 v46; // x0
  __int64 v47; // x1
  SvtUseNpData_o *current; // x21
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x22
  UnityEngine_Transform_o *v51; // x2
  UnityEngine_Object_o *v52; // x22
  System_String_o *v53; // x0
  Il2CppObject *Component_object; // x0
  __int64 v55; // x1
  ServantNpInfoIconComponent_o *v56; // x22
  __int64 v57; // x0
  __int64 v58; // x1
  int v59; // w8
  Il2CppObject *Item; // x21
  UIScrollView_o *TextScrollView; // x23
  UIScrollBar_o *TextScrollBar; // x0
  __int64 v63; // x1
  UnityEngine_GameObject_o *v64; // x0
  Il2CppObject *v65; // x23
  UIScrollView_o *v66; // x24
  UIScrollBar_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x1
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+20h] [xbp-90h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+40h] [xbp-70h] BYREF
  int32_t idx; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4D34B09 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__SyncScrollComponent__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_SyncScrollComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1C93AD4(&Method_NpCombineControl_OnCenterOnChildFinished__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SpringPanel_OnFinished_TypeInfo);
    sub_1C93AD4(&StringLiteral_4973/*"D3"*/);
    byte_4D34B09 = 1;
  }
  idx = 0;
  transformInfo = 0;
  memset(&v73, 0, sizeof(v73));
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(centerChild, 0, 0) )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_73;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0);
      if ( !wrapContent )
        goto LABEL_73;
      v7 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)wrapContent,
             (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v7;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.centerChild, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    }
    wrapContent = (UnityEngine_Component_o *)this->fields.defaultNpInfo;
    if ( !wrapContent )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0);
    wrapContent = (UnityEngine_Component_o *)this->fields.switchButton;
    this->fields.displayTransformIndex = 0;
    if ( !wrapContent )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)wrapContent,
      this->fields._IsTransformServant_k__BackingField,
      0);
    wrapContent = (UnityEngine_Component_o *)this->fields.transformSvtName;
    if ( !wrapContent )
      goto LABEL_73;
    wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0);
    if ( !wrapContent )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)wrapContent,
      this->fields._IsTransformServant_k__BackingField,
      0);
    if ( this->fields._IsTransformServant_k__BackingField )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( wrapContent )
      {
        npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
        transform = UnityEngine_Component__get_transform(wrapContent, 0);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, npCombineInfoPrefab, transform, 0, 0);
        this->fields.targetObject = Object;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.targetObject,
          (int32_t)Object,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
        if ( wrapContent )
        {
          wrapContent = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)wrapContent,
                                                     this->fields.displayTransformIndex,
                                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
          if ( this->fields.targetObject )
          {
            v24 = (SvtUseNpData_o *)wrapContent;
            wrapContent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       this->fields.targetObject,
                                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
            if ( wrapContent )
            {
              v25 = wrapContent;
              ServantNpInfoIconComponent__SetNpInfo(
                (ServantNpInfoIconComponent_o *)wrapContent,
                this->fields.baseUserServantEntity,
                0,
                v24,
                1,
                3.0,
                10.0,
                0);
              gameObject = UnityEngine_Component__get_gameObject(v25, 0);
              GameObjectExtensions__SetLocalPositionY(gameObject, -18.5, 0);
              v27 = UnityEngine_Component__get_gameObject(v25, 0);
              GameObjectExtensions__SetLocalScale_36747176(v27, this->fields.scaleOffset, 0);
              this->fields.isSelectBase = 1;
              NpCombineControl__SetSelectMaterialEnable(this, v28);
              NpCombineControl__SetSvtNpCombineData(this, v29);
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
                  wrapContent = (UnityEngine_Component_o *)this->fields.transformSvtName;
                  if ( wrapContent )
                  {
                    UILabel__set_text((UILabel_o *)wrapContent, transformInfo->fields.titleText, 0);
                    wrapContent = (UnityEngine_Component_o *)this->fields.transformSvtName;
                    if ( wrapContent )
                    {
                      UIWidget__set_color(
                        (UIWidget_o *)wrapContent,
                        this->fields._CondTitleLabelColor_k__BackingField,
                        0);
                      wrapContent = (UnityEngine_Component_o *)this->fields.transformBgSprite;
                      if ( wrapContent )
                      {
                        UIWidget__set_color(
                          (UIWidget_o *)wrapContent,
                          this->fields._CondTitleSpriteColor_k__BackingField,
                          0);
                        if ( v24 )
                        {
                          NpCombineControl__SetTransformNpMask(
                            this,
                            v24->fields.MaskFlag,
                            v24->fields.ClosedMessage,
                            v30);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_73:
      sub_1C93D2C(wrapContent, currentMoveIdx);
    }
    v31 = this->fields.svtNpDataList;
    if ( !v31 )
      goto LABEL_73;
    size = v31->fields._size;
    if ( size >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
      this->fields.isScrollNpInfo = 1;
      if ( !wrapContent )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0);
      v35 = this->fields.centerChild;
      v36 = (SpringPanel_OnFinished_o *)sub_1C93D20(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v36, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0);
      if ( !v35 )
        goto LABEL_73;
      v35->fields.onFinished = v36;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v35->fields.onFinished, (int32_t)v36, v37, v38, v39, v40, v41, v42);
      v34 = 2;
      isScrollNpInfo = this->fields.isScrollNpInfo;
    }
    else
    {
      isScrollNpInfo = 0;
      v34 = 1;
      this->fields.isScrollNpInfo = 0;
    }
    NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v14);
    idx = 0;
    v43 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__SyncScrollComponent__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v43,
      (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent___ctor__);
    v44 = 0;
    for ( i = 0; i != v34; ++i )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
      if ( !wrapContent )
        goto LABEL_73;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v72,
        (System_Collections_Generic_List_object__o *)wrapContent,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
      v73 = v72;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v73,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
        if ( !v46 )
          break;
        current = (SvtUseNpData_o *)v73.fields._current;
        if ( !v73.fields._current )
          sub_1C93D2C(v46, v47);
        if ( ((__int64)v73.fields._current[1].monitor & 0x80000000) == 0 )
        {
          v49 = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !v49 )
            sub_1C93D2C(0, v47);
          v50 = this->fields.npCombineInfoPrefab;
          v51 = UnityEngine_Component__get_transform(v49, 0);
          v52 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v50, v51, 0, 0);
          v53 = System_Int32__ToString_65934220((int32_t)&idx, (System_String_o *)StringLiteral_4973/*"D3"*/, 0);
          if ( !v52 )
            sub_1C93D2C(v53, v53);
          UnityEngine_Object__set_name(v52, v53, 0);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v52,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          v56 = (ServantNpInfoIconComponent_o *)Component_object;
          if ( !Component_object )
            sub_1C93D2C(0, v55);
          ServantNpInfoIconComponent__SetNpInfo(
            (ServantNpInfoIconComponent_o *)Component_object,
            this->fields.baseUserServantEntity,
            idx,
            current,
            0,
            0.0,
            0.0,
            0);
          ServantNpInfoIconComponent__SetMask(v56, current->fields.MaskFlag, current->fields.ClosedMessage, 0);
          v59 = v44 || current->fields.MaskFlag;
          v44 = v59 != 0;
          ++idx;
          if ( size >= 2 )
          {
            if ( i )
            {
              if ( !v43 )
                sub_1C93D2C(v57, v58);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       v43,
                       current->fields.svtDispNpId,
                       (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__get_Item__);
              TextScrollView = ServantNpInfoIconComponent__get_TextScrollView(v56, 0);
              TextScrollBar = ServantNpInfoIconComponent__get_TextScrollBar(v56, 0);
              if ( !Item )
                sub_1C93D2C(TextScrollBar, v63);
              SyncScrollComponent__AddTarget((SyncScrollComponent_o *)Item, TextScrollView, TextScrollBar, 0);
            }
            else
            {
              v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v56, 0);
              v65 = GameObjectExtensions__SafeGetComponent_object_(
                      v64,
                      (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_SyncScrollComponent___);
              v66 = ServantNpInfoIconComponent__get_TextScrollView(v56, 0);
              v67 = ServantNpInfoIconComponent__get_TextScrollBar(v56, 0);
              if ( !v65 )
                sub_1C93D2C(v67, v68);
              SyncScrollComponent__AddTarget((SyncScrollComponent_o *)v65, v66, v67, 0);
              if ( !v43 )
                sub_1C93D2C(v69, v70);
              System_Collections_Generic_Dictionary_int__object___set_Item(
                v43,
                current->fields.svtDispNpId,
                v65,
                (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__set_Item__);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v73,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    }
    if ( v44 )
      NpCombineControl__SetScrollViewSize(
        this,
        this->fields.EnableMaskScrollViewWidth,
        this->fields.DefaultScrollViewHeight,
        currentMoveIdx);
    if ( this->fields.isScrollNpInfo )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_73;
      LODWORD(wrapContent[1].monitor) = 700;
      UIWrapContent__WrapContent((UIWrapContent_o *)wrapContent, 0);
    }
    NpCombineControl__ResetScrollView(this, currentMoveIdx);
    currentMoveIdx = (const MethodInfo *)(unsigned int)this->fields.currentMoveIdx;
    if ( (int)currentMoveIdx >= 1 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_73;
      UIWrapContent__setScrollPos((UIWrapContent_o *)wrapContent, (int32_t)currentMoveIdx, 0);
    }
    this->fields.isSelectBase = 1;
    NpCombineControl__SetSelectMaterialEnable(this, currentMoveIdx);
    NpCombineControl__SetSvtNpCombineData(this, v71);
  }
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetEnableCombineBtn(NpCombineControl_o *this, bool isCombine, const MethodInfo *method)
{
  UIWidget_o *combineBtn; // x0
  _BOOL8 v5; // x1
  float v6; // s8
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  combineBtn = (UIWidget_o *)this->fields.combineBtn;
  if ( !combineBtn
    || (!(v5 = isCombine) ? (v6 = 0.5) : (v6 = 1.0),
        ((void (__fastcall *)(UIWidget_o *, _BOOL8, const MethodInfo *))combineBtn->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
          combineBtn,
          v5,
          combineBtn->klass->vtable._5_get_isAnchoredVertically.method),
        (combineBtn = (UIWidget_o *)this->fields.combineBtnTxt) == 0) )
  {
    sub_1C93D2C(combineBtn, isCombine);
  }
  v7.fields.a = 1.0;
  v7.fields.r = v6;
  v7.fields.g = v6;
  v7.fields.b = v6;
  UIWidget__set_color(combineBtn, v7, 0);
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
      sub_1C93D2C(scrollView, enabled);
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

  if ( (byte_4D34B0F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4D34B0F = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C93D2C(combineBtnBg, method);
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

  if ( (byte_4D34B03 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9286/*"N0"*/);
    byte_4D34B03 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65939396(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9286/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C93D2C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


void NpCombineControl__SetNpCombineData(NpCombineControl_o *this, SetCombineData_o *data, const MethodInfo *method)
{
  __int64 materialGrid; // x0
  __int64 v6; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  il2cpp_array_size_t max_length; // x23
  System_Collections_Generic_List_long__o *v9; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  unsigned __int64 v17; // x22
  struct System_Int64_array *v18; // x8
  int64_t v19; // x24
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v22; // x25
  UnityEngine_Transform_o *v23; // x26
  UnityEngine_Transform_o *v24; // x26
  Il2CppObject *Component_object; // x25
  NpMaterialSvtInfo_ClickDelegate_o *v26; // x26
  const MethodInfo *v27; // x3
  UserServantEntity_o *v28; // x2
  const MethodInfo *v29; // x5
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  const MethodInfo *v33; // x3
  int32_t v34; // w21
  const MethodInfo *v35; // x3
  struct System_Int64_array *v36; // x22
  il2cpp_array_size_t v37; // x8
  unsigned __int64 v38; // x23
  int64_t v39; // x20
  const MethodInfo *v40; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  _BOOL8 v45; // x0
  __int64 v46; // x1
  float v47; // s0
  int v48; // w8
  UILabel_o *qpLb; // x22
  struct SetLevelUpData_o *v50; // x8
  int64_t spendQpVal; // x9
  bool v52; // w20
  const MethodInfo *v54; // x1
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D34B0B & 1) == 0 )
  {
    sub_1C93AD4(&NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_9286/*"N0"*/);
    byte_4D34B0B = 1;
  }
  tmpTargetLv = 0;
  memset(&v56, 0, sizeof(v56));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_62;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_62;
  max_length = materialUsrSvtIdList->max_length;
  v9 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v9;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectMtUsrSvtIdList,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)max_length < 1 )
    return;
  v17 = 0;
  do
  {
    v18 = data->fields.materialUsrSvtIdList;
    if ( !v18 )
      goto LABEL_62;
    if ( v17 >= LODWORD(v18->max_length) )
LABEL_63:
      sub_1C93D34(materialGrid);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    v19 = v18->m_Items[v17];
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
    v22 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v23 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0);
    if ( !materialGrid )
      goto LABEL_62;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)materialGrid, 0);
    if ( !v23 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v23, localPosition, 0);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
    v24 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_4D2A139 )
    {
      materialGrid = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    if ( !v24 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v22,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v26 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_1C93D20(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v26,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      v27);
    if ( !Component_object )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo((NpMaterialSvtInfo_o *)Component_object, v17, v28, v19, v26, v29);
    materialGrid = (__int64)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_62;
    v30 = *(_QWORD *)(materialGrid + 16);
    v31 = Method_System_Collections_Generic_List_long__Add__;
    ++*(_DWORD *)(materialGrid + 28);
    if ( !v30 )
      goto LABEL_62;
    v32 = *(int *)(materialGrid + 24);
    if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        (System_Collections_Generic_List_long__o *)materialGrid,
        v19,
        *(const MethodInfo_38619D0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v32 + 1;
      *(_QWORD *)(v30 + 8 * v32 + 32) = v19;
    }
    ++v17;
  }
  while ( (unsigned int)max_length != v17 );
  materialGrid = (__int64)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_62;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0);
  materialGrid = NpCombineControl__GetNpLv(
                   this->fields.baseUserServantEntity,
                   data->fields.materialUsrSvtIdList,
                   &tmpTargetLv,
                   v33);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_62;
  v34 = materialGrid;
  materialGrid = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0);
  this->fields.isExceedMaxLv = materialGrid & 1;
  this->fields.isCombineSvt = 0;
  v36 = data->fields.materialUsrSvtIdList;
  if ( !v36 )
    goto LABEL_62;
  v37 = v36->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v37 )
        goto LABEL_63;
      v39 = v36->m_Items[v38];
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v39,
                                (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_62;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = NpCombineControl__CheckConfirm(v39, v40);
      if ( (materialGrid & 1) != 0 )
        break;
      LODWORD(v37) = v36->max_length;
      if ( (__int64)++v38 >= (int)v37 )
        goto LABEL_39;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_39:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_62;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v34, v35);
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      combineEventList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v56 = v55;
    while ( 1 )
    {
      v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v45 )
        break;
      if ( !v56.fields._current )
        sub_1C93D2C(v45, v46);
      if ( HIDWORD(v56.fields._current[1].klass) == 10 )
      {
        v47 = *(float *)&v56.fields._current[3].monitor * (float)*p_spendQpVal;
        v48 = (int)v47;
        if ( v47 == INFINITY )
          v48 = 0x80000000;
        *p_spendQpVal = v48;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_65934220((int)this + 488, (System_String_o *)StringLiteral_9286/*"N0"*/, 0);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0);
  materialGrid = (__int64)this->fields.qpLb;
  v59.fields.g = 0.0;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
    v59.fields.g = 1.0;
  if ( !materialGrid )
    goto LABEL_62;
  v59.fields.r = 1.0;
  v59.fields.a = 1.0;
  v59.fields.b = v59.fields.g;
  UIWidget__set_color((UIWidget_o *)materialGrid, v59, 0);
  v50 = this->fields.lvUpData;
  if ( !v50 )
    goto LABEL_62;
  v50->fields.nextLv = v34;
  spendQpVal = this->fields.spendQpVal;
  v50->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v60.fields.r = 1.0;
      v52 = 1;
      v60.fields.g = 1.0;
      goto LABEL_60;
    }
LABEL_62:
    sub_1C93D2C(materialGrid, v6);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v52 = 0;
  v60.fields.r = 1.0;
  v60.fields.g = 0.0;
LABEL_60:
  v60.fields.b = v60.fields.g;
  v60.fields.a = v60.fields.r;
  UIWidget__set_color((UIWidget_o *)materialGrid, v60, 0);
  this->fields._IsExeCombine_k__BackingField = v52;
  NpCombineControl__SetExeBtnState(this, v54);
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
  v4 = System_Int32__ToString((int)this + 488, 0);
  if ( !qpLb || (UILabel__set_text(qpLb, v4, 0), (v4 = (System_String_o *)this->fields.qpLb) == 0) )
    sub_1C93D2C(v4, v5);
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v4, v7, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetScrollViewSize(NpCombineControl_o *this, float width, float height, const MethodInfo *method)
{
  long double v4; // q8
  long double v5; // q9
  UnityEngine_Object_o *scrollView; // x20
  struct UIPanel_o *v8; // x0
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v12; // x8

  v4 = *(long double *)&height;
  v5 = *(long double *)&width;
  if ( (byte_4D34B11 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34B11 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    v10 = this->fields.scrollView;
    if ( v10 )
    {
      mPanel = (UnityEngine_Object_o *)v10->fields.mPanel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(mPanel, 0, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        return;
      v12 = this->fields.scrollView;
      if ( v12 )
      {
        v8 = v12->fields.mPanel;
        if ( v8 )
        {
          ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, long double, long double))v8->klass->vtable._18_SetRect.methodPtr)(
            v8,
            v8->klass->vtable._18_SetRect.method,
            0.0,
            0.0,
            v5,
            v4);
          return;
        }
      }
    }
    sub_1C93D2C(v8, v9);
  }
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
    sub_1C93D2C(preSelectBaseLb, method);
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
  if ( (byte_4D34B14 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_7245/*"HEADER_MSG_NPUP_MATERIAL"*/);
    sub_1C93AD4(&StringLiteral_5816/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C93AD4(&StringLiteral_7491/*"INFO_MSG_NPUP_BASE"*/);
    sub_1C93AD4(&StringLiteral_12277/*"SHORT_QP_INFO_MSG"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34B14 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_25:
    sub_1C93D2C(detailInfoLb, *(_QWORD *)&state);
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
      v7 = &StringLiteral_5816/*"EXE_SUMMON_COMBINE_TXT"*/;
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
      v7 = &StringLiteral_12277/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7245/*"HEADER_MSG_NPUP_MATERIAL"*/;
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
    v7 = &StringLiteral_7491/*"INFO_MSG_NPUP_BASE"*/;
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
  SetLevelUpData_o *v21; // x26
  struct SetLevelUpData_o **p_lvUpData; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int64_t userQP; // x8
  GrandQuestFolderBoardItem_o *v50; // x0
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D34B0A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1C93AD4(&SetLevelUpData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D34B0A = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = (char *)this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     0,
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
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
        v10 = sub_1C69B68(v9);
      Item = *(char **)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (Item[309] & 1) == 0 )
        Item = (char *)sub_1C69B68(v9);
      v11 = (DataManager_o *)**((_QWORD **)Item + 23);
      if ( !v11 )
        goto LABEL_29;
      Item = (char *)DataManager__GetMasterData_object_(
                       v11,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
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
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
                  (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v19, &tmpTargetLv, v20);
        }
        v21 = (SetLevelUpData_o *)sub_1C93D20(SetLevelUpData_TypeInfo);
        SetLevelUpData___ctor(v21, 0);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = v21;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.lvUpData, (int32_t)v21, v23, v24, v25, v26, v27, v28);
        Item = (char *)this->fields.lvUpData;
        if ( Item )
        {
          *((_DWORD *)Item + 4) = v6;
          *((_DWORD *)Item + 5) = v6;
          *((_QWORD *)Item + 3) = 1;
          Item[112] = v7[65];
          v35 = *((_QWORD *)v13 + 4);
          *((_QWORD *)Item + 4) = v35;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(Item + 32), v35, v29, v30, v31, v32, v33, v34);
          Item = (char *)*p_lvUpData;
          if ( *p_lvUpData )
          {
            v42 = *((_QWORD *)v13 + 3);
            *((_QWORD *)Item + 5) = v42;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(Item + 40), v42, v36, v37, v38, v39, v40, v41);
            Item = (char *)*p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_DWORD *)Item + 16) = v8;
              *((_DWORD *)Item + 17) = NpLv;
              *((_DWORD *)Item + 19) = this->fields.spendQpVal;
              userQP = this->fields.userQP;
              *((_QWORD *)Item + 12) = 0;
              v50 = (GrandQuestFolderBoardItem_o *)(Item + 96);
              v50[-1].fields._ListCreatedTime_k__BackingField = userQP;
              sub_1C93A78(v50, 0, v43, v44, v45, v46, v47, v48);
              return;
            }
          }
        }
LABEL_29:
        sub_1C93D2C(Item, v4);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v15);
      Item = (char *)this->fields.qpLb;
      if ( !Item )
        goto LABEL_29;
      UILabel__set_text((UILabel_o *)Item, (System_String_o *)StringLiteral_1116/*"0"*/, 0);
    }
  }
}


void NpCombineControl__SetTransformNpMask(
        NpCombineControl_o *this,
        bool maskFlag,
        System_String_o *closedMessage,
        const MethodInfo *method)
{
  UnityEngine_Object_o *transformMaskObject; // x22
  UnityEngine_Object_o *transformMaskLabel; // x22
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_4D34B10 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34B10 = 1;
  }
  transformMaskObject = (UnityEngine_Object_o *)this->fields.transformMaskObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(transformMaskObject, 0, 0) )
  {
    transformMaskLabel = (UnityEngine_Object_o *)this->fields.transformMaskLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(transformMaskLabel, 0, 0) )
    {
      v10 = this->fields.transformMaskObject;
      if ( v10 )
      {
        if ( !maskFlag )
        {
          UnityEngine_GameObject__SetActive(v10, 0, 0);
          return;
        }
        UnityEngine_GameObject__SetActive(v10, 1, 0);
        v10 = (UnityEngine_GameObject_o *)this->fields.transformMaskLabel;
        if ( v10 )
        {
          UILabel__set_text((UILabel_o *)v10, closedMessage, 0);
          return;
        }
      }
      sub_1C93D2C(v10, v9);
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