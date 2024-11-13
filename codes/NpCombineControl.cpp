void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19B42 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19B42 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall NpCombineControl__ChangeTargetInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *targetObject; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v12; // x20

  if ( (byte_4B19B30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19B30 = 1;
  }
  if ( this->fields.baseSvtId >= 1 )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
    {
      Component_object = this->fields.targetObject;
      if ( !Component_object
        || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             Component_object,
                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___),
            !this->fields.svtNpDataList)
        || (baseUserServantEntity = this->fields.baseUserServantEntity,
            v12 = (ServantNpInfoIconComponent_o *)Component_object,
            Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                             this->fields.displayTransformIndex,
                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__),
            !v12) )
      {
        sub_1BCAA3C(Component_object, v9);
      }
      ServantNpInfoIconComponent__SetNpInfo(
        v12,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B19B3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B19B3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_45739916((UserServantEntity_o *)Entity, v11);
}


bool __fastcall NpCombineControl__CheckConfirm_45739916(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
    sub_1BCAA3C(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        sub_1BCAA44(selectUsrSvtEnt, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t currentId; // w21

  v4 = this;
  if ( (byte_4B19B38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, resData, method);
    this = (NpCombineControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B19B38 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_1BCAA3C(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.baseUserServantEntity);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int v8; // w22
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array *assetList; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B19B34 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19B34 = 1;
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
    v8 = childCount + 1;
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
                                                 v8 - 2,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
      if ( --v8 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1BCAA3C(wrapContent, method);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage_38514680(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v12, v13, v14, v15, v16, v17);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int v8; // w22
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x8
  int v12; // w9

  if ( (byte_4B19B35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19B35 = 1;
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
    v8 = childCount + 1;
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
                                                  v8 - 2,
                                                  0LL);
      if ( !materialGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(materialGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v8 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1BCAA3C(materialGrid, method);
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
  {
    v12 = selectMtUsrSvtIdList->fields._version + 1;
    selectMtUsrSvtIdList->fields._size = 0;
    selectMtUsrSvtIdList->fields._version = v12;
  }
}


UserServantEntity_o *__fastcall NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  NpCombineControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  PartyOrganizationUtility_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v13; // q1
  int64_t v14; // x20
  Il2CppObject *Entity; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B19B33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    this = (NpCombineControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B19B33 = 1;
  }
  baseUserServantEntity = v3->fields.baseUserServantEntity;
  p_baseUserServantEntity = (PartyOrganizationUtility_o *)&v3->fields.baseUserServantEntity;
  v10 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_9;
  v13 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v23 = v24;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v23, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BCA784(p_baseUserServantEntity, (int64_t)Entity, v16, v17, v18, v19, v20, v21);
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
  long double v7; // q0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x0
  Il2CppObject *MasterData_object; // x0
  int v23; // w25
  bool v24; // cc
  int v25; // w24
  DataManager_o *v26; // x21
  int32_t v27; // w26
  __int64 v28; // x1
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x23
  int32_t v30; // w22
  DataManager_o *v31; // x27
  _BOOL4 v32; // w8
  DataManager_o *v33; // x20

  if ( (byte_4B19B2E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&cardLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v15, v16);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20);
    byte_4B19B2E = 1;
  }
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC(v7);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (BYTE5(MasterData_object[19].klass) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_1C1C6BC(v7);
  v23 = condLimitCount - 1;
  v24 = index < 1;
  if ( index >= 1 )
    v25 = -1;
  else
    v25 = condLimitCount - 1;
  v26 = *(DataManager_o **)MasterData_object[11].monitor;
  if ( v24 )
    v27 = -1;
  else
    v27 = condLimitCount;
  if ( !v26 )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        v26,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_36;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         (ServantTreasureDeviceReleaseMaster_o *)MasterData_object,
                         svtId,
                         0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v28);
  MasterData_object = (Il2CppObject *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v30 = (int)MasterData_object;
  if ( v27 >= 0 && (_DWORD)MasterData_object != v27 && fixedFlag )
    v31 = v26;
  else
    v31 = 0LL;
  if ( v27 >= 0 && (_DWORD)MasterData_object != v27 && fixedFlag )
  {
    if ( (int)MasterData_object < 11 )
      goto LABEL_24;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          (int32_t)MasterData_object,
                                          (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v26 = v31;
    if ( ((unsigned __int8)MasterData_object & 1) == 0 )
LABEL_24:
      v30 = v27;
  }
  v32 = v25 >= 0 && v30 > v25 && fixedFlag;
  if ( v25 >= 0 && v30 > v25 && fixedFlag )
    v33 = v26;
  else
    v33 = 0LL;
  if ( v32 )
  {
    if ( v30 < 11 )
      goto LABEL_32;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          v30,
                                          (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v26 = v33;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
LABEL_32:
      v30 = v23;
  }
  if ( !v26
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v26,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
LABEL_36:
    sub_1BCAA3C(MasterData_object, *(_QWORD *)&svtId);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           v30,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpCombineControl__GetLimitCountForSingle(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  long double v12; // q0
  __int64 v13; // x8
  __int64 v14; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4B19B2D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&cardLimitCount);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9);
    byte_4B19B2D = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(v12);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(v12);
  MasterData_object = **(Il2CppObject ***)(v14 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BCAA3C(MasterData_object, v10);
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
  ServantTreasureDeviceAddEntity_o *v5; // x29
  TreasureDvcInfo_o *v6; // x28
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x22
  __int64 v27; // x1
  long double v28; // q0
  __int64 v29; // x0
  __int64 v30; // x0
  DataManager_o *MasterData_object; // x0
  TreasureDvcMaster_o *v32; // x19
  System_Int32_array *FixedCardLimitCounts; // x27
  __int64 v34; // x20
  struct System_Int32_array *treasureDeviceIds; // x8
  unsigned __int64 v36; // x24
  int32_t v37; // w26
  __int64 v38; // x23
  __int64 v39; // x25
  DataManager_o *v40; // x27
  TreasureDvcInfo_o *v41; // x23
  int32_t v42; // w0
  struct System_Int32_array *hideCardChara; // x8
  struct System_Collections_Generic_List_string__o **p_saveNameList; // x9
  TreasureDvcMaster_o *v45; // x28
  TreasureDvcInfo_o *v46; // x19
  int32_t v47; // w23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  int64_t v51; // x25
  __int64 v52; // x1
  __int64 v53; // x23
  __int64 v54; // x29
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  TreasureDvcInfo_o *v61; // x26
  int64_t v62; // x1
  int64_t m_CancellationTokenSource; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  int32_t DispLimitCount; // w23
  System_String_o *v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  const MethodInfo *v79; // x6
  char v80; // w5
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  Il2CppClass **v90; // x0
  __int64 v91; // x8
  System_Int32_array *v93; // [xsp+8h] [xbp-98h]
  ServantTreasureDeviceAddEntity_o *v94; // [xsp+10h] [xbp-90h]
  int32_t *p_cardId; // [xsp+18h] [xbp-88h]
  int v96; // [xsp+20h] [xbp-80h]
  bool v97; // [xsp+24h] [xbp-7Ch]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  v5 = tdAddEntity;
  v6 = tdInfo;
  if ( (byte_4B19B2C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, usrSvtData, tdInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v10, v11);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v22, v23);
    sub_1BCA7E0(&SvtUseNpData_TypeInfo, v24, v25);
    byte_4B19B2C = 1;
  }
  tdExplanation = 0LL;
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtUseNpData__TypeInfo,
                                                       usrSvtData,
                                                       tdInfo,
                                                       tdAddEntity);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C1C6BC(v28);
  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 16LL);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1C1C6BC(v28);
  MasterData_object = **(DataManager_o ***)(v30 + 184);
  if ( !MasterData_object )
    goto LABEL_41;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !v5 )
    goto LABEL_41;
  v32 = (TreasureDvcMaster_o *)MasterData_object;
  FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(v5, 0LL);
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.treasureDeviceIds,
                                         (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v34 = 8LL;
    v94 = v5;
    p_cardId = &v6->fields.cardId;
    v93 = FixedCardLimitCounts;
    while ( 1 )
    {
      treasureDeviceIds = v5->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      v36 = v34 - 8;
      if ( v34 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
        goto LABEL_42;
      if ( !usrSvtData )
        break;
      v37 = *((_DWORD *)&treasureDeviceIds->obj.klass + v34);
      v39 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
      *(_QWORD *)&v101.fields.currentCryptoKey = v39;
      *(_QWORD *)&v101.fields.fakeValue = v38;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             v101,
                                             0LL);
      if ( !v32 )
        break;
      MasterData_object = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                             v32,
                                             (int32_t)MasterData_object,
                                             v37,
                                             0LL);
      if ( !v6 )
        break;
      v40 = MasterData_object;
      if ( !MasterData_object )
        break;
      v41 = v6;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v6->fields.lv,
        0LL);
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(usrSvtData->fields.svtId, 0LL);
      MasterData_object = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v42, v37, 0LL);
      hideCardChara = v5->fields.hideCardChara;
      p_saveNameList = &MasterData_object->fields.saveNameList;
      if ( !MasterData_object )
        p_saveNameList = (struct System_Collections_Generic_List_string__o **)p_cardId;
      if ( !hideCardChara )
        break;
      if ( v36 >= hideCardChara->max_length )
        goto LABEL_42;
      v45 = v32;
      v46 = v41;
      v96 = *(_DWORD *)p_saveNameList;
      v47 = *((_DWORD *)&hideCardChara->obj.klass + v34);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v27);
      v97 = System_Convert__ToBoolean_63049780(v47, 0LL);
      v51 = sub_1BCAA2C(SvtUseNpData_TypeInfo, v48, v49, v50);
      SvtUseNpData___ctor((SvtUseNpData_o *)v51, 0LL);
      v53 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
      *(_QWORD *)&v102.fields.currentCryptoKey = v53;
      *(_QWORD *)&v102.fields.fakeValue = v54;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             v102,
                                             0LL);
      if ( !v51 )
        break;
      *(_DWORD *)(v51 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v51 + 20) = v37;
      v61 = v46;
      *(_QWORD *)(v51 + 24) = *(_QWORD *)&v46->fields.id;
      v62 = *(_QWORD *)&v40->fields._DispLog;
      *(_QWORD *)(v51 + 32) = v62;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 32), v62, v55, v56, v57, v58, v59, v60);
      m_CancellationTokenSource = (int64_t)v40->fields.m_CancellationTokenSource;
      *(_QWORD *)(v51 + 40) = m_CancellationTokenSource;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 40), m_CancellationTokenSource, v64, v65, v66, v67, v68, v69);
      *(_DWORD *)(v51 + 48) = v96;
      *(_DWORD *)(v51 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v70);
      *(_DWORD *)(v51 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v72 = tdExplanation;
      *(_QWORD *)(v51 + 56) = tdExplanation;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 56), (int64_t)v72, v73, v74, v75, v76, v77, v78);
      v80 = 1;
      *(_BYTE *)(v51 + 64) = v97;
      *(_BYTE *)(v51 + 65) = 1;
      if ( v93 )
      {
        v5 = v94;
        if ( v36 >= v93->max_length )
LABEL_42:
          sub_1BCAA44(MasterData_object, v27);
        v32 = v45;
        v80 = *((_DWORD *)&v93->obj.klass + v34) != 0;
      }
      else
      {
        v5 = v94;
        v32 = v45;
      }
      v6 = v61;
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             (NpCombineControl_o *)MasterData_object,
                                             *(_DWORD *)(v51 + 16),
                                             *(_DWORD *)(v51 + 72),
                                             v5->fields.condLimitCount,
                                             v34 - 8,
                                             v80,
                                             v79);
      *(_DWORD *)(v51 + 68) = (_DWORD)MasterData_object;
      if ( !v26 )
        break;
      items = v26->fields._items;
      v88 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v26->fields._version;
      if ( !items )
        break;
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v51,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v90[4] = (Il2CppClass *)v51;
        sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 4), v51, v81, v82, v83, v84, v85, v86);
      }
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.treasureDeviceIds,
                                             (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      v91 = v34 - 7;
      ++v34;
      if ( v91 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v26;
    }
LABEL_41:
    sub_1BCAA3C(MasterData_object, v27);
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v26;
}


