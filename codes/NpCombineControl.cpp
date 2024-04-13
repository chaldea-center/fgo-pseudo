void __fastcall NpCombineControl___ctor(NpCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall NpCombineControl__ChangeTargetInfo(NpCombineControl_o *this, bool isdecide, const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *targetObject; // x20
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_42E91E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, isdecide, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E91E5 = 1;
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
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
      {
        sub_B5D69C(Component_srcLineSprite, v9);
      }
      ServantNpInfoIconComponent__setDispSelectMskImg((ServantNpInfoIconComponent_o *)Component_srcLineSprite, 1, 0LL);
    }
    NpCombineControl__SetSvtNpCombineData(this, v9);
  }
}


bool __fastcall NpCombineControl__CheckConfirm(int64_t myUserSvtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantEntity_o *Entity; // x0
  const MethodInfo *v14; // x1

  if ( (byte_42E91F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E91F2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             myUserSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return NpCombineControl__CheckConfirm_26143828(Entity, v14);
}


bool __fastcall NpCombineControl__CheckConfirm_26143828(UserServantEntity_o *selectUsrSvtEnt, const MethodInfo *method)
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
    sub_B5D69C(selectUsrSvtEnt, method);
  v4 = *(_DWORD *)(hiddenValue + 24);
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= v4 )
      {
        v7 = sub_B5D6C8(selectUsrSvtEnt);
        sub_B5D668(v7, 0LL);
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
  __int64 v3; // x3
  NpCombineControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t currentId; // w21

  v5 = this;
  if ( (byte_42E91ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, (_DWORD)resData, (_DWORD)method, v3);
    this = (NpCombineControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E91ED = 1;
  }
  lvUpData = v5->fields.lvUpData;
  if ( !lvUpData
    || (currentId = lvUpData->fields.currentId,
        (this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL
    || (this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       (TreasureDvcMaster_o *)this,
                                       v5->fields.baseSvtId,
                                       currentId,
                                       0LL)) == 0LL
    || !resData )
  {
    sub_B5D69C(this, resData);
  }
  return resData->fields.treasureDeviceLv1 >= SLODWORD(this->fields.charaGraphBase);
}


void __fastcall NpCombineControl__DestroyGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *wrapContent; // x0
  int32_t childCount; // w0
  int32_t v10; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array *battleLoadList; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42E91E9 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E91E9 = 1;
  }
  wrapContent = (UnityEngine_Component_o *)this->fields.wrapContent;
  if ( !wrapContent )
    goto LABEL_19;
  wrapContent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(wrapContent, 0LL);
  if ( !wrapContent )
    goto LABEL_19;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)wrapContent, 0LL);
  v10 = childCount - 1;
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
                                                 v10,
                                                 0LL);
      if ( !wrapContent )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(wrapContent, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
      if ( --v10 < 0 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B5D69C(wrapContent, method);
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
    AssetManager__releaseAssetStorage_30666128(battleLoadList, 0LL);
    this->fields.battleLoadList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.battleLoadList, 0LL, v13, v14, v15, v16, v17, v18);
  }
  NpCombineControl__ResetScrollView(this, method);
}


