void NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_c *v3; // x0
  int v4; // w8

  if ( (byte_5974B91 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_5974B91 = 1;
  }
  v3 = CombineMenuControl_TypeInfo;
  this->fields.EnableMaskScrollViewWidth = 684.0;
  v4 = *(&v3->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.DefaultScrollViewWidth = 0x432A0000442F0000LL;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool NpCombineControl__CheckConfirm(int64_t myUserSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5974B8C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_55889436((UserServantEntity_o *)Entity, v6);
}


bool NpCombineControl__CheckConfirm_55889436(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
{
  UserServantEntity_o *v2; // x19
  int64_t hiddenValue; // x8
  int v4; // w9
  int v5; // w11

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
    sub_2213CDC(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        sub_2213CE4(selectUsrSvtEnt);
      if ( *(int *)(hiddenValue + 4LL * v5 + 32) >= 2 )
        return 1;
    }
    while ( (v4 & ~(v4 >> 31)) != ++v5 );
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
  if ( (byte_5974B87 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    this = (NpCombineControl_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B87 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0)) == 0
    || !resData )
  {
    sub_2213CDC(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.baseUserServantEntity);
}


void NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array *assetList; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5974B81 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B81 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_2213CDC(wrapContent, method);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage_47506132(assetList, 0);
    this->fields.assetList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, 0, v9, v10, v11, v12, v13, v14);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x8
  int v9; // w9

  if ( (byte_5974B82 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B82 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_2213CDC(materialGrid, method);
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
  {
    v9 = selectMtUsrSvtIdList->fields._version + 1;
    selectMtUsrSvtIdList->fields._size = 0;
    selectMtUsrSvtIdList->fields._version = v9;
  }
}


UserServantEntity_o *NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  MissionNaviTransitionBoardItem_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q0
  __int128 v7; // q1
  int v8; // w8
  int64_t v9; // x20
  Il2CppObject *Entity; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_5974B80 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (NpCombineControl_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B80 = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (MissionNaviTransitionBoardItem_o *)&v2->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  v7 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v19.fields.currentCryptoKey = v6;
  *(_OWORD *)&v19.fields.fakeValue = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v18 = v19;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v18, 0);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_2213CDC(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v9,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (MissionNaviTransitionBoardItem_c *)Entity;
  sub_2213A04(p_baseUserServantEntity, (int32_t)Entity, v11, v12, v13, v14, v15, v16);
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
  DataManager_o **monitor; // x8
  int v16; // w23
  int32_t v17; // w26
  int32_t v18; // w27
  DataManager_o *v19; // x22
  __int64 v20; // x1
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x25
  int32_t v22; // w24

  if ( (byte_5974B7B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5974B7B = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v7);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&MasterData_object[19].klass + 5) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_224B908(v7);
  monitor = (DataManager_o **)MasterData_object[11].monitor;
  v16 = condLimitCount - 1;
  if ( index >= 1 )
    v17 = -1;
  else
    v17 = condLimitCount - 1;
  if ( index < 1 )
    v18 = -1;
  else
    v18 = condLimitCount;
  v19 = *monitor;
  if ( !*monitor )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        *monitor,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_37;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         (ServantTreasureDeviceReleaseMaster_o *)MasterData_object,
                         svtId,
                         0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v20);
  MasterData_object = (Il2CppObject *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0);
  v22 = (int)MasterData_object;
  if ( v18 < 0 || (_DWORD)MasterData_object == v18 || !fixedFlag )
  {
    condLimitCount = (int)MasterData_object;
  }
  else if ( (int)MasterData_object >= 11 )
  {
    if ( !CorrespondsCostume )
      goto LABEL_37;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          (int32_t)MasterData_object,
                                          (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      condLimitCount = v22;
    else
      condLimitCount = v18;
  }
  if ( v17 < 0 || condLimitCount <= v17 || !fixedFlag )
  {
    v16 = condLimitCount;
  }
  else if ( condLimitCount >= 11 )
  {
    if ( !CorrespondsCostume )
      goto LABEL_37;
    if ( System_Collections_Generic_HashSet_int___Contains(
           CorrespondsCostume,
           condLimitCount,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v16 = v17;
    }
    else
    {
      v16 = condLimitCount;
    }
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        v19,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_object )
LABEL_37:
    sub_2213CDC(MasterData_object, *(_QWORD *)&svtId);
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           v16,
           0);
}


// local variable allocation has failed, the output may be wrong!
int32_t NpCombineControl__GetLimitCountForSingle(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_5974B7A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_5974B7A = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v4);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v4);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0 )
  {
    sub_2213CDC(MasterData_object, *(_QWORD *)&svtId);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           cardLimitCount,
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
  __int64 v19; // x23
  __int64 v20; // x25
  int32_t v21; // w26
  DataManager_o *v22; // x27
  TreasureDvcInfo_o *v23; // x23
  int32_t v24; // w0
  struct System_Int32_array *hideCardChara; // x8
  int *p_saveNameList; // x9
  TreasureDvcMaster_o *v27; // x28
  TreasureDvcInfo_o *v28; // x19
  int32_t v29; // w23
  __int64 v30; // x25
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  __int64 v33; // x23
  __int64 v34; // x29
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x1
  __int64 v42; // d0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  int32_t DispLimitCount; // w23
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t v53; // w1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  char v60; // w26
  NpCombineControl_o *v61; // x0
  const MethodInfo *v62; // x6
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  __int64 v73; // x8
  TreasureDvcInfo_o *v75; // [xsp+0h] [xbp-A0h]
  ServantTreasureDeviceAddEntity_o *v76; // [xsp+8h] [xbp-98h]
  System_Int32_array *v77; // [xsp+10h] [xbp-90h]
  int32_t *p_cardId; // [xsp+18h] [xbp-88h]
  int v79; // [xsp+20h] [xbp-80h]
  bool v80; // [xsp+24h] [xbp-7Ch]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_5974B79 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&SvtUseNpData_TypeInfo);
    byte_5974B79 = 1;
  }
  tdExplanation = 0;
  tdName = 0;
  *(_QWORD *)tdGuageCount = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v10);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v10);
  MasterData_object = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_object )
    goto LABEL_41;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_41;
  v14 = (TreasureDvcMaster_o *)MasterData_object;
  FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(tdAddEntity, 0);
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                         (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v16 = 8;
    v75 = tdInfo;
    v76 = tdAddEntity;
    v77 = FixedCardLimitCounts;
    p_cardId = &tdInfo->fields.cardId;
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
      v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      v21 = *((_DWORD *)&treasureDeviceIds->obj.klass + v16);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
      *(_QWORD *)&v84.fields.currentCryptoKey = v19;
      *(_QWORD *)&v84.fields.fakeValue = v20;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v84, 0);
      if ( !v14 )
        break;
      MasterData_object = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                             v14,
                                             (int32_t)MasterData_object,
                                             v21,
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
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(usrSvtData->fields.svtId, 0);
      MasterData_object = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v24, v21, 0);
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
      v29 = *((_DWORD *)&hideCardChara->obj.klass + v16);
      v79 = *p_saveNameList;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
      v80 = System_Convert__ToBoolean_76679516(v29, 0);
      v30 = sub_2213CCC(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v30, v31);
      v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
      *(_QWORD *)&v85.fields.currentCryptoKey = v34;
      *(_QWORD *)&v85.fields.fakeValue = v33;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v85, 0);
      if ( !v30 )
        break;
      *(_DWORD *)(v30 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v30 + 20) = v21;
      v41 = *(_QWORD *)&v22->fields._DispLog;
      v42 = *(_QWORD *)&v28->fields.id;
      *(_QWORD *)(v30 + 32) = v41;
      *(_QWORD *)(v30 + 24) = v42;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 32), v41, v35, v36, v37, v38, v39, v40);
      m_CancellationTokenSource = v22->fields.m_CancellationTokenSource;
      *(_QWORD *)(v30 + 40) = m_CancellationTokenSource;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v30 + 40),
        (int32_t)m_CancellationTokenSource,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      *(_DWORD *)(v30 + 48) = v79;
      *(_DWORD *)(v30 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v50);
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0);
      v53 = (int)tdExplanation;
      *(_QWORD *)(v30 + 56) = tdExplanation;
      *(_DWORD *)(v30 + 76) = LimitCountByImageLimitCostumeIn;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 56), v53, v54, v55, v56, v57, v58, v59);
      v60 = 1;
      *(_BYTE *)(v30 + 64) = v80;
      *(_BYTE *)(v30 + 65) = 1;
      if ( v77 )
      {
        tdAddEntity = v76;
        if ( v18 >= LODWORD(v77->max_length) )
LABEL_42:
          sub_2213CE4(MasterData_object);
        v14 = v27;
        v60 = *((_DWORD *)&v77->obj.klass + v16) != 0;
      }
      else
      {
        tdAddEntity = v76;
        v14 = v27;
      }
      tdInfo = v75;
      ServantTreasureDeviceAddEntity__GetMaskInfo(
        tdAddEntity,
        v16 - 8,
        (bool *)(v30 + 84),
        (System_String_o **)(v30 + 88),
        0);
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             v61,
                                             *(_DWORD *)(v30 + 16),
                                             *(_DWORD *)(v30 + 72),
                                             tdAddEntity->fields.condLimitCount,
                                             v16 - 8,
                                             v60,
                                             v62);
      *(_DWORD *)(v30 + 68) = (_DWORD)MasterData_object;
      if ( !v8 )
        break;
      items = v8->fields._items;
      v70 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v30,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v72[4] = (Il2CppClass *)v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v72 + 4), v30, v63, v64, v65, v66, v67, v68);
      }
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                             (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
      v73 = v16 - 7;
      ++v16;
      if ( v73 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v8;
    }
LABEL_41:
    sub_2213CDC(MasterData_object, v9);
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
  int32_t treasureDeviceLv1; // w9
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-58h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_5974B8A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseUsrSvtData = (UserServantEntity_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B8A = 1;
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
    sub_2213CDC(baseUsrSvtData, mtSvtIdList);
  }
  v8 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_2213CE4(baseUsrSvtData);
    v9 = v5->m_Items[v8];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v9,
                                              (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_50192116(
                                                v10,
                                                &tdMaxLv[1],
                                                tdMaxLv,
                                                0);
      treasureDeviceLv1 = tdMaxLv[1];
    }
    LODWORD(max_length) = v5->max_length;
    ++v8;
    mtSvtIdList = (System_Int64_array *)(unsigned int)(treasureDeviceLv1 + *tmpTargetLv);
    *tmpTargetLv = (int)mtSvtIdList;
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

  if ( (byte_5974B8B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B8B = 1;
  }
  if ( currentLv >= resNpLv )
    return 0;
  v7 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0 )
    {
      sub_2213CDC(Instance, v9);
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
  __int64 v5; // x0
  __int64 MasterData_object; // x0
  DataManager_o **v7; // x8
  DataManager_o *v8; // x22
  ServantTreasureDeviceAddMaster_o *v9; // x29
  __int64 v10; // x23
  __int64 v11; // x24
  int32_t v12; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  struct System_Int32_array *treasureDeviceIds; // x8
  Il2CppObject *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t v17; // w24
  int32_t TransformedServantId; // w25
  __int64 v19; // x27
  int32_t *p_cardId; // x8
  int32_t v21; // w21
  NpCombineControl_o *v22; // x19
  int32_t v23; // w28
  __int64 v24; // x26
  const MethodInfo *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int v32; // w9
  TreasureDvcInfo_o *v33; // x8
  __int64 v34; // x1
  ServantTreasureDeviceAddMaster_o *v35; // x23
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t CommandCardLimitCountStage; // w0
  __int64 v44; // x1
  int32_t v45; // w29
  int32_t DispLimitCountStage; // w0
  int32_t v47; // w0
  int32_t LimitCountByImageLimitCostumeIn; // w0
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v56; // x1
  bool IsTransformServant_k__BackingField; // w8
  __int64 v58; // x28
  __int64 v59; // x29
  int32_t v60; // w0
  ServantTreasureDeviceAddEntity_o *v61; // x0
  const MethodInfo *v62; // x3
  ServantTreasureDeviceAddEntity_o *v63; // x25
  int32_t v64; // w0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x1
  __int64 v76; // x21
  __int64 v77; // x22
  int32_t v78; // w0
  const MethodInfo *v79; // x4
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-88h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+20h] [xbp-70h] BYREF
  TreasureDvcInfo_o *v86; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_5974B78 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&SvtUseNpData_TypeInfo);
    byte_5974B78 = 1;
  }
  tdInfo = 0;
  v86 = 0;
  tdName = 0;
  tdExplanation = 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  *(_QWORD *)tdGuageCount = 0;
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v3);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_WORD *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_224B908(v3);
  v7 = *(DataManager_o ***)(MasterData_object + 184);
  v8 = *v7;
  if ( !*v7 )
    goto LABEL_49;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 *v7,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_49;
  v9 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtData);
  *(_QWORD *)&v87.fields.currentCryptoKey = v10;
  *(_QWORD *)&v87.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v87, 0);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                        usrSvtData->fields.limitCount,
                        0);
  if ( !v9 )
    goto LABEL_49;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v9, v12, MasterData_object, 0, 0, 0, 0);
  CombineMenuControl__SetTransformInfo((CombineMenuControl_o *)this, 0);
  if ( !EnableEntity )
    goto LABEL_15;
  treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
  if ( !treasureDeviceIds )
    goto LABEL_49;
  if ( SLODWORD(treasureDeviceIds->max_length) > 1 )
  {
    UserServantEntity__getTreasureDeviceInfo(usrSvtData, &v86, -1, -1, 0, 0);
    v76 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v77 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v75);
    *(_QWORD *)&v89.fields.currentCryptoKey = v76;
    *(_QWORD *)&v89.fields.fakeValue = v77;
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v89, 0);
    EventTutorialMaster__CheckTutorial(-1, 69, 0, v78, 0, 0, 0, 0);
    return NpCombineControl__GetNpAddDataList(this, usrSvtData, v86, EnableEntity, v79);
  }
  else
  {
LABEL_15:
    v15 = DataManager__GetMasterData_object_(
            v8,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal >= 1 )
    {
      v17 = 0;
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
        v19 = MasterData_object;
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
                                       *(_DWORD *)(v19 + 16),
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
        MasterData_object = (__int64)this->fields.baseUserServantEntity;
        if ( !MasterData_object )
          break;
        v21 = *p_cardId;
        v22 = this;
        v23 = UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)MasterData_object, 0) ? v17 : -1;
        v24 = sub_2213CCC(SvtUseNpData_TypeInfo);
        SvtUseNpData___ctor((SvtUseNpData_o *)v24, v25);
        if ( !v24 )
          break;
        v32 = *(_DWORD *)(v19 + 16);
        v33 = tdInfo;
        *(_DWORD *)(v24 + 16) = TransformedServantId;
        *(_DWORD *)(v24 + 20) = v32;
        *(_DWORD *)(v24 + 24) = v32;
        if ( !v33 )
          break;
        v34 = *(_QWORD *)(v19 + 32);
        v35 = v9;
        *(_DWORD *)(v24 + 28) = v33->fields.lv;
        *(_QWORD *)(v24 + 32) = v34;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 32), v34, v26, v27, v28, v29, v30, v31);
        v36 = *(_QWORD *)(v19 + 24);
        *(_QWORD *)(v24 + 40) = v36;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 40), v36, v37, v38, v39, v40, v41, v42);
        *(_DWORD *)(v24 + 48) = v21;
        CommandCardLimitCountStage = UserServantEntity__GetCommandCardLimitCountStage(usrSvtData, v23, 0, 0);
        v45 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(CommandCardLimitCountStage, 0);
        if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v44);
        *(_DWORD *)(v24 + 72) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v45, 0);
        DispLimitCountStage = UserServantEntity__GetDispLimitCountStage(usrSvtData, v23, 0, 0, 0);
        v47 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStage, 0);
        LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v47, 0);
        v49 = (int)tdExplanation;
        *(_QWORD *)(v24 + 56) = tdExplanation;
        *(_DWORD *)(v24 + 76) = LimitCountByImageLimitCostumeIn;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 56), v49, v50, v51, v52, v53, v54, v55);
        IsTransformServant_k__BackingField = v22->fields._IsTransformServant_k__BackingField;
        *(_BYTE *)(v24 + 64) = 0;
        *(_BYTE *)(v24 + 65) = IsTransformServant_k__BackingField;
        v58 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
        v59 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
        *(_QWORD *)&v88.fields.currentCryptoKey = v58;
        *(_QWORD *)&v88.fields.fakeValue = v59;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v88, 0);
        v9 = v35;
        v61 = ServantTreasureDeviceAddMaster__GetEnableEntity(
                v35,
                TransformedServantId,
                v60,
                0,
                *(_DWORD *)(v19 + 16),
                0,
                0);
        if ( v61 )
        {
          v63 = v61;
          v64 = System_Array__IndexOf_int_(
                  v61->fields.treasureDeviceIds,
                  *(_DWORD *)(v19 + 16),
                  (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
          ServantTreasureDeviceAddEntity__GetMaskInfo(v63, v64, (bool *)(v24 + 84), (System_String_o **)(v24 + 88), 0);
        }
        MasterData_object = NpCombineControl__GetLimitCountForSingle(
                              (NpCombineControl_o *)v61,
                              *(_DWORD *)(v24 + 16),
                              *(_DWORD *)(v24 + 72),
                              v62);
        *(_DWORD *)(v24 + 68) = MasterData_object;
        if ( !v16 )
          break;
        items = v16->fields._items;
        v72 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 4), v24, v65, v66, v67, v68, v69, v70);
        }
        ++v17;
        this = v22;
        if ( v17 >= v22->fields.transformTotal )
          return (System_Collections_Generic_List_SvtUseNpData__o *)v16;
      }