int32_t __fastcall NpCombineControl__GetNpLv(
        UserServantEntity_o *baseUsrSvtData,
        System_Int64_array *mtSvtIdList,
        int32_t *tmpTargetLv,
        const MethodInfo *method)
{
  System_Int64_array *v5; // x21
  UserServantEntity_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  int64_t v13; // x22
  UserServantEntity_o *v14; // x22
  int32_t treasureDeviceLv1; // w8
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-58h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_4B19B3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, mtSvtIdList, tmpTargetLv);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    baseUsrSvtData = (UserServantEntity_o *)sub_1BCA7E0(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v9,
                                              v10);
    byte_4B19B3B = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *tmpTargetLv = 0;
  if ( !v5 )
    goto LABEL_17;
  v11 = *(_QWORD *)&v5->max_length;
  if ( (int)v11 < 1 )
  {
    mtSvtIdList = 0LL;
    if ( v6 )
      return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0LL);
LABEL_17:
    sub_1BCAA3C(baseUsrSvtData, mtSvtIdList);
  }
  v12 = 0LL;
  do
  {
    if ( v12 >= (unsigned int)v11 )
      sub_1BCAA44(baseUsrSvtData, mtSvtIdList);
    v13 = v5->m_Items[v12];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v13,
                                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    v14 = baseUsrSvtData;
    baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__IsMaterialTd(baseUsrSvtData, 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      treasureDeviceLv1 = v14->fields.treasureDeviceLv1;
      tdMaxLv[1] = treasureDeviceLv1;
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_40943792(
                                                v14,
                                                &tdMaxLv[1],
                                                tdMaxLv,
                                                0LL);
      treasureDeviceLv1 = tdMaxLv[1];
    }
    ++v12;
    mtSvtIdList = (System_Int64_array *)(unsigned int)(treasureDeviceLv1 + *tmpTargetLv);
    *tmpTargetLv = (int)mtSvtIdList;
    LODWORD(v11) = v5->max_length;
  }
  while ( (__int64)v12 < (int)v11 );
  if ( !v6 )
    goto LABEL_17;
  return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpCombineControl__GetQp(
        int32_t currentId,
        int32_t currentLv,
        int32_t resNpLv,
        const MethodInfo *method)
{
  int32_t v5; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t v9; // w22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  TreasureDvcLvEntity_o *Entity; // x0

  v5 = currentLv;
  if ( (byte_4B19B3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&currentLv, *(_QWORD *)&resNpLv);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B19B3C = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v9 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v11);
    }
    Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, currentId, v5, 0LL);
    if ( Entity )
      v9 += Entity->fields.qp;
    ++v5;
  }
  while ( resNpLv != v5 );
  return v9;
}


