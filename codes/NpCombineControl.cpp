void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A0232B & 1) == 0 )
  {
    sub_1B64A00(&CombineMenuControl_TypeInfo, method);
    byte_4A0232B = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall NpCombineControl__ChangeTargetInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *targetObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *Component_object; // x0
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v9; // x20

  if ( (byte_4A02319 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    byte_4A02319 = 1;
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
                                                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___),
            !this->fields.svtNpDataList)
        || (baseUserServantEntity = this->fields.baseUserServantEntity,
            v9 = (ServantNpInfoIconComponent_o *)Component_object,
            Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                             this->fields.displayTransformIndex,
                                                             (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__),
            !v9) )
      {
        sub_1B64C5C(Component_object, v6);
      }
      ServantNpInfoIconComponent__SetNpInfo(
        v9,
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4A02326 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A02326 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_44566804((UserServantEntity_o *)Entity, v8);
}


bool __fastcall NpCombineControl__CheckConfirm_44566804(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
    sub_1B64C5C(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        sub_1B64C64(selectUsrSvtEnt, method);
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
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t currentId; // w21

  v4 = this;
  if ( (byte_4A02321 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcMaster___, resData);
    this = (NpCombineControl_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A02321 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_1B64C5C(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.baseUserServantEntity);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int v6; // w22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array *assetList; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A0231D & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0231D = 1;
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
    v6 = childCount + 1;
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
                                                 v6 - 2,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69137664(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1B64C5C(wrapContent, method);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37491172(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v9, v10);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int v6; // w22
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x8
  int v9; // w9

  if ( (byte_4A0231E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0231E = 1;
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
    v6 = childCount + 1;
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
                                                  v6 - 2,
                                                  0LL);
      if ( !materialGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(materialGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1B64C5C(materialGrid, method);
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


UserServantEntity_o *__fastcall NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  ServantStatusBattleListViewItem_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A0231C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (NpCombineControl_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0231C = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (ServantStatusBattleListViewItem_o *)&v2->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v15 = v16;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v15, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B64C5C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B649A4(p_baseUserServantEntity, (int32_t)Entity, v12, v13);
  return (UserServantEntity_o *)Entity;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall NpCombineControl__GetLimitCountForMulti(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        int32_t condLimitCount,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  Il2CppObject *MasterData_object; // x0
  int v16; // w24
  bool v17; // cc
  int v18; // w23
  DataManager_o *v19; // x21
  int32_t v20; // w25
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x22
  int32_t v22; // w20
  DataManager_o *v23; // x8
  DataManager_o *v24; // x26
  DataManager_o *v25; // x8
  bool v26; // cc
  DataManager_o *v27; // x23

  if ( (byte_4A02317 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v10);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    byte_4A02317 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB68DC(v14);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (BYTE5(MasterData_object[19].klass) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_1BB68DC(MasterData_object);
  v16 = condLimitCount - 1;
  v17 = index < 1;
  if ( index >= 1 )
    v18 = -1;
  else
    v18 = condLimitCount - 1;
  v19 = *(DataManager_o **)MasterData_object[11].monitor;
  if ( v17 )
    v20 = -1;
  else
    v20 = condLimitCount;
  if ( !v19 )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        v19,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_45;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         (ServantTreasureDeviceReleaseMaster_o *)MasterData_object,
                         svtId,
                         0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  MasterData_object = (Il2CppObject *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v22 = (int)MasterData_object;
  if ( v20 >= 0 )
    v23 = v19;
  else
    v23 = 0LL;
  if ( (v20 & 0x80000000) != 0 )
    goto LABEL_30;
  if ( (_DWORD)MasterData_object == v20 )
    v24 = 0LL;
  else
    v24 = v23;
  if ( (_DWORD)MasterData_object != v20 )
  {
    if ( (int)MasterData_object >= 11 )
    {
      if ( !CorrespondsCostume )
        goto LABEL_45;
      MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                            CorrespondsCostume,
                                            (int32_t)MasterData_object,
                                            (const MethodInfo_3366994 *)Method_System_Collections_Generic_HashSet_int__Contains__);
      v23 = v24;
      v19 = v24;
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
        goto LABEL_30;
    }
    v19 = v23;
  }
  v22 = v20;
LABEL_30:
  if ( v18 >= 0 )
    v25 = v19;
  else
    v25 = 0LL;
  if ( (v18 & 0x80000000) == 0 )
  {
    v26 = v22 <= v18;
    v27 = v22 <= v18 ? 0LL : v25;
    if ( !v26 )
    {
      if ( v22 < 11 )
        goto LABEL_41;
      if ( !CorrespondsCostume )
        goto LABEL_45;
      MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                            CorrespondsCostume,
                                            v22,
                                            (const MethodInfo_3366994 *)Method_System_Collections_Generic_HashSet_int__Contains__);
      v25 = v27;
      v19 = v27;
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
LABEL_41:
        v19 = v25;
        v22 = v16;
      }
    }
  }
  if ( !v19
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v19,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
LABEL_45:
    sub_1B64C5C(MasterData_object, *(_QWORD *)&svtId);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           v22,
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
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  __int64 v10; // x8
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4A02316 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4A02316 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB68DC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB68DC(v11);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B64C5C(MasterData_object, v8);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x0
  DataManager_o *MasterData_object; // x0
  TreasureDvcMaster_o *v22; // x20
  unsigned __int64 v23; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v25; // w26
  __int64 v26; // x23
  __int64 v27; // x25
  DataManager_o *v28; // x27
  int32_t v29; // w0
  struct System_Int32_array *hideCardChara; // x8
  int *p_saveNameList; // x9
  int v32; // w20
  int32_t v33; // w23
  TreasureDvcInfo_o *v34; // x19
  bool v35; // w28
  __int64 v36; // x25
  __int64 v37; // x23
  __int64 v38; // x29
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t DispLimitCount; // w23
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  NpCombineControl_o *v49; // x0
  const MethodInfo *v50; // x5
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  TreasureDvcMaster_o *v58; // [xsp+0h] [xbp-90h]
  ServantTreasureDeviceAddEntity_o *v59; // [xsp+8h] [xbp-88h]
  int32_t *p_cardId; // [xsp+10h] [xbp-80h]
  int32_t tdGuageCount[2]; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4A02315 & 1) == 0 )
  {
    sub_1B64A00(&System_Convert_TypeInfo, usrSvtData);
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v12);
    sub_1B64A00(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v13);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_1B64A00(&SvtUseNpData_TypeInfo, v16);
    byte_4A02315 = 1;
  }
  tdExplanation = 0LL;
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB68DC(v19);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BB68DC(v20);
  MasterData_object = **(DataManager_o ***)(v20 + 184);
  if ( !MasterData_object )
    goto LABEL_37;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_37;
  v22 = (TreasureDvcMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                         (const MethodInfo_2E581DC *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v23 = 0LL;
    v59 = tdAddEntity;
    p_cardId = &tdInfo->fields.cardId;
    v58 = v22;
    while ( 1 )
    {
      treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      if ( v23 >= treasureDeviceIds->max_length )
        goto LABEL_38;
      if ( !usrSvtData )
        break;
      v25 = treasureDeviceIds->m_Items[v23 + 1];
      v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v64.fields.currentCryptoKey = v27;
      *(_QWORD *)&v64.fields.fakeValue = v26;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v64, 0LL);
      if ( !v22 )
        break;
      MasterData_object = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                             v22,
                                             (int32_t)MasterData_object,
                                             v25,
                                             0LL);
      if ( !tdInfo )
        break;
      v28 = MasterData_object;
      if ( !MasterData_object )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        tdInfo->fields.lv,
        0LL);
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(usrSvtData->fields.svtId, 0LL);
      MasterData_object = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v29, v25, 0LL);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_saveNameList = (int *)&MasterData_object->fields.saveNameList;
      if ( !MasterData_object )
        p_saveNameList = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v23 >= hideCardChara->max_length )
LABEL_38:
        sub_1B64C64(MasterData_object, v18);
      v32 = *p_saveNameList;
      v33 = hideCardChara->m_Items[v23 + 1];
      v34 = tdInfo;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v35 = System_Convert__ToBoolean_62033360(v33, 0LL);
      v36 = sub_1B64C4C(SvtUseNpData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v36, 0LL);
      v37 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v65.fields.currentCryptoKey = v37;
      *(_QWORD *)&v65.fields.fakeValue = v38;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v65, 0LL);
      if ( !v36 )
        break;
      *(_DWORD *)(v36 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v36 + 20) = v25;
      tdInfo = v34;
      *(_QWORD *)(v36 + 24) = *(_QWORD *)&v34->fields.id;
      v41 = *(_QWORD *)&v28->fields._DispLog;
      *(_QWORD *)(v36 + 32) = v41;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 32), v41, v39, v40);
      m_CancellationTokenSource = v28->fields.m_CancellationTokenSource;
      *(_QWORD *)(v36 + 40) = m_CancellationTokenSource;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 40), (int32_t)m_CancellationTokenSource, v43, v44);
      *(_DWORD *)(v36 + 48) = v32;
      *(_DWORD *)(v36 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v36 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v46 = (int)tdExplanation;
      *(_QWORD *)(v36 + 56) = tdExplanation;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 56), v46, v47, v48);
      tdAddEntity = v59;
      *(_BYTE *)(v36 + 64) = v35;
      *(_BYTE *)(v36 + 65) = 1;
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             v49,
                                             *(_DWORD *)(v36 + 16),
                                             *(_DWORD *)(v36 + 72),
                                             v59->fields.condLimitCount,
                                             v23,
                                             v50);
      *(_DWORD *)(v36 + 68) = (_DWORD)MasterData_object;
      if ( !v17 )
        break;
      items = v17->fields._items;
      v22 = v58;
      v54 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v36,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v36;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v56 + 4), v36, v51, v52);
      }
      ++v23;
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v59->fields.treasureDeviceIds,
                                             (const MethodInfo_2E581DC *)Method_System_Linq_Enumerable_Count_int___);
      if ( (__int64)v23 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v17;
    }
