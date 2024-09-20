void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E9F1 & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5E9F1 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall NpCombineControl__ChangeTargetInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v7; // x20

  if ( (byte_4A5E9DF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E9DF = 1;
  }
  if ( this->fields.baseSvtId >= 1 )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
    {
      Component_object = this->fields.targetObject;
      if ( !Component_object
        || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             Component_object,
                                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___),
            !this->fields.svtNpDataList)
        || (baseUserServantEntity = this->fields.baseUserServantEntity,
            v7 = (ServantNpInfoIconComponent_o *)Component_object,
            Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                             this->fields.displayTransformIndex,
                                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__),
            !v7) )
      {
        sub_1B8880C(Component_object, v4);
      }
      ServantNpInfoIconComponent__SetNpInfo(
        v7,
        baseUserServantEntity,
        0,
        (SvtUseNpData_o *)Component_object,
        0.0,
        0.0,
        0LL);
    }
  }
}


bool __fastcall NpCombineControl__CheckConfirm(int64_t myUserSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5E9EC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E9EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_44932636((UserServantEntity_o *)Entity, v6);
}


bool __fastcall NpCombineControl__CheckConfirm_44932636(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
  selectUsrSvtEnt = (UserServantEntity_o *)UserServantEntity__getAppendSkillInfo(selectUsrSvtEnt, 0LL);
  if ( !selectUsrSvtEnt || (hiddenValue = selectUsrSvtEnt->fields.id.fields.hiddenValue) == 0 )
LABEL_17:
    sub_1B8880C(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        sub_1B88814(selectUsrSvtEnt, method);
      if ( *(int *)(hiddenValue + 4LL * v5 + 32) >= 2 )
        return 1;
    }
    while ( v4 != ++v5 );
  }
  if ( v2->fields.adjustAtk > 0 || v2->fields.adjustHp > 0 )
    return 1;
  return v2->fields.treasureDeviceLv1 > 1;
}