System_Collections_Generic_List_SvtUseNpData__o *__fastcall NpCombineControl__GetSvtNpData(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x0
  __int64 MasterData_object; // x0
  DataManager_o *v24; // x21
  ServantTreasureDeviceAddMaster_o *v25; // x22
  __int64 v26; // x23
  __int64 v27; // x24
  int32_t v28; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x22
  int32_t TransformCount; // w0
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x23
  int32_t v34; // w0
  const MethodInfo *v35; // x4
  System_Collections_Generic_List_object__o *v36; // x21
  Il2CppObject *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  int32_t v41; // w23
  __int64 v42; // x27
  int32_t TransformedServantId; // w25
  __int64 v44; // x26
  __int64 v45; // x2
  __int64 v46; // x3
  int32_t *p_cardId; // x8
  int32_t v48; // w29
  int64_t v49; // x24
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int v56; // w8
  int64_t v57; // x1
  int64_t v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  int32_t DispLimitCount; // w25
  System_String_o *v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int32_t v74; // w1
  int32_t v75; // w2
  NpCombineControl_o *v76; // x0
  const MethodInfo *v77; // x3
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  Il2CppClass **v87; // x0
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-88h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-78h] BYREF
  TreasureDvcInfo_o *v92; // [xsp+20h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_4B19B2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, usrSvtData, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v6, v7);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18, v19);
    sub_1BCA7E0(&SvtUseNpData_TypeInfo, v20, v21);
    byte_4B19B2B = 1;
  }
  v92 = 0LL;
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C1C6BC(v3);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C1C6BC(v3);
  v24 = **(DataManager_o ***)(MasterData_object + 184);
  if ( !v24 )
    goto LABEL_41;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 v24,
                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_41;
  v25 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtData);
  *(_QWORD *)&v94.fields.currentCryptoKey = v27;
  *(_QWORD *)&v94.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v94, 0LL);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                        usrSvtData->fields.limitCount,
                        0LL);
  if ( !v25 )
    goto LABEL_41;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v25, v28, MasterData_object, 0, 0, 0LL);
  TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
  if ( !EnableEntity )
  {
    v37 = DataManager__GetMasterData_object_(
            v24,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_SvtUseNpData__TypeInfo,
                                                         v38,
                                                         v39,
                                                         v40);
    System_Collections_Generic_List_object____ctor(
      v36,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal < 1 )
      return (System_Collections_Generic_List_SvtUseNpData__o *)v36;
    v41 = 0;
    v42 = 0LL;
    while ( 1 )
    {
      MasterData_object = (__int64)this->fields.baseUserServantEntity;
      if ( !MasterData_object )
        break;
      TransformedServantId = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)MasterData_object,
                               v41,
                               0LL);
      MasterData_object = UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                            usrSvtData,
                            &v92,
                            v41,
                            -1,
                            -1,
                            0,
                            0LL);
      if ( !v92 )
        break;
      if ( !v37 )
        break;
      MasterData_object = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)v37,
                                     TransformedServantId,
                                     v92->fields.id,
                                     0LL);
      if ( !v92 )
        break;
      v44 = MasterData_object;
      if ( !MasterData_object )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v92->fields.lv,
        0LL);
      MasterData_object = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(
                                     TransformedServantId,
                                     *(_DWORD *)(v44 + 16),
                                     0LL);
      if ( MasterData_object )
        v42 = MasterData_object;
      if ( MasterData_object )
      {
        if ( !v42 )
          break;
        p_cardId = (int32_t *)(v42 + 64);
      }
      else
      {
        if ( !v92 )
          break;
        p_cardId = &v92->fields.cardId;
      }
      v48 = *p_cardId;
      v49 = sub_1BCAA2C(SvtUseNpData_TypeInfo, usrSvtData, v45, v46);
      SvtUseNpData___ctor((SvtUseNpData_o *)v49, 0LL);
      if ( !v49 )
        break;
      *(_DWORD *)(v49 + 16) = TransformedServantId;
      v56 = *(_DWORD *)(v44 + 16);
      *(_DWORD *)(v49 + 20) = v56;
      *(_DWORD *)(v49 + 24) = v56;
      if ( !v92 )
        break;
      *(_DWORD *)(v49 + 28) = v92->fields.lv;
      v57 = *(_QWORD *)(v44 + 32);
      *(_QWORD *)(v49 + 32) = v57;
      sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 32), v57, v50, v51, v52, v53, v54, v55);
      v58 = *(_QWORD *)(v44 + 24);
      *(_QWORD *)(v49 + 40) = v58;
      sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 40), v58, v59, v60, v61, v62, v63, v64);
      *(_DWORD *)(v49 + 48) = v48;
      *(_DWORD *)(v49 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v65);
      *(_DWORD *)(v49 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v67 = tdExplanation;
      *(_QWORD *)(v49 + 56) = tdExplanation;
      sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 56), (int64_t)v67, v68, v69, v70, v71, v72, v73);
      *(_BYTE *)(v49 + 64) = 0;
      v74 = *(_DWORD *)(v49 + 16);
      v75 = *(_DWORD *)(v49 + 72);
      *(_BYTE *)(v49 + 65) = this->fields.transformTotal > 1;
      MasterData_object = NpCombineControl__GetLimitCountForSingle(v76, v74, v75, v77);
      *(_DWORD *)(v49 + 68) = MasterData_object;
      if ( !v36 )
        break;
      items = v36->fields._items;
      v85 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v36->fields._version;
      if ( !items )
        break;
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v49,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v87[4] = (Il2CppClass *)v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 4), v49, v78, v79, v80, v81, v82, v83);
      }
      if ( ++v41 >= this->fields.transformTotal )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v36;
    }
