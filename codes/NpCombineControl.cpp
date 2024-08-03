void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FFC08 & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    byte_49FFC08 = 1;
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
  UnityEngine_GameObject_o *Component_object; // x0
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v8; // x20

  if ( (byte_49FFBF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FFBF6 = 1;
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
                                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___),
            !this->fields.svtNpDataList)
        || (baseUserServantEntity = this->fields.baseUserServantEntity,
            v8 = (ServantNpInfoIconComponent_o *)Component_object,
            Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                             this->fields.displayTransformIndex,
                                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__),
            !v8) )
      {
        sub_1B64324(Component_object);
      }
      ServantNpInfoIconComponent__SetNpInfo(
        v8,
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49FFC03 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FFC03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_44556320((UserServantEntity_o *)Entity, v7);
}


bool __fastcall NpCombineControl__CheckConfirm_44556320(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
{
  UserServantEntity_o *v2; // x19
  __int64 v3; // x1
  int64_t hiddenValue; // x8
  int v5; // w9
  int v6; // w10

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
    sub_1B64324(selectUsrSvtEnt);
  v5 = *(_DWORD *)(hiddenValue + 24);
  if ( v5 >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v5 == v6 )
        sub_1B6432C(selectUsrSvtEnt, v3);
      if ( *(int *)(hiddenValue + 4LL * v6 + 32) >= 2 )
        return 1;
    }
    while ( v5 != ++v6 );
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
  if ( (byte_49FFBFE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, resData);
    this = (NpCombineControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFBFE = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_1B64324(this);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.baseUserServantEntity);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int v7; // w22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array *assetList; // x21
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FFBFA & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFBFA = 1;
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
    v7 = childCount + 1;
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
                                                 v7 - 2,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
      if ( --v7 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1B64324(wrapContent);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37486440(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v10, v11);
  }
  NpCombineControl__ResetScrollView(this, v6);
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

  if ( (byte_49FFBFB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFBFB = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1B64324(materialGrid);
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
  if ( (byte_49FFBF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (NpCombineControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFBF9 = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v15, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1B64324(this);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
  sub_1B6406C(p_baseUserServantEntity, (int32_t)Entity, v12, v13);
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

  if ( (byte_49FFBF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    byte_49FFBF4 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (BYTE5(MasterData_object[19].klass) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_1BB5FA4(MasterData_object);
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
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
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
                                            (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
                                            (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
LABEL_45:
    sub_1B64324(MasterData_object);
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
  int32_t LimitCountByImageLimitCostumeIn; // w20
  __int64 v9; // x8
  __int64 v10; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_49FFBF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_49FFBF3 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB5FA4(v10);
  MasterData_object = **(Il2CppObject ***)(v10 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1B64324(MasterData_object);
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
  TreasureDvcInfo_o *v6; // x29
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
  __int64 v18; // x0
  __int64 v19; // x0
  DataManager_o *MasterData_object; // x0
  TreasureDvcMaster_o *v21; // x20
  __int64 v22; // x1
  unsigned __int64 v23; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v25; // w26
  __int64 v26; // x23
  __int64 v27; // x25
  DataManager_o *v28; // x27
  int32_t v29; // w0
  struct System_Int32_array *hideCardChara; // x8
  struct System_Collections_Generic_List_string__o **p_saveNameList; // x9
  int v32; // w20
  int32_t v33; // w23
  TreasureDvcInfo_o *v34; // x19
  bool v35; // w28
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x25
  __int64 v39; // x23
  __int64 v40; // x29
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t DispLimitCount; // w23
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  NpCombineControl_o *v51; // x0
  const MethodInfo *v52; // x5
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  TreasureDvcMaster_o *v60; // [xsp+0h] [xbp-90h]
  ServantTreasureDeviceAddEntity_o *v61; // [xsp+8h] [xbp-88h]
  int32_t *p_cardId; // [xsp+10h] [xbp-80h]
  int32_t tdGuageCount[2]; // [xsp+18h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v6 = tdInfo;
  if ( (byte_49FFBF2 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, usrSvtData);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_1B640C8(&SvtUseNpData_TypeInfo, v16);
    byte_49FFBF2 = 1;
  }
  tdExplanation = 0LL;
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtUseNpData__TypeInfo,
                                                       usrSvtData,
                                                       tdInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB5FA4(v18);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BB5FA4(v19);
  MasterData_object = **(DataManager_o ***)(v19 + 184);
  if ( !MasterData_object )
    goto LABEL_37;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_37;
  v21 = (TreasureDvcMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                         (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v23 = 0LL;
    v61 = tdAddEntity;
    p_cardId = &v6->fields.cardId;
    v60 = v21;
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
      *(_QWORD *)&v66.fields.currentCryptoKey = v27;
      *(_QWORD *)&v66.fields.fakeValue = v26;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v66, 0LL);
      if ( !v21 )
        break;
      MasterData_object = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                             v21,
                                             (int32_t)MasterData_object,
                                             v25,
                                             0LL);
      if ( !v6 )
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
        v6->fields.lv,
        0LL);
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(usrSvtData->fields.svtId, 0LL);
      MasterData_object = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v29, v25, 0LL);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_saveNameList = &MasterData_object->fields.saveNameList;
      if ( !MasterData_object )
        p_saveNameList = (struct System_Collections_Generic_List_string__o **)p_cardId;
      if ( !hideCardChara )
        break;
      if ( v23 >= hideCardChara->max_length )
LABEL_38:
        sub_1B6432C(MasterData_object, v22);
      v32 = *(_DWORD *)p_saveNameList;
      v33 = hideCardChara->m_Items[v23 + 1];
      v34 = v6;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v35 = System_Convert__ToBoolean_62023620(v33, 0LL);
      v38 = sub_1B64314(SvtUseNpData_TypeInfo, v36, v37);
      System_Object___ctor((Il2CppObject *)v38, 0LL);
      v39 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = v39;
      *(_QWORD *)&v67.fields.fakeValue = v40;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v67, 0LL);
      if ( !v38 )
        break;
      *(_DWORD *)(v38 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v38 + 20) = v25;
      v6 = v34;
      *(_QWORD *)(v38 + 24) = *(_QWORD *)&v34->fields.id;
      v43 = *(_QWORD *)&v28->fields._DispLog;
      *(_QWORD *)(v38 + 32) = v43;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 32), v43, v41, v42);
      m_CancellationTokenSource = v28->fields.m_CancellationTokenSource;
      *(_QWORD *)(v38 + 40) = m_CancellationTokenSource;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 40), (int32_t)m_CancellationTokenSource, v45, v46);
      *(_DWORD *)(v38 + 48) = v32;
      *(_DWORD *)(v38 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v38 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v48 = (int)tdExplanation;
      *(_QWORD *)(v38 + 56) = tdExplanation;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 56), v48, v49, v50);
      tdAddEntity = v61;
      *(_BYTE *)(v38 + 64) = v35;
      *(_BYTE *)(v38 + 65) = 1;
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             v51,
                                             *(_DWORD *)(v38 + 16),
                                             *(_DWORD *)(v38 + 72),
                                             v61->fields.condLimitCount,
                                             v23,
                                             v52);
      *(_DWORD *)(v38 + 68) = (_DWORD)MasterData_object;
      if ( !v17 )
        break;
      items = v17->fields._items;
      v21 = v60;
      v56 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v38,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v38;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 4), v38, v53, v54);
      }
      ++v23;
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v61->fields.treasureDeviceIds,
                                             (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( (__int64)v23 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v17;
    }
LABEL_37:
    sub_1B64324(MasterData_object);
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
  if ( (byte_49FFC01 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, mtSvtIdList);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    baseUsrSvtData = (UserServantEntity_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFC01 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *tmpTargetLv = 0;
  if ( !v5 )
    goto LABEL_17;
  v9 = *(_QWORD *)&v5->max_length;
  if ( (int)v9 < 1 )
  {
    LODWORD(mtSvtIdList) = 0;
    if ( v6 )
      return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0LL);
LABEL_17:
    sub_1B64324(baseUsrSvtData);
  }
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v9 )
      sub_1B6432C(baseUsrSvtData, mtSvtIdList);
    v11 = v5->m_Items[v10];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v11,
                                              (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_39878768(
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
  TreasureDvcLvEntity_o *Entity; // x0

  v5 = currentLv;
  if ( (byte_49FFC02 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&currentLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFC02 = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v8 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
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
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w23
  __int64 v28; // x27
  int32_t TransformedServantId; // w25
  __int64 v30; // x26
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t *p_cardId; // x8
  int32_t v34; // w29
  __int64 v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  int v38; // w8
  __int64 v39; // x1
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t DispLimitCount; // w25
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w1
  int32_t v48; // w2
  NpCombineControl_o *v49; // x0
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-88h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-78h] BYREF
  TreasureDvcInfo_o *v61; // [xsp+20h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_49FFBF1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, usrSvtData);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1B640C8(&SvtUseNpData_TypeInfo, v12);
    byte_49FFBF1 = 1;
  }
  v61 = 0LL;
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BB5FA4(v13);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1BB5FA4(MasterData_object);
  v15 = **(DataManager_o ***)(MasterData_object + 184);
  if ( !v15 )
    goto LABEL_39;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 v15,
                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_39;
  v16 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v18;
  *(_QWORD *)&v63.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v63, 0LL);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_SvtUseNpData__TypeInfo,
                                                         v25,
                                                         v26);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal < 1 )
      return (System_Collections_Generic_List_SvtUseNpData__o *)v23;
    v27 = 0;
    v28 = 0LL;
    while ( 1 )
    {
      MasterData_object = (__int64)this->fields.baseUserServantEntity;
      if ( !MasterData_object )
        break;
      TransformedServantId = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)MasterData_object,
                               v27,
                               0LL);
      MasterData_object = UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                            usrSvtData,
                            &v61,
                            v27,
                            -1,
                            -1,
                            0,
                            0LL);
      if ( !v61 )
        break;
      if ( !v24 )
        break;
      MasterData_object = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)v24,
                                     TransformedServantId,
                                     v61->fields.id,
                                     0LL);
      if ( !v61 )
        break;
      v30 = MasterData_object;
      if ( !MasterData_object )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v61->fields.lv,
        0LL);
      MasterData_object = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(
                                     TransformedServantId,
                                     *(_DWORD *)(v30 + 16),
                                     0LL);
      if ( MasterData_object )
        v28 = MasterData_object;
      if ( MasterData_object )
      {
        if ( !v28 )
          break;
        p_cardId = (int32_t *)(v28 + 64);
      }
      else
      {
        if ( !v61 )
          break;
        p_cardId = &v61->fields.cardId;
      }
      v34 = *p_cardId;
      v35 = sub_1B64314(SvtUseNpData_TypeInfo, v31, v32);
      System_Object___ctor((Il2CppObject *)v35, 0LL);
      if ( !v35 )
        break;
      *(_DWORD *)(v35 + 16) = TransformedServantId;
      v38 = *(_DWORD *)(v30 + 16);
      *(_DWORD *)(v35 + 20) = v38;
      *(_DWORD *)(v35 + 24) = v38;
      if ( !v61 )
        break;
      *(_DWORD *)(v35 + 28) = v61->fields.lv;
      v39 = *(_QWORD *)(v30 + 32);
      *(_QWORD *)(v35 + 32) = v39;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 32), v39, v36, v37);
      v40 = *(_QWORD *)(v30 + 24);
      *(_QWORD *)(v35 + 40) = v40;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 40), v40, v41, v42);
      *(_DWORD *)(v35 + 48) = v34;
      *(_DWORD *)(v35 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v35 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v44 = (int)tdExplanation;
      *(_QWORD *)(v35 + 56) = tdExplanation;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 56), v44, v45, v46);
      *(_BYTE *)(v35 + 64) = 0;
      v47 = *(_DWORD *)(v35 + 16);
      v48 = *(_DWORD *)(v35 + 72);
      *(_BYTE *)(v35 + 65) = this->fields.transformTotal > 1;
      MasterData_object = NpCombineControl__GetLimitCountForSingle(v49, v47, v48, v50);
      *(_DWORD *)(v35 + 68) = MasterData_object;
      if ( !v23 )
        break;
      items = v23->fields._items;
      v54 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v23->fields._version;
      if ( !items )
        break;
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v35,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v35;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), v35, v51, v52);
      }
      if ( ++v27 >= this->fields.transformTotal )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v23;
    }
