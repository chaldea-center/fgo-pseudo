void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A5C1 & 1) == 0 )
  {
    sub_1BE4ACC(&CombineMenuControl_TypeInfo, method);
    byte_4B6A5C1 = 1;
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

  if ( (byte_4B6A5AF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6A5AF = 1;
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
                                                             (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___),
            !this->fields.svtNpDataList)
        || (baseUserServantEntity = this->fields.baseUserServantEntity,
            v9 = (ServantNpInfoIconComponent_o *)Component_object,
            Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                             (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                             this->fields.displayTransformIndex,
                                                             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__),
            !v9) )
      {
        sub_1BE4D28(Component_object, v6);
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

  if ( (byte_4B6A5BC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B6A5BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v6);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             myUserSvtId,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_46013984((UserServantEntity_o *)Entity, v8);
}


bool __fastcall NpCombineControl__CheckConfirm_46013984(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
    sub_1BE4D28(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v4 == v5 )
        sub_1BE4D30(selectUsrSvtEnt, method);
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
  if ( (byte_4B6A5B7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, resData);
    this = (NpCombineControl_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6A5B7 = 1;
  }
  lvUpData = v4->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v4->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_1BE4D28(this, resData);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B6A5B3 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B6A5B3 = 1;
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
      UnityEngine_Object__DestroyImmediate_70452188(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1BE4D28(wrapContent, method);
  }
LABEL_13:
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_38706752(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4B6A5B4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B6A5B4 = 1;
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
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_1BE4D28(materialGrid, method);
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
  PartyOrganizationUtility_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4B6A5B2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (NpCombineControl_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6A5B2 = 1;
  }
  baseUserServantEntity = v2->fields.baseUserServantEntity;
  p_baseUserServantEntity = (PartyOrganizationUtility_o *)&v2->fields.baseUserServantEntity;
  v6 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v19, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1BE4D28(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BE4A70(p_baseUserServantEntity, (int64_t)Entity, v12, v13, v14, v15, v16, v17);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x0
  Il2CppObject *MasterData_object; // x0
  int v19; // w25
  bool v20; // cc
  int v21; // w24
  DataManager_o *v22; // x21
  int32_t v23; // w26
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x23
  int32_t v25; // w22
  DataManager_o *v26; // x27
  _BOOL4 v27; // w8
  DataManager_o *v28; // x20

  if ( (byte_4B6A5AD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Contains__, v14);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    byte_4B6A5AD = 1;
  }
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C369A8(v7);
  MasterData_object = *(Il2CppObject **)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (BYTE5(MasterData_object[19].klass) & 1) == 0 )
    MasterData_object = (Il2CppObject *)sub_1C369A8(v7);
  v19 = condLimitCount - 1;
  v20 = index < 1;
  if ( index >= 1 )
    v21 = -1;
  else
    v21 = condLimitCount - 1;
  v22 = *(DataManager_o **)MasterData_object[11].monitor;
  if ( v20 )
    v23 = -1;
  else
    v23 = condLimitCount;
  if ( !v22 )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        v22,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_36;
  CorrespondsCostume = ServantTreasureDeviceReleaseMaster__GetCorrespondsCostume(
                         (ServantTreasureDeviceReleaseMaster_o *)MasterData_object,
                         svtId,
                         0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  MasterData_object = (Il2CppObject *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v25 = (int)MasterData_object;
  if ( v23 >= 0 && (_DWORD)MasterData_object != v23 && fixedFlag )
    v26 = v22;
  else
    v26 = 0LL;
  if ( v23 >= 0 && (_DWORD)MasterData_object != v23 && fixedFlag )
  {
    if ( (int)MasterData_object < 11 )
      goto LABEL_24;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          (int32_t)MasterData_object,
                                          (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v22 = v26;
    if ( ((unsigned __int8)MasterData_object & 1) == 0 )
LABEL_24:
      v25 = v23;
  }
  v27 = v21 >= 0 && v25 > v21 && fixedFlag;
  if ( v21 >= 0 && v25 > v21 && fixedFlag )
    v28 = v22;
  else
    v28 = 0LL;
  if ( v27 )
  {
    if ( v25 < 11 )
      goto LABEL_32;
    if ( !CorrespondsCostume )
      goto LABEL_36;
    MasterData_object = (Il2CppObject *)System_Collections_Generic_HashSet_int___Contains(
                                          CorrespondsCostume,
                                          v25,
                                          (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__);
    v22 = v28;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
LABEL_32:
      v25 = v19;
  }
  if ( !v22
    || (MasterData_object = DataManager__GetMasterData_object_(
                              v22,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
LABEL_36:
    sub_1BE4D28(MasterData_object, *(_QWORD *)&svtId);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)MasterData_object,
           svtId,
           v25,
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
  long double v10; // q0
  __int64 v11; // x8
  __int64 v12; // x0
  Il2CppObject *MasterData_object; // x0

  if ( (byte_4B6A5AC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_4B6A5AC = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C369A8(v10);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C369A8(v10);
  MasterData_object = **(Il2CppObject ***)(v12 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_1BE4D28(MasterData_object, v8);
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
  long double v19; // q0
  __int64 v20; // x0
  __int64 v21; // x0
  DataManager_o *MasterData_object; // x0
  TreasureDvcMaster_o *v23; // x19
  System_Int32_array *FixedCardLimitCounts; // x27
  __int64 v25; // x20
  struct System_Int32_array *treasureDeviceIds; // x8
  unsigned __int64 v27; // x24
  int32_t v28; // w26
  __int64 v29; // x23
  __int64 v30; // x25
  DataManager_o *v31; // x27
  TreasureDvcInfo_o *v32; // x23
  int32_t v33; // w0
  struct System_Int32_array *hideCardChara; // x8
  int *p_saveNameList; // x9
  TreasureDvcMaster_o *v36; // x28
  TreasureDvcInfo_o *v37; // x19
  int32_t v38; // w23
  int64_t v39; // x25
  __int64 v40; // x23
  __int64 v41; // x29
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  TreasureDvcInfo_o *v48; // x26
  int64_t v49; // x1
  int64_t m_CancellationTokenSource; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int32_t DispLimitCount; // w23
  System_String_o *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x6
  char v66; // w5
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  __int64 v77; // x8
  System_Int32_array *v79; // [xsp+8h] [xbp-98h]
  ServantTreasureDeviceAddEntity_o *v80; // [xsp+10h] [xbp-90h]
  int32_t *p_cardId; // [xsp+18h] [xbp-88h]
  int v82; // [xsp+20h] [xbp-80h]
  bool v83; // [xsp+24h] [xbp-7Ch]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-78h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_4B6A5AB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Convert_TypeInfo, usrSvtData);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_1BE4ACC(&SvtUseNpData_TypeInfo, v16);
    byte_4B6A5AB = 1;
  }
  tdExplanation = 0LL;
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C369A8(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C369A8(v19);
  MasterData_object = **(DataManager_o ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_41;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !tdAddEntity )
    goto LABEL_41;
  v23 = (TreasureDvcMaster_o *)MasterData_object;
  FixedCardLimitCounts = ServantTreasureDeviceAddEntity__GetFixedCardLimitCounts(tdAddEntity, 0LL);
  MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                         (const MethodInfo_2F7403C *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_object >= 1 )
  {
    v25 = 8LL;
    v80 = tdAddEntity;
    p_cardId = &tdInfo->fields.cardId;
    v79 = FixedCardLimitCounts;
    while ( 1 )
    {
      treasureDeviceIds = tdAddEntity->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      v27 = v25 - 8;
      if ( v25 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
        goto LABEL_42;
      if ( !usrSvtData )
        break;
      v28 = *((_DWORD *)&treasureDeviceIds->obj.klass + v25);
      v30 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v87.fields.currentCryptoKey = v30;
      *(_QWORD *)&v87.fields.fakeValue = v29;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v87, 0LL);
      if ( !v23 )
        break;
      MasterData_object = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                             v23,
                                             (int32_t)MasterData_object,
                                             v28,
                                             0LL);
      if ( !tdInfo )
        break;
      v31 = MasterData_object;
      if ( !MasterData_object )
        break;
      v32 = tdInfo;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        tdInfo->fields.lv,
        0LL);
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(usrSvtData->fields.svtId, 0LL);
      MasterData_object = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v33, v28, 0LL);
      hideCardChara = tdAddEntity->fields.hideCardChara;
      p_saveNameList = (int *)&MasterData_object->fields.saveNameList;
      if ( !MasterData_object )
        p_saveNameList = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v27 >= hideCardChara->max_length )
        goto LABEL_42;
      v36 = v23;
      v37 = v32;
      v82 = *p_saveNameList;
      v38 = *((_DWORD *)&hideCardChara->obj.klass + v25);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v83 = System_Convert__ToBoolean_63347368(v38, 0LL);
      v39 = sub_1BE4D18(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v39, 0LL);
      v40 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v88.fields.currentCryptoKey = v40;
      *(_QWORD *)&v88.fields.fakeValue = v41;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v88, 0LL);
      if ( !v39 )
        break;
      *(_DWORD *)(v39 + 16) = (_DWORD)MasterData_object;
      *(_DWORD *)(v39 + 20) = v28;
      v48 = v37;
      *(_QWORD *)(v39 + 24) = *(_QWORD *)&v37->fields.id;
      v49 = *(_QWORD *)&v31->fields._DispLog;
      *(_QWORD *)(v39 + 32) = v49;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 32), v49, v42, v43, v44, v45, v46, v47);
      m_CancellationTokenSource = (int64_t)v31->fields.m_CancellationTokenSource;
      *(_QWORD *)(v39 + 40) = m_CancellationTokenSource;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 40), m_CancellationTokenSource, v51, v52, v53, v54, v55, v56);
      *(_DWORD *)(v39 + 48) = v82;
      *(_DWORD *)(v39 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v39 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v58 = tdExplanation;
      *(_QWORD *)(v39 + 56) = tdExplanation;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 56), (int64_t)v58, v59, v60, v61, v62, v63, v64);
      v66 = 1;
      *(_BYTE *)(v39 + 64) = v83;
      *(_BYTE *)(v39 + 65) = 1;
      if ( v79 )
      {
        tdAddEntity = v80;
        if ( v27 >= v79->max_length )
LABEL_42:
          sub_1BE4D30(MasterData_object, v18);
        v23 = v36;
        v66 = *((_DWORD *)&v79->obj.klass + v25) != 0;
      }
      else
      {
        tdAddEntity = v80;
        v23 = v36;
      }
      tdInfo = v48;
      MasterData_object = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                             (NpCombineControl_o *)MasterData_object,
                                             *(_DWORD *)(v39 + 16),
                                             *(_DWORD *)(v39 + 72),
                                             tdAddEntity->fields.condLimitCount,
                                             v25 - 8,
                                             v66,
                                             v65);
      *(_DWORD *)(v39 + 68) = (_DWORD)MasterData_object;
      if ( !v17 )
        break;
      items = v17->fields._items;
      v74 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v17->fields._version;
      if ( !items )
        break;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v39,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v76[4] = (Il2CppClass *)v39;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v76 + 4), v39, v67, v68, v69, v70, v71, v72);
      }
      MasterData_object = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)tdAddEntity->fields.treasureDeviceIds,
                                             (const MethodInfo_2F7403C *)Method_System_Linq_Enumerable_Count_int___);
      v77 = v25 - 7;
      ++v25;
      if ( v77 >= (int)MasterData_object )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v17;
    }