LABEL_41:
    sub_1BCAA3C(MasterData_object, usrSvtData);
  }
  UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
  *(_QWORD *)&v95.fields.currentCryptoKey = v33;
  *(_QWORD *)&v95.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v95, 0LL);
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, v34, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(this, usrSvtData, tdInfo, EnableEntity, v35);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *currentInfoLb; // x0
  __int64 v9; // x1
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19B27 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_9343/*"NEED_QP_INFO"*/, v6, v7);
    byte_4B19B27 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  currentInfoLb = (UILabel_o *)this->fields.maxLvStatusInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NEED_QP_INFO"*/, 0LL);
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
  v16.fields.r = 1.0;
  v16.fields.g = 1.0;
  v16.fields.b = 1.0;
  v16.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentInfoLb, v16, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v12);
  NpCombineControl__SetSelectMaterialEnable(this, v13);
  currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0LL);
  currentInfoLb = (UILabel_o *)this->fields.arrowInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v14);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v15);
  currentInfoLb = (UILabel_o *)this->fields.switchButton;
  if ( !currentInfoLb
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL),
        (currentInfoLb = this->fields.servantName) == 0LL)
    || (currentInfoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)currentInfoLb,
                                       0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(currentInfoLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
}


void __fastcall NpCombineControl__InitInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v20; // x1
  int32_t klass; // w8
  __int64 v22; // x1
  UILabel_o *preSelectBaseLb; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v32; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19B25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, v14, v15);
    byte_4B19B25 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v16);
  NpCombineControl__InitDispCombineInfo(this, v17);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v18);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineEventList,
    (int64_t)combineEventList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v32 && v32->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      v32,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v33 )
        break;
      if ( !v36.fields._current )
        sub_1BCAA3C(v33, v34);
      if ( HIDWORD(v36.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1BCAA3C(v33, v34);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v33,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v36.fields._current[5].klass,
          v35);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_1BCAA3C(SelfUserGame, v20);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
}


void __fastcall NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B19B24 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19B24 = 1;
  }
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  NpCombineControl__InitInfo(this, v6);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BCA784(p_charaGraph, 0LL, v12, v13, v14, v15, v16, v17);
      return;
    }
LABEL_12:
    sub_1BCAA3C(helpBtn, v4);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  NpCombineControl_o *v3; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v3 = this;
  if ( (byte_4B19B3F & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_1BCA7E0(
                                   &Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___,
                                   method,
                                   v2);
    byte_4B19B3F = 1;
  }
  centerChild = v3->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  v3->fields.currentMoveIdx = (int32_t)this->fields.assetList;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B19B40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NpCombineControl_OnClickArrow__, *(_QWORD *)&delte, method);
    byte_4B19B40 = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
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
    sub_1BCAA3C(wrapContent, v7);
  }
  UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
}