LABEL_39:
    sub_1B64324(MasterData_object);
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

  if ( (byte_49FFBED & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v3);
    sub_1B640C8(&StringLiteral_9170/*"NEED_QP_INFO"*/, v4);
    byte_49FFBED = 1;
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
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"NEED_QP_INFO"*/, 0LL);
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
    sub_1B64324(currentInfoLb);
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
  int32_t klass; // w8
  UILabel_o *preSelectBaseLb; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v19; // x0
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFBEB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_8723/*"MSG_PRESELECT_BASE_SVT"*/, v8);
    byte_49FFBEB = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8723/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v15, v16);
  v19 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v19 && v19->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      v19,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v20 )
        break;
      if ( !v22.fields._current )
        sub_1B64324(v20);
      if ( HIDWORD(v22.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1B64324(v20);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v20,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v22.fields._current[5].klass,
          v21);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_1B64324(SelfUserGame);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
}


void __fastcall NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FFBEA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFBEA = 1;
  }
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  NpCombineControl__InitInfo(this, v4);
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B6406C(p_charaGraph, 0, v8, v9);
      return;
    }
LABEL_12:
    sub_1B64324(helpBtn);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_49FFC05 & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_1B640C8(
                                   &Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___,
                                   method);
    byte_49FFC05 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_1B64324(this);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.assetList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  int32_t childCount; // w0
  int32_t v10; // w20
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_49FFC06 & 1) == 0 )
  {
    sub_1B640C8(&Method_NpCombineControl_OnClickArrow__, *(_QWORD *)&delte);
    byte_49FFC06 = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0LL);
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_15;
  currentMoveIdx = this->fields.currentMoveIdx;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_15;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  v10 = childCount ? ((currentMoveIdx + delte) % childCount + childCount) % childCount : 0;
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  this->fields.currentMoveIdx = v10;
  if ( !wrapContent
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wrapContent, 1, 0LL),
        (wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent) == 0LL)
    || (centerChild = this->fields.centerChild,
        (wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL)) == 0LL)
    || (wrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)wrapContent,
                                                   v10,
                                                   0LL),
        !centerChild) )
  {
LABEL_15:
    sub_1B64324(wrapContent);
  }
  UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
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
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_49FFBFD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FFBFD = 1;
  }
  memset(&v15, 0, sizeof(v15));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v14,
    selectMtUsrSvtIdList,
    (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v15,
            (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v15.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v15,
    (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_1B64324(selectMtUsrSvtIdList);
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
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFC00 & 1) == 0 )
  {
    sub_1B640C8(&Method_NpCombineControl_OnClickMaterialSelectList__, method);
    byte_49FFC00 = 1;
  }
  v3 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_NpCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FFC07 & 1) == 0 )
  {
    sub_1B640C8(&Method_NpCombineControl_OnClickSwitchButton__, method);
    byte_49FFC07 = 1;
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
      sub_1B64324(baseUserServantEntity);
    }
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  v4 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_NpCombineControl_OnClickSwitchButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  void *helpBtn; // x0
  const MethodInfo *v12; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  int32_t v18; // w8
  int32_t v19; // w2
  int32_t v20; // w3
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v23; // x0
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *charaGraph; // x20
  ServantStatusBattleListViewItem_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_49FFBEC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v9);
    sub_1B640C8(&StringLiteral_9170/*"NEED_QP_INFO"*/, v10);
    byte_49FFBEC = 1;
  }
  memset(&v32, 0, sizeof(v32));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v12);
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
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_35;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v14);
  NpCombineControl__SetSelectMaterialEnable(this, v15);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v16);
  NpCombineControl__ResetScrollView(this, v17);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_35;
  v18 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v18;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)combineEventList, v19, v20);
  v23 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v23 && v23->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      v23,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v32 = v31;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v24 )
        break;
      if ( !v32.fields._current )
        sub_1B64324(v24);
      if ( HIDWORD(v32.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1B64324(v24);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v24,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v32.fields._current[5].klass,
          v25);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1B6406C(p_charaGraph, 0, v29, v30);
      return;
    }
