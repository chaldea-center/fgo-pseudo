void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4215EDE & 1) == 0 )
  {
    sub_B0D8A4(&ServantCombineControl_TypeInfo, v1);
    byte_4215EDE = 1;
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
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v19; // x20
  UILabel_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4215ECA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_3301/*"CONDUCTION_LIMITUP"*/, v7);
    sub_B0D8A4(&StringLiteral_3304/*"CONDUCTION_LVEXCEED_MSG"*/, v8);
    sub_B0D8A4(&StringLiteral_3303/*"CONDUCTION_LVEXCEED"*/, v9);
    sub_B0D8A4(&StringLiteral_3302/*"CONDUCTION_LIMITUP_MSG"*/, v10);
    byte_4215ECA = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_41;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_41;
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)conductionWireInfo;
    v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v21.fields.currentCryptoKey = v16;
    *(_QWORD *)&v21.fields.fakeValue = v15;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                       v21,
                                                       0LL);
    if ( !v14 )
      goto LABEL_41;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      v14,
      (int32_t)conductionWireInfo,
      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_41;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
    {
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
      if ( !conductionWireInfo )
        goto LABEL_41;
      if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)conductionWireInfo, 0LL) )
      {
        conductionWireInfo = this->fields.resAdjustInfo;
        if ( !conductionWireInfo )
          goto LABEL_41;
        UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
        if ( !conductionWireInfo )
          goto LABEL_41;
        CombineInfoComponent__setCurrentStatusInfo(
          (CombineInfoComponent_o *)conductionWireInfo,
          this->fields.baseData,
          0LL);
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
        if ( !conductionWireInfo )
          goto LABEL_41;
        if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
          if ( !conductionWireInfo )
            goto LABEL_41;
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
          {
            conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
            if ( !conductionWireInfo )
              goto LABEL_41;
            if ( !UserServantEntity__isExceedLvMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
            {
              conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
              if ( !conductionWireInfo )
                goto LABEL_41;
              if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)conductionWireInfo, 0LL) )
              {
                conductionWireLabel = this->fields.conductionWireLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3304/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3303/*"CONDUCTION_LVEXCEED"*/,
                                                                     0LL);
                  if ( conductionWireButtonLabel )
                  {
                    UILabel__set_text(conductionWireButtonLabel, (System_String_o *)conductionWireInfo, 0LL);
                    conductionWireInfo = this->fields.conductionWireInfo;
                    if ( conductionWireInfo )
                    {
                      UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
                      this->fields.conductionType = 2;
                      return;
                    }
                  }
                }
LABEL_41:
                sub_B0D97C(conductionWireInfo);
              }
            }
          }
        }
        else
        {
          v19 = this->fields.conductionWireLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3302/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v19 )
            goto LABEL_41;
          UILabel__set_text(v19, (System_String_o *)conductionWireInfo, 0LL);
          v20 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3301/*"CONDUCTION_LIMITUP"*/,
                                                             0LL);
          if ( !v20 )
            goto LABEL_41;
          UILabel__set_text(v20, (System_String_o *)conductionWireInfo, 0LL);
          conductionWireInfo = this->fields.conductionWireInfo;
          if ( !conductionWireInfo )
            goto LABEL_41;
          UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
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
    sub_B0D97C(this);
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
  void *baseData; // x0
  int32_t LevelMax; // w0
  int32_t v8; // w8
  int32_t totalExp; // w9
  int32_t v10; // w8
  bool result; // w0

  if ( (byte_4215ECD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215ECD = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseData, 0LL);
  if ( LevelMax <= lv )
  {
    this->fields.increLv = LevelMax;
    return 1;
  }
  baseData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B0D97C(baseData);
  }
  v8 = *((_DWORD *)baseData + 6);
  totalExp = this->fields.totalExp;
  if ( v8 <= totalExp )
  {
    if ( v8 != totalExp )
    {
      result = 0;
      ++this->fields.checkLv;
      return result;
    }
    v10 = *((_DWORD *)baseData + 5) + 1;
  }
  else
  {
    v10 = *((_DWORD *)baseData + 5);
  }
  this->fields.increLv = v10;
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

  if ( (byte_4215EC7 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4215EC7 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v17, 0LL) )
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
  sub_B0D840(
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
    sub_B0D97C(this);
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
  int32_t Rarity; // w0
  int32_t result; // w0
  int32_t v8; // w0
  int32_t SvtClassId; // [xsp+Ch] [xbp-14h] BYREF

  SvtClassId = 0;
  if ( !e1 || (this = (ServantCombineControl_o *)UserServantEntity__getRarity(e1, 0LL), SvtClassId = (int)this, !e2) )
    sub_B0D97C(this);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_38472796((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0LL);
    return System_Int32__CompareTo_38472796((int32_t)&SvtClassId, v8, 0LL);
  }
  return result;
}


void __fastcall ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *selectGrid; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  __int64 v27; // x20
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_4215ED2 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v5);
    byte_4215ED2 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_B0D97C(selectGrid);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_36;
    v17 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v17 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v16 = (UnityEngine_Component_o *)sub_B0DC70(v16);
LABEL_36:
      sub_B0D97C(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  v19 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v26 = *(_QWORD *)v19;
    v27 = v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_31;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_31:
      v30 = sub_AA67A0(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
  DataManager_o *Instance; // x0
  UserServantEntity_array *CombineMaterialList; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  int32_t SvtClassId; // w22
  _BOOL4 IsExtraClass; // w22
  RecommendedConfigSaveData_o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v30; // x24
  struct System_Collections_Generic_List_int__o *selectRarityList; // x27
  signed __int64 size; // x19
  unsigned __int64 v33; // x25
  __int64 v34; // x8
  const MethodInfo_2FB332C **v35; // x26
  unsigned __int64 v36; // x27
  signed __int64 v37; // x28
  UserServantEntity_o **m_Items; // x19
  UserServantEntity_o *v39; // x25
  RecommendedConfigSaveData_o *v40; // x24
  UserServantEntity_o **v41; // x23
  signed __int64 v42; // x19
  UserServantEntity_array *v43; // x28
  _BOOL4 v44; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x22
  const MethodInfo_2FB332C **v46; // x20
  int v47; // w26
  bool v48; // zf
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  ServantCombineControl_o *v52; // x0
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v56; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v57; // [xsp+0h] [xbp-60h]
  ServantCombineControl_o *v58; // [xsp+8h] [xbp-58h]

  if ( (byte_4215ED8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_UserServantEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_UserServantEntity__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v15);
    sub_B0D8A4(&RecommendedConfigSaveData_TypeInfo, v16);
    sub_B0D8A4(&Method_ServantCombineControl_ClassRaritySort__, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v19);
    byte_4215ED8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (DataManager_o *)this->fields.baseData;
  if ( !Instance )
    goto LABEL_55;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
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
  Instance = (DataManager_o *)RecommendedConfigSaveData__LoadConfigSaveData(0LL);
  if ( !Instance )
    goto LABEL_55;
  v27 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v30 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_Rarity_TYPE__TypeInfo,
                                                                   v28,
                                                                   v29);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v30,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  selectRarityList = v27->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_55;
  size = selectRarityList->fields._size;
  if ( (int)size >= 1 )
  {
    v33 = 0LL;
    do
    {
      if ( v33 >= (unsigned int)selectRarityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v30 )
        break;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v30,
        selectRarityList->fields._items->m_Items[++v33],
        (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
      if ( (__int64)v33 >= size )
        goto LABEL_23;
      selectRarityList = v27->fields.selectRarityList;
    }
    while ( selectRarityList );
LABEL_55:
    sub_B0D97C(Instance);
  }
LABEL_23:
  v58 = this;
  if ( !CombineMaterialList )
    goto LABEL_55;
  v34 = *(_QWORD *)&CombineMaterialList->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = (const MethodInfo_2FB332C **)&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__;
    v36 = 0LL;
    v37 = (int)v34;
    m_Items = CombineMaterialList->m_Items;
    v57 = v30;
    while ( 1 )
    {
      v39 = m_Items[v36];
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsAll(v27, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v39 )
          goto LABEL_55;
        Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v39, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_44;
      }
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsTargetOnly(v27, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v39 )
        goto LABEL_55;
      v40 = v27;
      v41 = m_Items;
      v42 = v37;
      v43 = CombineMaterialList;
      v44 = IsExtraClass;
      v45 = v24;
      v46 = v35;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v39, 0LL);
      if ( !v58->fields.baseData )
        goto LABEL_55;
      v47 = (int)Instance;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v58->fields.baseData, 0LL);
      v48 = v47 == (_DWORD)Instance;
      v35 = v46;
      v24 = v45;
      IsExtraClass = v44;
      CombineMaterialList = v43;
      v37 = v42;
      m_Items = v41;
      v27 = v40;
      v30 = v57;
      if ( v48 )
        goto LABEL_40;
LABEL_44:
      if ( (__int64)++v36 >= v37 )
        goto LABEL_47;
      if ( v36 >= CombineMaterialList->max_length )
      {
        v49 = sub_B0D9A8(Instance);
        sub_B0D948(v49, 0LL);
      }
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_55;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v39, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_44;
    }
    else
    {
LABEL_39:
      if ( !v39 )
        goto LABEL_55;
    }
LABEL_40:
    Instance = (DataManager_o *)UserServantEntity__getRarity(v39, 0LL);
    if ( !v30 )
      goto LABEL_55;
    Instance = (DataManager_o *)System_Collections_Generic_List_VoiceCondType_Type___Contains(
                                  v30,
                                  (int32_t)Instance,
                                  *v35);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_55;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
    goto LABEL_44;
  }