bool __fastcall NpCombineControl__CheckTdLvMax(
        NpCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  NpCombineControl_o *v4; // x20
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t currentId; // w21

  v4 = this;
  if ( (byte_4A5E9E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    this = (NpCombineControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E9E7 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_1B8880C(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.baseUserServantEntity);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array *assetList; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E9E3 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E9E3 = 1;
  }
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_18;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_18;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        break;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
      if ( !wrapContent )
        break;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)wrapContent,
                                                 v5 - 2,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1B8880C(wrapContent, method);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37799632(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v8, v9);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x8
  int v8; // w9

  if ( (byte_4A5E9E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E9E4 = 1;
  }
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_16;
  materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(materialGrid, 0LL);
  if ( !materialGrid )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)materialGrid, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
      if ( !materialGrid )
        break;
      materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(materialGrid, 0LL);
      if ( !materialGrid )
        break;
      materialGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)materialGrid,
                                                  v5 - 2,
                                                  0LL);
      if ( !materialGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(materialGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1B8880C(materialGrid, method);
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


UserServantEntity_o *__fastcall NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  ServantStatusBattleListViewItem_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  Il2CppObject *Entity; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A5E9E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (NpCombineControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E9E2 = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (ServantStatusBattleListViewItem_o *)&v2->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v7,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B88554(p_baseUserServantEntity, (int32_t)Entity, v9, v10);
  return (UserServantEntity_o *)Entity;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpCombineControl__GetLimitCountForMulti(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        int32_t condLimitCount,
        int32_t index,
        bool fixedFlag,
        const MethodInfo *method)
{
  __int64 v12; // x0
  Il2CppObject *MasterData_object; // x0
  int v14; // w25
  bool v15; // cc
  int v16; // w24
  DataManager_o *v17; // x21
  int32_t v18; // w26
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x23
  int32_t v20; // w22
  DataManager_o *v21; // x27
  _BOOL4 v22; // w8
  DataManager_o *v23; // x20

  if ( (byte_4A5E9DD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5E9DD = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (BYTE5(MasterData_object[19].klass) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_1BDA48C(MasterData_object);
  v14 = condLimitCount - 1;
  v15 = index < 1;
  if ( index >= 1 )
    v16 = -1;
  else
    v16 = condLimitCount - 1;
  v17 = *(DataManager_o **)MasterData_object[11].monitor;
  if ( v15 )
    v18 = -1;
  else
    v18 = condLimitCount;
  if ( !v17 )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        v17,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_36;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         (ServantTreasureDeviceReleaseMaster_o *)MasterData_object,
                         svtId,
                         0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  MasterData_object = (Il2CppObject *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v20 = (int)MasterData_object;
  if ( v18 >= 0 && (_DWORD)MasterData_object != v18 && fixedFlag )
    v21 = v17;
  else
    v21 = 0LL;
  if ( v18 >= 0 && (_DWORD)MasterData_object != v18 && fixedFlag )
  {
    if ( (int)MasterData_object < 11 )
      goto LABEL_24;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          (int32_t)MasterData_object,
                                          (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v17 = v21;
    if ( ((unsigned __int8)MasterData_object & 1) == 0 )
LABEL_24:
      v20 = v18;
  }
  v22 = v16 >= 0 && v20 > v16 && fixedFlag;
  if ( v16 >= 0 && v20 > v16 && fixedFlag )
    v23 = v17;
  else
    v23 = 0LL;
  if ( v22 )
  {
    if ( v20 < 11 )
      goto LABEL_32;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          v20,
                                          (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v17 = v23;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
LABEL_32:
      v20 = v14;
  }
  if ( !v17
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v17,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
LABEL_36:
    sub_1B8880C(MasterData_object, *(_QWORD *)&svtId);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           v20,
           0LL);
}


int32_t __fastcall NpCombineControl__GetLimitCountForSingle(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  __int64 v8; // x8
  __int64 v9; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4A5E9DC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5E9DC = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  MasterData_object = **(Il2CppObject ***)(v9 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, v6);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           LimitCountByImageLimitCostumeIn,
           0LL);
}


System_Collections_Generic_List_SvtUseNpData__o *__fastcall NpCombineControl__GetNpAddDataList(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        TreasureDvcInfo_o *tdInfo,
        ServantTreasureDeviceAddEntity_o *tdAddEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x0
  DataManager_o *MasterData_object; // x0
  TreasureDvcMaster_o *v13; // x19
  System_Int32_array *FixedCardLimitCounts; // x27
  __int64 v15; // x20
  struct System_Int32_array *treasureDeviceIds; // x8
  unsigned __int64 v17; // x24
  int32_t v18; // w26
  __int64 v19; // x23
  __int64 v20; // x25
  DataManager_o *v21; // x27
  TreasureDvcInfo_o *v22; // x23
  int32_t v23; // w0
  struct System_Int32_array *hideCardChara; // x8
  int *p_saveNameList; // x9
  TreasureDvcMaster_o *v26; // x28
  TreasureDvcInfo_o *v27; // x19
  int32_t v28; // w23
  __int64 v29; // x25
  __int64 v30; // x23
  __int64 v31; // x29
  int32_t v32; // w2
  int32_t v33; // w3
  TreasureDvcInfo_o *v34; // x26
  __int64 v35; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t DispLimitCount; // w23
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  const MethodInfo *v43; // x6
  char v44; // w5
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x8
  System_Int32_array *v53; // [xsp+8h] [xbp-98h]
  ServantTreasureDeviceAddEntity_o *v54; // [xsp+10h] [xbp-90h]
  int32_t *p_cardId; // [xsp+18h] [xbp-88h]
  int v56; // [xsp+20h] [xbp-80h]
  bool v57; // [xsp+24h] [xbp-7Ch]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4A5E9DB & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&SvtUseNpData_TypeInfo);
    byte_4A5E9DB = 1;
  }
  tdExplanation = 0LL;
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C(v11);
  MasterData_object = **(DataManager_o ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_41;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_41;
  v13 = (TreasureDvcMaster_o *)MasterData_object;
  FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(tdAddEntity, 0LL);
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                         (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v15 = 8LL;
    v54 = tdAddEntity;
    p_cardId = &tdInfo->fields.cardId;
    v53 = FixedCardLimitCounts;
    while ( 1 )
    {
      treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      v17 = v15 - 8;
      if ( v15 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
        goto LABEL_42;
      if ( !usrSvtData )
        break;
      v18 = *((_DWORD *)&treasureDeviceIds->obj.klass + v15);
      v20 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v20;
      *(_QWORD *)&v61.fields.fakeValue = v19;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v61, 0LL);
      if ( !v13 )
        break;
      MasterData_object = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                             v13,
                                             (int32_t)MasterData_object,
                                             v18,
                                             0LL);
      if ( !tdInfo )
        break;
      v21 = MasterData_object;
      if ( !MasterData_object )
        break;
      v22 = tdInfo;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        tdInfo->fields.lv,
        0LL);
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(usrSvtData->fields.svtId, 0LL);
      MasterData_object = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v23, v18, 0LL);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_saveNameList = (int *)&MasterData_object->fields.saveNameList;
      if ( !MasterData_object )
        p_saveNameList = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v17 >= hideCardChara->max_length )
        goto LABEL_42;
      v26 = v13;
      v27 = v22;
      v56 = *p_saveNameList;
      v28 = *((_DWORD *)&hideCardChara->obj.klass + v15);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v57 = System_Convert__ToBoolean_62355264(v28, 0LL);
      v29 = sub_1B887FC(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v29, 0LL);
      v30 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v62.fields.currentCryptoKey = v30;
      *(_QWORD *)&v62.fields.fakeValue = v31;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v62, 0LL);
      if ( !v29 )
        break;
      *(_DWORD *)(v29 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v29 + 20) = v18;
      v34 = v27;
      *(_QWORD *)(v29 + 24) = *(_QWORD *)&v27->fields.id;
      v35 = *(_QWORD *)&v21->fields._DispLog;
      *(_QWORD *)(v29 + 32) = v35;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 32), v35, v32, v33);
      m_CancellationTokenSource = v21->fields.m_CancellationTokenSource;
      *(_QWORD *)(v29 + 40) = m_CancellationTokenSource;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 40), (int32_t)m_CancellationTokenSource, v37, v38);
      *(_DWORD *)(v29 + 48) = v56;
      *(_DWORD *)(v29 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v29 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v40 = (int)tdExplanation;
      *(_QWORD *)(v29 + 56) = tdExplanation;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 56), v40, v41, v42);
      v44 = 1;
      *(_BYTE *)(v29 + 64) = v57;
      *(_BYTE *)(v29 + 65) = 1;
      if ( v53 )
      {
        tdAddEntity = v54;
        if ( v17 >= v53->max_length )
LABEL_42:
          sub_1B88814(MasterData_object, v9);
        v13 = v26;
        v44 = *((_DWORD *)&v53->obj.klass + v15) != 0;
      }
      else
      {
        tdAddEntity = v54;
        v13 = v26;
      }
      tdInfo = v34;
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             (NpCombineControl_o *)MasterData_object,
                                             *(_DWORD *)(v29 + 16),
                                             *(_DWORD *)(v29 + 72),
                                             tdAddEntity->fields.condLimitCount,
                                             v15 - 8,
                                             v44,
                                             v43);
      *(_DWORD *)(v29 + 68) = (_DWORD)MasterData_object;
      if ( !v8 )
        break;
      items = v8->fields._items;
      v48 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v29,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v29;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), v29, v45, v46);
      }
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                             (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      v51 = v15 - 7;
      ++v15;
      if ( v51 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v8;
    }
LABEL_41:
    sub_1B8880C(MasterData_object, v9);
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v8;
}