void __fastcall NpCombineControl__DestroyMaterialGrid(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *materialGrid; // x0
  int32_t childCount; // w0
  int32_t v10; // w20
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0

  if ( (byte_42E91EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E91EA = 1;
  }
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_16;
  materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(materialGrid, 0LL);
  if ( !materialGrid )
    goto LABEL_16;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)materialGrid, 0LL);
  v10 = childCount - 1;
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
                                                  v10,
                                                  0LL);
      if ( !materialGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(materialGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      if ( --v10 < 0 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B5D69C(materialGrid, method);
  }
LABEL_13:
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  if ( selectMtUsrSvtIdList )
    System_Collections_Generic_List_long___Clear(
      selectMtUsrSvtIdList,
      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
}


UserServantEntity_o *__fastcall NpCombineControl__GetBaseUsrSvtData(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  NpCombineControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UserServantEntity_o *v14; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x19
  struct UserServantEntity_o *baseUserServantEntity; // t1
  __int128 v17; // q1
  int64_t v18; // x20
  System_Int32_array **Entity; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42E91E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9, v10);
    this = (NpCombineControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E91E8 = 1;
  }
  baseUserServantEntity = v4->fields.baseUserServantEntity;
  p_baseUserServantEntity = (BattleServantConfConponent_o *)&v4->fields.baseUserServantEntity;
  v14 = baseUserServantEntity;
  if ( !baseUserServantEntity )
    goto LABEL_10;
  v17 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v17;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v27 = v28;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v27, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  Entity = (System_Int32_array **)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                    v18,
                                    (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)Entity;
  sub_B5D560(p_baseUserServantEntity, Entity, v20, v21, v22, v23, v24, v25);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x20
  __int64 v23; // x20
  int v24; // w24
  bool v25; // cc
  int v26; // w23
  DataManager_o *v27; // x20
  int32_t v28; // w25
  System_Collections_Generic_HashSet_int__o *CorrespondsCostume; // x22
  int32_t v30; // w21

  if ( (byte_42E91E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitImageMaster___,
      svtId,
      cardLimitCount,
      *(_QWORD *)&condLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v13, v14, v15);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v16, v17, v18);
    this = (NpCombineControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19, v20, v21);
    byte_42E91E3 = 1;
  }
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v23 = **(_QWORD **)(v22 + 192);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AF52C4(v23);
  v24 = condLimitCount - 1;
  v25 = index < 1;
  if ( index >= 1 )
    v26 = -1;
  else
    v26 = condLimitCount - 1;
  v27 = **(DataManager_o ***)(v23 + 184);
  if ( v25 )
    v28 = -1;
  else
    v28 = condLimitCount;
  if ( !v27 )
    goto LABEL_32;
  this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v27,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
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
  v30 = (int)this;
  if ( (v28 & 0x80000000) == 0 && (_DWORD)this != v28 )
  {
    if ( (int)this < 11 )
      goto LABEL_23;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    this = (NpCombineControl_o *)System_Collections_Generic_HashSet_int___Contains(
                                   CorrespondsCostume,
                                   (int32_t)this,
                                   (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
    if ( ((unsigned __int8)this & 1) == 0 )
LABEL_23:
      v30 = v28;
  }
  if ( (v26 & 0x80000000) == 0 && v30 > v26 )
  {
    if ( v30 < 11 )
      goto LABEL_29;
    if ( !CorrespondsCostume )
      goto LABEL_32;
    if ( System_Collections_Generic_HashSet_int___Contains(
           CorrespondsCostume,
           v30,
           (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_29:
      v30 = v24;
    }
  }
  this = (NpCombineControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v27,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !this )
LABEL_32:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  return ServantLimitImageMaster__GetServantLimitCountSealAfter((ServantLimitImageMaster_o *)this, svtId, v30, 0LL);
}


int32_t __fastcall NpCombineControl__GetLimitCountForSingle(
        NpCombineControl_o *this,
        int32_t svtId,
        int32_t cardLimitCount,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  int32_t LimitCountByImageLimitCostumeIn; // w20
  __int64 v14; // x21
  __int64 v15; // x21
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_42E91E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, svtId, cardLimitCount, method);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9, v10, v11);
    byte_42E91E2 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(cardLimitCount, 0LL);
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v15 = **(_QWORD **)(v14 + 192);
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    sub_AF52C4(v15);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v15 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v12);
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
  ServantTreasureDeviceAddEntity_o *v5; // x19
  TreasureDvcInfo_o *v6; // x23
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x22
  __int64 v38; // x22
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  TreasureDvcMaster_o *v40; // x27
  unsigned __int64 v41; // x24
  struct System_Int32_array *treasureDeviceIds; // x8
  int32_t v43; // w25
  __int64 v44; // x22
  __int64 v45; // x26
  DataManager_o *v46; // x26
  int32_t v47; // w0
  struct System_Int32_array *hideCardChara; // x8
  int32_t *p_lastFrameTime; // x9
  int32_t v50; // w20
  int32_t v51; // w22
  TreasureDvcInfo_o *v52; // x19
  bool v53; // w28
  __int64 v54; // x27
  __int64 v55; // x22
  __int64 v56; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **lookup; // x1
  System_Int32_array **datalist; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int32_t DispLimitCount; // w22
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  NpCombineControl_o *v79; // x0
  const MethodInfo *v80; // x5
  __int64 v82; // x0
  int32_t *p_cardId; // [xsp+8h] [xbp-88h]
  TreasureDvcMaster_o *v84; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // [xsp+18h] [xbp-78h]
  ServantTreasureDeviceAddEntity_o *v86; // [xsp+20h] [xbp-70h]
  int32_t tdGuageCount[2]; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *tdExplanation; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *tdName; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  v5 = tdAddEntity;
  v6 = tdInfo;
  if ( (byte_42E91E1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)usrSvtData, (_DWORD)tdInfo, tdAddEntity);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int___, v11, v12, v13);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v29, v30, v31);
    sub_B5D5C4(&SvtUseNpData_TypeInfo, v32, v33, v34);
    byte_42E91E1 = 1;
  }
  tdName = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  tdExplanation = 0LL;
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v38 = **(_QWORD **)(v37 + 192);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AF52C4(v38);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v38 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !v5 )
    goto LABEL_37;
  v40 = (TreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.treasureDeviceIds,
                                                          (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
  if ( (int)MasterData_WarQuestSelectionMaster >= 1 )
  {
    v41 = 0LL;
    p_cardId = &v6->fields.cardId;
    v84 = v40;
    v85 = v35;
    v86 = v5;
    while ( 1 )
    {
      treasureDeviceIds = v5->fields.treasureDeviceIds;
      if ( !treasureDeviceIds )
        break;
      if ( v41 >= treasureDeviceIds->max_length )
        goto LABEL_38;
      if ( !usrSvtData )
        break;
      v43 = treasureDeviceIds->m_Items[v41 + 1];
      v44 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v90.fields.currentCryptoKey = v44;
      *(_QWORD *)&v90.fields.fakeValue = v45;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                              v90,
                                                              0LL);
      if ( !v40 )
        break;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                                              v40,
                                                              (int32_t)MasterData_WarQuestSelectionMaster,
                                                              v43,
                                                              0LL);
      if ( !v6 )
        break;
      v46 = MasterData_WarQuestSelectionMaster;
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
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(usrSvtData->fields.svtId, 0LL);
      MasterData_WarQuestSelectionMaster = (DataManager_o *)ServantTreasureDvcMaster__getEntityFromIDID(v47, v43, 0LL);
      hideCardChara = v5->fields.hideCardChara;
      p_lastFrameTime = (int32_t *)&MasterData_WarQuestSelectionMaster->fields.lastFrameTime;
      if ( !MasterData_WarQuestSelectionMaster )
        p_lastFrameTime = p_cardId;
      if ( !hideCardChara )
        break;
      if ( v41 >= hideCardChara->max_length )
      {
LABEL_38:
        v82 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
        sub_B5D668(v82, 0LL);
      }
      v50 = *p_lastFrameTime;
      v51 = hideCardChara->m_Items[v41 + 1];
      v52 = v6;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v53 = System_Convert__ToBoolean_42776788(v51, 0LL);
      v54 = sub_B5D694(SvtUseNpData_TypeInfo);
      SvtUseNpData___ctor((SvtUseNpData_o *)v54, 0LL);
      v56 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
      v55 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v91.fields.currentCryptoKey = v56;
      *(_QWORD *)&v91.fields.fakeValue = v55;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                              v91,
                                                              0LL);
      if ( !v54 )
        break;
      *(_DWORD *)(v54 + 16) = (_DWORD)MasterData_WarQuestSelectionMaster;
      *(_DWORD *)(v54 + 20) = v43;
      v6 = v52;
      *(_DWORD *)(v54 + 24) = v52->fields.id;
      *(_DWORD *)(v54 + 28) = v52->fields.lv;
      lookup = (System_Int32_array **)v46->fields.lookup;
      *(_QWORD *)(v54 + 32) = lookup;
      sub_B5D560((BattleServantConfConponent_o *)(v54 + 32), lookup, v57, v58, v59, v60, v61, v62);
      datalist = (System_Int32_array **)v46->fields.datalist;
      *(_QWORD *)(v54 + 40) = datalist;
      sub_B5D560((BattleServantConfConponent_o *)(v54 + 40), datalist, v65, v66, v67, v68, v69, v70);
      *(_DWORD *)(v54 + 48) = v50;
      *(_DWORD *)(v54 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      *(_DWORD *)(v54 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
      v72 = (System_Int32_array **)tdExplanation;
      *(_QWORD *)(v54 + 56) = tdExplanation;
      sub_B5D560((BattleServantConfConponent_o *)(v54 + 56), v72, v73, v74, v75, v76, v77, v78);
      v5 = v86;
      *(_BYTE *)(v54 + 65) = 1;
      *(_BYTE *)(v54 + 64) = v53;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)NpCombineControl__GetLimitCountForMulti(
                                                              v79,
                                                              *(_DWORD *)(v54 + 16),
                                                              *(_DWORD *)(v54 + 72),
                                                              v86->fields.condLimitCount,
                                                              v41,
                                                              v80);
      v35 = v85;
      *(_DWORD *)(v54 + 68) = (_DWORD)MasterData_WarQuestSelectionMaster;
      if ( !v85 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v85,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
      ++v41;
      MasterData_WarQuestSelectionMaster = (DataManager_o *)System_Linq_Enumerable__Count_int_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v86->fields.treasureDeviceIds,
                                                              (const MethodInfo_1CA78DC *)Method_System_Linq_Enumerable_Count_int___);
      v40 = v84;
      if ( (__int64)v41 >= (int)MasterData_WarQuestSelectionMaster )
        return (System_Collections_Generic_List_SvtUseNpData__o *)v35;
    }
LABEL_37:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v36);
  }
  return (System_Collections_Generic_List_SvtUseNpData__o *)v35;
}