void __fastcall NpCombineControl__OnClickExeCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  Il2CppObject *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B19B37 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B19B37 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v23,
    selectMtUsrSvtIdList,
    (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v24,
            (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v24.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v19);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v21);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v24,
    (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_1BCAA3C(selectMtUsrSvtIdList, method);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19B3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NpCombineControl_OnClickMaterialSelectList__, method, v2);
    byte_4B19B3A = 1;
  }
  v4 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_NpCombineControl_OnClickMaterialSelectList__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B19B41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NpCombineControl_OnClickSwitchButton__, method, v2);
    byte_4B19B41 = 1;
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
      sub_1BCAA3C(baseUserServantEntity, v4);
    }
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  v6 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_NpCombineControl_OnClickSwitchButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
}


void __fastcall NpCombineControl__RefreshSvtNpCombineEndShowServant(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  void *helpBtn; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int32_t v29; // w8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v38; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  __int64 v45; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B19B26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_9343/*"NEED_QP_INFO"*/, v18, v19);
    byte_4B19B26 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v22);
  helpBtn = this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  helpBtn = this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  helpBtn = this->fields.maxLvStatusInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_35;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v25);
  NpCombineControl__SetSelectMaterialEnable(this, v26);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v27);
  NpCombineControl__ResetScrollView(this, v28);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_35;
  v29 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v29;
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.combineEventList,
    (int64_t)combineEventList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v38 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v38 && v38->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      v38,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v54 = v53;
    while ( 1 )
    {
      v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v39 )
        break;
      if ( !v54.fields._current )
        sub_1BCAA3C(v39, v40);
      if ( HIDWORD(v54.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1BCAA3C(v39, v40);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v39,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v54.fields._current[5].klass,
          v41);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  helpBtn = this->fields.baseLvInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BCA784(p_charaGraph, 0LL, v47, v48, v49, v50, v51, v52);
      return;
    }
LABEL_35:
    sub_1BCAA3C(helpBtn, v20);
  }
}


void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 scrollView; // x0
  __int64 v5; // x2
  UnityEngine_Transform_o *v6; // x20
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19B3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, method, v2);
    byte_4B19B3E = 1;
  }
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
  scrollView = (__int64)this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_15;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)scrollView, 0LL);
  scrollView = (__int64)this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_15;
  UIWrapContent__resetScroll((UIWrapContent_o *)scrollView, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
  v6 = (UnityEngine_Transform_o *)scrollView;
  if ( !byte_4B109C1 )
  {
    scrollView = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v5);
    byte_4B109C1 = 1;
  }
  if ( !v6 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)scrollView,
                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_15;
  v7.fields.y = *(float *)(scrollView + 336);
  v7.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v7, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView
    || (v8.fields.x = 0.0,
        v8.fields.y = 0.0,
        v8.fields.z = 0.0,
        UIScrollView__set_currentMomentum((UIScrollView_o *)scrollView, v8, 0LL),
        (scrollView = (__int64)this->fields.scrollView) == 0) )
  {
LABEL_15:
    sub_1BCAA3C(scrollView, method);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)scrollView, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtCardImg(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  NpCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitImageMaster_o *v16; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v18; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v20; // w21
  NpCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v4 = this;
  if ( (byte_4B19B2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (NpCombineControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19B2A = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v29.fields.currentCryptoKey = v15;
  *(_QWORD *)&v29.fields.fakeValue = v14;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v29, 0LL);
  if ( !v16 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v16,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v20 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  p_charaGraph = (NpCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v20,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BCAA3C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)this, usrSvtData, v20, 0LL, 0, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtNpInfo(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w0
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UIIconLabel_o *iconLabel; // x22
  int32_t lv; // w23
  int64_t LevelMax; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_String_array **p_assetList; // x22
  __int64 v38; // x1
  System_String_array *v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_String_array *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x2
  __int64 v54; // x3
  struct System_String_array *assetList; // x22
  unsigned __int64 v56; // x23
  __int64 v57; // x29
  int32_t TransformedServantId; // w0
  __int64 v59; // x1
  __int64 v60; // x25
  __int64 v61; // x26
  int32_t v62; // w24
  __int64 v63; // x1
  int32_t v64; // w25
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Action_o *v71; // x20
  __int64 v72; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4B19B29 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, usrSvtEn, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NpCombineControl_SetCombineNpList__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&string___TypeInfo, v13, v14);
    byte_4B19B29 = 1;
  }
  if ( usrSvtEn )
  {
    v16 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtEn);
    *(_QWORD *)&v73.fields.currentCryptoKey = v16;
    *(_QWORD *)&v73.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v17;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)usrSvtEn,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_26;
    UIIconLabel__Set_38947284(iconLabel, 2, lv, LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = (int64_t)this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v29);
    this->fields.svtNpDataList = SvtNpData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.svtNpDataList,
      (int64_t)SvtNpData,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    p_assetList = &this->fields.assetList;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetList, 0LL) )
    {
      v39 = *p_assetList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38);
      AssetManager__releaseAssetStorage_38514680(v39, 0LL);
      *p_assetList = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v40, v41, v42, v43, v44, v45);
    }
    v46 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v46;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, (int64_t)v46, v47, v48, v49, v50, v51, v52);
    assetList = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v56 = 0LL;
      v57 = 32LL;
      while ( 1 )
      {
        LevelMax = (int64_t)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v56, 0LL);
        v61 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v60 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        v62 = TransformedServantId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59);
        *(_QWORD *)&v74.fields.currentCryptoKey = v61;
        *(_QWORD *)&v74.fields.fakeValue = v60;
        v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v74, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v63);
        LevelMax = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderName(v62, v64, 0LL);
        if ( !assetList )
          break;
        if ( v56 >= assetList->max_length )
          sub_1BCAA44(LevelMax, v28);
        *(Il2CppClass **)((char *)&assetList->obj.klass + v57) = (Il2CppClass *)LevelMax;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)assetList + v57), LevelMax, v65, v66, v67, v68, v69, v70);
        assetList = this->fields.assetList;
        ++v56;
        v57 += 8LL;
        if ( (__int64)v56 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_1BCAA3C(LevelMax, v28);
    }
