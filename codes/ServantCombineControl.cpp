void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FCE54 & 1) == 0 )
  {
    sub_B16FFC(&ServantCombineControl_TypeInfo, v1);
    byte_40FCE54 = 1;
  }
  ServantCombineControl_TypeInfo->static_fields->FIXED_VAL = 1000.0;
  ServantCombineControl_TypeInfo->static_fields->MAX_SELECT_NUM = 20;
}


void __fastcall ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall ServantCombineControl__CheckConductionWire(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w0
  UserServantEntity_o *v20; // x0
  UserServantEntity_o *v21; // x0
  UnityEngine_GameObject_o *resAdjustInfo; // x0
  CombineInfoComponent_o *combineInfoComp; // x0
  UserServantEntity_o *v24; // x0
  UserServantEntity_o *v25; // x0
  UserServantEntity_o *v26; // x0
  UserServantEntity_o *v27; // x0
  UILabel_o *conductionWireLabel; // x20
  System_String_o *v29; // x0
  UILabel_o *conductionWireButtonLabel; // x20
  System_String_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UILabel_o *v33; // x20
  System_String_o *v34; // x0
  UILabel_o *v35; // x20
  System_String_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_40FCE40 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_3279, v7);
    sub_B16FFC(&StringLiteral_3282, v8);
    sub_B16FFC(&StringLiteral_3281, v9);
    sub_B16FFC(&StringLiteral_3280, v10);
    byte_40FCE40 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_41;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v18 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v18;
    *(_QWORD *)&v38.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
    if ( !v16 )
      goto LABEL_41;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      v16,
      v19,
      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v20 = this->fields.baseData;
    if ( !v20 )
      goto LABEL_41;
    if ( UserServantEntity__isLevelMax(v20, 0LL) )
    {
      v21 = this->fields.baseData;
      if ( !v21 )
        goto LABEL_41;
      if ( !UserServantEntity__IsHeroine(v21, 0LL) )
      {
        resAdjustInfo = this->fields.resAdjustInfo;
        if ( !resAdjustInfo )
          goto LABEL_41;
        UnityEngine_GameObject__SetActive(resAdjustInfo, 0, 0LL);
        combineInfoComp = this->fields.combineInfoComp;
        if ( !combineInfoComp )
          goto LABEL_41;
        CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
        v24 = this->fields.baseData;
        if ( !v24 )
          goto LABEL_41;
        if ( UserServantEntity__isLimitCountMax(v24, 0LL) )
        {
          v25 = this->fields.baseData;
          if ( !v25 )
            goto LABEL_41;
          if ( UserServantEntity__isLimitCountMax(v25, 0LL) )
          {
            v26 = this->fields.baseData;
            if ( !v26 )
              goto LABEL_41;
            if ( !UserServantEntity__isExceedLvMax(v26, 0LL) )
            {
              v27 = this->fields.baseData;
              if ( !v27 )
                goto LABEL_41;
              if ( !UserServantEntity__IsEventJoin(v27, 0LL) )
              {
                conductionWireLabel = this->fields.conductionWireLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3282, 0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, v29, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3281, 0LL);
                  if ( conductionWireButtonLabel )
                  {
                    UILabel__set_text(conductionWireButtonLabel, v31, 0LL);
                    v32 = this->fields.conductionWireInfo;
                    if ( v32 )
                    {
                      UnityEngine_GameObject__SetActive(v32, 1, 0LL);
                      this->fields.conductionType = 2;
                      return;
                    }
                  }
                }
LABEL_41:
                sub_B170D4();
              }
            }
          }
        }
        else
        {
          v33 = this->fields.conductionWireLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3280, 0LL);
          if ( !v33 )
            goto LABEL_41;
          UILabel__set_text(v33, v34, 0LL);
          v35 = this->fields.conductionWireButtonLabel;
          v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3279, 0LL);
          if ( !v35 )
            goto LABEL_41;
          UILabel__set_text(v35, v36, 0LL);
          v37 = this->fields.conductionWireInfo;
          if ( !v37 )
            goto LABEL_41;
          UnityEngine_GameObject__SetActive(v37, 1, 0LL);
          this->fields.conductionType = 1;
        }
      }
    }
  }
}