int32_t __fastcall NpCombineControl__GetNpLv(
        UserServantEntity_o *baseUsrSvtData,
        System_Int64_array *mtSvtIdList,
        int32_t *tmpTargetLv,
        const MethodInfo *method)
{
  System_Int64_array *v5; // x21
  UserServantEntity_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  int64_t v15; // x22
  UserServantEntity_o *v16; // x22
  int32_t treasureDeviceLv1; // w8
  __int64 v19; // x0
  int32_t tdMaxLv[2]; // [xsp+8h] [xbp-48h] BYREF

  v5 = mtSvtIdList;
  v6 = baseUsrSvtData;
  if ( (byte_42E91F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)mtSvtIdList, (_DWORD)tmpTargetLv, method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8, v9);
    baseUsrSvtData = (UserServantEntity_o *)sub_B5D5C4(
                                              &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                              v10,
                                              v11,
                                              v12);
    byte_42E91F0 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *tmpTargetLv = 0;
  if ( !v5 )
    goto LABEL_17;
  v13 = *(_QWORD *)&v5->max_length;
  if ( (int)v13 < 1 )
  {
    mtSvtIdList = 0LL;
    if ( v6 )
      return UserServantEntity__checkTreasureDeviceLevelUp(v6, (int32_t)mtSvtIdList, 0LL);
LABEL_17:
    sub_B5D69C(baseUsrSvtData, mtSvtIdList);
  }
  v14 = 0LL;
  do
  {
    if ( v14 >= (unsigned int)v13 )
    {
      v19 = sub_B5D6C8(baseUsrSvtData);
      sub_B5D668(v19, 0LL);
    }
    v15 = v5->m_Items[v14];
    baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)baseUsrSvtData,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    baseUsrSvtData = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseUsrSvtData,
                       v15,
                       (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !baseUsrSvtData )
      goto LABEL_17;
    v16 = baseUsrSvtData;
    baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__IsMaterialTd(baseUsrSvtData, 0LL);
    if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
    {
      treasureDeviceLv1 = v16->fields.treasureDeviceLv1;
      tdMaxLv[1] = treasureDeviceLv1;
    }
    else
    {
      baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getTreasureDeviceInfo_21848072(
                                                v16,
                                                &tdMaxLv[1],
                                                tdMaxLv,
                                                0LL);
      treasureDeviceLv1 = tdMaxLv[1];
    }
    ++v14;
    mtSvtIdList = (System_Int64_array *)(unsigned int)(treasureDeviceLv1 + *tmpTargetLv);
    *tmpTargetLv = (int)mtSvtIdList;
    LODWORD(v13) = v5->max_length;
  }
  while ( (__int64)v14 < (int)v13 );
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
  int32_t v5; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t v10; // w22
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  TreasureDvcLvEntity_o *Entity; // x0

  v5 = currentLv;
  if ( (byte_42E91F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, currentLv, resNpLv, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E91F1 = 1;
  }
  if ( v5 >= resNpLv )
    return 0;
  v10 = 0;
  do
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v12);
    }
    Entity = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Instance, currentId, v5, 0LL);
    if ( Entity )
      v10 += Entity->fields.qp;
    ++v5;
  }
  while ( v5 < resNpLv );
  return v10;
}


System_Collections_Generic_List_SvtUseNpData__o *__fastcall NpCombineControl__GetSvtNpData(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NpCombineControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x21
  __int64 v31; // x21
  DataManager_o *v32; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x23
  __int64 v35; // x24
  ServantTreasureDeviceAddMaster_o *v36; // x22
  int32_t v37; // w23
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x0
  ServantTreasureDeviceAddEntity_o *v39; // x22
  const MethodInfo *v40; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x19
  WarQuestSelectionMaster_o *v42; // x0
  __int64 v43; // x21
  __int64 v44; // x22
  TreasureDvcMaster_o *v45; // x20
  NpCombineControl_o *v46; // x21
  __int64 v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_Int32_array **combineRootComponent; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t DispLimitCount; // w19
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  int32_t v70; // w1
  int32_t v71; // w2
  NpCombineControl_o *v72; // x0
  const MethodInfo *v73; // x3
  int32_t tdGuageCount[2]; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *tdName; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *tdExplanation; // [xsp+18h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  v5 = this;
  if ( (byte_42E91E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___,
      (_DWORD)usrSvtData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v6, v7, v8);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtUseNpData__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtUseNpData___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_SvtUseNpData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24, v25, v26);
    this = (NpCombineControl_o *)sub_B5D5C4(&SvtUseNpData_TypeInfo, v27, v28, v29);
    byte_42E91E0 = 1;
  }
  tdInfo = 0LL;
  tdName = 0LL;
  tdExplanation = 0LL;
  *(_QWORD *)tdGuageCount = 0LL;
  if ( !usrSvtData )
    goto LABEL_31;
  this = (NpCombineControl_o *)UserServantEntity__getTreasureDeviceInfo(usrSvtData, &tdInfo, -1, -1, 0, 0LL);
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v31 = **(_QWORD **)(v30 + 192);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    this = (NpCombineControl_o *)sub_AF52C4(v31);
  v32 = **(DataManager_o ***)(v31 + 184);
  if ( !v32 )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v32,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDeviceAddMaster___);
  v35 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v36 = (ServantTreasureDeviceAddMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v79.fields.currentCryptoKey = v35;
  *(_QWORD *)&v79.fields.fakeValue = v34;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v79, 0LL);
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                 usrSvtData->fields.limitCount,
                                 0LL);
  if ( !v36 )
    goto LABEL_31;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v36, v37, (int32_t)this, 0, 0LL);
  if ( !EnableEntity )
  {
    v42 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            v32,
            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    v44 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    v45 = (TreasureDvcMaster_o *)v42;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v80.fields.currentCryptoKey = v44;
    *(_QWORD *)&v80.fields.fakeValue = v43;
    this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
    if ( tdInfo )
    {
      if ( v45 )
      {
        this = (NpCombineControl_o *)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                       v45,
                                       (int32_t)this,
                                       tdInfo->fields.id,
                                       0LL);
        if ( tdInfo )
        {
          v46 = this;
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
            v47 = sub_B5D694(SvtUseNpData_TypeInfo);
            SvtUseNpData___ctor((SvtUseNpData_o *)v47, 0LL);
            this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                           usrSvtData->fields.svtId,
                                           0LL);
            if ( v47 )
            {
              *(_DWORD *)(v47 + 16) = (_DWORD)this;
              *(_DWORD *)(v47 + 20) = v46->fields.m_CachedPtr;
              *(_DWORD *)(v47 + 24) = v46->fields.m_CachedPtr;
              if ( tdInfo )
              {
                *(_DWORD *)(v47 + 28) = tdInfo->fields.lv;
                v54 = *(System_Int32_array ***)&v46->fields.type;
                *(_QWORD *)(v47 + 32) = v54;
                sub_B5D560((BattleServantConfConponent_o *)(v47 + 32), v54, v48, v49, v50, v51, v52, v53);
                combineRootComponent = (System_Int32_array **)v46->fields.combineRootComponent;
                *(_QWORD *)(v47 + 40) = combineRootComponent;
                sub_B5D560(
                  (BattleServantConfConponent_o *)(v47 + 40),
                  combineRootComponent,
                  v56,
                  v57,
                  v58,
                  v59,
                  v60,
                  v61);
                if ( tdInfo )
                {
                  *(_DWORD *)(v47 + 48) = tdInfo->fields.cardId;
                  *(_DWORD *)(v47 + 72) = UserServantEntity__getCommandCardLimitCount(usrSvtData, 0, 0LL);
                  DispLimitCount = UserServantEntity__getDispLimitCount(usrSvtData, 0, 0LL);
                  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                  }
                  *(_DWORD *)(v47 + 76) = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(DispLimitCount, 0LL);
                  v63 = (System_Int32_array **)tdExplanation;
                  *(_QWORD *)(v47 + 56) = tdExplanation;
                  sub_B5D560((BattleServantConfConponent_o *)(v47 + 56), v63, v64, v65, v66, v67, v68, v69);
                  v70 = *(_DWORD *)(v47 + 16);
                  v71 = *(_DWORD *)(v47 + 72);
                  *(_WORD *)(v47 + 64) = 0;
                  *(_DWORD *)(v47 + 68) = NpCombineControl__GetLimitCountForSingle(v72, v70, v71, v73);
                  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtUseNpData__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v41,
                    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtUseNpData___ctor__);
                  if ( v41 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v41,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtUseNpData__Add__);
                    return (System_Collections_Generic_List_SvtUseNpData__o *)v41;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B5D69C(this, usrSvtData);
  }
  v39 = EnableEntity;
  EventTutorialMaster__CheckTutorial(-1, 69, 0LL, 0, 0, 0, 0, 0LL);
  return NpCombineControl__GetNpAddDataList(v5, usrSvtData, tdInfo, v39, v40);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *currentInfoLb; // x0
  UILabel_o *needQpLb; // x20
  UILabel_o *qpLb; // x20
  UIWidget_o *v14; // x20
  int v15; // s0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1

  if ( (byte_42E91DC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9367/*"NEED_QP_INFO"*/, v8, v9, v10);
    byte_42E91DC = 1;
  }
  currentInfoLb = this->fields.currentInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  currentInfoLb = this->fields.afterInfoLb;
  if ( !currentInfoLb )
    goto LABEL_15;
  UILabel__set_text(currentInfoLb, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
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
  currentInfoLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9367/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_15;
  UILabel__set_text(needQpLb, (System_String_o *)currentInfoLb, 0LL);
  qpLb = this->fields.qpLb;
  this->fields.spendQpVal = 0;
  currentInfoLb = (UILabel_o *)System_Int32__ToString((int)this + 316, 0LL);
  if ( !qpLb )
    goto LABEL_15;
  UILabel__set_text(qpLb, (System_String_o *)currentInfoLb, 0LL);
  v14 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
  if ( !v14
    || (UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v15, 0LL),
        NpCombineControl__SetHaveQpInfo(this, v19),
        NpCombineControl__SetSelectMaterialEnable(this, v20),
        (currentInfoLb = (UILabel_o *)this->fields.defaultNpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 1, 0LL),
        (currentInfoLb = (UILabel_o *)this->fields.arrowInfo) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(currentInfoLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentInfoLb, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v21);
  this->fields.currentMoveIdx = 0;
  NpCombineControl__ResetScrollView(this, v22);
}


void __fastcall NpCombineControl__InitInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v27; // x1
  int32_t klass; // w8
  UILabel_o *preSelectBaseLb; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v38; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  MenuListControl_o *v41; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E91DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, v20, v21, v22);
    byte_42E91DA = 1;
  }
  memset(&v42, 0, sizeof(v42));
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, method);
  NpCombineControl__DestroyMaterialGrid(this, v23);
  NpCombineControl__InitDispCombineInfo(this, v24);
  this->fields._IsExeCombine_k__BackingField = 0;
  NpCombineControl__SetExeBtnState(this, v25);
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
  SelfUserGame = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v38 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v38 && v38->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v42,
      v38,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    while ( 1 )
    {
      v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v39 )
        break;
      if ( !v42.fields.current )
        sub_B5D69C(v39, v40);
      if ( HIDWORD(v42.fields.current[1].klass) == 10 )
      {
        v41 = this->fields.menuListCtr;
        if ( !v41 )
          sub_B5D69C(0LL, v40);
        MenuListControl__setBannerIcon(
          v41,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v42.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  SelfUserGame = (UnityEngine_Component_o *)this->fields.baseLvInfo;
  if ( !SelfUserGame )
LABEL_26:
    sub_B5D69C(SelfUserGame, v27);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = 0;
  this->fields._isExchangeSvtInList_k__BackingField = 0;
}


void __fastcall NpCombineControl__InitSvtNpCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E91D9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E91D9 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  NpCombineControl__InitInfo(this, v7);
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B5D560(p_charaGraph, 0LL, v11, v12, v13, v14, v15, v16);
      return;
    }