LABEL_47:
  if ( !v24 )
    goto LABEL_55;
  if ( !v24->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v27, 0LL) )
  {
    Instance = (DataManager_o *)v58->fields.baseData;
    if ( !Instance )
      goto LABEL_55;
    v52 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantCombineControl__MixMaterialSort(
                                                                                                    v52,
                                                                                                    (int32_t)v52,
                                                                                                    (System_Collections_Generic_List_Rarity_TYPE__o *)v30,
                                                                                                    (System_Collections_Generic_List_UserServantEntity__o *)v24,
                                                                                                    v53);
  }
  else
  {
    v56 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_UserServantEntity__TypeInfo,
                                                                      v50,
                                                                      v51);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v56,
      (Il2CppObject *)v58,
      Method_ServantCombineControl_ClassRaritySort__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
      (System_Comparison_T__o *)v56,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_27037860(
           v58,
           (System_Collections_Generic_List_UserServantEntity__o *)v24,
           v54);
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
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UILabel_o *qpLb; // x20
  UIWidget_o *v9; // x20
  int v10; // s0
  UILabel_o *expLb; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4215EC5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4215EC5 = 1;
  }
  v17 = 0;
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.increLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_22;
  currentLvObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentLvObj, 0LL);
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.resAdjustInfo;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  currentLvObj = this->fields.conductionWireInfo;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0LL);
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 0, v5);
  ServantCombineControl__ResetCampaign(this, v6);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustHpIconLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UIIconLabel__Clear((UIIconLabel_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UIIconLabel__Clear((UIIconLabel_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantCombineControl__SetHaveQpInfo(this, v7);
  this->fields._spendQpVal_k__BackingField = 0;
  qpLb = this->fields.qpLb;
  v17 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_38473032(
                                               (int32_t)&v17,
                                               (System_String_o *)StringLiteral_9289/*"N0"*/,
                                               0LL);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0LL);
  v9 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
  if ( !v9 )
    goto LABEL_22;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v10, 0LL);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v17 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v17, 0LL);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0LL),
        ServantCombineControl__DestroyGrid(this, v15),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v16),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0LL) )
  {
LABEL_22:
    sub_B0D97C(currentLvObj);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0LL);
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

  if ( (byte_4215EC3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215EC3 = 1;
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
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_charaGraph, 0LL, v6, v7, v8, v9, v10, v11);
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
  System_String_o *selectMaterialSvtBtn; // x0
  __int64 v19; // x2
  CombineRootComponent_c *v20; // x1
  __int64 v21; // x9
  ServantCombineControl___c_c *v22; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v25; // x21
  struct ServantCombineControl___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v43; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  _BOOL8 v46; // x0
  unsigned int klass_high; // w9
  MenuListControl_o *v48; // x0
  void *v49; // x0
  int v50; // w1
  __int64 v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4215EC2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v12);
    sub_B0D8A4(&ServantCombineControl___c_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, v14);
    sub_B0D8A4(&StringLiteral_6879/*"GET_EXP_INFO"*/, v15);
    sub_B0D8A4(&StringLiteral_9295/*"NEED_QP_INFO"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4215EC2 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(102, 0LL) )
  {
LABEL_21:
    needQpLb = this->fields.needQpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9295/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6879/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        ServantCombineControl__InitMaterialSvtInfo(this, v41);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
          if ( preSelectBaseLb )
          {
            UILabel__set_text(preSelectBaseLb, selectMaterialSvtBtn, 0LL);
            selectMaterialSvtBtn = (System_String_o *)this->fields.preSelectBaseLb;
            if ( selectMaterialSvtBtn )
            {
              selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                          0LL);
              if ( selectMaterialSvtBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 1, 0LL);
                selectMaterialSvtBtn = (System_String_o *)this->fields.baseSelectInfoLb;
                if ( selectMaterialSvtBtn )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 1, 0LL);
                  this->fields._IsExeCombine_k__BackingField = 0;
                  ServantCombineControl__SetExeBtnState(this, v43);
                  selectMaterialSvtBtn = (System_String_o *)this->fields.eventNoticeImg;
                  this->fields._targetType_k__BackingField = 0;
                  this->fields.conductionType = 0;
                  if ( selectMaterialSvtBtn )
                  {
                    selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                                0LL);
                    if ( selectMaterialSvtBtn )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0LL);
                      menuListCtr = this->fields.menuListCtr;
                      if ( menuListCtr )
                      {
                        combineEventList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)menuListCtr->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                            &v52,
                            combineEventList,
                            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v53 = v52;
                          while ( 1 )
                          {
                            v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v53,
                                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v46 )
                              break;
                            if ( !v53.fields.current )
                              sub_B0D97C(v46);
                            klass_high = HIDWORD(v53.fields.current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v48 = this->fields.menuListCtr;
                              if ( !v48 )
                                sub_B0D97C(0LL);
                              MenuListControl__setBannerIcon(
                                v48,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v53.fields.current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            &v53,
                            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_B0D97C(selectMaterialSvtBtn);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].klass;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  v20 = CombineRootComponent_TypeInfo;
  v21 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&selectMaterialSvtBtn->klass->_2.bitflags2 + 1) >= (unsigned int)v21
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[v21 - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[25].monitor) == 1 )
    {
      v22 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v22 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v22->static_fields;
      _9__81_0 = static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v19);
        System_Action___ctor(_9__81_0, v25, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        v26 = ServantCombineControl___c_TypeInfo->static_fields;
        v26->__9__81_0 = _9__81_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v26->__9__81_0,
          (System_Int32_array **)_9__81_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_21;
  }
  v49 = (void *)sub_B0DC70(selectMaterialSvtBtn);
  if ( v50 != 1 )
    _Unwind_Resume(v49);
  v51 = *(_QWORD *)__cxa_begin_catch(v49);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v51 )
    sub_B0D948(v51, 0LL);
LABEL_44:
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.resAdjustInfo;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0LL);
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
  void *Instance; // x0
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w22
  int32_t LevelMax; // w0
  int v18; // w21
  int v19; // w8
  int32_t v20; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4215ED9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&totalExp);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4215ED9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_23;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
  if ( !v13
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v13,
          (int32_t)Instance,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_23:
    sub_B0D97C(Instance);
  }
  v16 = *((_DWORD *)Instance + 64);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  v18 = LevelMax;
  if ( v16 == LevelMax )
  {
    v19 = 0;
  }
  else if ( v16 >= LevelMax )
  {
LABEL_19:
    v19 = v18;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_23;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v16, 0LL);
      if ( !Instance )
        goto LABEL_23;
      v20 = *((_DWORD *)Instance + 6);
      if ( v20 > totalExp )
      {
        v19 = *((_DWORD *)Instance + 5);
        return v19 >= v18;
      }
      if ( v20 == totalExp )
        break;
      if ( ++v16 >= v18 )
        goto LABEL_19;
    }
    v19 = *((_DWORD *)Instance + 5) + 1;
  }
  return v19 >= v18;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  __int64 SvtClassId; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t size; // w28
  __int64 v33; // x26
  unsigned int v34; // w8
  Il2CppClass **v35; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x25
  const MethodInfo_2FC56E8 *v37; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x0
  ServantCombineControl___c_c *v39; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__113_0; // x23
  Il2CppObject *v42; // x24
  struct ServantCombineControl___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x23
  int32_t v51; // w8
  unsigned __int64 v52; // x25
  int v53; // w8
  System_Collections_Generic_List_Rarity_TYPE__o *v54; // x26
  int32_t v55; // w28
  unsigned int v56; // w19
  __int64 v57; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v58; // x24
  int v59; // w8
  unsigned int v60; // w19
  __int64 v61; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v62; // x24
  int v63; // w8
  __int64 v64; // x19
  __int64 v65; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x24
  signed __int64 v68; // [xsp+8h] [xbp-58h]

  if ( (byte_4215EDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_UserServantEntity___ctor__, *(_QWORD *)&baseServantClass);
    sub_B0D8A4(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v17);
    sub_B0D8A4(&Method_ServantCombineControl___c__MixMaterialSort_b__113_0__, v18);
    sub_B0D8A4(&ServantCombineControl___c_TypeInfo, v19);
    byte_4215EDB = 1;
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !materialList )
    goto LABEL_70;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v33 = 0LL;
    v34 = materialList->fields._size;
    while ( 1 )
    {
      if ( v34 <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v35 = &materialList->fields._items->obj.klass + v33;
      v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35[4];
      if ( !v36 )
        goto LABEL_70;
      SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v35[4], 0LL);
      if ( (_DWORD)SvtClassId == baseServantClass )
      {
        if ( !v22 )
          goto LABEL_70;
        v37 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v38 = v22;
      }
      else if ( (_DWORD)SvtClassId == 1001 )
      {
        if ( !v25 )
          goto LABEL_70;
        v37 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v38 = v25;
      }
      else
      {
        if ( !v28 )
          goto LABEL_70;
        v37 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v38 = v28;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v38, v36, v37);
      if ( (int)v33 + 1 >= size )
        break;
      v34 = materialList->fields._size;
      ++v33;
    }
  }
  if ( !v28 )
    goto LABEL_70;
  if ( v28->fields._size >= 1 )
  {
    v39 = ServantCombineControl___c_TypeInfo;
    if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v39 = ServantCombineControl___c_TypeInfo;
    }
    static_fields = v39->static_fields;
    _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__113_0;
    if ( !_9__113_0 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)static_fields->__9;
      _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                              System_Comparison_UserServantEntity__TypeInfo,
                                                                              v30,
                                                                              v31);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__113_0,
        v42,
        Method_ServantCombineControl___c__MixMaterialSort_b__113_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_UserServantEntity___ctor__);
      v43 = ServantCombineControl___c_TypeInfo->static_fields;
      v43->__9__113_0 = (struct System_Comparison_UserServantEntity__o *)_9__113_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v43->__9__113_0,
        (System_Int32_array **)_9__113_0,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v28,
      (System_Comparison_T__o *)_9__113_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !checkRarityTypeList )
    goto LABEL_70;
  v51 = checkRarityTypeList->fields._size;
  if ( v51 >= 1 )
  {
    v68 = v51;
    v52 = 0LL;
    while ( 1 )
    {
      if ( v52 >= (unsigned int)v51 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v22 )
        goto LABEL_70;
      v53 = v22->fields._size;
      v54 = checkRarityTypeList;
      v55 = checkRarityTypeList->fields._items->m_Items[v52 + 1];
      if ( v53 >= 1 )
        break;
LABEL_49:
      if ( !v25 )
        goto LABEL_70;
      v59 = v25->fields._size;
      if ( v59 >= 1 )
      {
        v60 = 0;
        do
        {
          if ( v59 <= v60 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v61 = (__int64)v25->fields._items + 8 * (int)v60;
          v62 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v61 + 32);
          if ( !v62 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v61 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v55 )
          {
            if ( !v50 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v50,
              v62,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v59 = v25->fields._size;
        }
        while ( (int)++v60 < v59 );
      }
      v63 = v28->fields._size;
      if ( v63 >= 1 )
      {
        v64 = 0LL;
        do
        {
          if ( v63 <= (unsigned int)v64 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v65 = (__int64)v28->fields._items + 8 * v64;
          v66 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v65 + 32);
          if ( !v66 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v65 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v55 )
          {
            if ( !v50 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v50,
              v66,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v63 = v28->fields._size;
        }
        while ( (int)++v64 < v63 );
      }
      if ( (__int64)++v52 >= v68 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v50;
      v51 = v54->fields._size;
      checkRarityTypeList = v54;
    }
    v56 = 0;
    while ( 1 )
    {
      if ( v53 <= v56 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v57 = (__int64)v22->fields._items + 8 * (int)v56;
      v58 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v57 + 32);
      if ( !v58 )
        break;
      SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v57 + 32), 0LL);
      if ( (_DWORD)SvtClassId == v55 )
      {
        if ( !v50 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v50,
          v58,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      }
      v53 = v22->fields._size;
      if ( (int)++v56 >= v53 )
        goto LABEL_49;
    }
LABEL_70:
    sub_B0D97C(SvtClassId);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v50;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4215ED1 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215ED1 = 1;
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
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__ConductionWireLimitUp(combineRootComponent, 0LL);
      return;
    }
LABEL_13:
    sub_B0D97C(combineRootComponent);
  }
}


void __fastcall ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *SelfUserGame; // x0
  int32_t klass; // w20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v10; // x21
  unsigned __int64 v11; // x23
  unsigned __int64 max_length; // x9
  int64_t v13; // x22
  bool v14; // w5
  __int64 v15; // x0

  if ( (byte_4215ED0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_4215ED0 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_16;
  klass = (int32_t)SelfUserGame[4].klass;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  v10 = SelfUserGame;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v11 >= (int)max_length )
    {
      v14 = 0;
      goto LABEL_19;
    }
    if ( v11 >= max_length )
    {
      v15 = sub_B0D9A8(SelfUserGame);
      sub_B0D948(v15, 0LL);
    }
    v13 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v11];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)SelfUserGame,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                        v13,
                                        (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v11;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v14 = 1;
LABEL_19:
  SelfUserGame = (System_String_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B0D97C(SelfUserGame);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v10,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v14,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL);
}


void __fastcall ServantCombineControl__OnClickMaterialSelectList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4215ED5 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215ED5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
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
  RecommenededConfigDialog_ClickDelegate_o *v11; // x21

  if ( (byte_4215ED6 & 1) == 0 )
  {
    sub_B0D8A4(&RecommenededConfigDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v5);
    byte_4215ED6 = 1;
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
  v11 = (RecommenededConfigDialog_ClickDelegate_o *)sub_B0D974(RecommenededConfigDialog_ClickDelegate_TypeInfo, v9, v10);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__,
    0LL);
  if ( !recommendedConfigDialog )
LABEL_12:
    sub_B0D97C(baseData);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v11, 0LL);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_4215EC4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4215EC4 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_B0D97C(campaign);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaiginListPerSelectSvt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt, 0LL, v4, v5, v6, v7, v8, v9);
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
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w19
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v50; // w24
  int32_t adjustAtk; // w19
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  int32_t v53; // w24
  const MethodInfo *v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x24
  _BOOL8 v58; // x0
  const MethodInfo *v59; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  unsigned int klass_high; // w8
  EventMaster_o *EventMaster; // x0
  WarEntity_o *Entity; // x0
  int64_t v64; // x19
  int64_t Time; // x0
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  const char *namespaze; // x8
  int32_t missionConditionDetailId; // w9
  int32_t SvtClassId; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x0
  __int64 v71; // x27
  int v72; // w19
  __int64 v73; // x25
  __int64 v74; // x26
  __int64 v75; // x1
  __int64 v76; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **p_campaiginListPerSelectSvt; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  _BOOL8 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  EventCampaignEntity_o *v88; // x22
  _BOOL8 v89; // x0
  Il2CppObject *v90; // x23
  Il2CppClass *v91; // x8
  _DWORD *data; // x10
  int32_t target; // w9
  _DWORD *v94; // x9
  _DWORD *v95; // x9
  _DWORD *v96; // x8
  EventCampaignEntity_o *v97; // x0
  __int64 v98; // x8
  char v99; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // x23
  __int64 v101; // x0
  EventCampaignEntity_o *v102; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x0
  EventCampaignEntity_o *v107; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  Il2CppObject *v110; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v111; // x23
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v115; // x21
  ServantCombineControl___c_c *v116; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__88_0; // x22
  Il2CppObject *v119; // x23
  struct ServantCombineControl___c_StaticFields *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  const MethodInfo *v127; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *v129; // x19
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v130; // x8
  bool v131; // w1
  MenuListControl_c *v132; // x0
  float v133; // s8
  System_Func_float__float__float__float__o *v134; // x20
  __int64 v135; // x1
  __int64 v136; // x2
  AlphaTransitionCalculator_o *v137; // x21
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  __int64 v144; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v145; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v146; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_List_Enumerator_T__o v147[2]; // [xsp+28h] [xbp-E8h] BYREF
  int v148; // [xsp+58h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v149; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v150; // [xsp+80h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A0h] [xbp-70h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16

  if ( (byte_4215EC8 & 1) == 0 )
  {
    sub_B0D8A4(&AlphaTransitionCalculator_TypeInfo, usrSvtData);
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, v10);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Comparison_EventCampaignEntity___ctor__, v12);
    sub_B0D8A4(&Method_System_Comparison_List_EventCampaignEntity____ctor__, v13);
    sub_B0D8A4(&System_Comparison_EventCampaignEntity__TypeInfo, v14);
    sub_B0D8A4(&System_Comparison_List_EventCampaignEntity___TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v16);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v34);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v35);
    sub_B0D8A4(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v36);
    sub_B0D8A4(&MenuListControl_TypeInfo, v37);
    sub_B0D8A4(&NetworkManager_TypeInfo, v38);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B0D8A4(&Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__, v40);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B0D8A4(&Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__, v42);
    sub_B0D8A4(&ServantCombineControl___c_TypeInfo, v43);
    sub_B0D8A4(&StringLiteral_1/*""*/, v44);
    byte_4215EC8 = 1;
  }
  p_baseData = &this->fields.baseData;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  memset(&v150, 0, sizeof(v150));
  memset(&v149, 0, sizeof(v149));
  v148 = 0;
  this->fields.baseData = usrSvtData;
  sub_B0D840(
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
  combineInfoComp = (struct CombineInfoComponent_o *)*p_baseData;
  if ( !*p_baseData )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)UserServantEntity__GetAdjustMax(
                                                       (UserServantEntity_o *)combineInfoComp,
                                                       &maxAjustAtk[1],
                                                       maxAjustAtk,
                                                       &secondMaxAdjustAtk[1],
                                                       secondMaxAdjustAtk,
                                                       0LL);
  if ( !*p_baseData )
    goto LABEL_165;
  adjustHp = (*p_baseData)->fields.adjustHp;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( adjustHp >= maxAjustAtk[1] )
    v50 = secondMaxAdjustAtk[1];
  else
    v50 = maxAjustAtk[1];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41076120(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * adjustHp,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * v50,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_165;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !*p_baseData )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  adjustAtk = (*p_baseData)->fields.adjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( adjustAtk >= maxAjustAtk[0] )
    v53 = secondMaxAdjustAtk[0];
  else
    v53 = maxAjustAtk[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41076120(
    currentAdjustAtkIconLabel,
    45,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * adjustAtk,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * v53,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_165;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantCombineControl__CheckConductionWire(this, v54);
  combineInfoComp = (struct CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)combineInfoComp,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !combineInfoComp )
    goto LABEL_165;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)combineInfoComp, 0LL);
  if ( !CombineEventCampaigns )
    goto LABEL_151;
  v146 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                   v55,
                                                                                                   v56);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v146,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v145 = CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v147,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v150 = v147[0];
