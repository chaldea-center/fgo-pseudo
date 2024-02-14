void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__ChangeTargetInfo(NpCombineControl_o *this, bool isdecide, const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *targetObject; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_421505C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, isdecide);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421505C = 1;
  }
  if ( this->fields.baseSvtId >= 1 )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
    {
      Component_srcLineSprite = this->fields.targetObject;
      if ( !Component_srcLineSprite
        || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    Component_srcLineSprite,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
      {
        sub_B0D97C(Component_srcLineSprite);
      }
      ServantNpInfoIconComponent__setDispSelectMskImg((ServantNpInfoIconComponent_o *)Component_srcLineSprite, 1, 0LL);
    }
    NpCombineControl__SetSvtNpCombineData(this, v6);
  }
}


bool __fastcall NpCombineControl__CheckConfirm(int64_t myUserSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4215069 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4215069 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             myUserSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_25570972(Entity, v7);
}


bool __fastcall NpCombineControl__CheckConfirm_25570972(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
{
  UserServantEntity_o *v2; // x19
  int64_t hiddenValue; // x8
  int v4; // w9
  unsigned int v5; // w10
  __int64 v7; // x0

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
    sub_B0D97C(selectUsrSvtEnt);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= v4 )
      {
        v7 = sub_B0D9A8(selectUsrSvtEnt);
        sub_B0D948(v7, 0LL);
      }
      if ( *(int *)(hiddenValue + 4LL * (int)v5 + 32) >= 2 )
        return 1;
    }
    while ( (int)++v5 < v4 );
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
  if ( (byte_4215064 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, resData);
    this = (NpCombineControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215064 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_B0D97C(this);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.charaGraphBase);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array *battleLoadList; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4215060 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215060 = 1;
  }
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_19;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_19;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
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
                                                 v7,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B0D97C(wrapContent);
  }