LABEL_35:
    sub_1B64324(helpBtn);
  }
}


void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 scrollView; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFC04 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_49FFC04 = 1;
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
  v5 = (UnityEngine_Transform_o *)scrollView;
  if ( !byte_49F7111 )
  {
    scrollView = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v4);
    byte_49F7111 = 1;
  }
  if ( !v5 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)scrollView,
                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_15;
  v6.fields.y = *(float *)(scrollView + 336);
  v6.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v6, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView
    || (v7.fields.x = 0.0,
        v7.fields.y = 0.0,
        v7.fields.z = 0.0,
        UIScrollView__set_currentMomentum((UIScrollView_o *)scrollView, v7, 0LL),
        (scrollView = (__int64)this->fields.scrollView) == 0) )
  {
LABEL_15:
    sub_1B64324(scrollView);
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
  UICharaGraphTexture_o *TexturePrefab_37591604; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_49FFBF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (NpCombineControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFBF0 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
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
    TexturePrefab_37591604 = CharaGraphManager__CreateTexturePrefab_37591604(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_37591604;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.charaGraph, (int32_t)TexturePrefab_37591604, v18, v19);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B64324(this);
  UICharaGraphTexture__SetCharacter_40502984((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
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
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_String_array **p_assetList; // x22
  System_String_array *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_String_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  struct System_String_array *assetList; // x22
  unsigned __int64 v33; // x23
  __int64 v34; // x29
  int32_t TransformedServantId; // w0
  __int64 v36; // x25
  __int64 v37; // x26
  int32_t v38; // w24
  int32_t v39; // w25
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_Action_o *v43; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49FFBEF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, usrSvtEn);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&Method_NpCombineControl_SetCombineNpList__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1B640C8(&string___TypeInfo, v9);
    byte_49FFBEF = 1;
  }
  if ( usrSvtEn )
  {
    v11 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v11;
    *(_QWORD *)&v44.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity, (int32_t)usrSvtEn, v14, v15);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_26;
    UIIconLabel__Set_37921148(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v19);
    this->fields.svtNpDataList = SvtNpData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtNpDataList, (int32_t)SvtNpData, v21, v22);
    p_assetList = &this->fields.assetList;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetList, 0LL) )
    {
      v24 = *p_assetList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_37486440(v24, 0LL);
      *p_assetList = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetList, 0, v25, v26);
    }
    v27 = (struct System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetList, (int32_t)v27, v28, v29);
    assetList = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v33 = 0LL;
      v34 = 32LL;
      while ( 1 )
      {
        LevelMax = (UnityEngine_GameObject_o *)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v33, 0LL);
        v37 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v36 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        v38 = TransformedServantId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v45.fields.currentCryptoKey = v37;
        *(_QWORD *)&v45.fields.fakeValue = v36;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v38, v39, 0LL);
        if ( !assetList )
          break;
        if ( v33 >= assetList->max_length )
          sub_1B6432C(LevelMax, v40);
        *(Il2CppClass **)((char *)&assetList->obj.klass + v34) = (Il2CppClass *)LevelMax;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)assetList + v34), (int32_t)LevelMax, v41, v42);
        assetList = this->fields.assetList;
        ++v33;
        v34 += 8LL;
        if ( (__int64)v33 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_1B64324(LevelMax);
    }