LABEL_37:
    sub_1B64C5C(MasterData_object, v18);
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v17;
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
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  int64_t v11; // x22
  UserServantEntity_o *v12; // x22
  int32_t treasureDeviceLv1; // w8
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-58h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_4A02324 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, mtSvtIdList);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    baseUsrSvtData = (UserServantEntity_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A02324 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *tmpTargetLv = 0;
  if ( !v5 )
    goto LABEL_17;
  v9 = *(_QWORD *)&v5->max_length;
  if ( (int)v9 < 1 )
  {
    mtSvtIdList = 0LL;
    if ( v6 )
      return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0LL);
LABEL_17:
    sub_1B64C5C(baseUsrSvtData, mtSvtIdList);
  }
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v9 )
      sub_1B64C64(baseUsrSvtData, mtSvtIdList);
    v11 = v5->m_Items[v10];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v11,
                                              (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    v12 = baseUsrSvtData;
    baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__IsMaterialTd(baseUsrSvtData, 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      treasureDeviceLv1 = v12->fields.treasureDeviceLv1;
      tdMaxLv[1] = treasureDeviceLv1;
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_39883788(
                                                v12,
                                                &tdMaxLv[1],
                                                tdMaxLv,
                                                0LL);
      treasureDeviceLv1 = tdMaxLv[1];
    }
    ++v10;
    mtSvtIdList = (System_Int64_array *)(unsigned int)(treasureDeviceLv1 + *tmpTargetLv);
    *tmpTargetLv = (int)mtSvtIdList;
    LODWORD(v9) = v5->max_length;
  }
  while ( (__int64)v10 < (int)v9 );
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
  int32_t v8; // w22
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  TreasureDvcLvEntity_o *Entity; // x0

  v5 = currentLv;
  if ( (byte_4A02325 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&currentLv);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A02325 = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v8 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_1B64C5C(Instance, v10);
    }
    Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, currentId, v5, 0LL);
    if ( Entity )
      v8 += Entity->fields.qp;
    ++v5;
  }
  while ( resNpLv != v5 );
  return v8;
}