LABEL_27:
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v150,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v58 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v150.fields.current;
    if ( !v150.fields.current )
      sub_B0D97C(v58);
    klass_high = HIDWORD(v150.fields.current[1].klass);
    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000034LL) != 0 )
    {
      EventMaster = ServantCombineControl__get_EventMaster(this, v59);
      if ( !EventMaster )
        sub_B0D97C(0LL);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)EventMaster,
                 current->fields.missionTargetId,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_B0D97C(0LL);
      v64 = *(_QWORD *)&Entity->fields.eventId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( v64 >= Time )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B0D97C(Time);
        namespaze = klass->_1.namespaze;
        missionConditionDetailId = current->fields.missionConditionDetailId;
        if ( namespaze )
        {
          if ( (unsigned int)(missionConditionDetailId - 32) >= 2 )
          {
            if ( missionConditionDetailId == 27 )
            {
              if ( !usrSvtData )
                sub_B0D97C(Time);
              if ( UserServantEntity__IsExchangeSvt(usrSvtData, 0LL) )
              {
                if ( !v146 )
                  sub_B0D97C(0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v146,
                  current,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                break;
              }
            }
            else if ( (int)namespaze >= 1 )
            {
              v71 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v71 >= (unsigned int)namespaze )
                {
                  v144 = sub_B0D9A8(Time);
                  sub_B0D948(v144, 0LL);
                }
                if ( !usrSvtData )
                  sub_B0D97C(Time);
                v72 = *((_DWORD *)&klass->_1.byval_arg.data + v71);
                v74 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
                v73 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v153.fields.currentCryptoKey = v74;
                *(_QWORD *)&v153.fields.fakeValue = v73;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v153, 0LL);
                if ( v72 == (_DWORD)Time )
                  break;
                LODWORD(namespaze) = klass->_1.namespaze;
                if ( (int)++v71 >= (int)namespaze )
                  goto LABEL_27;
              }
              v70 = v146;
              if ( !v146 )
                sub_B0D97C(0LL);
LABEL_62:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v70,
                current,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            }
          }
          else
          {
            if ( !usrSvtData )
              sub_B0D97C(Time);
            SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0LL);
            if ( (System_Array__IndexOf_int_(
                    (System_Int32_array *)klass,
                    SvtClassId,
                    (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              v70 = v146;
              if ( !v146 )
                sub_B0D97C(0LL);
              goto LABEL_62;
            }
          }
        }
        else if ( (missionConditionDetailId & 0xFFFFFFFE) == 4 )
        {
          v70 = v146;
          if ( !v146 )
            sub_B0D97C(0LL);
          goto LABEL_62;
        }
      }
    }
  }
  *((_DWORD *)&v147[1].fields.list + v148++) = 602;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v150,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v148 && *((_DWORD *)&v147[0].fields.current + v148 + 1) == 602 )
    --v148;
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo,
                                                                                                  v75,
                                                                                                  v76);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  p_campaiginListPerSelectSvt = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)v77;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt,
    (System_Int32_array **)v77,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  combineInfoComp = (struct CombineInfoComponent_o *)v146;
  if ( !v146 )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v147,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v146,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v150 = v147[0];
  while ( 1 )
  {
    v85 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v150,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v85 )
      break;
    if ( !*p_campaiginListPerSelectSvt )
      sub_B0D97C(v85);
    v88 = (EventCampaignEntity_o *)v150.fields.current;
    if ( (*p_campaiginListPerSelectSvt)->fields._size <= 0 )
    {
      v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v86, v87);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v100,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v88 )
        sub_B0D97C(v101);
      v102 = EventCampaignEntity__Clone(v88, 0LL);
      if ( !v100 )
        sub_B0D97C(v102);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v100,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v102,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      v103 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_B0D97C(0LL);