LABEL_49:
      sub_2213CDC(MasterData_object, usrSvtData);
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
  __int64 v4; // x1
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  UIWidget_o *transformSvtName; // x20
  UIWidget_o *transformBgSprite; // x19
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B75 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_9623/*"NEED_QP_INFO"*/);
    byte_5974B75 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_19;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_19;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  currentInfoLb = (UILabel_o *)this->fields.maxLvStatusInfo;
  if ( !currentInfoLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
  needQpLb = this->fields.needQpLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9623/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_19;
  UILabel__set_text(needQpLb, (System_String_o *)currentInfoLb, 0);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  currentInfoLb = (UILabel_o *)System_Int32__ToString((int)this + 520, 0);
  if ( !qpLb )
    goto LABEL_19;
  UILabel__set_text(qpLb, (System_String_o *)currentInfoLb, 0);
  currentInfoLb = this->fields.qpLb;
  if ( !currentInfoLb )
    goto LABEL_19;
  v13.fields.r = 1.0;
  v13.fields.g = 1.0;
  v13.fields.b = 1.0;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentInfoLb, v13, 0);
  NpCombineControl__SetHaveQpInfo(this, v7);
  NpCombineControl__SetSelectMaterialEnable(this, v8);
  currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo;
  if ( !currentInfoLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0);
  currentInfoLb = (UILabel_o *)this->fields.arrowInfo;
  if ( !currentInfoLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v9);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v10);
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
    sub_2213CDC(currentInfoLb, method);
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
  __int64 v9; // x1
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  System_String_o *v23; // x2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974B73 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974B73 = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/, 0);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineEventList,
    (int32_t)combineEventList,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v19 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v19 && v19->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      v19,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v20 )
        break;
      if ( !v26.fields._current )
        sub_2213CDC(v20, v21);
      if ( *(_DWORD *)((char *)&v26.fields._current->klass + (unsigned __int64)&dword_14) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_2213CDC(v20, v21);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v20,
          this->fields.eventNoticeImg,
          *(EventEntity_o **)((char *)&v26.fields._current->klass + (unsigned __int64)off_50),
          v22);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_2213CDC(SelfUserGame, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  NpCombineControl__SetTransformNpMask(this, 0, v23, v24);
  NpCombineControl__SetScrollViewSize(
    this,
    this->fields.DefaultScrollViewWidth,
    this->fields.DefaultScrollViewHeight,
    v25);
}


void NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *charaGraph; // x20
  MissionNaviTransitionBoardItem_o *p_charaGraph; // x19
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974B72 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B72 = 1;
  }
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  NpCombineControl__InitInfo(this, v5);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_2213A04(p_charaGraph, 0, v11, v12, v13, v14, v15, v16);
      return;
    }
LABEL_12:
    sub_2213CDC(helpBtn, v3);
  }
}


bool NpCombineControl__IsTransformedNpDispUnavailable(NpCombineControl_o *this, const MethodInfo *method)
{
  _BOOL4 IsTransformServant_k__BackingField; // w8
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x8
  void *Master_object; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v7; // x8
  TreasureDvcMaster_o *v8; // x20
  int32_t transformTotal; // w21
  int32_t size; // w22
  int32_t v11; // w0
  int32_t v12; // w21
  int32_t v13; // w22
  int32_t v14; // w3
  TreasureDvcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5974B7D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_2213A60(&System_Math_TypeInfo);
    byte_5974B7D = 1;
  }
  IsTransformServant_k__BackingField = this->fields._IsTransformServant_k__BackingField;
  entity = 0;
  if ( !IsTransformServant_k__BackingField )
    return 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( !svtNpDataList || svtNpDataList->fields._size < 2 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  v7 = this->fields.svtNpDataList;
  if ( !v7 )
LABEL_24:
    sub_2213CDC(Master_object, v6);
  v8 = (TreasureDvcMaster_o *)Master_object;
  transformTotal = this->fields.transformTotal;
  size = v7->fields._size;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v11 = System_Math__Min_77153596(transformTotal, size, 0);
  if ( v11 < 2 )
    return 0;
  v12 = v11;
  v13 = 1;
  while ( 1 )
  {
    Master_object = this->fields.svtNpDataList;
    if ( !Master_object )
      goto LABEL_24;
    Master_object = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Master_object,
                      v13,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    if ( Master_object )
    {
      v14 = *((_DWORD *)Master_object + 5);
      if ( v14 >= 1 )
      {
        if ( !v8 )
          goto LABEL_24;
        if ( TreasureDvcMaster__TryGetEntityCheckServantOverwrite(v8, &entity, *((_DWORD *)Master_object + 4), v14, 0) )
        {
          Master_object = entity;
          if ( !entity )
            goto LABEL_24;
          if ( TreasureDvcEntity__IsDispUnavailable(entity, 0) )
            return 1;
        }
      }
    }
    if ( v12 == ++v13 )
      return 0;
  }
}


void NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_5974B8E & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    byte_5974B8E = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0 )
  {
    sub_2213CDC(this, method);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.combineItemInfoList;
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

  if ( (byte_5974B8F & 1) == 0 )
  {
    sub_2213A60(&Method_NpCombineControl_OnClickArrow__);
    byte_5974B8F = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
    sub_2213CDC(wrapContent, v7);
  }
  UICenterOnChild__CenterOn_56214248(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0, 0);
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5974B86 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974B86 = 1;
  }
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  memset(&v11, 0, sizeof(v11));
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v10,
    selectMtUsrSvtIdList,
    (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v11 = v10;
  v10.fields._list = 0;
  *(_QWORD *)&v10.fields._index = &v11;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v11,
            (const MethodInfo_40F7FA8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v11.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_2213CDC(0, v8);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v11,
    (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_2213CDC(selectMtUsrSvtIdList, method);
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

  if ( (byte_5974B89 & 1) == 0 )
  {
    sub_2213A60(&Method_NpCombineControl_OnClickMaterialSelectList__);
    byte_5974B89 = 1;
  }
  v3 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_NpCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_2213CDC(0, v5);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0);
}


void NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  int32_t baseSvtId; // w8
  UnityEngine_Object_o *targetObject; // x20
  UnityEngine_GameObject_o *Component_object; // x0
  ServantNpInfoIconComponent_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x21
  float value; // s0
  int32_t displayTransformIndex; // w8
  int32_t transformTotal; // w9
  SvtUseNpData_o *Item; // x21
  const MethodInfo *v12; // x3
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v18; // x9
  float *v19; // x10
  float *v20; // x11
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B90 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_2213A60(&Method_NpCombineControl_OnClickSwitchButton__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B90 = 1;
  }
  baseSvtId = this->fields.baseSvtId;
  transformInfo = 0;
  if ( baseSvtId >= 1 )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
    {
      Component_object = this->fields.targetObject;
      if ( !Component_object )
        goto LABEL_31;
      Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       Component_object,
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
      if ( !this->fields.svtNpDataList )
        goto LABEL_31;
      v6 = (ServantNpInfoIconComponent_o *)Component_object;
      Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
      if ( !v6 )
        goto LABEL_31;
      v7 = Component_object;
      Component_object = (UnityEngine_GameObject_o *)ServantNpInfoIconComponent__get_TextScrollBar(v6, 0);
      if ( !Component_object )
        goto LABEL_31;
      value = UIProgressBar__get_value((UIProgressBar_o *)Component_object, 0);
      if ( !v7 )
        goto LABEL_31;
      displayTransformIndex = this->fields.displayTransformIndex;
      transformTotal = this->fields.transformTotal;
      Component_object = (UnityEngine_GameObject_o *)this->fields.svtNpDataList;
      *(float *)&v7[3].monitor = value;
      method = (const MethodInfo *)(unsigned int)((displayTransformIndex + 1) % transformTotal);
      this->fields.displayTransformIndex = (int)method;
      if ( !Component_object )
        goto LABEL_31;
      Item = (SvtUseNpData_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)Component_object,
                                 (int32_t)method,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
      ServantNpInfoIconComponent__SetNpInfo(v6, this->fields.baseUserServantEntity, 0, Item, 1, 0.0, 0.0, 0);
      if ( !Item )
        goto LABEL_31;
      NpCombineControl__SetTransformNpMask(this, Item->fields.MaskFlag, Item->fields.ClosedMessage, v12);
    }
  }
  if ( !this->fields._IsTransformServant_k__BackingField )
    goto LABEL_27;
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
LABEL_31:
    sub_2213CDC(Component_object, method);
  }
  UILabel__set_text((UILabel_o *)Component_object, transformInfo->fields.titleText, 0);
  if ( this->fields._IsSaveTransformServant_k__BackingField )
  {
    Component_object = (UnityEngine_GameObject_o *)this->fields.transformSvtName;
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
      p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
      if ( !Component_object )
        goto LABEL_31;
    }
    else
    {
      p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
      p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
      p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
      p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
      if ( !Component_object )
        goto LABEL_31;
    }
    v24.fields.a = *p_a;
    v24.fields.b = *p_b;
    v24.fields.g = *p_g;
    v24.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)Component_object, v24, 0);
    Component_object = (UnityEngine_GameObject_o *)this->fields.transformBgSprite;
    if ( this->fields.displayTransformIndex <= 0 )
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
      v18 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
      v19 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
      v20 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
      if ( !Component_object )
        goto LABEL_31;
    }
    else
    {
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
      v18 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
      v19 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
      v20 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
      if ( !Component_object )
        goto LABEL_31;
    }
    v25.fields.a = *v20;
    v25.fields.b = *v19;
    v25.fields.g = *v18;
    v25.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)Component_object, v25, 0);
  }
LABEL_27:
  v21 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_2213A78(Method_NpCombineControl_OnClickSwitchButton__);
  v22 = (System_Reflection_MethodBase_o *)sub_2213A44(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
}


void NpCombineControl__RefreshSvtNpCombineEndShowServant(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int64_t klass; // x8
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v21; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  UnityEngine_Object_o *charaGraph; // x20
  MissionNaviTransitionBoardItem_o *p_charaGraph; // x19
  __int64 v28; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_5974B74 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_9623/*"NEED_QP_INFO"*/);
    byte_5974B74 = 1;
  }
  memset(&v37, 0, sizeof(v37));
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
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  helpBtn = this->fields.maxLvStatusInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  needQpLb = this->fields.needQpLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9623/*"NEED_QP_INFO"*/, 0);
  if ( !needQpLb )
    goto LABEL_35;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0);
  NpCombineControl__SetHaveQpInfo(this, v8);
  NpCombineControl__SetSelectMaterialEnable(this, v9);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v10);
  NpCombineControl__ResetScrollView(this, v11);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineEventList,
    (int32_t)combineEventList,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v21 && v21->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      v21,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v37 = v36;
    v36.fields._list = 0;
    *(_QWORD *)&v36.fields._index = &v37;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v22 )
        break;
      if ( !v37.fields._current )
        sub_2213CDC(v22, v23);
      if ( HIDWORD(v37.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_2213CDC(v22, v23);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v22,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v37.fields._current[5].klass,
          v24);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  helpBtn = this->fields.baseLvInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      p_charaGraph->klass = 0;
      sub_2213A04(p_charaGraph, 0, v30, v31, v32, v33, v34, v35);
      return;
    }
LABEL_35:
    sub_2213CDC(helpBtn, v3);
  }
}


void NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 scrollView; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974B8D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_5974B8D = 1;
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
  if ( !byte_5969AE0 )
  {
    scrollView = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)scrollView,
                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_15;
  v5.fields.x = 0.0;
  v5.fields.y = *(float *)(scrollView + 336);
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
    sub_2213CDC(scrollView, method);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)scrollView, 0);
}


void NpCombineControl__SetBaseSvtCardImg(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(NpCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UIIconLabel_o *iconLabel; // x23
  int32_t lv; // w22
  UnityEngine_GameObject_o *LevelMax; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_String_array **p_assetList; // x22
  __int64 v28; // x1
  System_String_array *v29; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_String_array *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  unsigned __int64 v43; // x23
  __int64 v44; // x28
  struct System_String_array *v45; // x27
  __int64 v46; // x1
  int32_t TransformedServantId; // w24
  __int64 v48; // x25
  __int64 v49; // x26
  __int64 v50; // x1
  int32_t v51; // w25
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_array *assetList; // x20
  System_Action_o *v59; // x21
  __int64 v60; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_5974B77 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_NpCombineControl_SetCombineNpList__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_5974B77 = 1;
  }
  if ( usrSvtEn )
  {
    v5 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn);
    *(_QWORD *)&v61.fields.currentCryptoKey = v5;
    *(_QWORD *)&v61.fields.fakeValue = v6;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v61, 0);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
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
    UIIconLabel__Set_48071660(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0, 0);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v19);
    this->fields.svtNpDataList = SvtNpData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.svtNpDataList,
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
      v29 = *p_assetList;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
      AssetManager__releaseAssetStorage_47506132(v29, 0);
      *p_assetList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, 0, v30, v31, v32, v33, v34, v35);
    }
    v36 = (struct System_String_array *)sub_2213B20(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v36;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, (int32_t)v36, v37, v38, v39, v40, v41, v42);
    if ( this->fields.transformTotal >= 1 )
    {
      v43 = 0;
      v44 = 32;
      while ( 1 )
      {
        LevelMax = (UnityEngine_GameObject_o *)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        v45 = *p_assetList;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v43, 0);
        v48 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v49 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46);
        *(_QWORD *)&v62.fields.currentCryptoKey = v48;
        *(_QWORD *)&v62.fields.fakeValue = v49;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v62, 0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v50);
        LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                 TransformedServantId,
                                                 v51,
                                                 0);
        if ( !v45 )
          break;
        if ( v43 >= LODWORD(v45->max_length) )
          sub_2213CE4(LevelMax);
        *(Il2CppClass **)((char *)&v45->obj.klass + v44) = (Il2CppClass *)LevelMax;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)((char *)v45 + v44),
          (int32_t)LevelMax,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        ++v43;
        v44 += 8;
        if ( (__int64)v43 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_2213CDC(LevelMax, v18);
    }
LABEL_22:
    assetList = this->fields.assetList;
    v59 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v60);
    AssetManager__loadAssetStorage_47503780(assetList, v59, 1, 0);
  }
}