LABEL_41:
    sub_1BE4D28(MasterData_object, v18);
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
  if ( (byte_4B6A5BA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, mtSvtIdList);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    baseUsrSvtData = (UserServantEntity_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B6A5BA = 1;
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
    sub_1BE4D28(baseUsrSvtData, mtSvtIdList);
  }
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v9 )
      sub_1BE4D30(baseUsrSvtData, mtSvtIdList);
    v11 = v5->m_Items[v10];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)baseUsrSvtData,
                                              v11,
                                              (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_41175800(
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
  if ( (byte_4B6A5BB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, *(_QWORD *)&currentLv);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B6A5BB = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v8 = 0;
  do
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_1BE4D28(Instance, v10);
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
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 MasterData_object; // x0
  DataManager_o *v16; // x21
  ServantTreasureDeviceAddMaster_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t v20; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x22
  int32_t TransformCount; // w0
  __int64 v23; // x21
  __int64 v24; // x23
  int32_t v25; // w0
  const MethodInfo *v26; // x4
  System_Collections_Generic_List_object__o *v27; // x21
  Il2CppObject *v28; // x22
  int32_t v29; // w23
  __int64 v30; // x27
  int32_t TransformedServantId; // w25
  __int64 v32; // x26
  int32_t *p_cardId; // x8
  int32_t v34; // w29
  int64_t v35; // x24
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int v42; // w8
  int64_t v43; // x1
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int32_t DispLimitCount; // w25
  System_String_o *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int32_t v59; // w1
  int32_t v60; // w2
  NpCombineControl_o *v61; // x0
  const MethodInfo *v62; // x3
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-88h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-78h] BYREF
  TreasureDvcInfo_o *v77; // [xsp+20h] [xbp-70h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4B6A5AA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___, usrSvtData);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v6);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_1BE4ACC(&SvtUseNpData_TypeInfo, v13);
    byte_4B6A5AA = 1;
  }
  v77 = 0LL;
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C369A8(v3);
  MasterData_object = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(MasterData_object + 309) & 1) == 0 )
    MasterData_object = sub_1C369A8(v3);
  v16 = **(DataManager_o ***)(MasterData_object + 184);
  if ( !v16 )
    goto LABEL_41;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 v16,
                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_41;
  v17 = (ServantTreasureDeviceAddMaster_o *)MasterData_object;
  v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v79.fields.currentCryptoKey = v19;
  *(_QWORD *)&v79.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v79, 0LL);
  MasterData_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                        usrSvtData->fields.limitCount,
                        0LL);
  if ( !v17 )
    goto LABEL_41;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v17, v20, MasterData_object, 0, 0, 0LL);
  TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
  CombineMenuControl__set_TransformTotal((CombineMenuControl_o *)this, TransformCount, 0LL);
  if ( !EnableEntity )
  {
    v28 = DataManager__GetMasterData_object_(
            v16,
            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v27 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
    if ( this->fields.transformTotal < 1 )
      return (System_Collections_Generic_List_SvtUseNpData__o *)v27;
    v29 = 0;
    v30 = 0LL;
    while ( 1 )
    {
      MasterData_object = (__int64)this->fields.baseUserServantEntity;
      if ( !MasterData_object )
        break;
      TransformedServantId = UserServantEntity__GetTransformedServantId(
                               (UserServantEntity_o *)MasterData_object,
                               v29,
                               0LL);
      MasterData_object = UserServantEntity__GetTransformedTreasureDeviceInfoByTransformCount(
                            usrSvtData,
                            &v77,
                            v29,
                            -1,
                            -1,
                            0,
                            0LL);
      if ( !v77 )
        break;
      if ( !v28 )
        break;
      MasterData_object = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)v28,
                                     TransformedServantId,
                                     v77->fields.id,
                                     0LL);
      if ( !v77 )
        break;
      v32 = MasterData_object;
      if ( !MasterData_object )
        break;
      TreasureDvcEntity__getEffectExplanation(
        (TreasureDvcEntity_o *)MasterData_object,
        &tdName,
        &tdExplanation,
        &tdGuageCount[1],
        tdGuageCount,
        v77->fields.lv,
        0LL);
      MasterData_object = (__int64)ServantTreasureDvcMaster__getEntityFromIDID(
                                     TransformedServantId,
                                     *(_DWORD *)(v32 + 16),
                                     0LL);
      if ( MasterData_object )
        v30 = MasterData_object;
      if ( MasterData_object )
      {
        if ( !v30 )
          break;
        p_cardId = (int32_t *)(v30 + 64);
      }
      else
      {
        if ( !v77 )
          break;
        p_cardId = &v77->fields.cardId;
      }
      v34 = *p_cardId;
      v35 = sub_1BE4D18(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v35, 0LL);
      if ( !v35 )
        break;
      *(_DWORD *)(v35 + 16) = TransformedServantId;
      v42 = *(_DWORD *)(v32 + 16);
      *(_DWORD *)(v35 + 20) = v42;
      *(_DWORD *)(v35 + 24) = v42;
      if ( !v77 )
        break;
      *(_DWORD *)(v35 + 28) = v77->fields.lv;
      v43 = *(_QWORD *)(v32 + 32);
      *(_QWORD *)(v35 + 32) = v43;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 32), v43, v36, v37, v38, v39, v40, v41);
      v44 = *(_QWORD *)(v32 + 24);
      *(_QWORD *)(v35 + 40) = v44;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 40), v44, v45, v46, v47, v48, v49, v50);
      *(_DWORD *)(v35 + 48) = v34;
      *(_DWORD *)(v35 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      *(_DWORD *)(v35 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v52 = tdExplanation;
      *(_QWORD *)(v35 + 56) = tdExplanation;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 56), (int64_t)v52, v53, v54, v55, v56, v57, v58);
      *(_BYTE *)(v35 + 64) = 0;
      v59 = *(_DWORD *)(v35 + 16);
      v60 = *(_DWORD *)(v35 + 72);
      *(_BYTE *)(v35 + 65) = this->fields.transformTotal > 1;
      MasterData_object = NpCombineControl__GetLimitCountForSingle(v61, v59, v60, v62);
      *(_DWORD *)(v35 + 68) = MasterData_object;
      if ( !v27 )
        break;
      items = v27->fields._items;
      v70 = Method_System_Collections_Generic_List_SvtUseNpData__Add__;
      ++v27->fields._version;
      if ( !items )
        break;
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)v35,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v72[4] = (Il2CppClass *)v35;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v72 + 4), v35, v63, v64, v65, v66, v67, v68);
      }
      if ( ++v29 >= this->fields.transformTotal )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v27;
    }