LABEL_107:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v103,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
    else
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v147,
        *p_campaiginListPerSelectSvt,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v149 = v147[0];
      while ( 1 )
      {
        v89 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v149,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v89 )
          break;
        if ( !v88 )
          sub_B0D97C(v89);
        v90 = v149.fields.current;
        if ( !v149.fields.current )
          sub_B0D97C(v89);
        if ( !LODWORD(v149.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v91 = v149.fields.current[1].klass;
        data = v91->_1.byval_arg.data;
        if ( !data )
          sub_B0D97C(v89);
        if ( v88->fields.target == data[5] )
        {
LABEL_103:
          v97 = EventCampaignEntity__Clone(v88, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v90,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          v98 = v148;
          v99 = 1;
          goto LABEL_109;
        }
        target = v88->fields.target;
        if ( target == 4 )
        {
          if ( !LODWORD(v149.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( data[5] == 32 )
            goto LABEL_103;
          target = v88->fields.target;
        }
        if ( target == 32 )
        {
          if ( !LODWORD(v149.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v94 = v91->_1.byval_arg.data;
          if ( !v94 )
            sub_B0D97C(v89);
          if ( v94[5] == 4 )
            goto LABEL_103;
          target = v88->fields.target;
        }
        if ( target == 5 )
        {
          if ( !LODWORD(v149.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v95 = v91->_1.byval_arg.data;
          if ( !v95 )
            sub_B0D97C(v89);
          if ( v95[5] == 33 )
            goto LABEL_103;
          target = v88->fields.target;
        }
        if ( target == 33 )
        {
          if ( !LODWORD(v149.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v96 = v91->_1.byval_arg.data;
          if ( !v96 )
            sub_B0D97C(v89);
          if ( v96[5] == 5 )
            goto LABEL_103;
        }
      }
      v98 = v148;
      v99 = 0;
LABEL_109:
      *((_DWORD *)&v147[1].fields.list + v98) = 896;
      ++v148;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v149,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v148 && *((_DWORD *)&v147[0].fields.current + v148 + 1) == 896 )
        --v148;
      if ( (v99 & 1) == 0 )
      {
        v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v104, v105);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v100,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !v88 )
          sub_B0D97C(v106);
        v107 = EventCampaignEntity__Clone(v88, 0LL);
        if ( !v100 )
          sub_B0D97C(v107);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v100,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        v103 = *p_campaiginListPerSelectSvt;
        if ( !*p_campaiginListPerSelectSvt )
          sub_B0D97C(0LL);
        goto LABEL_107;
      }
    }
  }
  *((_DWORD *)&v147[1].fields.list + v148++) = 962;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v150,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v148 && *((_DWORD *)&v147[0].fields.current + v148 + 1) == 962 )
    --v148;
  combineInfoComp = (struct CombineInfoComponent_o *)*p_campaiginListPerSelectSvt;
  if ( !*p_campaiginListPerSelectSvt )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v147,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineInfoComp,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v149 = v147[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v149,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
  {
    v110 = v149.fields.current;
    v111 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                       System_Comparison_EventCampaignEntity__TypeInfo,
                                                                       v108,
                                                                       v109);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v111,
      (Il2CppObject *)this,
      Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventCampaignEntity___ctor__);
    if ( !v110 )
      sub_B0D97C(v112);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v110,
      (System_Comparison_T__o *)v111,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  }
  *((_DWORD *)&v147[1].fields.list + v148++) = 1026;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v149,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  CombineEventCampaigns = v145;
  if ( v148 && *((_DWORD *)&v147[0].fields.current + v148 + 1) == 1026 )
    --v148;
  v115 = *p_campaiginListPerSelectSvt;
  if ( !v115 )
    goto LABEL_165;
  if ( v115->fields._size < 1 )
    goto LABEL_151;
  v116 = ServantCombineControl___c_TypeInfo;
  if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v116 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v116->static_fields;
  _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v116);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v119 = (Il2CppObject *)static_fields->__9;
    _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_List_EventCampaignEntity___TypeInfo,
                                                                           v113,
                                                                           v114);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__88_0,
      v119,
      Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_List_EventCampaignEntity____ctor__);
    v120 = ServantCombineControl___c_TypeInfo->static_fields;
    v120->__9__88_0 = (struct System_Comparison_List_EventCampaignEntity___o *)_9__88_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v120->__9__88_0,
      (System_Int32_array **)_9__88_0,
      v121,
      v122,
      v123,
      v124,
      v125,
      v126);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v115,
    (System_Comparison_T__o *)_9__88_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
  campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !campaiginListPerSelectSvt )
    goto LABEL_165;
  if ( !campaiginListPerSelectSvt->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v129 = campaiginListPerSelectSvt->fields._items->m_Items[0];
  if ( !v129 )
    goto LABEL_165;
  if ( !v129->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  ServantCombineControl__SetupCampaign(this, v129->fields._items->m_Items[0], v127);
LABEL_151:
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaign;
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)combineInfoComp,
                                                       0LL);
  if ( CombineEventCampaigns )
  {
    v130 = this->fields.campaiginListPerSelectSvt;
    if ( !v130 )
      goto LABEL_165;
    v131 = v130->fields._size > 0;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  else
  {
    v131 = 0;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v131, 0LL);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v132 = MenuListControl_TypeInfo;
  if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v132 = MenuListControl_TypeInfo;
  }
  v133 = ChangedFPSUtil__CovertFrameNumToSecond(v132->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v134 = ExtraEasing__AsymptoticSeriesFloat(
           MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
           (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
           0LL);
  v137 = (AlphaTransitionCalculator_o *)sub_B0D974(AlphaTransitionCalculator_TypeInfo, v135, v136);
  AlphaTransitionCalculator___ctor(v137, v133, v134, 0LL);
  this->fields.campaignAlphaCalculator = v137;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.campaignAlphaCalculator,
    (System_Int32_array **)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_165:
    sub_B0D97C(combineInfoComp);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Int64_array *v40; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v42; // x20
  struct UserServantEntity_o *baseData; // x8
  __int64 v44; // x22
  __int64 v45; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_long__o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x25
  struct System_Int64_array *v52; // x8
  int64_t v53; // x26
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v56; // x27
  UnityEngine_Transform_o *v57; // x22
  int v58; // s0
  SetCombineData_o *v61; // x23
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v63; // x27
  MaterialSvtInfo_o *v64; // x28
  __int64 v65; // x1
  __int64 v66; // x2
  MaterialSvtInfo_ClickDelegate_o *v67; // x22
  UserServantEntity_o *Entity; // x27
  ServantLimitMaster_o *v69; // x28
  __int64 v70; // x21
  __int64 v71; // x22
  int32_t v72; // w21
  struct System_Int64_array *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct System_Int64_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v91; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v92; // x23
  __int64 v93; // x21
  __int64 v94; // x22
  int32_t monitor_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v97; // x2
  int32_t checkLv; // w1
  int32_t v99; // w23
  struct UserServantEntity_o *v100; // x8
  UILabel_o *currentLvLb; // x21
  UILabel_o *increLvLb; // x21
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v105; // x21
  Il2CppObject *v106; // x0
  System_String_o *v107; // x1
  UserServantEntity_o *v108; // x8
  __int64 v109; // x21
  __int64 v110; // x22
  int32_t v111; // w24
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x22
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  UserServantEntity_o *v121; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v123; // x8
  WebViewObject_o *Component_WebViewObject; // x22
  int v125; // s0
  WebViewObject_o *v129; // x22
  int v130; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v135; // x0
  int v136; // w9
  int32_t v137; // w22
  int32_t StatusUpAdjustHp; // w8
  int v139; // w21
  int getHpAdjustVal; // w23
  int32_t v141; // w22
  int32_t v142; // w22
  int32_t v143; // w23
  int32_t v144; // w1
  BalanceConfig_c *v145; // x0
  int32_t adjustAtk; // w21
  int v147; // w9
  int32_t v148; // w24
  int32_t StatusUpAdjustAtk; // w8
  int v150; // w21
  int getAtkAdjustVal; // w23
  int32_t v152; // w24
  int32_t v153; // w20
  int32_t v154; // w21
  int32_t v155; // w1
  UIWidget_o *v156; // x20
  int v157; // s0
  const MethodInfo *v161; // x1
  int v162; // s0
  __int64 v166; // x0
  int32_t targetLimitCnt; // [xsp+14h] [xbp-ACh]
  UserServantEntity_o **p_baseData; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_long__o *v169; // [xsp+20h] [xbp-A0h]
  int32_t increAmount; // [xsp+28h] [xbp-98h] BYREF
  int32_t v171; // [xsp+2Ch] [xbp-94h] BYREF
  __int64 v172; // [xsp+30h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+38h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+40h] [xbp-80h] BYREF
  __int64 lateExp; // [xsp+48h] [xbp-78h] BYREF
  System_String_array *skillNameList; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4215ECC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, data);
    sub_B0D8A4(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_B0D8A4(&CombineSvtData_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v23);
    sub_B0D8A4(&StringLiteral_7290/*"INCREMENT_SVTLEVEL"*/, v24);
    sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    byte_4215ECC = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  skillNameList = 0LL;
  idList = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  lateExp = 0LL;
  v172 = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v171 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_140;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (System_Int32_array **)materialUsrSvtIdList,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v40 = v3->fields.materialUsrSvtIdList;
  if ( !v40 )
    goto LABEL_140;
  baseSvtData = v3->fields.baseSvtData;
  v42 = *(_QWORD *)&v40->max_length;
  this->fields.baseData = baseSvtData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)baseSvtData,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_140;
  v45 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v44 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v179.fields.currentCryptoKey = v45;
  *(_QWORD *)&v179.fields.fakeValue = v44;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v179, 0LL);
  v48 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v46, v47);
  System_Collections_Generic_List_long____ctor(
    v48,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v169 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v49, v50);
  System_Collections_Generic_List_long____ctor(
    v169,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v42 >= 1 )
  {
    conductionWireInfo = this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v51 = 0LL;
    do
    {
      v52 = v3->fields.materialUsrSvtIdList;
      if ( !v52 )
        goto LABEL_140;
      if ( v51 >= v52->max_length )
        goto LABEL_141;
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_140;
      v53 = v52->m_Items[v51];
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)conductionWireInfo, 0LL);
      conductionWireInfo = BaseMonoBehaviour__createObject(
                             (BaseMonoBehaviour_o *)this,
                             svtFaceInfo,
                             transform,
                             0LL,
                             0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v56 = conductionWireInfo;
      v57 = UnityEngine_GameObject__get_transform(conductionWireInfo, 0LL);
      *(UnityEngine_Vector3_o *)&v58 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v57 )
        goto LABEL_140;
      v61 = v3;
      UnityEngine_Transform__set_localPosition(v57, *(UnityEngine_Vector3_o *)&v58, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v56, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v183.fields.x = 0.5;
      v183.fields.y = 0.5;
      v183.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v183, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v56,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v63 = this->fields.baseData;
      v64 = (MaterialSvtInfo_o *)Component_srcLineSprite;
      v67 = (MaterialSvtInfo_ClickDelegate_o *)sub_B0D974(MaterialSvtInfo_ClickDelegate_TypeInfo, v65, v66);
      MaterialSvtInfo_ClickDelegate___ctor(v67, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
      if ( !v64 )
        goto LABEL_140;
      MaterialSvtInfo__setMaterialSvtInfo(v64, v51, v63, v53, 1, 0, v67, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_140;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)conductionWireInfo,
                 v53,
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_140;
      v69 = (ServantLimitMaster_o *)conductionWireInfo;
      v70 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v71 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v180.fields.currentCryptoKey = v70;
      *(_QWORD *)&v180.fields.fakeValue = v71;
      v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v180, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                         Entity->fields.limitCount,
                                                         0LL);
      if ( !v69 )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)ServantLimitMaster__GetEntity(
                                                         v69,
                                                         v72,
                                                         (int32_t)conductionWireInfo,
                                                         0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v3 = v61;
      if ( SLODWORD(conductionWireInfo[1].klass) >= 4 )
      {
        if ( !v48 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v48,
          v53,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( UserServantEntity__isExceeded(Entity, 0LL) )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)v169;
        if ( !v169 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v169,
          v53,
          (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsExchangeSvt(Entity, 0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      ++v51;
    }
    while ( (__int64)v51 < (int)v42 );
    if ( !v48 )
      goto LABEL_140;
    v73 = System_Collections_Generic_List_long___ToArray(
            v48,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v73;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.highRarityList,
      (System_Int32_array **)v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
    conductionWireInfo = (UnityEngine_GameObject_o *)v169;
    if ( !v169 )
      goto LABEL_140;
    v80 = System_Collections_Generic_List_long___ToArray(
            v169,
            (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v80;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.exceededCheckList,
      (System_Int32_array **)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v61->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v171 = spendQp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_38473032(
                                                       (int32_t)&v171,
                                                       (System_String_o *)StringLiteral_9289/*"N0"*/,
                                                       0LL);
    if ( !qpLb )
      goto LABEL_140;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v61->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v171 = getExp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v171, 0LL);
    if ( !expLb )
      goto LABEL_140;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    v91 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v92 = (DataMasterBase_WarMaster__WarEntity__int__o *)conductionWireInfo;
    v93 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
    v94 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v181.fields.currentCryptoKey = v93;
    *(_QWORD *)&v181.fields.fakeValue = v94;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                       v181,
                                                       0LL);
    if ( !v92 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v92,
                                                       (int32_t)conductionWireInfo,
                                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !conductionWireInfo )
      goto LABEL_140;
    monitor_high = HIDWORD(conductionWireInfo[5].monitor);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
    this->fields.expType = monitor_high;
    if ( !conductionWireInfo )
      goto LABEL_140;
    this->fields.totalExp = *((_DWORD *)&conductionWireInfo[10].fields + 1) + this->fields._getExpVal_k__BackingField;
    this->fields.checkLv = conductionWireInfo[10].fields.m_CachedPtr;
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL);
    checkLv = this->fields.checkLv;
    v99 = LevelMax;
    if ( checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, checkLv, v97) )
        checkLv = this->fields.checkLv;
    }
    conductionWireInfo = this->fields.currentLvObj;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    conductionWireInfo = this->fields.increLvObj;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.increValLb;
    if ( !conductionWireInfo )
      goto LABEL_140;
    conductionWireInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conductionWireInfo, 0LL);
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    v100 = this->fields.baseData;
    if ( !v100 )
      goto LABEL_140;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v100 + 256, 0LL);
    if ( !currentLvLb )
      goto LABEL_140;
    UILabel__set_text(currentLvLb, (System_String_o *)conductionWireInfo, 0LL);
    increLvLb = this->fields.increLvLb;
    p_increLv = &this->fields.increLv;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)this + 464, 0LL);
    if ( !increLvLb )
      goto LABEL_140;
    UILabel__set_text(increLvLb, (System_String_o *)conductionWireInfo, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    this->fields.increAmount = this->fields.increLv - (*p_baseData)->fields.lv;
    increValLb = this->fields.increValLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v105 = LocalizationManager__Get((System_String_o *)StringLiteral_7290/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    conductionWireInfo = (UnityEngine_GameObject_o *)System_String__Format(v105, v106, 0LL);
    if ( !increValLb )
      goto LABEL_140;
    UILabel__set_text(increValLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CheckCombineResStatus__getCombineResStatus(
      (CheckCombineResStatus_o *)conductionWireInfo,
      &afterAtk[1],
      afterAtk,
      *p_baseData,
      *p_increLv,
      0LL);
    afterAtk[1] += v3->fields.getHpAdjustVal;
    afterAtk[0] += v3->fields.getAtkAdjustVal;
    conductionWireInfo = (UnityEngine_GameObject_o *)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    UserServantEntity__getNextUseSkillInfo(
      (UserServantEntity_o *)conductionWireInfo,
      &idList,
      &skillNameList,
      *p_increLv,
      targetLimitCnt,
      1,
      0LL);
    if ( skillNameList )
    {
      if ( !skillNameList->max_length )
      {
LABEL_141:
        v166 = sub_B0D9A8(conductionWireInfo);
        sub_B0D948(v166, 0LL);
      }
      v107 = skillNameList->m_Items[0];
      if ( v107 )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
        if ( !conductionWireInfo )
          goto LABEL_140;
        UILabel__set_text((UILabel_o *)conductionWireInfo, v107, 0LL);
      }
    }
    v108 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v109 = *(_QWORD *)&v108->fields.limitCount.fields.currentCryptoKey;
    v110 = *(_QWORD *)&v108->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v182.fields.currentCryptoKey = v109;
    *(_QWORD *)&v182.fields.fakeValue = v110;
    v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v182, 0LL);
    v114 = sub_B0D974(CombineSvtData_TypeInfo, v112, v113);
    CombineSvtData___ctor((CombineSvtData_o *)v114, 0LL);
    if ( !v114 )
      goto LABEL_140;
    v121 = *p_baseData;
    *(_QWORD *)(v114 + 16) = *p_baseData;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v114 + 16),
      (System_Int32_array **)v121,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
    increLv = this->fields.increLv;
    *(_DWORD *)(v114 + 32) = v99;
    *(_DWORD *)(v114 + 24) = increLv;
    *(_DWORD *)(v114 + 28) = v111;
    v123 = this->fields.baseData;
    if ( !v123 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp + 1,
      (int32_t *)&lateExp,
      this->fields.totalExp,
      v123->fields.lv,
      v99,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v114 + 36) = HIDWORD(lateExp);
    *(_DWORD *)(v114 + 40) = lateExp;
    *(_DWORD *)(v114 + 44) = afterAtk[1];
    *(_DWORD *)(v114 + 48) = v3->fields.getHpAdjustVal;
    *(_DWORD *)(v114 + 52) = afterAtk[0];
    *(_DWORD *)(v114 + 56) = v3->fields.getAtkAdjustVal;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v114,
      0LL);
    *(_QWORD *)secondMaxAdjustAtk = 0LL;
    *(_QWORD *)maxAjustAtk = 0LL;
    conductionWireInfo = (UnityEngine_GameObject_o *)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    UserServantEntity__GetAdjustMax(
      (UserServantEntity_o *)conductionWireInfo,
      &maxAjustAtk[1],
      maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0LL);
    conductionWireInfo = this->fields.resAdjustInfo;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)conductionWireInfo,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v125 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v125, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v129 = UnityEngine_Component__GetComponent_WebViewObject_(
             (UnityEngine_Component_o *)conductionWireInfo,
             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v130 = UnityEngine_Color__get_white(0LL);
    if ( !v129 )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)v129, *(UnityEngine_Color_o *)&v130, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v135 = BalanceConfig_TypeInfo;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v135 = BalanceConfig_TypeInfo;
      }
      v136 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v136 = 0;
    }
    v137 = maxAjustAtk[1];
    StatusUpAdjustHp = v135->static_fields->StatusUpAdjustHp;
    v139 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v172) = v139;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( v136 && !v135->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v135);
      v135 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v139 >= StatusUpAdjustHp * v137 )
    {
      v141 = secondMaxAdjustAtk[1];
      if ( (BYTE3(v135->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    else
    {
      v141 = maxAjustAtk[1];
      if ( (BYTE3(v135->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    if ( !v135->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v135);
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
LABEL_102:
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
    v142 = StatusUpAdjustHp * v141;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v143 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v139;
    UIIconLabel__Set_41076120((UIIconLabel_o *)conductionWireInfo, 44, v143, v142, 0, 0LL, 0, 0, 0, 0LL);
    if ( !System_Int32__Equals_38472956((int32_t)&v172 + 4, v143, 0LL) )
    {
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
      if ( !conductionWireInfo )
        goto LABEL_140;
      if ( v143 >= v142 )
        v144 = v142;
      else
        v144 = v143;
      UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v144, v142, v143 >= v142, 0LL);
    }
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpMaxLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    v145 = BalanceConfig_TypeInfo;
    adjustAtk = (*p_baseData)->fields.adjustAtk;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v145 = BalanceConfig_TypeInfo;
      }
      v147 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v147 = 0;
    }
    v148 = maxAjustAtk[0];
    StatusUpAdjustAtk = v145->static_fields->StatusUpAdjustAtk;
    v150 = StatusUpAdjustAtk * adjustAtk;
    LODWORD(v172) = v150;
    getAtkAdjustVal = v3->fields.getAtkAdjustVal;
    if ( v147 && !v145->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v145);
      v145 = BalanceConfig_TypeInfo;
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    if ( v150 >= StatusUpAdjustAtk * v148 )
    {
      v152 = secondMaxAdjustAtk[0];
      if ( (BYTE3(v145->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_125:
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
        v153 = StatusUpAdjustAtk * v152;
        if ( !conductionWireInfo )
          goto LABEL_140;
        v154 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v150;
        UIIconLabel__Set_41076120((UIIconLabel_o *)conductionWireInfo, 45, v154, v153, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_38472956((int32_t)&v172, v154, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_140;
          if ( v154 >= v153 )
            v155 = v153;
          else
            v155 = v154;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v155, v153, v154 >= v153, 0LL);
        }
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkMaxLabel;
        if ( conductionWireInfo )
        {
          UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v156 = (UIWidget_o *)this->fields.qpLb;
          if ( this->fields.haveQpVal >= this->fields._spendQpVal_k__BackingField )
          {
            *(UnityEngine_Color_o *)&v162 = UnityEngine_Color__get_white(0LL);
            if ( v156 )
            {
              UIWidget__set_color(v156, *(UnityEngine_Color_o *)&v162, 0LL);
              this->fields._IsExeCombine_k__BackingField = 1;
              goto LABEL_138;
            }
          }
          else
          {
            *(UnityEngine_Color_o *)&v157 = UnityEngine_Color__get_red(0LL);
            if ( v156 )
            {
              UIWidget__set_color(v156, *(UnityEngine_Color_o *)&v157, 0LL);
              this->fields._IsExeCombine_k__BackingField = 0;
LABEL_138:
              ServantCombineControl__SetExeBtnState(this, v161);
              return;
            }
          }
        }
LABEL_140:
        sub_B0D97C(conductionWireInfo);
      }
    }
    else
    {
      v152 = maxAjustAtk[0];
      if ( (BYTE3(v145->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_125;
    }
    if ( !v145->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v145);
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    goto LABEL_125;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_27037860(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UserServantEntity__o *v3; // x28
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  int64_t Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WarQuestSelectionMaster_o *v28; // x21
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x25
  float v31; // s0
  float v32; // s8
  float v33; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v35; // x25
  __int64 v36; // x26
  float v37; // s9
  WarEntity_o *Entity; // x26
  UserServantEntity_o *v39; // x27
  int32_t SvtClassId; // w0
  __int64 v41; // x1
  __int64 v42; // x2
  int size; // w25
  __int64 v44; // x22
  int v45; // w21
  int v46; // w23
  unsigned int v47; // w8
  const MethodInfo *v48; // x3
  struct UserServantEntity_o *v49; // x8
  System_Collections_Generic_List_UserServantEntity__o *v50; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x28
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v54; // w0
  int64_t v55; // x27
  CombineMaterialEntity_o *v56; // x26
  int v57; // w8
  int value; // w26
  BalanceConfig_c *v59; // x0
  ServantCombineControl_c *v60; // x8
  int SameClassExp; // w27
  float FIXED_VAL; // s11
  double v63; // d0
  int v64; // w27
  int v65; // w27
  int32_t CombineQp; // w0
  int v67; // w26
  __int64 v68; // x23
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  int32_t v76; // w8
  bool isAdjustAtkMax; // w8
  __int64 v78; // x1
  __int64 v79; // x2
  bool isSecondAdjustAtkMax; // w8
  System_Collections_Generic_List_long__o *v81; // x20
  int v82; // w21
  __int64 v83; // x22
  unsigned int v84; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v85; // x8
  __int128 v86; // q0
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int v95; // [xsp+4h] [xbp-DCh]
  DataMasterBase_WarMaster__WarEntity__int__o *v96; // [xsp+8h] [xbp-D8h]
  int32_t expType; // [xsp+14h] [xbp-CCh]
  int64_t v98; // [xsp+18h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v99; // [xsp+20h] [xbp-C0h]
  CombineMaterialMaster_o *v100; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+50h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v3 = targetMaterialList;
  if ( (byte_4215EDA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, targetMaterialList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18);
    sub_B0D8A4(&System_Math_TypeInfo, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B0D8A4(&ServantCombineControl_TypeInfo, v22);
    sub_B0D8A4(&SetCombineData_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4215EDA = 1;
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  targetMaterialList,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v28 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_89;
  v99 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  combineEventList = menuListCtr->fields.combineEventList;
  v31 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  v32 = v31;
  v100 = (CombineMaterialMaster_o *)v28;
  v33 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_89;
  v36 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v37 = v33;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v103.fields.currentCryptoKey = v36;
  *(_QWORD *)&v103.fields.fakeValue = v35;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v103, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_89;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_89;
  v39 = this->fields.baseData;
  v98 = Instance;
  if ( !v39 )
    goto LABEL_89;
  expType = HIDWORD(Entity[1].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v39, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v39, SvtClassId, 0LL);
  v95 = Instance;
  if ( !v3 )
    goto LABEL_89;
  size = v3->fields._size;
  if ( size < 1 )
  {
    v46 = 0;
    v45 = 0;
  }
  else
  {
    v96 = MasterData_WarQuestSelectionMaster;
    v44 = 0LL;
    v45 = 0;
    v46 = 0;
    v47 = v3->fields._size;
    while ( 1 )
    {
      if ( v47 <= (unsigned int)v44 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v50 = v3;
      v51 = (EventMissionProgressRequest_Argument_ProgressData_o *)v3->fields._items->m_Items[v44];
      if ( !v51 )
        goto LABEL_89;
      klass = v51[2].klass;
      monitor = v51[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v104.fields.currentCryptoKey = klass;
      *(_QWORD *)&v104.fields.fakeValue = monitor;
      v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v104, 0LL);
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v96,
                            v54,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_89;
      v55 = Instance;
      Instance = (int64_t)v100;
      if ( !v100 )
        goto LABEL_89;
      v56 = CombineMaterialMaster__GetEntity(v100, *(_DWORD *)(v55 + 136), v51[6].fields.missionTargetId, 0LL);
      Instance = (int64_t)v99;
      if ( !v99 )
        goto LABEL_89;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v99,
                            *(_DWORD *)(v55 + 80),
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v56 || !Instance )
        goto LABEL_89;
      v57 = *(_DWORD *)(Instance + 52);
      value = v56->fields.value;
      if ( v57 == 3 )
        goto LABEL_40;
      if ( v57 == v95 )
      {
        Instance = (int64_t)this->fields.baseData;
        if ( !Instance )
          goto LABEL_89;
        v64 = *(_DWORD *)(v55 + 80);
        if ( v64 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL) )
        {
LABEL_40:
          v59 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v59 = BalanceConfig_TypeInfo;
          }
          v60 = ServantCombineControl_TypeInfo;
          SameClassExp = v59->static_fields->SameClassExp;
          if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v60 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v60->static_fields->FIXED_VAL;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v63 = ceil((double)value * (double)SameClassExp / FIXED_VAL);
          if ( v63 == INFINITY )
            v63 = -INFINITY;
          value = (int)v63;
        }
      }
      Instance = UnityEngine_Mathf__CeilToInt(v32 * (float)value, 0LL);
      if ( !this->fields.baseData )
        goto LABEL_89;
      v65 = Instance;
      CombineQp = UserServantEntity__getCombineQp(this->fields.baseData, 0LL);
      Instance = UnityEngine_Mathf__CeilToInt(v37 * (float)CombineQp, 0LL);
      if ( !v98 )
        goto LABEL_89;
      v67 = Instance + v46;
      if ( (int)Instance + v46 > *(_DWORD *)(v98 + 96) )
        break;
      if ( !v25 )
        goto LABEL_89;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        v51,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      v49 = this->fields.baseData;
      if ( !v49 )
        goto LABEL_89;
      v45 += v65;
      if ( ServantCombineControl__IsLevelMax(this, v49->fields.exp + v45, expType, v48) )
        goto LABEL_61;
      v3 = v50;
      Instance = (int64_t)ServantCombineControl_TypeInfo;
      if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        Instance = (int64_t)ServantCombineControl_TypeInfo;
      }
      if ( (_DWORD)v44 == *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL) - 1 || (int)v44 + 1 >= size )
        goto LABEL_61;
      v47 = v50->fields._size;
      ++v44;
      v46 = v67;
    }
    this->fields.isQpCondClear = 0;
  }
  v67 = v46;
  if ( !v25 )
    return 0LL;
LABEL_61:
  if ( v25->fields._size < 1 )
    return 0LL;
  v68 = sub_B0D974(SetCombineData_TypeInfo, v41, v42);
  SetCombineData___ctor((SetCombineData_o *)v68, 0LL);
  if ( !v68 )
    goto LABEL_89;
  v75 = (System_Int32_array **)this->fields.baseData;
  *(_QWORD *)(v68 + 16) = v75;
  sub_B0D840((BattleServantConfConponent_o *)(v68 + 16), v75, v69, v70, v71, v72, v73, v74);
  v76 = v25->fields._size;
  *(_DWORD *)(v68 + 28) = v67;
  *(_DWORD *)(v68 + 32) = v45;
  *(_QWORD *)(v68 + 48) = 0LL;
  *(_DWORD *)(v68 + 24) = v76;
  Instance = (int64_t)this->fields.baseData;
  if ( !Instance )
    goto LABEL_89;
  if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)this->fields.baseData;
    if ( !Instance )
      goto LABEL_89;
    isAdjustAtkMax = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
  }
  else
  {
    isAdjustAtkMax = 0;
  }
  *(_BYTE *)(v68 + 44) = isAdjustAtkMax;
  Instance = (int64_t)this->fields.baseData;
  if ( !Instance )
LABEL_89:
    sub_B0D97C(Instance);
  if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0LL) )
  {
    Instance = (int64_t)this->fields.baseData;
    if ( !Instance )
      goto LABEL_89;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
  }
  else
  {
    isSecondAdjustAtkMax = 0;
  }
  *(_BYTE *)(v68 + 45) = isSecondAdjustAtkMax;
  v81 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v78, v79);
  System_Collections_Generic_List_long____ctor(
    v81,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  v82 = v25->fields._size;
  if ( v82 >= 1 )
  {
    v83 = 0LL;
    v84 = v25->fields._size;
    while ( 1 )
    {
      if ( v84 <= (unsigned int)v83 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v85 = v25->fields._items->m_Items[v83];
      if ( !v85 )
        goto LABEL_89;
      v86 = *(_OWORD *)&v85->fields.addCount;
      *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v85->fields.missionTargetId;
      *(_OWORD *)&v102.fields.fakeValue = v86;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v101 = v102;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v101, 0LL);
      if ( !v81 )
        goto LABEL_89;
      System_Collections_Generic_List_long___Add(
        v81,
        Instance,
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (int)v83 + 1 >= v82 )
        goto LABEL_87;
      v84 = v25->fields._size;
      ++v83;
    }
  }
  if ( !v81 )
    goto LABEL_89;
LABEL_87:
  v87 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                 v81,
                                 (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
  *(_QWORD *)(v68 + 56) = v87;
  sub_B0D840((BattleServantConfConponent_o *)(v68 + 56), v87, v88, v89, v90, v91, v92, v93);
  return (SetCombineData_o *)v68;
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
    sub_B0D97C(0LL);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
  ServantCombineControl__SetBaseSvtCardImg(this, this->fields.baseData, v5);
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 1, v6);
}


void __fastcall ServantCombineControl__SetDispCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  ServantCombineControl_o *v4; // x20
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
  ServantCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_24036516; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4215ECB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantCombineControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215ECB = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL);
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
  p_charaGraph = (ServantCombineControl_o **)&v4->fields.charaGraph;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_4215ED3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4215ED3 = 1;
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


void __fastcall ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20

  if ( (byte_4215EC6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_4215EC6 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_38473032((int)this + 476, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B0D97C(SelfUserGame);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


void __fastcall ServantCombineControl__SetIsRecommendedButtonEnabled(
        ServantCombineControl_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UICommonButton_o *recommendedButton; // x19
  char isSelectBase; // w8

  recommendedButton = this->fields.recommendedButton;
  if ( !isEnabled )
    goto LABEL_6;
  isSelectBase = this->fields.isSelectBase;
  if ( !isSelectBase )
    goto LABEL_7;
  this = (ServantCombineControl_o *)this->fields.baseData;
  if ( !this )
  {
LABEL_6:
    isSelectBase = 0;
LABEL_7:
    if ( !recommendedButton )
      goto LABEL_9;
    goto LABEL_8;
  }
  this = (ServantCombineControl_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0LL);
  isSelectBase = (unsigned __int8)this ^ 1;
  if ( !recommendedButton )
LABEL_9:
    sub_B0D97C(this);
LABEL_8:
  UICommonButton__SetButtonEnable(recommendedButton, isSelectBase & 1, 1, 0LL);
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
    sub_B0D97C(0LL);
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v18; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  System_Int32_array **RecommendedCombineData; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v35; // x2
  WebViewManager_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  System_String_o *v39; // x20
  ServantCombineControl___c_c *v40; // x8
  struct ServantCombineControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__107_1; // x22
  System_String_o *v43; // x21
  Il2CppObject *v44; // x23
  struct ServantCombineControl___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t v52; // w8
  CommonUI_o *v53; // x0
  System_String_o *v54; // x1
  System_String_o *v55; // x2
  CommonUI_o *Instance; // x19
  System_String_o *v57; // x21
  System_String_o *v58; // x22
  System_String_o *v59; // x23
  __int64 v60; // x1
  __int64 v61; // x2
  CommonConfirmDialog_ClickDelegate_o *v62; // x24
  System_String_o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2

  if ( (byte_4215ED7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, v7);
    sub_B0D8A4(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__, v8);
    sub_B0D8A4(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__, v9);
    sub_B0D8A4(&ServantCombineControl___c__DisplayClass107_0_TypeInfo, v10);
    sub_B0D8A4(&ServantCombineControl___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_11085/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, v12);
    sub_B0D8A4(&StringLiteral_11084/*"RECOMMENDED_NOT_HAVE_QP"*/, v13);
    sub_B0D8A4(&StringLiteral_11083/*"RECOMMENDED_NOT_EXIST_MSG"*/, v14);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4215ED7 = 1;
  }
  v18 = sub_B0D974(ServantCombineControl___c__DisplayClass107_0_TypeInfo, method, v2);
  ServantCombineControl___c__DisplayClass107_0___ctor((ServantCombineControl___c__DisplayClass107_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_33;
  *(_QWORD *)(v18 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = (System_Int32_array **)ServantCombineControl__GetRecommendedCombineData(this, v26);
  *(_QWORD *)(v18 + 24) = RecommendedCombineData;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 24), RecommendedCombineData, v28, v29, v30, v31, v32, v33);
  isQpCondClear = this->fields.isQpCondClear;
  if ( *(_QWORD *)(v18 + 24) )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
        ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v18 + 24), v35);
        return;
      }
LABEL_33:
      sub_B0D97C(recommendedConfigDialog);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11085/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v62 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v60, v61);
    CommonConfirmDialog_ClickDelegate___ctor(
      v62,
      (Il2CppObject *)v18,
      Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__OpenConfirmDialog_17016196(Instance, (System_String_o *)StringLiteral_1/*""*/, v57, v58, v59, v62, 0, 0, 0, 0LL);
  }
  else
  {
    v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( isQpCondClear )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11083/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                0LL);
      v39 = (System_String_o *)recommendedConfigDialog;
      v40 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v40 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v40->static_fields;
      _9__107_1 = static_fields->__9__107_1;
      v43 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__107_1 )
      {
        if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)static_fields->__9;
        _9__107_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38);
        System_Action___ctor(_9__107_1, v44, Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, 0LL);
        v45 = ServantCombineControl___c_TypeInfo->static_fields;
        v45->__9__107_1 = _9__107_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v45->__9__107_1,
          (System_Int32_array **)_9__107_1,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      if ( !v36 )
        goto LABEL_33;
      v52 = 25;
      v53 = (CommonUI_o *)v36;
      v54 = v43;
      v55 = v39;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11084/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
      _9__107_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v64, v65);
      System_Action___ctor(
        _9__107_1,
        (Il2CppObject *)v18,
        Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__,
        0LL);
      if ( !v36 )
        goto LABEL_33;
      v53 = (CommonUI_o *)v36;
      v55 = v63;
      v54 = (System_String_o *)StringLiteral_1/*""*/;
      v52 = 28;
    }
    CommonUI__OpenNotificationDialog(v53, v54, v55, _9__107_1, -1, 0, 0, 0, 0, v52, 0, 0, 0LL, 0LL);
  }
}