System_Collections_Generic_List_SvtUseNpData__o *__fastcall NpCombineControl__GetSvtNpData(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 MasterData_object; // x0
  DataManager_o *v15; // x21
  ServantTreasureDeviceAddMaster_o *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x22
  int32_t TransformCount; // w0
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_object__o *v23; // x21
  Il2CppObject *v24; // x22
  int32_t v25; // w23
  __int64 v26; // x27
  int32_t TransformedServantId; // w25
  __int64 v28; // x26
  int32_t *p_cardId; // x8
  int32_t v30; // w29
  __int64 v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w8
  __int64 v35; // x1
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t DispLimitCount; // w25
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  NpCombineControl_o *v45; // x0
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-88h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-78h] BYREF
  TreasureDvcInfo_o *v57; // [xsp+20h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4A02314 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, usrSvtData);
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v9);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1B64A00(&SvtUseNpData_TypeInfo, v12);
    byte_4A02314 = 1;
  }
  v57 = 0LL;
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB68DC(v13);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1BB68DC(MasterData_object);
  v15 = **(DataManager_o ***)(MasterData_object + 184);
  if ( !v15 )
    goto LABEL_39;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 v15,
                                 (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_39;
  v16 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v18;
  *(_QWORD *)&v59.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v59, 0LL);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(
                        usrSvtData->fields.limitCount,
                        0LL);
  if ( !v16 )
    goto LABEL_39;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v16, v19, MasterData_object, 0, 0LL);
  TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
  if ( !EnableEntity )
  {
    v24 = DataManager__GetMasterData_object_(
            v15,
            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal < 1 )
      return (System_Collections_Generic_List_SvtUseNpData__o *)v23;
    v25 = 0;
    v26 = 0LL;
    while ( 1 )
    {
      MasterData_object = (__int64)this->fields.baseUserServantEntity;
      if ( !MasterData_object )
        break;
      TransformedServantId = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)MasterData_object,
                               v25,
                               0LL);
      MasterData_object = UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                            usrSvtData,
                            &v57,
                            v25,
                            -1,
                            -1,
                            0,
                            0LL);
      if ( !v57 )
        break;
      if ( !v24 )
        break;
      MasterData_object = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)v24,
                                     TransformedServantId,
                                     v57->fields.id,
                                     0LL);
      if ( !v57 )
        break;
      v28 = MasterData_object;
      if ( !MasterData_object )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v57->fields.lv,
        0LL);
      MasterData_object = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(
                                     TransformedServantId,
                                     *(_DWORD *)(v28 + 16),
                                     0LL);
      if ( MasterData_object )
        v26 = MasterData_object;
      if ( MasterData_object )
      {
        if ( !v26 )
          break;
        p_cardId = (int32_t *)(v26 + 64);
      }
      else
      {
        if ( !v57 )
          break;
        p_cardId = &v57->fields.cardId;
      }
      v30 = *p_cardId;
      v31 = sub_1B64C4C(SvtUseNpData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v31, 0LL);
      if ( !v31 )
        break;
      *(_DWORD *)(v31 + 16) = TransformedServantId;
      v34 = *(_DWORD *)(v28 + 16);
      *(_DWORD *)(v31 + 20) = v34;
      *(_DWORD *)(v31 + 24) = v34;
      if ( !v57 )
        break;
      *(_DWORD *)(v31 + 28) = v57->fields.lv;
      v35 = *(_QWORD *)(v28 + 32);
      *(_QWORD *)(v31 + 32) = v35;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 32), v35, v32, v33);
      v36 = *(_QWORD *)(v28 + 24);
      *(_QWORD *)(v31 + 40) = v36;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 40), v36, v37, v38);
      *(_DWORD *)(v31 + 48) = v30;
      *(_DWORD *)(v31 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v31 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v40 = (int)tdExplanation;
      *(_QWORD *)(v31 + 56) = tdExplanation;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v31 + 56), v40, v41, v42);
      *(_BYTE *)(v31 + 64) = 0;
      v43 = *(_DWORD *)(v31 + 16);
      v44 = *(_DWORD *)(v31 + 72);
      *(_BYTE *)(v31 + 65) = this->fields.transformTotal > 1;
      MasterData_object = NpCombineControl__GetLimitCountForSingle(v45, v43, v44, v46);
      *(_DWORD *)(v31 + 68) = MasterData_object;
      if ( !v23 )
        break;
      items = v23->fields._items;
      v50 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v23->fields._version;
      if ( !items )
        break;
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v31,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v31;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v52 + 4), v31, v47, v48);
      }
      if ( ++v25 >= this->fields.transformTotal )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v23;
    }