void NpCombineControl__SetCombineNpList(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *centerChild; // x20
  const MethodInfo *currentMoveIdx; // x1
  __int64 wrapContent; // x0
  Il2CppObject *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  bool IsTransformedNpDispUnavailable; // w21
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *v19; // x0
  struct UnityEngine_GameObject_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  SvtUseNpData_o *v27; // x20
  UnityEngine_Component_o *v28; // x21
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  struct UnityEngine_Color_o *p_CondTitleLabelColor_k__BackingField; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  struct System_Collections_Generic_List_SvtUseNpData__o *v37; // x8
  _BOOL4 isScrollNpInfo; // w8
  int v39; // w9
  struct UICenterOnChild_o *v40; // x20
  SpringPanel_OnFinished_o *v41; // x22
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Collections_Generic_List_SvtUseNpData__o *v48; // x20
  int size; // w8
  int v50; // w21
  int32_t displayTransformIndex; // w22
  int v52; // w10
  int32_t v53; // w1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x21
  __int64 v61; // x1
  System_Collections_Generic_Dictionary_int__object__o *v62; // x21
  bool v63; // w27
  int i; // w28
  System_Collections_Generic_List_SvtUseNpData__c *klass; // x8
  __int64 v66; // x9
  int32_t *p_offset; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  SvtUseNpData_o *v79; // x22
  UnityEngine_Component_o *v80; // x0
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x23
  System_String_o *v84; // x0
  Il2CppObject *Component_object; // x0
  __int64 v86; // x1
  ServantNpInfoIconComponent_o *v87; // x23
  int v88; // w8
  Il2CppObject *Item; // x22
  UIScrollView_o *TextScrollView; // x24
  UIScrollBar_o *TextScrollBar; // x0
  __int64 v92; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v94; // x24
  UIScrollView_o *v95; // x25
  UIScrollBar_o *v96; // x0
  __int64 v97; // x1
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  const MethodInfo *v104; // x1
  float *v105; // x11
  struct UnityEngine_Color_o *p_CondTitleSpriteColor_k__BackingField; // x8
  float *v107; // x10
  float *v108; // x9
  const MethodInfo *v109; // x3
  __int64 v110; // x0
  bool v111; // [xsp+0h] [xbp-90h]
  int v112; // [xsp+4h] [xbp-8Ch]
  __int64 v113; // [xsp+18h] [xbp-78h]
  TransformServantInfo_o *transformInfo; // [xsp+20h] [xbp-70h] BYREF
  int32_t idx; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B7C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__SyncScrollComponent__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SyncScrollComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_SvtUseNpData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SvtUseNpData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_2213A60(&Method_NpCombineControl_OnCenterOnChildFinished__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    sub_2213A60(&SvtUseNpData___TypeInfo);
    sub_2213A60(&StringLiteral_5142/*"D3"*/);
    byte_5974B7C = 1;
  }
  svtNpDataList = this->fields.svtNpDataList;
  idx = 0;
  transformInfo = 0;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Equality(centerChild, 0, 0) )
    {
      wrapContent = (__int64)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_129;
      wrapContent = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)wrapContent, 0);
      if ( !wrapContent )
        goto LABEL_129;
      v8 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)wrapContent,
             (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v8;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.centerChild,
        (int32_t)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    wrapContent = (__int64)this->fields.defaultNpInfo;
    if ( !wrapContent )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0);
    IsTransformedNpDispUnavailable = NpCombineControl__IsTransformedNpDispUnavailable(this, v15);
    wrapContent = (__int64)this->fields.switchButton;
    if ( IsTransformedNpDispUnavailable )
    {
      if ( !wrapContent )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0);
      wrapContent = (__int64)this->fields.transformSvtName;
      if ( !wrapContent )
        goto LABEL_129;
      wrapContent = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)wrapContent, 0);
      if ( !wrapContent )
        goto LABEL_129;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0);
LABEL_31:
      v37 = this->fields.svtNpDataList;
      if ( !v37 )
        goto LABEL_129;
      v111 = IsTransformedNpDispUnavailable || v37->fields._size < 2;
      if ( IsTransformedNpDispUnavailable || v37->fields._size < 2 )
      {
        isScrollNpInfo = 0;
        v39 = 1;
        this->fields.isScrollNpInfo = 0;
      }
      else
      {
        wrapContent = (__int64)this->fields.arrowInfo;
        this->fields.isScrollNpInfo = 1;
        if ( !wrapContent )
          goto LABEL_129;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0);
        v40 = this->fields.centerChild;
        v41 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
        SpringPanel_OnFinished___ctor(v41, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0);
        if ( !v40 )
          goto LABEL_129;
        v40->fields.onFinished = v41;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v40->fields.onFinished,
          (int32_t)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        isScrollNpInfo = this->fields.isScrollNpInfo;
        v39 = 2;
      }
      v112 = v39;
      NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v17);
      v48 = this->fields.svtNpDataList;
      idx = 0;
      if ( IsTransformedNpDispUnavailable )
      {
        if ( !v48 )
          goto LABEL_129;
        size = v48->fields._size;
        v50 = size - 1;
        if ( size >= 1 )
        {
          displayTransformIndex = this->fields.displayTransformIndex;
          wrapContent = sub_2213B20(SvtUseNpData___TypeInfo, 1);
          if ( !this->fields.svtNpDataList )
            goto LABEL_129;
          v48 = (struct System_Collections_Generic_List_SvtUseNpData__o *)wrapContent;
          v52 = displayTransformIndex >= v50 ? v50 : displayTransformIndex;
          v53 = displayTransformIndex >= 0 ? v52 : 0;
          wrapContent = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                   v53,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
          if ( !v48 )
            goto LABEL_129;
          v60 = (Il2CppObject *)wrapContent;
          if ( wrapContent )
          {
            wrapContent = sub_2213BB4(wrapContent, v48->klass->_1.element_class);
            if ( !wrapContent )
            {
              v110 = sub_2213D00(0, v61);
              sub_2213BA0(v110, 0);
            }
          }
          if ( !v48->fields._size )
            sub_2213CE4(wrapContent);
          v48->fields._syncRoot = v60;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v48->fields._syncRoot,
            (int32_t)v60,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
      }
      v62 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__SyncScrollComponent__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v62,
        (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent___ctor__);
      if ( !v48 )
        goto LABEL_129;
      v63 = 0;
      for ( i = 0; i != v112; ++i )
      {
        klass = v48->klass;
        v66 = *(unsigned __int16 *)&v48->klass->_2.rank;
        if ( *(_WORD *)&v48->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SvtUseNpData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SvtUseNpData__TypeInfo )
          {
            --v66;
            p_offset += 4;
            if ( !v66 )
              goto LABEL_58;
          }
          v68 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_58:
          v68 = sub_224BC3C(v48, System_Collections_Generic_IEnumerable_SvtUseNpData__TypeInfo, 0);
        }
        v69 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_List_SvtUseNpData__o *, _QWORD))v68)(
                v48,
                *(_QWORD *)(v68 + 8));
        v113 = v69;
        while ( 1 )
        {
          if ( !v113 )
            sub_2213CDC(v69, v70);
          v71 = *(_QWORD *)v113;
          v72 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
          {
            v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v73 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v72;
              v73 += 4;
              if ( !v72 )
                goto LABEL_66;
            }
            v74 = v71 + 16LL * *v73 + 312;
          }
          else
          {
LABEL_66:
            v74 = sub_224BC3C(v113, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v113, *(_QWORD *)(v74 + 8)) & 1) == 0 )
            break;
          v75 = *(_QWORD *)v113;
          v76 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
          {
            v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SvtUseNpData__c **)v77 - 1) != System_Collections_Generic_IEnumerator_SvtUseNpData__TypeInfo )
            {
              --v76;
              v77 += 4;
              if ( !v76 )
                goto LABEL_73;
            }
            v78 = v75 + 16LL * *v77 + 312;
          }
          else
          {
LABEL_73:
            v78 = sub_224BC3C(v113, System_Collections_Generic_IEnumerator_SvtUseNpData__TypeInfo, 0);
          }
          v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v113, *(_QWORD *)(v78 + 8));
          v79 = (SvtUseNpData_o *)v69;
          if ( !v69 )
            sub_2213CDC(0, v70);
          if ( (*(_DWORD *)(v69 + 24) & 0x80000000) == 0 )
          {
            v80 = (UnityEngine_Component_o *)this->fields.wrapContent;
            if ( !v80 )
              sub_2213CDC(0, v70);
            npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
            transform = UnityEngine_Component__get_transform(v80, 0);
            Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)this,
                                               npCombineInfoPrefab,
                                               transform,
                                               0,
                                               0);
            v84 = System_Int32__ToString_77138656((int32_t)&idx, (System_String_o *)StringLiteral_5142/*"D3"*/, 0);
            if ( !Object )
              sub_2213CDC(v84, v84);
            UnityEngine_Object__set_name(Object, v84, 0);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Object,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
            v87 = (ServantNpInfoIconComponent_o *)Component_object;
            if ( !Component_object )
              sub_2213CDC(0, v86);
            ServantNpInfoIconComponent__SetNpInfo(
              (ServantNpInfoIconComponent_o *)Component_object,
              this->fields.baseUserServantEntity,
              idx,
              v79,
              0,
              0.0,
              0.0,
              0);
            ServantNpInfoIconComponent__SetMask(v87, v79->fields.MaskFlag, v79->fields.ClosedMessage, 0);
            v88 = v63 || v79->fields.MaskFlag;
            v63 = v88 != 0;
            ++idx;
            if ( !v111 )
            {
              if ( i )
              {
                if ( !v62 )
                  sub_2213CDC(v69, v70);
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         v62,
                         v79->fields.svtDispNpId,
                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__get_Item__);
                TextScrollView = ServantNpInfoIconComponent__get_TextScrollView(v87, 0);
                TextScrollBar = ServantNpInfoIconComponent__get_TextScrollBar(v87, 0);
                if ( !Item )
                  sub_2213CDC(TextScrollBar, v92);
                SyncScrollComponent__AddTarget((SyncScrollComponent_o *)Item, TextScrollView, TextScrollBar, 0);
              }
              else
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v87, 0);
                v94 = GameObjectExtensions__SafeGetComponent_object_(
                        gameObject,
                        (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SyncScrollComponent___);
                v95 = ServantNpInfoIconComponent__get_TextScrollView(v87, 0);
                v96 = ServantNpInfoIconComponent__get_TextScrollBar(v87, 0);
                if ( !v94 )
                  sub_2213CDC(v96, v97);
                SyncScrollComponent__AddTarget((SyncScrollComponent_o *)v94, v95, v96, 0);
                if ( !v62 )
                  sub_2213CDC(v98, v99);
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v62,
                  v79->fields.svtDispNpId,
                  v94,
                  (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__SyncScrollComponent__set_Item__);
              }
            }
          }
        }
        v100 = *(_QWORD *)v113;
        v101 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
        {
          v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
          {
            --v101;
            v102 += 4;
            if ( !v101 )
              goto LABEL_95;
          }
          v103 = v100 + 16LL * *v102 + 312;
        }
        else
        {
LABEL_95:
          v103 = sub_224BC3C(v113, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v103)(v113, *(_QWORD *)(v103 + 8));
      }
      if ( v63 )
        NpCombineControl__SetScrollViewSize(
          this,
          this->fields.EnableMaskScrollViewWidth,
          this->fields.DefaultScrollViewHeight,
          currentMoveIdx);
      if ( this->fields.isScrollNpInfo )
      {
        wrapContent = (__int64)this->fields.wrapContent;
        if ( !wrapContent )
          goto LABEL_129;
        *(_DWORD *)(wrapContent + 32) = 700;
        UIWrapContent__WrapContent((UIWrapContent_o *)wrapContent, 0);
      }
      NpCombineControl__ResetScrollView(this, currentMoveIdx);
      currentMoveIdx = (const MethodInfo *)(unsigned int)this->fields.currentMoveIdx;
      if ( (int)currentMoveIdx < 1 )
      {
LABEL_116:
        this->fields.isSelectBase = 1;
        NpCombineControl__SetSelectMaterialEnable(this, currentMoveIdx);
        NpCombineControl__SetSvtNpCombineData(this, v104);
        return;
      }
      wrapContent = (__int64)this->fields.wrapContent;
      if ( wrapContent )
      {
        UIWrapContent__setScrollPos((UIWrapContent_o *)wrapContent, (int32_t)currentMoveIdx, 0);
        goto LABEL_116;
      }