void __fastcall ServantCombineControl__CheckExceededSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *exceededCheckList; // x8

  exceededCheckList = this->fields.exceededCheckList;
  if ( !exceededCheckList )
    sub_B170D4();
  if ( *(_QWORD *)&exceededCheckList->max_length )
    ServantCombineControl__ShowExceededSvtDlg(this, method);
  else
    ServantCombineControl__CheckRareSvt(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCombineControl__CheckIncrementLv(
        ServantCombineControl_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserServantEntity_o *baseData; // x0
  int32_t LevelMax; // w0
  WebViewManager_o *Instance; // x0
  ServantExpMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8
  int32_t totalExp; // w9
  int32_t v13; // w8
  bool result; // w0

  if ( (byte_40FCE43 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FCE43 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax(baseData, 0LL);
  if ( LevelMax <= lv )
  {
    this->fields.increLv = LevelMax;
    return 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (Entity = ServantExpMaster__GetEntity(MasterData_WarQuestSelectionMaster, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  exp = Entity->fields.exp;
  totalExp = this->fields.totalExp;
  if ( exp <= totalExp )
  {
    if ( exp != totalExp )
    {
      result = 0;
      ++this->fields.checkLv;
      return result;
    }
    v13 = Entity->fields.lv + 1;
  }
  else
  {
    v13 = Entity->fields.lv;
  }
  this->fields.increLv = v13;
  return 1;
}


void __fastcall ServantCombineControl__CheckIsSelectBaseSvt(
        ServantCombineControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x21
  __int128 v12; // q1
  int64_t v13; // x0
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-40h]

  if ( (byte_40FCE3D & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_40FCE3D = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v19.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v18 = v19;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL) )
        ServantCombineControl__InitMaterialSvtInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    ServantCombineControl__InitMaterialSvtInfo(this, (const MethodInfo *)selectBase);
    this->fields.isSelectBase = 0;
    ServantCombineControl__ResetCampaign(this, v16);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B16F98(
    p_baseUserServantEntity,
    (System_Int32_array **)selectBase,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantCombineControl__CheckRareSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *highRarityList; // x8

  highRarityList = this->fields.highRarityList;
  if ( !highRarityList )
    sub_B170D4();
  if ( *(_QWORD *)&highRarityList->max_length )
    ServantCombineControl__ShowRareSvtDlg(this, method);
  else
    ServantCombineControl__OnClickExeCombine(this, method);
}


int32_t __fastcall ServantCombineControl__ClassRaritySort(
        ServantCombineControl_o *this,
        UserServantEntity_o *e1,
        UserServantEntity_o *e2,
        const MethodInfo *method)
{
  int32_t v6; // w0
  int32_t result; // w0
  int32_t SvtClassId; // w0
  int32_t Rarity; // [xsp+Ch] [xbp-14h] BYREF

  Rarity = 0;
  if ( !e1 || (Rarity = UserServantEntity__getRarity(e1, 0LL), !e2) )
    sub_B170D4();
  v6 = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_38275572((int32_t)&Rarity, v6, 0LL);
  if ( !result )
  {
    Rarity = UserServantEntity__getSvtClassId(e1, 0LL);
    SvtClassId = UserServantEntity__getSvtClassId(e2, 0LL);
    return System_Int32__CompareTo_38275572((int32_t)&Rarity, SvtClassId, 0LL);
  }
  return result;
}


void __fastcall ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *selectGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  unsigned __int64 v14; // x10
  System_Collections_IEnumerator_c **v15; // x11
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  __int64 v28; // x20
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0

  if ( (byte_40FCE48 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v5);
    byte_40FCE48 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid || (transform = UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 2;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_36;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v17);
LABEL_36:
      sub_B170D4();
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v20 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v27 = *(_QWORD *)v20;
    v28 = v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_31;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_31:
      v31 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


SetCombineData_o *__fastcall ServantCombineControl__GetRecommendedCombineData(
        ServantCombineControl_o *this,
        const MethodInfo *method)
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *CombineMaterialList; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w22
  _BOOL4 IsExtraClass; // w22
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  RecommendedConfigSaveData_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v37; // x24
  struct System_Collections_Generic_List_int__o *selectRarityList; // x27
  signed __int64 size; // x19
  unsigned __int64 v40; // x25
  __int64 v41; // x8
  const MethodInfo_2F1391C **v42; // x26
  unsigned __int64 v43; // x27
  signed __int64 v44; // x28
  UserServantEntity_o **m_Items; // x19
  UserServantEntity_o *v46; // x25
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  bool IsTargetOnly; // w0
  RecommendedConfigSaveData_o *v51; // x24
  UserServantEntity_o **v52; // x23
  signed __int64 v53; // x19
  UserServantEntity_array *v54; // x28
  _BOOL4 v55; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x22
  const MethodInfo_2F1391C **v57; // x20
  int32_t v58; // w0
  int32_t v59; // w26
  bool v60; // zf
  int32_t Rarity; // w0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  UserServantEntity_o *v66; // x0
  ServantCombineControl_o *v67; // x0
  const MethodInfo *v68; // x4
  const MethodInfo *v69; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v71; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v72; // [xsp+0h] [xbp-60h]
  ServantCombineControl_o *v73; // [xsp+8h] [xbp-58h]

  if ( (byte_40FCE4E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_UserServantEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_UserServantEntity__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v15);
    sub_B16FFC(&RecommendedConfigSaveData_TypeInfo, v16);
    sub_B16FFC(&Method_ServantCombineControl_ClassRaritySort__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v19);
    byte_40FCE4E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_55;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList(MasterData_WarQuestSelectionMaster, 0LL);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_55;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0LL);
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  IsExtraClass = SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
  }
  ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0LL);
  if ( !ConfigSaveData )
    goto LABEL_55;
  v32 = ConfigSaveData;
  if ( RecommendedConfigSaveData__CanNotSelect(ConfigSaveData, 0LL) )
    return 0LL;
  v37 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_Rarity_TYPE__TypeInfo,
                                                                   v33,
                                                                   v34,
                                                                   v35,
                                                                   v36);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v37,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  selectRarityList = v32->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_55;
  size = selectRarityList->fields._size;
  if ( (int)size >= 1 )
  {
    v40 = 0LL;
    do
    {
      if ( v40 >= (unsigned int)selectRarityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v37 )
        break;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v37,
        selectRarityList->fields._items->m_Items[++v40],
        (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
      if ( (__int64)v40 >= size )
        goto LABEL_23;
      selectRarityList = v32->fields.selectRarityList;
    }
    while ( selectRarityList );
LABEL_55:
    sub_B170D4();
  }
LABEL_23:
  v73 = this;
  if ( !CombineMaterialList )
    goto LABEL_55;
  v41 = *(_QWORD *)&CombineMaterialList->max_length;
  if ( (int)v41 >= 1 )
  {
    v42 = (const MethodInfo_2F1391C **)&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__;
    v43 = 0LL;
    v44 = (int)v41;
    m_Items = CombineMaterialList->m_Items;
    v72 = v37;
    while ( 1 )
    {
      v46 = m_Items[v43];
      if ( RecommendedConfigSaveData__IsAll(v32, 0LL) )
      {
        if ( !v46 )
          goto LABEL_55;
        v47 = UserServantEntity__getSvtClassId(v46, 0LL);
        if ( (_DWORD)v47 != 1001 )
          goto LABEL_44;
      }
      IsTargetOnly = RecommendedConfigSaveData__IsTargetOnly(v32, 0LL);
      if ( IsExtraClass )
        break;
      if ( !IsTargetOnly )
        goto LABEL_39;
      if ( !v46 )
        goto LABEL_55;
      v51 = v32;
      v52 = m_Items;
      v53 = v44;
      v54 = CombineMaterialList;
      v55 = IsExtraClass;
      v56 = v27;
      v57 = v42;
      v58 = UserServantEntity__getSvtClassId(v46, 0LL);
      if ( !v73->fields.baseData )
        goto LABEL_55;
      v59 = v58;
      v47 = UserServantEntity__getSvtClassId(v73->fields.baseData, 0LL);
      v60 = v59 == (_DWORD)v47;
      v42 = v57;
      v27 = v56;
      IsExtraClass = v55;
      CombineMaterialList = v54;
      v44 = v53;
      m_Items = v52;
      v32 = v51;
      v37 = v72;
      if ( v60 )
        goto LABEL_40;
LABEL_44:
      if ( (__int64)++v43 >= v44 )
        goto LABEL_47;
      if ( v43 >= CombineMaterialList->max_length )
      {
        sub_B17100(v47, v48, v49);
        sub_B170A0();
      }
    }
    if ( IsTargetOnly )
    {
      if ( !v46 )
        goto LABEL_55;
      v47 = UserServantEntity__getSvtClassId(v46, 0LL);
      if ( (_DWORD)v47 != 1001 )
        goto LABEL_44;
    }
    else
    {
LABEL_39:
      if ( !v46 )
        goto LABEL_55;
    }
LABEL_40:
    Rarity = UserServantEntity__getRarity(v46, 0LL);
    if ( !v37 )
      goto LABEL_55;
    v47 = System_Collections_Generic_List_VoiceCondType_Type___Contains(v37, Rarity, *v42);
    if ( (v47 & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_55;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
    goto LABEL_44;
  }
LABEL_47:
  if ( !v27 )
    goto LABEL_55;
  if ( !v27->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v32, 0LL) )
  {
    v66 = v73->fields.baseData;
    if ( !v66 )
      goto LABEL_55;
    v67 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId(v66, 0LL);
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantCombineControl__MixMaterialSort(
                                                                                                    v67,
                                                                                                    (int32_t)v67,
                                                                                                    (System_Collections_Generic_List_Rarity_TYPE__o *)v37,
                                                                                                    (System_Collections_Generic_List_UserServantEntity__o *)v27,
                                                                                                    v68);
  }
  else
  {
    v71 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                      System_Comparison_UserServantEntity__TypeInfo,
                                                                      v62,
                                                                      v63,
                                                                      v64,
                                                                      v65);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v71,
      (Il2CppObject *)v73,
      Method_ServantCombineControl_ClassRaritySort__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
      (System_Comparison_T__o *)v71,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_30461508(
           v73,
           (System_Collections_Generic_List_UserServantEntity__o *)v27,
           v69);
}


int32_t __fastcall ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UnityEngine_GameObject_o *increLvObj; // x0
  UnityEngine_Component_o *increValLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *resAdjustInfo; // x0
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  UILabel_o *currentLvLb; // x0
  UILabel_o *increLvLb; // x0
  UILabel_o *v14; // x0
  UILabel_o *getSkillLb; // x0
  UIIconLabel_o *currentAdjustHpIconLabel; // x0
  UILabel_o *currentAdjustHpMaxLabel; // x0
  UIIconLabel_o *currentAdjustAtkIconLabel; // x0
  UILabel_o *currentAdjustAtkMaxLabel; // x0
  const MethodInfo *v20; // x1
  UILabel_o *qpLb; // x20
  System_String_o *v22; // x0
  UIWidget_o *v23; // x20
  int v24; // s0
  UILabel_o *expLb; // x20
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  int v33; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FCE3B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FCE3B = 1;
  }
  v33 = 0;
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  increLvObj = this->fields.increLvObj;
  if ( !increLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(increLvObj, 0, 0LL);
  increValLb = (UnityEngine_Component_o *)this->fields.increValLb;
  if ( !increValLb )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject(increValLb, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  resAdjustInfo = this->fields.resAdjustInfo;
  if ( !resAdjustInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(resAdjustInfo, 0, 0LL);
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 0, v10);
  ServantCombineControl__ResetCampaign(this, v11);
  currentLvLb = this->fields.currentLvLb;
  if ( !currentLvLb )
    goto LABEL_22;
  UILabel__set_text(currentLvLb, (System_String_o *)StringLiteral_1, 0LL);
  increLvLb = this->fields.increLvLb;
  if ( !increLvLb )
    goto LABEL_22;
  UILabel__set_text(increLvLb, (System_String_o *)StringLiteral_1, 0LL);
  v14 = this->fields.increValLb;
  if ( !v14 )
    goto LABEL_22;
  UILabel__set_text(v14, (System_String_o *)StringLiteral_1, 0LL);
  getSkillLb = this->fields.getSkillLb;
  if ( !getSkillLb )
    goto LABEL_22;
  UILabel__set_text(getSkillLb, (System_String_o *)StringLiteral_1, 0LL);
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( !currentAdjustHpIconLabel )
    goto LABEL_22;
  UIIconLabel__Clear(currentAdjustHpIconLabel, 0LL);
  currentAdjustHpMaxLabel = this->fields.currentAdjustHpMaxLabel;
  if ( !currentAdjustHpMaxLabel )
    goto LABEL_22;
  UILabel__set_text(currentAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_22;
  UIIconLabel__Clear(currentAdjustAtkIconLabel, 0LL);
  currentAdjustAtkMaxLabel = this->fields.currentAdjustAtkMaxLabel;
  if ( !currentAdjustAtkMaxLabel )
    goto LABEL_22;
  UILabel__set_text(currentAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  ServantCombineControl__SetHaveQpInfo(this, v20);
  this->fields._spendQpVal_k__BackingField = 0;
  qpLb = this->fields.qpLb;
  v33 = 0;
  v22 = System_Int32__ToString_38275808((int32_t)&v33, (System_String_o *)StringLiteral_9236, 0LL);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, v22, 0LL);
  v23 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
  if ( !v23 )
    goto LABEL_22;
  UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v33 = 0;
  v29 = System_Int32__ToString((int32_t)&v33, 0LL);
  if ( !expLb
    || (UILabel__set_text(expLb, v29, 0LL),
        ServantCombineControl__DestroyGrid(this, v30),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v31),
        (combineInfoComp = this->fields.combineInfoComp) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  CombineInfoComponent__initStatusInfo(combineInfoComp, 0, 0LL);
}


void __fastcall ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FCE39 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCE39 = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_charaGraph, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall ServantCombineControl__InitSvtCombine(ServantCombineControl_o *this, const MethodInfo *method)
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WebViewManager_o *Instance; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct UIPanel_o *basePanel; // x0
  CombineRootComponent_c *v23; // x1
  __int64 v24; // x9
  ServantCombineControl___c_c *v25; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v28; // x21
  struct ServantCombineControl___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UILabel_o *needQpLb; // x20
  System_String_o *v37; // x0
  UILabel_o *getExpLb; // x20
  System_String_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  UnityEngine_Behaviour_o *selectMaterialSvtBtn; // x0
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v49; // x0
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  const MethodInfo *v53; // x1
  UnityEngine_Component_o *eventNoticeImg; // x0
  UnityEngine_GameObject_o *v55; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  unsigned int klass_high; // w9
  MenuListControl_o *v59; // x0
  UIIconLabel_o *currentAdjustHpIconLabel; // x0
  UILabel_o *currentAdjustHpMaxLabel; // x0
  UIIconLabel_o *currentAdjustAtkIconLabel; // x0
  UILabel_o *currentAdjustAtkMaxLabel; // x0
  UnityEngine_GameObject_o *resAdjustInfo; // x0
  void *v65; // x0
  int v66; // w1
  __int64 v67; // x20
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FCE38 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_B16FFC(&TutorialFlag_TypeInfo, v11);
    sub_B16FFC(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v12);
    sub_B16FFC(&ServantCombineControl___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_8812, v14);
    sub_B16FFC(&StringLiteral_6831, v15);
    sub_B16FFC(&StringLiteral_9242, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    byte_40FCE38 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, 0LL) )
  {
LABEL_21:
    needQpLb = this->fields.needQpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9242, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, v37, 0LL);
      getExpLb = this->fields.getExpLb;
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_6831, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, v39, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        ServantCombineControl__InitMaterialSvtInfo(this, v46);
        selectMaterialSvtBtn = (UnityEngine_Behaviour_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled(selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8812, 0LL);
          if ( preSelectBaseLb )
          {
            UILabel__set_text(preSelectBaseLb, v49, 0LL);
            v50 = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
            if ( v50 )
            {
              gameObject = UnityEngine_Component__get_gameObject(v50, 0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                baseSelectInfoLb = this->fields.baseSelectInfoLb;
                if ( baseSelectInfoLb )
                {
                  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
                  this->fields._IsExeCombine_k__BackingField = 0;
                  ServantCombineControl__SetExeBtnState(this, v53);
                  eventNoticeImg = (UnityEngine_Component_o *)this->fields.eventNoticeImg;
                  this->fields._targetType_k__BackingField = 0;
                  this->fields.conductionType = 0;
                  if ( eventNoticeImg )
                  {
                    v55 = UnityEngine_Component__get_gameObject(eventNoticeImg, 0LL);
                    if ( v55 )
                    {
                      UnityEngine_GameObject__SetActive(v55, 0, 0LL);
                      menuListCtr = this->fields.menuListCtr;
                      if ( menuListCtr )
                      {
                        combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                            &v68,
                            combineEventList,
                            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v69 = v68;
                          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v69,
                                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__) )
                          {
                            if ( !v69.fields.current )
                              sub_B170D4();
                            klass_high = HIDWORD(v69.fields.current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v59 = this->fields.menuListCtr;
                              if ( !v59 )
                                sub_B170D4();
                              MenuListControl__setBannerIcon(
                                v59,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v69.fields.current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            &v69,
                            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                        }
                        goto LABEL_44;
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
LABEL_50:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  basePanel = Instance->fields.basePanel;
  if ( !basePanel )
    goto LABEL_50;
  v23 = CombineRootComponent_TypeInfo;
  v24 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v24
    && (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v24 - 1] == CombineRootComponent_TypeInfo )
  {
    if ( LODWORD(basePanel[1].fields.worldToLocal.fields.m31) == 1 )
    {
      v25 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v25 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__81_0 = static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v19, v20, v21);
        System_Action___ctor(_9__81_0, v28, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        v29 = ServantCombineControl___c_TypeInfo->static_fields;
        v29->__9__81_0 = _9__81_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v29->__9__81_0,
          (System_Int32_array **)_9__81_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_21;
  }
  sub_B173C8(basePanel);
  if ( v66 != 1 )
    _Unwind_Resume(v65);
  v67 = *(_QWORD *)__cxa_begin_catch(v65);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v69,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v67 )
    sub_B170A0();
LABEL_44:
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( !currentAdjustHpIconLabel )
    goto LABEL_50;
  UIIconLabel__Clear(currentAdjustHpIconLabel, 0LL);
  currentAdjustHpMaxLabel = this->fields.currentAdjustHpMaxLabel;
  if ( !currentAdjustHpMaxLabel )
    goto LABEL_50;
  UILabel__set_text(currentAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_50;
  UIIconLabel__Clear(currentAdjustAtkIconLabel, 0LL);
  currentAdjustAtkMaxLabel = this->fields.currentAdjustAtkMaxLabel;
  if ( !currentAdjustAtkMaxLabel )
    goto LABEL_50;
  UILabel__set_text(currentAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  resAdjustInfo = this->fields.resAdjustInfo;
  if ( !resAdjustInfo )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(resAdjustInfo, 0, 0LL);
}


bool __fastcall ServantCombineControl__IsBaseSelect(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCombineControl__IsLevelMax(
        ServantCombineControl_o *this,
        int32_t totalExp,
        int32_t expType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t v17; // w0
  struct UserServantEntity_o *v18; // x0
  int32_t lv; // w22
  int32_t LevelMax; // w0
  int v21; // w21
  int v22; // w8
  WebViewManager_o *v23; // x0
  ServantExpMaster_o *v24; // x0
  ServantExpEntity_o *Entity; // x0
  int32_t exp; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_40FCE4F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&totalExp);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCE4F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_23;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v16;
  *(_QWORD *)&v28.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
  if ( !v14
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v14,
          v17,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (v18 = this->fields.baseData) == 0LL) )
  {
LABEL_23:
    sub_B170D4();
  }
  lv = v18->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(v18, 0LL);
  v21 = LevelMax;
  if ( lv == LevelMax )
  {
    v22 = 0;
  }
  else if ( lv >= LevelMax )
  {
LABEL_19:
    v22 = v21;
  }
  else
  {
    while ( 1 )
    {
      v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v23 )
        goto LABEL_23;
      v24 = (ServantExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v23,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !v24 )
        goto LABEL_23;
      Entity = ServantExpMaster__GetEntity(v24, expType, lv, 0LL);
      if ( !Entity )
        goto LABEL_23;
      exp = Entity->fields.exp;
      if ( exp > totalExp )
      {
        v22 = Entity->fields.lv;
        return v22 >= v21;
      }
      if ( exp == totalExp )
        break;
      if ( ++lv >= v21 )
        goto LABEL_19;
    }
    v22 = Entity->fields.lv + 1;
  }
  return v22 >= v21;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantCombineControl__MixMaterialSort(
        ServantCombineControl_o *this,
        int32_t baseServantClass,
        System_Collections_Generic_List_Rarity_TYPE__o *checkRarityTypeList,
        System_Collections_Generic_List_UserServantEntity__o *materialList,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int32_t size; // w28
  __int64 v40; // x26
  unsigned int v41; // w8
  Il2CppClass **v42; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x25
  int32_t SvtClassId; // w0
  const MethodInfo_2F25CD8 *v45; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x0
  ServantCombineControl___c_c *v47; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__113_0; // x23
  Il2CppObject *v50; // x24
  struct ServantCombineControl___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x23
  int32_t v59; // w8
  unsigned __int64 v60; // x25
  int v61; // w8
  System_Collections_Generic_List_Rarity_TYPE__o *v62; // x26
  int32_t v63; // w28
  unsigned int v64; // w19
  __int64 v65; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x24
  int v67; // w8
  unsigned int v68; // w19
  __int64 v69; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x24
  int v71; // w8
  __int64 v72; // x19
  __int64 v73; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v74; // x24
  signed __int64 v76; // [xsp+8h] [xbp-58h]

  if ( (byte_40FCE51 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_UserServantEntity___ctor__, *(_QWORD *)&baseServantClass);
    sub_B16FFC(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v17);
    sub_B16FFC(&Method_ServantCombineControl___c__MixMaterialSort_b__113_0__, v18);
    sub_B16FFC(&ServantCombineControl___c_TypeInfo, v19);
    byte_40FCE51 = 1;
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !materialList )
    goto LABEL_70;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v40 = 0LL;
    v41 = materialList->fields._size;
    while ( 1 )
    {
      if ( v41 <= (unsigned int)v40 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v42 = &materialList->fields._items->obj.klass + v40;
      v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)v42[4];
      if ( !v43 )
        goto LABEL_70;
      SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v42[4], 0LL);
      if ( SvtClassId == baseServantClass )
      {
        if ( !v24 )
          goto LABEL_70;
        v45 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v46 = v24;
      }
      else if ( SvtClassId == 1001 )
      {
        if ( !v29 )
          goto LABEL_70;
        v45 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v46 = v29;
      }
      else
      {
        if ( !v34 )
          goto LABEL_70;
        v45 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v46 = v34;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v46, v43, v45);
      if ( (int)v40 + 1 >= size )
        break;
      v41 = materialList->fields._size;
      ++v40;
    }
  }
  if ( !v34 )
    goto LABEL_70;
  if ( v34->fields._size >= 1 )
  {
    v47 = ServantCombineControl___c_TypeInfo;
    if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v47 = ServantCombineControl___c_TypeInfo;
    }
    static_fields = v47->static_fields;
    _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__113_0;
    if ( !_9__113_0 )
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)static_fields->__9;
      _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                              System_Comparison_UserServantEntity__TypeInfo,
                                                                              v35,
                                                                              v36,
                                                                              v37,
                                                                              v38);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__113_0,
        v50,
        Method_ServantCombineControl___c__MixMaterialSort_b__113_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_UserServantEntity___ctor__);
      v51 = ServantCombineControl___c_TypeInfo->static_fields;
      v51->__9__113_0 = (struct System_Comparison_UserServantEntity__o *)_9__113_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v51->__9__113_0,
        (System_Int32_array **)_9__113_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v34,
      (System_Comparison_T__o *)_9__113_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !checkRarityTypeList )
    goto LABEL_70;
  v59 = checkRarityTypeList->fields._size;
  if ( v59 >= 1 )
  {
    v76 = v59;
    v60 = 0LL;
    while ( 1 )
    {
      if ( v60 >= (unsigned int)v59 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v24 )
        goto LABEL_70;
      v61 = v24->fields._size;
      v62 = checkRarityTypeList;
      v63 = checkRarityTypeList->fields._items->m_Items[v60 + 1];
      if ( v61 >= 1 )
        break;
LABEL_49:
      if ( !v29 )
        goto LABEL_70;
      v67 = v29->fields._size;
      if ( v67 >= 1 )
      {
        v68 = 0;
        do
        {
          if ( v67 <= v68 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v69 = (__int64)v29->fields._items + 8 * (int)v68;
          v70 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v69 + 32);
          if ( !v70 )
            goto LABEL_70;
          if ( UserServantEntity__getRarity(*(UserServantEntity_o **)(v69 + 32), 0LL) == v63 )
          {
            if ( !v58 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v58,
              v70,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v67 = v29->fields._size;
        }
        while ( (int)++v68 < v67 );
      }
      v71 = v34->fields._size;
      if ( v71 >= 1 )
      {
        v72 = 0LL;
        do
        {
          if ( v71 <= (unsigned int)v72 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v73 = (__int64)v34->fields._items + 8 * v72;
          v74 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v73 + 32);
          if ( !v74 )
            goto LABEL_70;
          if ( UserServantEntity__getRarity(*(UserServantEntity_o **)(v73 + 32), 0LL) == v63 )
          {
            if ( !v58 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v58,
              v74,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v71 = v34->fields._size;
        }
        while ( (int)++v72 < v71 );
      }
      if ( (__int64)++v60 >= v76 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v58;
      v59 = v62->fields._size;
      checkRarityTypeList = v62;
    }
    v64 = 0;
    while ( 1 )
    {
      if ( v61 <= v64 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v65 = (__int64)v24->fields._items + 8 * (int)v64;
      v66 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v65 + 32);
      if ( !v66 )
        break;
      if ( UserServantEntity__getRarity(*(UserServantEntity_o **)(v65 + 32), 0LL) == v63 )
      {
        if ( !v58 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v58,
          v66,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      }
      v61 = v24->fields._size;
      if ( (int)++v64 >= v61 )
        goto LABEL_49;
    }
LABEL_70:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v58;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  int32_t conductionType; // w8
  CombineRootComponent_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FCE47 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCE47 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  conductionType = this->fields.conductionType;
  if ( conductionType == 2 )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_13;
    CombineRootComponent__ConductionWireLvExceed(combineRootComponent, 0LL);
  }
  else if ( conductionType == 1 )
  {
    v4 = this->fields.combineRootComponent;
    if ( v4 )
    {
      CombineRootComponent__ConductionWireLimitUp(v4, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w20
  System_String_o *IsStatusUp; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v13; // x21
  unsigned __int64 v14; // x23
  unsigned __int64 max_length; // x9
  int64_t v16; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  bool v20; // w5
  SetRarityDialogControl_o *exeCombineDlg; // x0

  if ( (byte_40FCE46 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_3329, v6);
    byte_40FCE46 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_16;
  qp = SelfUserGame->fields.qp;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsStatusUp = LocalizationManager__Get((System_String_o *)StringLiteral_3329, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  v13 = IsStatusUp;
  v14 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v14 >= (int)max_length )
    {
      v20 = 0;
      goto LABEL_19;
    }
    if ( v14 >= max_length )
    {
      sub_B17100(IsStatusUp, v10, v11);
      sub_B170A0();
    }
    v16 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v14];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v16,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Entity )
      goto LABEL_16;
    IsStatusUp = (System_String_o *)UserServantEntity__IsStatusUp(Entity, 0LL);
    if ( ((unsigned __int8)IsStatusUp & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v14;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v20 = 1;
LABEL_19:
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
LABEL_16:
    sub_B170D4();
  SetRarityDialogControl__SetConfirmCombine(
    exeCombineDlg,
    this->fields.baseData,
    v13,
    this->fields._spendQpVal_k__BackingField,
    qp,
    v20,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL);
}


void __fastcall ServantCombineControl__OnClickMaterialSelectList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_40FCE4B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCE4B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__OnClickRecommendedButton(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  RecommenededConfigDialog_ClickDelegate_o *v13; // x21

  if ( (byte_40FCE4C & 1) == 0 )
  {
    sub_B16FFC(&RecommenededConfigDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&SvtClassAttri_TypeInfo, v5);
    byte_40FCE4C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_12;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0LL);
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v13 = (RecommenededConfigDialog_ClickDelegate_o *)sub_B170CC(
                                                      RecommenededConfigDialog_ClickDelegate_TypeInfo,
                                                      v9,
                                                      v10,
                                                      v11,
                                                      v12);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__,
    0LL);
  if ( !recommendedConfigDialog )
LABEL_12:
    sub_B170D4();
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v13, 0LL);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *campaignLabel; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_40FCE3A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FCE3A = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (gameObject = UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (campaignLabel = this->fields.campaignLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(campaignLabel, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.campaiginListPerSelectSvt = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt, 0LL, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)&this->fields.campaiginPerSelectSvtListIndex = 0x3F80000000000000LL;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  campaignAlphaCalculator = this->fields.campaignAlphaCalculator;
  this->fields.campaignAlphaAnimTimeOld = realtimeSinceStartup;
  if ( campaignAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(campaignAlphaCalculator, 0LL);
}


void __fastcall ServantCombineControl__SetBaseSvtCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  UserServantEntity_o **p_baseData; // x20
  const MethodInfo *v46; // x2
  CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w19
  BalanceConfig_c *v49; // x0
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v51; // w24
  UILabel_o *currentAdjustHpMaxLabel; // x0
  BalanceConfig_c *v53; // x0
  int32_t adjustAtk; // w19
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  int32_t v56; // w24
  UILabel_o *currentAdjustAtkMaxLabel; // x0
  const MethodInfo *v58; // x1
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x24
  const MethodInfo *v66; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  unsigned int klass_high; // w8
  EventMaster_o *EventMaster; // x0
  WarEntity_o *Entity; // x0
  int64_t v71; // x19
  int64_t Time; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  const char *namespaze; // x8
  int32_t missionConditionDetailId; // w9
  int32_t SvtClassId; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x0
  __int64 v80; // x27
  int v81; // w19
  __int64 v82; // x25
  __int64 v83; // x26
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **p_campaiginListPerSelectSvt; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  EventCampaignEntity_o *v100; // x22
  Il2CppObject *v101; // x23
  Il2CppClass *v102; // x8
  _DWORD *data; // x10
  int32_t target; // w9
  _DWORD *v105; // x9
  _DWORD *v106; // x9
  _DWORD *v107; // x8
  EventCampaignEntity_o *v108; // x0
  __int64 v109; // x8
  char v110; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v111; // x23
  EventCampaignEntity_o *v112; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  EventCampaignEntity_o *v118; // x1
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  Il2CppObject *v123; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v124; // x23
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v129; // x21
  ServantCombineControl___c_c *v130; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__88_0; // x22
  Il2CppObject *v133; // x23
  struct ServantCombineControl___c_StaticFields *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  const MethodInfo *v141; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *v143; // x19
  UnityEngine_Component_o *campaign; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v146; // x8
  bool v147; // w1
  MenuListControl_c *v148; // x0
  float v149; // s8
  System_Func_float__float__float__float__o *v150; // x20
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  AlphaTransitionCalculator_o *v155; // x21
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v163; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v164; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_List_Enumerator_T__o v165[2]; // [xsp+28h] [xbp-E8h] BYREF
  int v166; // [xsp+58h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v167; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v168; // [xsp+80h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A0h] [xbp-70h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16

  if ( (byte_40FCE3E & 1) == 0 )
  {
    sub_B16FFC(&AlphaTransitionCalculator_TypeInfo, usrSvtData);
    sub_B16FFC(&Method_System_Array_IndexOf_int___, v10);
    sub_B16FFC(&BalanceConfig_TypeInfo, v11);
    sub_B16FFC(&Method_System_Comparison_EventCampaignEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Comparison_List_EventCampaignEntity____ctor__, v13);
    sub_B16FFC(&System_Comparison_EventCampaignEntity__TypeInfo, v14);
    sub_B16FFC(&System_Comparison_List_EventCampaignEntity___TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v34);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v35);
    sub_B16FFC(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v36);
    sub_B16FFC(&MenuListControl_TypeInfo, v37);
    sub_B16FFC(&NetworkManager_TypeInfo, v38);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B16FFC(&Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__, v40);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B16FFC(&Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__, v42);
    sub_B16FFC(&ServantCombineControl___c_TypeInfo, v43);
    sub_B16FFC(&StringLiteral_1, v44);
    byte_40FCE3E = 1;
  }
  p_baseData = &this->fields.baseData;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  memset(&v168, 0, sizeof(v168));
  memset(&v167, 0, sizeof(v167));
  v166 = 0;
  this->fields.baseData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v46);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_165;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, *p_baseData, 0LL);
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  if ( !*p_baseData )
    goto LABEL_165;
  UserServantEntity__GetAdjustMax(
    *p_baseData,
    &maxAjustAtk[1],
    maxAjustAtk,
    &secondMaxAdjustAtk[1],
    secondMaxAdjustAtk,
    0LL);
  if ( !*p_baseData )
    goto LABEL_165;
  adjustHp = (*p_baseData)->fields.adjustHp;
  v49 = BalanceConfig_TypeInfo;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( adjustHp >= maxAjustAtk[1] )
    v51 = secondMaxAdjustAtk[1];
  else
    v51 = maxAjustAtk[1];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_40377052(
    currentAdjustHpIconLabel,
    44,
    v49->static_fields->StatusUpAdjustHp * adjustHp,
    v49->static_fields->StatusUpAdjustHp * v51,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  currentAdjustHpMaxLabel = this->fields.currentAdjustHpMaxLabel;
  if ( !currentAdjustHpMaxLabel )
    goto LABEL_165;
  UILabel__set_text(currentAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  if ( !*p_baseData )
    goto LABEL_165;
  v53 = BalanceConfig_TypeInfo;
  adjustAtk = (*p_baseData)->fields.adjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( adjustAtk >= maxAjustAtk[0] )
    v56 = secondMaxAdjustAtk[0];
  else
    v56 = maxAjustAtk[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v53 = BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_40377052(
    currentAdjustAtkIconLabel,
    45,
    v53->static_fields->StatusUpAdjustAtk * adjustAtk,
    v53->static_fields->StatusUpAdjustAtk * v56,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  currentAdjustAtkMaxLabel = this->fields.currentAdjustAtkMaxLabel;
  if ( !currentAdjustAtkMaxLabel )
    goto LABEL_165;
  UILabel__set_text(currentAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
  ServantCombineControl__CheckConductionWire(this, v58);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_165;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_165;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !CombineEventCampaigns )
    goto LABEL_151;
  v164 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                   v61,
                                                                                                   v62,
                                                                                                   v63,
                                                                                                   v64);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v164,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v163 = CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v165,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v168 = v165[0];
LABEL_27:
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v168,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v168.fields.current;
    if ( !v168.fields.current )
      sub_B170D4();
    klass_high = HIDWORD(v168.fields.current[1].klass);
    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000034LL) != 0 )
    {
      EventMaster = ServantCombineControl__get_EventMaster(this, v66);
      if ( !EventMaster )
        sub_B170D4();
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)EventMaster,
                 current->fields.missionTargetId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_B170D4();
      v71 = *(_QWORD *)&Entity->fields.eventId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( v71 >= Time )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B170D4();
        namespaze = klass->_1.namespaze;
        missionConditionDetailId = current->fields.missionConditionDetailId;
        if ( namespaze )
        {
          if ( (unsigned int)(missionConditionDetailId - 32) >= 2 )
          {
            if ( missionConditionDetailId == 27 )
            {
              if ( !usrSvtData )
                sub_B170D4();
              if ( UserServantEntity__IsExchangeSvt(usrSvtData, 0LL) )
              {
                if ( !v164 )
                  sub_B170D4();
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v164,
                  current,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                break;
              }
            }
            else if ( (int)namespaze >= 1 )
            {
              v80 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v80 >= (unsigned int)namespaze )
                {
                  sub_B17100(Time, v73, v74);
                  sub_B170A0();
                }
                if ( !usrSvtData )
                  sub_B170D4();
                v81 = *((_DWORD *)&klass->_1.byval_arg.data + v80);
                v83 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
                v82 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v171.fields.currentCryptoKey = v83;
                *(_QWORD *)&v171.fields.fakeValue = v82;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v171, 0LL);
                if ( v81 == (_DWORD)Time )
                  break;
                LODWORD(namespaze) = klass->_1.namespaze;
                if ( (int)++v80 >= (int)namespaze )
                  goto LABEL_27;
              }
              v79 = v164;
              if ( !v164 )
                sub_B170D4();
LABEL_62:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v79,
                current,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            }
          }
          else
          {
            if ( !usrSvtData )
              sub_B170D4();
            SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0LL);
            if ( (System_Array__IndexOf_int_(
                    (System_Int32_array *)klass,
                    SvtClassId,
                    (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              v79 = v164;
              if ( !v164 )
                sub_B170D4();
              goto LABEL_62;
            }
          }
        }
        else if ( (missionConditionDetailId & 0xFFFFFFFE) == 4 )
        {
          v79 = v164;
          if ( !v164 )
            sub_B170D4();
          goto LABEL_62;
        }
      }
    }
  }
  *((_DWORD *)&v165[1].fields.list + v166++) = 602;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v168,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v166 && *((_DWORD *)&v165[0].fields.current + v166 + 1) == 602 )
    --v166;
  v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo,
                                                                                                  v84,
                                                                                                  v85,
                                                                                                  v86,
                                                                                                  v87);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v88,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  p_campaiginListPerSelectSvt = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)v88;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt,
    (System_Int32_array **)v88,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !v164 )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v165,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v164,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v168 = v165[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v168,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    if ( !*p_campaiginListPerSelectSvt )
      sub_B170D4();
    v100 = (EventCampaignEntity_o *)v168.fields.current;
    if ( (*p_campaiginListPerSelectSvt)->fields._size <= 0 )
    {
      v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v96, v97, v98, v99);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v111,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v100 )
        sub_B170D4();
      v112 = EventCampaignEntity__Clone(v100, 0LL);
      if ( !v111 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v111,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v112,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      v113 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_B170D4();
LABEL_107:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v113,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v111,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
    else
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v165,
        *p_campaiginListPerSelectSvt,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v167 = v165[0];
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v167,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
      {
        if ( !v100 )
          sub_B170D4();
        v101 = v167.fields.current;
        if ( !v167.fields.current )
          sub_B170D4();
        if ( !LODWORD(v167.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v102 = v167.fields.current[1].klass;
        data = v102->_1.byval_arg.data;
        if ( !data )
          sub_B170D4();
        if ( v100->fields.target == data[5] )
        {
LABEL_103:
          v108 = EventCampaignEntity__Clone(v100, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v101,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v108,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          v109 = v166;
          v110 = 1;
          goto LABEL_109;
        }
        target = v100->fields.target;
        if ( target == 4 )
        {
          if ( !LODWORD(v167.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( data[5] == 32 )
            goto LABEL_103;
          target = v100->fields.target;
        }
        if ( target == 32 )
        {
          if ( !LODWORD(v167.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v105 = v102->_1.byval_arg.data;
          if ( !v105 )
            sub_B170D4();
          if ( v105[5] == 4 )
            goto LABEL_103;
          target = v100->fields.target;
        }
        if ( target == 5 )
        {
          if ( !LODWORD(v167.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v106 = v102->_1.byval_arg.data;
          if ( !v106 )
            sub_B170D4();
          if ( v106[5] == 33 )
            goto LABEL_103;
          target = v100->fields.target;
        }
        if ( target == 33 )
        {
          if ( !LODWORD(v167.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v107 = v102->_1.byval_arg.data;
          if ( !v107 )
            sub_B170D4();
          if ( v107[5] == 5 )
            goto LABEL_103;
        }
      }
      v109 = v166;
      v110 = 0;
LABEL_109:
      *((_DWORD *)&v165[1].fields.list + v109) = 896;
      ++v166;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v167,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v166 && *((_DWORD *)&v165[0].fields.current + v166 + 1) == 896 )
        --v166;
      if ( (v110 & 1) == 0 )
      {
        v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v114, v115, v116, v117);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v111,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !v100 )
          sub_B170D4();
        v118 = EventCampaignEntity__Clone(v100, 0LL);
        if ( !v111 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v111,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v118,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        v113 = *p_campaiginListPerSelectSvt;
        if ( !*p_campaiginListPerSelectSvt )
          sub_B170D4();
        goto LABEL_107;
      }
    }
  }
  *((_DWORD *)&v165[1].fields.list + v166++) = 962;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v168,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v166 && *((_DWORD *)&v165[0].fields.current + v166 + 1) == 962 )
    --v166;
  if ( !*p_campaiginListPerSelectSvt )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v165,
    *p_campaiginListPerSelectSvt,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v167 = v165[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v167,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
  {
    v123 = v167.fields.current;
    v124 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                       System_Comparison_EventCampaignEntity__TypeInfo,
                                                                       v119,
                                                                       v120,
                                                                       v121,
                                                                       v122);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v124,
      (Il2CppObject *)this,
      Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventCampaignEntity___ctor__);
    if ( !v123 )
      sub_B170D4();
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v123,
      (System_Comparison_T__o *)v124,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  }
  *((_DWORD *)&v165[1].fields.list + v166++) = 1026;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v167,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  CombineEventCampaigns = v163;
  if ( v166 && *((_DWORD *)&v165[0].fields.current + v166 + 1) == 1026 )
    --v166;
  v129 = *p_campaiginListPerSelectSvt;
  if ( !v129 )
    goto LABEL_165;
  if ( v129->fields._size < 1 )
    goto LABEL_151;
  v130 = ServantCombineControl___c_TypeInfo;
  if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v130 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v130->static_fields;
  _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( (BYTE3(v130->vtable._0_Equals.methodPtr) & 4) != 0 && !v130->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v130);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v133 = (Il2CppObject *)static_fields->__9;
    _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_List_EventCampaignEntity___TypeInfo,
                                                                           v125,
                                                                           v126,
                                                                           v127,
                                                                           v128);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__88_0,
      v133,
      Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_List_EventCampaignEntity____ctor__);
    v134 = ServantCombineControl___c_TypeInfo->static_fields;
    v134->__9__88_0 = (struct System_Comparison_List_EventCampaignEntity___o *)_9__88_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v134->__9__88_0,
      (System_Int32_array **)_9__88_0,
      v135,
      v136,
      v137,
      v138,
      v139,
      v140);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v129,
    (System_Comparison_T__o *)_9__88_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
  campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !campaiginListPerSelectSvt )
    goto LABEL_165;
  if ( !campaiginListPerSelectSvt->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v143 = campaiginListPerSelectSvt->fields._items->m_Items[0];
  if ( !v143 )
    goto LABEL_165;
  if ( !v143->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  ServantCombineControl__SetupCampaign(this, v143->fields._items->m_Items[0], v141);
LABEL_151:
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign )
    goto LABEL_165;
  gameObject = UnityEngine_Component__get_gameObject(campaign, 0LL);
  if ( CombineEventCampaigns )
  {
    v146 = this->fields.campaiginListPerSelectSvt;
    if ( !v146 )
      goto LABEL_165;
    v147 = v146->fields._size > 0;
    if ( !gameObject )
      goto LABEL_165;
  }
  else
  {
    v147 = 0;
    if ( !gameObject )
      goto LABEL_165;
  }
  UnityEngine_GameObject__SetActive(gameObject, v147, 0LL);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v148 = MenuListControl_TypeInfo;
  if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v148 = MenuListControl_TypeInfo;
  }
  v149 = ChangedFPSUtil__CovertFrameNumToSecond(v148->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v150 = ExtraEasing__AsymptoticSeriesFloat(
           MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
           (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
           0LL);
  v155 = (AlphaTransitionCalculator_o *)sub_B170CC(AlphaTransitionCalculator_TypeInfo, v151, v152, v153, v154);
  AlphaTransitionCalculator___ctor(v155, v149, v150, 0LL);
  this->fields.campaignAlphaCalculator = v155;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.campaignAlphaCalculator,
    (System_Int32_array **)v155,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  campaignAlphaCalculator = this->fields.campaignAlphaCalculator;
  if ( !campaignAlphaCalculator )
LABEL_165:
    sub_B170D4();
  AlphaTransitionCalculator__MakeFadeInFinished(campaignAlphaCalculator, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x28
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int64_array *v39; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v41; // x20
  struct UserServantEntity_o *baseData; // x8
  __int64 v43; // x22
  __int64 v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_long__o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  _BOOL8 IsExchangeSvt; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  unsigned __int64 v58; // x25
  struct System_Int64_array *v59; // x8
  UnityEngine_Component_o *selectGrid; // x0
  int64_t v61; // x26
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v65; // x27
  UnityEngine_Transform_o *v66; // x22
  int v67; // s0
  SetCombineData_o *v70; // x23
  UnityEngine_Transform_o *v71; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v73; // x27
  MaterialSvtInfo_o *v74; // x28
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  MaterialSvtInfo_ClickDelegate_o *v79; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x27
  WebViewManager_o *v83; // x0
  WarQuestSelectionMaster_o *v84; // x0
  ServantLimitMaster_o *v85; // x28
  __int64 v86; // x21
  __int64 v87; // x22
  int32_t v88; // w21
  int32_t v89; // w0
  ServantLimitEntity_o *v90; // x0
  struct System_Int64_array *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  struct System_Int64_array *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  UIGrid_o *v105; // x0
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  System_String_o *v108; // x0
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  System_String_o *v111; // x0
  WebViewManager_o *v112; // x0
  WarQuestSelectionMaster_o *v113; // x0
  UserServantEntity_o *v114; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v115; // x23
  __int64 v116; // x21
  __int64 v117; // x22
  int32_t v118; // w0
  WarEntity_o *v119; // x0
  int32_t klass_high; // w8
  struct UserServantEntity_o *v121; // x0
  int32_t LevelMax; // w0
  const MethodInfo *v123; // x2
  int32_t checkLv; // w1
  int32_t v125; // w23
  UnityEngine_GameObject_o *currentLvObj; // x0
  UnityEngine_GameObject_o *increLvObj; // x0
  UnityEngine_Component_o *increValLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserServantEntity_o *v130; // x8
  UILabel_o *currentLvLb; // x21
  System_String_o *v132; // x0
  UILabel_o *increLvLb; // x21
  int32_t *p_increLv; // x24
  System_String_o *v135; // x0
  UILabel_o *v136; // x25
  System_String_o *v137; // x21
  Il2CppObject *v138; // x0
  System_String_o *v139; // x0
  CheckCombineResStatus_o *combineResStatus; // x0
  System_String_o *v141; // x1
  UILabel_o *getSkillLb; // x0
  UserServantEntity_o *v143; // x8
  __int64 v144; // x21
  __int64 v145; // x22
  int32_t v146; // w24
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  __int64 v151; // x22
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  UserServantEntity_o *v158; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v160; // x8
  CheckCombineResStatus_o *v161; // x0
  CombineInfoComponent_o *combineInfoComp; // x0
  UnityEngine_GameObject_o *resAdjustInfo; // x0
  UnityEngine_Component_o *resAdjustHpIconLabel; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  int v166; // s0
  UnityEngine_Component_o *resAdjustAtkIconLabel; // x0
  WebViewObject_o *v171; // x22
  int v172; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v177; // x0
  int v178; // w9
  int32_t v179; // w22
  int32_t StatusUpAdjustHp; // w8
  int v181; // w21
  int getHpAdjustVal; // w23
  int32_t v183; // w22
  UIIconLabel_o *v184; // x0
  int32_t v185; // w22
  int32_t v186; // w23
  UIIconLabel_o *v187; // x0
  int32_t v188; // w1
  UILabel_o *resAdjustHpMaxLabel; // x0
  BalanceConfig_c *v190; // x0
  int32_t adjustAtk; // w21
  int v192; // w9
  int32_t v193; // w24
  int32_t StatusUpAdjustAtk; // w8
  int v195; // w21
  int getAtkAdjustVal; // w23
  int32_t v197; // w24
  UIIconLabel_o *v198; // x0
  int32_t v199; // w20
  int32_t v200; // w21
  UIIconLabel_o *v201; // x0
  int32_t v202; // w1
  UILabel_o *resAdjustAtkMaxLabel; // x0
  UIWidget_o *v204; // x20
  int v205; // s0
  const MethodInfo *v209; // x1
  int v210; // s0
  int32_t targetLimitCnt; // [xsp+14h] [xbp-ACh]
  UserServantEntity_o **p_baseData; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_long__o *v216; // [xsp+20h] [xbp-A0h]
  int32_t increAmount; // [xsp+28h] [xbp-98h] BYREF
  int32_t v218; // [xsp+2Ch] [xbp-94h] BYREF
  __int64 v219; // [xsp+30h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+38h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+40h] [xbp-80h] BYREF
  __int64 lateExp; // [xsp+48h] [xbp-78h] BYREF
  System_String_array *skillNameList; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16
  UnityEngine_Vector3_o v230; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_40FCE42 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, data);
    sub_B16FFC(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_B16FFC(&CombineSvtData_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_9236, v23);
    sub_B16FFC(&StringLiteral_7242, v24);
    sub_B16FFC(&StringLiteral_1, v25);
    byte_40FCE42 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  skillNameList = 0LL;
  idList = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  lateExp = 0LL;
  v219 = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v218 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_140;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (System_Int32_array **)materialUsrSvtIdList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v39 = v3->fields.materialUsrSvtIdList;
  if ( !v39 )
    goto LABEL_140;
  baseSvtData = v3->fields.baseSvtData;
  v41 = *(_QWORD *)&v39->max_length;
  this->fields.baseData = baseSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)baseSvtData,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_140;
  v44 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v43 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v226.fields.currentCryptoKey = v44;
  *(_QWORD *)&v226.fields.fakeValue = v43;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v226, 0LL);
  v49 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v45,
                                                     v46,
                                                     v47,
                                                     v48);
  System_Collections_Generic_List_long____ctor(
    v49,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v216 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                      System_Collections_Generic_List_long__TypeInfo,
                                                      v50,
                                                      v51,
                                                      v52,
                                                      v53);
  System_Collections_Generic_List_long____ctor(
    v216,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v41 >= 1 )
  {
    conductionWireInfo = this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v58 = 0LL;
    do
    {
      v59 = v3->fields.materialUsrSvtIdList;
      if ( !v59 )
        goto LABEL_140;
      if ( v58 >= v59->max_length )
        goto LABEL_141;
      selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
      if ( !selectGrid )
        goto LABEL_140;
      v61 = v59->m_Items[v58];
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform(selectGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_140;
      v65 = Object;
      v66 = UnityEngine_GameObject__get_transform(Object, 0LL);
      *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v66 )
        goto LABEL_140;
      v70 = v3;
      UnityEngine_Transform__set_localPosition(v66, *(UnityEngine_Vector3_o *)&v67, 0LL);
      v71 = UnityEngine_GameObject__get_transform(v65, 0LL);
      if ( !v71 )
        goto LABEL_140;
      v230.fields.x = 0.5;
      v230.fields.y = 0.5;
      v230.fields.z = 0.5;
      UnityEngine_Transform__set_localScale(v71, v230, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v65,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v73 = this->fields.baseData;
      v74 = (MaterialSvtInfo_o *)Component_srcLineSprite;
      v79 = (MaterialSvtInfo_ClickDelegate_o *)sub_B170CC(MaterialSvtInfo_ClickDelegate_TypeInfo, v75, v76, v77, v78);
      MaterialSvtInfo_ClickDelegate___ctor(v79, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
      if ( !v74 )
        goto LABEL_140;
      MaterialSvtInfo__setMaterialSvtInfo(v74, v58, v73, v61, 1, 0, v79, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_140;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v61,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v83 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v83 )
        goto LABEL_140;
      v84 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v83,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_140;
      v85 = (ServantLimitMaster_o *)v84;
      v86 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v87 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v227.fields.currentCryptoKey = v86;
      *(_QWORD *)&v227.fields.fakeValue = v87;
      v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v227, 0LL);
      v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
      if ( !v85 )
        goto LABEL_140;
      v90 = ServantLimitMaster__GetEntity(v85, v88, v89, 0LL);
      if ( !v90 )
        goto LABEL_140;
      v3 = v70;
      if ( v90->fields.rarity >= 4 )
      {
        if ( !v49 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v49,
          v61,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( UserServantEntity__isExceeded(Entity, 0LL) )
      {
        if ( !v216 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v216,
          v61,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      IsExchangeSvt = UserServantEntity__IsExchangeSvt(Entity, 0LL);
      if ( IsExchangeSvt )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      ++v58;
    }
    while ( (__int64)v58 < (int)v41 );
    if ( !v49 )
      goto LABEL_140;
    v91 = System_Collections_Generic_List_long___ToArray(
            v49,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v91;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.highRarityList,
      (System_Int32_array **)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    if ( !v216 )
      goto LABEL_140;
    v98 = System_Collections_Generic_List_long___ToArray(
            v216,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v98;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.exceededCheckList,
      (System_Int32_array **)v98,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    v105 = this->fields.selectGrid;
    if ( !v105 )
      goto LABEL_140;
    UIGrid__set_repositionNow(v105, 1, 0LL);
    spendQp = v70->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v218 = spendQp;
    v108 = System_Int32__ToString_38275808((int32_t)&v218, (System_String_o *)StringLiteral_9236, 0LL);
    if ( !qpLb )
      goto LABEL_140;
    UILabel__set_text(qpLb, v108, 0LL);
    getExp = v70->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v218 = getExp;
    v111 = System_Int32__ToString((int32_t)&v218, 0LL);
    if ( !expLb )
      goto LABEL_140;
    UILabel__set_text(expLb, v111, 0LL);
    v112 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v112 )
      goto LABEL_140;
    v113 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v112,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    v114 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v115 = (DataMasterBase_WarMaster__WarEntity__int__o *)v113;
    v116 = *(_QWORD *)&v114->fields.svtId.fields.currentCryptoKey;
    v117 = *(_QWORD *)&v114->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v228.fields.currentCryptoKey = v116;
    *(_QWORD *)&v228.fields.fakeValue = v117;
    v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v228, 0LL);
    if ( !v115 )
      goto LABEL_140;
    v119 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v115,
             v118,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v119 )
      goto LABEL_140;
    klass_high = HIDWORD(v119[1].klass);
    v121 = this->fields.baseData;
    this->fields.expType = klass_high;
    if ( !v121 )
      goto LABEL_140;
    this->fields.totalExp = v121->fields.exp + this->fields._getExpVal_k__BackingField;
    this->fields.checkLv = v121->fields.lv;
    LevelMax = UserServantEntity__getLevelMax(v121, 0LL);
    checkLv = this->fields.checkLv;
    v125 = LevelMax;
    if ( checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, checkLv, v123) )
        checkLv = this->fields.checkLv;
    }
    currentLvObj = this->fields.currentLvObj;
    if ( !currentLvObj )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(currentLvObj, 1, 0LL);
    increLvObj = this->fields.increLvObj;
    if ( !increLvObj )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(increLvObj, 1, 0LL);
    increValLb = (UnityEngine_Component_o *)this->fields.increValLb;
    if ( !increValLb )
      goto LABEL_140;
    gameObject = UnityEngine_Component__get_gameObject(increValLb, 0LL);
    if ( !gameObject )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v130 = this->fields.baseData;
    if ( !v130 )
      goto LABEL_140;
    currentLvLb = this->fields.currentLvLb;
    v132 = System_Int32__ToString((int)v130 + 256, 0LL);
    if ( !currentLvLb )
      goto LABEL_140;
    UILabel__set_text(currentLvLb, v132, 0LL);
    increLvLb = this->fields.increLvLb;
    p_increLv = &this->fields.increLv;
    v135 = System_Int32__ToString((int)this + 464, 0LL);
    if ( !increLvLb )
      goto LABEL_140;
    UILabel__set_text(increLvLb, v135, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    this->fields.increAmount = this->fields.increLv - (*p_baseData)->fields.lv;
    v136 = this->fields.increValLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v137 = LocalizationManager__Get((System_String_o *)StringLiteral_7242, 0LL);
    increAmount = this->fields.increAmount;
    v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    v139 = System_String__Format(v137, v138, 0LL);
    if ( !v136 )
      goto LABEL_140;
    UILabel__set_text(v136, v139, 0LL);
    combineResStatus = this->fields.combineResStatus;
    if ( !combineResStatus )
      goto LABEL_140;
    CheckCombineResStatus__getCombineResStatus(combineResStatus, &afterAtk[1], afterAtk, *p_baseData, *p_increLv, 0LL);
    afterAtk[1] += v3->fields.getHpAdjustVal;
    afterAtk[0] += v3->fields.getAtkAdjustVal;
    if ( !*p_baseData )
      goto LABEL_140;
    UserServantEntity__getNextUseSkillInfo(*p_baseData, &idList, &skillNameList, *p_increLv, targetLimitCnt, 1, 0LL);
    if ( skillNameList )
    {
      if ( !skillNameList->max_length )
      {
LABEL_141:
        sub_B17100(IsExchangeSvt, v56, v57);
        sub_B170A0();
      }
      v141 = skillNameList->m_Items[0];
      if ( v141 )
      {
        getSkillLb = this->fields.getSkillLb;
        if ( !getSkillLb )
          goto LABEL_140;
        UILabel__set_text(getSkillLb, v141, 0LL);
      }
    }
    v143 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v144 = *(_QWORD *)&v143->fields.limitCount.fields.currentCryptoKey;
    v145 = *(_QWORD *)&v143->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v229.fields.currentCryptoKey = v144;
    *(_QWORD *)&v229.fields.fakeValue = v145;
    v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v229, 0LL);
    v151 = sub_B170CC(CombineSvtData_TypeInfo, v147, v148, v149, v150);
    CombineSvtData___ctor((CombineSvtData_o *)v151, 0LL);
    if ( !v151 )
      goto LABEL_140;
    v158 = *p_baseData;
    *(_QWORD *)(v151 + 16) = *p_baseData;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v151 + 16),
      (System_Int32_array **)v158,
      v152,
      v153,
      v154,
      v155,
      v156,
      v157);
    increLv = this->fields.increLv;
    *(_DWORD *)(v151 + 32) = v125;
    *(_DWORD *)(v151 + 24) = increLv;
    *(_DWORD *)(v151 + 28) = v146;
    v160 = this->fields.baseData;
    if ( !v160 )
      goto LABEL_140;
    v161 = this->fields.combineResStatus;
    if ( !v161 )
      goto LABEL_140;
    CheckCombineResStatus__setSvtExp(
      v161,
      (float *)&lateExp + 1,
      (int32_t *)&lateExp,
      this->fields.totalExp,
      v160->fields.lv,
      v125,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v151 + 36) = HIDWORD(lateExp);
    *(_DWORD *)(v151 + 40) = lateExp;
    *(_DWORD *)(v151 + 44) = afterAtk[1];
    *(_DWORD *)(v151 + 48) = v3->fields.getHpAdjustVal;
    *(_DWORD *)(v151 + 52) = afterAtk[0];
    *(_DWORD *)(v151 + 56) = v3->fields.getAtkAdjustVal;
    combineInfoComp = this->fields.combineInfoComp;
    if ( !combineInfoComp )
      goto LABEL_140;
    CombineInfoComponent__setCombineResStatusInfo(combineInfoComp, (CombineSvtData_o *)v151, 0LL);
    *(_QWORD *)secondMaxAdjustAtk = 0LL;
    *(_QWORD *)maxAjustAtk = 0LL;
    if ( !*p_baseData )
      goto LABEL_140;
    UserServantEntity__GetAdjustMax(
      *p_baseData,
      &maxAjustAtk[1],
      maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0LL);
    resAdjustInfo = this->fields.resAdjustInfo;
    if ( !resAdjustInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(resAdjustInfo, 1, 0LL);
    resAdjustHpIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustHpIconLabel;
    if ( !resAdjustHpIconLabel )
      goto LABEL_140;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                resAdjustHpIconLabel,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v166 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v166, 0LL);
    resAdjustAtkIconLabel = (UnityEngine_Component_o *)this->fields.resAdjustAtkIconLabel;
    if ( !resAdjustAtkIconLabel )
      goto LABEL_140;
    v171 = UnityEngine_Component__GetComponent_WebViewObject_(
             resAdjustAtkIconLabel,
             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v172 = UnityEngine_Color__get_white(0LL);
    if ( !v171 )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)v171, *(UnityEngine_Color_o *)&v172, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v177 = BalanceConfig_TypeInfo;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v177 = BalanceConfig_TypeInfo;
      }
      v178 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v178 = 0;
    }
    v179 = maxAjustAtk[1];
    StatusUpAdjustHp = v177->static_fields->StatusUpAdjustHp;
    v181 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v219) = v181;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( v178 && !v177->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v177);
      v177 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v181 >= StatusUpAdjustHp * v179 )
    {
      v183 = secondMaxAdjustAtk[1];
      if ( (BYTE3(v177->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    else
    {
      v183 = maxAjustAtk[1];
      if ( (BYTE3(v177->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    if ( !v177->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v177);
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
LABEL_102:
    v184 = this->fields.resAdjustHpIconLabel;
    v185 = StatusUpAdjustHp * v183;
    if ( !v184 )
      goto LABEL_140;
    v186 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v181;
    UIIconLabel__Set_40377052(v184, 44, v186, v185, 0, 0LL, 0, 0, 0, 0LL);
    if ( !System_Int32__Equals_38275732((int32_t)&v219 + 4, v186, 0LL) )
    {
      v187 = this->fields.resAdjustHpIconLabel;
      if ( !v187 )
        goto LABEL_140;
      if ( v186 >= v185 )
        v188 = v185;
      else
        v188 = v186;
      UIIconLabel__SetCombineResTxt(v187, v188, v185, v186 >= v185, 0LL);
    }
    resAdjustHpMaxLabel = this->fields.resAdjustHpMaxLabel;
    if ( !resAdjustHpMaxLabel )
      goto LABEL_140;
    UILabel__set_text(resAdjustHpMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    v190 = BalanceConfig_TypeInfo;
    adjustAtk = (*p_baseData)->fields.adjustAtk;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v190 = BalanceConfig_TypeInfo;
      }
      v192 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v192 = 0;
    }
    v193 = maxAjustAtk[0];
    StatusUpAdjustAtk = v190->static_fields->StatusUpAdjustAtk;
    v195 = StatusUpAdjustAtk * adjustAtk;
    LODWORD(v219) = v195;
    getAtkAdjustVal = v3->fields.getAtkAdjustVal;
    if ( v192 && !v190->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v190);
      v190 = BalanceConfig_TypeInfo;
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    if ( v195 >= StatusUpAdjustAtk * v193 )
    {
      v197 = secondMaxAdjustAtk[0];
      if ( (BYTE3(v190->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_125:
        v198 = this->fields.resAdjustAtkIconLabel;
        v199 = StatusUpAdjustAtk * v197;
        if ( !v198 )
          goto LABEL_140;
        v200 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v195;
        UIIconLabel__Set_40377052(v198, 45, v200, v199, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_38275732((int32_t)&v219, v200, 0LL) )
        {
          v201 = this->fields.resAdjustAtkIconLabel;
          if ( !v201 )
            goto LABEL_140;
          if ( v200 >= v199 )
            v202 = v199;
          else
            v202 = v200;
          UIIconLabel__SetCombineResTxt(v201, v202, v199, v200 >= v199, 0LL);
        }
        resAdjustAtkMaxLabel = this->fields.resAdjustAtkMaxLabel;
        if ( resAdjustAtkMaxLabel )
        {
          UILabel__set_text(resAdjustAtkMaxLabel, (System_String_o *)StringLiteral_1, 0LL);
          v204 = (UIWidget_o *)this->fields.qpLb;
          if ( this->fields.haveQpVal >= this->fields._spendQpVal_k__BackingField )
          {
            *(UnityEngine_Color_o *)&v210 = UnityEngine_Color__get_white(0LL);
            if ( v204 )
            {
              UIWidget__set_color(v204, *(UnityEngine_Color_o *)&v210, 0LL);
              this->fields._IsExeCombine_k__BackingField = 1;
              goto LABEL_138;
            }
          }
          else
          {
            *(UnityEngine_Color_o *)&v205 = UnityEngine_Color__get_red(0LL);
            if ( v204 )
            {
              UIWidget__set_color(v204, *(UnityEngine_Color_o *)&v205, 0LL);
              this->fields._IsExeCombine_k__BackingField = 0;
LABEL_138:
              ServantCombineControl__SetExeBtnState(this, v209);
              return;
            }
          }
        }
LABEL_140:
        sub_B170D4();
      }
    }
    else
    {
      v197 = maxAjustAtk[0];
      if ( (BYTE3(v190->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_125;
    }
    if ( !v190->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v190);
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    goto LABEL_125;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_30461508(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_Collections_Generic_List_UserServantEntity__o *v5; // x28
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v30; // x0
  WarQuestSelectionMaster_o *v31; // x21
  WebViewManager_o *v32; // x0
  WarQuestSelectionMaster_o *v33; // x0
  struct MenuListControl_o *menuListCtr; // x8
  CheckCombineResStatus_o *combineResStatus; // x0
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x25
  float v37; // s0
  CheckCombineResStatus_o *v38; // x0
  float v39; // s8
  float v40; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v42; // x25
  __int64 v43; // x26
  float v44; // s9
  int32_t v45; // w0
  WarEntity_o *Entity; // x26
  UserGameEntity_o *SelfUserGame; // x0
  UserServantEntity_o *v48; // x27
  int32_t SvtClassId; // w0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int size; // w25
  __int64 v55; // x22
  int v56; // w21
  int v57; // w23
  unsigned int v58; // w8
  const MethodInfo *v59; // x3
  struct UserServantEntity_o *v60; // x8
  ServantCombineControl_c *v61; // x0
  System_Collections_Generic_List_UserServantEntity__o *v62; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x28
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v66; // w0
  WarEntity_o *v67; // x0
  WarEntity_o *v68; // x27
  CombineMaterialEntity_o *v69; // x26
  WarEntity_o *v70; // x0
  int32_t priority; // w8
  int value; // w26
  BalanceConfig_c *v73; // x0
  ServantCombineControl_c *v74; // x8
  int SameClassExp; // w27
  float FIXED_VAL; // s11
  double v77; // d0
  UserServantEntity_o *v78; // x0
  int32_t startType; // w27
  int32_t v80; // w0
  int32_t v81; // w27
  int32_t CombineQp; // w0
  int32_t v83; // w0
  int v84; // w26
  __int64 v85; // x23
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x1
  int32_t v93; // w8
  UserServantEntity_o *v94; // x0
  UserServantEntity_o *v95; // x0
  bool isAdjustAtkMax; // w8
  UserServantEntity_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  UserServantEntity_o *v102; // x0
  bool isSecondAdjustAtkMax; // w8
  System_Collections_Generic_List_long__o *v104; // x20
  int v105; // w21
  __int64 v106; // x22
  unsigned int v107; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v108; // x8
  __int128 v109; // q0
  int64_t v110; // x0
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  int32_t SvtClassGroupType; // [xsp+4h] [xbp-DCh]
  DataMasterBase_WarMaster__WarEntity__int__o *v120; // [xsp+8h] [xbp-D8h]
  int32_t expType; // [xsp+14h] [xbp-CCh]
  UserGameEntity_o *v122; // [xsp+18h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v123; // [xsp+20h] [xbp-C0h]
  CombineMaterialMaster_o *v124; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+50h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  v5 = targetMaterialList;
  if ( (byte_40FCE50 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, targetMaterialList);
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v20);
    sub_B16FFC(&System_Math_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_B16FFC(&ServantCombineControl_TypeInfo, v24);
    sub_B16FFC(&SetCombineData_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_40FCE50 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  targetMaterialList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_89;
  v31 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v30,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v32 )
    goto LABEL_89;
  v33 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v32,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_89;
  v123 = (DataMasterBase_WarMaster__WarEntity__int__o *)v33;
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_89;
  combineEventList = menuListCtr->fields.combineEventList;
  v37 = CheckCombineResStatus__GetExpCampaignValue(combineResStatus, this->fields.baseData, combineEventList, 0LL);
  v38 = this->fields.combineResStatus;
  if ( !v38 )
    goto LABEL_89;
  v39 = v37;
  v124 = (CombineMaterialMaster_o *)v31;
  v40 = CheckCombineResStatus__GetQpCampaignValue(v38, this->fields.baseData, combineEventList, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_89;
  v43 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v42 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v44 = v40;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v127.fields.currentCryptoKey = v43;
  *(_QWORD *)&v127.fields.fakeValue = v42;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v127, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_89;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v45,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_89;
  v48 = this->fields.baseData;
  v122 = SelfUserGame;
  if ( !v48 )
    goto LABEL_89;
  expType = HIDWORD(Entity[1].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v48, 0LL);
  SvtClassGroupType = UserServantEntity__getSvtClassGroupType(v48, SvtClassId, 0LL);
  if ( !v5 )
    goto LABEL_89;
  size = v5->fields._size;
  if ( size < 1 )
  {
    v57 = 0;
    v56 = 0;
  }
  else
  {
    v120 = MasterData_WarQuestSelectionMaster;
    v55 = 0LL;
    v56 = 0;
    v57 = 0;
    v58 = v5->fields._size;
    while ( 1 )
    {
      if ( v58 <= (unsigned int)v55 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v62 = v5;
      v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)v5->fields._items->m_Items[v55];
      if ( !v63 )
        goto LABEL_89;
      klass = v63[2].klass;
      monitor = v63[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v128.fields.currentCryptoKey = klass;
      *(_QWORD *)&v128.fields.fakeValue = monitor;
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v128, 0LL);
      v67 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v120,
              v66,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !v67 )
        goto LABEL_89;
      v68 = v67;
      if ( !v124 )
        goto LABEL_89;
      v69 = CombineMaterialMaster__GetEntity(v124, (int32_t)v67[1].monitor, v63[6].fields.missionTargetId, 0LL);
      if ( !v123 )
        goto LABEL_89;
      v70 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v123,
              v68->fields.startType,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v69 || !v70 )
        goto LABEL_89;
      priority = v70->fields.priority;
      value = v69->fields.value;
      if ( priority == 3 )
        goto LABEL_40;
      if ( priority == SvtClassGroupType )
      {
        v78 = this->fields.baseData;
        if ( !v78 )
          goto LABEL_89;
        startType = v68->fields.startType;
        if ( startType == UserServantEntity__getSvtClassId(v78, 0LL) )
        {
LABEL_40:
          v73 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v73 = BalanceConfig_TypeInfo;
          }
          v74 = ServantCombineControl_TypeInfo;
          SameClassExp = v73->static_fields->SameClassExp;
          if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v74 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v74->static_fields->FIXED_VAL;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v77 = ceil((double)value * (double)SameClassExp / FIXED_VAL);
          if ( v77 == INFINITY )
            v77 = -INFINITY;
          value = (int)v77;
        }
      }
      v80 = UnityEngine_Mathf__CeilToInt(v39 * (float)value, 0LL);
      if ( !this->fields.baseData )
        goto LABEL_89;
      v81 = v80;
      CombineQp = UserServantEntity__getCombineQp(this->fields.baseData, 0LL);
      v83 = UnityEngine_Mathf__CeilToInt(v44 * (float)CombineQp, 0LL);
      if ( !v122 )
        goto LABEL_89;
      v84 = v83 + v57;
      if ( v83 + v57 > v122->fields.qp )
        break;
      if ( !v27 )
        goto LABEL_89;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        v63,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      v60 = this->fields.baseData;
      if ( !v60 )
        goto LABEL_89;
      v56 += v81;
      if ( ServantCombineControl__IsLevelMax(this, v60->fields.exp + v56, expType, v59) )
        goto LABEL_61;
      v5 = v62;
      v61 = ServantCombineControl_TypeInfo;
      if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        v61 = ServantCombineControl_TypeInfo;
      }
      if ( (_DWORD)v55 == v61->static_fields->MAX_SELECT_NUM - 1 || (int)v55 + 1 >= size )
        goto LABEL_61;
      v58 = v62->fields._size;
      ++v55;
      v57 = v84;
    }
    this->fields.isQpCondClear = 0;
  }
  v84 = v57;
  if ( !v27 )
    return 0LL;
LABEL_61:
  if ( v27->fields._size < 1 )
    return 0LL;
  v85 = sub_B170CC(SetCombineData_TypeInfo, v50, v51, v52, v53);
  SetCombineData___ctor((SetCombineData_o *)v85, 0LL);
  if ( !v85 )
    goto LABEL_89;
  v92 = (System_Int32_array **)this->fields.baseData;
  *(_QWORD *)(v85 + 16) = v92;
  sub_B16F98((BattleServantConfConponent_o *)(v85 + 16), v92, v86, v87, v88, v89, v90, v91);
  v93 = v27->fields._size;
  *(_DWORD *)(v85 + 28) = v84;
  *(_DWORD *)(v85 + 32) = v56;
  *(_QWORD *)(v85 + 48) = 0LL;
  *(_DWORD *)(v85 + 24) = v93;
  v94 = this->fields.baseData;
  if ( !v94 )
    goto LABEL_89;
  if ( UserServantEntity__isAdjustHpMax(v94, 0LL) )
  {
    v95 = this->fields.baseData;
    if ( !v95 )
      goto LABEL_89;
    isAdjustAtkMax = UserServantEntity__isAdjustAtkMax(v95, 0LL);
  }
  else
  {
    isAdjustAtkMax = 0;
  }
  *(_BYTE *)(v85 + 44) = isAdjustAtkMax;
  v97 = this->fields.baseData;
  if ( !v97 )
LABEL_89:
    sub_B170D4();
  if ( UserServantEntity__isSecondAdjustHpMax(v97, 0LL) )
  {
    v102 = this->fields.baseData;
    if ( !v102 )
      goto LABEL_89;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(v102, 0LL);
  }
  else
  {
    isSecondAdjustAtkMax = 0;
  }
  *(_BYTE *)(v85 + 45) = isSecondAdjustAtkMax;
  v104 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                      System_Collections_Generic_List_long__TypeInfo,
                                                      v98,
                                                      v99,
                                                      v100,
                                                      v101);
  System_Collections_Generic_List_long____ctor(
    v104,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v105 = v27->fields._size;
  if ( v105 >= 1 )
  {
    v106 = 0LL;
    v107 = v27->fields._size;
    while ( 1 )
    {
      if ( v107 <= (unsigned int)v106 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v108 = v27->fields._items->m_Items[v106];
      if ( !v108 )
        goto LABEL_89;
      v109 = *(_OWORD *)&v108->fields.addCount;
      *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v108->fields.missionTargetId;
      *(_OWORD *)&v126.fields.fakeValue = v109;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v125 = v126;
      v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v125, 0LL);
      if ( !v104 )
        goto LABEL_89;
      System_Collections_Generic_List_long___Add(
        v104,
        v110,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (int)v106 + 1 >= v105 )
        goto LABEL_87;
      v107 = v27->fields._size;
      ++v106;
    }
  }
  if ( !v104 )
    goto LABEL_89;
LABEL_87:
  v111 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                  v104,
                                  (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  *(_QWORD *)(v85 + 56) = v111;
  sub_B16F98((BattleServantConfConponent_o *)(v85 + 56), v111, v112, v113, v114, v115, v116, v117);
  return (SetCombineData_o *)v85;
}


void __fastcall ServantCombineControl__SetCombineNullData(ServantCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  ServantCombineControl__DestroyGrid(this, method);
  ServantCombineControl__InitInfo(this, v3);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    sub_B170D4();
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
  ServantCombineControl__SetBaseSvtCardImg(this, this->fields.baseData, v5);
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 1, v6);
}


void __fastcall ServantCombineControl__SetDispCardImg(
        ServantCombineControl_o *this,
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

  if ( (byte_40FCE41 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FCE41 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_40FCE49 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40FCE49 = 1;
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


void __fastcall ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20
  System_String_o *v5; // x0

  if ( (byte_40FCE3C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236, method);
    byte_40FCE3C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = SelfUserGame->fields.qp,
        v5 = System_Int32__ToString_38275808((int)this + 476, (System_String_o *)StringLiteral_9236, 0LL),
        !haveQpLb) )
  {
    sub_B170D4();
  }
  UILabel__set_text(haveQpLb, v5, 0LL);
}


void __fastcall ServantCombineControl__SetIsRecommendedButtonEnabled(
        ServantCombineControl_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UICommonButton_o *recommendedButton; // x19
  bool isSelectBase; // w8
  UserServantEntity_o *baseData; // x0

  recommendedButton = this->fields.recommendedButton;
  if ( !isEnabled )
    goto LABEL_6;
  isSelectBase = this->fields.isSelectBase;
  if ( !isSelectBase )
    goto LABEL_7;
  baseData = this->fields.baseData;
  if ( !baseData )
  {
LABEL_6:
    isSelectBase = 0;
LABEL_7:
    if ( !recommendedButton )
      goto LABEL_9;
    goto LABEL_8;
  }
  isSelectBase = !UserServantEntity__isLevelMax(baseData, 0LL);
  if ( !recommendedButton )
LABEL_9:
    sub_B170D4();
LABEL_8:
  UICommonButton__SetButtonEnable(recommendedButton, isSelectBase, 1, 0LL);
}


void __fastcall ServantCombineControl__SetMaterialToCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  CombineRootComponent_o *combineRootComponent; // x0

  ServantCombineControl__SetCombineData(this, recommendedCombineData, method);
  ServantCombineControl__SetStateInfoMsg(this, 2, v4);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_Int32_array **RecommendedCombineData; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL4 isQpCondClear; // w22
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  const MethodInfo *v37; // x2
  WebViewManager_o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_String_o *v43; // x20
  ServantCombineControl___c_c *v44; // x8
  struct ServantCombineControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__107_1; // x22
  System_String_o *v47; // x21
  Il2CppObject *v48; // x23
  struct ServantCombineControl___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t v56; // w8
  CommonUI_o *v57; // x0
  System_String_o *v58; // x1
  System_String_o *v59; // x2
  CommonUI_o *Instance; // x19
  System_String_o *v61; // x21
  System_String_o *v62; // x22
  System_String_o *v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  CommonConfirmDialog_ClickDelegate_o *v68; // x24
  System_String_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4

  if ( (byte_40FCE4D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, v9);
    sub_B16FFC(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__, v10);
    sub_B16FFC(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__, v11);
    sub_B16FFC(&ServantCombineControl___c__DisplayClass107_0_TypeInfo, v12);
    sub_B16FFC(&ServantCombineControl___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_11022, v14);
    sub_B16FFC(&StringLiteral_11021, v15);
    sub_B16FFC(&StringLiteral_11020, v16);
    sub_B16FFC(&StringLiteral_3253, v17);
    sub_B16FFC(&StringLiteral_3251, v18);
    sub_B16FFC(&StringLiteral_1, v19);
    byte_40FCE4D = 1;
  }
  v20 = sub_B170CC(ServantCombineControl___c__DisplayClass107_0_TypeInfo, method, v2, v3, v4);
  ServantCombineControl___c__DisplayClass107_0___ctor((ServantCombineControl___c__DisplayClass107_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_33;
  *(_QWORD *)(v20 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = (System_Int32_array **)ServantCombineControl__GetRecommendedCombineData(this, v27);
  *(_QWORD *)(v20 + 24) = RecommendedCombineData;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 24), RecommendedCombineData, v29, v30, v31, v32, v33, v34);
  isQpCondClear = this->fields.isQpCondClear;
  if ( *(_QWORD *)(v20 + 24) )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
        ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v20 + 24), v37);
        return;
      }
LABEL_33:
      sub_B170D4();
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11022, 0LL);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
    v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
    v68 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v64,
                                                   v65,
                                                   v66,
                                                   v67);
    CommonConfirmDialog_ClickDelegate___ctor(
      v68,
      (Il2CppObject *)v20,
      Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__OpenConfirmDialog_18236860(Instance, (System_String_o *)StringLiteral_1, v61, v62, v63, v68, 0, 0, 0, 0LL);
  }
  else
  {
    v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( isQpCondClear )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11020, 0LL);
      v44 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v44 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v44->static_fields;
      _9__107_1 = static_fields->__9__107_1;
      v47 = (System_String_o *)StringLiteral_1;
      if ( !_9__107_1 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)static_fields->__9;
        _9__107_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
        System_Action___ctor(_9__107_1, v48, Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, 0LL);
        v49 = ServantCombineControl___c_TypeInfo->static_fields;
        v49->__9__107_1 = _9__107_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v49->__9__107_1,
          (System_Int32_array **)_9__107_1,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
      }
      if ( !v38 )
        goto LABEL_33;
      v56 = 25;
      v57 = (CommonUI_o *)v38;
      v58 = v47;
      v59 = v43;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11021, 0LL);
      _9__107_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v70, v71, v72, v73);
      System_Action___ctor(
        _9__107_1,
        (Il2CppObject *)v20,
        Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__,
        0LL);
      if ( !v38 )
        goto LABEL_33;
      v57 = (CommonUI_o *)v38;
      v59 = v69;
      v58 = (System_String_o *)StringLiteral_1;
      v56 = 28;
    }
    CommonUI__OpenNotificationDialog(v57, v58, v59, _9__107_1, -1, 0, 0, 0, 0, v56, 0, 0, 0LL, 0LL);
  }
}


void __fastcall ServantCombineControl__SetSelectMaterialEnable(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *selectMaterialSvtBtn; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (gameObject = UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, !this->fields.isSelectBase, 0LL),
        (selectMaterialSvtBtn = (UnityEngine_Behaviour_o *)this->fields.selectMaterialSvtBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(selectMaterialSvtBtn, this->fields.isSelectBase, 0LL),
        (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, !this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetStateInfoMsg(
        ServantCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
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

  if ( (byte_40FCE4A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_7248, v6);
    sub_B16FFC(&StringLiteral_7257, v7);
    sub_B16FFC(&StringLiteral_5746, v8);
    sub_B16FFC(&StringLiteral_12162, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FCE4A = 1;
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
      v17 = &StringLiteral_7248;
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
    v17 = &StringLiteral_7257;
  }
  v18 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
LABEL_27:
  v19 = this->fields.detailInfoLb;
  if ( !v19 )
    goto LABEL_29;
  UILabel__set_text(v19, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetupCampaign(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *eventInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int v7; // s0
  float v8; // s1
  float v9; // s2
  int32_t target; // w8
  int v11; // s8
  float v12; // s9
  float v13; // s10
  int v14; // w8
  UISprite_o *campaign; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  struct UISprite_o *v18; // x0
  WebViewManager_o *Instance; // x0
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventCampaignEntity_o *Data; // x0
  UILabel_o *campaignLabel; // x20
  System_String_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v26; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCE3F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, eventInfoData);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_19593, v6);
    byte_40FCE3F = 1;
  }
  v26 = 0LL;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  if ( !eventInfoData )
LABEL_22:
    sub_B170D4();
  target = eventInfoData->fields.target;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  if ( target > 5 )
  {
    if ( target != 27 )
    {
      if ( (target & 0xFFFFFFFE) != 32 )
        goto LABEL_13;
      goto LABEL_11;
    }
LABEL_9:
    v11 = 1113849856;
    v14 = 1;
LABEL_12:
    v12 = 4.0;
    v13 = 0.0;
    HIDWORD(v26) = v14;
    goto LABEL_13;
  }
  if ( target == 2 )
    goto LABEL_9;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_11:
    v11 = 1119748096;
    v14 = 2;
    goto LABEL_12;
  }
LABEL_13:
  campaign = this->fields.campaign;
  v16 = System_Int32__ToString((int32_t)&v26 + 4, 0LL);
  v17 = System_String__Concat_43743732((System_String_o *)StringLiteral_19593, v16, 0LL);
  if ( !campaign )
    goto LABEL_22;
  UISprite__set_spriteName(campaign, v17, 0LL);
  v18 = this->fields.campaign;
  if ( !v18 )
    goto LABEL_22;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v18->klass->vtable._33_MakePixelPerfect.method)(
    v18,
    v18->klass->vtable._34_get_minWidth.methodPtr);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  Data = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, eventInfoData->fields.eventId, 0LL);
  if ( !Data )
    goto LABEL_22;
  LODWORD(v26) = Data->fields.value / 1000;
  campaignLabel = this->fields.campaignLabel;
  v23 = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !campaignLabel )
    goto LABEL_22;
  UILabel__set_text(campaignLabel, v23, 0LL);
  v24 = (UnityEngine_Component_o *)this->fields.campaignLabel;
  if ( !v24 )
    goto LABEL_22;
  transform = UnityEngine_Component__get_transform(v24, 0LL);
  if ( !transform )
    goto LABEL_22;
  LODWORD(v27.fields.x) = v11;
  v27.fields.y = v12;
  v27.fields.z = v13;
  UnityEngine_Transform__set_localPosition(transform, v27, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  UserGameEntity_o *SelfUserGame; // x0

  if ( (byte_40FCE45 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3329, v3);
    byte_40FCE45 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3329, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !this->fields.exeCombineDlg )
    sub_B170D4();
  SetRarityDialogControl__SetExceedMaterialInfo(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    this->fields.exceededCheckList,
    v4,
    this->fields._spendQpVal_k__BackingField,
    SelfUserGame->fields.qp,
    0LL);
}


void __fastcall ServantCombineControl__ShowRareSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int32_t qp; // w21
  unsigned __int64 v13; // x23
  unsigned __int64 max_length; // x9
  int64_t v15; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  bool v19; // w6
  SetRarityDialogControl_o *exeCombineDlg; // x0

  if ( (byte_40FCE44 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_3329, v6);
    byte_40FCE44 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3329, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_16;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  qp = SelfUserGame->fields.qp;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v13 >= (int)max_length )
    {
      v19 = 0;
      goto LABEL_19;
    }
    if ( v13 >= max_length )
    {
      sub_B17100(SelfUserGame, v9, v10);
      sub_B170A0();
    }
    v15 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v13];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               v15,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Entity )
      goto LABEL_16;
    SelfUserGame = (UserGameEntity_o *)UserServantEntity__IsStatusUp(Entity, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v13;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v19 = 1;
LABEL_19:
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
LABEL_16:
    sub_B170D4();
  SetRarityDialogControl__SetConfirmInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.highRarityList,
    v7,
    this->fields._spendQpVal_k__BackingField,
    qp,
    v19,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__TutorialBlock(
        ServantCombineControl_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UICommonButton_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *selectMaterialSvtBtn; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *selectGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v22; // x8
  unsigned __int64 v23; // x10
  System_Collections_IEnumerator_c **v24; // x11
  __int64 v25; // x0
  UnityEngine_Component_o *v26; // x0
  __int64 v27; // x9
  UnityEngine_Collider_o *v28; // x0
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x21
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  UnityEngine_GameObject_o *charaGraphBase; // x0
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_Collider_o *v38; // x0
  UnityEngine_Component_o *recommendedButton; // x0
  WebViewObject_o *v40; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  UnityEngine_Component_o *cancelBtnLb; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Transform_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_Collider_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_Collider_o *v52; // x0
  struct UIButton_o *v53; // x0

  if ( (byte_40FCE53 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&progress);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v10);
    byte_40FCE53 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  Component_srcLineSprite = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  helpBtn,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Component_srcLineSprite )
    goto LABEL_63;
  UICommonButton__SetColliderEnable(Component_srcLineSprite, 0, 1, 0LL);
  selectMaterialSvtBtn = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn;
  if ( !selectMaterialSvtBtn )
    goto LABEL_63;
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        selectMaterialSvtBtn,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !Component_WebViewObject )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_63;
  transform = UnityEngine_Component__get_transform(selectGrid, 0LL);
  if ( !transform )
    goto LABEL_63;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1].method;
    }
    else
    {
LABEL_21:
      v25 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v26 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
                                       Enumerator,
                                       *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_61;
    v27 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (UnityEngine_Transform_c *)v26->klass->_2.typeHierarchy[v27 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v26);
LABEL_61:
      sub_B170D4();
    }
    v28 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v26,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !v28 )
      sub_B170D4();
    UnityEngine_Collider__set_enabled(v28, 0, 0LL);
  }
  v29 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v29 )
  {
    v30 = *(_QWORD *)v29;
    v31 = v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_33;
      }
      v34 = v30 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_AAFEF8(v29, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
  }
  charaGraphBase = this->fields.charaGraphBase;
  if ( !charaGraphBase )
    goto LABEL_63;
  v36 = UnityEngine_GameObject__get_transform(charaGraphBase, 0LL);
  if ( !v36 )
    goto LABEL_63;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v36, 0LL);
  if ( !parent )
    goto LABEL_63;
  v38 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    parent,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !v38 )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled(v38, 0, 0LL);
  recommendedButton = (UnityEngine_Component_o *)this->fields.recommendedButton;
  if ( !recommendedButton )
    goto LABEL_63;
  v40 = UnityEngine_Component__GetComponent_WebViewObject_(
          recommendedButton,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !v40 )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)v40, 0, 1, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_63;
  cancelBtnLb = (UnityEngine_Component_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !cancelBtnLb )
    goto LABEL_63;
  v43 = UnityEngine_Component__get_transform(cancelBtnLb, 0LL);
  if ( !v43 )
    goto LABEL_63;
  v44 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v43, 0LL);
  if ( !v44 )
    goto LABEL_63;
  gameObject = UnityEngine_Component__get_gameObject(v44, 0LL);
  if ( !gameObject )
    goto LABEL_63;
  v46 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v46 )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled(v46, 0, 0LL);
  if ( progress == 3 )
  {
    v51 = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn;
    if ( !v51 )
      goto LABEL_63;
    v52 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v51,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !v52 )
      goto LABEL_63;
    UnityEngine_Collider__set_enabled(v52, 1, 0LL);
    v53 = this->fields.selectMaterialSvtBtn;
    if ( !v53 )
      goto LABEL_63;
    ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v53->klass->vtable._14_SetState.method)(
      v53,
      0LL,
      1LL,
      v53->klass->vtable._15_OnClick.methodPtr);
  }
  else if ( progress == 1 )
  {
    v47 = this->fields.charaGraphBase;
    if ( v47 )
    {
      v48 = UnityEngine_GameObject__get_transform(v47, 0LL);
      if ( v48 )
      {
        v49 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v48, 0LL);
        if ( v49 )
        {
          v50 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            v49,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
          if ( v50 )
          {
            UnityEngine_Collider__set_enabled(v50, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_63:
    sub_B170D4();
  }
}


void __fastcall ServantCombineControl__UnBlockTutorial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UICommonButton_o *Component_srcLineSprite; // x0
  UnityEngine_Component_o *selectMaterialSvtBtn; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *selectGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_IEnumerator_c **v23; // x11
  __int64 v24; // x0
  UnityEngine_Component_o *v25; // x0
  __int64 v26; // x9
  UnityEngine_Collider_o *v27; // x0
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x20
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  UnityEngine_GameObject_o *charaGraphBase; // x0
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_Collider_o *v37; // x0
  UnityEngine_Component_o *recommendedButton; // x0
  WebViewObject_o *v39; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  UnityEngine_Component_o *cancelBtnLb; // x0
  UnityEngine_Transform_o *v42; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *v45; // x0
  struct SetRarityDialogControl_o *v46; // x8
  UnityEngine_Component_o *v47; // x0
  UnityEngine_Transform_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  srcLineSprite_o *v51; // x0
  struct SetRarityDialogControl_o *v52; // x8
  UnityEngine_Component_o *v53; // x0
  UnityEngine_Transform_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  srcLineSprite_o *v57; // x0

  if ( (byte_40FCE52 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v9);
    byte_40FCE52 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_62;
  Component_srcLineSprite = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  helpBtn,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !Component_srcLineSprite )
    goto LABEL_62;
  UICommonButton__SetColliderEnable(Component_srcLineSprite, 1, 1, 0LL);
  selectMaterialSvtBtn = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn;
  if ( !selectMaterialSvtBtn )
    goto LABEL_62;
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        selectMaterialSvtBtn,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !Component_WebViewObject )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_62;
  transform = UnityEngine_Component__get_transform(selectGrid, 0LL);
  if ( !transform )
    goto LABEL_62;
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 2;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
    }
    else
    {
LABEL_21:
      v24 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v25 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                       Enumerator,
                                       *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_B170D4();
    v26 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (UnityEngine_Transform_c *)v25->klass->_2.typeHierarchy[v26 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v25);
      goto LABEL_62;
    }
    v27 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v25,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !v27 )
      sub_B170D4();
    UnityEngine_Collider__set_enabled(v27, 1, 0LL);
  }
  v28 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_33;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_33:
      v33 = sub_AAFEF8(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  charaGraphBase = this->fields.charaGraphBase;
  if ( !charaGraphBase )
    goto LABEL_62;
  v35 = UnityEngine_GameObject__get_transform(charaGraphBase, 0LL);
  if ( !v35 )
    goto LABEL_62;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v35, 0LL);
  if ( !parent )
    goto LABEL_62;
  v37 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    parent,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !v37 )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled(v37, 1, 0LL);
  recommendedButton = (UnityEngine_Component_o *)this->fields.recommendedButton;
  if ( !recommendedButton )
    goto LABEL_62;
  v39 = UnityEngine_Component__GetComponent_WebViewObject_(
          recommendedButton,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !v39 )
    goto LABEL_62;
  UICommonButton__SetColliderEnable((UICommonButton_o *)v39, 1, 1, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_62;
  cancelBtnLb = (UnityEngine_Component_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !cancelBtnLb )
    goto LABEL_62;
  v42 = UnityEngine_Component__get_transform(cancelBtnLb, 0LL);
  if ( !v42 )
    goto LABEL_62;
  v43 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v42, 0LL);
  if ( !v43 )
    goto LABEL_62;
  gameObject = UnityEngine_Component__get_gameObject(v43, 0LL);
  if ( !gameObject )
    goto LABEL_62;
  v45 = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !v45 )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled(v45, 1, 0LL);
  v46 = this->fields.exeCombineDlg;
  if ( !v46 )
    goto LABEL_62;
  v47 = (UnityEngine_Component_o *)v46->fields.cancelBtnLb;
  if ( !v47 )
    goto LABEL_62;
  v48 = UnityEngine_Component__get_transform(v47, 0LL);
  if ( !v48 )
    goto LABEL_62;
  v49 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v48, 0LL);
  if ( !v49 )
    goto LABEL_62;
  v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
  if ( !v50 )
    goto LABEL_62;
  v51 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v50,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !v51
    || (((void (__fastcall *)(srcLineSprite_o *, __int64, void *))v51->klass[1]._1.namespaze)(
          v51,
          1LL,
          v51->klass[1]._1.byval_arg.data),
        (v52 = this->fields.exeCombineDlg) == 0LL)
    || (v53 = (UnityEngine_Component_o *)v52->fields.cancelBtnLb) == 0LL
    || (v54 = UnityEngine_Component__get_transform(v53, 0LL)) == 0LL
    || (v55 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v54, 0LL)) == 0LL
    || (v56 = UnityEngine_Component__get_gameObject(v55, 0LL)) == 0LL
    || (v57 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v56,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_62:
    sub_B170D4();
  }
  ((void (__fastcall *)(srcLineSprite_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))v57->klass[1]._1.implementedInterfaces)(
    v57,
    0LL,
    1LL,
    v57->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantCombineControl__Update(ServantCombineControl_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *campaign; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
  bool v16; // w1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v17; // x8
  int size; // w8
  struct UISprite_o *v19; // x0
  const MethodInfo *v20; // x1
  EventMaster_o *v21; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v22; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v23; // x21
  EventCampaignEntity_o *v24; // x8
  WarEntity_o *v25; // x0
  int64_t v26; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v27; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *v28; // x0
  const MethodInfo *v29; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v30; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v31; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v32; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v33; // x20
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  AlphaTransitionCalculator_o *v35; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v38; // s8
  MenuListControl_c *v39; // x0
  AlphaTransitionCalculator_o *v40; // x0
  AlphaTransitionCalculator_o *v41; // x0
  AlphaTransitionCalculator_o *v42; // x0
  const MethodInfo *v43; // x1
  EventMaster_o *EventMaster; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v45; // x21
  __int64 campaiginPerSelectSvtListIndex; // x22
  System_Collections_Generic_List_EventCampaignEntity__o *v47; // x21
  EventCampaignEntity_o *v48; // x8
  WarEntity_o *Entity; // x0
  int64_t v50; // x20
  const MethodInfo *v51; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v52; // x20
  __int64 v53; // x21
  System_Collections_Generic_List_XWeaponTrail_Element__o *v54; // x0
  const MethodInfo *v55; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v56; // x20
  __int64 v57; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v58; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v59; // x20
  __int64 v60; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v61; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v62; // x20
  int32_t v63; // w21
  int32_t v64; // w8
  System_Collections_Generic_List_EventCampaignEntity__o *v65; // x20
  struct AlphaTransitionCalculator_o *v66; // x8
  struct UISprite_o *v67; // x0

  if ( (byte_40FCE37 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v8);
    sub_B16FFC(&MenuListControl_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_TransitionCalculator_float__Update__, v11);
    sub_B16FFC(&Method_TransitionCalculator_float__get_Current__, v12);
    byte_40FCE37 = 1;
  }
  if ( this->fields.isSelectBase )
  {
    campaign = (UnityEngine_Component_o *)this->fields.campaign;
    if ( !campaign )
      goto LABEL_98;
    gameObject = UnityEngine_Component__get_gameObject(campaign, 0LL);
    campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
    if ( campaiginListPerSelectSvt )
    {
      v16 = campaiginListPerSelectSvt->fields._size > 0;
      if ( !gameObject )
        goto LABEL_98;
    }
    else
    {
      v16 = 0;
      if ( !gameObject )
        goto LABEL_98;
    }
    UnityEngine_GameObject__SetActive(gameObject, v16, 0LL);
    v17 = this->fields.campaiginListPerSelectSvt;
    if ( v17 )
    {
      size = v17->fields._size;
      if ( size >= 1 )
      {
        if ( size != 1 )
        {
          campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
          if ( !campaignAlphaCalculator )
            return;
          TransitionCalculator_float___Update(
            campaignAlphaCalculator,
            (const MethodInfo_2532FA0 *)Method_TransitionCalculator_float__Update__);
          v35 = this->fields.campaignAlphaCalculator;
          if ( !v35 )
            goto LABEL_98;
          if ( AlphaTransitionCalculator__IsFadeInFinished(v35, 0LL) )
          {
            realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
            v38 = realtimeSinceStartup;
            v39 = MenuListControl_TypeInfo;
            if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MenuListControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
              v39 = MenuListControl_TypeInfo;
            }
            if ( (float)(v38 - campaignAlphaAnimTimeOld) >= v39->static_fields->ALPHA_ANIMATION_INTERVAL )
            {
              v40 = this->fields.campaignAlphaCalculator;
              if ( !v40 )
                goto LABEL_98;
              AlphaTransitionCalculator__StartFadeOut(v40, 0LL);
            }
          }
          v41 = this->fields.campaignAlphaCalculator;
          if ( v41 )
          {
            if ( AlphaTransitionCalculator__IsFadeOutFinished(v41, 0LL) )
            {
              v42 = this->fields.campaignAlphaCalculator;
              if ( !v42 )
                goto LABEL_98;
              AlphaTransitionCalculator__StartFadeIn(v42, 0LL);
              this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              EventMaster = ServantCombineControl__get_EventMaster(this, v43);
              v45 = this->fields.campaiginListPerSelectSvt;
              if ( !v45 )
                goto LABEL_98;
              campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
              if ( v45->fields._size <= (unsigned int)campaiginPerSelectSvtListIndex )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v47 = v45->fields._items->m_Items[campaiginPerSelectSvtListIndex];
              if ( !v47 )
                goto LABEL_98;
              if ( !v47->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v48 = v47->fields._items->m_Items[0];
              if ( !v48 )
                goto LABEL_98;
              if ( !EventMaster )
                goto LABEL_98;
              Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)EventMaster,
                         v48->fields.eventId,
                         (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !Entity )
                goto LABEL_98;
              v50 = *(_QWORD *)&Entity->fields.eventId;
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              if ( v50 < NetworkManager__getTime(0LL) )
              {
                v52 = this->fields.campaiginListPerSelectSvt;
                if ( !v52 )
                  goto LABEL_98;
                v53 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v52->fields._size <= (unsigned int)v53 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v54 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v52->fields._items->m_Items[v53];
                if ( !v54 )
                  goto LABEL_98;
                System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                  v54,
                  0,
                  (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                v56 = this->fields.campaiginListPerSelectSvt;
                if ( !v56 )
                  goto LABEL_98;
                v57 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v56->fields._size <= (unsigned int)v57 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v58 = v56->fields._items->m_Items[v57];
                if ( !v58 )
                  goto LABEL_98;
                v59 = this->fields.campaiginListPerSelectSvt;
                if ( !v59 )
                  goto LABEL_98;
                v60 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v58->fields._size <= 0 )
                {
                  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                    v60,
                    (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                }
                else
                {
                  if ( v59->fields._size <= (unsigned int)v60 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  v61 = v59->fields._items->m_Items[v60];
                  if ( !v61 )
                    goto LABEL_98;
                  if ( !v61->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  ServantCombineControl__SetupCampaign(this, v61->fields._items->m_Items[0], v55);
                }
              }
              v62 = this->fields.campaiginListPerSelectSvt;
              v63 = this->fields.campaiginPerSelectSvtListIndex + 1;
              this->fields.campaiginPerSelectSvtListIndex = v63;
              if ( !v62 )
                goto LABEL_98;
              v64 = v62->fields._size;
              if ( v64 <= v63 )
              {
                this->fields.campaiginPerSelectSvtListIndex = 0;
                v64 = v62->fields._size;
                v63 = 0;
              }
              if ( v64 <= (unsigned int)v63 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v65 = v62->fields._items->m_Items[v63];
              if ( !v65 )
                goto LABEL_98;
              if ( !v65->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              ServantCombineControl__SetupCampaign(this, v65->fields._items->m_Items[0], v51);
            }
            v66 = this->fields.campaignAlphaCalculator;
            if ( v66 )
            {
              v67 = this->fields.campaign;
              this->fields.campaignAlphaAnimNow = v66->fields._Current_k__BackingField;
              if ( v67 )
              {
                ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v67->klass->vtable._8_set_alpha.method)(
                  v67,
                  v67->klass->vtable._9_CalculateFinalAlpha.methodPtr);
                return;
              }
            }
          }
LABEL_98:
          sub_B170D4();
        }
        v19 = this->fields.campaign;
        if ( !v19 )
          goto LABEL_98;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v19->klass->vtable._8_set_alpha.method)(
          v19,
          v19->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0);
        v21 = ServantCombineControl__get_EventMaster(this, v20);
        v22 = this->fields.campaiginListPerSelectSvt;
        if ( !v22 )
          goto LABEL_98;
        if ( !v22->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v23 = v22->fields._items->m_Items[0];
        if ( !v23 )
          goto LABEL_98;
        if ( !v23->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v24 = v23->fields._items->m_Items[0];
        if ( !v24 )
          goto LABEL_98;
        if ( !v21 )
          goto LABEL_98;
        v25 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)v21,
                v24->fields.eventId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v25 )
          goto LABEL_98;
        v26 = *(_QWORD *)&v25->fields.eventId;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        if ( v26 < NetworkManager__getTime(0LL) )
        {
          v27 = this->fields.campaiginListPerSelectSvt;
          if ( v27 )
          {
            if ( !v27->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v28 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v27->fields._items->m_Items[0];
            if ( v28 )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                v28,
                0,
                (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
              v30 = this->fields.campaiginListPerSelectSvt;
              if ( v30 )
              {
                if ( !v30->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                v31 = v30->fields._items->m_Items[0];
                if ( v31 )
                {
                  v32 = this->fields.campaiginListPerSelectSvt;
                  if ( v32 )
                  {
                    if ( v31->fields._size <= 0 )
                    {
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                        0,
                        (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                      return;
                    }
                    if ( !v32->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    v33 = v32->fields._items->m_Items[0];
                    if ( v33 )
                    {
                      if ( !v33->fields._size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                      ServantCombineControl__SetupCampaign(this, v33->fields._items->m_Items[0], v29);
                      return;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_98;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl___OnClickRecommendedButton_b__106_0(
        ServantCombineControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0

  if ( isDecide )
  {
    ServantCombineControl__SetRecommendedMaterial(this, (const MethodInfo *)isDecide);
  }
  else
  {
    recommendedConfigDialog = this->fields.recommendedConfigDialog;
    if ( !recommendedConfigDialog )
      sub_B170D4();
    RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
  }
}


int32_t __fastcall ServantCombineControl___SetBaseSvtCardImg_b__88_1(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  int32_t value; // w8
  int32_t v8; // w9
  int32_t result; // w0
  EventMaster_o *EventMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x22
  EventMaster_o *v14; // x0
  WarEntity_o *v15; // x0

  if ( (byte_40FCE55 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, a);
    byte_40FCE55 = 1;
  }
  if ( !b || !a )
    goto LABEL_14;
  value = b->fields.value;
  v8 = a->fields.value;
  result = value - v8;
  if ( value != v8 )
    return result;
  EventMaster = ServantCombineControl__get_EventMaster(this, (const MethodInfo *)a);
  if ( !EventMaster
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)EventMaster,
                   a->fields.eventId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || (v13 = *(_QWORD *)&Entity->fields.eventId, (v14 = ServantCombineControl__get_EventMaster(this, v12)) == 0LL)
    || (v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)v14,
                b->fields.eventId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  if ( v13 < *(_QWORD *)&v15->fields.eventId )
    return 1;
  else
    return -1;
}


EventMaster_o *__fastcall ServantCombineControl__get_EventMaster(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_eventMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FCE36 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCE36 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    p_eventMaster = (BattleServantConfConponent_o *)&this->fields.eventMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B16F98(p_eventMaster, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    return (EventMaster_o *)p_eventMaster->klass;
  }
  return result;
}


int32_t __fastcall ServantCombineControl__get_getExpVal(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._getExpVal_k__BackingField;
}


bool __fastcall ServantCombineControl__get_isExchangeSvtInList(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._isExchangeSvtInList_k__BackingField;
}


System_Int64_array *__fastcall ServantCombineControl__get_selectMaterialUsrSvtIdList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields._selectMaterialUsrSvtIdList_k__BackingField;
}


int32_t __fastcall ServantCombineControl__get_spendQpVal(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._spendQpVal_k__BackingField;
}


void __fastcall ServantCombineControl__set_getExpVal(
        ServantCombineControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._getExpVal_k__BackingField = value;
}


void __fastcall ServantCombineControl__set_isExchangeSvtInList(
        ServantCombineControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isExchangeSvtInList_k__BackingField = value;
}


void __fastcall ServantCombineControl__set_selectMaterialUsrSvtIdList(
        ServantCombineControl_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._selectMaterialUsrSvtIdList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantCombineControl__set_spendQpVal(
        ServantCombineControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._spendQpVal_k__BackingField = value;
}


void __fastcall ServantCombineControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7612 & 1) == 0 )
  {
    sub_B16FFC(&ServantCombineControl___c_TypeInfo, v1);
    byte_40F7612 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantCombineControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantCombineControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantCombineControl___c___ctor(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCombineControl___c___InitSvtCombine_b__81_0(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  CombineRootComponent_o *basePanel; // x0
  __int64 v5; // x9
  ServantCombineControl___c_o *v6; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_40F7613 & 1) == 0 )
  {
    sub_B16FFC(&CombineRootComponent_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_40F7613 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (basePanel = (CombineRootComponent_o *)Instance->fields.basePanel) == 0LL )
    sub_B170D4();
  v5 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v5
    && (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v5 - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(basePanel, 0LL);
  }
  else
  {
    v6 = (ServantCombineControl___c_o *)sub_B173C8(basePanel);
    ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(v6, v7, v8, v9);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__113_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  int32_t SvtClassId; // w0

  if ( !a || (SvtClassId = UserServantEntity__getSvtClassId(a, 0LL), !b) )
    sub_B170D4();
  return SvtClassId - UserServantEntity__getSvtClassId(b, 0LL);
}


int32_t __fastcall ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *a,
        System_Collections_Generic_List_EventCampaignEntity__o *b,
        const MethodInfo *method)
{
  EventCampaignEntity_o *v6; // x8
  int32_t target; // w20
  EventCampaignEntity_o *v8; // x8

  if ( (byte_40F7614 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, a);
    byte_40F7614 = 1;
  }
  if ( !a )
    goto LABEL_12;
  if ( !a->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v6 = a->fields._items->m_Items[0];
  if ( !v6 || !b )
    goto LABEL_12;
  target = v6->fields.target;
  if ( !b->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v8 = b->fields._items->m_Items[0];
  if ( !v8 )
LABEL_12:
    sub_B170D4();
  return target - v8->fields.target;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__107_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7615 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7615 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___ctor(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__0(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct ServantCombineControl_o *_4__this; // x8
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  ServantCombineControl_o *v8; // x0

  if ( (byte_40F7616 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7616 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      recommendedConfigDialog = _4__this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
        v8 = this->fields.__4__this;
        if ( v8 )
        {
          ServantCombineControl__SetMaterialToCombineData(v8, this->fields.recommendedCombineData, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B170D4();
  }
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct ServantCombineControl_o *_4__this; // x8
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0

  if ( (byte_40F7617 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7617 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (recommendedConfigDialog = _4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_B170D4();
  }
  RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
}