LABEL_39:
    sub_1B64C5C(MasterData_object, usrSvtData);
  }
  UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, 0, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(this, usrSvtData, tdInfo, EnableEntity, v22);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *currentInfoLb; // x0
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A02310 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_920/*"-"*/, v3);
    sub_1B64A00(&StringLiteral_9173/*"NEED_QP_INFO"*/, v4);
    byte_4A02310 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_17;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  currentInfoLb = (UILabel_o *)this->fields.maxLvStatusInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9173/*"NEED_QP_INFO"*/, 0LL);
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
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentInfoLb, v12, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v8);
  NpCombineControl__SetSelectMaterialEnable(this, v9);
  currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0LL);
  currentInfoLb = (UILabel_o *)this->fields.arrowInfo;
  if ( !currentInfoLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v10);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v11);
  currentInfoLb = (UILabel_o *)this->fields.switchButton;
  if ( !currentInfoLb
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL),
        (currentInfoLb = this->fields.servantName) == 0LL)
    || (currentInfoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)currentInfoLb,
                                       0LL)) == 0LL )
  {
LABEL_17:
    sub_1B64C5C(currentInfoLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
}


void __fastcall NpCombineControl__InitInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v13; // x1
  int32_t klass; // w8
  UILabel_o *preSelectBaseLb; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0230E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_8726/*"MSG_PRESELECT_BASE_SVT"*/, v8);
    byte_4A0230E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v9);
  NpCombineControl__InitDispCombineInfo(this, v10);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v11);
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
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8726/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v16, v17);
  v20 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v20 && v20->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      v20,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v21 )
        break;
      if ( !v24.fields._current )
        sub_1B64C5C(v21, v22);
      if ( HIDWORD(v24.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1B64C5C(v21, v22);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v21,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v24.fields._current[5].klass,
          v23);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_1B64C5C(SelfUserGame, v13);
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

  if ( (byte_4A0230D & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A0230D = 1;
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
      UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B649A4(p_charaGraph, 0, v9, v10);
      return;
    }
LABEL_12:
    sub_1B64C5C(helpBtn, v3);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_4A02328 & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_1B64A00(
                                   &Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___,
                                   method);
    byte_4A02328 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_1B64C5C(this, method);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.assetList;
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

  if ( (byte_4A02329 & 1) == 0 )
  {
    sub_1B64A00(&Method_NpCombineControl_OnClickArrow__, *(_QWORD *)&delte);
    byte_4A02329 = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64A18(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
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
    sub_1B64C5C(wrapContent, v7);
  }
  UICenterOnChild__CenterOn_46394404(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
}


void __fastcall NpCombineControl__OnClickExeCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4A02320 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A02320 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v16,
    selectMtUsrSvtIdList,
    (const MethodInfo_34984DC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v17,
            (const MethodInfo_3229BB0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v17.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64C5C(0LL, v12);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B64C5C(0LL, v14);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v17,
    (const MethodInfo_3229BAC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_1B64C5C(selectMtUsrSvtIdList, method);
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

  if ( (byte_4A02323 & 1) == 0 )
  {
    sub_1B64A00(&Method_NpCombineControl_OnClickMaterialSelectList__, method);
    byte_4A02323 = 1;
  }
  v3 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_NpCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64C5C(0LL, v5);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A0232A & 1) == 0 )
  {
    sub_1B64A00(&Method_NpCombineControl_OnClickSwitchButton__, method);
    byte_4A0232A = 1;
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
      sub_1B64C5C(baseUserServantEntity, v3);
    }
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  v5 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64A18(Method_NpCombineControl_OnClickSwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
}


void __fastcall NpCombineControl__RefreshSvtNpCombineEndShowServant(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *helpBtn; // x0
  const MethodInfo *v13; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  int32_t v20; // w2
  int32_t v21; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4A0230F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_920/*"-"*/, v9);
    sub_1B64A00(&StringLiteral_9173/*"NEED_QP_INFO"*/, v10);
    byte_4A0230F = 1;
  }
  memset(&v34, 0, sizeof(v34));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v13);
  helpBtn = this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  helpBtn = this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  helpBtn = this->fields.maxLvStatusInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9173/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_35;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v15);
  NpCombineControl__SetSelectMaterialEnable(this, v16);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v17);
  NpCombineControl__ResetScrollView(this, v18);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_35;
  v19 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v19;
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v20, v21);
  v24 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v24 && v24->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      v24,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v34 = v33;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v25 )
        break;
      if ( !v34.fields._current )
        sub_1B64C5C(v25, v26);
      if ( HIDWORD(v34.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1B64C5C(v25, v26);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v25,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v34.fields._current[5].klass,
          v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
      UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B649A4(p_charaGraph, 0, v31, v32);
      return;
    }
LABEL_35:
    sub_1B64C5C(helpBtn, v11);
  }
}