LABEL_14:
    sub_B5D69C(helpBtn, v5);
  }
}


void __fastcall NpCombineControl__OnCenterOnChildFinished(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  NpCombineControl_o *v4; // x19
  struct UICenterOnChild_o *centerChild; // x8

  v4 = this;
  if ( (byte_42E91F4 & 1) == 0 )
  {
    this = (NpCombineControl_o *)sub_B5D5C4(
                                   &Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___,
                                   (_DWORD)method,
                                   v2,
                                   v3);
    byte_42E91F4 = 1;
  }
  centerChild = v4->fields.centerChild;
  if ( !centerChild
    || (this = (NpCombineControl_o *)centerChild->fields.mCenteredObject) == 0LL
    || (this = (NpCombineControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___)) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  v4->fields.currentMoveIdx = (int32_t)this->fields.currentInfoLb;
}


void __fastcall NpCombineControl__OnClickArrow(NpCombineControl_o *this, int32_t delte, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  UnityEngine_Component_o *wrapContent; // x0
  int32_t currentMoveIdx; // w21
  int32_t childCount; // w0
  int32_t v10; // w20
  UICenterOnChild_o *centerChild; // x19

  if ( (byte_42E91F5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, delte, (_DWORD)method, v3);
    byte_42E91F5 = 1;
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
LABEL_16:
    sub_B5D69C(wrapContent, v6);
  }
  UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)wrapContent, 1, 0LL);
}