LABEL_129:
      sub_2213CDC(wrapContent, currentMoveIdx);
    }
    if ( !wrapContent )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)wrapContent,
      this->fields._IsTransformServant_k__BackingField,
      0);
    wrapContent = (__int64)this->fields.transformSvtName;
    if ( !wrapContent )
      goto LABEL_129;
    wrapContent = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)wrapContent, 0);
    if ( !wrapContent )
      goto LABEL_129;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)wrapContent,
      this->fields._IsTransformServant_k__BackingField,
      0);
    if ( !this->fields._IsTransformServant_k__BackingField )
      goto LABEL_31;
    wrapContent = (__int64)this->fields.wrapContent;
    if ( !wrapContent )
      goto LABEL_129;
    v18 = this->fields.npCombineInfoPrefab;
    v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)wrapContent, 0);
    v20 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v18, v19, 0, 0);
    this->fields.targetObject = v20;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
      (int32_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    wrapContent = (__int64)this->fields.svtNpDataList;
    if ( !wrapContent )
      goto LABEL_129;
    wrapContent = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)wrapContent,
                             this->fields.displayTransformIndex,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    if ( !this->fields.targetObject )
      goto LABEL_129;
    v27 = (SvtUseNpData_o *)wrapContent;
    wrapContent = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             this->fields.targetObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    if ( !wrapContent )
      goto LABEL_129;
    v28 = (UnityEngine_Component_o *)wrapContent;
    ServantNpInfoIconComponent__SetNpInfo(
      (ServantNpInfoIconComponent_o *)wrapContent,
      this->fields.baseUserServantEntity,
      0,
      v27,
      1,
      3.0,
      10.0,
      0);
    v29 = UnityEngine_Component__get_gameObject(v28, 0);
    GameObjectExtensions__SetLocalPositionY(v29, -18.5, 0);
    v30 = UnityEngine_Component__get_gameObject(v28, 0);
    GameObjectExtensions__SetLocalScale_42893524(v30, this->fields.scaleOffset, 0);
    this->fields.isSelectBase = 1;
    NpCombineControl__SetSelectMaterialEnable(this, v31);
    NpCombineControl__SetSvtNpCombineData(this, v32);
    wrapContent = (__int64)this->fields.baseUserServantEntity;
    if ( !wrapContent )
      goto LABEL_129;
    wrapContent = UserServantEntity__GetTransformedServantInfo(
                    (UserServantEntity_o *)wrapContent,
                    &transformInfo,
                    this->fields.displayTransformIndex,
                    0);
    if ( !transformInfo )
      goto LABEL_129;
    wrapContent = (__int64)this->fields.transformSvtName;
    if ( !wrapContent )
      goto LABEL_129;
    UILabel__set_text((UILabel_o *)wrapContent, transformInfo->fields.titleText, 0);
    wrapContent = (__int64)this->fields.transformSvtName;
    if ( this->fields._IsSaveTransformServant_k__BackingField )
    {
      if ( this->fields.displayTransformIndex <= 0 )
      {
        p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColor_k__BackingField;
        p_g = &this->fields._CondTitleLabelColor_k__BackingField.fields.g;
        p_b = &this->fields._CondTitleLabelColor_k__BackingField.fields.b;
        p_a = &this->fields._CondTitleLabelColor_k__BackingField.fields.a;
      }
      else
      {
        p_CondTitleLabelColor_k__BackingField = &this->fields._CondTitleLabelColorAfter_k__BackingField;
        p_g = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
        p_b = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
        p_a = &this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
      }
      if ( !wrapContent )
        goto LABEL_129;
      v116.fields.a = *p_a;
      v116.fields.b = *p_b;
      v116.fields.g = *p_g;
      v116.fields.r = p_CondTitleLabelColor_k__BackingField->fields.r;
      UIWidget__set_color((UIWidget_o *)wrapContent, v116, 0);
      wrapContent = (__int64)this->fields.transformBgSprite;
      if ( this->fields.displayTransformIndex <= 0 )
      {
        p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
        v108 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
        v107 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
        v105 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
      }
      else
      {
        p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColorAfter_k__BackingField;
        v108 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
        v107 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
        v105 = &this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
      }
      if ( !wrapContent )
        goto LABEL_129;
    }
    else
    {
      if ( !wrapContent )
        goto LABEL_129;
      UIWidget__set_color((UIWidget_o *)wrapContent, this->fields._CondTitleLabelColor_k__BackingField, 0);
      wrapContent = (__int64)this->fields.transformBgSprite;
      if ( !wrapContent )
        goto LABEL_129;
      v105 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
      p_CondTitleSpriteColor_k__BackingField = &this->fields._CondTitleSpriteColor_k__BackingField;
      v107 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
      v108 = &this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
    }
    v117.fields.a = *v105;
    v117.fields.b = *v107;
    v117.fields.g = *v108;
    v117.fields.r = p_CondTitleSpriteColor_k__BackingField->fields.r;
    UIWidget__set_color((UIWidget_o *)wrapContent, v117, 0);
    if ( !v27 )
      goto LABEL_129;
    NpCombineControl__SetTransformNpMask(this, v27->fields.MaskFlag, v27->fields.ClosedMessage, v109);
  }
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetEnableCombineBtn(NpCombineControl_o *this, bool isCombine, const MethodInfo *method)
{
  UIWidget_o *combineBtn; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  combineBtn = (UIWidget_o *)this->fields.combineBtn;
  if ( !combineBtn
    || (((void (__fastcall *)(UIWidget_o *, bool, const MethodInfo *))combineBtn->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
          combineBtn,
          isCombine,
          combineBtn->klass->vtable._5_get_isAnchoredVertically.method),
        (combineBtn = (UIWidget_o *)this->fields.combineBtnTxt) == 0) )
  {
    sub_2213CDC(combineBtn, isCombine);
  }
  v7.fields.r = 0.5;
  v7.fields.a = 1.0;
  if ( isCombine )
    v7.fields.r = 1.0;
  v7.fields.g = v7.fields.r;
  v7.fields.b = v7.fields.r;
  UIWidget__set_color(combineBtn, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetEnabledNpInfoScroll(NpCombineControl_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  if ( this->fields.isScrollNpInfo || !enabled )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.wrapContent) == 0) )
    {
      sub_2213CDC(scrollView, enabled);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0);
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

  if ( (byte_5974B83 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_5974B83 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_2213CDC(combineBtnBg, method);
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
  System_String_o *v6; // x1

  if ( (byte_5974B76 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974B76 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        v6 = (System_String_o *)StringLiteral_9617/*"N0"*/,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_77143864((int64_t)&this->fields.haveQpVal, v6, 0),
        !haveQpLb) )
  {
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


void NpCombineControl__SetNpCombineData(NpCombineControl_o *this, SetCombineData_o *data, const MethodInfo *method)
{
  __int64 materialGrid; // x0
  __int64 v6; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  il2cpp_array_size_t max_length; // x24
  System_Collections_Generic_List_long__o *v9; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  unsigned __int64 v17; // x22
  __int64 v18; // x29
  struct System_Int64_array *v19; // x8
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  int64_t v21; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v23; // x25
  UnityEngine_Transform_o *v24; // x26
  UnityEngine_Transform_o *v25; // x26
  Il2CppObject *Component_object; // x25
  NpMaterialSvtInfo_ClickDelegate_o *v27; // x26
  const MethodInfo *v28; // x3
  UserServantEntity_o *v29; // x2
  const MethodInfo *v30; // x5
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  const MethodInfo *v34; // x3
  int32_t v35; // w21
  const MethodInfo *v36; // x3
  struct System_Int64_array *v37; // x22
  il2cpp_array_size_t v38; // x8
  unsigned __int64 v39; // x23
  int64_t v40; // x20
  const MethodInfo *v41; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  _BOOL8 v46; // x0
  __int64 v47; // x1
  float v48; // s0
  int v49; // w8
  UILabel_o *qpLb; // x22
  struct SetLevelUpData_o *v52; // x8
  int64_t spendQpVal; // x9
  bool v55; // w20
  const MethodInfo *v56; // x1
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974B7F & 1) == 0 )
  {
    sub_2213A60(&NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_CombineMenuControl_OnClickMaterial__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974B7F = 1;
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
  v9 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectMtUsrSvtIdList,
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
  v18 = (unsigned int)max_length;
  do
  {
    v19 = data->fields.materialUsrSvtIdList;
    if ( !v19 )
      goto LABEL_62;
    if ( v17 >= LODWORD(v19->max_length) )
LABEL_63:
      sub_2213CE4(materialGrid);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    materialSvtPrefab = this->fields.materialSvtPrefab;
    v21 = v19->m_Items[v17];
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)materialGrid, 0);
    materialGrid = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              materialSvtPrefab,
                              transform,
                              0,
                              0);
    if ( !materialGrid )
      goto LABEL_62;
    v23 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v24 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0);
    if ( !materialGrid )
      goto LABEL_62;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)materialGrid, 0);
    if ( !v24 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v24, localPosition, 0);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v23, 0);
    v25 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_5969AE0 )
    {
      materialGrid = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v25 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v23,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v27 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_2213CCC(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      v28);
    if ( !Component_object )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo((NpMaterialSvtInfo_o *)Component_object, v17, v29, v21, v27, v30);
    materialGrid = (__int64)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_62;
    v31 = *(_QWORD *)(materialGrid + 16);
    v32 = Method_System_Collections_Generic_List_long__Add__;
    ++*(_DWORD *)(materialGrid + 28);
    if ( !v31 )
      goto LABEL_62;
    v33 = *(int *)(materialGrid + 24);
    if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        (System_Collections_Generic_List_long__o *)materialGrid,
        v21,
        *(const MethodInfo_446C29C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v33 + 1;
      *(_QWORD *)(v31 + 8 * v33 + 32) = v21;
    }
    ++v17;
  }
  while ( v18 != v17 );
  materialGrid = (__int64)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_62;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0);
  materialGrid = NpCombineControl__GetNpLv(
                   this->fields.baseUserServantEntity,
                   data->fields.materialUsrSvtIdList,
                   &tmpTargetLv,
                   v34);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_62;
  v35 = materialGrid;
  materialGrid = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0);
  *(_WORD *)&this->fields.isExceedMaxLv = materialGrid & 1;
  v37 = data->fields.materialUsrSvtIdList;
  if ( !v37 )
    goto LABEL_62;
  v38 = v37->max_length;
  if ( (int)v38 >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v38 )
        goto LABEL_63;
      v40 = v37->m_Items[v39];
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v40,
                                (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_62;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = NpCombineControl__CheckConfirm(v40, v41);
      if ( (materialGrid & 1) != 0 )
        break;
      LODWORD(v38) = v37->max_length;
      if ( (__int64)++v39 >= (int)v38 )
        goto LABEL_39;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_39:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_62;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v35, v36);
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v57,
      combineEventList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v58 = v57;
    v57.fields._list = 0;
    *(_QWORD *)&v57.fields._index = &v58;
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v58,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v46 )
        break;
      if ( !v58.fields._current )
        sub_2213CDC(v46, v47);
      if ( HIDWORD(v58.fields._current[1].klass) == 10 )
      {
        v48 = *(float *)&v58.fields._current[3].monitor * (float)*p_spendQpVal;
        v49 = (int)v48;
        if ( v48 == INFINITY )
          v49 = 0x80000000;
        *p_spendQpVal = v49;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v58,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_77138656((int)this + 520, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0);
  materialGrid = (__int64)this->fields.qpLb;
  if ( !materialGrid )
    goto LABEL_62;
  v61.fields.g = 1.0;
  v61.fields.a = 1.0;
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
    v61.fields.g = 0.0;
  v61.fields.r = 1.0;
  v61.fields.b = v61.fields.g;
  UIWidget__set_color((UIWidget_o *)materialGrid, v61, 0);
  v52 = this->fields.lvUpData;
  if ( !v52 )
    goto LABEL_62;
  v52->fields.nextLv = v35;
  spendQpVal = this->fields.spendQpVal;
  v52->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v62.fields.r = 1.0;
      v62.fields.g = 1.0;
      v55 = 1;
      goto LABEL_60;
    }