int32_t __fastcall NpCombineControl__GetNpLv(
        UserServantEntity_o *baseUsrSvtData,
        System_Int64_array *mtSvtIdList,
        int32_t *tmpTargetLv,
        const MethodInfo *method)
{
  System_Int64_array *v5; // x21
  UserServantEntity_o *v6; // x19
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  int64_t v9; // x22
  UserServantEntity_o *v10; // x22
  int32_t treasureDeviceLv1; // w8
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-58h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_4A5E9EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseUsrSvtData = (UserServantEntity_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E9EA = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *tmpTargetLv = 0;
  if ( !v5 )
    goto LABEL_17;
  v7 = *(_QWORD *)&v5->max_length;
  if ( (int)v7 < 1 )
  {
    mtSvtIdList = 0LL;
    if ( v6 )
      return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0LL);
LABEL_17:
    sub_1B8880C(baseUsrSvtData, mtSvtIdList);
  }
  v8 = 0LL;
  do
  {
    if ( v8 >= (unsigned int)v7 )
      sub_1B88814(baseUsrSvtData, mtSvtIdList);
    v9 = v5->m_Items[v8];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v9,
                                              (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    v10 = baseUsrSvtData;
    baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__IsMaterialTd(baseUsrSvtData, 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      treasureDeviceLv1 = v10->fields.treasureDeviceLv1;
      tdMaxLv[1] = treasureDeviceLv1;
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_40212352(
                                                v10,
                                                &tdMaxLv[1],
                                                tdMaxLv,
                                                0LL);
      treasureDeviceLv1 = tdMaxLv[1];
    }
    ++v8;
    mtSvtIdList = (System_Int64_array *)(unsigned int)(treasureDeviceLv1 + *tmpTargetLv);
    *tmpTargetLv = (int)mtSvtIdList;
    LODWORD(v7) = v5->max_length;
  }
  while ( (__int64)v8 < (int)v7 );
  if ( !v6 )
    goto LABEL_17;
  return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0LL);
}


int32_t __fastcall NpCombineControl__GetQp(
        int32_t currentId,
        int32_t currentLv,
        int32_t resNpLv,
        const MethodInfo *method)
{
  int32_t v7; // w22
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  TreasureDvcLvEntity_o *Entity; // x0

  if ( (byte_4A5E9EB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E9EB = 1;
  }
  if ( currentLv >= resNpLv )
    return 0;
  v7 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v9);
    }
    Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, currentId, currentLv, 0LL);
    if ( Entity )
      v7 += Entity->fields.qp;
    ++currentLv;
  }
  while ( resNpLv != currentLv );
  return v7;
}


System_Collections_Generic_List_SvtUseNpData__o *__fastcall NpCombineControl__GetSvtNpData(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 MasterData_object; // x0
  DataManager_o *v7; // x21
  ServantTreasureDeviceAddMaster_o *v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x22
  int32_t TransformCount; // w0
  __int64 v14; // x21
  __int64 v15; // x23
  int32_t v16; // w0
  const MethodInfo *v17; // x4
  System_Collections_Generic_List_object__o *v18; // x21
  Il2CppObject *v19; // x22
  int32_t v20; // w23
  __int64 v21; // x27
  int32_t TransformedServantId; // w25
  __int64 v23; // x26
  int32_t *p_cardId; // x8
  int32_t v25; // w29
  __int64 v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  int v29; // w8
  __int64 v30; // x1
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t DispLimitCount; // w25
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  NpCombineControl_o *v40; // x0
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  int32_t v43; // w3
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

  if ( (byte_4A5E9DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&SvtUseNpData_TypeInfo);
    byte_4A5E9DA = 1;
  }
  v52 = 0LL;
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1BDA48C(MasterData_object);
  v7 = **(DataManager_o ***)(MasterData_object + 184);
  if ( !v7 )
    goto LABEL_41;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 v7,
                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_41;
  v8 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v10;
  *(_QWORD *)&v54.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v54, 0LL);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                        usrSvtData->fields.limitCount,
                        0LL);
  if ( !v8 )
    goto LABEL_41;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v8, v11, MasterData_object, 0, 0, 0LL);
  TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
  if ( !EnableEntity )
  {
    v19 = DataManager__GetMasterData_object_(
            v7,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal < 1 )
      return (System_Collections_Generic_List_SvtUseNpData__o *)v18;
    v20 = 0;
    v21 = 0LL;
    while ( 1 )
    {
      MasterData_object = (__int64)this->fields.baseUserServantEntity;
      if ( !MasterData_object )
        break;
      TransformedServantId = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)MasterData_object,
                               v20,
                               0LL);
      MasterData_object = UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                            usrSvtData,
                            &v52,
                            v20,
                            -1,
                            -1,
                            0,
                            0LL);
      if ( !v52 )
        break;
      if ( !v19 )
        break;
      MasterData_object = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)v19,
                                     TransformedServantId,
                                     v52->fields.id,
                                     0LL);
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
        0LL);
      MasterData_object = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(
                                     TransformedServantId,
                                     *(_DWORD *)(v23 + 16),
                                     0LL);
      if ( MasterData_object )
        v21 = MasterData_object;
      if ( MasterData_object )
      {
        if ( !v21 )
          break;
        p_cardId = (int32_t *)(v21 + 64);
      }
      else
      {
        if ( !v52 )
          break;
        p_cardId = &v52->fields.cardId;
      }
      v25 = *p_cardId;
      v26 = sub_1B887FC(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v26, 0LL);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), v30, v27, v28);
      v31 = *(_QWORD *)(v23 + 24);
      *(_QWORD *)(v26 + 40) = v31;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 40), v31, v32, v33);
      *(_DWORD *)(v26 + 48) = v25;
      *(_DWORD *)(v26 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v26 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v35 = (int)tdExplanation;
      *(_QWORD *)(v26 + 56) = tdExplanation;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 56), v35, v36, v37);
      *(_BYTE *)(v26 + 64) = 0;
      v38 = *(_DWORD *)(v26 + 16);
      v39 = *(_DWORD *)(v26 + 72);
      *(_BYTE *)(v26 + 65) = this->fields.transformTotal > 1;
      MasterData_object = NpCombineControl__GetLimitCountForSingle(v40, v38, v39, v41);
      *(_DWORD *)(v26 + 68) = MasterData_object;
      if ( !v18 )
        break;
      items = v18->fields._items;
      v45 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v26,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), v26, v42, v43);
      }
      if ( ++v20 >= this->fields.transformTotal )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v18;
    }