void __fastcall ServantCombineControl__SetSelectMaterialEnable(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0LL),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0LL) )
  {
    sub_B0D97C(preSelectBaseLb);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL);
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
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215ED4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_7296/*"INFO_MSG_COMBINE_MATERIAL"*/, v6);
    sub_B0D8A4(&StringLiteral_7305/*"INFO_MSG_SVTCOMBINE_BASE"*/, v7);
    sub_B0D8A4(&StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_B0D8A4(&StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4215ED4 = 1;
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
      v17 = &StringLiteral_7296/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
    v17 = &StringLiteral_7305/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  v18 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
LABEL_27:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)detailInfoLb, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetupCampaign(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *eventInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Instance; // x0
  int v8; // s0
  float v9; // s1
  float v10; // s2
  int32_t target; // w8
  int v12; // s8
  float v13; // s9
  float v14; // s10
  int v15; // w8
  UISprite_o *campaign; // x21
  System_String_o *v17; // x0
  UILabel_o *campaignLabel; // x20
  __int64 v19; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215EC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, eventInfoData);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_19729/*"img_txt_campaign_"*/, v6);
    byte_4215EC9 = 1;
  }
  v19 = 0LL;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( !eventInfoData )
LABEL_22:
    sub_B0D97C(Instance);
  target = eventInfoData->fields.target;
  v12 = v8;
  v13 = v9;
  v14 = v10;
  if ( target > 5 )
  {
    if ( target != 27 )
    {
      if ( (target & 0xFFFFFFFE) != 32 )
        goto LABEL_13;
      goto LABEL_11;
    }
LABEL_9:
    v12 = 1113849856;
    v15 = 1;
LABEL_12:
    v13 = 4.0;
    v14 = 0.0;
    HIDWORD(v19) = v15;
    goto LABEL_13;
  }
  if ( target == 2 )
    goto LABEL_9;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_11:
    v12 = 1119748096;
    v15 = 2;
    goto LABEL_12;
  }