LABEL_62:
    sub_2213CDC(materialGrid, v6);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v62.fields.g = 0.0;
  v62.fields.r = 1.0;
  v55 = 0;
LABEL_60:
  v62.fields.b = v62.fields.g;
  v62.fields.a = v62.fields.r;
  UIWidget__set_color((UIWidget_o *)materialGrid, v62, 0);
  this->fields._IsExeCombine_k__BackingField = v55;
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
  v4 = System_Int32__ToString((int)this + 520, 0);
  if ( !qpLb || (UILabel__set_text(qpLb, v4, 0), (v4 = (System_String_o *)this->fields.qpLb) == 0) )
    sub_2213CDC(v4, v5);
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v4, v7, 0);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v6);
}


void NpCombineControl__SetScrollViewSize(NpCombineControl_o *this, float width, float height, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  struct UIPanel_o *v8; // x0
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v12; // x8

  if ( (byte_5974B85 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B85 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v8 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    v10 = this->fields.scrollView;
    if ( v10 )
    {
      mPanel = (UnityEngine_Object_o *)v10->fields.mPanel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      v8 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(mPanel, 0, 0);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        return;
      v12 = this->fields.scrollView;
      if ( v12 )
      {
        v8 = v12->fields.mPanel;
        if ( v8 )
        {
          ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double, double, float, float))v8->klass->vtable._18_SetRect.methodPtr)(
            v8,
            v8->klass->vtable._18_SetRect.method,
            0.0,
            0.0,
            width,
            height);
          return;
        }
      }
    }
    sub_2213CDC(v8, v9);
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
    sub_2213CDC(preSelectBaseLb, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0);
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 v7; // x1
  LocalizationManager_c *v8; // x0
  __int64 *v9; // x20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_5974B88 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7506/*"HEADER_MSG_NPUP_MATERIAL"*/);
    sub_2213A60(&StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_2213A60(&StringLiteral_7771/*"INFO_MSG_NPUP_BASE"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974B88 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_21:
    sub_2213CDC(detailInfoLb, *(_QWORD *)&state);
  }
  v10.fields.r = 0.0;
  v10.fields.a = 1.0;
  v10.fields.g = 0.87891;
  v10.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v10, 0);
  switch ( v3 )
  {
    case 2:
      if ( this->fields._IsExeCombine_k__BackingField )
      {
        v8 = LocalizationManager_TypeInfo;
        v9 = &StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_12;
      }
      else
      {
        v11.fields.r = 1.0;
        v11.fields.g = 1.0;
        v11.fields.b = 1.0;
        v11.fields.a = 1.0;
        UIWidget__set_color(v6, v11, 0);
        v8 = LocalizationManager_TypeInfo;
        v9 = &StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_12;
      }
      goto LABEL_11;
    case 1:
      v8 = LocalizationManager_TypeInfo;
      v9 = &StringLiteral_7506/*"HEADER_MSG_NPUP_MATERIAL"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_11:
        j_il2cpp_runtime_class_init_0(v8, v7);
LABEL_12:
      *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v9, 0);
      goto LABEL_17;
    case 0:
      v8 = LocalizationManager_TypeInfo;
      v9 = &StringLiteral_7771/*"INFO_MSG_NPUP_BASE"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_11;
      goto LABEL_12;
  }
  *(_QWORD *)&state = StringLiteral_1/*""*/;
LABEL_17:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0);
}