LABEL_41:
    sub_1B8880C(MasterData_object, usrSvtData);
  }
  UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v15;
  *(_QWORD *)&v55.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, v16, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(this, usrSvtData, tdInfo, EnableEntity, v17);
}


SetLevelUpData_o *__fastcall NpCombineControl__GetTargetData(NpCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.lvUpData;
}


int32_t __fastcall NpCombineControl__GetTutorialOpenType(NpCombineControl_o *this, const MethodInfo *method)
{
  return 39;
}


void __fastcall NpCombineControl__InitDispCombineInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *currentInfoLb; // x0
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E9D6 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_9212/*"NEED_QP_INFO"*/);
    byte_4A5E9D6 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  currentInfoLb = (UILabel_o *)this->fields.maxLvStatusInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_17;
  UILabel__set_text(needQpLb, (System_String_o *)currentInfoLb, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  currentInfoLb = (UILabel_o *)System_Int32__ToString((int)this + 396, 0LL);
  if ( !qpLb )
    goto LABEL_17;
  UILabel__set_text(qpLb, (System_String_o *)currentInfoLb, 0LL);
  currentInfoLb = this->fields.qpLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  v10.fields.r = 1.0;
  v10.fields.g = 1.0;
  v10.fields.b = 1.0;
  v10.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentInfoLb, v10, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v6);
  NpCombineControl__SetSelectMaterialEnable(this, v7);
  currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0LL);
  currentInfoLb = (UILabel_o *)this->fields.arrowInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v8);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v9);
  currentInfoLb = (UILabel_o *)this->fields.switchButton;
  if ( !currentInfoLb
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL),
        (currentInfoLb = this->fields.servantName) == 0LL)
    || (currentInfoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)currentInfoLb,
                                       0LL)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(currentInfoLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
}


void __fastcall NpCombineControl__InitInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t klass; // w8
  UILabel_o *preSelectBaseLb; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  MenuListControl_o *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E9D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/);
    byte_4A5E9D4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v3);
  NpCombineControl__InitDispCombineInfo(this, v4);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v5);
  SelfUserGame = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_25;
  klass = (int32_t)SelfUserGame[4].klass;
  SelfUserGame = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  this->fields.userQP = klass;
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_25;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
  if ( !SelfUserGame )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_25;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v10, v11);
  v14 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v14 && v14->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      v14,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v15 )
        break;
      if ( !v18.fields._current )
        sub_1B8880C(v15, v16);
      if ( HIDWORD(v18.fields._current[1].klass) == 10 )
      {
        v17 = this->fields.menuListCtr;
        if ( !v17 )
          sub_1B8880C(0LL, v16);
        MenuListControl__setBannerIcon(
          v17,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v18.fields._current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_1B8880C(SelfUserGame, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
}


void __fastcall NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5E9D3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E9D3 = 1;
  }
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  NpCombineControl__InitInfo(this, v5);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B88554(p_charaGraph, 0, v9, v10);
      return;
    }
LABEL_12:
    sub_1B8880C(helpBtn, v3);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_4A5E9EE & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    byte_4A5E9EE = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_1B8880C(this, method);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.assetList;
}


void __fastcall NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  int32_t childCount; // w0
  int32_t v11; // w20
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_4A5E9EF & 1) == 0 )
  {
    sub_1B885B0(&Method_NpCombineControl_OnClickArrow__);
    byte_4A5E9EF = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0LL);
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_15;
  currentMoveIdx = this->fields.currentMoveIdx;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_15;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  v11 = childCount ? ((currentMoveIdx + delte) % childCount + childCount) % childCount : 0;
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  this->fields.currentMoveIdx = v11;
  if ( !wrapContent
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wrapContent, 1, 0LL),
        (wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent) == 0LL)
    || (centerChild = this->fields.centerChild,
        (wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL)) == 0LL)
    || (wrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)wrapContent,
                                                   v11,
                                                   0LL),
        !centerChild) )
  {
LABEL_15:
    sub_1B8880C(wrapContent, v7);
  }
  UICenterOnChild__CenterOn_46662112(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
}


void __fastcall NpCombineControl__OnClickExeCombine(NpCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E9E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E9E6 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v10,
    selectMtUsrSvtIdList,
    (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v11,
            (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v11.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v6);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B8880C(0LL, v8);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v11,
    (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_1B8880C(selectMtUsrSvtIdList, method);
  SetRarityDialogControl__SetNpCombineInfo(
    (SetRarityDialogControl_o *)selectMtUsrSvtIdList,
    this->fields.baseUserServantEntity,
    this->fields.selectMtUsrSvtIdList,
    this->fields.lvUpData,
    this->fields.isExceedMaxLv,
    this->fields.isCombineSvt,
    this->fields.isExceeded,
    0,
    0LL);
}


void __fastcall NpCombineControl__OnClickMaterialSelectList(NpCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4A5E9E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_NpCombineControl_OnClickMaterialSelectList__);
    byte_4A5E9E9 = 1;
  }
  v3 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_NpCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, v5);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5E9F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_NpCombineControl_OnClickSwitchButton__);
    byte_4A5E9F0 = 1;
  }
  transformInfo = 0LL;
  this->fields.displayTransformIndex = (this->fields.displayTransformIndex + 1) % this->fields.transformTotal;
  NpCombineControl__ChangeTargetInfo(this, method);
  if ( this->fields.transformTotal >= 2 )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( !baseUserServantEntity
      || (baseUserServantEntity = (UserServantEntity_o *)UserServantEntity__GetTransformedServantInfo(
                                                           baseUserServantEntity,
                                                           &transformInfo,
                                                           this->fields.displayTransformIndex,
                                                           0LL),
          !transformInfo)
      || (baseUserServantEntity = (UserServantEntity_o *)this->fields.servantName) == 0LL )
    {
      sub_1B8880C(baseUserServantEntity, v3);
    }
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  v5 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_NpCombineControl_OnClickSwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
}