void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 scrollView; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A02327 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4A02327 = 1;
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
  v4 = (UnityEngine_Transform_o *)scrollView;
  if ( !byte_49F9821 )
  {
    scrollView = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9821 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)scrollView,
                          (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_15;
  v5.fields.y = *(float *)(scrollView + 336);
  v5.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v5, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView
    || (v6.fields.x = 0.0,
        v6.fields.y = 0.0,
        v6.fields.z = 0.0,
        UIScrollView__set_currentMomentum((UIScrollView_o *)scrollView, v6, 0LL),
        (scrollView = (__int64)this->fields.scrollView) == 0) )
  {
LABEL_15:
    sub_1B64C5C(scrollView, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  NpCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_37596336; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_4A02313 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (NpCombineControl_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A02313 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v20, 0LL);
  if ( !v12 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v12,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v15 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = (NpCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_37596336 = CharaGraphManager__CreateTexturePrefab_37596336(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_37596336;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields.charaGraph, (int32_t)TexturePrefab_37596336, v18, v19);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B64C5C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_40508628((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtNpInfo(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  struct UserServantEntity_o **p_baseUserServantEntity; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  UIIconLabel_o *iconLabel; // x22
  int32_t lv; // w23
  UnityEngine_GameObject_o *LevelMax; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_String_array **p_assetList; // x22
  System_String_array *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_String_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_String_array *assetList; // x22
  unsigned __int64 v32; // x23
  __int64 v33; // x29
  int32_t TransformedServantId; // w0
  __int64 v35; // x25
  __int64 v36; // x26
  int32_t v37; // w24
  int32_t v38; // w25
  int32_t v39; // w2
  int32_t v40; // w3
  System_Action_o *v41; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A02312 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, usrSvtEn);
    sub_1B64A00(&AssetManager_TypeInfo, v5);
    sub_1B64A00(&Method_NpCombineControl_SetCombineNpList__, v6);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64A00(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1B64A00(&string___TypeInfo, v9);
    byte_4A02312 = 1;
  }
  if ( usrSvtEn )
  {
    v11 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = v11;
    *(_QWORD *)&v42.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v42, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v12;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)usrSvtEn, v14, v15);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_26;
    UIIconLabel__Set_37925880(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v20);
    this->fields.svtNpDataList = SvtNpData;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.svtNpDataList, (int32_t)SvtNpData, v22, v23);
    p_assetList = &this->fields.assetList;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetList, 0LL) )
    {
      v25 = *p_assetList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_37491172(v25, 0LL);
      *p_assetList = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v26, v27);
    }
    v28 = (struct System_String_array *)sub_1B64AA8(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v28;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.assetList, (int32_t)v28, v29, v30);
    assetList = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v32 = 0LL;
      v33 = 32LL;
      while ( 1 )
      {
        LevelMax = (UnityEngine_GameObject_o *)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v32, 0LL);
        v36 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v35 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        v37 = TransformedServantId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v43.fields.currentCryptoKey = v36;
        *(_QWORD *)&v43.fields.fakeValue = v35;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v43, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v37, v38, 0LL);
        if ( !assetList )
          break;
        if ( v32 >= assetList->max_length )
          sub_1B64C64(LevelMax, v19);
        *(Il2CppClass **)((char *)&assetList->obj.klass + v33) = (Il2CppClass *)LevelMax;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)assetList + v33), (int32_t)LevelMax, v39, v40);
        assetList = this->fields.assetList;
        ++v32;
        v33 += 8LL;
        if ( (__int64)v32 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_1B64C5C(LevelMax, v19);
    }
LABEL_22:
    v41 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37488828(assetList, v41, 1, 0LL);
  }
}