LABEL_13:
  campaign = this->fields.campaign;
  v17 = System_Int32__ToString((int32_t)&v19 + 4, 0LL);
  Instance = System_String__Concat_43849904((System_String_o *)StringLiteral_19729/*"img_txt_campaign_"*/, v17, 0LL);
  if ( !campaign )
    goto LABEL_22;
  UISprite__set_spriteName(campaign, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaign;
  if ( !Instance )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, void *))Instance->klass[1]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[1]._1.interopData);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)EventCampaignMaster__getData(
                                  (EventCampaignMaster_o *)Instance,
                                  eventInfoData->fields.eventId,
                                  0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v19) = SLODWORD(Instance[2].klass) / 1000;
  campaignLabel = this->fields.campaignLabel;
  Instance = System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !campaignLabel )
    goto LABEL_22;
  UILabel__set_text(campaignLabel, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaignLabel;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v20.fields.x) = v12;
  v20.fields.y = v13;
  v20.fields.z = v14;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v20, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  UserGameEntity_o *SelfUserGame; // x0

  if ( (byte_4215ECF & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, v3);
    byte_4215ECF = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !this->fields.exeCombineDlg )
    sub_B0D97C(SelfUserGame);
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
  DataManager_o *SelfUserGame; // x0
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int32_t masterLoadThreads; // w21
  unsigned __int64 v11; // x23
  unsigned __int64 max_length; // x9
  int64_t v13; // x22
  bool v14; // w6
  __int64 v15; // x0

  if ( (byte_4215ECE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_4215ECE = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_16;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  masterLoadThreads = (int32_t)SelfUserGame->fields.masterLoadThreads;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v11 >= (int)max_length )
    {
      v14 = 0;
      goto LABEL_19;
    }
    if ( v11 >= max_length )
    {
      v15 = sub_B0D9A8(SelfUserGame);
      sub_B0D948(v15, 0LL);
    }
    v13 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v11];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      SelfUserGame,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                      v13,
                                      (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v11;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v14 = 1;
LABEL_19:
  SelfUserGame = (DataManager_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B0D97C(SelfUserGame);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v7,
    this->fields._spendQpVal_k__BackingField,
    masterLoadThreads,
    v14,
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
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_IEnumerator_c **v19; // x11
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x21
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4215EDD & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&progress);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v10);
    byte_4215EDD = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectGrid;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_63;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_21:
      v20 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_61;
    v22 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[v22 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v21 = (UnityEngine_Component_o *)sub_B0DC70(v21);
LABEL_61:
      sub_B0D97C(v21);
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v21,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B0D97C(0LL);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  }
  v24 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_33;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_33:
      v29 = sub_AA67A0(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  helpBtn = this->fields.charaGraphBase;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  if ( progress == 3 )
  {
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
    if ( !helpBtn )
      goto LABEL_63;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)helpBtn,
                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !helpBtn )
      goto LABEL_63;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
    if ( !helpBtn )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))helpBtn->klass[1]._1.implementedInterfaces)(
      helpBtn,
      0LL,
      1LL,
      helpBtn->klass[1]._1.interfaceOffsets);
  }
  else if ( progress == 1 )
  {
    helpBtn = this->fields.charaGraphBase;
    if ( helpBtn )
    {
      helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0LL);
      if ( helpBtn )
      {
        helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
        if ( helpBtn )
        {
          helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)helpBtn,
                                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
          if ( helpBtn )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_63:
    sub_B0D97C(helpBtn);
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
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x20
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v30; // x8
  struct SetRarityDialogControl_o *v31; // x8

  if ( (byte_4215EDC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v9);
    byte_4215EDC = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_62;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectGrid;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_21:
      v19 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_B0D97C(0LL);
    v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
    {
      helpBtn = (UnityEngine_GameObject_o *)sub_B0DC70(v20);
      goto LABEL_62;
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v20,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B0D97C(0LL);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
  }
  v23 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_33;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_33:
      v28 = sub_AA67A0(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
  helpBtn = this->fields.charaGraphBase;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_62;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v30 = this->fields.exeCombineDlg;
  if ( !v30 )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)v30->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn
    || (helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))helpBtn->klass[1]._1.namespaze)(
                                                helpBtn,
                                                1LL,
                                                helpBtn->klass[1]._1.byval_arg.data),
        (v31 = this->fields.exeCombineDlg) == 0LL)
    || (helpBtn = (UnityEngine_GameObject_o *)v31->fields.cancelBtnLb) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                helpBtn,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_62:
    sub_B0D97C(helpBtn);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))helpBtn->klass[1]._1.implementedInterfaces)(
    helpBtn,
    0LL,
    1LL,
    helpBtn->klass[1]._1.interfaceOffsets);
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
  int64_t campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
  bool v15; // w1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v16; // x8
  int size; // w8
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v19; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v20; // x21
  EventCampaignEntity_o *v21; // x8
  int64_t v22; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v23; // x20
  const MethodInfo *v24; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v25; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v26; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v27; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v28; // x20
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v32; // s8
  MenuListControl_c *v33; // x0
  const MethodInfo *v34; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v35; // x21
  __int64 campaiginPerSelectSvtListIndex; // x22
  System_Collections_Generic_List_EventCampaignEntity__o *v37; // x21
  EventCampaignEntity_o *v38; // x8
  int64_t v39; // x20
  const MethodInfo *v40; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v41; // x20
  __int64 v42; // x21
  const MethodInfo *v43; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v44; // x20
  __int64 v45; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v46; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v47; // x20
  __int64 v48; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v49; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v50; // x20
  int32_t v51; // w21
  int32_t v52; // w8
  System_Collections_Generic_List_EventCampaignEntity__o *v53; // x20
  struct AlphaTransitionCalculator_o *v54; // x8

  if ( (byte_4215EC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v8);
    sub_B0D8A4(&MenuListControl_TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&Method_TransitionCalculator_float__Update__, v11);
    sub_B0D8A4(&Method_TransitionCalculator_float__get_Current__, v12);
    byte_4215EC1 = 1;
  }
  if ( this->fields.isSelectBase )
  {
    campaign = (int64_t)this->fields.campaign;
    if ( !campaign )
      goto LABEL_98;
    campaign = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)campaign, 0LL);
    campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
    if ( campaiginListPerSelectSvt )
    {
      v15 = campaiginListPerSelectSvt->fields._size > 0;
      if ( !campaign )
        goto LABEL_98;
    }
    else
    {
      v15 = 0;
      if ( !campaign )
        goto LABEL_98;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, v15, 0LL);
    v16 = this->fields.campaiginListPerSelectSvt;
    if ( v16 )
    {
      size = v16->fields._size;
      if ( size >= 1 )
      {
        if ( size != 1 )
        {
          campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
          if ( !campaignAlphaCalculator )
            return;
          TransitionCalculator_float___Update(
            campaignAlphaCalculator,
            (const MethodInfo_2686910 *)Method_TransitionCalculator_float__Update__);
          campaign = (int64_t)this->fields.campaignAlphaCalculator;
          if ( !campaign )
            goto LABEL_98;
          if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
          {
            realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
            v32 = realtimeSinceStartup;
            v33 = MenuListControl_TypeInfo;
            if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MenuListControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
              v33 = MenuListControl_TypeInfo;
            }
            if ( (float)(v32 - campaignAlphaAnimTimeOld) >= v33->static_fields->ALPHA_ANIMATION_INTERVAL )
            {
              campaign = (int64_t)this->fields.campaignAlphaCalculator;
              if ( !campaign )
                goto LABEL_98;
              AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)campaign, 0LL);
            }
          }
          campaign = (int64_t)this->fields.campaignAlphaCalculator;
          if ( campaign )
          {
            campaign = AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)campaign, 0LL);
            if ( (campaign & 1) != 0 )
            {
              campaign = (int64_t)this->fields.campaignAlphaCalculator;
              if ( !campaign )
                goto LABEL_98;
              AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)campaign, 0LL);
              this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v34);
              v35 = this->fields.campaiginListPerSelectSvt;
              if ( !v35 )
                goto LABEL_98;
              campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
              if ( v35->fields._size <= (unsigned int)campaiginPerSelectSvtListIndex )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v37 = v35->fields._items->m_Items[campaiginPerSelectSvtListIndex];
              if ( !v37 )
                goto LABEL_98;
              if ( !v37->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v38 = v37->fields._items->m_Items[0];
              if ( !v38 )
                goto LABEL_98;
              if ( !campaign )
                goto LABEL_98;
              campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                                    v38->fields.eventId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !campaign )
                goto LABEL_98;
              v39 = *(_QWORD *)(campaign + 96);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              campaign = NetworkManager__getTime(0LL);
              if ( v39 < campaign )
              {
                v41 = this->fields.campaiginListPerSelectSvt;
                if ( !v41 )
                  goto LABEL_98;
                v42 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v41->fields._size <= (unsigned int)v42 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                campaign = (int64_t)v41->fields._items->m_Items[v42];
                if ( !campaign )
                  goto LABEL_98;
                System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                  0,
                  (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                v44 = this->fields.campaiginListPerSelectSvt;
                if ( !v44 )
                  goto LABEL_98;
                v45 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v44->fields._size <= (unsigned int)v45 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                v46 = v44->fields._items->m_Items[v45];
                if ( !v46 )
                  goto LABEL_98;
                v47 = this->fields.campaiginListPerSelectSvt;
                if ( !v47 )
                  goto LABEL_98;
                v48 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v46->fields._size <= 0 )
                {
                  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                    v48,
                    (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                }
                else
                {
                  if ( v47->fields._size <= (unsigned int)v48 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  v49 = v47->fields._items->m_Items[v48];
                  if ( !v49 )
                    goto LABEL_98;
                  if ( !v49->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  ServantCombineControl__SetupCampaign(this, v49->fields._items->m_Items[0], v43);
                }
              }
              v50 = this->fields.campaiginListPerSelectSvt;
              v51 = this->fields.campaiginPerSelectSvtListIndex + 1;
              this->fields.campaiginPerSelectSvtListIndex = v51;
              if ( !v50 )
                goto LABEL_98;
              v52 = v50->fields._size;
              if ( v52 <= v51 )
              {
                this->fields.campaiginPerSelectSvtListIndex = 0;
                v52 = v50->fields._size;
                v51 = 0;
              }
              if ( v52 <= (unsigned int)v51 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v53 = v50->fields._items->m_Items[v51];
              if ( !v53 )
                goto LABEL_98;
              if ( !v53->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              ServantCombineControl__SetupCampaign(this, v53->fields._items->m_Items[0], v40);
            }
            v54 = this->fields.campaignAlphaCalculator;
            if ( v54 )
            {
              campaign = (int64_t)this->fields.campaign;
              this->fields.campaignAlphaAnimNow = v54->fields._Current_k__BackingField;
              if ( campaign )
              {
                (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)campaign + 440LL))(
                  campaign,
                  *(_QWORD *)(*(_QWORD *)campaign + 448LL));
                return;
              }
            }
          }
LABEL_98:
          sub_B0D97C(campaign);
        }
        campaign = (int64_t)this->fields.campaign;
        if ( !campaign )
          goto LABEL_98;
        (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)campaign + 440LL))(
          campaign,
          *(_QWORD *)(*(_QWORD *)campaign + 448LL),
          1.0);
        campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v18);
        v19 = this->fields.campaiginListPerSelectSvt;
        if ( !v19 )
          goto LABEL_98;
        if ( !v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v20 = v19->fields._items->m_Items[0];
        if ( !v20 )
          goto LABEL_98;
        if ( !v20->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v21 = v20->fields._items->m_Items[0];
        if ( !v21 )
          goto LABEL_98;
        if ( !campaign )
          goto LABEL_98;
        campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                              v21->fields.eventId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !campaign )
          goto LABEL_98;
        v22 = *(_QWORD *)(campaign + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        campaign = NetworkManager__getTime(0LL);
        if ( v22 < campaign )
        {
          v23 = this->fields.campaiginListPerSelectSvt;
          if ( v23 )
          {
            if ( !v23->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            campaign = (int64_t)v23->fields._items->m_Items[0];
            if ( campaign )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                0,
                (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
              v25 = this->fields.campaiginListPerSelectSvt;
              if ( v25 )
              {
                if ( !v25->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                v26 = v25->fields._items->m_Items[0];
                if ( v26 )
                {
                  v27 = this->fields.campaiginListPerSelectSvt;
                  if ( v27 )
                  {
                    if ( v26->fields._size <= 0 )
                    {
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                        0,
                        (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                      return;
                    }
                    if ( !v27->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                    v28 = v27->fields._items->m_Items[0];
                    if ( v28 )
                    {
                      if ( !v28->fields._size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                      ServantCombineControl__SetupCampaign(this, v28->fields._items->m_Items[0], v24);
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
      sub_B0D97C(0LL);
    RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
  }
}


int32_t __fastcall ServantCombineControl___SetBaseSvtCardImg_b__88_1(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *a,
        EventCampaignEntity_o *b,
        const MethodInfo *method)
{
  ServantCombineControl_o *v6; // x20
  int32_t value; // w8
  int32_t v8; // w9
  int32_t result; // w0
  const MethodInfo *v10; // x1
  __int64 v11; // x22

  v6 = this;
  if ( (byte_4215EDF & 1) == 0 )
  {
    this = (ServantCombineControl_o *)sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, a);
    byte_4215EDF = 1;
  }
  if ( !b || !a )
    goto LABEL_14;
  value = b->fields.value;
  v8 = a->fields.value;
  result = value - v8;
  if ( value != v8 )
    return result;
  this = (ServantCombineControl_o *)ServantCombineControl__get_EventMaster(v6, (const MethodInfo *)a);
  if ( !this
    || (this = (ServantCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            a->fields.eventId,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || (v11 = *(_QWORD *)&this->fields._targetType_k__BackingField,
        (this = (ServantCombineControl_o *)ServantCombineControl__get_EventMaster(v6, v10)) == 0LL)
    || (this = (ServantCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            b->fields.eventId,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B0D97C(this);
  }
  if ( v11 < *(_QWORD *)&this->fields._targetType_k__BackingField )
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

  if ( (byte_4215EC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4215EC0 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    p_eventMaster = (BattleServantConfConponent_o *)&this->fields.eventMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B0D840(p_eventMaster, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
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
  sub_B0D840(
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
  Il2CppObject *v3; // x19
  struct ServantCombineControl___c_StaticFields *static_fields; // x0

  if ( (byte_4212215 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCombineControl___c_TypeInfo, v1);
    byte_4212215 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantCombineControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantCombineControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCombineControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  CombineRootComponent_o *Instance; // x0
  __int64 v4; // x9
  ServantCombineControl___c_o *v5; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v6; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4212216 & 1) == 0 )
  {
    sub_B0D8A4(&CombineRootComponent_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4212216 = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_B0D97C(Instance);
  v4 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v4
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v4 - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    v5 = (ServantCombineControl___c_o *)sub_B0DC70(Instance);
    ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(v5, v6, v7, v8);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__113_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0LL), !b) )
    sub_B0D97C(this);
  return (_DWORD)this - UserServantEntity__getSvtClassId(b, 0LL);
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

  if ( (byte_4212217 & 1) == 0 )
  {
    this = (ServantCombineControl___c_o *)sub_B0D8A4(
                                            &Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__,
                                            a);
    byte_4212217 = 1;
  }
  if ( !a )
    goto LABEL_12;
  if ( !a->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v6 = a->fields._items->m_Items[0];
  if ( !v6 || !b )
    goto LABEL_12;
  target = v6->fields.target;
  if ( !b->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v8 = b->fields._items->m_Items[0];
  if ( !v8 )
LABEL_12:
    sub_B0D97C(this);
  return target - v8->fields.target;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__107_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212218 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212218 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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

  if ( (byte_4212219 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4212219 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      Instance = (CommonUI_o *)_4__this->fields.recommendedConfigDialog;
      if ( Instance )
      {
        RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
        Instance = (CommonUI_o *)this->fields.__4__this;
        if ( Instance )
        {
          ServantCombineControl__SetMaterialToCombineData(
            (ServantCombineControl_o *)Instance,
            this->fields.recommendedCombineData,
            0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B0D97C(Instance);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_421221A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421221A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}