void __fastcall NpCombineControl__RefreshSvtNpCombineEndShowServant(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *helpBtn; // x0
  const MethodInfo *v5; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  int32_t v11; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v16; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  MenuListControl_o *v19; // x0
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A5E9D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_9212/*"NEED_QP_INFO"*/);
    byte_4A5E9D5 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v5);
  helpBtn = this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  helpBtn = this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  helpBtn = this->fields.maxLvStatusInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_35;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v7);
  NpCombineControl__SetSelectMaterialEnable(this, v8);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v9);
  NpCombineControl__ResetScrollView(this, v10);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_35;
  v11 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v11;
  if ( !helpBtn )
    goto LABEL_35;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  helpBtn = this->fields.baseSelectInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_35;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v12, v13);
  v16 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v16 && v16->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      v16,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v17 )
        break;
      if ( !v26.fields._current )
        sub_1B8880C(v17, v18);
      if ( HIDWORD(v26.fields._current[1].klass) == 10 )
      {
        v19 = this->fields.menuListCtr;
        if ( !v19 )
          sub_1B8880C(0LL, v18);
        MenuListControl__setBannerIcon(
          v19,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v26.fields._current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  helpBtn = this->fields.baseLvInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (ServantStatusBattleListViewItem_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B88554(p_charaGraph, 0, v23, v24);
      return;
    }
LABEL_35:
    sub_1B8880C(helpBtn, v3);
  }
}


void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E9ED & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4A5E9ED = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
  scrollView = this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_15;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)scrollView, 0LL);
  scrollView = this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_15;
  UIWrapContent__resetScroll((UIWrapContent_o *)scrollView, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
  v4 = (UnityEngine_Transform_o *)scrollView;
  if ( !byte_4A55CE1 )
  {
    scrollView = (void *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_15;
  v5.fields.y = *((float *)scrollView + 84);
  v5.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v5, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (v6.fields.x = 0.0,
        v6.fields.y = 0.0,
        v6.fields.z = 0.0,
        UIScrollView__set_currentMomentum((UIScrollView_o *)scrollView, v6, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(scrollView, method);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)scrollView, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtCardImg(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  NpCombineControl_o *v4; // x20
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  NpCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4A5E9D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (NpCombineControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E9D9 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  if ( !v9 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v9,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v12 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = (NpCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v12,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_37906428;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.charaGraph, (int32_t)TexturePrefab_37906428, v15, v16);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B8880C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_40836020((UICharaGraphTexture_o *)this, usrSvtData, v12, 0LL, 0, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtNpInfo(
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
  UIIconLabel_o *iconLabel; // x22
  int32_t lv; // w23
  UnityEngine_GameObject_o *LevelMax; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_array **p_assetList; // x22
  System_String_array *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_String_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_String_array *assetList; // x22
  unsigned __int64 v27; // x23
  __int64 v28; // x29
  int32_t TransformedServantId; // w0
  __int64 v30; // x25
  __int64 v31; // x26
  int32_t v32; // w24
  int32_t v33; // w25
  int32_t v34; // w2
  int32_t v35; // w3
  System_Action_o *v36; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5E9D8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_NpCombineControl_SetCombineNpList__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5E9D8 = 1;
  }
  if ( usrSvtEn )
  {
    v6 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = v6;
    *(_QWORD *)&v37.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)usrSvtEn, v9, v10);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_26;
    UIIconLabel__Set_38235604(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v15);
    this->fields.svtNpDataList = SvtNpData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtNpDataList, (int32_t)SvtNpData, v17, v18);
    p_assetList = &this->fields.assetList;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetList, 0LL) )
    {
      v20 = *p_assetList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_37799632(v20, 0LL);
      *p_assetList = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v21, v22);
    }
    v23 = (struct System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetList, (int32_t)v23, v24, v25);
    assetList = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v27 = 0LL;
      v28 = 32LL;
      while ( 1 )
      {
        LevelMax = (UnityEngine_GameObject_o *)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v27, 0LL);
        v31 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v30 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        v32 = TransformedServantId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v31;
        *(_QWORD *)&v38.fields.fakeValue = v30;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v32, v33, 0LL);
        if ( !assetList )
          break;
        if ( v27 >= assetList->max_length )
          sub_1B88814(LevelMax, v14);
        *(Il2CppClass **)((char *)&assetList->obj.klass + v28) = (Il2CppClass *)LevelMax;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)assetList + v28), (int32_t)LevelMax, v34, v35);
        assetList = this->fields.assetList;
        ++v27;
        v28 += 8LL;
        if ( (__int64)v27 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_1B8880C(LevelMax, v14);
    }
LABEL_22:
    v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37797288(assetList, v36, 1, 0LL);
  }
}