LABEL_22:
    v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
    System_Action___ctor(v43, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37484096(assetList, v43, 1, 0LL);
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
  UnityEngine_Component_o *wrapContent; // x0
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t transformTotal; // w20
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v29; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v34; // x8
  bool isScrollNpInfo; // w1
  int v36; // w22
  struct UICenterOnChild_o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  SpringPanel_OnFinished_o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  int i; // w24
  _BOOL8 v44; // x0
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x21
  UnityEngine_Transform_o *v48; // x2
  UnityEngine_Object_o *v49; // x21
  System_String_o *v50; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v52; // x1
  const MethodInfo *currentMoveIdx; // x1
  const MethodInfo *v54; // x1
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-68h] BYREF
  int32_t idx; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_49FFBF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v10);
    sub_1B640C8(&Method_NpCombineControl_OnCenterOnChildFinished__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&SpringPanel_OnFinished_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_4965/*"D3"*/, v14);
    byte_49FFBF5 = 1;
  }
  idx = 0;
  transformInfo = 0LL;
  memset(&v56, 0, sizeof(v56));
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
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
      v18 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)wrapContent,
              (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v18;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.centerChild, (int32_t)v18, v19, v20);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)Object, v26, v27);
        wrapContent = (UnityEngine_Component_o *)this->fields.targetObject;
        if ( wrapContent )
        {
          wrapContent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)wrapContent,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( this->fields.svtNpDataList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v29 = (ServantNpInfoIconComponent_o *)wrapContent;
            wrapContent = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
            if ( v29 )
            {
              ServantNpInfoIconComponent__SetNpInfo(
                v29,
                baseUserServantEntity,
                0,
                (SvtUseNpData_o *)wrapContent,
                3.0,
                10.0,
                0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
              GameObjectExtensions__SetLocalPositionY(gameObject, -18.5, 0LL);
              v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
              GameObjectExtensions__SetLocalScale_33377468(v31, this->fields.scaleOffset, 0LL);
              this->fields.isSelectBase = 1;
              NpCombineControl__SetSelectMaterialEnable(this, v32);
              NpCombineControl__SetSvtNpCombineData(this, v33);
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
      sub_1B64324(wrapContent);
    }
    v34 = this->fields.svtNpDataList;
    if ( !v34 )
      goto LABEL_54;
    if ( v34->fields._size >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
      this->fields.isScrollNpInfo = 1;
      if ( !wrapContent )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
      v37 = this->fields.centerChild;
      v40 = (SpringPanel_OnFinished_o *)sub_1B64314(SpringPanel_OnFinished_TypeInfo, v38, v39);
      SpringPanel_OnFinished___ctor(v40, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0LL);
      if ( !v37 )
        goto LABEL_54;
      v37->fields.onFinished = v40;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->fields.onFinished, (int32_t)v40, v41, v42);
      v36 = 2;
      isScrollNpInfo = this->fields.isScrollNpInfo;
    }
    else
    {
      isScrollNpInfo = 0;
      v36 = 1;
      this->fields.isScrollNpInfo = 0;
    }
    NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v22);
    idx = 0;
    for ( i = 0; i != v36; ++i )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
      if ( !wrapContent )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v55,
        (System_Collections_Generic_List_object__o *)wrapContent,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
      v56 = v55;
      while ( 1 )
      {
        v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v56,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
        if ( !v44 )
          break;
        current = v56.fields._current;
        if ( !v56.fields._current )
          sub_1B64324(v44);
        if ( ((__int64)v56.fields._current[1].monitor & 0x80000000) == 0 )
        {
          v46 = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !v46 )
            sub_1B64324(0LL);
          v47 = this->fields.npCombineInfoPrefab;
          v48 = UnityEngine_Component__get_transform(v46, 0LL);
          v49 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v47, v48, 0LL, 0LL);
          v50 = System_Int32__ToString_62180668((int32_t)&idx, (System_String_o *)StringLiteral_4965/*"D3"*/, 0LL);
          if ( !v49 )
            sub_1B64324(v50);
          UnityEngine_Object__set_name(v49, v50, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v49,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( !Component_object )
            sub_1B64324(0LL);
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
        &v56,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    }
    if ( this->fields.isScrollNpInfo )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_54;
      LODWORD(wrapContent[1].monitor) = 700;
      UIWrapContent__WrapContent((UIWrapContent_o *)wrapContent, 0LL);
    }
    NpCombineControl__ResetScrollView(this, v52);
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
    NpCombineControl__SetSvtNpCombineData(this, v54);
  }
}


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
    sub_1B64324(combineBtn);
  }
  v6.fields.a = 1.0;
  v6.fields.r = v5;
  v6.fields.g = v5;
  v6.fields.b = v5;
  UIWidget__set_color(combineBtn, v6, 0LL);
}


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
      sub_1B64324(scrollView);
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

  if ( (byte_49FFBFC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_49FFBFC = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1B64324(combineBtnBg);
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
  UILabel_o *haveQpLb; // x20

  if ( (byte_49FFBEE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, method);
    byte_49FFBEE = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62180668((int)this + 392, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B64324(SelfUserGame);
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
  __int64 v21; // x2
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v23; // x23
  System_Collections_Generic_List_long__o *v24; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  unsigned __int64 v29; // x22
  struct System_Int64_array *v30; // x8
  int64_t v31; // x24
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v34; // x25
  UnityEngine_Transform_o *v35; // x26
  int v36; // s0
  __int64 v39; // x1
  UnityEngine_Transform_o *v40; // x26
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *baseUserServantEntity; // x25
  NpMaterialSvtInfo_o *v43; // x26
  __int64 v44; // x1
  __int64 v45; // x2
  NpMaterialSvtInfo_ClickDelegate_o *v46; // x27
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  const MethodInfo *v50; // x3
  int32_t v51; // w21
  const MethodInfo *v52; // x3
  struct System_Int64_array *v53; // x22
  __int64 v54; // x8
  unsigned __int64 v55; // x23
  int64_t v56; // x20
  const MethodInfo *v57; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  _BOOL8 v62; // x0
  float v63; // s0
  int v64; // w8
  UILabel_o *qpLb; // x22
  float v66; // s1
  float v67; // s0
  float v68; // s3
  float v69; // s2
  struct SetLevelUpData_o *v70; // x8
  int32_t spendQpVal; // w9
  bool v72; // w20
  float v73; // s0
  float v74; // s1
  float v75; // s2
  float v76; // s3
  const MethodInfo *v77; // x1
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_49FFBF8 & 1) == 0 )
  {
    sub_1B640C8(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, data);
    sub_1B640C8(&Method_CombineMenuControl_OnClickMaterial__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v18);
    byte_49FFBF8 = 1;
  }
  tmpTargetLv = 0;
  memset(&v79, 0, sizeof(v79));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_62;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_62;
  v23 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v24 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v20, v21);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectMtUsrSvtIdList, (int32_t)v24, v26, v27);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v23 < 1 )
    return;
  v29 = 0LL;
  do
  {
    v30 = data->fields.materialUsrSvtIdList;
    if ( !v30 )
      goto LABEL_62;
    if ( v29 >= v30->max_length )
LABEL_63:
      sub_1B6432C(materialGrid, v28);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    v31 = v30->m_Items[v29];
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
    v34 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v35 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0LL);
    if ( !materialGrid )
      goto LABEL_62;
    *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v35 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v34, 0LL);
    v40 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_49F7111 )
    {
      materialGrid = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v39);
      byte_49F7111 = 1;
    }
    if ( !v40 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v40, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v34,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    baseUserServantEntity = this->fields.baseUserServantEntity;
    v43 = (NpMaterialSvtInfo_o *)Component_object;
    v46 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_1B64314(NpMaterialSvtInfo_ClickDelegate_TypeInfo, v44, v45);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v46,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0LL);
    if ( !v43 )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo(v43, v29, baseUserServantEntity, v31, v46, 0LL);
    materialGrid = (__int64)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_62;
    v47 = *(_QWORD *)(materialGrid + 16);
    v48 = Method_System_Collections_Generic_List_long__Add__;
    ++*(_DWORD *)(materialGrid + 28);
    if ( !v47 )
      goto LABEL_62;
    v49 = *(int *)(materialGrid + 24);
    if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        (System_Collections_Generic_List_long__o *)materialGrid,
        v31,
        *(const MethodInfo_3495074 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v49 + 1;
      *(_QWORD *)(v47 + 8 * v49 + 32) = v31;
    }
    ++v29;
  }
  while ( (unsigned int)v23 != v29 );
  materialGrid = (__int64)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_62;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = NpCombineControl__GetNpLv(
                   this->fields.baseUserServantEntity,
                   data->fields.materialUsrSvtIdList,
                   &tmpTargetLv,
                   v50);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_62;
  v51 = materialGrid;
  materialGrid = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = materialGrid & 1;
  v53 = data->fields.materialUsrSvtIdList;
  if ( !v53 )
    goto LABEL_62;
  v54 = *(_QWORD *)&v53->max_length;
  if ( (int)v54 >= 1 )
  {
    v55 = 0LL;
    while ( 1 )
    {
      if ( v55 >= (unsigned int)v54 )
        goto LABEL_63;
      v56 = v53->m_Items[v55];
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v56,
                                (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_62;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = NpCombineControl__CheckConfirm(v56, v57);
      if ( (materialGrid & 1) != 0 )
        break;
      LODWORD(v54) = v53->max_length;
      if ( (__int64)++v55 >= (int)v54 )
        goto LABEL_39;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_39:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_62;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v51, v52);
  combineEventList = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v78,
      combineEventList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v79 = v78;
    while ( 1 )
    {
      v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v79,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v62 )
        break;
      if ( !v79.fields._current )
        sub_1B64324(v62);
      if ( HIDWORD(v79.fields._current[1].klass) == 10 )
      {
        v63 = *(float *)&v79.fields._current[3].monitor * (float)*p_spendQpVal;
        v64 = (int)v63;
        if ( v63 == INFINITY )
          v64 = 0x80000000;
        *p_spendQpVal = v64;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v79,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_62180668((int)this + 396, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  materialGrid = (__int64)this->fields.qpLb;
  v66 = 0.0;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
    v66 = 1.0;
  if ( !materialGrid )
    goto LABEL_62;
  v67 = 1.0;
  v68 = 1.0;
  v69 = v66;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)(&v66 - 1), 0LL);
  v70 = this->fields.lvUpData;
  if ( !v70 )
    goto LABEL_62;
  v70->fields.nextLv = v51;
  spendQpVal = this->fields.spendQpVal;
  v70->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v73 = 1.0;
      v72 = 1;
      v74 = 1.0;
      goto LABEL_60;
    }
LABEL_62:
    sub_1B64324(materialGrid);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v72 = 0;
  v73 = 1.0;
  v74 = 0.0;
LABEL_60:
  v75 = v74;
  v76 = v73;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v73, 0LL);
  this->fields._IsExeCombine_k__BackingField = v72;
  NpCombineControl__SetExeBtnState(this, v77);
}