void __fastcall NpCombineControl__SetCombineNpList(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  UnityEngine_Object_o *centerChild; // x20
  const MethodInfo *currentMoveIdx; // x1
  UnityEngine_Component_o *wrapContent; // x0
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t transformTotal; // w20
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v30; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v35; // x8
  bool isScrollNpInfo; // w1
  int v37; // w22
  struct UICenterOnChild_o *v38; // x20
  SpringPanel_OnFinished_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  int i; // w24
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x21
  UnityEngine_Transform_o *v48; // x2
  UnityEngine_Object_o *v49; // x21
  System_String_o *v50; // x0
  Il2CppObject *Component_object; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x1
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-68h] BYREF
  int32_t idx; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4A02318 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v10);
    sub_1B64A00(&Method_NpCombineControl_OnCenterOnChildFinished__, v11);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64A00(&SpringPanel_OnFinished_TypeInfo, v13);
    sub_1B64A00(&StringLiteral_4966/*"D3"*/, v14);
    byte_4A02318 = 1;
  }
  idx = 0;
  transformInfo = 0LL;
  memset(&v55, 0, sizeof(v55));
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
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
      v19 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)wrapContent,
              (const MethodInfo_2E8A6E4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v19;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.centerChild, (int32_t)v19, v20, v21);
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
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)Object, v27, v28);
        wrapContent = (UnityEngine_Component_o *)this->fields.targetObject;
        if ( wrapContent )
        {
          wrapContent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)wrapContent,
                                                     (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( this->fields.svtNpDataList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v30 = (ServantNpInfoIconComponent_o *)wrapContent;
            wrapContent = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
            if ( v30 )
            {
              ServantNpInfoIconComponent__SetNpInfo(
                v30,
                baseUserServantEntity,
                0,
                (SvtUseNpData_o *)wrapContent,
                3.0,
                10.0,
                0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
              GameObjectExtensions__SetLocalPositionY(gameObject, -18.5, 0LL);
              v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
              GameObjectExtensions__SetLocalScale_33378856(v32, this->fields.scaleOffset, 0LL);
              this->fields.isSelectBase = 1;
              NpCombineControl__SetSelectMaterialEnable(this, v33);
              NpCombineControl__SetSvtNpCombineData(this, v34);
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
      sub_1B64C5C(wrapContent, currentMoveIdx);
    }
    v35 = this->fields.svtNpDataList;
    if ( !v35 )
      goto LABEL_54;
    if ( v35->fields._size >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
      this->fields.isScrollNpInfo = 1;
      if ( !wrapContent )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
      v38 = this->fields.centerChild;
      v39 = (SpringPanel_OnFinished_o *)sub_1B64C4C(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v39, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0LL);
      if ( !v38 )
        goto LABEL_54;
      v38->fields.onFinished = v39;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v38->fields.onFinished, (int32_t)v39, v40, v41);
      v37 = 2;
      isScrollNpInfo = this->fields.isScrollNpInfo;
    }
    else
    {
      isScrollNpInfo = 0;
      v37 = 1;
      this->fields.isScrollNpInfo = 0;
    }
    NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v23);
    idx = 0;
    for ( i = 0; i != v37; ++i )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
      if ( !wrapContent )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v54,
        (System_Collections_Generic_List_object__o *)wrapContent,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
      v55 = v54;
      while ( 1 )
      {
        v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v55,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
        if ( !v43 )
          break;
        current = v55.fields._current;
        if ( !v55.fields._current )
          sub_1B64C5C(v43, v44);
        if ( ((__int64)v55.fields._current[1].monitor & 0x80000000) == 0 )
        {
          v46 = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !v46 )
            sub_1B64C5C(0LL, v44);
          v47 = this->fields.npCombineInfoPrefab;
          v48 = UnityEngine_Component__get_transform(v46, 0LL);
          v49 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v47, v48, 0LL, 0LL);
          v50 = System_Int32__ToString_62190408((int32_t)&idx, (System_String_o *)StringLiteral_4966/*"D3"*/, 0LL);
          if ( !v49 )
            sub_1B64C5C(v50, v50);
          UnityEngine_Object__set_name(v49, v50, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v49,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( !Component_object )
            sub_1B64C5C(0LL, v52);
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
        &v55,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
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
    NpCombineControl__SetSvtNpCombineData(this, v53);
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
    sub_1B64C5C(combineBtn, isCombine);
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
      sub_1B64C5C(scrollView, enabled);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
  }
}


