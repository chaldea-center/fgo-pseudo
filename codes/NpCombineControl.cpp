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
  UnityEngine_GameObject_o *v7; // x0
  ServantNpInfoIconComponent_o *Component_srcLineSprite; // x0

  if ( (byte_40F9389 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, isdecide);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F9389 = 1;
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
      v7 = this->fields.targetObject;
      if ( !v7
        || (Component_srcLineSprite = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v7,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
      {
        sub_B170D4();
      }
      ServantNpInfoIconComponent__setDispSelectMskImg(Component_srcLineSprite, 1, 0LL);
    }
    NpCombineControl__SetSvtNpCombineData(this, v6);
  }
}


bool __fastcall NpCombineControl__CheckConfirm(int64_t myUserSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v8; // x1

  if ( (byte_40F9396 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F9396 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             myUserSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_23749848(Entity, v8);
}


bool __fastcall NpCombineControl__CheckConfirm_23749848(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
{
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Int32_array *svtSkillLvList; // x8
  int max_length; // w9
  unsigned int v8; // w10

  if ( !selectUsrSvtEnt )
    goto LABEL_17;
  if ( selectUsrSvtEnt->fields.exp > 0
    || selectUsrSvtEnt->fields.skillLv1 > 1
    || selectUsrSvtEnt->fields.skillLv2 > 1
    || selectUsrSvtEnt->fields.skillLv3 > 1 )
  {
    return 1;
  }
  AppendSkillInfo = UserServantEntity__getAppendSkillInfo(selectUsrSvtEnt, 0LL);
  if ( !AppendSkillInfo || (svtSkillLvList = AppendSkillInfo->fields.svtSkillLvList) == 0LL )
LABEL_17:
    sub_B170D4();
  max_length = svtSkillLvList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= max_length )
      {
        sub_B17100(AppendSkillInfo, v4, v5);
        sub_B170A0();
      }
      if ( svtSkillLvList->m_Items[v8 + 1] >= 2 )
        return 1;
    }
    while ( (int)++v8 < max_length );
  }
  if ( selectUsrSvtEnt->fields.adjustAtk > 0 || selectUsrSvtEnt->fields.adjustHp > 0 )
    return 1;
  return selectUsrSvtEnt->fields.treasureDeviceLv1 > 1;
}