LABEL_13:
  battleLoadList = this->fields.battleLoadList;
  if ( battleLoadList )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage_29524964(battleLoadList, 0LL);
    this->fields.battleLoadList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.battleLoadList, 0LL, v10, v11, v12, v13, v14, v15);
  }
  NpCombineControl__ResetScrollView(this, v6);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0

  if ( (byte_4215061 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215061 = 1;
  }
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_16;
  materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(materialGrid, 0LL);
  if ( !materialGrid )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)materialGrid, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
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
                                                  v6,
                                                  0LL);
      if ( !materialGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(materialGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B0D97C(materialGrid);
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
    System_Collections_Generic_List_long___Clear(
      selectMtUsrSvtIdList,
      (const MethodInfo_2FB62BC *)Method_System_Collections_Generic_List_long__Clear__);
}


UserServantEntity_o *__fastcall NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  System_Int32_array **Entity; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_421505F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (NpCombineControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421505F = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (BattleServantConfConponent_o *)&v2->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_10;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v19 = v20;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v19, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v10,
                                    (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B0D840(p_baseUserServantEntity, Entity, v12, v13, v14, v15, v16, v17);
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
  __int64 v14; // x20
  __int64 v15; // x20
  int v16; // w24
  bool v17; // cc
  int v18; // w23
  DataManager_o *v19; // x20
  int32_t v20; // w25
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x22
  int32_t v22; // w21

  if ( (byte_421505A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v12);
    this = (NpCombineControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    byte_421505A = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AA65A4(v15);
  v16 = condLimitCount - 1;
  v17 = index < 1;
  if ( index >= 1 )
    v18 = -1;
  else
    v18 = condLimitCount - 1;
  v19 = **(DataManager_o ***)(v15 + 184);
  if ( v17 )
    v20 = -1;
  else
    v20 = condLimitCount;
  if ( !v19 )
    goto LABEL_32;
  this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v19,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !this )
    goto LABEL_32;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         (ServantTreasureDeviceReleaseMaster_o *)this,
                         svtId,
                         0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  this = (NpCombineControl_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v22 = (int)this;
  if ( (v20 & 0x80000000) == 0 && (_DWORD)this != v20 )
  {
    if ( (int)this < 11 )
      goto LABEL_23;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    this = (NpCombineControl_o *)System_Collections_Generic_HashSet_int___Contains(
                                   CorrespondsCostume,
                                   (int32_t)this,
                                   (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
LABEL_23:
      v22 = v20;
  }
  if ( (v18 & 0x80000000) == 0 && v22 > v18 )
  {
    if ( v22 < 11 )
      goto LABEL_29;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    if ( System_Collections_Generic_HashSet_int___Contains(
           CorrespondsCostume,
           v22,
           (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_29:
      v22 = v16;
    }
  }
  this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v19,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
LABEL_32:
    sub_B0D97C(this);
  return ServantLimitImageMaster__GetServantLimitCountSealAfter((ServantLimitImageMaster_o *)this, svtId, v22, 0LL);
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
  __int64 v9; // x21
  __int64 v10; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4215059 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4215059 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(v10);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v10 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster,
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
  TreasureDvcInfo_o *v6; // x23
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  __int64 v18; // x22
  __int64 v19; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  TreasureDvcMaster_o *v21; // x27
  unsigned __int64 v22; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v24; // w25
  __int64 v25; // x22
  __int64 v26; // x26
  DataManager_o *v27; // x26
  int32_t v28; // w0
  struct System_Int32_array *hideCardChara; // x8
  int32_t *p_lastFrameTime; // x9
  int32_t v31; // w20
  int32_t v32; // w22
  TreasureDvcInfo_o *v33; // x19
  bool v34; // w28
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x27
  __int64 v38; // x22
  __int64 v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **lookup; // x1
  System_Int32_array **datalist; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t DispLimitCount; // w22
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  NpCombineControl_o *v62; // x0
  const MethodInfo *v63; // x5
  __int64 v65; // x0
  int32_t *p_cardId; // [xsp+8h] [xbp-88h]
  TreasureDvcMaster_o *v67; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // [xsp+18h] [xbp-78h]
  ServantTreasureDeviceAddEntity_o *v69; // [xsp+20h] [xbp-70h]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v6 = tdInfo;
  if ( (byte_4215058 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, usrSvtData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B0D8A4(&SvtUseNpData_TypeInfo, v16);
    byte_4215058 = 1;
  }
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  tdExplanation = 0LL;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtUseNpData__TypeInfo,
                                                                                                  usrSvtData,
                                                                                                  tdInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v19 = **(_QWORD **)(v18 + 192);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AA65A4(v19);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v19 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_37;
  v21 = (TreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                                          (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_WarQuestSelectionMaster >= 1 )
  {
    v22 = 0LL;
    p_cardId = &v6->fields.cardId;
    v67 = v21;
    v68 = v17;
    v69 = tdAddEntity;
    while ( 1 )
    {
      treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      if ( v22 >= treasureDeviceIds->max_length )
        goto LABEL_38;
      if ( !usrSvtData )
        break;
      v24 = treasureDeviceIds->m_Items[v22 + 1];
      v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v73.fields.currentCryptoKey = v25;
      *(_QWORD *)&v73.fields.fakeValue = v26;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                              v73,
                                                              0LL);
      if ( !v21 )
        break;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                                              v21,
                                                              (int32_t)MasterData_WarQuestSelectionMaster,
                                                              v24,
                                                              0LL);
      if ( !v6 )
        break;
      v27 = MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_WarQuestSelectionMaster,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v6->fields.lv,
        0LL);
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(usrSvtData->fields.svtId, 0LL);
      MasterData_WarQuestSelectionMaster = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v28, v24, 0LL);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_lastFrameTime = (int32_t *)&MasterData_WarQuestSelectionMaster->fields.lastFrameTime;
      if ( !MasterData_WarQuestSelectionMaster )
        p_lastFrameTime = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v22 >= hideCardChara->max_length )
      {
LABEL_38:
        v65 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
        sub_B0D948(v65, 0LL);
      }
      v31 = *p_lastFrameTime;
      v32 = hideCardChara->m_Items[v22 + 1];
      v33 = v6;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v34 = System_Convert__ToBoolean_41912200(v32, 0LL);
      v37 = sub_B0D974(SvtUseNpData_TypeInfo, v35, v36);
      SvtUseNpData___ctor((SvtUseNpData_o *)v37, 0LL);
      v39 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v74.fields.currentCryptoKey = v39;
      *(_QWORD *)&v74.fields.fakeValue = v38;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                              v74,
                                                              0LL);
      if ( !v37 )
        break;
      *(_DWORD *)(v37 + 16) = (_DWORD)MasterData_WarQuestSelectionMaster;
      *(_DWORD *)(v37 + 20) = v24;
      v6 = v33;
      *(_DWORD *)(v37 + 24) = v33->fields.id;
      *(_DWORD *)(v37 + 28) = v33->fields.lv;
      lookup = (System_Int32_array **)v27->fields.lookup;
      *(_QWORD *)(v37 + 32) = lookup;
      sub_B0D840((BattleServantConfConponent_o *)(v37 + 32), lookup, v40, v41, v42, v43, v44, v45);
      datalist = (System_Int32_array **)v27->fields.datalist;
      *(_QWORD *)(v37 + 40) = datalist;
      sub_B0D840((BattleServantConfConponent_o *)(v37 + 40), datalist, v48, v49, v50, v51, v52, v53);
      *(_DWORD *)(v37 + 48) = v31;
      *(_DWORD *)(v37 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      *(_DWORD *)(v37 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v55 = (System_Int32_array **)tdExplanation;
      *(_QWORD *)(v37 + 56) = tdExplanation;
      sub_B0D840((BattleServantConfConponent_o *)(v37 + 56), v55, v56, v57, v58, v59, v60, v61);
      tdAddEntity = v69;
      *(_BYTE *)(v37 + 65) = 1;
      *(_BYTE *)(v37 + 64) = v34;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                                              v62,
                                                              *(_DWORD *)(v37 + 16),
                                                              *(_DWORD *)(v37 + 72),
                                                              v69->fields.condLimitCount,
                                                              v22,
                                                              v63);
      v17 = v68;
      *(_DWORD *)(v37 + 68) = (_DWORD)MasterData_WarQuestSelectionMaster;
      if ( !v68 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v68,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
      ++v22;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v69->fields.treasureDeviceIds,
                                                              (const MethodInfo_1B47494 *)Method_System_Linq_Enumerable_Count_int___);
      v21 = v67;
      if ( (__int64)v22 >= (int)MasterData_WarQuestSelectionMaster )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v17;
    }
LABEL_37:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v17;
}


int32_t __fastcall NpCombineControl__GetNpLv(
        UserServantEntity_o *baseUsrSvtData,
        System_Int64_array *mtSvtIdList,
        int32_t *tmpTargetLv,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  int64_t v11; // x22
  UserServantEntity_o *v12; // x22
  int32_t treasureDeviceLv1; // w8
  int32_t v14; // w1
  __int64 v16; // x0
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-48h] BYREF

  v6 = baseUsrSvtData;
  if ( (byte_4215067 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, mtSvtIdList);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    baseUsrSvtData = (UserServantEntity_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4215067 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *tmpTargetLv = 0;
  if ( !mtSvtIdList )
    goto LABEL_17;
  v9 = *(_QWORD *)&mtSvtIdList->max_length;
  if ( (int)v9 < 1 )
  {
    v14 = 0;
    if ( v6 )
      return UserServantEntity__checkTreasureDeviceLevelUp(v6, v14, 0LL);
LABEL_17:
    sub_B0D97C(baseUsrSvtData);
  }
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v9 )
    {
      v16 = sub_B0D9A8(baseUsrSvtData);
      sub_B0D948(v16, 0LL);
    }
    v11 = mtSvtIdList->m_Items[v10];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseUsrSvtData,
                       v11,
                       (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_21271516(
                                                v12,
                                                &tdMaxLv[1],
                                                tdMaxLv,
                                                0LL);
      treasureDeviceLv1 = tdMaxLv[1];
    }
    ++v10;
    v14 = treasureDeviceLv1 + *tmpTargetLv;
    *tmpTargetLv = v14;
    LODWORD(v9) = mtSvtIdList->max_length;
  }
  while ( (__int64)v10 < (int)v9 );
  if ( !v6 )
    goto LABEL_17;
  return UserServantEntity__checkTreasureDeviceLevelUp(v6, v14, 0LL);
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
  DataManager_o *Instance; // x0
  TreasureDvcLvEntity_o *Entity; // x0

  v5 = currentLv;
  if ( (byte_4215068 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&currentLv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215068 = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v8 = 0;
  do
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, currentId, v5, 0LL);
    if ( Entity )
      v8 += Entity->fields.qp;
    ++v5;
  }
  while ( v5 < resNpLv );
  return v8;
}


System_Collections_Generic_List_SvtUseNpData__o *__fastcall NpCombineControl__GetSvtNpData(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  NpCombineControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x21
  DataManager_o *v15; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantTreasureDeviceAddMaster_o *v19; // x22
  int32_t v20; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v22; // x22
  const MethodInfo *v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  WarQuestSelectionMaster_o *v25; // x0
  __int64 v26; // x21
  __int64 v27; // x22
  TreasureDvcMaster_o *v28; // x20
  NpCombineControl_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_Int32_array **combineRootComponent; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t DispLimitCount; // w19
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t v55; // w1
  int32_t v56; // w2
  NpCombineControl_o *v57; // x0
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  __int64 v60; // x2
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v4 = this;
  if ( (byte_4215057 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, usrSvtData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    this = (NpCombineControl_o *)sub_B0D8A4(&SvtUseNpData_TypeInfo, v12);
    byte_4215057 = 1;
  }
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  if ( !usrSvtData )
    goto LABEL_31;
  this = (NpCombineControl_o *)UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AA65A4(v14);
  v15 = **(DataManager_o ***)(v14 + 184);
  if ( !v15 )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v15,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v19 = (ServantTreasureDeviceAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v18;
  *(_QWORD *)&v66.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v66, 0LL);
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                 usrSvtData->fields.limitCount,
                                 0LL);
  if ( !v19 )
    goto LABEL_31;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v19, v20, (int32_t)this, 0, 0LL);
  if ( !EnableEntity )
  {
    v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            v15,
            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    v28 = (TreasureDvcMaster_o *)v25;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v67.fields.currentCryptoKey = v27;
    *(_QWORD *)&v67.fields.fakeValue = v26;
    this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v67, 0LL);
    if ( tdInfo )
    {
      if ( v28 )
      {
        this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       v28,
                                       (int32_t)this,
                                       tdInfo->fields.id,
                                       0LL);
        if ( tdInfo )
        {
          v29 = this;
          if ( this )
          {
            TreasureDvcEntity__getEffectExplanation(
              (TreasureDvcEntity_o *)this,
              &tdName,
              &tdExplanation,
              &tdGuageCount[1],
              tdGuageCount,
              tdInfo->fields.lv,
              0LL);
            v32 = sub_B0D974(SvtUseNpData_TypeInfo, v30, v31);
            SvtUseNpData___ctor((SvtUseNpData_o *)v32, 0LL);
            this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                           usrSvtData->fields.svtId,
                                           0LL);
            if ( v32 )
            {
              *(_DWORD *)(v32 + 16) = (_DWORD)this;
              *(_DWORD *)(v32 + 20) = v29->fields.m_CachedPtr;
              *(_DWORD *)(v32 + 24) = v29->fields.m_CachedPtr;
              if ( tdInfo )
              {
                *(_DWORD *)(v32 + 28) = tdInfo->fields.lv;
                v39 = *(System_Int32_array ***)&v29->fields.type;
                *(_QWORD *)(v32 + 32) = v39;
                sub_B0D840((BattleServantConfConponent_o *)(v32 + 32), v39, v33, v34, v35, v36, v37, v38);
                combineRootComponent = (System_Int32_array **)v29->fields.combineRootComponent;
                *(_QWORD *)(v32 + 40) = combineRootComponent;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v32 + 40),
                  combineRootComponent,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46);
                if ( tdInfo )
                {
                  *(_DWORD *)(v32 + 48) = tdInfo->fields.cardId;
                  *(_DWORD *)(v32 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
                  DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
                  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                  }
                  *(_DWORD *)(v32 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
                  v48 = (System_Int32_array **)tdExplanation;
                  *(_QWORD *)(v32 + 56) = tdExplanation;
                  sub_B0D840((BattleServantConfConponent_o *)(v32 + 56), v48, v49, v50, v51, v52, v53, v54);
                  v55 = *(_DWORD *)(v32 + 16);
                  v56 = *(_DWORD *)(v32 + 72);
                  *(_WORD *)(v32 + 64) = 0;
                  *(_DWORD *)(v32 + 68) = NpCombineControl__GetLimitCountForSingle(v57, v55, v56, v58);
                  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_SvtUseNpData__TypeInfo, v59, v60);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v24,
                    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
                  if ( v24 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v24,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
                    return (System_Collections_Generic_List_SvtUseNpData__o *)v24;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B0D97C(this);
  }
  v22 = EnableEntity;
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, 0, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(v4, usrSvtData, tdInfo, v22, v23);
}


SetLevelUpData_o *__fastcall NpCombineControl__GetTargetData(NpCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.lvUpData;
}


int32_t __fastcall NpCombineControl__GetTutorialOpenType(NpCombineControl_o *this, const MethodInfo *method)
{
  return 39;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__InitDispCombineInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *currentInfoLb; // x0
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v8; // x20
  int v9; // s0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( (byte_4215053 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v3);
    sub_B0D8A4(&StringLiteral_9295/*"NEED_QP_INFO"*/, v4);
    byte_4215053 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  currentInfoLb = (UILabel_o *)this->fields.maxLvStatusInfo;
  if ( !currentInfoLb )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_15;
  UILabel__set_text(needQpLb, (System_String_o *)currentInfoLb, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  currentInfoLb = (UILabel_o *)System_Int32__ToString((int)this + 316, 0LL);
  if ( !qpLb )
    goto LABEL_15;
  UILabel__set_text(qpLb, (System_String_o *)currentInfoLb, 0LL);
  v8 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !v8
    || (UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL),
        NpCombineControl__SetHaveQpInfo(this, v13),
        NpCombineControl__SetSelectMaterialEnable(this, v14),
        (currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0LL),
        (currentInfoLb = (UILabel_o *)this->fields.arrowInfo) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(currentInfoLb);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v15);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v16);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v23; // x0
  _BOOL8 v24; // x0
  MenuListControl_o *v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4215051 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, v8);
    byte_4215051 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v9);
  NpCombineControl__InitDispCombineInfo(this, v10);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v11);
  SelfUserGame = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  klass = (int32_t)SelfUserGame[4].klass;
  SelfUserGame = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  this->fields.userQP = klass;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_26;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)SelfUserGame, 0LL);
  SelfUserGame = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb;
  if ( !SelfUserGame )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_26;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v23 && v23->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      v23,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v24 )
        break;
      if ( !v26.fields.current )
        sub_B0D97C(v24);
      if ( HIDWORD(v26.fields.current[1].klass) == 10 )
      {
        v25 = this->fields.menuListCtr;
        if ( !v25 )
          sub_B0D97C(0LL);
        MenuListControl__setBannerIcon(
          v25,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v26.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_26:
    sub_B0D97C(SelfUserGame);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
}


void __fastcall NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4215050 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215050 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  NpCombineControl__InitInfo(this, v4);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (BattleServantConfConponent_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B0D840(p_charaGraph, 0LL, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_14:
    sub_B0D97C(helpBtn);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_421506B & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_B0D8A4(
                                   &Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___,
                                   method);
    byte_421506B = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_B0D97C(this);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.currentInfoLb;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  int32_t childCount; // w0
  int32_t v8; // w20
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_421506C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&delte);
    byte_421506C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(7, 0LL);
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_16;
  currentMoveIdx = this->fields.currentMoveIdx;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  v8 = childCount ? ((currentMoveIdx + delte) % childCount + childCount) % childCount : 0;
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  this->fields.currentMoveIdx = v8;
  if ( !wrapContent
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wrapContent, 1, 0LL),
        (wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent) == 0LL)
    || (centerChild = this->fields.centerChild,
        (wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL)) == 0LL)
    || (wrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)wrapContent,
                                                   v8,
                                                   0LL),
        !centerChild) )
  {
LABEL_16:
    sub_B0D97C(wrapContent);
  }
  UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4215063 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4215063 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v14,
    selectMtUsrSvtIdList,
    (const MethodInfo_2FB6CF4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v15,
            (const MethodInfo_2110DA4 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v15.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded(Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v15,
    (const MethodInfo_2110DA0 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_B0D97C(selectMtUsrSvtIdList);
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
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4215066 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215066 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v27; // x0
  _BOOL8 v28; // x0
  MenuListControl_o *v29; // x0
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4215052 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v9);
    sub_B0D8A4(&StringLiteral_9295/*"NEED_QP_INFO"*/, v10);
    byte_4215052 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v12);
  helpBtn = this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  helpBtn = this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  helpBtn = this->fields.maxLvStatusInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_38;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v14);
  NpCombineControl__SetSelectMaterialEnable(this, v15);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v16);
  NpCombineControl__ResetScrollView(this, v17);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_38;
  v18 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v18;
  if ( !helpBtn )
    goto LABEL_38;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  helpBtn = this->fields.baseSelectInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_38;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v27 && v27->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v39,
      v27,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v40 = v39;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v28 )
        break;
      if ( !v40.fields.current )
        sub_B0D97C(v28);
      if ( HIDWORD(v40.fields.current[1].klass) == 10 )
      {
        v29 = this->fields.menuListCtr;
        if ( !v29 )
          sub_B0D97C(0LL);
        MenuListControl__setBannerIcon(
          v29,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v40.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  helpBtn = this->fields.baseLvInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (BattleServantConfConponent_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B0D840(p_charaGraph, 0LL, v33, v34, v35, v36, v37, v38);
      return;
    }
LABEL_38:
    sub_B0D97C(helpBtn);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421506A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_421506A = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0LL);
  scrollView = this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_13;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)scrollView, 0LL);
  scrollView = this->fields.wrapContent;
  if ( !scrollView )
    goto LABEL_13;
  UIWrapContent__resetScroll((UIWrapContent_o *)scrollView, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL);
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_13;
  v8.fields.y = *((float *)scrollView + 82);
  v8.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v8, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (v9.fields.x = 0.0,
        v9.fields.y = 0.0,
        v9.fields.z = 0.0,
        UIScrollView__set_currentMomentum((UIScrollView_o *)scrollView, v9, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(scrollView);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  NpCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_24036516; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4215056 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (NpCombineControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215056 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL);
  if ( !v12 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v12,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v15 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = (NpCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24036516 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24036516(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v15,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_24036516;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_24036516,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B0D97C(this);
  UICharaGraphTexture__SetCharacter_35242912((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UIIconLabel_o *iconLabel; // x21
  int32_t lv; // w22
  UnityEngine_GameObject_o *LevelMax; // x0
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_String_array *v30; // x21
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t v33; // w20
  int32_t v34; // w22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array *battleLoadList; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x21
  __int64 v52; // x0
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4215055 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, usrSvtEn);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&Method_NpCombineControl_SetCombineNpList__, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    byte_4215055 = 1;
  }
  if ( usrSvtEn )
  {
    v11 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v54.fields.currentCryptoKey = v11;
    *(_QWORD *)&v54.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.baseSvtId = v12;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)usrSvtEn,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_21;
    UIIconLabel__Set_41076120(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v22);
    this->fields.svtNpDataList = SvtNpData;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.svtNpDataList,
      (System_Int32_array **)SvtNpData,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = (struct System_String_array *)sub_B0D8BC(string___TypeInfo, 1LL);
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(usrSvtEn->fields.svtId, 0LL);
    v32 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
    v33 = v31;
    *(_QWORD *)&v55.fields.currentCryptoKey = v32;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v33, v34, 0LL);
    if ( !v30 )
LABEL_21:
      sub_B0D97C(LevelMax);
    v41 = (System_Int32_array **)LevelMax;
    if ( LevelMax )
    {
      LevelMax = (UnityEngine_GameObject_o *)sub_B0D964(LevelMax, v30->obj.klass->_1.element_class);
      if ( !LevelMax )
      {
        v53 = sub_B0D99C(0LL);
        sub_B0D948(v53, 0LL);
      }
    }
    if ( !v30->max_length )
    {
      v52 = sub_B0D9A8(LevelMax);
      sub_B0D948(v52, 0LL);
    }
    v30->m_Items[0] = (System_String_o *)v41;
    sub_B0D840((BattleServantConfConponent_o *)v30->m_Items, v41, v35, v36, v37, v38, v39, v40);
    this->fields.battleLoadList = v30;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.battleLoadList,
      (System_Int32_array **)v30,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    battleLoadList = this->fields.battleLoadList;
    v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_29522920(battleLoadList, v51, 1, 0LL);
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
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  UnityEngine_Object_o *centerChild; // x20
  UnityEngine_Component_o *wrapContent; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *v25; // x8
  bool isScrollNpInfo; // w1
  unsigned int v27; // w22
  struct UICenterOnChild_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  SpringPanel_OnFinished_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int v38; // w24
  unsigned int i; // w23
  _BOOL8 v40; // x0
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_Object_o *Object; // x21
  System_String_o *v46; // x0
  ServantNpInfoIconComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v48; // x1
  int v49; // w8
  struct UIWrapContent_o *v50; // x8
  const MethodInfo *currentMoveIdx; // x1
  const MethodInfo *v52; // x2
  _BYTE v53[28]; // [xsp+0h] [xbp-90h] BYREF
  int v54; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-70h] BYREF
  int32_t idx; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_421505B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v9);
    sub_B0D8A4(&Method_NpCombineControl_OnCenterOnChildFinished__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&SpringPanel_OnFinished_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_4563/*"D3"*/, v13);
    byte_421505B = 1;
  }
  idx = 0;
  memset(&v55, 0, sizeof(v55));
  v54 = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL) )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !wrapContent )
        goto LABEL_47;
      wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !wrapContent )
        goto LABEL_47;
      v17 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)wrapContent,
              (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v17;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.centerChild,
        (System_Int32_array **)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    wrapContent = (UnityEngine_Component_o *)this->fields.defaultNpInfo;
    if ( wrapContent )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0LL);
      v25 = this->fields.svtNpDataList;
      if ( v25 )
      {
        if ( v25->fields._size >= 2 )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
          this->fields.isScrollNpInfo = 1;
          if ( !wrapContent )
            goto LABEL_47;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
          v28 = this->fields.centerChild;
          v31 = (SpringPanel_OnFinished_o *)sub_B0D974(SpringPanel_OnFinished_TypeInfo, v29, v30);
          SpringPanel_OnFinished___ctor(
            v31,
            (Il2CppObject *)this,
            Method_NpCombineControl_OnCenterOnChildFinished__,
            0LL);
          if ( !v28 )
            goto LABEL_47;
          v28->fields.onFinished = v31;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v28->fields.onFinished,
            (System_Int32_array **)v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          v27 = 2;
          isScrollNpInfo = this->fields.isScrollNpInfo;
        }
        else
        {
          isScrollNpInfo = 0;
          v27 = 1;
          this->fields.isScrollNpInfo = 0;
        }
        NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v24);
        idx = 0;
        v38 = 0;
        for ( i = 0; i < v27; ++i )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
          if ( !wrapContent )
            goto LABEL_47;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v53,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)wrapContent,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
          v55 = *(System_Collections_Generic_List_Enumerator_T__o *)v53;
          while ( 1 )
          {
            v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v55,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
            if ( !v40 )
              break;
            current = v55.fields.current;
            if ( !v55.fields.current )
              sub_B0D97C(v40);
            if ( ((__int64)v55.fields.current[1].monitor & 0x80000000) == 0 )
            {
              v42 = (UnityEngine_Component_o *)this->fields.wrapContent;
              if ( !v42 )
                sub_B0D97C(0LL);
              npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
              transform = UnityEngine_Component__get_transform(v42, 0LL);
              Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 npCombineInfoPrefab,
                                                 transform,
                                                 0LL,
                                                 0LL);
              v46 = System_Int32__ToString_38473032((int32_t)&idx, (System_String_o *)StringLiteral_4563/*"D3"*/, 0LL);
              if ( !Object )
                sub_B0D97C(v46);
              UnityEngine_Object__set_name(Object, v46, 0LL);
              Component_srcLineSprite = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)Object,
                                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
              if ( !Component_srcLineSprite )
                sub_B0D97C(0LL);
              ServantNpInfoIconComponent__SetNpInfo(
                Component_srcLineSprite,
                this->fields.baseUserServantEntity,
                idx++,
                (SvtUseNpData_o *)current,
                0LL);
            }
          }
          *(_DWORD *)&v53[4 * v38 + 24] = 280;
          v38 = ++v54;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v55,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
          if ( v38 )
          {
            v49 = v38 - 1;
            if ( *(_DWORD *)&v53[4 * v38 + 20] == 280 )
            {
              --v38;
              v54 = v49;
            }
          }
        }
        if ( this->fields.isScrollNpInfo )
        {
          v50 = this->fields.wrapContent;
          if ( !v50 )
            goto LABEL_47;
          *(_DWORD *)&v50->fields.cullContent = 700;
          wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !wrapContent )
            goto LABEL_47;
          UIWrapContent__WrapContent((UIWrapContent_o *)wrapContent, 0LL);
        }
        NpCombineControl__ResetScrollView(this, v48);
        currentMoveIdx = (const MethodInfo *)(unsigned int)this->fields.currentMoveIdx;
        if ( (int)currentMoveIdx < 1 )
        {
LABEL_45:
          this->fields.isSelectBase = 1;
          NpCombineControl__SetSelectMaterialEnable(this, currentMoveIdx);
          NpCombineControl__ChangeTargetInfo(this, 0, v52);
          return;
        }
        wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
        if ( wrapContent )
        {
          UIWrapContent__setScrollPos((UIWrapContent_o *)wrapContent, (int32_t)currentMoveIdx, 0LL);
          goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_B0D97C(wrapContent);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetEnableCombineBtn(
        NpCombineControl_o *this,
        bool isCombine,
        const MethodInfo *method)
{
  UIWidget_o *combineBtn; // x0
  int v6; // s0

  combineBtn = (UIWidget_o *)this->fields.combineBtn;
  if ( !combineBtn
    || ((((void (__fastcall *)(UIWidget_o *, bool, Il2CppMethodPointer))combineBtn->klass->vtable._5_get_isAnchoredVertically.method)(
           combineBtn,
           isCombine,
           combineBtn->klass->vtable._6_get_canBeAnchored.methodPtr),
         !isCombine)
      ? (*(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL))
      : (*(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL)),
        (combineBtn = (UIWidget_o *)this->fields.combineBtnTxt) == 0LL) )
  {
    sub_B0D97C(combineBtn);
  }
  UIWidget__set_color(combineBtn, *(UnityEngine_Color_o *)&v6, 0LL);
}


void __fastcall NpCombineControl__SetEnabledNpInfoScroll(
        NpCombineControl_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20

  if ( this->fields.isScrollNpInfo || !enabled )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0LL),
          (scrollView = (UnityEngine_Behaviour_o *)this->fields.wrapContent) == 0LL) )
    {
      sub_B0D97C(scrollView);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v9; // x19
  int v10; // s0
  int v14; // s0
  int v18; // s0
  int v22; // s0

  if ( (byte_4215062 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4215062 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v9 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v10, 0LL);
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      if ( v5 )
      {
        UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v14, 0LL);
        if ( v9 )
        {
          UnityEngine_Behaviour__set_enabled(v9, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v9, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(combineBtnBg);
  }
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v18, 0LL);
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !v5 )
    goto LABEL_14;
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v22, 0LL);
  if ( !v9 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
}