void __fastcall NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v8; // x19
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0231F & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4A0231F = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v9, 0LL);
      if ( v5 )
      {
        v10.fields.r = 1.0;
        v10.fields.g = 1.0;
        v10.fields.b = 1.0;
        v10.fields.a = 1.0;
        UIWidget__set_color(v5, v10, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B64C5C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v11, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  UIWidget__set_color(v5, v12, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4A02311 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_9167/*"N0"*/, method);
    byte_4A02311 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62190408((int)this + 392, (System_String_o *)StringLiteral_9167/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B64C5C(SelfUserGame, v4);
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
  __int64 materialGrid; // x0
  __int64 v20; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v22; // x23
  System_Collections_Generic_List_long__o *v23; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned __int64 v27; // x22
  struct System_Int64_array *v28; // x8
  int64_t v29; // x24
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v32; // x25
  UnityEngine_Transform_o *v33; // x26
  int v34; // s0
  UnityEngine_Transform_o *v37; // x26
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *baseUserServantEntity; // x25
  NpMaterialSvtInfo_o *v40; // x26
  NpMaterialSvtInfo_ClickDelegate_o *v41; // x27
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  const MethodInfo *v45; // x3
  int32_t v46; // w21
  const MethodInfo *v47; // x3
  struct System_Int64_array *v48; // x22
  __int64 v49; // x8
  unsigned __int64 v50; // x23
  int64_t v51; // x20
  const MethodInfo *v52; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  _BOOL8 v57; // x0
  __int64 v58; // x1
  float v59; // s0
  int v60; // w8
  UILabel_o *qpLb; // x22
  float v62; // s1
  float v63; // s0
  float v64; // s3
  float v65; // s2
  struct SetLevelUpData_o *v66; // x8
  int32_t spendQpVal; // w9
  bool v68; // w20
  float v69; // s0
  float v70; // s1
  float v71; // s2
  float v72; // s3
  const MethodInfo *v73; // x1
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4A0231B & 1) == 0 )
  {
    sub_1B64A00(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, data);
    sub_1B64A00(&Method_CombineMenuControl_OnClickMaterial__, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v10);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64A00(&StringLiteral_9167/*"N0"*/, v18);
    byte_4A0231B = 1;
  }
  tmpTargetLv = 0;
  memset(&v75, 0, sizeof(v75));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_62;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_62;
  v22 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v23 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v23;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectMtUsrSvtIdList, (int32_t)v23, v25, v26);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v22 < 1 )
    return;
  v27 = 0LL;
  do
  {
    v28 = data->fields.materialUsrSvtIdList;
    if ( !v28 )
      goto LABEL_62;
    if ( v27 >= v28->max_length )
LABEL_63:
      sub_1B64C64(materialGrid, v20);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    v29 = v28->m_Items[v27];
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
    v32 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v33 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0LL);
    if ( !materialGrid )
      goto LABEL_62;
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v33 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v32, 0LL);
    v37 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_49F9821 )
    {
      materialGrid = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v20);
      byte_49F9821 = 1;
    }
    if ( !v37 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v37, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v32,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    v40 = (NpMaterialSvtInfo_o *)Component_object;
    v41 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_1B64C4C(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v41,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0LL);
    if ( !v40 )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo(v40, v27, baseUserServantEntity, v29, v41, 0LL);
    materialGrid = (__int64)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_62;
    v42 = *(_QWORD *)(materialGrid + 16);
    v43 = Method_System_Collections_Generic_List_long__Add__;
    ++*(_DWORD *)(materialGrid + 28);
    if ( !v42 )
      goto LABEL_62;
    v44 = *(int *)(materialGrid + 24);
    if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        (System_Collections_Generic_List_long__o *)materialGrid,
        v29,
        *(const MethodInfo_3497968 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v44 + 1;
      *(_QWORD *)(v42 + 8 * v44 + 32) = v29;
    }
    ++v27;
  }
  while ( (unsigned int)v22 != v27 );
  materialGrid = (__int64)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_62;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = NpCombineControl__GetNpLv(
                   this->fields.baseUserServantEntity,
                   data->fields.materialUsrSvtIdList,
                   &tmpTargetLv,
                   v45);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_62;
  v46 = materialGrid;
  materialGrid = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = materialGrid & 1;
  v48 = data->fields.materialUsrSvtIdList;
  if ( !v48 )
    goto LABEL_62;
  v49 = *(_QWORD *)&v48->max_length;
  if ( (int)v49 >= 1 )
  {
    v50 = 0LL;
    while ( 1 )
    {
      if ( v50 >= (unsigned int)v49 )
        goto LABEL_63;
      v51 = v48->m_Items[v50];
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v51,
                                (const MethodInfo_30D6944 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_62;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = NpCombineControl__CheckConfirm(v51, v52);
      if ( (materialGrid & 1) != 0 )
        break;
      LODWORD(v49) = v48->max_length;
      if ( (__int64)++v50 >= (int)v49 )
        goto LABEL_39;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_39:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_62;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v46, v47);
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v74,
      combineEventList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v75 = v74;
    while ( 1 )
    {
      v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v75,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v57 )
        break;
      if ( !v75.fields._current )
        sub_1B64C5C(v57, v58);
      if ( HIDWORD(v75.fields._current[1].klass) == 10 )
      {
        v59 = *(float *)&v75.fields._current[3].monitor * (float)*p_spendQpVal;
        v60 = (int)v59;
        if ( v59 == INFINITY )
          v60 = 0x80000000;
        *p_spendQpVal = v60;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v75,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_62190408((int)this + 396, (System_String_o *)StringLiteral_9167/*"N0"*/, 0LL);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  materialGrid = (__int64)this->fields.qpLb;
  v62 = 0.0;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
    v62 = 1.0;
  if ( !materialGrid )
    goto LABEL_62;
  v63 = 1.0;
  v64 = 1.0;
  v65 = v62;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)(&v62 - 1), 0LL);
  v66 = this->fields.lvUpData;
  if ( !v66 )
    goto LABEL_62;
  v66->fields.nextLv = v46;
  spendQpVal = this->fields.spendQpVal;
  v66->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v69 = 1.0;
      v68 = 1;
      v70 = 1.0;
      goto LABEL_60;
    }
LABEL_62:
    sub_1B64C5C(materialGrid, v20);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v68 = 0;
  v69 = 1.0;
  v70 = 0.0;
