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

  if ( (byte_4188459 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, isdecide);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4188459 = 1;
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
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
      {
        sub_B2C434(Component_srcLineSprite, v6);
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
  __int64 v6; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4188466 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188466 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             myUserSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_26337500(Entity, v8);
}


bool __fastcall NpCombineControl__CheckConfirm_26337500(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
    sub_B2C434(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= v4 )
      {
        v7 = sub_B2C460(selectUsrSvtEnt);
        sub_B2C400(v7, 0LL);
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
  if ( (byte_4188461 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, resData);
    this = (NpCombineControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188461 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_B2C434(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.charaGraphBase);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array *battleLoadList; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_418845D & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418845D = 1;
  }
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_19;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_19;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  v6 = childCount - 1;
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
                                                 v6,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B2C434(wrapContent, method);
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
    AssetManager__releaseAssetStorage_30161248(battleLoadList, 0LL);
    this->fields.battleLoadList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.battleLoadList, 0LL, v9, v10, v11, v12, v13, v14);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0

  if ( (byte_418845E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418845E = 1;
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B2C434(materialGrid, method);
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
    System_Collections_Generic_List_long___Clear(
      selectMtUsrSvtIdList,
      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
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
  if ( (byte_418845C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (NpCombineControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418845C = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v19, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v10,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B2C2F8(p_baseUserServantEntity, Entity, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4188457 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v12);
    this = (NpCombineControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    byte_4188457 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AC505C(v15);
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
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
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
                                   (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
           (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_29:
      v22 = v16;
    }
  }
  this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v19,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
LABEL_32:
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  __int64 v8; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  __int64 v10; // x21
  __int64 v11; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4188456 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4188456 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AC505C(v11);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v11 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, v8);
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
  __int64 v18; // x1
  __int64 v19; // x22
  __int64 v20; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  TreasureDvcMaster_o *v22; // x27
  unsigned __int64 v23; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v25; // w25
  __int64 v26; // x22
  __int64 v27; // x26
  DataManager_o *v28; // x26
  int32_t v29; // w0
  struct System_Int32_array *hideCardChara; // x8
  int32_t *p_lastFrameTime; // x9
  int32_t v32; // w20
  int32_t v33; // w22
  TreasureDvcInfo_o *v34; // x19
  bool v35; // w28
  __int64 v36; // x27
  __int64 v37; // x22
  __int64 v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **lookup; // x1
  System_Int32_array **datalist; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t DispLimitCount; // w22
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  NpCombineControl_o *v61; // x0
  const MethodInfo *v62; // x5
  __int64 v64; // x0
  int32_t *p_cardId; // [xsp+8h] [xbp-88h]
  TreasureDvcMaster_o *v66; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // [xsp+18h] [xbp-78h]
  ServantTreasureDeviceAddEntity_o *v68; // [xsp+20h] [xbp-70h]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4188455 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, usrSvtData);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B2C35C(&SvtUseNpData_TypeInfo, v16);
    byte_4188455 = 1;
  }
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  tdExplanation = 0LL;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AC505C(v20);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v20 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_37;
  v22 = (TreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                                          (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_WarQuestSelectionMaster >= 1 )
  {
    v23 = 0LL;
    p_cardId = &tdInfo->fields.cardId;
    v66 = v22;
    v67 = v17;
    v68 = tdAddEntity;
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
      v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v72.fields.currentCryptoKey = v26;
      *(_QWORD *)&v72.fields.fakeValue = v27;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                              v72,
                                                              0LL);
      if ( !v22 )
        break;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                                              v22,
                                                              (int32_t)MasterData_WarQuestSelectionMaster,
                                                              v25,
                                                              0LL);
      if ( !tdInfo )
        break;
      v28 = MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_WarQuestSelectionMaster,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        tdInfo->fields.lv,
        0LL);
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(usrSvtData->fields.svtId, 0LL);
      MasterData_WarQuestSelectionMaster = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v29, v25, 0LL);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_lastFrameTime = (int32_t *)&MasterData_WarQuestSelectionMaster->fields.lastFrameTime;
      if ( !MasterData_WarQuestSelectionMaster )
        p_lastFrameTime = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v23 >= hideCardChara->max_length )
      {
LABEL_38:
        v64 = sub_B2C460(MasterData_WarQuestSelectionMaster);
        sub_B2C400(v64, 0LL);
      }
      v32 = *p_lastFrameTime;
      v33 = hideCardChara->m_Items[v23 + 1];
      v34 = tdInfo;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v35 = System_Convert__ToBoolean_42122836(v33, 0LL);
      v36 = sub_B2C42C(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v36, 0LL);
      v38 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v73.fields.currentCryptoKey = v38;
      *(_QWORD *)&v73.fields.fakeValue = v37;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                              v73,
                                                              0LL);
      if ( !v36 )
        break;
      *(_DWORD *)(v36 + 16) = (_DWORD)MasterData_WarQuestSelectionMaster;
      *(_DWORD *)(v36 + 20) = v25;
      tdInfo = v34;
      *(_DWORD *)(v36 + 24) = v34->fields.id;
      *(_DWORD *)(v36 + 28) = v34->fields.lv;
      lookup = (System_Int32_array **)v28->fields.lookup;
      *(_QWORD *)(v36 + 32) = lookup;
      sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 32), lookup, v39, v40, v41, v42, v43, v44);
      datalist = (System_Int32_array **)v28->fields.datalist;
      *(_QWORD *)(v36 + 40) = datalist;
      sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 40), datalist, v47, v48, v49, v50, v51, v52);
      *(_DWORD *)(v36 + 48) = v32;
      *(_DWORD *)(v36 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      *(_DWORD *)(v36 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v54 = (System_Int32_array **)tdExplanation;
      *(_QWORD *)(v36 + 56) = tdExplanation;
      sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 56), v54, v55, v56, v57, v58, v59, v60);
      tdAddEntity = v68;
      *(_BYTE *)(v36 + 65) = 1;
      *(_BYTE *)(v36 + 64) = v35;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                                              v61,
                                                              *(_DWORD *)(v36 + 16),
                                                              *(_DWORD *)(v36 + 72),
                                                              v68->fields.condLimitCount,
                                                              v23,
                                                              v62);
      v17 = v67;
      *(_DWORD *)(v36 + 68) = (_DWORD)MasterData_WarQuestSelectionMaster;
      if ( !v67 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v67,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
      ++v23;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v68->fields.treasureDeviceIds,
                                                              (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
      v22 = v66;
      if ( (__int64)v23 >= (int)MasterData_WarQuestSelectionMaster )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v17;
    }
LABEL_37:
    sub_B2C434(MasterData_WarQuestSelectionMaster, v18);
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
  __int64 v15; // x0
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-48h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_4188464 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, mtSvtIdList);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    baseUsrSvtData = (UserServantEntity_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4188464 = 1;
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
    sub_B2C434(baseUsrSvtData, mtSvtIdList);
  }
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v9 )
    {
      v15 = sub_B2C460(baseUsrSvtData);
      sub_B2C400(v15, 0LL);
    }
    v11 = v5->m_Items[v10];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseUsrSvtData,
                       v11,
                       (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_21659764(
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  TreasureDvcLvEntity_o *Entity; // x0

  v5 = currentLv;
  if ( (byte_4188465 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&currentLv);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188465 = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v8 = 0;
  do
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v10);
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
  __int64 v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_Int32_array **combineRootComponent; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t DispLimitCount; // w19
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w1
  int32_t v54; // w2
  NpCombineControl_o *v55; // x0
  const MethodInfo *v56; // x3
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v4 = this;
  if ( (byte_4188454 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, usrSvtData);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    this = (NpCombineControl_o *)sub_B2C35C(&SvtUseNpData_TypeInfo, v12);
    byte_4188454 = 1;
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
    this = (NpCombineControl_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AC505C(v14);
  v15 = **(DataManager_o ***)(v14 + 184);
  if ( !v15 )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v15,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v19 = (ServantTreasureDeviceAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v18;
  *(_QWORD *)&v62.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62, 0LL);
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                 usrSvtData->fields.limitCount,
                                 0LL);
  if ( !v19 )
    goto LABEL_31;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v19, v20, (int32_t)this, 0, 0LL);
  if ( !EnableEntity )
  {
    v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            v15,
            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    v28 = (TreasureDvcMaster_o *)v25;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = v27;
    *(_QWORD *)&v63.fields.fakeValue = v26;
    this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63, 0LL);
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
            v30 = sub_B2C42C(SvtUseNpData_TypeInfo);
            SvtUseNpData___ctor((SvtUseNpData_o *)v30, 0LL);
            this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                           usrSvtData->fields.svtId,
                                           0LL);
            if ( v30 )
            {
              *(_DWORD *)(v30 + 16) = (_DWORD)this;
              *(_DWORD *)(v30 + 20) = v29->fields.m_CachedPtr;
              *(_DWORD *)(v30 + 24) = v29->fields.m_CachedPtr;
              if ( tdInfo )
              {
                *(_DWORD *)(v30 + 28) = tdInfo->fields.lv;
                v37 = *(System_Int32_array ***)&v29->fields.type;
                *(_QWORD *)(v30 + 32) = v37;
                sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 32), v37, v31, v32, v33, v34, v35, v36);
                combineRootComponent = (System_Int32_array **)v29->fields.combineRootComponent;
                *(_QWORD *)(v30 + 40) = combineRootComponent;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v30 + 40),
                  combineRootComponent,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44);
                if ( tdInfo )
                {
                  *(_DWORD *)(v30 + 48) = tdInfo->fields.cardId;
                  *(_DWORD *)(v30 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
                  DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
                  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                  }
                  *(_DWORD *)(v30 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
                  v46 = (System_Int32_array **)tdExplanation;
                  *(_QWORD *)(v30 + 56) = tdExplanation;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 56), v46, v47, v48, v49, v50, v51, v52);
                  v53 = *(_DWORD *)(v30 + 16);
                  v54 = *(_DWORD *)(v30 + 72);
                  *(_WORD *)(v30 + 64) = 0;
                  *(_DWORD *)(v30 + 68) = NpCombineControl__GetLimitCountForSingle(v55, v53, v54, v56);
                  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v24,
                    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
                  if ( v24 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v24,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
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
    sub_B2C434(this, usrSvtData);
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

  if ( (byte_4188450 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v3);
    sub_B2C35C(&StringLiteral_9272/*"NEED_QP_INFO"*/, v4);
    byte_4188450 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
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
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NEED_QP_INFO"*/, 0LL);
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
    sub_B2C434(currentInfoLb, method);
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
  __int64 v13; // x1
  int32_t klass; // w8
  UILabel_o *preSelectBaseLb; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  MenuListControl_o *v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418844E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_8841/*"MSG_PRESELECT_BASE_SVT"*/, v8);
    byte_418844E = 1;
  }
  memset(&v28, 0, sizeof(v28));
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
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8841/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v24 && v24->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v28,
      v24,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v25 )
        break;
      if ( !v28.fields.current )
        sub_B2C434(v25, v26);
      if ( HIDWORD(v28.fields.current[1].klass) == 10 )
      {
        v27 = this->fields.menuListCtr;
        if ( !v27 )
          sub_B2C434(0LL, v26);
        MenuListControl__setBannerIcon(
          v27,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v28.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_26:
    sub_B2C434(SelfUserGame, v13);
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
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_418844D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418844D = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  NpCombineControl__InitInfo(this, v5);
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B2C2F8(p_charaGraph, 0LL, v9, v10, v11, v12, v13, v14);
      return;
    }
LABEL_14:
    sub_B2C434(helpBtn, v3);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_4188468 & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_B2C35C(
                                   &Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___,
                                   method);
    byte_4188468 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_B2C434(this, method);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.currentInfoLb;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  int32_t childCount; // w0
  int32_t v9; // w20
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_4188469 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&delte);
    byte_4188469 = 1;
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
  v9 = childCount ? ((currentMoveIdx + delte) % childCount + childCount) % childCount : 0;
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  this->fields.currentMoveIdx = v9;
  if ( !wrapContent
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)wrapContent, 1, 0LL),
        (wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent) == 0LL)
    || (centerChild = this->fields.centerChild,
        (wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL)) == 0LL)
    || (wrapContent = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)wrapContent,
                                                   v9,
                                                   0LL),
        !centerChild) )
  {
LABEL_16:
    sub_B2C434(wrapContent, v5);
  }
  UICenterOnChild__CenterOn_35704652(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
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
  __int64 v12; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  UserServantEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4188460 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4188460 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v16,
    selectMtUsrSvtIdList,
    (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v17,
            (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v17.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v12);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v14);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded(Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v17,
    (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_B2C434(selectMtUsrSvtIdList, method);
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
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4188463 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188463 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
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
  __int64 v11; // x1
  void *helpBtn; // x0
  const MethodInfo *v13; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  MenuListControl_o *v31; // x0
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418844F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v9);
    sub_B2C35C(&StringLiteral_9272/*"NEED_QP_INFO"*/, v10);
    byte_418844F = 1;
  }
  memset(&v42, 0, sizeof(v42));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v13);
  helpBtn = this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  helpBtn = this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
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
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_38;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v15);
  NpCombineControl__SetSelectMaterialEnable(this, v16);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v17);
  NpCombineControl__ResetScrollView(this, v18);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_38;
  v19 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v19;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v28 && v28->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      v28,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v42 = v41;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v29 )
        break;
      if ( !v42.fields.current )
        sub_B2C434(v29, v30);
      if ( HIDWORD(v42.fields.current[1].klass) == 10 )
      {
        v31 = this->fields.menuListCtr;
        if ( !v31 )
          sub_B2C434(0LL, v30);
        MenuListControl__setBannerIcon(
          v31,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v42.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B2C2F8(p_charaGraph, 0LL, v35, v36, v37, v38, v39, v40);
      return;
    }
LABEL_38:
    sub_B2C434(helpBtn, v11);
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

  if ( (byte_4188467 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4188467 = 1;
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
                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B2C434(scrollView, method);
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
  System_Int32_array **TexturePrefab_25402508; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4188453 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (NpCombineControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188453 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
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
    TexturePrefab_25402508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25402508(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v15,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_25402508;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_25402508,
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
    sub_B2C434(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_35719956((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
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
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_array *v31; // x21
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t v34; // w20
  int32_t v35; // w22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array *battleLoadList; // x20
  System_Action_o *v50; // x21
  __int64 v51; // x0
  __int64 v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4188452 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usrSvtEn);
    sub_B2C35C(&AssetManager_TypeInfo, v5);
    sub_B2C35C(&Method_NpCombineControl_SetCombineNpList__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v8);
    sub_B2C35C(&string___TypeInfo, v9);
    byte_4188452 = 1;
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
    *(_QWORD *)&v53.fields.currentCryptoKey = v11;
    *(_QWORD *)&v53.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.baseSvtId = v12;
    sub_B2C2F8(
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
    UIIconLabel__Set_41609428(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v23);
    this->fields.svtNpDataList = SvtNpData;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.svtNpDataList,
      (System_Int32_array **)SvtNpData,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = (struct System_String_array *)sub_B2C374(string___TypeInfo, 1LL);
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(usrSvtEn->fields.svtId, 0LL);
    v33 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
    v34 = v32;
    *(_QWORD *)&v54.fields.currentCryptoKey = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v34, v35, 0LL);
    if ( !v31 )
LABEL_21:
      sub_B2C434(LevelMax, v22);
    v42 = (System_Int32_array **)LevelMax;
    if ( LevelMax )
    {
      LevelMax = (UnityEngine_GameObject_o *)sub_B2C41C(LevelMax, v31->obj.klass->_1.element_class);
      if ( !LevelMax )
      {
        v52 = sub_B2C454(0LL);
        sub_B2C400(v52, 0LL);
      }
    }
    if ( !v31->max_length )
    {
      v51 = sub_B2C460(LevelMax);
      sub_B2C400(v51, 0LL);
    }
    v31->m_Items[0] = (System_String_o *)v42;
    sub_B2C2F8((BattleServantConfConponent_o *)v31->m_Items, v42, v36, v37, v38, v39, v40, v41);
    this->fields.battleLoadList = v31;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.battleLoadList,
      (System_Int32_array **)v31,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    battleLoadList = this->fields.battleLoadList;
    v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_30159204(battleLoadList, v50, 1, 0LL);
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
  const MethodInfo *currentMoveIdx; // x1
  UnityEngine_Component_o *wrapContent; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *v26; // x8
  bool isScrollNpInfo; // w1
  unsigned int v28; // w22
  struct UICenterOnChild_o *v29; // x20
  SpringPanel_OnFinished_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // w24
  unsigned int i; // w23
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_Object_o *Object; // x21
  System_String_o *v46; // x0
  ServantNpInfoIconComponent_o *Component_srcLineSprite; // x0
  __int64 v48; // x1
  int v49; // w8
  struct UIWrapContent_o *v50; // x8
  const MethodInfo *v51; // x2
  _BYTE v52[28]; // [xsp+0h] [xbp-90h] BYREF
  int v53; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-70h] BYREF
  int32_t idx; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4188458 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v9);
    sub_B2C35C(&Method_NpCombineControl_OnCenterOnChildFinished__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&SpringPanel_OnFinished_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_4547/*"D3"*/, v13);
    byte_4188458 = 1;
  }
  idx = 0;
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
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
      v18 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)wrapContent,
              (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v18;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.centerChild,
        (System_Int32_array **)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    wrapContent = (UnityEngine_Component_o *)this->fields.defaultNpInfo;
    if ( wrapContent )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0LL);
      v26 = this->fields.svtNpDataList;
      if ( v26 )
      {
        if ( v26->fields._size >= 2 )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
          this->fields.isScrollNpInfo = 1;
          if ( !wrapContent )
            goto LABEL_47;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
          v29 = this->fields.centerChild;
          v30 = (SpringPanel_OnFinished_o *)sub_B2C42C(SpringPanel_OnFinished_TypeInfo);
          SpringPanel_OnFinished___ctor(
            v30,
            (Il2CppObject *)this,
            Method_NpCombineControl_OnCenterOnChildFinished__,
            0LL);
          if ( !v29 )
            goto LABEL_47;
          v29->fields.onFinished = v30;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v29->fields.onFinished,
            (System_Int32_array **)v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          v28 = 2;
          isScrollNpInfo = this->fields.isScrollNpInfo;
        }
        else
        {
          isScrollNpInfo = 0;
          v28 = 1;
          this->fields.isScrollNpInfo = 0;
        }
        NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v25);
        idx = 0;
        v37 = 0;
        for ( i = 0; i < v28; ++i )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
          if ( !wrapContent )
            goto LABEL_47;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v52,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)wrapContent,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
          v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v52;
          while ( 1 )
          {
            v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v54,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
            if ( !v39 )
              break;
            current = v54.fields.current;
            if ( !v54.fields.current )
              sub_B2C434(v39, v40);
            if ( ((__int64)v54.fields.current[1].monitor & 0x80000000) == 0 )
            {
              v42 = (UnityEngine_Component_o *)this->fields.wrapContent;
              if ( !v42 )
                sub_B2C434(0LL, v40);
              npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
              transform = UnityEngine_Component__get_transform(v42, 0LL);
              Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 npCombineInfoPrefab,
                                                 transform,
                                                 0LL,
                                                 0LL);
              v46 = System_Int32__ToString_38381416((int32_t)&idx, (System_String_o *)StringLiteral_4547/*"D3"*/, 0LL);
              if ( !Object )
                sub_B2C434(v46, v46);
              UnityEngine_Object__set_name(Object, v46, 0LL);
              Component_srcLineSprite = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)Object,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
              if ( !Component_srcLineSprite )
                sub_B2C434(0LL, v48);
              ServantNpInfoIconComponent__SetNpInfo(
                Component_srcLineSprite,
                this->fields.baseUserServantEntity,
                idx++,
                (SvtUseNpData_o *)current,
                0LL);
            }
          }
          *(_DWORD *)&v52[4 * v37 + 24] = 280;
          v37 = ++v53;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v54,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
          if ( v37 )
          {
            v49 = v37 - 1;
            if ( *(_DWORD *)&v52[4 * v37 + 20] == 280 )
            {
              --v37;
              v53 = v49;
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
        NpCombineControl__ResetScrollView(this, currentMoveIdx);
        currentMoveIdx = (const MethodInfo *)(unsigned int)this->fields.currentMoveIdx;
        if ( (int)currentMoveIdx < 1 )
        {
LABEL_45:
          this->fields.isSelectBase = 1;
          NpCombineControl__SetSelectMaterialEnable(this, currentMoveIdx);
          NpCombineControl__ChangeTargetInfo(this, 0, v51);
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
    sub_B2C434(wrapContent, currentMoveIdx);
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
    sub_B2C434(combineBtn, isCombine);
  }
  UIWidget__set_color(combineBtn, *(UnityEngine_Color_o *)&v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B2C434(scrollView, enabled);
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

  if ( (byte_418845F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_418845F = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_B2C434(combineBtnBg, method);
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
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4188451 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, method);
    byte_4188451 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_38381416((int)this + 312, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B2C434(SelfUserGame, v4);
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
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v22; // x23
  System_Collections_Generic_List_long__o *v23; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  unsigned __int64 v31; // x22
  signed __int64 v32; // x26
  struct System_Int64_array *v33; // x8
  int64_t v34; // x23
  UnityEngine_GameObject_o *materialSvtPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v37; // x24
  UnityEngine_Transform_o *v38; // x25
  int v39; // s0
  UnityEngine_Transform_o *v42; // x25
  int v43; // s0
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x24
  NpMaterialSvtInfo_ClickDelegate_o *v47; // x25
  UserServantEntity_o *v48; // x2
  const MethodInfo *v49; // x5
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  float v62; // s0
  double v63; // d0
  _BOOL8 v64; // x0
  __int64 v65; // x1
  UILabel_o *qpLb; // x22
  int v67; // s0
  struct SetLevelUpData_o *v71; // x8
  struct SetLevelUpData_o *v72; // x8
  UIWidget_o *v73; // x20
  int v74; // s0
  const MethodInfo *v78; // x1
  int v79; // s0
  __int64 v83; // x0
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_418845B & 1) == 0 )
  {
    sub_B2C35C(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, data);
    sub_B2C35C(&Method_CombineMenuControl_OnClickMaterial__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v18);
    byte_418845B = 1;
  }
  tmpTargetLv = 0;
  memset(&v85, 0, sizeof(v85));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_59;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_59;
  v22 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v23 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectMtUsrSvtIdList,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v22 < 1 )
    return;
  v31 = 0LL;
  v32 = (int)v22;
  do
  {
    v33 = data->fields.materialUsrSvtIdList;
    if ( !v33 )
      goto LABEL_59;
    if ( v31 >= v33->max_length )
    {
LABEL_60:
      v83 = sub_B2C460(materialGrid);
      sub_B2C400(v83, 0LL);
    }
    materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_59;
    v34 = v33->m_Items[v31];
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
    v37 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)materialGrid,
                                                0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_59;
    v38 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.materialGrid,
                                                0LL);
    if ( !materialGrid )
      goto LABEL_59;
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v38 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
    v42 = UnityEngine_GameObject__get_transform(v37, 0LL);
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v42 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
    Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v37,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v47 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_B2C42C(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(v47, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_59;
    NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, v31, v48, v34, v47, v49);
    materialGrid = (UnityEngine_Component_o *)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_59;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)materialGrid,
      v34,
      (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
    ++v31;
  }
  while ( (__int64)v31 < v32 );
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_59;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = (UnityEngine_Component_o *)NpCombineControl__GetNpLv(
                                              this->fields.baseUserServantEntity,
                                              data->fields.materialUsrSvtIdList,
                                              &tmpTargetLv,
                                              v50);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_59;
  v51 = (int)materialGrid;
  materialGrid = (UnityEngine_Component_o *)UserServantEntity__IsExceedMaxLv(
                                              this->fields.baseUserServantEntity,
                                              tmpTargetLv,
                                              0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = (unsigned __int8)materialGrid & 1;
  v53 = data->fields.materialUsrSvtIdList;
  if ( !v53 )
    goto LABEL_59;
  v54 = *(_QWORD *)&v53->max_length;
  if ( (int)v54 >= 1 )
  {
    v55 = 0LL;
    while ( 1 )
    {
      if ( v55 >= (unsigned int)v54 )
        goto LABEL_60;
      v56 = v53->m_Items[v55];
      materialGrid = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)materialGrid,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)materialGrid,
                                                  v56,
                                                  (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_59;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = (UnityEngine_Component_o *)NpCombineControl__CheckConfirm(v56, v57);
      if ( ((unsigned __int8)materialGrid & 1) != 0 )
        break;
      LODWORD(v54) = v53->max_length;
      if ( (__int64)++v55 >= (int)v54 )
        goto LABEL_33;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_33:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_59;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v51, v52);
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v84,
      combineEventList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v85 = v84;
    while ( 1 )
    {
      v64 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v85,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v64 )
        break;
      if ( !v85.fields.current )
        sub_B2C434(v64, v65);
      if ( HIDWORD(v85.fields.current[1].klass) == 10 )
      {
        v62 = *(float *)&v85.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v62 == INFINITY )
          v63 = -INFINITY;
        else
          v63 = v62;
        *p_spendQpVal = (int)v63;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v85,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (UnityEngine_Component_o *)System_Int32__ToString_38381416(
                                              (int)this + 316,
                                              (System_String_o *)StringLiteral_9266/*"N0"*/,
                                              0LL);
  if ( !qpLb )
    goto LABEL_59;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  *(UnityEngine_Color_o *)&v67 = this->fields.haveQpVal >= this->fields.spendQpVal
                               ? UnityEngine_Color__get_white(0LL)
                               : UnityEngine_Color__get_red(0LL);
  materialGrid = (UnityEngine_Component_o *)this->fields.qpLb;
  if ( !materialGrid )
    goto LABEL_59;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v67, 0LL);
  v71 = this->fields.lvUpData;
  if ( !v71 )
    goto LABEL_59;
  v71->fields.nextLv = v51;
  v72 = this->fields.lvUpData;
  if ( !v72 )
    goto LABEL_59;
  v72->fields.spendQp = this->fields.spendQpVal;
  v73 = (UIWidget_o *)this->fields.qpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v79 = UnityEngine_Color__get_white(0LL);
    if ( v73 )
    {
      UIWidget__set_color(v73, *(UnityEngine_Color_o *)&v79, 0LL);
      this->fields._IsExeCombine_k__BackingField = 1;
      goto LABEL_57;
    }
LABEL_59:
    sub_B2C434(materialGrid, v20);
  }
  *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_red(0LL);
  if ( !v73 )
    goto LABEL_59;
  UIWidget__set_color(v73, *(UnityEngine_Color_o *)&v74, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
LABEL_57:
  NpCombineControl__SetExeBtnState(this, v78);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetNpCombineNullData(NpCombineControl_o *this, const MethodInfo *method)
{
  UILabel_o *qpLb; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UIWidget_o *v6; // x20
  int v7; // s0
  const MethodInfo *v11; // x1

  NpCombineControl__DestroyMaterialGrid(this, method);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  v4 = System_Int32__ToString((int)this + 316, 0LL);
  if ( !qpLb
    || (UILabel__set_text(qpLb, v4, 0LL),
        v6 = (UIWidget_o *)this->fields.qpLb,
        *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL),
        !v6) )
  {
    sub_B2C434(v4, v5);
  }
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v11);
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
    sub_B2C434(preSelectBaseLb, method);
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
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v13; // x21
  float v14; // s4
  float v15; // s5
  float v16; // s6
  __int64 *v17; // x8
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4188462 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_7037/*"HEADER_MSG_NPUP_MATERIAL"*/, v6);
    sub_B2C35C(&StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/, v7);
    sub_B2C35C(&StringLiteral_7281/*"INFO_MSG_NPUP_BASE"*/, v8);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4188462 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v19.fields.g = 0.87891;
  v19.fields.b = 0.98828;
  v13 = (UIWidget_o *)Component_WebViewObject;
  v19.fields.r = 0.0;
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  UnityEngine_Color___ctor_40633184(v19, v14, v15, v16, (const MethodInfo *)&v18);
  if ( !v13 )