void __fastcall NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20

  if ( (byte_4215054 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_4215054 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_38473032((int)this + 312, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B0D97C(SelfUserGame);
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
  UnityEngine_Component_o *materialGrid; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v23; // x23
  System_Collections_Generic_List_long__o *v24; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  unsigned __int64 v32; // x22
  signed __int64 v33; // x26
  struct System_Int64_array *v34; // x8
  int64_t v35; // x23
  UnityEngine_GameObject_o *materialSvtPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v38; // x24
  UnityEngine_Transform_o *v39; // x25
  int v40; // s0
  UnityEngine_Transform_o *v43; // x25
  int v44; // s0
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  NpMaterialSvtInfo_ClickDelegate_o *v50; // x25
  UserServantEntity_o *v51; // x2
  const MethodInfo *v52; // x5
  const MethodInfo *v53; // x3
  int32_t v54; // w21
  const MethodInfo *v55; // x3
  struct System_Int64_array *v56; // x22
  __int64 v57; // x8
  unsigned __int64 v58; // x23
  int64_t v59; // x20
  const MethodInfo *v60; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  float v65; // s0
  double v66; // d0
  _BOOL8 v67; // x0
  UILabel_o *qpLb; // x22
  int v69; // s0
  struct SetLevelUpData_o *v73; // x8
  struct SetLevelUpData_o *v74; // x8
  UIWidget_o *v75; // x20
  int v76; // s0
  const MethodInfo *v80; // x1
  int v81; // s0
  __int64 v85; // x0
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_421505E & 1) == 0 )
  {
    sub_B0D8A4(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, data);
    sub_B0D8A4(&Method_CombineMenuControl_OnClickMaterial__, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v18);
    byte_421505E = 1;
  }
  tmpTargetLv = 0;
  memset(&v87, 0, sizeof(v87));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_59;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_59;
  v23 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v24 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v20, v21);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectMtUsrSvtIdList,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v23 < 1 )
    return;
  v32 = 0LL;
  v33 = (int)v23;
  do
  {
    v34 = data->fields.materialUsrSvtIdList;
    if ( !v34 )
      goto LABEL_59;
    if ( v32 >= v34->max_length )
    {
LABEL_60:
      v85 = sub_B0D9A8(materialGrid);
      sub_B0D948(v85, 0LL);
    }
    materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_59;
    v35 = v34->m_Items[v32];
    materialSvtPrefab = this->fields.materialSvtPrefab;
    transform = UnityEngine_Component__get_transform(materialGrid, 0LL);
    materialGrid = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                (BaseMonoBehaviour_o *)this,
                                                materialSvtPrefab,
                                                transform,
                                                0LL,
                                                0LL);
    if ( !materialGrid )
      goto LABEL_59;
    v38 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)materialGrid,
                                                0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_59;
    v39 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.materialGrid,
                                                0LL);
    if ( !materialGrid )
      goto LABEL_59;
    *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v39 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
    v43 = UnityEngine_GameObject__get_transform(v38, 0LL);
    *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v43 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
    Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v38,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v50 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_B0D974(NpMaterialSvtInfo_ClickDelegate_TypeInfo, v48, v49);
    NpMaterialSvtInfo_ClickDelegate___ctor(v50, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_59;
    NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, v32, v51, v35, v50, v52);
    materialGrid = (UnityEngine_Component_o *)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_59;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)materialGrid,
      v35,
      (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
    ++v32;
  }
  while ( (__int64)v32 < v33 );
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_59;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = (UnityEngine_Component_o *)NpCombineControl__GetNpLv(
                                              this->fields.baseUserServantEntity,
                                              data->fields.materialUsrSvtIdList,
                                              &tmpTargetLv,
                                              v53);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_59;
  v54 = (int)materialGrid;
  materialGrid = (UnityEngine_Component_o *)UserServantEntity__IsExceedMaxLv(
                                              this->fields.baseUserServantEntity,
                                              tmpTargetLv,
                                              0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = (unsigned __int8)materialGrid & 1;
  v56 = data->fields.materialUsrSvtIdList;
  if ( !v56 )
    goto LABEL_59;
  v57 = *(_QWORD *)&v56->max_length;
  if ( (int)v57 >= 1 )
  {
    v58 = 0LL;
    while ( 1 )
    {
      if ( v58 >= (unsigned int)v57 )
        goto LABEL_60;
      v59 = v56->m_Items[v58];
      materialGrid = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)materialGrid,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)materialGrid,
                                                  v59,
                                                  (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_59;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = (UnityEngine_Component_o *)NpCombineControl__CheckConfirm(v59, v60);
      if ( ((unsigned __int8)materialGrid & 1) != 0 )
        break;
      LODWORD(v57) = v56->max_length;
      if ( (__int64)++v58 >= (int)v57 )
        goto LABEL_33;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_33:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_59;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v54, v55);
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v86,
      combineEventList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v87 = v86;
    while ( 1 )
    {
      v67 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v87,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v67 )
        break;
      if ( !v87.fields.current )
        sub_B0D97C(v67);
      if ( HIDWORD(v87.fields.current[1].klass) == 10 )
      {
        v65 = *(float *)&v87.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v65 == INFINITY )
          v66 = -INFINITY;
        else
          v66 = v65;
        *p_spendQpVal = (int)v66;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v87,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (UnityEngine_Component_o *)System_Int32__ToString_38473032(
                                              (int)this + 316,
                                              (System_String_o *)StringLiteral_9289/*"N0"*/,
                                              0LL);
  if ( !qpLb )
    goto LABEL_59;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  *(UnityEngine_Color_o *)&v69 = this->fields.haveQpVal >= this->fields.spendQpVal
                               ? UnityEngine_Color__get_white(0LL)
                               : UnityEngine_Color__get_red(0LL);
  materialGrid = (UnityEngine_Component_o *)this->fields.qpLb;
  if ( !materialGrid )
    goto LABEL_59;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v69, 0LL);
  v73 = this->fields.lvUpData;
  if ( !v73 )
    goto LABEL_59;
  v73->fields.nextLv = v54;
  v74 = this->fields.lvUpData;
  if ( !v74 )
    goto LABEL_59;
  v74->fields.spendQp = this->fields.spendQpVal;
  v75 = (UIWidget_o *)this->fields.qpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_white(0LL);
    if ( v75 )
    {
      UIWidget__set_color(v75, *(UnityEngine_Color_o *)&v81, 0LL);
      this->fields._IsExeCombine_k__BackingField = 1;
      goto LABEL_57;
    }