void __fastcall NpCombineControl__SetCombineNpList(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  UnityEngine_Object_o *centerChild; // x20
  const MethodInfo *currentMoveIdx; // x1
  UnityEngine_Component_o *wrapContent; // x0
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t transformTotal; // w20
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v18; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v23; // x8
  bool isScrollNpInfo; // w1
  int v25; // w22
  struct UICenterOnChild_o *v26; // x20
  SpringPanel_OnFinished_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int i; // w24
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *v36; // x2
  UnityEngine_Object_o *v37; // x21
  System_String_o *v38; // x0
  Il2CppObject *Component_object; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-68h] BYREF
  int32_t idx; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4A5E9DE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1B885B0(&Method_NpCombineControl_OnCenterOnChildFinished__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SpringPanel_OnFinished_TypeInfo);
    sub_1B885B0(&StringLiteral_4988/*"D3"*/);
    byte_4A5E9DE = 1;
  }
  idx = 0;
  transformInfo = 0LL;
  memset(&v43, 0, sizeof(v43));
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL) )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_54;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !wrapContent )
        goto LABEL_54;
      v7 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)wrapContent,
             (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.centerChild, (int32_t)v7, v8, v9);
    }
    wrapContent = (UnityEngine_Component_o *)this->fields.defaultNpInfo;
    if ( !wrapContent )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0LL);
    wrapContent = (UnityEngine_Component_o *)this->fields.switchButton;
    this->fields.displayTransformIndex = 0;
    if ( !wrapContent )
      goto LABEL_54;
    transformTotal = this->fields.transformTotal;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, transformTotal > 1, 0LL);
    wrapContent = (UnityEngine_Component_o *)this->fields.servantName;
    if ( !wrapContent )
      goto LABEL_54;
    wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
    if ( !wrapContent )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, transformTotal > 1, 0LL);
    if ( transformTotal >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( wrapContent )
      {
        npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
        transform = UnityEngine_Component__get_transform(wrapContent, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, npCombineInfoPrefab, transform, 0LL, 0LL);
        this->fields.targetObject = Object;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)Object, v15, v16);
        wrapContent = (UnityEngine_Component_o *)this->fields.targetObject;
        if ( wrapContent )
        {
          wrapContent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)wrapContent,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( this->fields.svtNpDataList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v18 = (ServantNpInfoIconComponent_o *)wrapContent;
            wrapContent = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
            if ( v18 )
            {
              ServantNpInfoIconComponent__SetNpInfo(
                v18,
                baseUserServantEntity,
                0,
                (SvtUseNpData_o *)wrapContent,
                3.0,
                10.0,
                0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
              GameObjectExtensions__SetLocalPositionY(gameObject, -18.5, 0LL);
              v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
              GameObjectExtensions__SetLocalScale_33726240(v20, this->fields.scaleOffset, 0LL);
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
                                                           0LL);
                if ( transformInfo )
                {
                  wrapContent = (UnityEngine_Component_o *)this->fields.servantName;
                  if ( wrapContent )
                  {
                    UILabel__set_text((UILabel_o *)wrapContent, transformInfo->fields.titleText, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_54:
      sub_1B8880C(wrapContent, currentMoveIdx);
    }
    v23 = this->fields.svtNpDataList;
    if ( !v23 )
      goto LABEL_54;
    if ( v23->fields._size >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
      this->fields.isScrollNpInfo = 1;
      if ( !wrapContent )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
      v26 = this->fields.centerChild;
      v27 = (SpringPanel_OnFinished_o *)sub_1B887FC(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v27, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0LL);
      if ( !v26 )
        goto LABEL_54;
      v26->fields.onFinished = v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.onFinished, (int32_t)v27, v28, v29);
      v25 = 2;
      isScrollNpInfo = this->fields.isScrollNpInfo;
    }
    else
    {
      isScrollNpInfo = 0;
      v25 = 1;
      this->fields.isScrollNpInfo = 0;
    }
    NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v11);
    idx = 0;
    for ( i = 0; i != v25; ++i )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
      if ( !wrapContent )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        (System_Collections_Generic_List_object__o *)wrapContent,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
      v43 = v42;
      while ( 1 )
      {
        v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
        if ( !v31 )
          break;
        current = v43.fields._current;
        if ( !v43.fields._current )
          sub_1B8880C(v31, v32);
        if ( ((__int64)v43.fields._current[1].monitor & 0x80000000) == 0 )
        {
          v34 = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !v34 )
            sub_1B8880C(0LL, v32);
          v35 = this->fields.npCombineInfoPrefab;
          v36 = UnityEngine_Component__get_transform(v34, 0LL);
          v37 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v35, v36, 0LL, 0LL);
          v38 = System_Int32__ToString_62512312((int32_t)&idx, (System_String_o *)StringLiteral_4988/*"D3"*/, 0LL);
          if ( !v37 )
            sub_1B8880C(v38, v38);
          UnityEngine_Object__set_name(v37, v38, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v37,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( !Component_object )
            sub_1B8880C(0LL, v40);
          ServantNpInfoIconComponent__SetNpInfo(
            (ServantNpInfoIconComponent_o *)Component_object,
            this->fields.baseUserServantEntity,
            idx++,
            (SvtUseNpData_o *)current,
            0.0,
            0.0,
            0LL);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    }
    if ( this->fields.isScrollNpInfo )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_54;
      LODWORD(wrapContent[1].monitor) = 700;
      UIWrapContent__WrapContent((UIWrapContent_o *)wrapContent, 0LL);
    }
    NpCombineControl__ResetScrollView(this, currentMoveIdx);
    currentMoveIdx = (const MethodInfo *)(unsigned int)this->fields.currentMoveIdx;
    if ( (int)currentMoveIdx >= 1 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_54;
      UIWrapContent__setScrollPos((UIWrapContent_o *)wrapContent, (int32_t)currentMoveIdx, 0LL);
    }
    this->fields.isSelectBase = 1;
    NpCombineControl__SetSelectMaterialEnable(this, currentMoveIdx);
    NpCombineControl__SetSvtNpCombineData(this, v41);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetEnableCombineBtn(
        NpCombineControl_o *this,
        bool isCombine,
        const MethodInfo *method)
{
  UIWidget_o *combineBtn; // x0
  float v5; // s8
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  combineBtn = (UIWidget_o *)this->fields.combineBtn;
  if ( !combineBtn
    || (!isCombine ? (v5 = 0.5) : (v5 = 1.0),
        ((void (__fastcall *)(UIWidget_o *))combineBtn->klass->vtable._5_get_isAnchoredVertically.method)(combineBtn),
        (combineBtn = (UIWidget_o *)this->fields.combineBtnTxt) == 0LL) )
  {
    sub_1B8880C(combineBtn, isCombine);
  }
  v6.fields.a = 1.0;
  v6.fields.r = v5;
  v6.fields.g = v5;
  v6.fields.b = v5;
  UIWidget__set_color(combineBtn, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetEnabledNpInfoScroll(
        NpCombineControl_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20

  if ( (enabled & ~this->fields.isScrollNpInfo & 1) == 0 )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0LL),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.wrapContent) == 0LL) )
    {
      sub_1B8880C(scrollView, enabled);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
  }
}