LABEL_22:
    v71 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v53, v54);
    System_Action___ctor(v71, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v72);
    AssetManager__loadAssetStorage_38512336(assetList, v71, 1, 0LL);
  }
}


void __fastcall NpCombineControl__SetCombineNpList(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *centerChild; // x20
  const MethodInfo *currentMoveIdx; // x1
  UnityEngine_Component_o *wrapContent; // x0
  Il2CppObject *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t transformTotal; // w20
  const MethodInfo *v41; // x2
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v52; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v54; // x0
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v57; // x8
  bool isScrollNpInfo; // w1
  int v59; // w22
  struct UICenterOnChild_o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  SpringPanel_OnFinished_o *v64; // x21
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int i; // w24
  _BOOL8 v72; // x0
  __int64 v73; // x1
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x21
  UnityEngine_Transform_o *v77; // x2
  UnityEngine_Object_o *v78; // x21
  System_String_o *v79; // x0
  Il2CppObject *Component_object; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x1
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+20h] [xbp-80h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-68h] BYREF
  int32_t idx; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4B19B2F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v18, v19);
    sub_1BCA7E0(&Method_NpCombineControl_OnCenterOnChildFinished__, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&SpringPanel_OnFinished_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_5061/*"D3"*/, v26, v27);
    byte_4B19B2F = 1;
  }
  idx = 0;
  transformInfo = 0LL;
  memset(&v84, 0, sizeof(v84));
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL) )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_54;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !wrapContent )
        goto LABEL_54;
      v33 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)wrapContent,
              (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v33;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.centerChild, (int64_t)v33, v34, v35, v36, v37, v38, v39);
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
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.targetObject,
          (int64_t)Object,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        wrapContent = (UnityEngine_Component_o *)this->fields.targetObject;
        if ( wrapContent )
        {
          wrapContent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)wrapContent,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( this->fields.svtNpDataList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v52 = (ServantNpInfoIconComponent_o *)wrapContent;
            wrapContent = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
            if ( v52 )
            {
              ServantNpInfoIconComponent__SetNpInfo(
                v52,
                baseUserServantEntity,
                0,
                (SvtUseNpData_o *)wrapContent,
                3.0,
                10.0,
                0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v52, 0LL);
              GameObjectExtensions__SetLocalPositionY(gameObject, -18.5, 0LL);
              v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v52, 0LL);
              GameObjectExtensions__SetLocalScale_34333164(v54, this->fields.scaleOffset, 0LL);
              this->fields.isSelectBase = 1;
              NpCombineControl__SetSelectMaterialEnable(this, v55);
              NpCombineControl__SetSvtNpCombineData(this, v56);
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
      sub_1BCAA3C(wrapContent, currentMoveIdx);
    }
    v57 = this->fields.svtNpDataList;
    if ( !v57 )
      goto LABEL_54;
    if ( v57->fields._size >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
      this->fields.isScrollNpInfo = 1;
      if ( !wrapContent )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
      v60 = this->fields.centerChild;
      v64 = (SpringPanel_OnFinished_o *)sub_1BCAA2C(SpringPanel_OnFinished_TypeInfo, v61, v62, v63);
      SpringPanel_OnFinished___ctor(v64, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0LL);
      if ( !v60 )
        goto LABEL_54;
      v60->fields.onFinished = v64;
      sub_1BCA784((PartyOrganizationUtility_o *)&v60->fields.onFinished, (int64_t)v64, v65, v66, v67, v68, v69, v70);
      v59 = 2;
      isScrollNpInfo = this->fields.isScrollNpInfo;
    }
    else
    {
      isScrollNpInfo = 0;
      v59 = 1;
      this->fields.isScrollNpInfo = 0;
    }
    NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v41);
    idx = 0;
    for ( i = 0; i != v59; ++i )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
      if ( !wrapContent )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v83,
        (System_Collections_Generic_List_object__o *)wrapContent,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
      v84 = v83;
      while ( 1 )
      {
        v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v84,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
        if ( !v72 )
          break;
        current = v84.fields._current;
        if ( !v84.fields._current )
          sub_1BCAA3C(v72, v73);
        if ( ((__int64)v84.fields._current[1].monitor & 0x80000000) == 0 )
        {
          v75 = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !v75 )
            sub_1BCAA3C(0LL, v73);
          v76 = this->fields.npCombineInfoPrefab;
          v77 = UnityEngine_Component__get_transform(v75, 0LL);
          v78 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v76, v77, 0LL, 0LL);
          v79 = System_Int32__ToString_63206828((int32_t)&idx, (System_String_o *)StringLiteral_5061/*"D3"*/, 0LL);
          if ( !v78 )
            sub_1BCAA3C(v79, v79);
          UnityEngine_Object__set_name(v78, v79, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v78,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( !Component_object )
            sub_1BCAA3C(0LL, v81);
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
        &v84,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
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
    NpCombineControl__SetSvtNpCombineData(this, v82);
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
    sub_1BCAA3C(combineBtn, isCombine);
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
      sub_1BCAA3C(scrollView, enabled);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
  }
}