LABEL_59:
    sub_B0D97C(materialGrid);
  }
  *(UnityEngine_Color_o *)&v76 = UnityEngine_Color__get_red(0LL);
  if ( !v75 )
    goto LABEL_59;
  UIWidget__set_color(v75, *(UnityEngine_Color_o *)&v76, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
LABEL_57:
  NpCombineControl__SetExeBtnState(this, v80);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetNpCombineNullData(NpCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *qpLb; // x20
  System_String_o *v4; // x0
  UIWidget_o *v5; // x20
  int v6; // s0
  const MethodInfo *v10; // x1

  NpCombineControl__DestroyMaterialGrid(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  v4 = System_Int32__ToString((int)this + 316, 0LL);
  if ( !qpLb
    || (UILabel__set_text(qpLb, v4, 0LL),
        v5 = (UIWidget_o *)this->fields.qpLb,
        *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL),
        !v5) )
  {
    sub_B0D97C(v4);
  }
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v6, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v10);
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
    sub_B0D97C(preSelectBaseLb);
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
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v13; // x21
  float v14; // s4
  float v15; // s5
  float v16; // s6
  __int64 *v17; // x8
  System_String_o *v18; // x1
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215065 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_7057/*"HEADER_MSG_NPUP_MATERIAL"*/, v6);
    sub_B0D8A4(&StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/, v7);
    sub_B0D8A4(&StringLiteral_7301/*"INFO_MSG_NPUP_BASE"*/, v8);
    sub_B0D8A4(&StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4215065 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v20.fields.g = 0.87891;
  v20.fields.b = 0.98828;
  v13 = (UIWidget_o *)Component_WebViewObject;
  v20.fields.r = 0.0;
  *(_QWORD *)&v19.fields.r = 0LL;
  *(_QWORD *)&v19.fields.b = 0LL;
  UnityEngine_Color___ctor_40757524(v20, v14, v15, v16, (const MethodInfo *)&v19);
  if ( !v13 )
LABEL_29:
    sub_B0D97C(detailInfoLb);
  UIWidget__set_color(v13, v19, 0LL);
  if ( state )
  {
    if ( state == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_7057/*"HEADER_MSG_NPUP_MATERIAL"*/;
    }
    else
    {
      if ( state != 2 )
      {
        v18 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_27;
      }
      if ( this->fields._IsExeCombine_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/;
      }
      else
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v13, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/;
      }
    }
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = &StringLiteral_7301/*"INFO_MSG_NPUP_BASE"*/;
  }
  v18 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