void __fastcall NpCombineControl__SetNpCombineNullData(NpCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *qpLb; // x20
  System_String_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  NpCombineControl__DestroyMaterialGrid(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  v4 = System_Int32__ToString((int)this + 396, 0LL);
  if ( !qpLb || (UILabel__set_text(qpLb, v4, 0LL), (v4 = (System_String_o *)this->fields.qpLb) == 0LL) )
    sub_1B64324(v4);
  v6.fields.r = 1.0;
  v6.fields.g = 1.0;
  v6.fields.b = 1.0;
  v6.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v4, v6, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v5);
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
    sub_1B64324(preSelectBaseLb);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v12; // x21
  __int64 *v13; // x8
  System_String_o *v14; // x1
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFBFF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_7080/*"HEADER_MSG_NPUP_MATERIAL"*/, v6);
    sub_1B640C8(&StringLiteral_5730/*"EXE_SUMMON_COMBINE_TXT"*/, v7);
    sub_1B640C8(&StringLiteral_7331/*"INFO_MSG_NPUP_BASE"*/, v8);
    sub_1B640C8(&StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FFBFF = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1B64324(detailInfoLb);
  }
  v15.fields.r = 0.0;
  v15.fields.a = 1.0;
  v15.fields.g = 0.87891;
  v15.fields.b = 0.98828;
  v12 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v15, 0LL);
  if ( state == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_5730/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v16.fields.r = 1.0;
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      UIWidget__set_color(v12, v16, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( state == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7080/*"HEADER_MSG_NPUP_MATERIAL"*/;
  }
  else
  {
    if ( state )
    {
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7331/*"INFO_MSG_NPUP_BASE"*/;
  }
  v14 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, v14, 0LL);
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
  char *Item; // x0
  int32_t v12; // w22
  char *v13; // x21
  int32_t v14; // w20
  __int64 v15; // x0
  DataManager_o *v16; // x24
  int32_t v17; // w25
  char *v18; // x23
  UILabel_o *currentInfoLb; // x24
  const MethodInfo *v20; // x1
  __int64 v21; // x2
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

  if ( (byte_49FFBF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v6);
    sub_1B640C8(&SetLevelUpData_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v9);
    byte_49FFBF7 = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = (char *)this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     0,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    if ( !Item )
      goto LABEL_29;
    v12 = *((_DWORD *)Item + 6);
    v13 = Item;
    if ( v12 >= 1 )
    {
      Item = (char *)this->fields.maxLvStatusInfo;
      if ( !Item )
        goto LABEL_29;
      v14 = *((_DWORD *)v13 + 7);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, 0, 0LL);
      v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
        v15 = sub_1BB5FA4(v15);
      Item = *(char **)(*(_QWORD *)(v15 + 192) + 16LL);
      if ( (Item[309] & 1) == 0 )
        Item = (char *)sub_1BB5FA4(Item);
      v16 = (DataManager_o *)**((_QWORD **)Item + 23);
      if ( !v16 )
        goto LABEL_29;
      Item = (char *)DataManager__GetMasterData_object_(
                       v16,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                       (TreasureDvcMaster_o *)Item,
                       *((_DWORD *)v13 + 4),
                       v12,
                       0LL);
      if ( !Item )
        goto LABEL_29;
      v17 = *((_DWORD *)Item + 12);
      v18 = Item;
      Item = (char *)DataManager__GetMasterData_object_(
                       v16,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Item, v12, v14, 0LL);
      if ( !Item )
        goto LABEL_29;
      currentInfoLb = this->fields.currentInfoLb;
      Item = (char *)TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)Item, 0LL);
      if ( !currentInfoLb )
        goto LABEL_29;
      UILabel__set_text(currentInfoLb, (System_String_o *)Item, 0LL);
      if ( v14 < v17 )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = v14;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v25 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v25, &tmpTargetLv, v26);
        }
        v27 = (Il2CppObject *)sub_1B64314(SetLevelUpData_TypeInfo, v20, v21);
        System_Object___ctor(v27, 0LL);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = (struct SetLevelUpData_o *)v27;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lvUpData, (int32_t)v27, v29, v30);
        Item = (char *)this->fields.lvUpData;
        if ( Item )
        {
          *((_DWORD *)Item + 4) = v12;
          *(_QWORD *)(Item + 20) = 1LL;
          Item[112] = v13[65];
          v33 = *((_QWORD *)v18 + 4);
          *((_QWORD *)Item + 4) = v33;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(Item + 32), v33, v31, v32);
          Item = (char *)*p_lvUpData;
          if ( *p_lvUpData )
          {
            v36 = *((_QWORD *)v18 + 3);
            *((_QWORD *)Item + 5) = v36;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(Item + 40), v36, v34, v35);
            Item = (char *)*p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_DWORD *)Item + 16) = v14;
              *((_DWORD *)Item + 17) = NpLv;
              v39 = *(_QWORD *)&this->fields.spendQpVal;
              *((_QWORD *)Item + 12) = 0LL;
              v40 = (ServantStatusBattleListViewItem_o *)(Item + 96);
              *(_QWORD *)(&v40[-1].fields.isCanSelect + 3) = v39;
              sub_1B6406C(v40, 0, v37, v38);
              return;
            }
          }
        }
LABEL_29:
        sub_1B64324(Item);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v20);
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