bool __fastcall NpCombineControl__CheckTdLvMax(
        NpCombineControl_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t currentId; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F9391 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, resData);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F9391 = 1;
  }
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   currentId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__)) == 0LL
    || !resData )
  {
    sub_B170D4();
  }
  return resData->fields.treasureDeviceLv1 >= Entity->fields.bannerId;
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *wrapContent; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array *battleLoadList; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F938D & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F938D = 1;
  }
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_19;
  transform = UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !transform )
    goto LABEL_19;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v8 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v9 = (UnityEngine_Component_o *)this->fields.wrapContent;
      if ( !v9 )
        break;
      v10 = UnityEngine_Component__get_transform(v9, 0LL);
      if ( !v10 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v10, v8, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
      if ( --v8 < 0 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B170D4();
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
    AssetManager__releaseAssetStorage_29955940(battleLoadList, 0LL);
    this->fields.battleLoadList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.battleLoadList, 0LL, v14, v15, v16, v17, v18, v19);
  }
  NpCombineControl__ResetScrollView(this, v7);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *materialGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0

  if ( (byte_40F938E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F938E = 1;
  }
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_16;
  transform = UnityEngine_Component__get_transform(materialGrid, 0LL);
  if ( !transform )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v8 = (UnityEngine_Component_o *)this->fields.materialGrid;
      if ( !v8 )
        break;
      v9 = UnityEngine_Component__get_transform(v8, 0LL);
      if ( !v9 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v7, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
    System_Collections_Generic_List_long___Clear(
      selectMtUsrSvtIdList,
      (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
}


UserServantEntity_o *__fastcall NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array **Entity; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-30h]

  if ( (byte_40F938C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F938C = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_10;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v21 = v22;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v21, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v10,
                                    (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B16F98(p_baseUserServantEntity, Entity, v14, v15, v16, v17, v18, v19);
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
  ServantTreasureDeviceReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x22
  int LimitCountByImageLimitCostumeIn; // w21
  ServantLimitImageMaster_o *v24; // x0

  if ( (byte_40F9387 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    byte_40F9387 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AAFCFC(v15);
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
  MasterData_WarQuestSelectionMaster = (ServantTreasureDeviceReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 v19,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_32;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         MasterData_WarQuestSelectionMaster,
                         svtId,
                         0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  if ( (v20 & 0x80000000) == 0 && LimitCountByImageLimitCostumeIn != v20 )
  {
    if ( LimitCountByImageLimitCostumeIn < 11 )
      goto LABEL_23;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            CorrespondsCostume,
            LimitCountByImageLimitCostumeIn,
            (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
LABEL_23:
      LimitCountByImageLimitCostumeIn = v20;
  }
  if ( (v18 & 0x80000000) == 0 && LimitCountByImageLimitCostumeIn > v18 )
  {
    if ( LimitCountByImageLimitCostumeIn < 11 )
      goto LABEL_29;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    if ( System_Collections_Generic_HashSet_int___Contains(
           CorrespondsCostume,
           LimitCountByImageLimitCostumeIn,
           (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_29:
      LimitCountByImageLimitCostumeIn = v16;
    }
  }
  v24 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       v19,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !v24 )
LABEL_32:
    sub_B170D4();
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(v24, svtId, LimitCountByImageLimitCostumeIn, 0LL);
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
  DataManager_o *v11; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F9386 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_40F9386 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(v10);
  v11 = **(DataManager_o ***)(v10 + 184);
  if ( !v11
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            v11,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           MasterData_WarQuestSelectionMaster,
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
  ServantTreasureDeviceAddEntity_o *v5; // x19
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
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  __int64 v19; // x22
  __int64 v20; // x22
  DataManager_o *v21; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x28
  ServantTreasureDvcEntity_o *EntityFromIDID; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v29; // w26
  TreasureDvcEntity_o *Entity; // x0
  TreasureDvcEntity_o *v31; // x25
  __int64 v32; // x22
  __int64 v33; // x27
  int32_t v34; // w0
  struct System_Int32_array *hideCardChara; // x8
  int32_t *v36; // x9
  int32_t v37; // w20
  int32_t v38; // w22
  TreasureDvcInfo_o *v39; // x19
  bool v40; // w28
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x27
  __int64 v46; // x22
  __int64 v47; // x23
  int32_t v48; // w0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **ruby; // x1
  System_Int32_array **name; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t DispLimitCount; // w22
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  NpCombineControl_o *v71; // x0
  const MethodInfo *v72; // x5
  int32_t *p_cardId; // [xsp+8h] [xbp-88h]
  DataMasterBase_WarMaster__WarEntity__int__o *v75; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // [xsp+18h] [xbp-78h]
  ServantTreasureDeviceAddEntity_o *v77; // [xsp+20h] [xbp-70h]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  v5 = tdAddEntity;
  v6 = tdInfo;
  if ( (byte_40F9385 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, usrSvtData);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_B16FFC(&SvtUseNpData_TypeInfo, v17);
    byte_40F9385 = 1;
  }
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  tdExplanation = 0LL;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtUseNpData__TypeInfo,
                                                                                                  usrSvtData,
                                                                                                  tdInfo,
                                                                                                  tdAddEntity,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AAFCFC(v20);
  v21 = **(DataManager_o ***)(v20 + 184);
  if ( !v21 )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v21,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !v5 )
    goto LABEL_37;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  EntityFromIDID = (ServantTreasureDvcEntity_o *)System_Linq_Enumerable__Count_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.treasureDeviceIds,
                                                   (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)EntityFromIDID >= 1 )
  {
    v27 = 0LL;
    p_cardId = &v6->fields.cardId;
    v75 = v23;
    v76 = v18;
    v77 = v5;
    while ( 1 )
    {
      treasureDeviceIds = v5->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      if ( v27 >= treasureDeviceIds->max_length )
        goto LABEL_38;
      if ( !v23 )
        break;
      v29 = treasureDeviceIds->m_Items[v27 + 1];
      Entity = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v23,
                                        v29,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !v6 )
        break;
      v31 = Entity;
      if ( !Entity )
        break;
      TreasureDvcEntity__getEffectExplanation(
        Entity,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v6->fields.lv,
        0LL);
      if ( !usrSvtData )
        break;
      v32 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v81.fields.currentCryptoKey = v32;
      *(_QWORD *)&v81.fields.fakeValue = v33;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v81, 0LL);
      EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v34, v29, 0LL);
      hideCardChara = v5->fields.hideCardChara;
      v36 = &EntityFromIDID->fields.cardId;
      if ( !EntityFromIDID )
        v36 = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v27 >= hideCardChara->max_length )
      {
LABEL_38:
        sub_B17100(EntityFromIDID, v25, v26);
        sub_B170A0();
      }
      v37 = *v36;
      v38 = hideCardChara->m_Items[v27 + 1];
      v39 = v6;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v40 = System_Convert__ToBoolean_41737284(v38, 0LL);
      v45 = sub_B170CC(SvtUseNpData_TypeInfo, v41, v42, v43, v44);
      SvtUseNpData___ctor((SvtUseNpData_o *)v45, 0LL);
      v47 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v46 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v82.fields.currentCryptoKey = v47;
      *(_QWORD *)&v82.fields.fakeValue = v46;
      v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
      if ( !v45 )
        break;
      *(_DWORD *)(v45 + 16) = v48;
      *(_DWORD *)(v45 + 20) = v29;
      v6 = v39;
      *(_DWORD *)(v45 + 24) = v39->fields.id;
      *(_DWORD *)(v45 + 28) = v39->fields.lv;
      ruby = (System_Int32_array **)v31->fields.ruby;
      *(_QWORD *)(v45 + 32) = ruby;
      sub_B16F98((BattleServantConfConponent_o *)(v45 + 32), ruby, v49, v50, v51, v52, v53, v54);
      name = (System_Int32_array **)v31->fields.name;
      *(_QWORD *)(v45 + 40) = name;
      sub_B16F98((BattleServantConfConponent_o *)(v45 + 40), name, v57, v58, v59, v60, v61, v62);
      *(_DWORD *)(v45 + 48) = v37;
      *(_DWORD *)(v45 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      *(_DWORD *)(v45 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v64 = (System_Int32_array **)tdExplanation;
      *(_QWORD *)(v45 + 56) = tdExplanation;
      sub_B16F98((BattleServantConfConponent_o *)(v45 + 56), v64, v65, v66, v67, v68, v69, v70);
      v5 = v77;
      *(_BYTE *)(v45 + 65) = 1;
      *(_BYTE *)(v45 + 64) = v40;
      v18 = v76;
      *(_DWORD *)(v45 + 68) = NpCombineControl__GetLimitCountForMulti(
                                v71,
                                *(_DWORD *)(v45 + 16),
                                *(_DWORD *)(v45 + 72),
                                v77->fields.condLimitCount,
                                v27,
                                v72);
      if ( !v76 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v76,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
      ++v27;
      EntityFromIDID = (ServantTreasureDvcEntity_o *)System_Linq_Enumerable__Count_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v77->fields.treasureDeviceIds,
                                                       (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
      v23 = v75;
      if ( (__int64)v27 >= (int)EntityFromIDID )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v18;
    }
LABEL_37:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v18;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v15; // x22
  int32_t treasureDeviceLv1; // w8
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-48h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_40F9394 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, mtSvtIdList);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    baseUsrSvtData = (UserServantEntity_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F9394 = 1;
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
    sub_B170D4();
  }
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v9 )
    {
      sub_B17100(baseUsrSvtData, mtSvtIdList, tmpTargetLv);
      sub_B170A0();
    }
    v11 = v5->m_Items[v10];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_17;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v11,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Entity )
      goto LABEL_17;
    v15 = Entity;
    baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__IsMaterialTd(Entity, 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      treasureDeviceLv1 = v15->fields.treasureDeviceLv1;
      tdMaxLv[1] = treasureDeviceLv1;
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_21453148(
                                                v15,
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
  WebViewManager_o *Instance; // x0
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  TreasureDvcLvEntity_o *Entity; // x0

  v5 = currentLv;
  if ( (byte_40F9395 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&currentLv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9395 = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v8 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = TreasureDvcLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, currentId, v5, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x21
  DataManager_o *v16; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  ServantTreasureDeviceAddMaster_o *v20; // x22
  int32_t v21; // w23
  int32_t v22; // w0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v24; // x22
  const MethodInfo *v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x0
  WarEntity_o *Entity; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x20
  __int64 v34; // x22
  __int64 v35; // x23
  int32_t v36; // w0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  TreasureDvcInfo_o *v43; // x8
  System_Int32_array **name; // x1
  System_Int32_array **age; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t DispLimitCount; // w19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **explanation; // x1
  int32_t v60; // w1
  int32_t v61; // w2
  NpCombineControl_o *v62; // x0
  const MethodInfo *v63; // x3
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_40F9384 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, usrSvtData);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v6);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_B16FFC(&SvtUseNpData_TypeInfo, v13);
    byte_40F9384 = 1;
  }
  tdInfo = 0LL;
  if ( !usrSvtData )
    goto LABEL_31;
  UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AAFCFC(v15);
  v16 = **(DataManager_o ***)(v15 + 184);
  if ( !v16 )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v16,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v20 = (ServantTreasureDeviceAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v19;
  *(_QWORD *)&v70.fields.fakeValue = v18;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v70, 0LL);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(usrSvtData->fields.limitCount, 0LL);
  if ( !v20 )
    goto LABEL_31;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v20, v21, v22, 0, 0LL);
  if ( !EnableEntity )
  {
    v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           v16,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    if ( tdInfo && v27 )
    {
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v27,
                 tdInfo->fields.id,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      v33 = sub_B170CC(SvtUseNpData_TypeInfo, v29, v30, v31, v32);
      SvtUseNpData___ctor((SvtUseNpData_o *)v33, 0LL);
      v35 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v71.fields.currentCryptoKey = v35;
      *(_QWORD *)&v71.fields.fakeValue = v34;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v71, 0LL);
      if ( v33 )
      {
        *(_DWORD *)(v33 + 16) = v36;
        v43 = tdInfo;
        if ( tdInfo )
        {
          *(_DWORD *)(v33 + 20) = tdInfo->fields.id;
          *(_DWORD *)(v33 + 24) = v43->fields.id;
          *(_DWORD *)(v33 + 28) = v43->fields.lv;
          if ( Entity )
          {
            name = (System_Int32_array **)Entity->fields.name;
            *(_QWORD *)(v33 + 32) = name;
            sub_B16F98((BattleServantConfConponent_o *)(v33 + 32), name, v37, v38, v39, v40, v41, v42);
            age = (System_Int32_array **)Entity->fields.age;
            *(_QWORD *)(v33 + 40) = age;
            sub_B16F98((BattleServantConfConponent_o *)(v33 + 40), age, v46, v47, v48, v49, v50, v51);
            if ( tdInfo )
            {
              *(_DWORD *)(v33 + 48) = tdInfo->fields.cardId;
              *(_DWORD *)(v33 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
              DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
              if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ImageLimitCount_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
              }
              *(_DWORD *)(v33 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
              if ( tdInfo )
              {
                explanation = (System_Int32_array **)tdInfo->fields.explanation;
                *(_QWORD *)(v33 + 56) = explanation;
                sub_B16F98((BattleServantConfConponent_o *)(v33 + 56), explanation, v53, v54, v55, v56, v57, v58);
                v60 = *(_DWORD *)(v33 + 16);
                v61 = *(_DWORD *)(v33 + 72);
                *(_WORD *)(v33 + 64) = 0;
                *(_DWORD *)(v33 + 68) = NpCombineControl__GetLimitCountForSingle(v62, v60, v61, v63);
                v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_SvtUseNpData__TypeInfo, v64, v65, v66, v67);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                  v26,
                  (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
                if ( v26 )
                {
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v26,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
                  return (System_Collections_Generic_List_SvtUseNpData__o *)v26;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
  }
  v24 = EnableEntity;
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, 0, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(this, usrSvtData, tdInfo, v24, v25);
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
  UILabel_o *afterInfoLb; // x0
  UnityEngine_GameObject_o *maxLvStatusInfo; // x0
  UILabel_o *needQpLb; // x20
  System_String_o *v9; // x0
  UILabel_o *qpLb; // x20
  System_String_o *v11; // x0
  UIWidget_o *v12; // x20
  int v13; // s0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_o *defaultNpInfo; // x0
  UnityEngine_GameObject_o *arrowInfo; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1

  if ( (byte_40F9380 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_746, v3);
    sub_B16FFC(&StringLiteral_9242, v4);
    byte_40F9380 = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_746, 0LL);
  afterInfoLb = this->fields.afterInfoLb;
  if ( !afterInfoLb )
    goto LABEL_15;
  UILabel__set_text(afterInfoLb, (System_String_o *)StringLiteral_746, 0LL);
  maxLvStatusInfo = this->fields.maxLvStatusInfo;
  if ( !maxLvStatusInfo )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(maxLvStatusInfo, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9242, 0LL);
  if ( !needQpLb )
    goto LABEL_15;
  UILabel__set_text(needQpLb, v9, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  v11 = System_Int32__ToString((int)this + 316, 0LL);
  if ( !qpLb )
    goto LABEL_15;
  UILabel__set_text(qpLb, v11, 0LL);
  v12 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
  if ( !v12
    || (UIWidget__set_color(v12, *(UnityEngine_Color_o *)&v13, 0LL),
        NpCombineControl__SetHaveQpInfo(this, v17),
        NpCombineControl__SetSelectMaterialEnable(this, v18),
        (defaultNpInfo = this->fields.defaultNpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(defaultNpInfo, 1, 0LL), (arrowInfo = this->fields.arrowInfo) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(arrowInfo, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v21);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v22);
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
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w8
  UnityEngine_Component_o *eventNoticeImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v29; // x0
  MenuListControl_o *v30; // x0
  UnityEngine_GameObject_o *baseLvInfo; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F937E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8812, v8);
    byte_40F937E = 1;
  }
  memset(&v32, 0, sizeof(v32));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v9);
  NpCombineControl__InitDispCombineInfo(this, v10);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v11);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_26;
  qp = SelfUserGame->fields.qp;
  eventNoticeImg = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  this->fields.userQP = qp;
  if ( !eventNoticeImg )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(eventNoticeImg, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8812, 0LL);
  if ( !preSelectBaseLb )
    goto LABEL_26;
  UILabel__set_text(preSelectBaseLb, v17, 0LL);
  v18 = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !v18 )
    goto LABEL_26;
  v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
  if ( !v19 )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_26;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v29 && v29->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      v29,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v32.fields.current )
        sub_B170D4();
      if ( HIDWORD(v32.fields.current[1].klass) == 10 )
      {
        v30 = this->fields.menuListCtr;
        if ( !v30 )
          sub_B170D4();
        MenuListControl__setBannerIcon(
          v30,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v32.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  baseLvInfo = this->fields.baseLvInfo;
  if ( !baseLvInfo )
LABEL_26:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(baseLvInfo, 0, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
}


void __fastcall NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F937D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F937D = 1;
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
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( *p_charaGraph )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      *p_charaGraph = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_charaGraph, 0LL, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  struct UICenterOnChild_o *centerChild; // x8
  UnityEngine_GameObject_o *mCenteredObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0

  if ( (byte_40F9398 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, method);
    byte_40F9398 = 1;
  }
  centerChild = this->fields.centerChild;
  if ( !centerChild
    || (mCenteredObject = centerChild->fields.mCenteredObject) == 0LL
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    mCenteredObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_B170D4();
  }
  this->fields.currentMoveIdx = (int32_t)Component_srcLineSprite->fields.mMapCtrl_SpotRoadInfo;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v9; // w20
  UnityEngine_Behaviour_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UICenterOnChild_o *centerChild; // x19
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *Child; // x0

  if ( (byte_40F9399 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&delte);
    byte_40F9399 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(7, 0LL);
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_16;
  currentMoveIdx = this->fields.currentMoveIdx;
  transform = UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !transform )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v9 = childCount ? ((currentMoveIdx + delte) % childCount + childCount) % childCount : 0;
  v10 = (UnityEngine_Behaviour_o *)this->fields.wrapContent;
  this->fields.currentMoveIdx = v9;
  if ( !v10
    || (UnityEngine_Behaviour__set_enabled(v10, 1, 0LL),
        (v11 = (UnityEngine_Component_o *)this->fields.wrapContent) == 0LL)
    || (centerChild = this->fields.centerChild, (v13 = UnityEngine_Component__get_transform(v11, 0LL)) == 0LL)
    || (Child = UnityEngine_Transform__GetChild(v13, v9, 0LL), !centerChild) )
  {
LABEL_16:
    sub_B170D4();
  }
  UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL);
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
  SetRarityDialogControl_o *exeCombineDlg; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F9390 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F9390 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v15,
    selectMtUsrSvtIdList,
    (const MethodInfo_2F172E4 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v16,
            (const MethodInfo_20728A8 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v16.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded(Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v16,
    (const MethodInfo_20728A4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
LABEL_15:
    sub_B170D4();
  SetRarityDialogControl__SetNpCombineInfo(
    exeCombineDlg,
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

  if ( (byte_40F9393 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9393 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
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
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v12; // x1
  UILabel_o *currentInfoLb; // x0
  UILabel_o *afterInfoLb; // x0
  UnityEngine_GameObject_o *maxLvStatusInfo; // x0
  UILabel_o *needQpLb; // x20
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *defaultNpInfo; // x0
  UnityEngine_GameObject_o *arrowInfo; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w8
  UnityEngine_Component_o *eventNoticeImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v37; // x0
  MenuListControl_o *v38; // x0
  UnityEngine_GameObject_o *baseLvInfo; // x0
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F937F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_746, v9);
    sub_B16FFC(&StringLiteral_9242, v10);
    byte_40F937F = 1;
  }
  memset(&v50, 0, sizeof(v50));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v12);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_38;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_746, 0LL);
  afterInfoLb = this->fields.afterInfoLb;
  if ( !afterInfoLb )
    goto LABEL_38;
  UILabel__set_text(afterInfoLb, (System_String_o *)StringLiteral_746, 0LL);
  maxLvStatusInfo = this->fields.maxLvStatusInfo;
  if ( !maxLvStatusInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(maxLvStatusInfo, 0, 0LL);
  needQpLb = this->fields.needQpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9242, 0LL);
  if ( !needQpLb )
    goto LABEL_38;
  UILabel__set_text(needQpLb, v17, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v18);
  NpCombineControl__SetSelectMaterialEnable(this, v19);
  defaultNpInfo = this->fields.defaultNpInfo;
  if ( !defaultNpInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(defaultNpInfo, 1, 0LL);
  arrowInfo = this->fields.arrowInfo;
  if ( !arrowInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(arrowInfo, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v22);
  NpCombineControl__ResetScrollView(this, v23);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  qp = SelfUserGame->fields.qp;
  eventNoticeImg = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
  this->fields.userQP = qp;
  if ( !eventNoticeImg )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject(eventNoticeImg, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseSelectInfoLb = this->fields.baseSelectInfoLb;
  if ( !baseSelectInfoLb )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_38;
  combineEventList = menuListCtr->fields.combineEventList;
  this->fields.combineEventList = combineEventList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v37 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v37 && v37->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v49,
      v37,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v50,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v50.fields.current )
        sub_B170D4();
      if ( HIDWORD(v50.fields.current[1].klass) == 10 )
      {
        v38 = this->fields.menuListCtr;
        if ( !v38 )
          sub_B170D4();
        MenuListControl__setBannerIcon(
          v38,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v50.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v50,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  baseLvInfo = this->fields.baseLvInfo;
  if ( !baseLvInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(baseLvInfo, 0, 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( *p_charaGraph )
    {
      v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v42, 0LL);
      *p_charaGraph = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_charaGraph, 0LL, v43, v44, v45, v46, v47, v48);
      return;
    }
LABEL_38:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  UIWrapContent_o *wrapContent; // x0
  UIWrapContent_o *v5; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Transform_o *transform; // x20
  int v8; // s0
  UnityEngine_Component_o *v11; // x0
  UIPanel_o *Component_WebViewObject; // x0
  UIScrollView_o *v13; // x0
  UIScrollView_o *v14; // x0
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9397 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_40F9397 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UIScrollView__ResetPosition(scrollView, 0LL);
  wrapContent = this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_13;
  UIWrapContent__SortAlphabetically(wrapContent, 0LL);
  v5 = this->fields.wrapContent;
  if ( !v5 )
    goto LABEL_13;
  UIWrapContent__resetScroll(v5, 0LL);
  v6 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v6 )
    goto LABEL_13;
  transform = UnityEngine_Component__get_transform(v6, 0LL);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !v11 )
    goto LABEL_13;
  Component_WebViewObject = (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           v11,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    goto LABEL_13;
  v15.fields.y = Component_WebViewObject->fields.mClipOffset.fields.y;
  v15.fields.x = 0.0;
  UIPanel__set_clipOffset(Component_WebViewObject, v15, 0LL);
  v13 = this->fields.scrollView;
  if ( !v13
    || (v16.fields.x = 0.0,
        v16.fields.y = 0.0,
        v16.fields.z = 0.0,
        UIScrollView__set_currentMomentum(v13, v16, 0LL),
        (v14 = this->fields.scrollView) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UIScrollView__DisableSpring(v14, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtCardImg(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  ServantLimitImageMaster_o *v13; // x22
  int32_t v14; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v17; // w21
  UICharaGraphTexture_o **p_charaGraph; // x22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40F9383 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9383 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v12;
  *(_QWORD *)&v26.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
  if ( !v13 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v13,
                                 v14,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v17 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v17,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882832,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    return;
  }
  if ( !*p_charaGraph )
LABEL_16:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, usrSvtData, v17, 0LL, 0, 0LL);
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
  int32_t LevelMax; // w0
  UnityEngine_GameObject_o *baseLvInfo; // x0
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x2
  struct System_String_array *v32; // x21
  int32_t v33; // w0
  __int64 v34; // x8
  int32_t v35; // w20
  int32_t v36; // w22
  System_String_o *CommandCardLoadFolderName; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array *battleLoadList; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_40F9382 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, usrSvtEn);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&Method_NpCombineControl_SetCombineNpList__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_B16FFC(&string___TypeInfo, v9);
    byte_40F9382 = 1;
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
    *(_QWORD *)&v58.fields.currentCryptoKey = v11;
    *(_QWORD *)&v58.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.baseSvtId = v12;
    sub_B16F98(
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
    LevelMax = UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_21;
    UIIconLabel__Set_40377052(iconLabel, 2, lv, LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    baseLvInfo = this->fields.baseLvInfo;
    if ( !baseLvInfo )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseLvInfo, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v23);
    this->fields.svtNpDataList = SvtNpData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.svtNpDataList,
      (System_Int32_array **)SvtNpData,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v32 = (struct System_String_array *)sub_B17014(string___TypeInfo, 1LL, v31);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(usrSvtEn->fields.svtId, 0LL);
    v34 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v59.fields.fakeValue = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
    v35 = v33;
    *(_QWORD *)&v59.fields.currentCryptoKey = v34;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(v35, v36, 0LL);
    if ( !v32 )
LABEL_21:
      sub_B170D4();
    v45 = (System_Int32_array **)CommandCardLoadFolderName;
    if ( CommandCardLoadFolderName )
    {
      CommandCardLoadFolderName = (System_String_o *)sub_B170BC(
                                                       CommandCardLoadFolderName,
                                                       v32->obj.klass->_1.element_class);
      if ( !CommandCardLoadFolderName )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( !v32->max_length )
    {
      sub_B17100(CommandCardLoadFolderName, v38, v39);
      sub_B170A0();
    }
    v32->m_Items[0] = (System_String_o *)v45;
    sub_B16F98((BattleServantConfConponent_o *)v32->m_Items, v45, v39, v40, v41, v42, v43, v44);
    this->fields.battleLoadList = v32;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.battleLoadList,
      (System_Int32_array **)v32,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    battleLoadList = this->fields.battleLoadList;
    v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_29953896(battleLoadList, v57, 1, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *defaultNpInfo; // x0
  const MethodInfo *v26; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *v27; // x8
  bool isScrollNpInfo; // w1
  unsigned int v29; // w22
  UnityEngine_GameObject_o *arrowInfo; // x0
  struct UICenterOnChild_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  SpringPanel_OnFinished_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int v43; // w24
  unsigned int i; // w23
  struct System_Collections_Generic_List_SvtUseNpData__o *v45; // x0
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_Object_o *Object; // x21
  System_String_o *v51; // x1
  ServantNpInfoIconComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v53; // x1
  int v54; // w8
  struct UIWrapContent_o *v55; // x8
  UIWrapContent_o *v56; // x0
  const MethodInfo *currentMoveIdx; // x1
  UIWrapContent_o *v58; // x0
  const MethodInfo *v59; // x2
  _BYTE v60[28]; // [xsp+0h] [xbp-90h] BYREF
  int v61; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-70h] BYREF
  int32_t idx; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_40F9388 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v9);
    sub_B16FFC(&Method_NpCombineControl_OnCenterOnChildFinished__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&SpringPanel_OnFinished_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_4533, v13);
    byte_40F9388 = 1;
  }
  idx = 0;
  memset(&v62, 0, sizeof(v62));
  v61 = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
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
      gameObject = UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      v18 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              gameObject,
              (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v18;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.centerChild,
        (System_Int32_array **)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    defaultNpInfo = this->fields.defaultNpInfo;
    if ( defaultNpInfo )
    {
      UnityEngine_GameObject__SetActive(defaultNpInfo, 0, 0LL);
      v27 = this->fields.svtNpDataList;
      if ( v27 )
      {
        if ( v27->fields._size >= 2 )
        {
          arrowInfo = this->fields.arrowInfo;
          this->fields.isScrollNpInfo = 1;
          if ( !arrowInfo )
            goto LABEL_47;
          UnityEngine_GameObject__SetActive(arrowInfo, 1, 0LL);
          v31 = this->fields.centerChild;
          v36 = (SpringPanel_OnFinished_o *)sub_B170CC(SpringPanel_OnFinished_TypeInfo, v32, v33, v34, v35);
          SpringPanel_OnFinished___ctor(
            v36,
            (Il2CppObject *)this,
            Method_NpCombineControl_OnCenterOnChildFinished__,
            0LL);
          if ( !v31 )
            goto LABEL_47;
          v31->fields.onFinished = v36;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v31->fields.onFinished,
            (System_Int32_array **)v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          v29 = 2;
          isScrollNpInfo = this->fields.isScrollNpInfo;
        }
        else
        {
          isScrollNpInfo = 0;
          v29 = 1;
          this->fields.isScrollNpInfo = 0;
        }
        NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v26);
        idx = 0;
        v43 = 0;
        for ( i = 0; i < v29; ++i )
        {
          v45 = this->fields.svtNpDataList;
          if ( !v45 )
            goto LABEL_47;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v60,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v45,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
          v62 = *(System_Collections_Generic_List_Enumerator_T__o *)v60;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v62,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__) )
          {
            current = v62.fields.current;
            if ( !v62.fields.current )
              sub_B170D4();
            if ( ((__int64)v62.fields.current[1].monitor & 0x80000000) == 0 )
            {
              v47 = (UnityEngine_Component_o *)this->fields.wrapContent;
              if ( !v47 )
                sub_B170D4();
              npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
              transform = UnityEngine_Component__get_transform(v47, 0LL);
              Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 npCombineInfoPrefab,
                                                 transform,
                                                 0LL,
                                                 0LL);
              v51 = System_Int32__ToString_38275808((int32_t)&idx, (System_String_o *)StringLiteral_4533, 0LL);
              if ( !Object )
                sub_B170D4();
              UnityEngine_Object__set_name(Object, v51, 0LL);
              Component_srcLineSprite = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)Object,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
              if ( !Component_srcLineSprite )
                sub_B170D4();
              ServantNpInfoIconComponent__SetNpInfo(
                Component_srcLineSprite,
                this->fields.baseUserServantEntity,
                idx++,
                (SvtUseNpData_o *)current,
                0LL);
            }
          }
          *(_DWORD *)&v60[4 * v43 + 24] = 280;
          v43 = ++v61;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v62,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
          if ( v43 )
          {
            v54 = v43 - 1;
            if ( *(_DWORD *)&v60[4 * v43 + 20] == 280 )
            {
              --v43;
              v61 = v54;
            }
          }
        }
        if ( this->fields.isScrollNpInfo )
        {
          v55 = this->fields.wrapContent;
          if ( !v55 )
            goto LABEL_47;
          *(_DWORD *)&v55->fields.cullContent = 700;
          v56 = this->fields.wrapContent;
          if ( !v56 )
            goto LABEL_47;
          UIWrapContent__WrapContent(v56, 0LL);
        }
        NpCombineControl__ResetScrollView(this, v53);
        currentMoveIdx = (const MethodInfo *)(unsigned int)this->fields.currentMoveIdx;
        if ( (int)currentMoveIdx < 1 )
        {
LABEL_45:
          this->fields.isSelectBase = 1;
          NpCombineControl__SetSelectMaterialEnable(this, currentMoveIdx);
          NpCombineControl__ChangeTargetInfo(this, 0, v59);
          return;
        }
        v58 = this->fields.wrapContent;
        if ( v58 )
        {
          UIWrapContent__setScrollPos(v58, (int32_t)currentMoveIdx, 0LL);
          goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetEnableCombineBtn(
        NpCombineControl_o *this,
        bool isCombine,
        const MethodInfo *method)
{
  struct UIButton_o *combineBtn; // x0
  int v6; // s0
  UIWidget_o *combineBtnTxt; // x0

  combineBtn = this->fields.combineBtn;
  if ( !combineBtn
    || ((((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))combineBtn->klass->vtable._5_set_isEnabled.method)(
           combineBtn,
           isCombine,
           combineBtn->klass->vtable._6_OnInit.methodPtr),
         !isCombine)
      ? (*(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL))
      : (*(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL)),
        (combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt) == 0LL) )
  {
    sub_B170D4();
  }
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v6, 0LL);
}


void __fastcall NpCombineControl__SetEnabledNpInfoScroll(
        NpCombineControl_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  bool v5; // w20
  UnityEngine_Behaviour_o *wrapContent; // x0

  if ( this->fields.isScrollNpInfo || !enabled )
  {
    scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !scrollView
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(scrollView, enabled, 0LL),
          (wrapContent = (UnityEngine_Behaviour_o *)this->fields.wrapContent) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Behaviour__set_enabled(wrapContent, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v6; // x20
  WebViewObject_o *v7; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v10; // x19
  int v11; // s0
  int v15; // s0
  int v19; // s0
  int v23; // s0

  if ( (byte_40F938F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40F938F = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              combineBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v6 = (UIWidget_o *)Component_WebViewObject;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this->fields.combineTxtImg,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)v7;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v11, 0LL);
      *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
      if ( v6 )
      {
        UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v15, 0LL);
        if ( v10 )
        {
          UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v10, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v19, 0LL);
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_gray(0LL);
  if ( !v6 )
    goto LABEL_14;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v23, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
}


void __fastcall NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20
  System_String_o *v5; // x0

  if ( (byte_40F9381 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236, method);
    byte_40F9381 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = SelfUserGame->fields.qp,
        v5 = System_Int32__ToString_38275808((int)this + 312, (System_String_o *)StringLiteral_9236, 0LL),
        !haveQpLb) )
  {
    sub_B170D4();
  }
  UILabel__set_text(haveQpLb, v5, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v24; // x23
  System_Collections_Generic_List_long__o *v25; // x22
  System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  _BOOL8 IsExceedMaxLv; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  unsigned __int64 v36; // x22
  signed __int64 v37; // x26
  struct System_Int64_array *v38; // x8
  UnityEngine_Component_o *materialGrid; // x0
  int64_t v40; // x23
  UnityEngine_GameObject_o *materialSvtPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v44; // x24
  UnityEngine_Transform_o *v45; // x0
  UnityEngine_Transform_o *v46; // x25
  UnityEngine_Transform_o *v47; // x0
  int v48; // s0
  UnityEngine_Transform_o *v51; // x25
  int v52; // s0
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  NpMaterialSvtInfo_ClickDelegate_o *v60; // x25
  UserServantEntity_o *v61; // x2
  const MethodInfo *v62; // x5
  UIGrid_o *v63; // x0
  const MethodInfo *v64; // x3
  int32_t NpLv; // w0
  int32_t v66; // w21
  const MethodInfo *v67; // x3
  struct System_Int64_array *v68; // x22
  __int64 v69; // x8
  unsigned __int64 v70; // x23
  int64_t v71; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v75; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  float v80; // s0
  double v81; // d0
  UILabel_o *qpLb; // x22
  System_String_o *v83; // x0
  int v84; // s0
  UIWidget_o *v88; // x0
  struct SetLevelUpData_o *v89; // x8
  struct SetLevelUpData_o *v90; // x8
  UIWidget_o *v91; // x20
  int v92; // s0
  const MethodInfo *v96; // x1
  int v97; // s0
  System_Collections_Generic_List_Enumerator_T__o v101; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v102; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_40F938B & 1) == 0 )
  {
    sub_B16FFC(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, data);
    sub_B16FFC(&Method_CombineMenuControl_OnClickMaterial__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_9236, v18);
    byte_40F938B = 1;
  }
  tmpTargetLv = 0;
  memset(&v102, 0, sizeof(v102));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_59;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_59;
  v24 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v25 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v19,
                                                     v20,
                                                     v21,
                                                     v22);
  System_Collections_Generic_List_long____ctor(
    v25,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectMtUsrSvtIdList,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v24 < 1 )
    return;
  v36 = 0LL;
  v37 = (int)v24;
  do
  {
    v38 = data->fields.materialUsrSvtIdList;
    if ( !v38 )
      goto LABEL_59;
    if ( v36 >= v38->max_length )
    {
LABEL_60:
      sub_B17100(IsExceedMaxLv, v34, v35);
      sub_B170A0();
    }
    materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_59;
    v40 = v38->m_Items[v36];
    materialSvtPrefab = this->fields.materialSvtPrefab;
    transform = UnityEngine_Component__get_transform(materialGrid, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, materialSvtPrefab, transform, 0LL, 0LL);
    if ( !Object )
      goto LABEL_59;
    v44 = Object;
    v45 = UnityEngine_GameObject__get_transform(Object, 0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_59;
    v46 = v45;
    v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.materialGrid, 0LL);
    if ( !v47 )
      goto LABEL_59;
    *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Transform__get_localPosition(v47, 0LL);
    if ( !v46 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v46, *(UnityEngine_Vector3_o *)&v48, 0LL);
    v51 = UnityEngine_GameObject__get_transform(v44, 0LL);
    *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v51 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v51, *(UnityEngine_Vector3_o *)&v52, 0LL);
    Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v44,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v60 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_B170CC(NpMaterialSvtInfo_ClickDelegate_TypeInfo, v56, v57, v58, v59);
    NpMaterialSvtInfo_ClickDelegate___ctor(v60, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_59;
    NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, v36, v61, v40, v60, v62);
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_59;
    System_Collections_Generic_List_long___Add(
      *p_selectMtUsrSvtIdList,
      v40,
      (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
    ++v36;
  }
  while ( (__int64)v36 < v37 );
  v63 = this->fields.materialGrid;
  if ( !v63 )
    goto LABEL_59;
  UIGrid__set_repositionNow(v63, 1, 0LL);
  NpLv = NpCombineControl__GetNpLv(
           this->fields.baseUserServantEntity,
           data->fields.materialUsrSvtIdList,
           &tmpTargetLv,
           v64);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_59;
  v66 = NpLv;
  IsExceedMaxLv = UserServantEntity__IsExceedMaxLv(this->fields.baseUserServantEntity, tmpTargetLv, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = IsExceedMaxLv;
  v68 = data->fields.materialUsrSvtIdList;
  if ( !v68 )
    goto LABEL_59;
  v69 = *(_QWORD *)&v68->max_length;
  if ( (int)v69 >= 1 )
  {
    v70 = 0LL;
    while ( 1 )
    {
      if ( v70 >= (unsigned int)v69 )
        goto LABEL_60;
      v71 = v68->m_Items[v70];
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_59;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_59;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v71,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        goto LABEL_59;
      if ( UserServantEntity__IsExchangeSvt(Entity, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      IsExceedMaxLv = NpCombineControl__CheckConfirm(v71, v75);
      if ( IsExceedMaxLv )
        break;
      LODWORD(v69) = v68->max_length;
      if ( (__int64)++v70 >= (int)v69 )
        goto LABEL_33;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_33:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_59;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v66, v67);
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v101,
      combineEventList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v102 = v101;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v102,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
    {
      if ( !v102.fields.current )
        sub_B170D4();
      if ( HIDWORD(v102.fields.current[1].klass) == 10 )
      {
        v80 = *(float *)&v102.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v80 == INFINITY )
          v81 = -INFINITY;
        else
          v81 = v80;
        *p_spendQpVal = (int)v81;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v102,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  v83 = System_Int32__ToString_38275808((int)this + 316, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !qpLb )
    goto LABEL_59;
  UILabel__set_text(qpLb, v83, 0LL);
  *(UnityEngine_Color_o *)&v84 = this->fields.haveQpVal >= this->fields.spendQpVal
                               ? UnityEngine_Color__get_white(0LL)
                               : UnityEngine_Color__get_red(0LL);
  v88 = (UIWidget_o *)this->fields.qpLb;
  if ( !v88 )
    goto LABEL_59;
  UIWidget__set_color(v88, *(UnityEngine_Color_o *)&v84, 0LL);
  v89 = this->fields.lvUpData;
  if ( !v89 )
    goto LABEL_59;
  v89->fields.nextLv = v66;
  v90 = this->fields.lvUpData;
  if ( !v90 )
    goto LABEL_59;
  v90->fields.spendQp = this->fields.spendQpVal;
  v91 = (UIWidget_o *)this->fields.qpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v97 = UnityEngine_Color__get_white(0LL);
    if ( v91 )
    {
      UIWidget__set_color(v91, *(UnityEngine_Color_o *)&v97, 0LL);
      this->fields._IsExeCombine_k__BackingField = 1;
      goto LABEL_57;
    }
LABEL_59:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v92 = UnityEngine_Color__get_red(0LL);
  if ( !v91 )
    goto LABEL_59;
  UIWidget__set_color(v91, *(UnityEngine_Color_o *)&v92, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
LABEL_57:
  NpCombineControl__SetExeBtnState(this, v96);
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
    sub_B170D4();
  }
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v6, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v10);
}


void __fastcall NpCombineControl__SetSelectMaterialEnable(NpCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UnityEngine_Behaviour_o *selectMaterialSvtBtn; // x0

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (gameObject = UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, !this->fields.isSelectBase, 0LL),
        (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive(baseSelectInfoLb, !this->fields.isSelectBase, 0LL),
        (selectMaterialSvtBtn = (UnityEngine_Behaviour_o *)this->fields.selectMaterialSvtBtn) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(selectMaterialSvtBtn, this->fields.isSelectBase, 0LL);
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
  UILabel_o *v19; // x0
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9392 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_7009, v6);
    sub_B16FFC(&StringLiteral_5746, v7);
    sub_B16FFC(&StringLiteral_7253, v8);
    sub_B16FFC(&StringLiteral_12162, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40F9392 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v21.fields.g = 0.87891;
  v21.fields.b = 0.98828;
  v13 = (UIWidget_o *)Component_WebViewObject;
  v21.fields.r = 0.0;
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  UnityEngine_Color___ctor_40666012(v21, v14, v15, v16, (const MethodInfo *)&v20);
  if ( !v13 )
LABEL_29:
    sub_B170D4();
  UIWidget__set_color(v13, v20, 0LL);
  if ( state )
  {
    if ( state == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_7009;
    }
    else
    {
      if ( state != 2 )
      {
        v18 = (System_String_o *)StringLiteral_1;
        goto LABEL_27;
      }
      if ( this->fields._IsExeCombine_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = &StringLiteral_5746;
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
        v17 = &StringLiteral_12162;
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
    v17 = &StringLiteral_7253;
  }
  v18 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
LABEL_27:
  v19 = this->fields.detailInfoLb;
  if ( !v19 )
    goto LABEL_29;
  UILabel__set_text(v19, v18, 0LL);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  struct System_Collections_Generic_List_SvtUseNpData__o *v12; // x20
  SvtUseNpData_o *v13; // x26
  int32_t svtUseNpId; // w21
  UnityEngine_GameObject_o *maxLvStatusInfo; // x0
  int32_t svtNpLv; // w20
  __int64 v17; // x22
  __int64 v18; // x22
  DataManager_o *v19; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w24
  WarEntity_o *v23; // x22
  TreasureDvcLvMaster_o *v24; // x0
  TreasureDvcLvEntity_o *v25; // x0
  UILabel_o *currentInfoLb; // x23
  System_String_o *Detail; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w23
  UserServantEntity_o *baseUserServantEntity; // x23
  System_Int64_array *v35; // x0
  const MethodInfo *v36; // x3
  SetLevelUpData_o *v37; // x25
  struct SetLevelUpData_o **p_lvUpData; // x24
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  struct SetLevelUpData_o *v52; // x0
  System_Int32_array **name; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct SetLevelUpData_o *v60; // x0
  System_Int32_array **age; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct SetLevelUpData_o *v68; // x8
  struct SetLevelUpData_o *v69; // x0
  UILabel_o *qpLb; // x0
  UnityEngine_GameObject_o *v71; // x0
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F938A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v7);
    sub_B16FFC(&SetLevelUpData_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_B16FFC(&StringLiteral_951, v10);
    byte_40F938A = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    v12 = this->fields.svtNpDataList;
    if ( !v12 )
      goto LABEL_40;
    if ( !v12->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v12->fields._items->m_Items[0];
    if ( !v13 )
      goto LABEL_40;
    svtUseNpId = v13->fields.svtUseNpId;
    if ( svtUseNpId >= 1 )
    {
      maxLvStatusInfo = this->fields.maxLvStatusInfo;
      if ( !maxLvStatusInfo )
        goto LABEL_40;
      svtNpLv = v13->fields.svtNpLv;
      UnityEngine_GameObject__SetActive(maxLvStatusInfo, 0, 0LL);
      v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
      v18 = **(_QWORD **)(v17 + 192);
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AAFCFC(v18);
      v19 = **(DataManager_o ***)(v18 + 184);
      if ( !v19 )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            v19,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 svtUseNpId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_40;
      bannerId = Entity->fields.bannerId;
      v23 = Entity;
      v24 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       v19,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      if ( !v24 )
        goto LABEL_40;
      v25 = TreasureDvcLvMaster__GetEntity(v24, svtUseNpId, svtNpLv, 0LL);
      if ( !v25 )
        goto LABEL_40;
      currentInfoLb = this->fields.currentInfoLb;
      Detail = TreasureDvcLvEntity__getDetail(v25, 0LL);
      if ( !currentInfoLb )
        goto LABEL_40;
      UILabel__set_text(currentInfoLb, Detail, 0LL);
      if ( svtNpLv < bannerId )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = svtNpLv;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v35 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v35, &tmpTargetLv, v36);
        }
        v37 = (SetLevelUpData_o *)sub_B170CC(SetLevelUpData_TypeInfo, v28, v29, v30, v31);
        SetLevelUpData___ctor(v37, 0LL);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = v37;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.lvUpData,
          (System_Int32_array **)v37,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
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
                v52 = *p_lvUpData;
                if ( *p_lvUpData )
                {
                  name = (System_Int32_array **)v23->fields.name;
                  v52->fields.targetRuby = (struct System_String_o *)name;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v52->fields.targetRuby,
                    name,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50);
                  v60 = *p_lvUpData;
                  if ( *p_lvUpData )
                  {
                    age = (System_Int32_array **)v23->fields.age;
                    v60->fields.targetName = (struct System_String_o *)age;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v60->fields.targetName,
                      age,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59);
                    if ( *p_lvUpData )
                    {
                      (*p_lvUpData)->fields.currentLv = svtNpLv;
                      if ( *p_lvUpData )
                      {
                        (*p_lvUpData)->fields.nextLv = NpLv;
                        if ( *p_lvUpData )
                        {
                          (*p_lvUpData)->fields.spendQp = this->fields.spendQpVal;
                          v68 = this->fields.lvUpData;
                          if ( v68 )
                          {
                            v68->fields.haveQp = this->fields.userQP;
                            v69 = this->fields.lvUpData;
                            if ( v69 )
                            {
                              v69->fields.combineItemIds = 0LL;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)&v69->fields.combineItemIds,
                                0LL,
                                v62,
                                v63,
                                v64,
                                v65,
                                v66,
                                v67);
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
        sub_B170D4();
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v28);
      qpLb = this->fields.qpLb;
      if ( !qpLb )
        goto LABEL_40;
      UILabel__set_text(qpLb, (System_String_o *)StringLiteral_951, 0LL);
      v71 = this->fields.maxLvStatusInfo;
      if ( !v71 )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive(v71, 1, 0LL);
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