LABEL_27:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)detailInfoLb, v18, 0LL);
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
  __int64 maxLvStatusInfo; // x0
  struct System_Collections_Generic_List_SvtUseNpData__o *v12; // x20
  SvtUseNpData_o *v13; // x26
  int32_t svtUseNpId; // w21
  int32_t svtNpLv; // w20
  __int64 v16; // x22
  __int64 v17; // x22
  DataManager_o *v18; // x23
  int32_t v19; // w24
  __int64 v20; // x22
  UILabel_o *currentInfoLb; // x23
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w23
  UserServantEntity_o *baseUserServantEntity; // x23
  System_Int64_array *v27; // x0
  const MethodInfo *v28; // x3
  SetLevelUpData_o *v29; // x25
  struct SetLevelUpData_o **p_lvUpData; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct SetLevelUpData_o *v58; // x8
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_421505D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v6);
    sub_B0D8A4(&SetLevelUpData_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v9);
    byte_421505D = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList )
  {
    maxLvStatusInfo = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
                        (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    if ( (maxLvStatusInfo & 1) != 0 )
    {
      v12 = this->fields.svtNpDataList;
      if ( !v12 )
        goto LABEL_39;
      if ( !v12->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v13 = v12->fields._items->m_Items[0];
      if ( !v13 )
        goto LABEL_39;
      svtUseNpId = v13->fields.svtUseNpId;
      if ( svtUseNpId >= 1 )
      {
        maxLvStatusInfo = (__int64)this->fields.maxLvStatusInfo;
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        svtNpLv = v13->fields.svtNpLv;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxLvStatusInfo, 0, 0LL);
        v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v17 = **(_QWORD **)(v16 + 192);
        if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AA65A4(v17);
        v18 = **(DataManager_o ***)(v17 + 184);
        if ( !v18 )
          goto LABEL_39;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v18,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        maxLvStatusInfo = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)maxLvStatusInfo,
                                     v13->fields.svtId,
                                     svtUseNpId,
                                     0LL);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        v19 = *(_DWORD *)(maxLvStatusInfo + 48);
        v20 = maxLvStatusInfo;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v18,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        maxLvStatusInfo = (__int64)TreasureDvcLvMaster__GetEntity(
                                     (TreasureDvcLvMaster_o *)maxLvStatusInfo,
                                     svtUseNpId,
                                     svtNpLv,
                                     0LL);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        currentInfoLb = this->fields.currentInfoLb;
        maxLvStatusInfo = (__int64)TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)maxLvStatusInfo, 0LL);
        if ( !currentInfoLb )
          goto LABEL_39;
        UILabel__set_text(currentInfoLb, (System_String_o *)maxLvStatusInfo, 0LL);
        if ( svtNpLv < v19 )
        {
          selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
          NpLv = svtNpLv;
          if ( selectMtUsrSvtIdList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v27 = System_Collections_Generic_List_long___ToArray(
                    selectMtUsrSvtIdList,
                    (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
            NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v27, &tmpTargetLv, v28);
          }
          v29 = (SetLevelUpData_o *)sub_B0D974(SetLevelUpData_TypeInfo, v22, v23);
          SetLevelUpData___ctor(v29, 0LL);
          p_lvUpData = &this->fields.lvUpData;
          this->fields.lvUpData = v29;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.lvUpData,
            (System_Int32_array **)v29,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          lvUpData = this->fields.lvUpData;
          if ( lvUpData )
          {
            lvUpData->fields.currentId = svtUseNpId;
            if ( *p_lvUpData )
            {
              (*p_lvUpData)->fields.currentIndex = 1;
              if ( *p_lvUpData )
              {
                (*p_lvUpData)->fields.realIndex = 0;
                if ( *p_lvUpData )
                {
                  (*p_lvUpData)->fields.isNpAdd = v13->fields.isNpAdd;
                  maxLvStatusInfo = (__int64)*p_lvUpData;
                  if ( *p_lvUpData )
                  {
                    v44 = *(System_Int32_array ***)(v20 + 32);
                    *(_QWORD *)(maxLvStatusInfo + 32) = v44;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)(maxLvStatusInfo + 32),
                      v44,
                      v37,
                      v38,
                      v39,
                      v40,
                      v41,
                      v42);
                    maxLvStatusInfo = (__int64)*p_lvUpData;
                    if ( *p_lvUpData )
                    {
                      v51 = *(System_Int32_array ***)(v20 + 24);
                      *(_QWORD *)(maxLvStatusInfo + 40) = v51;
                      sub_B0D840(
                        (BattleServantConfConponent_o *)(maxLvStatusInfo + 40),
                        v51,
                        v45,
                        v46,
                        v47,
                        v48,
                        v49,
                        v50);
                      if ( *p_lvUpData )
                      {
                        (*p_lvUpData)->fields.currentLv = svtNpLv;
                        if ( *p_lvUpData )
                        {
                          (*p_lvUpData)->fields.nextLv = NpLv;
                          if ( *p_lvUpData )
                          {
                            (*p_lvUpData)->fields.spendQp = this->fields.spendQpVal;
                            v58 = this->fields.lvUpData;
                            if ( v58 )
                            {
                              v58->fields.haveQp = this->fields.userQP;
                              maxLvStatusInfo = (__int64)this->fields.lvUpData;
                              if ( maxLvStatusInfo )
                              {
                                *(_QWORD *)(maxLvStatusInfo + 80) = 0LL;
                                sub_B0D840(
                                  (BattleServantConfConponent_o *)(maxLvStatusInfo + 80),
                                  0LL,
                                  v52,
                                  v53,
                                  v54,
                                  v55,
                                  v56,
                                  v57);
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
          }
LABEL_39:
          sub_B0D97C(maxLvStatusInfo);
        }
        this->fields._IsExeCombine_k__BackingField = 0;
        NpCombineControl__SetExeBtnState(this, v22);
        maxLvStatusInfo = (__int64)this->fields.qpLb;
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        UILabel__set_text((UILabel_o *)maxLvStatusInfo, (System_String_o *)StringLiteral_960/*"0"*/, 0LL);
      }
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