void __fastcall NpCombineControl__OnClickExeCombine(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  Il2CppObject *current; // x20
  WebViewManager_o *Instance; // x0
  __int64 v26; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  UserServantEntity_o *Entity; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E91EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E91EC = 1;
  }
  memset(&v31, 0, sizeof(v31));
  selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
  this->fields.isExceeded = 0;
  if ( !selectMtUsrSvtIdList )
    goto LABEL_15;
  System_Collections_Generic_List_long___GetEnumerator(
    &v30,
    selectMtUsrSvtIdList,
    (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
            &v31,
            (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
  {
    current = v31.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v26);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v28);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int64_t)current,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Entity && UserServantEntity__isExceeded(Entity, 0LL) )
    {
      this->fields.isExceeded = 1;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_long___Dispose(
    &v31,
    (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
  selectMtUsrSvtIdList = (System_Collections_Generic_List_long__o *)this->fields.exeCombineDlg;
  if ( !selectMtUsrSvtIdList )
LABEL_15:
    sub_B5D69C(selectMtUsrSvtIdList, method);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42E91EF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E91EF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, v5);
  CombineRootComponent__ShowNpMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall NpCombineControl__RefreshSvtNpCombineEndShowServant(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x1
  void *helpBtn; // x0
  const MethodInfo *v31; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  int32_t v37; // w8
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct MenuListControl_o *menuListCtr; // x8
  struct System_Collections_Generic_List_EventInfoData__o *combineEventList; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v46; // x0
  _BOOL8 v47; // x0
  __int64 v48; // x1
  MenuListControl_o *v49; // x0
  UnityEngine_Object_o *charaGraph; // x20
  BattleServantConfConponent_o *p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E91DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_9367/*"NEED_QP_INFO"*/, v26, v27, v28);
    byte_42E91DB = 1;
  }
  memset(&v60, 0, sizeof(v60));
  EventTutorialMaster__CheckTutorial(0, 39, 0LL, 0, 0, 0, 0, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  this->fields.baseSvtId = 0;
  NpCombineControl__DestroyGrid(this, v31);
  helpBtn = this->fields.currentInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  helpBtn = this->fields.afterInfoLb;
  if ( !helpBtn )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)helpBtn, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
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
  helpBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9367/*"NEED_QP_INFO"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_38;
  UILabel__set_text(needQpLb, (System_String_o *)helpBtn, 0LL);
  NpCombineControl__SetHaveQpInfo(this, v33);
  NpCombineControl__SetSelectMaterialEnable(this, v34);
  helpBtn = this->fields.defaultNpInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 1, 0LL);
  helpBtn = this->fields.arrowInfo;
  if ( !helpBtn )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpBtn, 0, 0LL);
  NpCombineControl__SetEnabledNpInfoScroll(this, 0, v35);
  NpCombineControl__ResetScrollView(this, v36);
  helpBtn = UserGameMaster__getSelfUserGame(0LL);
  if ( !helpBtn )
    goto LABEL_38;
  v37 = *((_DWORD *)helpBtn + 24);
  helpBtn = this->fields.eventNoticeImg;
  this->fields.userQP = v37;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)combineEventList,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v46 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  if ( v46 && v46->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v59,
      v46,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v60 = v59;
    while ( 1 )
    {
      v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v60,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v47 )
        break;
      if ( !v60.fields.current )
        sub_B5D69C(v47, v48);
      if ( HIDWORD(v60.fields.current[1].klass) == 10 )
      {
        v49 = this->fields.menuListCtr;
        if ( !v49 )
          sub_B5D69C(0LL, v48);
        MenuListControl__setBannerIcon(
          v49,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v60.fields.current[5].klass,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v60,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      p_charaGraph->klass = 0LL;
      sub_B5D560(p_charaGraph, 0LL, v53, v54, v55, v56, v57, v58);
      return;
    }
LABEL_38:
    sub_B5D69C(helpBtn, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__ResetScrollView(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  void *scrollView; // x0
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0
  UnityEngine_Vector2_o v10; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E91F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    byte_42E91F3 = 1;
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
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_13;
  v10.fields.y = *((float *)scrollView + 82);
  v10.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)scrollView, v10, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (v11.fields.x = 0.0,
        v11.fields.y = 0.0,
        v11.fields.z = 0.0,
        UIScrollView__set_currentMomentum((UIScrollView_o *)scrollView, v11, 0LL),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(scrollView, method);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)scrollView, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtCardImg(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NpCombineControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitImageMaster_o *v19; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w21
  NpCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_26715804; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v5 = this;
  if ( (byte_42E91DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)usrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (NpCombineControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E91DF = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (NpCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  this = (NpCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( !v19 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v19,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v5->fields.charaGraph;
  v22 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_charaGraph = (NpCombineControl_o **)&v5->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26715804 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_26715804(
                                                      v5->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v22,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v5->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_26715804;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.charaGraph,
      TexturePrefab_26715804,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B5D69C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_35988116((UICharaGraphTexture_o *)this, usrSvtData, v22, 0LL, 0, 0LL);
}


void __fastcall NpCombineControl__SetBaseSvtNpInfo(
        NpCombineControl_o *this,
        UserServantEntity_o *usrSvtEn,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UIIconLabel_o *iconLabel; // x21
  int32_t lv; // w22
  UnityEngine_GameObject_o *LevelMax; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *SvtNpData; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_String_array *v42; // x21
  int32_t v43; // w0
  __int64 v44; // x8
  int32_t v45; // w20
  int32_t v46; // w22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array *battleLoadList; // x20
  System_Action_o *v61; // x21
  __int64 v62; // x0
  __int64 v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42E91DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)usrSvtEn, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_NpCombineControl_SetCombineNpList__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&string___TypeInfo, v18, v19, v20);
    byte_42E91DE = 1;
  }
  if ( usrSvtEn )
  {
    v22 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&usrSvtEn->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v22;
    *(_QWORD *)&v64.fields.fakeValue = v21;
    v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
    this->fields.baseUserServantEntity = usrSvtEn;
    this->fields.baseSvtId = v23;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity,
      (System_Int32_array **)usrSvtEn,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    iconLabel = this->fields.iconLabel;
    lv = usrSvtEn->fields.lv;
    LevelMax = (UnityEngine_GameObject_o *)UserServantEntity__getLevelMax(usrSvtEn, 0LL);
    if ( !iconLabel )
      goto LABEL_21;
    UIIconLabel__Set_41886452(iconLabel, 2, lv, (int32_t)LevelMax, 0, 0LL, 0, 0, 0, 0LL);
    LevelMax = this->fields.baseLvInfo;
    if ( !LevelMax )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(LevelMax, 1, 0LL);
    SvtNpData = NpCombineControl__GetSvtNpData(this, usrSvtEn, v34);
    this->fields.svtNpDataList = SvtNpData;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.svtNpDataList,
      (System_Int32_array **)SvtNpData,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    v42 = (struct System_String_array *)sub_B5D5DC(string___TypeInfo, 1LL);
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(usrSvtEn->fields.svtId, 0LL);
    v44 = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&usrSvtEn->fields.limitCount.fields.fakeValue;
    v45 = v43;
    *(_QWORD *)&v65.fields.currentCryptoKey = v44;
    v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v65, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    LevelMax = (UnityEngine_GameObject_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(v45, v46, 0LL);
    if ( !v42 )
LABEL_21:
      sub_B5D69C(LevelMax, v33);
    v53 = (System_Int32_array **)LevelMax;
    if ( LevelMax )
    {
      LevelMax = (UnityEngine_GameObject_o *)sub_B5D684(LevelMax, v42->obj.klass->_1.element_class);
      if ( !LevelMax )
      {
        v63 = sub_B5D6BC(0LL);
        sub_B5D668(v63, 0LL);
      }
    }
    if ( !v42->max_length )
    {
      v62 = sub_B5D6C8(LevelMax);
      sub_B5D668(v62, 0LL);
    }
    v42->m_Items[0] = (System_String_o *)v53;
    sub_B5D560((BattleServantConfConponent_o *)v42->m_Items, v53, v47, v48, v49, v50, v51, v52);
    this->fields.battleLoadList = v42;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.battleLoadList,
      (System_Int32_array **)v42,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    battleLoadList = this->fields.battleLoadList;
    v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_NpCombineControl_SetCombineNpList__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage_30664084(battleLoadList, v61, 1, 0LL);
  }
}


void __fastcall NpCombineControl__SetCombineNpList(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  UnityEngine_Object_o *centerChild; // x20
  const MethodInfo *currentMoveIdx; // x1
  UnityEngine_Component_o *wrapContent; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x2
  struct System_Collections_Generic_List_SvtUseNpData__o *v50; // x8
  bool isScrollNpInfo; // w1
  unsigned int v52; // w22
  struct UICenterOnChild_o *v53; // x20
  SpringPanel_OnFinished_o *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int v61; // w24
  unsigned int i; // w23
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppObject *current; // x20
  UnityEngine_Component_o *v66; // x0
  UnityEngine_GameObject_o *npCombineInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_Object_o *Object; // x21
  System_String_o *v70; // x0
  ServantNpInfoIconComponent_o *Component_srcLineSprite; // x0
  __int64 v72; // x1
  int v73; // w8
  struct UIWrapContent_o *v74; // x8
  const MethodInfo *v75; // x2
  _BYTE v76[28]; // [xsp+0h] [xbp-90h] BYREF
  int v77; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+20h] [xbp-70h] BYREF
  int32_t idx; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_42E91E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_NpCombineControl_OnCenterOnChildFinished__, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SpringPanel_OnFinished_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_4620/*"D3"*/, v35, v36, v37);
    byte_42E91E4 = 1;
  }
  idx = 0;
  memset(&v78, 0, sizeof(v78));
  v77 = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList
    && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___) )
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
      v42 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              (UnityEngine_GameObject_o *)wrapContent,
              (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      this->fields.centerChild = (struct UICenterOnChild_o *)v42;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.centerChild,
        (System_Int32_array **)v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    wrapContent = (UnityEngine_Component_o *)this->fields.defaultNpInfo;
    if ( wrapContent )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 0, 0LL);
      v50 = this->fields.svtNpDataList;
      if ( v50 )
      {
        if ( v50->fields._size >= 2 )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.arrowInfo;
          this->fields.isScrollNpInfo = 1;
          if ( !wrapContent )
            goto LABEL_47;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)wrapContent, 1, 0LL);
          v53 = this->fields.centerChild;
          v54 = (SpringPanel_OnFinished_o *)sub_B5D694(SpringPanel_OnFinished_TypeInfo);
          SpringPanel_OnFinished___ctor(
            v54,
            (Il2CppObject *)this,
            Method_NpCombineControl_OnCenterOnChildFinished__,
            0LL);
          if ( !v53 )
            goto LABEL_47;
          v53->fields.onFinished = v54;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v53->fields.onFinished,
            (System_Int32_array **)v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
          v52 = 2;
          isScrollNpInfo = this->fields.isScrollNpInfo;
        }
        else
        {
          isScrollNpInfo = 0;
          v52 = 1;
          this->fields.isScrollNpInfo = 0;
        }
        NpCombineControl__SetEnabledNpInfoScroll(this, isScrollNpInfo, v49);
        idx = 0;
        v61 = 0;
        for ( i = 0; i < v52; ++i )
        {
          wrapContent = (UnityEngine_Component_o *)this->fields.svtNpDataList;
          if ( !wrapContent )
            goto LABEL_47;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v76,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)wrapContent,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtUseNpData__GetEnumerator__);
          v78 = *(System_Collections_Generic_List_Enumerator_T__o *)v76;
          while ( 1 )
          {
            v63 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v78,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__MoveNext__);
            if ( !v63 )
              break;
            current = v78.fields.current;
            if ( !v78.fields.current )
              sub_B5D69C(v63, v64);
            if ( ((__int64)v78.fields.current[1].monitor & 0x80000000) == 0 )
            {
              v66 = (UnityEngine_Component_o *)this->fields.wrapContent;
              if ( !v66 )
                sub_B5D69C(0LL, v64);
              npCombineInfoPrefab = this->fields.npCombineInfoPrefab;
              transform = UnityEngine_Component__get_transform(v66, 0LL);
              Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 npCombineInfoPrefab,
                                                 transform,
                                                 0LL,
                                                 0LL);
              v70 = System_Int32__ToString_39741776((int32_t)&idx, (System_String_o *)StringLiteral_4620/*"D3"*/, 0LL);
              if ( !Object )
                sub_B5D69C(v70, v70);
              UnityEngine_Object__set_name(Object, v70, 0LL);
              Component_srcLineSprite = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          (UnityEngine_GameObject_o *)Object,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantNpInfoIconComponent___);
              if ( !Component_srcLineSprite )
                sub_B5D69C(0LL, v72);
              ServantNpInfoIconComponent__SetNpInfo(
                Component_srcLineSprite,
                this->fields.baseUserServantEntity,
                idx++,
                (SvtUseNpData_o *)current,
                0LL);
            }
          }
          *(_DWORD *)&v76[4 * v61 + 24] = 280;
          v61 = ++v77;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v78,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtUseNpData__Dispose__);
          if ( v61 )
          {
            v73 = v61 - 1;
            if ( *(_DWORD *)&v76[4 * v61 + 20] == 280 )
            {
              --v61;
              v77 = v73;
            }
          }
        }
        if ( this->fields.isScrollNpInfo )
        {
          v74 = this->fields.wrapContent;
          if ( !v74 )
            goto LABEL_47;
          *(_DWORD *)&v74->fields.cullContent = 700;
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
          NpCombineControl__ChangeTargetInfo(this, 0, v75);
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
    sub_B5D69C(wrapContent, currentMoveIdx);
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
    sub_B5D69C(combineBtn, isCombine);
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
      sub_B5D69C(scrollView, enabled);
    }
    UnityEngine_Behaviour__set_enabled(scrollView, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetExeBtnState(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v9; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UIWidget_o *combineBtnTxt; // x21
  UnityEngine_Behaviour_o *v13; // x19
  int v14; // s0
  int v18; // s0
  int v22; // s0
  int v26; // s0

  if ( (byte_42E91EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E91EB = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v9 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v13 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( combineBtnTxt )
    {
      UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v14, 0LL);
      *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
      if ( v9 )
      {
        UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v18, 0LL);
        if ( v13 )
        {
          UnityEngine_Behaviour__set_enabled(v13, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v13, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  if ( !combineBtnTxt )
    goto LABEL_14;
  UIWidget__set_color(combineBtnTxt, *(UnityEngine_Color_o *)&v22, 0LL);
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
  if ( !v9 )
    goto LABEL_14;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v26, 0LL);
  if ( !v13 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
}


void __fastcall NpCombineControl__SetHaveQpInfo(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_42E91DD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42E91DD = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39741776((int)this + 312, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B5D69C(SelfUserGame, v6);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetNpCombineData(
        NpCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  UnityEngine_Component_o *materialGrid; // x0
  __int64 v49; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x8
  __int64 v51; // x23
  System_Collections_Generic_List_long__o *v52; // x22
  struct System_Collections_Generic_List_long__o **p_selectMtUsrSvtIdList; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  unsigned __int64 v60; // x22
  signed __int64 v61; // x26
  struct System_Int64_array *v62; // x8
  int64_t v63; // x23
  UnityEngine_GameObject_o *materialSvtPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v66; // x24
  UnityEngine_Transform_o *v67; // x25
  int v68; // s0
  UnityEngine_Transform_o *v71; // x25
  int v72; // s0
  NpMaterialSvtInfo_o *Component_srcLineSprite; // x24
  NpMaterialSvtInfo_ClickDelegate_o *v76; // x25
  UserServantEntity_o *v77; // x2
  const MethodInfo *v78; // x5
  const MethodInfo *v79; // x3
  int32_t v80; // w21
  const MethodInfo *v81; // x3
  struct System_Int64_array *v82; // x22
  __int64 v83; // x8
  unsigned __int64 v84; // x23
  int64_t v85; // x20
  const MethodInfo *v86; // x1
  struct SetLevelUpData_o *lvUpData; // x8
  int32_t Qp; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  int32_t *p_spendQpVal; // x20
  float v91; // s0
  double v92; // d0
  _BOOL8 v93; // x0
  __int64 v94; // x1
  UILabel_o *qpLb; // x22
  int v96; // s0
  struct SetLevelUpData_o *v100; // x8
  struct SetLevelUpData_o *v101; // x8
  UIWidget_o *v102; // x20
  int v103; // s0
  const MethodInfo *v107; // x1
  int v108; // s0
  __int64 v112; // x0
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v114; // [xsp+20h] [xbp-80h] BYREF
  int32_t tmpTargetLv; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_42E91E7 & 1) == 0 )
  {
    sub_B5D5C4(&NpMaterialSvtInfo_ClickDelegate_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CombineMenuControl_OnClickMaterial__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v45, v46, v47);
    byte_42E91E7 = 1;
  }
  tmpTargetLv = 0;
  memset(&v114, 0, sizeof(v114));
  NpCombineControl__DestroyMaterialGrid(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_59;
  materialUsrSvtIdList = data->fields.materialUsrSvtIdList;
  if ( !materialUsrSvtIdList )
    goto LABEL_59;
  v51 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v52 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v52,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  p_selectMtUsrSvtIdList = &this->fields.selectMtUsrSvtIdList;
  this->fields.selectMtUsrSvtIdList = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectMtUsrSvtIdList,
    (System_Int32_array **)v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v51 < 1 )
    return;
  v60 = 0LL;
  v61 = (int)v51;
  do
  {
    v62 = data->fields.materialUsrSvtIdList;
    if ( !v62 )
      goto LABEL_59;
    if ( v60 >= v62->max_length )
    {
LABEL_60:
      v112 = sub_B5D6C8(materialGrid);
      sub_B5D668(v112, 0LL);
    }
    materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
    if ( !materialGrid )
      goto LABEL_59;
    v63 = v62->m_Items[v60];
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
    v66 = (UnityEngine_GameObject_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)materialGrid,
                                                0LL);
    if ( !this->fields.materialGrid )
      goto LABEL_59;
    v67 = (UnityEngine_Transform_o *)materialGrid;
    materialGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)this->fields.materialGrid,
                                                0LL);
    if ( !materialGrid )
      goto LABEL_59;
    *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)materialGrid,
                                       0LL);
    if ( !v67 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
    v71 = UnityEngine_GameObject__get_transform(v66, 0LL);
    *(UnityEngine_Vector3_o *)&v72 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v71 )
      goto LABEL_59;
    UnityEngine_Transform__set_localPosition(v71, *(UnityEngine_Vector3_o *)&v72, 0LL);
    Component_srcLineSprite = (NpMaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v66,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NpMaterialSvtInfo___);
    v76 = (NpMaterialSvtInfo_ClickDelegate_o *)sub_B5D694(NpMaterialSvtInfo_ClickDelegate_TypeInfo);
    NpMaterialSvtInfo_ClickDelegate___ctor(v76, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
    if ( !Component_srcLineSprite )
      goto LABEL_59;
    NpMaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, v60, v77, v63, v76, v78);
    materialGrid = (UnityEngine_Component_o *)*p_selectMtUsrSvtIdList;
    if ( !*p_selectMtUsrSvtIdList )
      goto LABEL_59;
    System_Collections_Generic_List_long___Add(
      (System_Collections_Generic_List_long__o *)materialGrid,
      v63,
      (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
    ++v60;
  }
  while ( (__int64)v60 < v61 );
  materialGrid = (UnityEngine_Component_o *)this->fields.materialGrid;
  if ( !materialGrid )
    goto LABEL_59;
  UIGrid__set_repositionNow((UIGrid_o *)materialGrid, 1, 0LL);
  materialGrid = (UnityEngine_Component_o *)NpCombineControl__GetNpLv(
                                              this->fields.baseUserServantEntity,
                                              data->fields.materialUsrSvtIdList,
                                              &tmpTargetLv,
                                              v79);
  if ( !this->fields.baseUserServantEntity )
    goto LABEL_59;
  v80 = (int)materialGrid;
  materialGrid = (UnityEngine_Component_o *)UserServantEntity__IsExceedMaxLv(
                                              this->fields.baseUserServantEntity,
                                              tmpTargetLv,
                                              0LL);
  *(_WORD *)&this->fields.isExceedMaxLv = (unsigned __int8)materialGrid & 1;
  v82 = data->fields.materialUsrSvtIdList;
  if ( !v82 )
    goto LABEL_59;
  v83 = *(_QWORD *)&v82->max_length;
  if ( (int)v83 >= 1 )
  {
    v84 = 0LL;
    while ( 1 )
    {
      if ( v84 >= (unsigned int)v83 )
        goto LABEL_60;
      v85 = v82->m_Items[v84];
      materialGrid = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)materialGrid,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !materialGrid )
        goto LABEL_59;
      materialGrid = (UnityEngine_Component_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)materialGrid,
                                                  v85,
                                                  (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !materialGrid )
        goto LABEL_59;
      if ( UserServantEntity__IsExchangeSvt((UserServantEntity_o *)materialGrid, 0LL) )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      materialGrid = (UnityEngine_Component_o *)NpCombineControl__CheckConfirm(v85, v86);
      if ( ((unsigned __int8)materialGrid & 1) != 0 )
        break;
      LODWORD(v83) = v82->max_length;
      if ( (__int64)++v84 >= (int)v83 )
        goto LABEL_33;
    }
    this->fields.isCombineSvt = 1;
  }
LABEL_33:
  lvUpData = this->fields.lvUpData;
  if ( !lvUpData )
    goto LABEL_59;
  Qp = NpCombineControl__GetQp(lvUpData->fields.currentId, lvUpData->fields.currentLv, v80, v81);
  combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.combineEventList;
  p_spendQpVal = &this->fields.spendQpVal;
  this->fields.spendQpVal = Qp;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v113,
      combineEventList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v114 = v113;
    while ( 1 )
    {
      v93 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v114,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v93 )
        break;
      if ( !v114.fields.current )
        sub_B5D69C(v93, v94);
      if ( HIDWORD(v114.fields.current[1].klass) == 10 )
      {
        v91 = *(float *)&v114.fields.current[3].monitor * (float)*p_spendQpVal;
        if ( v91 == INFINITY )
          v92 = -INFINITY;
        else
          v92 = v91;
        *p_spendQpVal = (int)v92;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v114,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
  qpLb = this->fields.qpLb;
  materialGrid = (UnityEngine_Component_o *)System_Int32__ToString_39741776(
                                              (int)this + 316,
                                              (System_String_o *)StringLiteral_9361/*"N0"*/,
                                              0LL);
  if ( !qpLb )
    goto LABEL_59;
  UILabel__set_text(qpLb, (System_String_o *)materialGrid, 0LL);
  *(UnityEngine_Color_o *)&v96 = this->fields.haveQpVal >= this->fields.spendQpVal
                               ? UnityEngine_Color__get_white(0LL)
                               : UnityEngine_Color__get_red(0LL);
  materialGrid = (UnityEngine_Component_o *)this->fields.qpLb;
  if ( !materialGrid )
    goto LABEL_59;
  UIWidget__set_color((UIWidget_o *)materialGrid, *(UnityEngine_Color_o *)&v96, 0LL);
  v100 = this->fields.lvUpData;
  if ( !v100 )
    goto LABEL_59;
  v100->fields.nextLv = v80;
  v101 = this->fields.lvUpData;
  if ( !v101 )
    goto LABEL_59;
  v101->fields.spendQp = this->fields.spendQpVal;
  v102 = (UIWidget_o *)this->fields.qpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    *(UnityEngine_Color_o *)&v108 = UnityEngine_Color__get_white(0LL);
    if ( v102 )
    {
      UIWidget__set_color(v102, *(UnityEngine_Color_o *)&v108, 0LL);
      this->fields._IsExeCombine_k__BackingField = 1;
      goto LABEL_57;
    }
LABEL_59:
    sub_B5D69C(materialGrid, v49);
  }
  *(UnityEngine_Color_o *)&v103 = UnityEngine_Color__get_red(0LL);
  if ( !v102 )
    goto LABEL_59;
  UIWidget__set_color(v102, *(UnityEngine_Color_o *)&v103, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
LABEL_57:
  NpCombineControl__SetExeBtnState(this, v107);
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
    sub_B5D69C(v4, v5);
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
    sub_B5D69C(preSelectBaseLb, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpCombineControl__SetStateInfoMsg(NpCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v26; // x21
  float v27; // s4
  float v28; // s5
  float v29; // s6
  __int64 *v30; // x8
  UnityEngine_Color_o v31; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = state;
  if ( (byte_42E91EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, state, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_7120/*"HEADER_MSG_NPUP_MATERIAL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_7363/*"INFO_MSG_NPUP_BASE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42E91EE = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v32.fields.g = 0.87891;
  v32.fields.b = 0.98828;
  v26 = (UIWidget_o *)Component_WebViewObject;
  v32.fields.r = 0.0;
  *(_QWORD *)&v31.fields.r = 0LL;
  *(_QWORD *)&v31.fields.b = 0LL;
  UnityEngine_Color___ctor_41567816(v32, v27, v28, v29, (const MethodInfo *)&v31);
  if ( !v26 )
LABEL_29:
    sub_B5D69C(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v26, v31, 0LL);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = &StringLiteral_7120/*"HEADER_MSG_NPUP_MATERIAL"*/;
    }
    else
    {
      if ( v4 != 2 )
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
        v30 = &StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/;
      }
      else
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v26, white, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v30 = &StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/;
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
    v30 = &StringLiteral_7363/*"INFO_MSG_NPUP_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v30, 0LL);
LABEL_27:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall NpCombineControl__SetSvtNpCombineData(NpCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_SvtUseNpData__o *svtNpDataList; // x0
  __int64 maxLvStatusInfo; // x0
  __int64 v28; // x1
  struct System_Collections_Generic_List_SvtUseNpData__o *v29; // x20
  SvtUseNpData_o *v30; // x26
  int32_t svtUseNpId; // w21
  int32_t svtNpLv; // w20
  __int64 v33; // x22
  __int64 v34; // x22
  DataManager_o *v35; // x23
  int32_t v36; // w24
  __int64 v37; // x22
  UILabel_o *currentInfoLb; // x23
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_long__o *selectMtUsrSvtIdList; // x0
  int32_t NpLv; // w23
  UserServantEntity_o *baseUserServantEntity; // x23
  System_Int64_array *v43; // x0
  const MethodInfo *v44; // x3
  SetLevelUpData_o *v45; // x25
  struct SetLevelUpData_o **p_lvUpData; // x24
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct SetLevelUpData_o *lvUpData; // x8
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct SetLevelUpData_o *v74; // x8
  int32_t tmpTargetLv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E91E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_SvtUseNpData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtUseNpData__get_Item__, v14, v15, v16);
    sub_B5D5C4(&SetLevelUpData_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v23, v24, v25);
    byte_42E91E6 = 1;
  }
  tmpTargetLv = 0;
  svtNpDataList = this->fields.svtNpDataList;
  if ( svtNpDataList )
  {
    maxLvStatusInfo = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)svtNpDataList,
                        (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_SvtUseNpData___);
    if ( (maxLvStatusInfo & 1) != 0 )
    {
      v29 = this->fields.svtNpDataList;
      if ( !v29 )
        goto LABEL_39;
      if ( !v29->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v30 = v29->fields._items->m_Items[0];
      if ( !v30 )
        goto LABEL_39;
      svtUseNpId = v30->fields.svtUseNpId;
      if ( svtUseNpId >= 1 )
      {
        maxLvStatusInfo = (__int64)this->fields.maxLvStatusInfo;
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        svtNpLv = v30->fields.svtNpLv;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maxLvStatusInfo, 0, 0LL);
        v33 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v34 = **(_QWORD **)(v33 + 192);
        if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
          maxLvStatusInfo = sub_AF52C4(v34);
        v35 = **(DataManager_o ***)(v34 + 184);
        if ( !v35 )
          goto LABEL_39;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v35,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        maxLvStatusInfo = (__int64)TreasureDvcMaster__GetEntityCheckServantOverwrite(
                                     (TreasureDvcMaster_o *)maxLvStatusInfo,
                                     v30->fields.svtId,
                                     svtUseNpId,
                                     0LL);
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        v36 = *(_DWORD *)(maxLvStatusInfo + 48);
        v37 = maxLvStatusInfo;
        maxLvStatusInfo = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v35,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
        if ( svtNpLv < v36 )
        {
          selectMtUsrSvtIdList = this->fields.selectMtUsrSvtIdList;
          NpLv = svtNpLv;
          if ( selectMtUsrSvtIdList )
          {
            baseUserServantEntity = this->fields.baseUserServantEntity;
            v43 = System_Collections_Generic_List_long___ToArray(
                    selectMtUsrSvtIdList,
                    (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
            NpLv = NpCombineControl__GetNpLv(baseUserServantEntity, v43, &tmpTargetLv, v44);
          }
          v45 = (SetLevelUpData_o *)sub_B5D694(SetLevelUpData_TypeInfo);
          SetLevelUpData___ctor(v45, 0LL);
          p_lvUpData = &this->fields.lvUpData;
          this->fields.lvUpData = v45;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.lvUpData,
            (System_Int32_array **)v45,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
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
                  (*p_lvUpData)->fields.isNpAdd = v30->fields.isNpAdd;
                  maxLvStatusInfo = (__int64)*p_lvUpData;
                  if ( *p_lvUpData )
                  {
                    v60 = *(System_Int32_array ***)(v37 + 32);
                    *(_QWORD *)(maxLvStatusInfo + 32) = v60;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)(maxLvStatusInfo + 32),
                      v60,
                      v53,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58);
                    maxLvStatusInfo = (__int64)*p_lvUpData;
                    if ( *p_lvUpData )
                    {
                      v67 = *(System_Int32_array ***)(v37 + 24);
                      *(_QWORD *)(maxLvStatusInfo + 40) = v67;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)(maxLvStatusInfo + 40),
                        v67,
                        v61,
                        v62,
                        v63,
                        v64,
                        v65,
                        v66);
                      if ( *p_lvUpData )
                      {
                        (*p_lvUpData)->fields.currentLv = svtNpLv;
                        if ( *p_lvUpData )
                        {
                          (*p_lvUpData)->fields.nextLv = NpLv;
                          if ( *p_lvUpData )
                          {
                            (*p_lvUpData)->fields.spendQp = this->fields.spendQpVal;
                            v74 = this->fields.lvUpData;
                            if ( v74 )
                            {
                              v74->fields.haveQp = this->fields.userQP;
                              maxLvStatusInfo = (__int64)this->fields.lvUpData;
                              if ( maxLvStatusInfo )
                              {
                                *(_QWORD *)(maxLvStatusInfo + 80) = 0LL;
                                sub_B5D560(
                                  (BattleServantConfConponent_o *)(maxLvStatusInfo + 80),
                                  0LL,
                                  v68,
                                  v69,
                                  v70,
                                  v71,
                                  v72,
                                  v73);
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
          sub_B5D69C(maxLvStatusInfo, v28);
        }
        this->fields._IsExeCombine_k__BackingField = 0;
        NpCombineControl__SetExeBtnState(this, v39);
        maxLvStatusInfo = (__int64)this->fields.qpLb;
        if ( !maxLvStatusInfo )
          goto LABEL_39;
        UILabel__set_text((UILabel_o *)maxLvStatusInfo, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
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