LABEL_29:
    sub_B2C434(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v13, v18, 0LL);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_7037/*"HEADER_MSG_NPUP_MATERIAL"*/;
    }
    else
    {
      if ( v3 != 2 )
      {
        *(_QWORD *)&state = StringLiteral_1/*""*/;
        goto LABEL_27;
      }
      if ( this->fields._IsExeCombine_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/;
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
        v17 = &StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/;
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
    v17 = &StringLiteral_7281/*"INFO_MSG_NPUP_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v17, 0LL);
LABEL_27:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
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
  __int64 maxLvStatusInfo; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v13; // x20
  SvtUseNpData_o *v14; // x26
  int32_t svtUseNpId; // w21
  int32_t svtNpLv; // w20
  __int64 v17; // x22
  __int64 v18; // x22
  DataManager_o *v19; // x23
  int32_t v20; // w24
  __int64 v21; // x22
  UILabel_o *currentInfoLb; // x23
  const MethodInfo *v23; // x1
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

  if ( (byte_418845A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v6);
    sub_B2C35C(&SetLevelUpData_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v9);
    byte_418845A = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList )
  {
    maxLvStatusInfo = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
                        (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    if ( (maxLvStatusInfo & 1) != 0 )
    {
      v13 = this->fields.svtNpDataList;
      if ( !v13 )
        goto LABEL_40;
      if ( !v13->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v14 = v13->fields._items->m_Items[0];
      if ( !v14 )
        goto LABEL_40;
      svtUseNpId = v14->fields.svtUseNpId;
      if ( svtUseNpId >= 1 )
      {
        maxLvStatusInfo = (__int64)this->fields.maxLvStatusInfo;
        if ( !maxLvStatusInfo )
          goto LABEL_40;
        svtNpLv = v14->fields.svtNpLv;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxLvStatusInfo, 0, 0LL);
        v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v18 = **(_QWORD **)(v17 + 192);
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AC505C(v18);
        v19 = **(DataManager_o ***)(v18 + 184);
        if ( !v19 )
          goto LABEL_40;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v19,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !maxLvStatusInfo )
          goto LABEL_40;
        maxLvStatusInfo = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)maxLvStatusInfo,
                                     v14->fields.svtId,
                                     svtUseNpId,
                                     0LL);
        if ( !maxLvStatusInfo )
          goto LABEL_40;
        v20 = *(_DWORD *)(maxLvStatusInfo + 48);
        v21 = maxLvStatusInfo;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v19,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !maxLvStatusInfo )
          goto LABEL_40;
        maxLvStatusInfo = (__int64)TreasureDvcLvMaster__GetEntity(
                                     (TreasureDvcLvMaster_o *)maxLvStatusInfo,
                                     svtUseNpId,
                                     svtNpLv,
                                     0LL);
        if ( !maxLvStatusInfo )
          goto LABEL_40;
        currentInfoLb = this->fields.currentInfoLb;
        maxLvStatusInfo = (__int64)TreasureDvcLvEntity__getDetail((TreasureDvcLvEntity_o *)maxLvStatusInfo, 0LL);
        if ( !currentInfoLb )
          goto LABEL_40;
        UILabel__set_text(currentInfoLb, (System_String_o *)maxLvStatusInfo, 0LL);
        if ( svtNpLv < v20 )
        {
          selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
          NpLv = svtNpLv;
          if ( selectMtUsrSvtIdList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v27 = System_Collections_Generic_List_long___ToArray(
                    selectMtUsrSvtIdList,
                    (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
            NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v27, &tmpTargetLv, v28);
          }
          v29 = (SetLevelUpData_o *)sub_B2C42C(SetLevelUpData_TypeInfo);
          SetLevelUpData___ctor(v29, 0LL);
          p_lvUpData = &this->fields.lvUpData;
          this->fields.lvUpData = v29;
          sub_B2C2F8(
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
                  (*p_lvUpData)->fields.isNpAdd = v14->fields.isNpAdd;
                  maxLvStatusInfo = (__int64)*p_lvUpData;
                  if ( *p_lvUpData )
                  {
                    v44 = *(System_Int32_array ***)(v21 + 32);
                    *(_QWORD *)(maxLvStatusInfo + 32) = v44;
                    sub_B2C2F8(
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
                      v51 = *(System_Int32_array ***)(v21 + 24);
                      *(_QWORD *)(maxLvStatusInfo + 40) = v51;
                      sub_B2C2F8(
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
                                sub_B2C2F8(
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
LABEL_40:
          sub_B2C434(maxLvStatusInfo, v12);
        }
        this->fields._IsExeCombine_k__BackingField = 0;
        NpCombineControl__SetExeBtnState(this, v23);
        maxLvStatusInfo = (__int64)this->fields.qpLb;
        if ( !maxLvStatusInfo )
          goto LABEL_40;
        UILabel__set_text((UILabel_o *)maxLvStatusInfo, (System_String_o *)StringLiteral_953/*"0"*/, 0LL);
        maxLvStatusInfo = (__int64)this->fields.maxLvStatusInfo;
        if ( !maxLvStatusInfo )
          goto LABEL_40;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxLvStatusInfo, 1, 0LL);
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