void NpCombineControl__SetSvtNpCombineData(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 v4; // x1
  void *Item; // x0
  int32_t v6; // w22
  _DWORD *v7; // x21
  int32_t v8; // w20
  long double v9; // q0
  __int64 v10; // x0
  DataManager_o **v11; // x8
  DataManager_o *v12; // x24
  _QWORD *v13; // x23
  int32_t v14; // w25
  UILabel_o *currentInfoLb; // x24
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w24
  UserServantEntity_o *baseUserServantEntity; // x24
  System_Int64_array *v20; // x0
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x26
  struct SetLevelUpData_o **p_lvUpData; // x25
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  char v37; // w8
  char *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  MissionNaviTransitionBoardItem_o *v52; // x0
  int32_t spendQpVal; // w8
  int64_t userQP; // x9
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5974B7E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_2213A60(&SetLevelUpData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_5974B7E = 1;
  }
  svtNpDataList = this->fields.svtNpDataList;
  tmpTargetLv = 0;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    if ( !Item )
      goto LABEL_29;
    v6 = *((_DWORD *)Item + 6);
    v7 = Item;
    if ( v6 >= 1 )
    {
      Item = this->fields.maxLvStatusInfo;
      if ( !Item )
        goto LABEL_29;
      v8 = v7[7];
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 0, 0);
      v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
        v10 = sub_224B908(v9);
      Item = *(void **)(*(_QWORD *)(v10 + 192) + 16LL);
      if ( (*(_WORD *)((_BYTE *)Item + 309) & 1) == 0 )
        Item = (void *)sub_224B908(v9);
      v11 = (DataManager_o **)*((_QWORD *)Item + 23);
      v12 = *v11;
      if ( !*v11 )
        goto LABEL_29;
      Item = DataManager__GetMasterData_object_(
               *v11,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Item, v7[4], v6, 0);
      if ( !Item )
        goto LABEL_29;
      v13 = Item;
      v14 = *((_DWORD *)Item + 12);
      Item = DataManager__GetMasterData_object_(
               v12,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Item, v6, v8, 0);
      if ( !Item )
        goto LABEL_29;
      currentInfoLb = this->fields.currentInfoLb;
      Item = TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)Item, 0);
      if ( !currentInfoLb )
        goto LABEL_29;
      UILabel__set_text(currentInfoLb, (System_String_o *)Item, 0);
      if ( v8 < v14 )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = v8;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v20 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v20, &tmpTargetLv, v21);
        }
        v22 = (Il2CppObject *)sub_2213CCC(SetLevelUpData_TypeInfo);
        System_Object___ctor(v22, 0);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = (struct SetLevelUpData_o *)v22;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.lvUpData,
          (int32_t)v22,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        Item = this->fields.lvUpData;
        if ( Item )
        {
          v36 = v13[4];
          v37 = *((_BYTE *)v7 + 65);
          *((_QWORD *)Item + 4) = v36;
          v38 = (char *)Item + 32;
          *((_DWORD *)v38 - 4) = v6;
          *((_DWORD *)v38 - 3) = v6;
          *((_QWORD *)v38 - 1) = 1;
          v38[80] = v37;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)v38, v36, v30, v31, v32, v33, v34, v35);
          Item = *p_lvUpData;
          if ( *p_lvUpData )
          {
            v45 = v13[3];
            *((_QWORD *)Item + 5) = v45;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)Item + 40), v45, v39, v40, v41, v42, v43, v44);
            Item = *p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_QWORD *)Item + 12) = 0;
              v52 = (MissionNaviTransitionBoardItem_o *)((char *)Item + 96);
              spendQpVal = this->fields.spendQpVal;
              v52[-1].fields._QuestId_k__BackingField = v8;
              *(_DWORD *)&v52[-1].fields._IsNotDisplayQuestInfo_k__BackingField = NpLv;
              userQP = this->fields.userQP;
              HIDWORD(v52[-1].fields._ClosedMessage_k__BackingField) = spendQpVal;
              v52[-1].fields._NaviAction_k__BackingField = (struct System_Action_o *)userQP;
              sub_2213A04(v52, 0, v46, v47, v48, v49, v50, v51);
              return;
            }
          }
        }
LABEL_29:
        sub_2213CDC(Item, v4);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v16);
      Item = this->fields.qpLb;
      if ( !Item )
        goto LABEL_29;
      UILabel__set_text((UILabel_o *)Item, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void NpCombineControl__SetTransformNpMask(
        NpCombineControl_o *this,
        bool maskFlag,
        System_String_o *closedMessage,
        const MethodInfo *method)
{
  UnityEngine_Object_o *transformMaskObject; // x22
  __int64 v8; // x1
  UnityEngine_Object_o *transformMaskLabel; // x22
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0

  if ( (byte_5974B84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974B84 = 1;
  }
  transformMaskObject = (UnityEngine_Object_o *)this->fields.transformMaskObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, maskFlag);
  if ( !UnityEngine_Object__op_Equality(transformMaskObject, 0, 0) )
  {
    transformMaskLabel = (UnityEngine_Object_o *)this->fields.transformMaskLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Equality(transformMaskLabel, 0, 0) )
    {
      v11 = this->fields.transformMaskObject;
      if ( maskFlag )
      {
        if ( v11 )
        {
          UnityEngine_GameObject__SetActive(v11, 1, 0);
          v11 = (UnityEngine_GameObject_o *)this->fields.transformMaskLabel;
          if ( v11 )
          {
            UILabel__set_text((UILabel_o *)v11, closedMessage, 0);
            return;
          }
        }
      }
      else if ( v11 )
      {
        UnityEngine_GameObject__SetActive(v11, 0, 0);
        return;
      }
      sub_2213CDC(v11, v10);
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