void __fastcall NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E9E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5E9E5 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
      UIWidget__set_color(combineBtnTxt, v8, 0LL);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0LL);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v7, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B8880C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0LL);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0LL);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A5E9D7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E9D7 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 392, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B8880C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetNpCombineData(
        NpCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  __int64 materialGrid; // x0
  __int64 v6; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v8; // x23
  System_Collections_Generic_List_long__o *v9; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned __int64 v13; // x22
  struct System_Int64_array *v14; // x8
  int64_t v15; // x24
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x25
  UnityEngine_Transform_o *v19; // x26
  int v20; // s0
  UnityEngine_Transform_o *v23; // x26
  Il2CppObject *Component_object; // x25
  NpMaterialSvtInfo_ClickDelegate_o *v25; // x26
  const MethodInfo *v26; // x3
  UserServantEntity_o *v27; // x2
  const MethodInfo *v28; // x5
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  const MethodInfo *v32; // x3
  int32_t v33; // w21
  const MethodInfo *v34; // x3
  struct System_Int64_array *v35; // x22
  __int64 v36; // x8
  unsigned __int64 v37; // x23
  int64_t v38; // x20
  const MethodInfo *v39; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  _BOOL8 v44; // x0
  __int64 v45; // x1
  float v46; // s0
  int v47; // w8
  UILabel_o *qpLb; // x22
  float v49; // s1
  float v50; // s0
  float v51; // s3
  float v52; // s2
  struct SetLevelUpData_o *v53; // x8
  int32_t spendQpVal; // w9
  bool v55; // w20
  float v56; // s0
  float v57; // s1
  float v58; // s2
  float v59; // s3
  const MethodInfo *v60; // x1
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4A5E9E1 & 1) == 0 )
  {
    sub_1B885B0(&NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E9E1 = 1;
  }
  tmpTargetLv = 0;
  memset(&v62, 0, sizeof(v62));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_62;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_62;
  v8 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectMtUsrSvtIdList, (int32_t)v9, v11, v12);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v8 < 1 )
    return;
  v13 = 0LL;
  do
  {
    v14 = data->fields.materialUsrSvtIdList;
    if ( !v14 )
      goto LABEL_62;
    if ( v13 >= v14->max_length )
LABEL_63:
      sub_1B88814(materialGrid, v6);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    v15 = v14->m_Items[v13];
    materialSvtPrefab = this->fields.materialSvtPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)materialGrid, 0LL);
    materialGrid = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              materialSvtPrefab,
                              transform,
                              0LL,
                              0LL);
    if ( !materialGrid )
      goto LABEL_62;
    v18 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v19 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0LL);
    if ( !materialGrid )
      goto LABEL_62;
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v19 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v18, 0LL);
    v23 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_4A55CE1 )
    {
      materialGrid = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v23 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v18,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v25 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_1B887FC(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v25,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      v26);
    if ( !Component_object )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo((NpMaterialSvtInfo_o *)Component_object, v13, v27, v15, v25, v28);
    materialGrid = (__int64)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_62;
    v29 = *(_QWORD *)(materialGrid + 16);
    v30 = Method_System_Collections_Generic_List_long__Add__;
    ++*(_DWORD *)(materialGrid + 28);
    if ( !v29 )
      goto LABEL_62;
    v31 = *(int *)(materialGrid + 24);
    if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        (System_Collections_Generic_List_long__o *)materialGrid,
        v15,
        *(const MethodInfo_34E5868 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v31 + 1;
      *(_QWORD *)(v29 + 8 * v31 + 32) = v15;
    }
    ++v13;
  }
  while ( (unsigned int)v8 != v13 );
  materialGrid = (__int64)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_62;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = NpCombineControl__GetNpLv(
                   this->fields.baseUserServantEntity,
                   data->fields.materialUsrSvtIdList,
                   &tmpTargetLv,
                   v32);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_62;
  v33 = materialGrid;
  materialGrid = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = materialGrid & 1;
  v35 = data->fields.materialUsrSvtIdList;
  if ( !v35 )
    goto LABEL_62;
  v36 = *(_QWORD *)&v35->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v36 )
        goto LABEL_63;
      v38 = v35->m_Items[v37];
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v38,
                                (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_62;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = NpCombineControl__CheckConfirm(v38, v39);
      if ( (materialGrid & 1) != 0 )
        break;
      LODWORD(v36) = v35->max_length;
      if ( (__int64)++v37 >= (int)v36 )
        goto LABEL_39;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_39:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_62;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v33, v34);
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v61,
      combineEventList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v62 = v61;
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v62,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v44 )
        break;
      if ( !v62.fields._current )
        sub_1B8880C(v44, v45);
      if ( HIDWORD(v62.fields._current[1].klass) == 10 )
      {
        v46 = *(float *)&v62.fields._current[3].monitor * (float)*p_spendQpVal;
        v47 = (int)v46;
        if ( v46 == INFINITY )
          v47 = 0x80000000;
        *p_spendQpVal = v47;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v62,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_62512312((int)this + 396, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  materialGrid = (__int64)this->fields.qpLb;
  v49 = 0.0;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
    v49 = 1.0;
  if ( !materialGrid )
    goto LABEL_62;
  v50 = 1.0;
  v51 = 1.0;
  v52 = v49;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)(&v49 - 1), 0LL);
  v53 = this->fields.lvUpData;
  if ( !v53 )
    goto LABEL_62;
  v53->fields.nextLv = v33;
  spendQpVal = this->fields.spendQpVal;
  v53->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v56 = 1.0;
      v55 = 1;
      v57 = 1.0;
      goto LABEL_60;
    }