LABEL_60:
  v71 = v70;
  v72 = v69;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v69, 0LL);
  this->fields._IsExeCombine_k__BackingField = v68;
  NpCombineControl__SetExeBtnState(this, v73);
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
    sub_1B64C5C(v4, v5);
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
    sub_1B64C5C(preSelectBaseLb, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v12; // x21
  __int64 *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4A02322 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_7081/*"HEADER_MSG_NPUP_MATERIAL"*/, v6);
    sub_1B64A00(&StringLiteral_5731/*"EXE_SUMMON_COMBINE_TXT"*/, v7);
    sub_1B64A00(&StringLiteral_7332/*"INFO_MSG_NPUP_BASE"*/, v8);
    sub_1B64A00(&StringLiteral_12059/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_1B64A00(&StringLiteral_1/*""*/, v10);
    byte_4A02322 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1B64C5C(detailInfoLb, *(_QWORD *)&state);
  }
  v14.fields.r = 0.0;
  v14.fields.a = 1.0;
  v14.fields.g = 0.87891;
  v14.fields.b = 0.98828;
  v12 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v14, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_5731/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color(v12, v15, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_12059/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7081/*"HEADER_MSG_NPUP_MATERIAL"*/;
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
    v13 = &StringLiteral_7332/*"INFO_MSG_NPUP_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v13, 0LL);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall NpCombineControl__SetSvtNpCombineData(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 v11; // x1
  char *Item; // x0
  int32_t v13; // w22
  char *v14; // x21
  int32_t v15; // w20
  __int64 v16; // x0
  DataManager_o *v17; // x24
  int32_t v18; // w25
  char *v19; // x23
  UILabel_o *currentInfoLb; // x24
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w24
  UserServantEntity_o *baseUserServantEntity; // x24
  System_Int64_array *v25; // x0
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x26
  struct SetLevelUpData_o **p_lvUpData; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // d0
  ServantStatusBattleListViewItem_o *v40; // x0
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A0231A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v6);
    sub_1B64A00(&SetLevelUpData_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_1B64A00(&StringLiteral_1213/*"0"*/, v9);
    byte_4A0231A = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = (char *)this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     0,
                     (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    if ( !Item )
      goto LABEL_29;
    v13 = *((_DWORD *)Item + 6);
    v14 = Item;
    if ( v13 >= 1 )
    {
      Item = (char *)this->fields.maxLvStatusInfo;
      if ( !Item )
        goto LABEL_29;
      v15 = *((_DWORD *)v14 + 7);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 0, 0LL);
      v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
        v16 = sub_1BB68DC(v16);
      Item = *(char **)(*(_QWORD *)(v16 + 192) + 16LL);
      if ( (Item[309] & 1) == 0 )
        Item = (char *)sub_1BB68DC(Item);
      v17 = (DataManager_o *)**((_QWORD **)Item + 23);
      if ( !v17 )
        goto LABEL_29;
      Item = (char *)DataManager__GetMasterData_object_(
                       v17,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                       (TreasureDvcMaster_o *)Item,
                       *((_DWORD *)v14 + 4),
                       v13,
                       0LL);
      if ( !Item )
        goto LABEL_29;
      v18 = *((_DWORD *)Item + 12);
      v19 = Item;
      Item = (char *)DataManager__GetMasterData_object_(
                       v17,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Item, v13, v15, 0LL);
      if ( !Item )
        goto LABEL_29;
      currentInfoLb = this->fields.currentInfoLb;
      Item = (char *)TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)Item, 0LL);
      if ( !currentInfoLb )
        goto LABEL_29;
      UILabel__set_text(currentInfoLb, (System_String_o *)Item, 0LL);
      if ( v15 < v18 )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = v15;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v25 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v25, &tmpTargetLv, v26);
        }
        v27 = (Il2CppObject *)sub_1B64C4C(SetLevelUpData_TypeInfo);
        System_Object___ctor(v27, 0LL);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = (struct SetLevelUpData_o *)v27;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.lvUpData, (int32_t)v27, v29, v30);
        Item = (char *)this->fields.lvUpData;
        if ( Item )
        {
          *((_DWORD *)Item + 4) = v13;
          *(_QWORD *)(Item + 20) = 1LL;
          Item[112] = v14[65];
          v33 = *((_QWORD *)v19 + 4);
          *((_QWORD *)Item + 4) = v33;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(Item + 32), v33, v31, v32);
          Item = (char *)*p_lvUpData;
          if ( *p_lvUpData )
          {
            v36 = *((_QWORD *)v19 + 3);
            *((_QWORD *)Item + 5) = v36;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(Item + 40), v36, v34, v35);
            Item = (char *)*p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_DWORD *)Item + 16) = v15;
              *((_DWORD *)Item + 17) = NpLv;
              v39 = *(_QWORD *)&this->fields.spendQpVal;
              *((_QWORD *)Item + 12) = 0LL;
              v40 = (ServantStatusBattleListViewItem_o *)(Item + 96);
              *(_QWORD *)(&v40[-1].fields.isCanSelect + 3) = v39;
              sub_1B649A4(v40, 0, v37, v38);
              return;
            }
          }
        }
LABEL_29:
        sub_1B64C5C(Item, v11);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v21);
      Item = (char *)this->fields.qpLb;
      if ( !Item )
        goto LABEL_29;
      UILabel__set_text((UILabel_o *)Item, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
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