void __fastcall NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v7; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v10; // x19
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19B36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B19B36 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v7 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v11, 0LL);
      if ( v7 )
      {
        v12.fields.r = 1.0;
        v12.fields.g = 1.0;
        v12.fields.b = 1.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(v7, v12, 0LL);
        if ( v10 )
        {
          UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v10, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v13, 0LL);
  if ( !v7 )
    goto LABEL_14;
  v14.fields.r = 0.5;
  v14.fields.g = 0.5;
  v14.fields.b = 0.5;
  v14.fields.a = 1.0;
  UIWidget__set_color(v7, v14, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
}


void __fastcall NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B19B28 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19B28 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 392, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetNpCombineData(
        NpCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 materialGrid; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v38; // x23
  System_Collections_Generic_List_long__o *v39; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  unsigned __int64 v47; // x22
  struct System_Int64_array *v48; // x8
  int64_t v49; // x24
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v52; // x25
  UnityEngine_Transform_o *v53; // x26
  int v54; // s0
  __int64 v57; // x2
  UnityEngine_Transform_o *v58; // x26
  Il2CppObject *Component_object; // x25
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  NpMaterialSvtInfo_ClickDelegate_o *v63; // x26
  const MethodInfo *v64; // x3
  UserServantEntity_o *v65; // x2
  const MethodInfo *v66; // x5
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  const MethodInfo *v70; // x3
  int32_t v71; // w21
  const MethodInfo *v72; // x3
  struct System_Int64_array *v73; // x22
  __int64 v74; // x8
  unsigned __int64 v75; // x23
  int64_t v76; // x20
  const MethodInfo *v77; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  _BOOL8 v82; // x0
  __int64 v83; // x1
  float v84; // s0
  int v85; // w8
  UILabel_o *qpLb; // x22
  float v87; // s1
  float v88; // s0
  float v89; // s3
  float v90; // s2
  struct SetLevelUpData_o *v91; // x8
  int32_t spendQpVal; // w9
  bool v93; // w20
  float v94; // s0
  float v95; // s1
  float v96; // s2
  float v97; // s3
  const MethodInfo *v98; // x1
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B19B32 & 1) == 0 )
  {
    sub_1BCA7E0(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, data, method);
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickMaterial__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v31, v32);
    byte_4B19B32 = 1;
  }
  tmpTargetLv = 0;
  memset(&v100, 0, sizeof(v100));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_62;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_62;
  v38 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v39 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36);
  System_Collections_Generic_List_long____ctor(
    v39,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectMtUsrSvtIdList,
    (int64_t)v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v38 < 1 )
    return;
  v47 = 0LL;
  do
  {
    v48 = data->fields.materialUsrSvtIdList;
    if ( !v48 )
      goto LABEL_62;
    if ( v47 >= v48->max_length )
LABEL_63:
      sub_1BCAA44(materialGrid, v34);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    v49 = v48->m_Items[v47];
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
    v52 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v53 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0LL);
    if ( !materialGrid )
      goto LABEL_62;
    *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v53 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v53, *(UnityEngine_Vector3_o *)&v54, 0LL);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v52, 0LL);
    v58 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_4B109C1 )
    {
      materialGrid = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v34, v57);
      byte_4B109C1 = 1;
    }
    if ( !v58 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v58, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v52,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v63 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_1BCAA2C(NpMaterialSvtInfo_ClickDelegate_TypeInfo, v60, v61, v62);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v63,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      v64);
    if ( !Component_object )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo((NpMaterialSvtInfo_o *)Component_object, v47, v65, v49, v63, v66);
    materialGrid = (__int64)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_62;
    v67 = *(_QWORD *)(materialGrid + 16);
    v68 = Method_System_Collections_Generic_List_long__Add__;
    ++*(_DWORD *)(materialGrid + 28);
    if ( !v67 )
      goto LABEL_62;
    v69 = *(int *)(materialGrid + 24);
    if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        (System_Collections_Generic_List_long__o *)materialGrid,
        v49,
        *(const MethodInfo_3589C90 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v69 + 1;
      *(_QWORD *)(v67 + 8 * v69 + 32) = v49;
    }
    ++v47;
  }
  while ( (unsigned int)v38 != v47 );
  materialGrid = (__int64)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_62;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = NpCombineControl__GetNpLv(
                   this->fields.baseUserServantEntity,
                   data->fields.materialUsrSvtIdList,
                   &tmpTargetLv,
                   v70);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_62;
  v71 = materialGrid;
  materialGrid = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = materialGrid & 1;
  v73 = data->fields.materialUsrSvtIdList;
  if ( !v73 )
    goto LABEL_62;
  v74 = *(_QWORD *)&v73->max_length;
  if ( (int)v74 >= 1 )
  {
    v75 = 0LL;
    while ( 1 )
    {
      if ( v75 >= (unsigned int)v74 )
        goto LABEL_63;
      v76 = v73->m_Items[v75];
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v76,
                                (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_62;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = NpCombineControl__CheckConfirm(v76, v77);
      if ( (materialGrid & 1) != 0 )
        break;
      LODWORD(v74) = v73->max_length;
      if ( (__int64)++v75 >= (int)v74 )
        goto LABEL_39;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_39:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_62;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v71, v72);
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v99,
      combineEventList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v100 = v99;
    while ( 1 )
    {
      v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v100,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v82 )
        break;
      if ( !v100.fields._current )
        sub_1BCAA3C(v82, v83);
      if ( HIDWORD(v100.fields._current[1].klass) == 10 )
      {
        v84 = *(float *)&v100.fields._current[3].monitor * (float)*p_spendQpVal;
        v85 = (int)v84;
        if ( v84 == INFINITY )
          v85 = 0x80000000;
        *p_spendQpVal = v85;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v100,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_63206828((int)this + 396, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  materialGrid = (__int64)this->fields.qpLb;
  v87 = 0.0;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
    v87 = 1.0;
  if ( !materialGrid )
    goto LABEL_62;
  v88 = 1.0;
  v89 = 1.0;
  v90 = v87;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)(&v87 - 1), 0LL);
  v91 = this->fields.lvUpData;
  if ( !v91 )
    goto LABEL_62;
  v91->fields.nextLv = v71;
  spendQpVal = this->fields.spendQpVal;
  v91->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v94 = 1.0;
      v93 = 1;
      v95 = 1.0;
      goto LABEL_60;
    }
LABEL_62:
    sub_1BCAA3C(materialGrid, v34);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v93 = 0;
  v94 = 1.0;
  v95 = 0.0;
LABEL_60:
  v96 = v95;
  v97 = v94;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v94, 0LL);
  this->fields._IsExeCombine_k__BackingField = v93;
  NpCombineControl__SetExeBtnState(this, v98);
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
    sub_1BCAA3C(v4, v5);
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
    sub_1BCAA3C(preSelectBaseLb, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v18; // x21
  __int64 v19; // x1
  __int64 *v20; // x8
  __int64 v21; // x1
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B19B39 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_7233/*"HEADER_MSG_NPUP_MATERIAL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_7486/*"INFO_MSG_NPUP_BASE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B19B39 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(detailInfoLb, *(_QWORD *)&state);
  }
  v22.fields.r = 0.0;
  v22.fields.a = 1.0;
  v22.fields.g = 0.87891;
  v22.fields.b = 0.98828;
  v18 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v22, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v20 = &StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v23.fields.r = 1.0;
      v23.fields.g = 1.0;
      v23.fields.b = 1.0;
      v23.fields.a = 1.0;
      UIWidget__set_color(v18, v23, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      v20 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = &StringLiteral_7233/*"HEADER_MSG_NPUP_MATERIAL"*/;
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = &StringLiteral_7486/*"INFO_MSG_NPUP_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v20, 0LL);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall NpCombineControl__SetSvtNpCombineData(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 v19; // x1
  char *Item; // x0
  int32_t v21; // w22
  char *v22; // x21
  int32_t v23; // w20
  long double v24; // q0
  __int64 v25; // x0
  DataManager_o *v26; // x24
  int32_t v27; // w25
  char *v28; // x23
  UILabel_o *currentInfoLb; // x24
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w24
  UserServantEntity_o *baseUserServantEntity; // x24
  System_Int64_array *v36; // x0
  const MethodInfo *v37; // x3
  SetLevelUpData_o *v38; // x26
  struct SetLevelUpData_o **p_lvUpData; // x25
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v66; // d0
  PartyOrganizationUtility_o *v67; // x0
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19B31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v10, v11);
    sub_1BCA7E0(&SetLevelUpData_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v16, v17);
    byte_4B19B31 = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = (char *)this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     0,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    if ( !Item )
      goto LABEL_29;
    v21 = *((_DWORD *)Item + 6);
    v22 = Item;
    if ( v21 >= 1 )
    {
      Item = (char *)this->fields.maxLvStatusInfo;
      if ( !Item )
        goto LABEL_29;
      v23 = *((_DWORD *)v22 + 7);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 0, 0LL);
      v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
        v25 = sub_1C1C6BC(v24);
      Item = *(char **)(*(_QWORD *)(v25 + 192) + 16LL);
      if ( (Item[309] & 1) == 0 )
        Item = (char *)sub_1C1C6BC(v24);
      v26 = (DataManager_o *)**((_QWORD **)Item + 23);
      if ( !v26 )
        goto LABEL_29;
      Item = (char *)DataManager__GetMasterData_object_(
                       v26,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                       (TreasureDvcMaster_o *)Item,
                       *((_DWORD *)v22 + 4),
                       v21,
                       0LL);
      if ( !Item )
        goto LABEL_29;
      v27 = *((_DWORD *)Item + 12);
      v28 = Item;
      Item = (char *)DataManager__GetMasterData_object_(
                       v26,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Item, v21, v23, 0LL);
      if ( !Item )
        goto LABEL_29;
      currentInfoLb = this->fields.currentInfoLb;
      Item = (char *)TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)Item, 0LL);
      if ( !currentInfoLb )
        goto LABEL_29;
      UILabel__set_text(currentInfoLb, (System_String_o *)Item, 0LL);
      if ( v23 < v27 )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = v23;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v36 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v36, &tmpTargetLv, v37);
        }
        v38 = (SetLevelUpData_o *)sub_1BCAA2C(SetLevelUpData_TypeInfo, v30, v31, v32);
        SetLevelUpData___ctor(v38, 0LL);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = v38;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lvUpData, (int64_t)v38, v40, v41, v42, v43, v44, v45);
        Item = (char *)this->fields.lvUpData;
        if ( Item )
        {
          *((_DWORD *)Item + 4) = v21;
          *(_QWORD *)(Item + 20) = 1LL;
          Item[112] = v22[65];
          v52 = *((_QWORD *)v28 + 4);
          *((_QWORD *)Item + 4) = v52;
          sub_1BCA784((PartyOrganizationUtility_o *)(Item + 32), v52, v46, v47, v48, v49, v50, v51);
          Item = (char *)*p_lvUpData;
          if ( *p_lvUpData )
          {
            v59 = *((_QWORD *)v28 + 3);
            *((_QWORD *)Item + 5) = v59;
            sub_1BCA784((PartyOrganizationUtility_o *)(Item + 40), v59, v53, v54, v55, v56, v57, v58);
            Item = (char *)*p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_DWORD *)Item + 16) = v23;
              *((_DWORD *)Item + 17) = NpLv;
              v66 = *(struct PartyOrganizationUtility_TemporaryPartyInfo_o **)&this->fields.spendQpVal;
              *((_QWORD *)Item + 12) = 0LL;
              v67 = (PartyOrganizationUtility_o *)(Item + 96);
              *(struct PartyOrganizationUtility_TemporaryPartyInfo_o **)((char *)&v67[-1].fields.temporaryPartyInfo + 4) = v66;
              sub_1BCA784(v67, 0LL, v60, v61, v62, v63, v64, v65);
              return;
            }
          }
        }
LABEL_29:
        sub_1BCAA3C(Item, v19);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v30);
      Item = (char *)this->fields.qpLb;
      if ( !Item )
        goto LABEL_29;
      UILabel__set_text((UILabel_o *)Item, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
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