LABEL_41:
    sub_1BE4D28(MasterData_object, usrSvtData);
  }
  UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v80.fields.currentCryptoKey = v24;
  *(_QWORD *)&v80.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v80, 0LL);
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, v25, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(this, usrSvtData, tdInfo, EnableEntity, v26);
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

  if ( (byte_4B6A5A6 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_915/*"-"*/, v3);
    sub_1BE4ACC(&StringLiteral_9365/*"NEED_QP_INFO"*/, v4);
    byte_4B6A5A6 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9365/*"NEED_QP_INFO"*/, 0LL);
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
    sub_1BE4D28(currentInfoLb, method);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6A5A4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_8913/*"MSG_PRESELECT_BASE_SVT"*/, v8);
    byte_4B6A5A4 = 1;
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
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8913/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.combineEventList,
    (int64_t)combineEventList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v24 && v24->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      v24,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v25 )
        break;
      if ( !v28.fields._current )
        sub_1BE4D28(v25, v26);
      if ( HIDWORD(v28.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1BE4D28(v25, v26);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v25,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v28.fields._current[5].klass,
          v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_25:
    sub_1BE4D28(SelfUserGame, v13);
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
  PartyOrganizationUtility_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B6A5A3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A5A3 = 1;
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
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    helpBtn = (UnityEngine_GameObject_o *)p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BE4A70(p_charaGraph, 0LL, v9, v10, v11, v12, v13, v14);
      return;
    }
LABEL_12:
    sub_1BE4D28(helpBtn, v3);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  NpCombineControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v2 = this;
  if ( (byte_4B6A5BE & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_1BE4ACC(
                                   &Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___,
                                   method);
    byte_4B6A5BE = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_1BE4D28(this, method);
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

  if ( (byte_4B6A5BF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NpCombineControl_OnClickArrow__, *(_QWORD *)&delte);
    byte_4B6A5BF = 1;
  }
  v5 = Method_NpCombineControl_OnClickArrow__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickArrow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_NpCombineControl_OnClickArrow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
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
    sub_1BE4D28(wrapContent, v7);
  }
  UICenterOnChild__CenterOn_47511680(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
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

  if ( (byte_4B6A5B6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B6A5B6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v16,
    selectMtUsrSvtIdList,
    (const MethodInfo_35D4D2C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v17,
            (const MethodInfo_335EEEC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v17.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BE4D28(0LL, v12);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1BE4D28(0LL, v14);
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int64_t)current,
               (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v17,
    (const MethodInfo_335EEE8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_1BE4D28(selectMtUsrSvtIdList, method);
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

  if ( (byte_4B6A5B9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NpCombineControl_OnClickMaterialSelectList__, method);
    byte_4B6A5B9 = 1;
  }
  v3 = Method_NpCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_NpCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BE4D28(0LL, v5);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall NpCombineControl__OnClickSwitchButton(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseUserServantEntity; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B6A5C0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NpCombineControl_OnClickSwitchButton__, method);
    byte_4B6A5C0 = 1;
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
      sub_1BE4D28(baseUserServantEntity, v3);
    }
    UILabel__set_text((UILabel_o *)baseUserServantEntity, transformInfo->fields.titleText, 0LL);
  }
  v5 = Method_NpCombineControl_OnClickSwitchButton__;
  if ( (*((_BYTE *)Method_NpCombineControl_OnClickSwitchButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_NpCombineControl_OnClickSwitchButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_object__o *v28; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  UnityEngine_Object_o *charaGraph; // x20
  PartyOrganizationUtility_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4B6A5A5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v6);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_915/*"-"*/, v9);
    sub_1BE4ACC(&StringLiteral_9365/*"NEED_QP_INFO"*/, v10);
    byte_4B6A5A5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9365/*"NEED_QP_INFO"*/, 0LL);
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
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.combineEventList,
    (int64_t)combineEventList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = (System_Collections_Generic_List_object__o *)this->fields.combineEventList;
  if ( v28 && v28->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      v28,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v42 = v41;
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v29 )
        break;
      if ( !v42.fields._current )
        sub_1BE4D28(v29, v30);
      if ( HIDWORD(v42.fields._current[1].klass) == 10 )
      {
        if ( !this->fields.menuListCtr )
          sub_1BE4D28(v29, v30);
        MenuListControl__setBannerIcon(
          (MenuListControl_o *)v29,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v42.fields._current[5].klass,
          v31);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    p_charaGraph = (PartyOrganizationUtility_o *)&this->fields.charaGraph;
    helpBtn = p_charaGraph->klass;
    if ( p_charaGraph->klass )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)helpBtn,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_1BE4A70(p_charaGraph, 0LL, v35, v36, v37, v38, v39, v40);
      return;
    }
LABEL_35:
    sub_1BE4D28(helpBtn, v11);
  }
}


void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  __int64 scrollView; // x0
  UnityEngine_Transform_o *v4; // x20
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6A5BD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B6A5BD = 1;
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
  if ( !byte_4B612E1 )
  {
    scrollView = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B612E1 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  scrollView = (__int64)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  scrollView = (__int64)UnityEngine_Component__GetComponent_object_(
                          (UnityEngine_Component_o *)scrollView,
                          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BE4D28(scrollView, method);
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
  UICharaGraphTexture_o *TexturePrefab_38813936; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4B6A5A9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (NpCombineControl_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B6A5A9 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v24, 0LL);
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
    TexturePrefab_38813936 = CharaGraphManager__CreateTexturePrefab_38813936(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_38813936;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_38813936,
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
LABEL_14:
    sub_1BE4D28(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_41797436((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UIIconLabel_o *iconLabel; // x22
  int32_t lv; // w23
  int64_t LevelMax; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_String_array **p_assetList; // x22
  System_String_array *v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_String_array *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_String_array *assetList; // x22
  unsigned __int64 v48; // x23
  __int64 v49; // x29
  int32_t TransformedServantId; // w0
  __int64 v51; // x25
  __int64 v52; // x26
  int32_t v53; // w24
  int32_t v54; // w25
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Action_o *v61; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4B6A5A8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, usrSvtEn);
    sub_1BE4ACC(&AssetManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_NpCombineControl_SetCombineNpList__, v6);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1BE4ACC(&string___TypeInfo, v9);
    byte_4B6A5A8 = 1;
  }
  if ( usrSvtEn )
  {
    v11 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v11;
    *(_QWORD *)&v62.fields.fakeValue = v10;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v62, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    p_baseUserServantEntity = &this->fields.baseUserServantEntity;
    this->fields.baseSvtId = v12;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
      (int64_t)usrSvtEn,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_26;
    UIIconLabel__Set_39141664(iconLabel, 2, lv, LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = (int64_t)this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v24);
    this->fields.svtNpDataList = SvtNpData;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.svtNpDataList,
      (int64_t)SvtNpData,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    p_assetList = &this->fields.assetList;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetList, 0LL) )
    {
      v33 = *p_assetList;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_38706752(v33, 0LL);
      *p_assetList = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v34, v35, v36, v37, v38, v39);
    }
    v40 = (struct System_String_array *)sub_1BE4B74(string___TypeInfo, (unsigned int)this->fields.transformTotal);
    this->fields.assetList = v40;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetList, (int64_t)v40, v41, v42, v43, v44, v45, v46);
    assetList = this->fields.assetList;
    if ( this->fields.transformTotal >= 1 )
    {
      v48 = 0LL;
      v49 = 32LL;
      while ( 1 )
      {
        LevelMax = (int64_t)*p_baseUserServantEntity;
        if ( !*p_baseUserServantEntity )
          break;
        TransformedServantId = UserServantEntity__GetTransformedServantId((UserServantEntity_o *)LevelMax, v48, 0LL);
        v52 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
        v51 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
        v53 = TransformedServantId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v63.fields.currentCryptoKey = v52;
        *(_QWORD *)&v63.fields.fakeValue = v51;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v63, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        LevelMax = (int64_t)ServantAssetLoadManager__getCommandCardLoadFolderName(v53, v54, 0LL);
        if ( !assetList )
          break;
        if ( v48 >= assetList->max_length )
          sub_1BE4D30(LevelMax, v23);
        *(Il2CppClass **)((char *)&assetList->obj.klass + v49) = (Il2CppClass *)LevelMax;
        sub_1BE4A70((PartyOrganizationUtility_o *)((char *)assetList + v49), LevelMax, v55, v56, v57, v58, v59, v60);
        assetList = this->fields.assetList;
        ++v48;
        v49 += 8LL;
        if ( (__int64)v48 >= this->fields.transformTotal )
          goto LABEL_22;
      }
LABEL_26:
      sub_1BE4D28(LevelMax, v23);
    }
LABEL_22:
    v61 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_38704408(assetList, v61, 1, 0LL);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t transformTotal; // w20
  const MethodInfo *v27; // x2
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UserServantEntity_o *baseUserServantEntity; // x21
  ServantNpInfoIconComponent_o *v38; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x0
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v43; // x8
  bool isScrollNpInfo; // w1
  int v45; // w22
  struct UICenterOnChild_o *v46; // x20
  SpringPanel_OnFinished_o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int i; // w24
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x21
  UnityEngine_Transform_o *v60; // x2
  UnityEngine_Object_o *v61; // x21
  System_String_o *v62; // x0
  Il2CppObject *Component_object; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x1
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF
  TransformServantInfo_o *transformInfo; // [xsp+38h] [xbp-68h] BYREF
  int32_t idx; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4B6A5AE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v5);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v10);
    sub_1BE4ACC(&Method_NpCombineControl_OnCenterOnChildFinished__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&SpringPanel_OnFinished_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_5072/*"D3"*/, v14);
    byte_4B6A5AE = 1;
  }
  idx = 0;
  transformInfo = 0LL;
  memset(&v67, 0, sizeof(v67));
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
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
              (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v19;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.centerChild, (int64_t)v19, v20, v21, v22, v23, v24, v25);
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
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.targetObject,
          (int64_t)Object,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        wrapContent = (UnityEngine_Component_o *)this->fields.targetObject;
        if ( wrapContent )
        {
          wrapContent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)wrapContent,
                                                     (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( this->fields.svtNpDataList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v38 = (ServantNpInfoIconComponent_o *)wrapContent;
            wrapContent = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)this->fields.svtNpDataList,
                                                       this->fields.displayTransformIndex,
                                                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
            if ( v38 )
            {
              ServantNpInfoIconComponent__SetNpInfo(
                v38,
                baseUserServantEntity,
                0,
                (SvtUseNpData_o *)wrapContent,
                3.0,
                10.0,
                0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
              GameObjectExtensions__SetLocalPositionY(gameObject, -18.5, 0LL);
              v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
              GameObjectExtensions__SetLocalScale_34488912(v40, this->fields.scaleOffset, 0LL);
              this->fields.isSelectBase = 1;
              NpCombineControl__SetSelectMaterialEnable(this, v41);
              NpCombineControl__SetSvtNpCombineData(this, v42);
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
      sub_1BE4D28(wrapContent, currentMoveIdx);
    }
    v43 = this->fields.svtNpDataList;
    if ( !v43 )
      goto LABEL_54;
    if ( v43->fields._size >= 2 )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
      this->fields.isScrollNpInfo = 1;
      if ( !wrapContent )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
      v46 = this->fields.centerChild;
      v47 = (SpringPanel_OnFinished_o *)sub_1BE4D18(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v47, (Il2CppObject *)this, Method_NpCombineControl_OnCenterOnChildFinished__, 0LL);
      if ( !v46 )
        goto LABEL_54;
      v46->fields.onFinished = v47;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v46->fields.onFinished, (int64_t)v47, v48, v49, v50, v51, v52, v53);
      v45 = 2;
      isScrollNpInfo = this->fields.isScrollNpInfo;
    }
    else
    {
      isScrollNpInfo = 0;
      v45 = 1;
      this->fields.isScrollNpInfo = 0;
    }
    NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v27);
    idx = 0;
    for ( i = 0; i != v45; ++i )
    {
      wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
      if ( !wrapContent )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v66,
        (System_Collections_Generic_List_object__o *)wrapContent,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
      v67 = v66;
      while ( 1 )
      {
        v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v67,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
        if ( !v55 )
          break;
        current = v67.fields._current;
        if ( !v67.fields._current )
          sub_1BE4D28(v55, v56);
        if ( ((__int64)v67.fields._current[1].monitor & 0x80000000) == 0 )
        {
          v58 = (UnityEngine_Component_o *)this->fields.wrapContent;
          if ( !v58 )
            sub_1BE4D28(0LL, v56);
          v59 = this->fields.npCombineInfoPrefab;
          v60 = UnityEngine_Component__get_transform(v58, 0LL);
          v61 = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v59, v60, 0LL, 0LL);
          v62 = System_Int32__ToString_63504416((int32_t)&idx, (System_String_o *)StringLiteral_5072/*"D3"*/, 0LL);
          if ( !v61 )
            sub_1BE4D28(v62, v62);
          UnityEngine_Object__set_name(v61, v62, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v61,
                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
          if ( !Component_object )
            sub_1BE4D28(0LL, v64);
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
        &v67,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
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
    NpCombineControl__SetSvtNpCombineData(this, v65);
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
    sub_1BE4D28(combineBtn, isCombine);
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
      sub_1BE4D28(scrollView, enabled);
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

  if ( (byte_4B6A5B5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4B6A5B5 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1BE4D28(combineBtnBg, method);
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

  if ( (byte_4B6A5A7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, method);
    byte_4B6A5A7 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63504416((int)this + 392, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BE4D28(SelfUserGame, v4);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  unsigned __int64 v31; // x22
  struct System_Int64_array *v32; // x8
  int64_t v33; // x24
  UnityEngine_GameObject_o *materialSvtPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v36; // x25
  UnityEngine_Transform_o *v37; // x26
  int v38; // s0
  UnityEngine_Transform_o *v41; // x26
  Il2CppObject *Component_object; // x25
  NpMaterialSvtInfo_ClickDelegate_o *v43; // x26
  const MethodInfo *v44; // x3
  UserServantEntity_o *v45; // x2
  const MethodInfo *v46; // x5
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
  __int64 v63; // x1
  float v64; // s0
  int v65; // w8
  UILabel_o *qpLb; // x22
  float v67; // s1
  float v68; // s0
  float v69; // s3
  float v70; // s2
  struct SetLevelUpData_o *v71; // x8
  int32_t spendQpVal; // w9
  bool v73; // w20
  float v74; // s0
  float v75; // s1
  float v76; // s2
  float v77; // s3
  const MethodInfo *v78; // x1
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B6A5B1 & 1) == 0 )
  {
    sub_1BE4ACC(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, data);
    sub_1BE4ACC(&Method_CombineMenuControl_OnClickMaterial__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v10);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BE4ACC(&StringLiteral_9359/*"N0"*/, v18);
    byte_4B6A5B1 = 1;
  }
  tmpTargetLv = 0;
  memset(&v80, 0, sizeof(v80));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_62;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_62;
  v22 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v23 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v23;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.selectMtUsrSvtIdList,
    (int64_t)v23,
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
  do
  {
    v32 = data->fields.materialUsrSvtIdList;
    if ( !v32 )
      goto LABEL_62;
    if ( v31 >= v32->max_length )
LABEL_63:
      sub_1BE4D30(materialGrid, v20);
    materialGrid = (__int64)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_62;
    v33 = v32->m_Items[v31];
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
    v36 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)materialGrid, 0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_62;
    v37 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (__int64)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.materialGrid,
                              0LL);
    if ( !materialGrid )
      goto LABEL_62;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v37 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
    materialGrid = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
    v41 = (UnityEngine_Transform_o *)materialGrid;
    if ( !byte_4B612E1 )
    {
      materialGrid = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v20);
      byte_4B612E1 = 1;
    }
    if ( !v41 )
      goto LABEL_62;
    UnityEngine_Transform__set_localPosition(v41, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v36,
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v43 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_1BE4D18(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(
      v43,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      v44);
    if ( !Component_object )
      goto LABEL_62;
    NpMaterialSvtInfo__setMaterialSvtInfo((NpMaterialSvtInfo_o *)Component_object, v31, v45, v33, v43, v46);
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
        v33,
        *(const MethodInfo_35D4258 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      *(_DWORD *)(materialGrid + 24) = v49 + 1;
      *(_QWORD *)(v47 + 8 * v49 + 32) = v33;
    }
    ++v31;
  }
  while ( (unsigned int)v22 != v31 );
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
      materialGrid = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)materialGrid,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_62;
      materialGrid = (__int64)DataMasterBase_object__object__long___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)materialGrid,
                                v56,
                                (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v79,
      combineEventList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v80 = v79;
    while ( 1 )
    {
      v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v80,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v62 )
        break;
      if ( !v80.fields._current )
        sub_1BE4D28(v62, v63);
      if ( HIDWORD(v80.fields._current[1].klass) == 10 )
      {
        v64 = *(float *)&v80.fields._current[3].monitor * (float)*p_spendQpVal;
        v65 = (int)v64;
        if ( v64 == INFINITY )
          v65 = 0x80000000;
        *p_spendQpVal = v65;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v80,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (__int64)System_Int32__ToString_63504416((int)this + 396, (System_String_o *)StringLiteral_9359/*"N0"*/, 0LL);
  if ( !qpLb )
    goto LABEL_62;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  materialGrid = (__int64)this->fields.qpLb;
  v67 = 0.0;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
    v67 = 1.0;
  if ( !materialGrid )
    goto LABEL_62;
  v68 = 1.0;
  v69 = 1.0;
  v70 = v67;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)(&v67 - 1), 0LL);
  v71 = this->fields.lvUpData;
  if ( !v71 )
    goto LABEL_62;
  v71->fields.nextLv = v51;
  spendQpVal = this->fields.spendQpVal;
  v71->fields.spendQp = spendQpVal;
  materialGrid = (__int64)this->fields.qpLb;
  if ( this->fields.haveQpVal >= spendQpVal )
  {
    if ( materialGrid )
    {
      v74 = 1.0;
      v73 = 1;
      v75 = 1.0;
      goto LABEL_60;
    }
LABEL_62:
    sub_1BE4D28(materialGrid, v20);
  }
  if ( !materialGrid )
    goto LABEL_62;
  v73 = 0;
  v74 = 1.0;
  v75 = 0.0;
LABEL_60:
  v76 = v75;
  v77 = v74;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v74, 0LL);
  this->fields._IsExeCombine_k__BackingField = v73;
  NpCombineControl__SetExeBtnState(this, v78);
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
    sub_1BE4D28(v4, v5);
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
    sub_1BE4D28(preSelectBaseLb, method);
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
  if ( (byte_4B6A5B8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_7252/*"HEADER_MSG_NPUP_MATERIAL"*/, v6);
    sub_1BE4ACC(&StringLiteral_5881/*"EXE_SUMMON_COMBINE_TXT"*/, v7);
    sub_1BE4ACC(&StringLiteral_7505/*"INFO_MSG_NPUP_BASE"*/, v8);
    sub_1BE4ACC(&StringLiteral_12298/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    byte_4B6A5B8 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1BE4D28(detailInfoLb, *(_QWORD *)&state);
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
      v13 = &StringLiteral_5881/*"EXE_SUMMON_COMBINE_TXT"*/;
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
      v13 = &StringLiteral_12298/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7252/*"HEADER_MSG_NPUP_MATERIAL"*/;
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
    v13 = &StringLiteral_7505/*"INFO_MSG_NPUP_BASE"*/;
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
  long double v16; // q0
  __int64 v17; // x0
  DataManager_o *v18; // x24
  int32_t v19; // w25
  char *v20; // x23
  UILabel_o *currentInfoLb; // x24
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w24
  UserServantEntity_o *baseUserServantEntity; // x24
  System_Int64_array *v26; // x0
  const MethodInfo *v27; // x3
  SetLevelUpData_o *v28; // x26
  struct SetLevelUpData_o **p_lvUpData; // x25
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct PartyOrganizationUtility_TemporaryPartyInfo_o *v56; // d0
  PartyOrganizationUtility_o *v57; // x0
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B6A5B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v6);
    sub_1BE4ACC(&SetLevelUpData_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_1BE4ACC(&StringLiteral_1209/*"0"*/, v9);
    byte_4B6A5B0 = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
  {
    Item = (char *)this->fields.svtNpDataList;
    if ( !Item )
      goto LABEL_29;
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Item,
                     0,
                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_SvtUseNpData__get_Item__);
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
      v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1C369A8(v16);
      Item = *(char **)(*(_QWORD *)(v17 + 192) + 16LL);
      if ( (Item[309] & 1) == 0 )
        Item = (char *)sub_1C369A8(v16);
      v18 = (DataManager_o *)**((_QWORD **)Item + 23);
      if ( !v18 )
        goto LABEL_29;
      Item = (char *)DataManager__GetMasterData_object_(
                       v18,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Item )
        goto LABEL_29;
      Item = (char *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                       (TreasureDvcMaster_o *)Item,
                       *((_DWORD *)v14 + 4),
                       v13,
                       0LL);
      if ( !Item )
        goto LABEL_29;
      v19 = *((_DWORD *)Item + 12);
      v20 = Item;
      Item = (char *)DataManager__GetMasterData_object_(
                       v18,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
      if ( v15 < v19 )
      {
        selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
        NpLv = v15;
        if ( selectMtUsrSvtIdList )
        {
          baseUserServantEntity = this->fields.baseUserServantEntity;
          v26 = System_Collections_Generic_List_long___ToArray(
                  selectMtUsrSvtIdList,
                  (const MethodInfo_35D5D10 *)Method_System_Collections_Generic_List_long__ToArray__);
          NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v26, &tmpTargetLv, v27);
        }
        v28 = (SetLevelUpData_o *)sub_1BE4D18(SetLevelUpData_TypeInfo);
        SetLevelUpData___ctor(v28, 0LL);
        p_lvUpData = &this->fields.lvUpData;
        this->fields.lvUpData = v28;
        sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.lvUpData, (int64_t)v28, v30, v31, v32, v33, v34, v35);
        Item = (char *)this->fields.lvUpData;
        if ( Item )
        {
          *((_DWORD *)Item + 4) = v13;
          *(_QWORD *)(Item + 20) = 1LL;
          Item[112] = v14[65];
          v42 = *((_QWORD *)v20 + 4);
          *((_QWORD *)Item + 4) = v42;
          sub_1BE4A70((PartyOrganizationUtility_o *)(Item + 32), v42, v36, v37, v38, v39, v40, v41);
          Item = (char *)*p_lvUpData;
          if ( *p_lvUpData )
          {
            v49 = *((_QWORD *)v20 + 3);
            *((_QWORD *)Item + 5) = v49;
            sub_1BE4A70((PartyOrganizationUtility_o *)(Item + 40), v49, v43, v44, v45, v46, v47, v48);
            Item = (char *)*p_lvUpData;
            if ( *p_lvUpData )
            {
              *((_DWORD *)Item + 16) = v15;
              *((_DWORD *)Item + 17) = NpLv;
              v56 = *(struct PartyOrganizationUtility_TemporaryPartyInfo_o **)&this->fields.spendQpVal;
              *((_QWORD *)Item + 12) = 0LL;
              v57 = (PartyOrganizationUtility_o *)(Item + 96);
              *(struct PartyOrganizationUtility_TemporaryPartyInfo_o **)((char *)&v57[-1].fields.temporaryPartyInfo + 4) = v56;
              sub_1BE4A70(v57, 0LL, v50, v51, v52, v53, v54, v55);
              return;
            }
          }
        }
LABEL_29:
        sub_1BE4D28(Item, v11);
      }
      this->fields._IsExeCombine_k__BackingField = 0;
      NpCombineControl__SetExeBtnState(this, v22);
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