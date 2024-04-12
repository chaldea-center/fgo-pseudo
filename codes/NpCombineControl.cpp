void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall NpCombineControl__ChangeTargetInfo(NpCombineControl_o *this, bool isdecide, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_42B06C3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06C3 = 1;
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
                                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
      {
        sub_B52A5C(Component_srcLineSprite, v5);
      }
      ServantNpInfoIconComponent__setDispSelectMskImg((ServantNpInfoIconComponent_o *)Component_srcLineSprite, 1, 0LL);
    }
    NpCombineControl__SetSvtNpCombineData(this, v5);
  }
}


bool __fastcall NpCombineControl__CheckConfirm(int64_t myUserSvtId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42B06D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B06D0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             myUserSvtId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_25808324(Entity, v6);
}


bool __fastcall NpCombineControl__CheckConfirm_25808324(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
    sub_B52A5C(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= v4 )
      {
        v7 = sub_B52A88(selectUsrSvtEnt);
        sub_B52A28(v7, 0LL);
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
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t currentId; // w21

  v4 = this;
  if ( (byte_42B06CB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    this = (NpCombineControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B06CB = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_B52A5C(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.charaGraphBase);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array *battleLoadList; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B06C7 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06C7 = 1;
  }
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_19;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_19;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  v5 = childCount - 1;
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
                                                 v5,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B52A5C(wrapContent, method);
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
    AssetManager__releaseAssetStorage_30368500(battleLoadList, 0LL);
    this->fields.battleLoadList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.battleLoadList, 0LL, v8, v9, v10, v11, v12, v13);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0

  if ( (byte_42B06C8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06C8 = 1;
  }
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_16;
  materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(materialGrid, 0LL);
  if ( !materialGrid )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)materialGrid, 0LL);
  v5 = childCount - 1;
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
                                                  v5,
                                                  0LL);
      if ( !materialGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(materialGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B52A5C(materialGrid, method);
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
    System_Collections_Generic_List_long___Clear(
      selectMtUsrSvtIdList,
      (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
}


UserServantEntity_o *__fastcall NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v6; // q1
  int64_t v7; // x20
  System_Int32_array **Entity; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_42B06C6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (NpCombineControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B06C6 = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (BattleServantConfConponent_o *)&v2->fields.baseUserServantEntity;
  v3 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_10;
  v6 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v16, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v7,
                                    (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B52920(p_baseUserServantEntity, Entity, v9, v10, v11, v12, v13, v14);
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
  __int64 v10; // x20
  __int64 v11; // x20
  int v12; // w24
  bool v13; // cc
  int v14; // w23
  DataManager_o *v15; // x20
  int32_t v16; // w25
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x22
  int32_t v18; // w21

  if ( (byte_42B06C1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    this = (NpCombineControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B06C1 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AEB684(v11);
  v12 = condLimitCount - 1;
  v13 = index < 1;
  if ( index >= 1 )
    v14 = -1;
  else
    v14 = condLimitCount - 1;
  v15 = **(DataManager_o ***)(v11 + 184);
  if ( v13 )
    v16 = -1;
  else
    v16 = condLimitCount;
  if ( !v15 )
    goto LABEL_32;
  this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v15,
                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
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
  v18 = (int)this;
  if ( (v16 & 0x80000000) == 0 && (_DWORD)this != v16 )
  {
    if ( (int)this < 11 )
      goto LABEL_23;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    this = (NpCombineControl_o *)System_Collections_Generic_HashSet_int___Contains(
                                   CorrespondsCostume,
                                   (int32_t)this,
                                   (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
LABEL_23:
      v18 = v16;
  }
  if ( (v14 & 0x80000000) == 0 && v18 > v14 )
  {
    if ( v18 < 11 )
      goto LABEL_29;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    if ( System_Collections_Generic_HashSet_int___Contains(
           CorrespondsCostume,
           v18,
           (const MethodInfo_24D9CCC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_29:
      v18 = v12;
    }
  }
  this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v15,
                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
LABEL_32:
    sub_B52A5C(this, *(_QWORD *)&svtId);
  return ServantLimitImageMaster__GetServantLimitCountSealAfter((ServantLimitImageMaster_o *)this, svtId, v18, 0LL);
}


int32_t __fastcall NpCombineControl__GetLimitCountForSingle(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  __int64 v8; // x21
  __int64 v9; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_42B06C0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B06C0 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AEB684(v9);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v9 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, v6);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  TreasureDvcMaster_o *v13; // x27
  unsigned __int64 v14; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v16; // w25
  __int64 v17; // x22
  __int64 v18; // x26
  DataManager_o *v19; // x26
  int32_t v20; // w0
  struct System_Int32_array *hideCardChara; // x8
  int32_t *p_lastFrameTime; // x9
  int32_t v23; // w20
  int32_t v24; // w22
  TreasureDvcInfo_o *v25; // x19
  bool v26; // w28
  __int64 v27; // x27
  __int64 v28; // x22
  __int64 v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **lookup; // x1
  System_Int32_array **datalist; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t DispLimitCount; // w22
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  NpCombineControl_o *v52; // x0
  const MethodInfo *v53; // x5
  __int64 v55; // x0
  int32_t *p_cardId; // [xsp+8h] [xbp-88h]
  TreasureDvcMaster_o *v57; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // [xsp+18h] [xbp-78h]
  ServantTreasureDeviceAddEntity_o *v59; // [xsp+20h] [xbp-70h]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_42B06BF & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_B52984(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&SvtUseNpData_TypeInfo);
    byte_42B06BF = 1;
  }
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  tdExplanation = 0LL;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AEB684(v11);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v11 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_37;
  v13 = (TreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                                          (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_WarQuestSelectionMaster >= 1 )
  {
    v14 = 0LL;
    p_cardId = &tdInfo->fields.cardId;
    v57 = v13;
    v58 = v8;
    v59 = tdAddEntity;
    while ( 1 )
    {
      treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      if ( v14 >= treasureDeviceIds->max_length )
        goto LABEL_38;
      if ( !usrSvtData )
        break;
      v16 = treasureDeviceIds->m_Items[v14 + 1];
      v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v63.fields.currentCryptoKey = v17;
      *(_QWORD *)&v63.fields.fakeValue = v18;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                              v63,
                                                              0LL);
      if ( !v13 )
        break;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                                              v13,
                                                              (int32_t)MasterData_WarQuestSelectionMaster,
                                                              v16,
                                                              0LL);
      if ( !tdInfo )
        break;
      v19 = MasterData_WarQuestSelectionMaster;
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
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(usrSvtData->fields.svtId, 0LL);
      MasterData_WarQuestSelectionMaster = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v20, v16, 0LL);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_lastFrameTime = (int32_t *)&MasterData_WarQuestSelectionMaster->fields.lastFrameTime;
      if ( !MasterData_WarQuestSelectionMaster )
        p_lastFrameTime = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v14 >= hideCardChara->max_length )
      {
LABEL_38:
        v55 = sub_B52A88(MasterData_WarQuestSelectionMaster);
        sub_B52A28(v55, 0LL);
      }
      v23 = *p_lastFrameTime;
      v24 = hideCardChara->m_Items[v14 + 1];
      v25 = tdInfo;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v26 = System_Convert__ToBoolean_42680832(v24, 0LL);
      v27 = sub_B52A54(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v27, 0LL);
      v29 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v64.fields.currentCryptoKey = v29;
      *(_QWORD *)&v64.fields.fakeValue = v28;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                              v64,
                                                              0LL);
      if ( !v27 )
        break;
      *(_DWORD *)(v27 + 16) = (_DWORD)MasterData_WarQuestSelectionMaster;
      *(_DWORD *)(v27 + 20) = v16;
      tdInfo = v25;
      *(_DWORD *)(v27 + 24) = v25->fields.id;
      *(_DWORD *)(v27 + 28) = v25->fields.lv;
      lookup = (System_Int32_array **)v19->fields.lookup;
      *(_QWORD *)(v27 + 32) = lookup;
      sub_B52920((BattleServantConfConponent_o *)(v27 + 32), lookup, v30, v31, v32, v33, v34, v35);
      datalist = (System_Int32_array **)v19->fields.datalist;
      *(_QWORD *)(v27 + 40) = datalist;
      sub_B52920((BattleServantConfConponent_o *)(v27 + 40), datalist, v38, v39, v40, v41, v42, v43);
      *(_DWORD *)(v27 + 48) = v23;
      *(_DWORD *)(v27 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      *(_DWORD *)(v27 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v45 = (System_Int32_array **)tdExplanation;
      *(_QWORD *)(v27 + 56) = tdExplanation;
      sub_B52920((BattleServantConfConponent_o *)(v27 + 56), v45, v46, v47, v48, v49, v50, v51);
      tdAddEntity = v59;
      *(_BYTE *)(v27 + 65) = 1;
      *(_BYTE *)(v27 + 64) = v26;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                                              v52,
                                                              *(_DWORD *)(v27 + 16),
                                                              *(_DWORD *)(v27 + 72),
                                                              v59->fields.condLimitCount,
                                                              v14,
                                                              v53);
      v8 = v58;
      *(_DWORD *)(v27 + 68) = (_DWORD)MasterData_WarQuestSelectionMaster;
      if ( !v58 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v58,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
      ++v14;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v59->fields.treasureDeviceIds,
                                                              (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
      v13 = v57;
      if ( (__int64)v14 >= (int)MasterData_WarQuestSelectionMaster )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v8;
    }
LABEL_37:
    sub_B52A5C(MasterData_WarQuestSelectionMaster, v9);
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
  __int64 v13; // x0
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-48h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_42B06CE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseUsrSvtData = (UserServantEntity_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B06CE = 1;
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
    sub_B52A5C(baseUsrSvtData, mtSvtIdList);
  }
  v8 = 0LL;
  do
  {
    if ( v8 >= (unsigned int)v7 )
    {
      v13 = sub_B52A88(baseUsrSvtData);
      sub_B52A28(v13, 0LL);
    }
    v9 = v5->m_Items[v8];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseUsrSvtData,
                       v9,
                       (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_21516452(
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  TreasureDvcLvEntity_o *Entity; // x0

  if ( (byte_42B06CF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B06CF = 1;
  }
  if ( currentLv >= resNpLv )
    return 0;
  v7 = 0;
  do
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_B52A5C(Instance, v9);
    }
    Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, currentId, currentLv, 0LL);
    if ( Entity )
      v7 += Entity->fields.qp;
    ++currentLv;
  }
  while ( currentLv < resNpLv );
  return v7;
}


System_Collections_Generic_List_SvtUseNpData__o *__fastcall NpCombineControl__GetSvtNpData(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  NpCombineControl_o *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x21
  DataManager_o *v7; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x23
  __int64 v10; // x24
  ServantTreasureDeviceAddMaster_o *v11; // x22
  int32_t v12; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v14; // x22
  const MethodInfo *v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  WarQuestSelectionMaster_o *v17; // x0
  __int64 v18; // x21
  __int64 v19; // x22
  TreasureDvcMaster_o *v20; // x20
  NpCombineControl_o *v21; // x21
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_Int32_array **combineRootComponent; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t DispLimitCount; // w19
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  NpCombineControl_o *v47; // x0
  const MethodInfo *v48; // x3
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v4 = this;
  if ( (byte_42B06BE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SvtUseNpData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    sub_B52984(&System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    this = (NpCombineControl_o *)sub_B52984(&SvtUseNpData_TypeInfo);
    byte_42B06BE = 1;
  }
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  if ( !usrSvtData )
    goto LABEL_31;
  this = (NpCombineControl_o *)UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AEB684(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v7,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v11 = (ServantTreasureDeviceAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v10;
  *(_QWORD *)&v54.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v54, 0LL);
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                 usrSvtData->fields.limitCount,
                                 0LL);
  if ( !v11 )
    goto LABEL_31;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v11, v12, (int32_t)this, 0, 0LL);
  if ( !EnableEntity )
  {
    v17 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            v7,
            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    v20 = (TreasureDvcMaster_o *)v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v55.fields.currentCryptoKey = v19;
    *(_QWORD *)&v55.fields.fakeValue = v18;
    this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v55, 0LL);
    if ( tdInfo )
    {
      if ( v20 )
      {
        this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       v20,
                                       (int32_t)this,
                                       tdInfo->fields.id,
                                       0LL);
        if ( tdInfo )
        {
          v21 = this;
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
            v22 = sub_B52A54(SvtUseNpData_TypeInfo);
            SvtUseNpData___ctor((SvtUseNpData_o *)v22, 0LL);
            this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                           usrSvtData->fields.svtId,
                                           0LL);
            if ( v22 )
            {
              *(_DWORD *)(v22 + 16) = (_DWORD)this;
              *(_DWORD *)(v22 + 20) = v21->fields.m_CachedPtr;
              *(_DWORD *)(v22 + 24) = v21->fields.m_CachedPtr;
              if ( tdInfo )
              {
                *(_DWORD *)(v22 + 28) = tdInfo->fields.lv;
                v29 = *(System_Int32_array ***)&v21->fields.type;
                *(_QWORD *)(v22 + 32) = v29;
                sub_B52920((BattleServantConfConponent_o *)(v22 + 32), v29, v23, v24, v25, v26, v27, v28);
                combineRootComponent = (System_Int32_array **)v21->fields.combineRootComponent;
                *(_QWORD *)(v22 + 40) = combineRootComponent;
                sub_B52920(
                  (BattleServantConfConponent_o *)(v22 + 40),
                  combineRootComponent,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35,
                  v36);
                if ( tdInfo )
                {
                  *(_DWORD *)(v22 + 48) = tdInfo->fields.cardId;
                  *(_DWORD *)(v22 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
                  DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
                  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                  }
                  *(_DWORD *)(v22 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
                  v38 = (System_Int32_array **)tdExplanation;
                  *(_QWORD *)(v22 + 56) = tdExplanation;
                  sub_B52920((BattleServantConfConponent_o *)(v22 + 56), v38, v39, v40, v41, v42, v43, v44);
                  v45 = *(_DWORD *)(v22 + 16);
                  v46 = *(_DWORD *)(v22 + 72);
                  *(_WORD *)(v22 + 64) = 0;
                  *(_DWORD *)(v22 + 68) = NpCombineControl__GetLimitCountForSingle(v47, v45, v46, v48);
                  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v16,
                    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
                  if ( v16 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v16,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
                    return (System_Collections_Generic_List_SvtUseNpData__o *)v16;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B52A5C(this, usrSvtData);
  }
  v14 = EnableEntity;
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, 0, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(v4, usrSvtData, tdInfo, v14, v15);
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
  UILabel_o *currentInfoLb; // x0
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v6; // x20
  int v7; // s0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_42B06BA & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_757/*"-"*/);
    sub_B52984(&StringLiteral_9329/*"NEED_QP_INFO"*/);
    byte_42B06BA = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
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
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_15;
  UILabel__set_text(needQpLb, (System_String_o *)currentInfoLb, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  currentInfoLb = (UILabel_o *)System_Int32__ToString((int)this + 316, 0LL);
  if ( !qpLb )
    goto LABEL_15;
  UILabel__set_text(qpLb, (System_String_o *)currentInfoLb, 0LL);
  v6 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !v6
    || (UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL),
        NpCombineControl__SetHaveQpInfo(this, v11),
        NpCombineControl__SetSelectMaterialEnable(this, v12),
        (currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0LL),
        (currentInfoLb = (UILabel_o *)this->fields.arrowInfo) == 0LL) )
  {
LABEL_15:
    sub_B52A5C(currentInfoLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v13);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v14);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  MenuListControl_o *v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B06B8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8895/*"MSG_PRESELECT_BASE_SVT"*/);
    byte_42B06B8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v3);
  NpCombineControl__InitDispCombineInfo(this, v4);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v5);
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
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8895/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v18 && v18->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      v18,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v19 )
        break;
      if ( !v22.fields.current )
        sub_B52A5C(v19, v20);
      if ( HIDWORD(v22.fields.current[1].klass) == 10 )
      {
        v21 = this->fields.menuListCtr;
        if ( !v21 )
          sub_B52A5C(0LL, v20);
        MenuListControl__setBannerIcon(
          v21,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v22.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_26:
    sub_B52A5C(SelfUserGame, v7);
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

  if ( (byte_42B06B7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B06B7 = 1;
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
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B52920(p_charaGraph, 0LL, v9, v10, v11, v12, v13, v14);
      return;
    }
LABEL_14:
    sub_B52A5C(helpBtn, v3);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_42B06D2 & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    byte_42B06D2 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_B52A5C(this, method);
  }
  v2->fields.currentMoveIdx = (int32_t)this->fields.currentInfoLb;
}


void __fastcall NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  int32_t childCount; // w0
  int32_t v9; // w20
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_42B06D3 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B06D3 = 1;
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
    sub_B52A5C(wrapContent, v5);
  }
  UICenterOnChild__CenterOn_35928848(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
}


void __fastcall NpCombineControl__OnClickExeCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  Il2CppObject *current; // x20
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  UserServantEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B06CA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B06CA = 1;
  }
  memset(&v11, 0, sizeof(v11));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v10,
    selectMtUsrSvtIdList,
    (const MethodInfo_2FE2C10 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v11,
            (const MethodInfo_20101B0 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v11.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v6);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(0LL, v8);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded(Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v11,
    (const MethodInfo_20101AC *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_B52A5C(selectMtUsrSvtIdList, method);
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

  if ( (byte_42B06CD & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B06CD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B52A5C(0LL, v3);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  MenuListControl_o *v23; // x0
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B06B9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_757/*"-"*/);
    sub_B52984(&StringLiteral_9329/*"NEED_QP_INFO"*/);
    byte_42B06B9 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v5);
  helpBtn = this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  helpBtn = this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
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
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_38;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v7);
  NpCombineControl__SetSelectMaterialEnable(this, v8);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v9);
  NpCombineControl__ResetScrollView(this, v10);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_38;
  v11 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v11;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v20 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v20 && v20->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      v20,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v34 = v33;
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v21 )
        break;
      if ( !v34.fields.current )
        sub_B52A5C(v21, v22);
      if ( HIDWORD(v34.fields.current[1].klass) == 10 )
      {
        v23 = this->fields.menuListCtr;
        if ( !v23 )
          sub_B52A5C(0LL, v22);
        MenuListControl__setBannerIcon(
          v23,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v34.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B52920(p_charaGraph, 0LL, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_38:
    sub_B52A5C(helpBtn, v3);
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

  if ( (byte_42B06D1 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_42B06D1 = 1;
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
                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B52A5C(scrollView, method);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  NpCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_24904472; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_42B06BD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (NpCombineControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B06BD = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
  if ( !v9 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v9,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v12 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = (NpCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24904472 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_24904472(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v12,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_24904472;
    sub_B52920(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_24904472,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B52A5C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_35944152((UICharaGraphTexture_o *)this, usrSvtData, v12, 0LL, 0, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtNpInfo(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UIIconLabel_o *iconLabel; // x21
  int32_t lv; // w22
  UnityEngine_GameObject_o *LevelMax; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_array *v26; // x21
  int32_t v27; // w0
  __int64 v28; // x8
  int32_t v29; // w20
  int32_t v30; // w22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array *battleLoadList; // x20
  System_Action_o *v45; // x21
  __int64 v46; // x0
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_42B06BC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_NpCombineControl_SetCombineNpList__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    byte_42B06BC = 1;
  }
  if ( usrSvtEn )
  {
    v6 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v48.fields.currentCryptoKey = v6;
    *(_QWORD *)&v48.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v48, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.baseSvtId = v7;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)usrSvtEn,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_21;
    UIIconLabel__Set_41786400(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v18);
    this->fields.svtNpDataList = SvtNpData;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.svtNpDataList,
      (System_Int32_array **)SvtNpData,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = (struct System_String_array *)sub_B5299C(string___TypeInfo, 1LL);
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(usrSvtEn->fields.svtId, 0LL);
    v28 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v49.fields.fakeValue = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
    v29 = v27;
    *(_QWORD *)&v49.fields.currentCryptoKey = v28;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v49, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v29, v30, 0LL);
    if ( !v26 )
LABEL_21:
      sub_B52A5C(LevelMax, v17);
    v37 = (System_Int32_array **)LevelMax;
    if ( LevelMax )
    {
      LevelMax = (UnityEngine_GameObject_o *)sub_B52A44(LevelMax, v26->obj.klass->_1.element_class);
      if ( !LevelMax )
      {
        v47 = sub_B52A7C(0LL);
        sub_B52A28(v47, 0LL);
      }
    }
    if ( !v26->max_length )
    {
      v46 = sub_B52A88(LevelMax);
      sub_B52A28(v46, 0LL);
    }
    v26->m_Items[0] = (System_String_o *)v37;
    sub_B52920((BattleServantConfConponent_o *)v26->m_Items, v37, v31, v32, v33, v34, v35, v36);
    this->fields.battleLoadList = v26;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.battleLoadList,
      (System_Int32_array **)v26,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    battleLoadList = this->fields.battleLoadList;
    v45 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_30366456(battleLoadList, v45, 1, 0LL);
  }
}


void __fastcall NpCombineControl__SetCombineNpList(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  UnityEngine_Object_o *centerChild; // x20
  const MethodInfo *currentMoveIdx; // x1
  UnityEngine_Component_o *wrapContent; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *v15; // x8
  bool isScrollNpInfo; // w1
  unsigned int v17; // w22
  struct UICenterOnChild_o *v18; // x20
  SpringPanel_OnFinished_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w24
  unsigned int i; // w23
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_Object_o *Object; // x21
  System_String_o *v35; // x0
  ServantNpInfoIconComponent_o *Component_srcLineSprite; // x0
  __int64 v37; // x1
  int v38; // w8
  struct UIWrapContent_o *v39; // x8
  const MethodInfo *v40; // x2
  _BYTE v41[28]; // [xsp+0h] [xbp-90h] BYREF
  int v42; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF
  int32_t idx; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_42B06C2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__);
    sub_B52984(&Method_NpCombineControl_OnCenterOnChildFinished__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SpringPanel_OnFinished_TypeInfo);
    sub_B52984(&StringLiteral_4587/*"D3"*/);
    byte_42B06C2 = 1;
  }
  idx = 0;
  memset(&v43, 0, sizeof(v43));
  v42 = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
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
      v7 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
             (UnityEngine_GameObject_o *)wrapContent,
             (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v7;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.centerChild,
        (System_Int32_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    wrapContent = (UnityEngine_Component_o *)this->fields.defaultNpInfo;
    if ( wrapContent )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0LL);
      v15 = this->fields.svtNpDataList;
      if ( v15 )
      {
        if ( v15->fields._size >= 2 )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
          this->fields.isScrollNpInfo = 1;
          if ( !wrapContent )
            goto LABEL_47;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
          v18 = this->fields.centerChild;
          v19 = (SpringPanel_OnFinished_o *)sub_B52A54(SpringPanel_OnFinished_TypeInfo);
          SpringPanel_OnFinished___ctor(
            v19,
            (Il2CppObject *)this,
            Method_NpCombineControl_OnCenterOnChildFinished__,
            0LL);
          if ( !v18 )
            goto LABEL_47;
          v18->fields.onFinished = v19;
          sub_B52920(
            (BattleServantConfConponent_o *)&v18->fields.onFinished,
            (System_Int32_array **)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v17 = 2;
          isScrollNpInfo = this->fields.isScrollNpInfo;
        }
        else
        {
          isScrollNpInfo = 0;
          v17 = 1;
          this->fields.isScrollNpInfo = 0;
        }
        NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v14);
        idx = 0;
        v26 = 0;
        for ( i = 0; i < v17; ++i )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
          if ( !wrapContent )
            goto LABEL_47;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v41,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)wrapContent,
            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
          v43 = *(System_Collections_Generic_List_Enumerator_T__o *)v41;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v43,
                    (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
            if ( !v28 )
              break;
            current = v43.fields.current;
            if ( !v43.fields.current )
              sub_B52A5C(v28, v29);
            if ( ((__int64)v43.fields.current[1].monitor & 0x80000000) == 0 )
            {
              v31 = (UnityEngine_Component_o *)this->fields.wrapContent;
              if ( !v31 )
                sub_B52A5C(0LL, v29);
              npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
              transform = UnityEngine_Component__get_transform(v31, 0LL);
              Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 npCombineInfoPrefab,
                                                 transform,
                                                 0LL,
                                                 0LL);
              v35 = System_Int32__ToString_39387012((int32_t)&idx, (System_String_o *)StringLiteral_4587/*"D3"*/, 0LL);
              if ( !Object )
                sub_B52A5C(v35, v35);
              UnityEngine_Object__set_name(Object, v35, 0LL);
              Component_srcLineSprite = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)Object,
                                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
              if ( !Component_srcLineSprite )
                sub_B52A5C(0LL, v37);
              ServantNpInfoIconComponent__SetNpInfo(
                Component_srcLineSprite,
                this->fields.baseUserServantEntity,
                idx++,
                (SvtUseNpData_o *)current,
                0LL);
            }
          }
          *(_DWORD *)&v41[4 * v26 + 24] = 280;
          v26 = ++v42;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v43,
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
          if ( v26 )
          {
            v38 = v26 - 1;
            if ( *(_DWORD *)&v41[4 * v26 + 20] == 280 )
            {
              --v26;
              v42 = v38;
            }
          }
        }
        if ( this->fields.isScrollNpInfo )
        {
          v39 = this->fields.wrapContent;
          if ( !v39 )
            goto LABEL_47;
          *(_DWORD *)&v39->fields.cullContent = 700;
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
          NpCombineControl__ChangeTargetInfo(this, 0, v40);
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
    sub_B52A5C(wrapContent, currentMoveIdx);
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
    sub_B52A5C(combineBtn, isCombine);
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
      sub_B52A5C(scrollView, enabled);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v8; // x19
  int v9; // s0
  int v13; // s0
  int v17; // s0
  int v21; // s0

  if ( (byte_42B06C9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_42B06C9 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v8 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v9, 0LL);
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
      if ( v4 )
      {
        UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v13, 0LL);
        if ( v8 )
        {
          UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v8, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B52A5C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v17, 0LL);
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !v4 )
    goto LABEL_14;
  UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v21, 0LL);
  if ( !v8 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_42B06BB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B06BB = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39387012((int)this + 312, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B52A5C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetNpCombineData(
        NpCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Component_o *materialGrid; // x0
  __int64 v6; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v8; // x23
  System_Collections_Generic_List_long__o *v9; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  unsigned __int64 v17; // x22
  signed __int64 v18; // x26
  struct System_Int64_array *v19; // x8
  int64_t v20; // x23
  UnityEngine_GameObject_o *materialSvtPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v23; // x24
  UnityEngine_Transform_o *v24; // x25
  int v25; // s0
  UnityEngine_Transform_o *v28; // x25
  int v29; // s0
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x24
  NpMaterialSvtInfo_ClickDelegate_o *v33; // x25
  UserServantEntity_o *v34; // x2
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x3
  int32_t v37; // w21
  const MethodInfo *v38; // x3
  struct System_Int64_array *v39; // x22
  __int64 v40; // x8
  unsigned __int64 v41; // x23
  int64_t v42; // x20
  const MethodInfo *v43; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  float v48; // s0
  double v49; // d0
  _BOOL8 v50; // x0
  __int64 v51; // x1
  UILabel_o *qpLb; // x22
  int v53; // s0
  struct SetLevelUpData_o *v57; // x8
  struct SetLevelUpData_o *v58; // x8
  UIWidget_o *v59; // x20
  int v60; // s0
  const MethodInfo *v64; // x1
  int v65; // s0
  __int64 v69; // x0
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_42B06C5 & 1) == 0 )
  {
    sub_B52984(&NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_B52984(&Method_CombineMenuControl_OnClickMaterial__);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B06C5 = 1;
  }
  tmpTargetLv = 0;
  memset(&v71, 0, sizeof(v71));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_59;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_59;
  v8 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v9 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.selectMtUsrSvtIdList,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v8 < 1 )
    return;
  v17 = 0LL;
  v18 = (int)v8;
  do
  {
    v19 = data->fields.materialUsrSvtIdList;
    if ( !v19 )
      goto LABEL_59;
    if ( v17 >= v19->max_length )
    {
LABEL_60:
      v69 = sub_B52A88(materialGrid);
      sub_B52A28(v69, 0LL);
    }
    materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_59;
    v20 = v19->m_Items[v17];
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
    v23 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)materialGrid,
                                                0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_59;
    v24 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.materialGrid,
                                                0LL);
    if ( !materialGrid )
      goto LABEL_59;
    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v24 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
    v28 = UnityEngine_GameObject__get_transform(v23, 0LL);
    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v28 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
    Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v23,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v33 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_B52A54(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(v33, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_59;
    NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, v17, v34, v20, v33, v35);
    materialGrid = (UnityEngine_Component_o *)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_59;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)materialGrid,
      v20,
      (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
    ++v17;
  }
  while ( (__int64)v17 < v18 );
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_59;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = (UnityEngine_Component_o *)NpCombineControl__GetNpLv(
                                              this->fields.baseUserServantEntity,
                                              data->fields.materialUsrSvtIdList,
                                              &tmpTargetLv,
                                              v36);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_59;
  v37 = (int)materialGrid;
  materialGrid = (UnityEngine_Component_o *)UserServantEntity__IsExceedMaxLv(
                                              this->fields.baseUserServantEntity,
                                              tmpTargetLv,
                                              0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = (unsigned __int8)materialGrid & 1;
  v39 = data->fields.materialUsrSvtIdList;
  if ( !v39 )
    goto LABEL_59;
  v40 = *(_QWORD *)&v39->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0LL;
    while ( 1 )
    {
      if ( v41 >= (unsigned int)v40 )
        goto LABEL_60;
      v42 = v39->m_Items[v41];
      materialGrid = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)materialGrid,
                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)materialGrid,
                                                  v42,
                                                  (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_59;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = (UnityEngine_Component_o *)NpCombineControl__CheckConfirm(v42, v43);
      if ( ((unsigned __int8)materialGrid & 1) != 0 )
        break;
      LODWORD(v40) = v39->max_length;
      if ( (__int64)++v41 >= (int)v40 )
        goto LABEL_33;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_33:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_59;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v37, v38);
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v70,
      combineEventList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v71 = v70;
    while ( 1 )
    {
      v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v71,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v50 )
        break;
      if ( !v71.fields.current )
        sub_B52A5C(v50, v51);
      if ( HIDWORD(v71.fields.current[1].klass) == 10 )
      {
        v48 = *(float *)&v71.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v48 == INFINITY )
          v49 = -INFINITY;
        else
          v49 = v48;
        *p_spendQpVal = (int)v49;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v71,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (UnityEngine_Component_o *)System_Int32__ToString_39387012(
                                              (int)this + 316,
                                              (System_String_o *)StringLiteral_9323/*"N0"*/,
                                              0LL);
  if ( !qpLb )
    goto LABEL_59;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  *(UnityEngine_Color_o *)&v53 = this->fields.haveQpVal >= this->fields.spendQpVal
                               ? UnityEngine_Color__get_white(0LL)
                               : UnityEngine_Color__get_red(0LL);
  materialGrid = (UnityEngine_Component_o *)this->fields.qpLb;
  if ( !materialGrid )
    goto LABEL_59;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v53, 0LL);
  v57 = this->fields.lvUpData;
  if ( !v57 )
    goto LABEL_59;
  v57->fields.nextLv = v37;
  v58 = this->fields.lvUpData;
  if ( !v58 )
    goto LABEL_59;
  v58->fields.spendQp = this->fields.spendQpVal;
  v59 = (UIWidget_o *)this->fields.qpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
    if ( v59 )
    {
      UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v65, 0LL);
      this->fields._IsExeCombine_k__BackingField = 1;
      goto LABEL_57;
    }
LABEL_59:
    sub_B52A5C(materialGrid, v6);
  }
  *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_red(0LL);
  if ( !v59 )
    goto LABEL_59;
  UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
LABEL_57:
  NpCombineControl__SetExeBtnState(this, v64);
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
    sub_B52A5C(v4, v5);
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
    sub_B52A5C(preSelectBaseLb, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v7; // x21
  float v8; // s4
  float v9; // s5
  float v10; // s6
  __int64 *v11; // x8
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_42B06CC & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_7084/*"HEADER_MSG_NPUP_MATERIAL"*/);
    sub_B52984(&StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B52984(&StringLiteral_7327/*"INFO_MSG_NPUP_BASE"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B06CC = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v13.fields.g = 0.87891;
  v13.fields.b = 0.98828;
  v7 = (UIWidget_o *)Component_WebViewObject;
  v13.fields.r = 0.0;
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  UnityEngine_Color___ctor_41463668(v13, v8, v9, v10, (const MethodInfo *)&v12);
  if ( !v7 )
LABEL_29:
    sub_B52A5C(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v7, v12, 0LL);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_7084/*"HEADER_MSG_NPUP_MATERIAL"*/;
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
        v11 = &StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/;
      }
      else
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v7, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v11 = &StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/;
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
    v11 = &StringLiteral_7327/*"INFO_MSG_NPUP_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v11, 0LL);
LABEL_27:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall NpCombineControl__SetSvtNpCombineData(NpCombineControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 maxLvStatusInfo; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v6; // x20
  SvtUseNpData_o *v7; // x26
  int32_t svtUseNpId; // w21
  int32_t svtNpLv; // w20
  __int64 v10; // x22
  __int64 v11; // x22
  DataManager_o *v12; // x23
  int32_t v13; // w24
  __int64 v14; // x22
  UILabel_o *currentInfoLb; // x23
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w23
  UserServantEntity_o *baseUserServantEntity; // x23
  System_Int64_array *v20; // x0
  const MethodInfo *v21; // x3
  SetLevelUpData_o *v22; // x25
  struct SetLevelUpData_o **p_lvUpData; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct SetLevelUpData_o *v51; // x8
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42B06C4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
    sub_B52984(&SetLevelUpData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42B06C4 = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList )
  {
    maxLvStatusInfo = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
                        (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    if ( (maxLvStatusInfo & 1) != 0 )
    {
      v6 = this->fields.svtNpDataList;
      if ( !v6 )
        goto LABEL_39;
      if ( !v6->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v7 = v6->fields._items->m_Items[0];
      if ( !v7 )
        goto LABEL_39;
      svtUseNpId = v7->fields.svtUseNpId;
      if ( svtUseNpId >= 1 )
      {
        maxLvStatusInfo = (__int64)this->fields.maxLvStatusInfo;
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        svtNpLv = v7->fields.svtNpLv;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxLvStatusInfo, 0, 0LL);
        v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v11 = **(_QWORD **)(v10 + 192);
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AEB684(v11);
        v12 = **(DataManager_o ***)(v11 + 184);
        if ( !v12 )
          goto LABEL_39;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v12,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        maxLvStatusInfo = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)maxLvStatusInfo,
                                     v7->fields.svtId,
                                     svtUseNpId,
                                     0LL);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        v13 = *(_DWORD *)(maxLvStatusInfo + 48);
        v14 = maxLvStatusInfo;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v12,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
        if ( svtNpLv < v13 )
        {
          selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
          NpLv = svtNpLv;
          if ( selectMtUsrSvtIdList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v20 = System_Collections_Generic_List_long___ToArray(
                    selectMtUsrSvtIdList,
                    (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
            NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v20, &tmpTargetLv, v21);
          }
          v22 = (SetLevelUpData_o *)sub_B52A54(SetLevelUpData_TypeInfo);
          SetLevelUpData___ctor(v22, 0LL);
          p_lvUpData = &this->fields.lvUpData;
          this->fields.lvUpData = v22;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.lvUpData,
            (System_Int32_array **)v22,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
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
                  (*p_lvUpData)->fields.isNpAdd = v7->fields.isNpAdd;
                  maxLvStatusInfo = (__int64)*p_lvUpData;
                  if ( *p_lvUpData )
                  {
                    v37 = *(System_Int32_array ***)(v14 + 32);
                    *(_QWORD *)(maxLvStatusInfo + 32) = v37;
                    sub_B52920(
                      (BattleServantConfConponent_o *)(maxLvStatusInfo + 32),
                      v37,
                      v30,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35);
                    maxLvStatusInfo = (__int64)*p_lvUpData;
                    if ( *p_lvUpData )
                    {
                      v44 = *(System_Int32_array ***)(v14 + 24);
                      *(_QWORD *)(maxLvStatusInfo + 40) = v44;
                      sub_B52920(
                        (BattleServantConfConponent_o *)(maxLvStatusInfo + 40),
                        v44,
                        v38,
                        v39,
                        v40,
                        v41,
                        v42,
                        v43);
                      if ( *p_lvUpData )
                      {
                        (*p_lvUpData)->fields.currentLv = svtNpLv;
                        if ( *p_lvUpData )
                        {
                          (*p_lvUpData)->fields.nextLv = NpLv;
                          if ( *p_lvUpData )
                          {
                            (*p_lvUpData)->fields.spendQp = this->fields.spendQpVal;
                            v51 = this->fields.lvUpData;
                            if ( v51 )
                            {
                              v51->fields.haveQp = this->fields.userQP;
                              maxLvStatusInfo = (__int64)this->fields.lvUpData;
                              if ( maxLvStatusInfo )
                              {
                                *(_QWORD *)(maxLvStatusInfo + 80) = 0LL;
                                sub_B52920(
                                  (BattleServantConfConponent_o *)(maxLvStatusInfo + 80),
                                  0LL,
                                  v45,
                                  v46,
                                  v47,
                                  v48,
                                  v49,
                                  v50);
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
          sub_B52A5C(maxLvStatusInfo, v5);
        }
        this->fields._IsExeCombine_k__BackingField = 0;
        NpCombineControl__SetExeBtnState(this, v16);
        maxLvStatusInfo = (__int64)this->fields.qpLb;
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        UILabel__set_text((UILabel_o *)maxLvStatusInfo, (System_String_o *)StringLiteral_969/*"0"*/, 0LL);
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