LABEL_62:
    sub_1B8880C(materialGrid, v6);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v55 = 0;
  v56 = 1.0;
  v57 = 0.0;
LABEL_60:
  v58 = v57;
  v59 = v56;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v56, 0LL);
  this->fields._IsExeCombine_k__BackingField = v55;
  NpCombineControl__SetExeBtnState(this, v60);
}


void __fastcall NpCombineControl__SetNpCombineNullData(NpCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *qpLb; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  NpCombineControl__DestroyMaterialGrid(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  v4 = System_Int32__ToString((int)this + 396, 0LL);
  if ( !qpLb || (UILabel__set_text(qpLb, v4, 0LL), (v4 = (System_String_o *)this->fields.qpLb) == 0LL) )
    sub_1B8880C(v4, v5);
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v4, v7, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v6);
}


void __fastcall NpCombineControl__SetSelectMaterialEnable(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn) == 0LL) )
  {
    sub_1B8880C(preSelectBaseLb, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A5E9E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7108/*"HEADER_MSG_NPUP_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_7361/*"INFO_MSG_NPUP_BASE"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E9E8 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1B8880C(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7108/*"HEADER_MSG_NPUP_MATERIAL"*/;
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
    v7 = &StringLiteral_7361/*"INFO_MSG_NPUP_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0LL);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall NpCombineControl__SetSvtNpCombineData(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 v4; // x1
  char *Item; // x0
  int32_t v6; // w22
  char *v7; // x21
  int32_t v8; // w20
  __int64 v9; // x0
  DataManager_o *v10; // x24
  int32_t v11; // w25
  char *v12; // x23
  UILabel_o *currentInfoLb; // x24
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w24
  UserServantEntity_o *baseUserServantEntity; // x24
  System_Int64_array *v18; // x0
  const MethodInfo *v19; // x3
  SetLevelUpData_o *v20; // x26
  struct SetLevelUpData_o **p_lvUpData; // x25
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // d0
  ServantStatusBattleListViewItem_o *v33; // x0
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5E9E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_1B885B0(&SetLevelUpData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5E9E0 = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = (char *)this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     0,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 0, 0LL);
      v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1BDA48C(v9);
      Item = *(char **)(*(_QWORD *)(v9 + 192) + 16LL);
      if ( (Item[309] & 1) == 0 )
        Item = (char *)sub_1BDA48C(Item);
      v10 = (DataManager_o *)**((_QWORD **)Item + 23);
      if ( !v10 )
        goto LABEL_29;
      Item = (char *)DataManager__GetMasterData_object_(
                       v10,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                       (TreasureDvcMaster_o *)Item,
                       *((_DWORD *)v7 + 4),
                       v6,
                       0LL);
      if ( !Item )
        goto LABEL_29;
      v11 = *((_DWORD *)Item + 12);
      v12 = Item;
      Item = (char *)DataManager__GetMasterData_object_(
                       v10,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Item, v6, v8, 0LL);
      if ( !Item )
        goto LABEL_29;
      currentInfoLb = this->fields.currentInfoLb;
      Item = (char *)TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)Item, 0LL);
      if ( !currentInfoLb )
        goto LABEL_29;
      UILabel__set_text(currentInfoLb, (System_String_o *)Item, 0LL);
      if ( v8 < v11 )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = v8;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v18 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v18, &tmpTargetLv, v19);
        }
        v20 = (SetLevelUpData_o *)sub_1B887FC(SetLevelUpData_TypeInfo);
        SetLevelUpData___ctor(v20, 0LL);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lvUpData, (int32_t)v20, v22, v23);
        Item = (char *)this->fields.lvUpData;
        if ( Item )
        {
          *((_DWORD *)Item + 4) = v6;
          *(_QWORD *)(Item + 20) = 1LL;
          Item[112] = v7[65];
          v26 = *((_QWORD *)v12 + 4);
          *((_QWORD *)Item + 4) = v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(Item + 32), v26, v24, v25);
          Item = (char *)*p_lvUpData;
          if ( *p_lvUpData )
          {
            v29 = *((_QWORD *)v12 + 3);
            *((_QWORD *)Item + 5) = v29;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(Item + 40), v29, v27, v28);
            Item = (char *)*p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_DWORD *)Item + 16) = v8;
              *((_DWORD *)Item + 17) = NpLv;
              v32 = *(_QWORD *)&this->fields.spendQpVal;
              *((_QWORD *)Item + 12) = 0LL;
              v33 = (ServantStatusBattleListViewItem_o *)(Item + 96);
              *(_QWORD *)(&v33[-1].fields.isCanSelect + 3) = v32;
              sub_1B88554(v33, 0, v30, v31);
              return;
            }
          }
        }
LABEL_29:
        sub_1B8880C(Item, v4);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v14);
      Item = (char *)this->fields.qpLb;
      if ( !Item )
        goto LABEL_29;
      UILabel__set_text((UILabel_o *)Item, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
    }
  }
}


bool __fastcall NpCombineControl__get_isExchangeSvtInList(NpCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._isExchangeSvtInList_k__BackingField;
}


void __fastcall NpCombineControl__onClickLeftArrow(NpCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NpCombineControl__OnClickArrow(this, -1, v2);
}


void __fastcall NpCombineControl__onClickRightArrow(NpCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NpCombineControl__OnClickArrow(this, 1, v2);
}


void __fastcall NpCombineControl__set_isExchangeSvtInList(
        NpCombineControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isExchangeSvtInList_k__BackingField = value;
}