void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_42B1242 & 1) == 0 )
  {
    sub_B52984(&ServantCombineControl_TypeInfo);
    byte_42B1242 = 1;
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v11; // x20
  UILabel_o *v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42B122E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3321/*"CONDUCTION_LIMITUP"*/);
    sub_B52984(&StringLiteral_3324/*"CONDUCTION_LVEXCEED_MSG"*/);
    sub_B52984(&StringLiteral_3323/*"CONDUCTION_LVEXCEED"*/);
    sub_B52984(&StringLiteral_3322/*"CONDUCTION_LIMITUP_MSG"*/);
    byte_42B122E = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_41;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_41;
    v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)conductionWireInfo;
    v8 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                       v13,
                                                       0LL);
    if ( !v6 )
      goto LABEL_41;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      v6,
      (int32_t)conductionWireInfo,
      (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                                                   (System_String_o *)StringLiteral_3324/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3323/*"CONDUCTION_LVEXCEED"*/,
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
                sub_B52A5C(conductionWireInfo, method);
              }
            }
          }
        }
        else
        {
          v11 = this->fields.conductionWireLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3322/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v11 )
            goto LABEL_41;
          UILabel__set_text(v11, (System_String_o *)conductionWireInfo, 0LL);
          v12 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3321/*"CONDUCTION_LIMITUP"*/,
                                                             0LL);
          if ( !v12 )
            goto LABEL_41;
          UILabel__set_text(v12, (System_String_o *)conductionWireInfo, 0LL);
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
    sub_B52A5C(this, method);
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
  void *baseData; // x0
  int32_t LevelMax; // w0
  int32_t v7; // w8
  int32_t totalExp; // w9
  int32_t v9; // w8
  bool result; // w0

  if ( (byte_42B1231 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1231 = 1;
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
  baseData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B52A5C(baseData, *(_QWORD *)&lv);
  }
  v7 = *((_DWORD *)baseData + 6);
  totalExp = this->fields.totalExp;
  if ( v7 <= totalExp )
  {
    if ( v7 != totalExp )
    {
      result = 0;
      ++this->fields.checkLv;
      return result;
    }
    v9 = *((_DWORD *)baseData + 5) + 1;
  }
  else
  {
    v9 = *((_DWORD *)baseData + 5);
  }
  this->fields.increLv = v9;
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

  if ( (byte_42B122B & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B122B = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v17, 0LL) )
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
  sub_B52920(
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_39386776((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0LL);
    return System_Int32__CompareTo_39386776((int32_t)&SvtClassId, v8, 0LL);
  }
  return result;
}


void __fastcall ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectGrid; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
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

  if ( (byte_42B1236 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    byte_42B1236 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_B52A5C(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
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
      v15 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v11);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_36;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v16 = (UnityEngine_Component_o *)sub_B52D50(v16);
LABEL_36:
      sub_B52A5C(v16, v17);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  v20 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
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
      v31 = sub_AEB880(v20, System_IDisposable_TypeInfo, 0LL, v22);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_B52920(
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_array *CombineMaterialList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  int32_t SvtClassId; // w22
  _BOOL4 IsExtraClass; // w22
  RecommendedConfigSaveData_o *v9; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x24
  struct System_Collections_Generic_List_int__o *selectRarityList; // x27
  signed __int64 size; // x19
  unsigned __int64 v13; // x25
  __int64 v14; // x8
  const MethodInfo_305A3DC **v15; // x26
  unsigned __int64 v16; // x27
  signed __int64 v17; // x28
  UserServantEntity_o **m_Items; // x19
  UserServantEntity_o *v19; // x25
  RecommendedConfigSaveData_o *v20; // x24
  UserServantEntity_o **v21; // x23
  signed __int64 v22; // x19
  UserServantEntity_array *v23; // x28
  _BOOL4 v24; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  const MethodInfo_305A3DC **v26; // x20
  int v27; // w26
  bool v28; // zf
  __int64 v29; // x0
  ServantCombineControl_o *v30; // x0
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v34; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v35; // [xsp+0h] [xbp-60h]
  ServantCombineControl_o *v36; // [xsp+8h] [xbp-58h]

  if ( (byte_42B123C & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_UserServantEntity___ctor__);
    sub_B52984(&System_Comparison_UserServantEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&RecommendedConfigSaveData_TypeInfo);
    sub_B52984(&Method_ServantCombineControl_ClassRaritySort__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SvtClassAttri_TypeInfo);
    byte_42B123C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
  v9 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  selectRarityList = v9->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_55;
  size = selectRarityList->fields._size;
  if ( (int)size >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)selectRarityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v10 )
        break;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v10,
        selectRarityList->fields._items->m_Items[++v13],
        (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
      if ( (__int64)v13 >= size )
        goto LABEL_23;
      selectRarityList = v9->fields.selectRarityList;
    }
    while ( selectRarityList );
LABEL_55:
    sub_B52A5C(Instance, v4);
  }
LABEL_23:
  v36 = this;
  if ( !CombineMaterialList )
    goto LABEL_55;
  v14 = *(_QWORD *)&CombineMaterialList->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = (const MethodInfo_305A3DC **)&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__;
    v16 = 0LL;
    v17 = (int)v14;
    m_Items = CombineMaterialList->m_Items;
    v35 = v10;
    while ( 1 )
    {
      v19 = m_Items[v16];
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsAll(v9, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_55;
        Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v19, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_44;
      }
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsTargetOnly(v9, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v19 )
        goto LABEL_55;
      v20 = v9;
      v21 = m_Items;
      v22 = v17;
      v23 = CombineMaterialList;
      v24 = IsExtraClass;
      v25 = v6;
      v26 = v15;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v19, 0LL);
      if ( !v36->fields.baseData )
        goto LABEL_55;
      v27 = (int)Instance;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v36->fields.baseData, 0LL);
      v28 = v27 == (_DWORD)Instance;
      v15 = v26;
      v6 = v25;
      IsExtraClass = v24;
      CombineMaterialList = v23;
      v17 = v22;
      m_Items = v21;
      v9 = v20;
      v10 = v35;
      if ( v28 )
        goto LABEL_40;
LABEL_44:
      if ( (__int64)++v16 >= v17 )
        goto LABEL_47;
      if ( v16 >= CombineMaterialList->max_length )
      {
        v29 = sub_B52A88(Instance);
        sub_B52A28(v29, 0LL);
      }
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_55;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v19, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_44;
    }
    else
    {
LABEL_39:
      if ( !v19 )
        goto LABEL_55;
    }
LABEL_40:
    Instance = (DataManager_o *)UserServantEntity__getRarity(v19, 0LL);
    if ( !v10 )
      goto LABEL_55;
    Instance = (DataManager_o *)System_Collections_Generic_List_VoiceCondType_Type___Contains(
                                  v10,
                                  (int32_t)Instance,
                                  *v15);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_55;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
    goto LABEL_44;
  }
LABEL_47:
  if ( !v6 )
    goto LABEL_55;
  if ( !v6->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v9, 0LL) )
  {
    Instance = (DataManager_o *)v36->fields.baseData;
    if ( !Instance )
      goto LABEL_55;
    v30 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
    v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantCombineControl__MixMaterialSort(
                                                                                                   v30,
                                                                                                   (int32_t)v30,
                                                                                                   (System_Collections_Generic_List_Rarity_TYPE__o *)v10,
                                                                                                   (System_Collections_Generic_List_UserServantEntity__o *)v6,
                                                                                                   v31);
  }
  else
  {
    v34 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v34,
      (Il2CppObject *)v36,
      Method_ServantCombineControl_ClassRaritySort__,
      (const MethodInfo_2483370 *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v6,
      (System_Comparison_T__o *)v34,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_27205064(
           v36,
           (System_Collections_Generic_List_UserServantEntity__o *)v6,
           v32);
}


int32_t __fastcall ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentLvObj; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *qpLb; // x20
  UIWidget_o *v8; // x20
  int v9; // s0
  UILabel_o *expLb; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  int v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B1229 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1229 = 1;
  }
  v16 = 0;
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
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 0, v4);
  ServantCombineControl__ResetCampaign(this, v5);
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
  ServantCombineControl__SetHaveQpInfo(this, v6);
  this->fields._spendQpVal_k__BackingField = 0;
  qpLb = this->fields.qpLb;
  v16 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_39387012(
                                               (int32_t)&v16,
                                               (System_String_o *)StringLiteral_9323/*"N0"*/,
                                               0LL);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0LL);
  v8 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !v8 )
    goto LABEL_22;
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v16 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v16, 0LL);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0LL),
        ServantCombineControl__DestroyGrid(this, v14),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v15),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0LL) )
  {
LABEL_22:
    sub_B52A5C(currentLvObj, method);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0LL);
}


void __fastcall ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42B1227 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1227 = 1;
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
      sub_B52A5C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantCombineControl__InitSvtCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *selectMaterialSvtBtn; // x0
  __int64 v4; // x1
  __int64 v5; // x9
  ServantCombineControl___c_c *v6; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v9; // x21
  struct ServantCombineControl___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v27; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v33; // x0
  void *v34; // x0
  int v35; // w1
  __int64 v36; // x20
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B1226 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__);
    sub_B52984(&ServantCombineControl___c_TypeInfo);
    sub_B52984(&StringLiteral_8895/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_B52984(&StringLiteral_6906/*"GET_EXP_INFO"*/);
    sub_B52984(&StringLiteral_9329/*"NEED_QP_INFO"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1226 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29217932(102, 0LL) )
  {
LABEL_21:
    needQpLb = this->fields.needQpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6906/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        ServantCombineControl__InitMaterialSvtInfo(this, v25);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8895/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v27);
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
                            &v37,
                            combineEventList,
                            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v38 = v37;
                          while ( 1 )
                          {
                            v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v38,
                                    (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v30 )
                              break;
                            if ( !v38.fields.current )
                              sub_B52A5C(v30, v31);
                            klass_high = HIDWORD(v38.fields.current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v33 = this->fields.menuListCtr;
                              if ( !v33 )
                                sub_B52A5C(0LL, v31);
                              MenuListControl__setBannerIcon(
                                v33,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v38.fields.current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            &v38,
                            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_B52A5C(selectMaterialSvtBtn, v4);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].klass;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  v5 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&selectMaterialSvtBtn->klass->_2.bitflags2 + 1) >= (unsigned int)v5
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[v5 - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[25].monitor) == 1 )
    {
      v6 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v6 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v6->static_fields;
      _9__81_0 = static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v9 = (Il2CppObject *)static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__81_0, v9, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        v10 = ServantCombineControl___c_TypeInfo->static_fields;
        v10->__9__81_0 = _9__81_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v10->__9__81_0,
          (System_Int32_array **)_9__81_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_21;
  }
  v34 = (void *)sub_B52D50(selectMaterialSvtBtn);
  if ( v35 != 1 )
    _Unwind_Resume(v34);
  v36 = *(_QWORD *)__cxa_begin_catch(v34);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v36 )
    sub_B52A28(v36, 0LL);
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


bool __fastcall ServantCombineControl__IsLevelMax(
        ServantCombineControl_o *this,
        int32_t totalExp,
        int32_t expType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w22
  int32_t LevelMax; // w0
  int v15; // w21
  int v16; // w8
  int32_t v17; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42B123D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B123D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_23;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19, 0LL);
  if ( !v10
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v10,
          (int32_t)Instance,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_23:
    sub_B52A5C(Instance, v8);
  }
  v13 = *((_DWORD *)Instance + 64);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  v15 = LevelMax;
  if ( v13 == LevelMax )
  {
    v16 = 0;
  }
  else if ( v13 >= LevelMax )
  {
LABEL_19:
    v16 = v15;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_23;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v13, 0LL);
      if ( !Instance )
        goto LABEL_23;
      v17 = *((_DWORD *)Instance + 6);
      if ( v17 > totalExp )
      {
        v16 = *((_DWORD *)Instance + 5);
        return v16 >= v15;
      }
      if ( v17 == totalExp )
        break;
      if ( ++v13 >= v15 )
        goto LABEL_19;
    }
    v16 = *((_DWORD *)Instance + 5) + 1;
  }
  return v16 >= v15;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantCombineControl__MixMaterialSort(
        ServantCombineControl_o *this,
        int32_t baseServantClass,
        System_Collections_Generic_List_Rarity_TYPE__o *checkRarityTypeList,
        System_Collections_Generic_List_UserServantEntity__o *materialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  __int64 SvtClassId; // x0
  __int64 v12; // x1
  int32_t size; // w28
  __int64 v14; // x26
  unsigned int v15; // w8
  Il2CppClass **v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x25
  const MethodInfo_2FF1604 *v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x0
  ServantCombineControl___c_c *v20; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__113_0; // x23
  Il2CppObject *v23; // x24
  struct ServantCombineControl___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x23
  int32_t v32; // w8
  unsigned __int64 v33; // x25
  int v34; // w8
  System_Collections_Generic_List_Rarity_TYPE__o *v35; // x26
  int32_t v36; // w28
  unsigned int v37; // w19
  __int64 v38; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x24
  int v40; // w8
  unsigned int v41; // w19
  __int64 v42; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x24
  int v44; // w8
  __int64 v45; // x19
  __int64 v46; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x24
  signed __int64 v49; // [xsp+8h] [xbp-58h]

  if ( (byte_42B123F & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_UserServantEntity___ctor__);
    sub_B52984(&System_Comparison_UserServantEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&SvtClassAttri_TypeInfo);
    sub_B52984(&Method_ServantCombineControl___c__MixMaterialSort_b__113_0__);
    sub_B52984(&ServantCombineControl___c_TypeInfo);
    byte_42B123F = 1;
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !materialList )
    goto LABEL_70;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0LL;
    v15 = materialList->fields._size;
    while ( 1 )
    {
      if ( v15 <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v16 = &materialList->fields._items->obj.klass + v14;
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16[4];
      if ( !v17 )
        goto LABEL_70;
      SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v16[4], 0LL);
      if ( (_DWORD)SvtClassId == baseServantClass )
      {
        if ( !v8 )
          goto LABEL_70;
        v18 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v19 = v8;
      }
      else if ( (_DWORD)SvtClassId == 1001 )
      {
        if ( !v9 )
          goto LABEL_70;
        v18 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v19 = v9;
      }
      else
      {
        if ( !v10 )
          goto LABEL_70;
        v18 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v19 = v10;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v19, v17, v18);
      if ( (int)v14 + 1 >= size )
        break;
      v15 = materialList->fields._size;
      ++v14;
    }
  }
  if ( !v10 )
    goto LABEL_70;
  if ( v10->fields._size >= 1 )
  {
    v20 = ServantCombineControl___c_TypeInfo;
    if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v20 = ServantCombineControl___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__113_0;
    if ( !_9__113_0 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_UserServantEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__113_0,
        v23,
        Method_ServantCombineControl___c__MixMaterialSort_b__113_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_UserServantEntity___ctor__);
      v24 = ServantCombineControl___c_TypeInfo->static_fields;
      v24->__9__113_0 = (struct System_Comparison_UserServantEntity__o *)_9__113_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v24->__9__113_0,
        (System_Int32_array **)_9__113_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
      (System_Comparison_T__o *)_9__113_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !checkRarityTypeList )
    goto LABEL_70;
  v32 = checkRarityTypeList->fields._size;
  if ( v32 >= 1 )
  {
    v49 = v32;
    v33 = 0LL;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v8 )
        goto LABEL_70;
      v34 = v8->fields._size;
      v35 = checkRarityTypeList;
      v36 = checkRarityTypeList->fields._items->m_Items[v33 + 1];
      if ( v34 >= 1 )
        break;
LABEL_49:
      if ( !v9 )
        goto LABEL_70;
      v40 = v9->fields._size;
      if ( v40 >= 1 )
      {
        v41 = 0;
        do
        {
          if ( v40 <= v41 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v42 = (__int64)v9->fields._items + 8 * (int)v41;
          v43 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v42 + 32);
          if ( !v43 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v42 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v36 )
          {
            if ( !v31 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              v43,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v40 = v9->fields._size;
        }
        while ( (int)++v41 < v40 );
      }
      v44 = v10->fields._size;
      if ( v44 >= 1 )
      {
        v45 = 0LL;
        do
        {
          if ( v44 <= (unsigned int)v45 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v46 = (__int64)v10->fields._items + 8 * v45;
          v47 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v46 + 32);
          if ( !v47 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v46 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v36 )
          {
            if ( !v31 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              v47,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v44 = v10->fields._size;
        }
        while ( (int)++v45 < v44 );
      }
      if ( (__int64)++v33 >= v49 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v31;
      v32 = v35->fields._size;
      checkRarityTypeList = v35;
    }
    v37 = 0;
    while ( 1 )
    {
      if ( v34 <= v37 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v38 = (__int64)v8->fields._items + 8 * (int)v37;
      v39 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v38 + 32);
      if ( !v39 )
        break;
      SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v38 + 32), 0LL);
      if ( (_DWORD)SvtClassId == v36 )
      {
        if ( !v31 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          v39,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      }
      v34 = v8->fields._size;
      if ( (int)++v37 >= v34 )
        goto LABEL_49;
    }
LABEL_70:
    sub_B52A5C(SvtClassId, v12);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v31;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42B1235 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1235 = 1;
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
    sub_B52A5C(combineRootComponent, v3);
  }
}


void __fastcall ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t klass; // w20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v7; // x21
  unsigned __int64 v8; // x23
  unsigned __int64 max_length; // x9
  int64_t v10; // x22
  bool v11; // w5
  __int64 v12; // x0

  if ( (byte_42B1234 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3371/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_42B1234 = 1;
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
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  v7 = SelfUserGame;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v8 >= (int)max_length )
    {
      v11 = 0;
      goto LABEL_19;
    }
    if ( v8 >= max_length )
    {
      v12 = sub_B52A88(SelfUserGame);
      sub_B52A28(v12, 0LL);
    }
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)SelfUserGame,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                        v10,
                                        (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v8;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v11 = 1;
LABEL_19:
  SelfUserGame = (System_String_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B52A5C(SelfUserGame, v4);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v7,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v11,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL);
}


void __fastcall ServantCombineControl__OnClickMaterialSelectList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42B1239 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1239 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B52A5C(0LL, v3);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__OnClickRecommendedButton(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  RecommenededConfigDialog_ClickDelegate_o *v7; // x21

  if ( (byte_42B123A & 1) == 0 )
  {
    sub_B52984(&RecommenededConfigDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&SvtClassAttri_TypeInfo);
    byte_42B123A = 1;
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
  v7 = (RecommenededConfigDialog_ClickDelegate_o *)sub_B52A54(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__,
    0LL);
  if ( !recommendedConfigDialog )
LABEL_12:
    sub_B52A5C(baseData, v3);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v7, 0LL);
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

  if ( (byte_42B1228 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1228 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_B52A5C(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaiginListPerSelectSvt = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt, 0LL, v4, v5, v6, v7, v8, v9);
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
  UserServantEntity_o **p_baseData; // x20
  const MethodInfo *v11; // x2
  _BOOL8 v12; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w19
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v16; // w24
  int32_t adjustAtk; // w19
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  int32_t v19; // w24
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x24
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  unsigned int klass_high; // w8
  EventMaster_o *EventMaster; // x0
  __int64 v27; // x1
  WarEntity_o *Entity; // x0
  __int64 v29; // x1
  int64_t v30; // x19
  int64_t Time; // x0
  __int64 v32; // x1
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  const char *namespaze; // x8
  int32_t missionConditionDetailId; // w9
  int32_t SvtClassId; // w1
  __int64 v37; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x27
  int v41; // w19
  __int64 v42; // x25
  __int64 v43; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **p_campaiginListPerSelectSvt; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  _BOOL8 v52; // x0
  __int64 v53; // x1
  EventCampaignEntity_o *v54; // x22
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x23
  Il2CppClass *v58; // x8
  _DWORD *data; // x10
  int32_t target; // w9
  _DWORD *v61; // x9
  _DWORD *v62; // x9
  _DWORD *v63; // x8
  EventCampaignEntity_o *v64; // x0
  __int64 v65; // x8
  char v66; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x23
  __int64 v68; // x0
  __int64 v69; // x1
  EventCampaignEntity_o *v70; // x0
  __int64 v71; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  EventCampaignEntity_o *v75; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v78; // x23
  __int64 v79; // x0
  __int64 v80; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v81; // x21
  ServantCombineControl___c_c *v82; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__88_0; // x22
  Il2CppObject *v85; // x23
  struct ServantCombineControl___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  const MethodInfo *v93; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *v95; // x19
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v96; // x8
  MenuListControl_c *v97; // x0
  float v98; // s8
  System_Func_float__float__float__float__o *v99; // x20
  AlphaTransitionCalculator_o *v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  __int64 v107; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v108; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_List_Enumerator_T__o v110[2]; // [xsp+28h] [xbp-E8h] BYREF
  int v111; // [xsp+58h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+80h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A0h] [xbp-70h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_42B122C & 1) == 0 )
  {
    sub_B52984(&AlphaTransitionCalculator_TypeInfo);
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Comparison_EventCampaignEntity___ctor__);
    sub_B52984(&Method_System_Comparison_List_EventCampaignEntity____ctor__);
    sub_B52984(&System_Comparison_EventCampaignEntity__TypeInfo);
    sub_B52984(&System_Comparison_List_EventCampaignEntity___TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
    sub_B52984(&MenuListControl_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__);
    sub_B52984(&ServantCombineControl___c_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B122C = 1;
  }
  p_baseData = &this->fields.baseData;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  memset(&v113, 0, sizeof(v113));
  memset(&v112, 0, sizeof(v112));
  v111 = 0;
  this->fields.baseData = usrSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v11);
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
    v16 = secondMaxAdjustAtk[1];
  else
    v16 = maxAjustAtk[1];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41786400(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * adjustHp,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * v16,
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
    v19 = secondMaxAdjustAtk[0];
  else
    v19 = maxAjustAtk[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41786400(
    currentAdjustAtkIconLabel,
    45,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * adjustAtk,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * v19,
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
  ServantCombineControl__CheckConductionWire(this, v20);
  combineInfoComp = (struct CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)combineInfoComp,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !combineInfoComp )
    goto LABEL_165;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)combineInfoComp, 0LL);
  if ( !CombineEventCampaigns )
    goto LABEL_151;
  v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v109,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v108 = CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v110,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v113 = v110[0];
LABEL_27:
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v113,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v22 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v113.fields.current;
    if ( !v113.fields.current )
      sub_B52A5C(v22, v23);
    klass_high = HIDWORD(v113.fields.current[1].klass);
    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000034LL) != 0 )
    {
      EventMaster = ServantCombineControl__get_EventMaster(this, v23);
      if ( !EventMaster )
        sub_B52A5C(0LL, v27);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)EventMaster,
                 current->fields.missionTargetId,
                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_B52A5C(0LL, v29);
      v30 = *(_QWORD *)&Entity->fields.eventId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( v30 >= Time )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B52A5C(Time, v32);
        namespaze = klass->_1.namespaze;
        missionConditionDetailId = current->fields.missionConditionDetailId;
        if ( namespaze )
        {
          if ( (unsigned int)(missionConditionDetailId - 32) >= 2 )
          {
            if ( missionConditionDetailId == 27 )
            {
              if ( !usrSvtData )
                sub_B52A5C(Time, v32);
              if ( UserServantEntity__IsExchangeSvt(usrSvtData, 0LL) )
              {
                if ( !v109 )
                  sub_B52A5C(0LL, v39);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v109,
                  current,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                break;
              }
            }
            else if ( (int)namespaze >= 1 )
            {
              v40 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v40 >= (unsigned int)namespaze )
                {
                  v107 = sub_B52A88(Time);
                  sub_B52A28(v107, 0LL);
                }
                if ( !usrSvtData )
                  sub_B52A5C(Time, v32);
                v41 = *((_DWORD *)&klass->_1.byval_arg.data + v40);
                v43 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
                v42 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v116.fields.currentCryptoKey = v43;
                *(_QWORD *)&v116.fields.fakeValue = v42;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v116, 0LL);
                if ( v41 == (_DWORD)Time )
                  break;
                LODWORD(namespaze) = klass->_1.namespaze;
                if ( (int)++v40 >= (int)namespaze )
                  goto LABEL_27;
              }
              v38 = v109;
              if ( !v109 )
                sub_B52A5C(0LL, v32);
LABEL_62:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v38,
                current,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            }
          }
          else
          {
            if ( !usrSvtData )
              sub_B52A5C(Time, v32);
            SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0LL);
            if ( (System_Array__IndexOf_int_(
                    (System_Int32_array *)klass,
                    SvtClassId,
                    (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              v38 = v109;
              if ( !v109 )
                sub_B52A5C(0LL, v37);
              goto LABEL_62;
            }
          }
        }
        else if ( (missionConditionDetailId & 0xFFFFFFFE) == 4 )
        {
          v38 = v109;
          if ( !v109 )
            sub_B52A5C(0LL, v32);
          goto LABEL_62;
        }
      }
    }
  }
  *((_DWORD *)&v110[1].fields.list + v111++) = 602;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v113,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v111 && *((_DWORD *)&v110[0].fields.current + v111 + 1) == 602 )
    --v111;
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  p_campaiginListPerSelectSvt = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)v44;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt,
    (System_Int32_array **)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  combineInfoComp = (struct CombineInfoComponent_o *)v109;
  if ( !v109 )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v110,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v109,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v113 = v110[0];
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v113,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v52 )
      break;
    if ( !*p_campaiginListPerSelectSvt )
      sub_B52A5C(v52, v53);
    v54 = (EventCampaignEntity_o *)v113.fields.current;
    if ( (*p_campaiginListPerSelectSvt)->fields._size <= 0 )
    {
      v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v67,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v54 )
        sub_B52A5C(v68, v69);
      v70 = EventCampaignEntity__Clone(v54, 0LL);
      if ( !v67 )
        sub_B52A5C(v70, v70);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v67,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      v72 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_B52A5C(0LL, v71);
LABEL_107:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v72,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
    else
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v110,
        *p_campaiginListPerSelectSvt,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v112 = v110[0];
      while ( 1 )
      {
        v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v112,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v55 )
          break;
        if ( !v54 )
          sub_B52A5C(v55, v56);
        v57 = v112.fields.current;
        if ( !v112.fields.current )
          sub_B52A5C(v55, v56);
        if ( !LODWORD(v112.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v58 = v112.fields.current[1].klass;
        data = v58->_1.byval_arg.data;
        if ( !data )
          sub_B52A5C(v55, v56);
        if ( v54->fields.target == data[5] )
        {
LABEL_103:
          v64 = EventCampaignEntity__Clone(v54, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          v65 = v111;
          v66 = 1;
          goto LABEL_109;
        }
        target = v54->fields.target;
        if ( target == 4 )
        {
          if ( !LODWORD(v112.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( data[5] == 32 )
            goto LABEL_103;
          target = v54->fields.target;
        }
        if ( target == 32 )
        {
          if ( !LODWORD(v112.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v61 = v58->_1.byval_arg.data;
          if ( !v61 )
            sub_B52A5C(v55, v56);
          if ( v61[5] == 4 )
            goto LABEL_103;
          target = v54->fields.target;
        }
        if ( target == 5 )
        {
          if ( !LODWORD(v112.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v62 = v58->_1.byval_arg.data;
          if ( !v62 )
            sub_B52A5C(v55, v56);
          if ( v62[5] == 33 )
            goto LABEL_103;
          target = v54->fields.target;
        }
        if ( target == 33 )
        {
          if ( !LODWORD(v112.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v63 = v58->_1.byval_arg.data;
          if ( !v63 )
            sub_B52A5C(v55, v56);
          if ( v63[5] == 5 )
            goto LABEL_103;
        }
      }
      v65 = v111;
      v66 = 0;
LABEL_109:
      *((_DWORD *)&v110[1].fields.list + v65) = 896;
      ++v111;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v112,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v111 && *((_DWORD *)&v110[0].fields.current + v111 + 1) == 896 )
        --v111;
      if ( (v66 & 1) == 0 )
      {
        v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v67,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !v54 )
          sub_B52A5C(v73, v74);
        v75 = EventCampaignEntity__Clone(v54, 0LL);
        if ( !v67 )
          sub_B52A5C(v75, v75);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v67,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        v72 = *p_campaiginListPerSelectSvt;
        if ( !*p_campaiginListPerSelectSvt )
          sub_B52A5C(0LL, v76);
        goto LABEL_107;
      }
    }
  }
  *((_DWORD *)&v110[1].fields.list + v111++) = 962;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v113,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v111 && *((_DWORD *)&v110[0].fields.current + v111 + 1) == 962 )
    --v111;
  combineInfoComp = (struct CombineInfoComponent_o *)*p_campaiginListPerSelectSvt;
  if ( !*p_campaiginListPerSelectSvt )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v110,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineInfoComp,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v112 = v110[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v112,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
  {
    v77 = v112.fields.current;
    v78 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v78,
      (Il2CppObject *)this,
      Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventCampaignEntity___ctor__);
    if ( !v77 )
      sub_B52A5C(v79, v80);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v77,
      (System_Comparison_T__o *)v78,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  }
  *((_DWORD *)&v110[1].fields.list + v111++) = 1026;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v112,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  CombineEventCampaigns = v108;
  if ( v111 && *((_DWORD *)&v110[0].fields.current + v111 + 1) == 1026 )
    --v111;
  v81 = *p_campaiginListPerSelectSvt;
  if ( !v81 )
    goto LABEL_165;
  if ( v81->fields._size < 1 )
    goto LABEL_151;
  v82 = ServantCombineControl___c_TypeInfo;
  if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v82 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v82->static_fields;
  _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v82);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v85 = (Il2CppObject *)static_fields->__9;
    _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_List_EventCampaignEntity___TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__88_0,
      v85,
      Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_List_EventCampaignEntity____ctor__);
    v86 = ServantCombineControl___c_TypeInfo->static_fields;
    v86->__9__88_0 = (struct System_Comparison_List_EventCampaignEntity___o *)_9__88_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v86->__9__88_0,
      (System_Int32_array **)_9__88_0,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v81,
    (System_Comparison_T__o *)_9__88_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
  campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !campaiginListPerSelectSvt )
    goto LABEL_165;
  if ( !campaiginListPerSelectSvt->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v95 = campaiginListPerSelectSvt->fields._items->m_Items[0];
  if ( !v95 )
    goto LABEL_165;
  if ( !v95->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  ServantCombineControl__SetupCampaign(this, v95->fields._items->m_Items[0], v93);
LABEL_151:
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaign;
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)combineInfoComp,
                                                       0LL);
  if ( CombineEventCampaigns )
  {
    v96 = this->fields.campaiginListPerSelectSvt;
    if ( !v96 )
      goto LABEL_165;
    v12 = v96->fields._size > 0;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  else
  {
    v12 = 0LL;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v12, 0LL);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v97 = MenuListControl_TypeInfo;
  if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v97 = MenuListControl_TypeInfo;
  }
  v98 = ChangedFPSUtil__CovertFrameNumToSecond(v97->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v99 = ExtraEasing__AsymptoticSeriesFloat(
          MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
          (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
          0LL);
  v100 = (AlphaTransitionCalculator_o *)sub_B52A54(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v100, v98, v99, 0LL);
  this->fields.campaignAlphaCalculator = v100;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.campaignAlphaCalculator,
    (System_Int32_array **)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_165:
    sub_B52A5C(combineInfoComp, v12);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x28
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  System_String_o *checkLv; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Int64_array *v20; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v22; // x20
  struct UserServantEntity_o *baseData; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  System_Collections_Generic_List_long__o *v26; // x24
  unsigned __int64 v27; // x25
  struct System_Int64_array *v28; // x8
  int64_t v29; // x26
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v32; // x27
  UnityEngine_Transform_o *v33; // x22
  int v34; // s0
  SetCombineData_o *v37; // x23
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v39; // x27
  MaterialSvtInfo_o *v40; // x28
  MaterialSvtInfo_ClickDelegate_o *v41; // x22
  UserServantEntity_o *Entity; // x27
  ServantLimitMaster_o *v43; // x28
  __int64 v44; // x21
  __int64 v45; // x22
  int32_t v46; // w21
  struct System_Int64_array *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct System_Int64_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v65; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x23
  __int64 v67; // x21
  __int64 v68; // x22
  int32_t monitor_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v71; // x2
  int32_t v72; // w23
  struct UserServantEntity_o *v73; // x8
  UILabel_o *currentLvLb; // x21
  UILabel_o *increLvLb; // x21
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v78; // x21
  Il2CppObject *v79; // x0
  UserServantEntity_o *v80; // x8
  __int64 v81; // x21
  __int64 v82; // x22
  int32_t v83; // w24
  __int64 v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UserServantEntity_o *v91; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v93; // x8
  WebViewObject_o *Component_WebViewObject; // x22
  int v95; // s0
  WebViewObject_o *v99; // x22
  int v100; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v105; // x0
  int v106; // w9
  int32_t v107; // w22
  int32_t StatusUpAdjustHp; // w8
  int v109; // w21
  int getHpAdjustVal; // w23
  int32_t v111; // w22
  int32_t v112; // w22
  int32_t v113; // w23
  int32_t v114; // w1
  BalanceConfig_c *v115; // x0
  int32_t adjustAtk; // w21
  int v117; // w9
  int32_t v118; // w24
  int32_t StatusUpAdjustAtk; // w8
  int v120; // w21
  int getAtkAdjustVal; // w23
  int32_t v122; // w24
  int32_t v123; // w20
  int32_t v124; // w21
  int32_t v125; // w1
  UIWidget_o *v126; // x20
  int v127; // s0
  const MethodInfo *v131; // x1
  int v132; // s0
  __int64 v136; // x0
  int32_t targetLimitCnt; // [xsp+14h] [xbp-ACh]
  UserServantEntity_o **p_baseData; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_long__o *v139; // [xsp+20h] [xbp-A0h]
  int32_t increAmount; // [xsp+28h] [xbp-98h] BYREF
  int32_t v141; // [xsp+2Ch] [xbp-94h] BYREF
  __int64 v142; // [xsp+30h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+38h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+40h] [xbp-80h] BYREF
  __int64 lateExp; // [xsp+48h] [xbp-78h] BYREF
  System_String_array *skillNameList; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_42B1230 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_B52984(&Method_CombineMenuControl_OnClickMaterial__);
    sub_B52984(&CombineSvtData_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    sub_B52984(&StringLiteral_7316/*"INCREMENT_SVTLEVEL"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1230 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  skillNameList = 0LL;
  idList = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  lateExp = 0LL;
  v142 = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v141 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_140;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (System_Int32_array **)materialUsrSvtIdList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v20 = v3->fields.materialUsrSvtIdList;
  if ( !v20 )
    goto LABEL_140;
  baseSvtData = v3->fields.baseSvtData;
  v22 = *(_QWORD *)&v20->max_length;
  this->fields.baseData = baseSvtData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)baseSvtData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_140;
  v25 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v149.fields.currentCryptoKey = v25;
  *(_QWORD *)&v149.fields.fakeValue = v24;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v149, 0LL);
  v26 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v139 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v139,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v22 >= 1 )
  {
    conductionWireInfo = this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v27 = 0LL;
    do
    {
      v28 = v3->fields.materialUsrSvtIdList;
      if ( !v28 )
        goto LABEL_140;
      if ( v27 >= v28->max_length )
        goto LABEL_141;
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_140;
      v29 = v28->m_Items[v27];
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
      v32 = conductionWireInfo;
      v33 = UnityEngine_GameObject__get_transform(conductionWireInfo, 0LL);
      *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v33 )
        goto LABEL_140;
      v37 = v3;
      UnityEngine_Transform__set_localPosition(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v153.fields.x = 0.5;
      v153.fields.y = 0.5;
      v153.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v153, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v32,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v39 = this->fields.baseData;
      v40 = (MaterialSvtInfo_o *)Component_srcLineSprite;
      v41 = (MaterialSvtInfo_ClickDelegate_o *)sub_B52A54(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(v41, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
      if ( !v40 )
        goto LABEL_140;
      MaterialSvtInfo__setMaterialSvtInfo(v40, v27, v39, v29, 1, 0, v41, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_140;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)conductionWireInfo,
                 v29,
                 (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_140;
      v43 = (ServantLimitMaster_o *)conductionWireInfo;
      v44 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v150.fields.currentCryptoKey = v44;
      *(_QWORD *)&v150.fields.fakeValue = v45;
      v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v150, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                         Entity->fields.limitCount,
                                                         0LL);
      if ( !v43 )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)ServantLimitMaster__GetEntity(
                                                         v43,
                                                         v46,
                                                         (int32_t)conductionWireInfo,
                                                         0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v3 = v37;
      if ( SLODWORD(conductionWireInfo[1].klass) >= 4 )
      {
        if ( !v26 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v26,
          v29,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( UserServantEntity__isExceeded(Entity, 0LL) )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)v139;
        if ( !v139 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v139,
          v29,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsExchangeSvt(Entity, 0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      ++v27;
    }
    while ( (__int64)v27 < (int)v22 );
    if ( !v26 )
      goto LABEL_140;
    v47 = System_Collections_Generic_List_long___ToArray(
            v26,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v47;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.highRarityList,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    conductionWireInfo = (UnityEngine_GameObject_o *)v139;
    if ( !v139 )
      goto LABEL_140;
    v54 = System_Collections_Generic_List_long___ToArray(
            v139,
            (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v54;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.exceededCheckList,
      (System_Int32_array **)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v37->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v141 = spendQp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_39387012(
                                                       (int32_t)&v141,
                                                       (System_String_o *)StringLiteral_9323/*"N0"*/,
                                                       0LL);
    if ( !qpLb )
      goto LABEL_140;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v37->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v141 = getExp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v141, 0LL);
    if ( !expLb )
      goto LABEL_140;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    v65 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)conductionWireInfo;
    v67 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
    v68 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v151.fields.currentCryptoKey = v67;
    *(_QWORD *)&v151.fields.fakeValue = v68;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                       v151,
                                                       0LL);
    if ( !v66 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v66,
                                                       (int32_t)conductionWireInfo,
                                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    checkLv = (System_String_o *)(unsigned int)this->fields.checkLv;
    v72 = LevelMax;
    if ( (_DWORD)checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, (int32_t)checkLv, v71) )
        LODWORD(checkLv) = this->fields.checkLv;
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
    v73 = this->fields.baseData;
    if ( !v73 )
      goto LABEL_140;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v73 + 256, 0LL);
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
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_7316/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    conductionWireInfo = (UnityEngine_GameObject_o *)System_String__Format(v78, v79, 0LL);
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
        v136 = sub_B52A88(conductionWireInfo);
        sub_B52A28(v136, 0LL);
      }
      checkLv = skillNameList->m_Items[0];
      if ( checkLv )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
        if ( !conductionWireInfo )
          goto LABEL_140;
        UILabel__set_text((UILabel_o *)conductionWireInfo, checkLv, 0LL);
      }
    }
    v80 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v81 = *(_QWORD *)&v80->fields.limitCount.fields.currentCryptoKey;
    v82 = *(_QWORD *)&v80->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v152.fields.currentCryptoKey = v81;
    *(_QWORD *)&v152.fields.fakeValue = v82;
    v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v152, 0LL);
    v84 = sub_B52A54(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v84, 0LL);
    if ( !v84 )
      goto LABEL_140;
    v91 = *p_baseData;
    *(_QWORD *)(v84 + 16) = *p_baseData;
    sub_B52920((BattleServantConfConponent_o *)(v84 + 16), (System_Int32_array **)v91, v85, v86, v87, v88, v89, v90);
    increLv = this->fields.increLv;
    *(_DWORD *)(v84 + 32) = v72;
    *(_DWORD *)(v84 + 24) = increLv;
    *(_DWORD *)(v84 + 28) = v83;
    v93 = this->fields.baseData;
    if ( !v93 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp + 1,
      (int32_t *)&lateExp,
      this->fields.totalExp,
      v93->fields.lv,
      v72,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v84 + 36) = HIDWORD(lateExp);
    *(_DWORD *)(v84 + 40) = lateExp;
    *(_DWORD *)(v84 + 44) = afterAtk[1];
    *(_DWORD *)(v84 + 48) = v3->fields.getHpAdjustVal;
    *(_DWORD *)(v84 + 52) = afterAtk[0];
    *(_DWORD *)(v84 + 56) = v3->fields.getAtkAdjustVal;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v84,
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
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v95 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v95, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v99 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)conductionWireInfo,
            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v100 = UnityEngine_Color__get_white(0LL);
    if ( !v99 )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)v99, *(UnityEngine_Color_o *)&v100, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v105 = BalanceConfig_TypeInfo;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v105 = BalanceConfig_TypeInfo;
      }
      v106 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v106 = 0;
    }
    v107 = maxAjustAtk[1];
    StatusUpAdjustHp = v105->static_fields->StatusUpAdjustHp;
    v109 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v142) = v109;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( v106 && !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v109 >= StatusUpAdjustHp * v107 )
    {
      v111 = secondMaxAdjustAtk[1];
      if ( (BYTE3(v105->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    else
    {
      v111 = maxAjustAtk[1];
      if ( (BYTE3(v105->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
LABEL_102:
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
    v112 = StatusUpAdjustHp * v111;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v113 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v109;
    UIIconLabel__Set_41786400((UIIconLabel_o *)conductionWireInfo, 44, v113, v112, 0, 0LL, 0, 0, 0, 0LL);
    if ( !System_Int32__Equals_39386936((int32_t)&v142 + 4, v113, 0LL) )
    {
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
      if ( !conductionWireInfo )
        goto LABEL_140;
      if ( v113 >= v112 )
        v114 = v112;
      else
        v114 = v113;
      UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v114, v112, v113 >= v112, 0LL);
    }
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpMaxLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    v115 = BalanceConfig_TypeInfo;
    adjustAtk = (*p_baseData)->fields.adjustAtk;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v115 = BalanceConfig_TypeInfo;
      }
      v117 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v117 = 0;
    }
    v118 = maxAjustAtk[0];
    StatusUpAdjustAtk = v115->static_fields->StatusUpAdjustAtk;
    v120 = StatusUpAdjustAtk * adjustAtk;
    LODWORD(v142) = v120;
    getAtkAdjustVal = v3->fields.getAtkAdjustVal;
    if ( v117 && !v115->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v115);
      v115 = BalanceConfig_TypeInfo;
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    if ( v120 >= StatusUpAdjustAtk * v118 )
    {
      v122 = secondMaxAdjustAtk[0];
      if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_125:
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
        v123 = StatusUpAdjustAtk * v122;
        if ( !conductionWireInfo )
          goto LABEL_140;
        v124 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v120;
        UIIconLabel__Set_41786400((UIIconLabel_o *)conductionWireInfo, 45, v124, v123, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_39386936((int32_t)&v142, v124, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_140;
          if ( v124 >= v123 )
            v125 = v123;
          else
            v125 = v124;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v125, v123, v124 >= v123, 0LL);
        }
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkMaxLabel;
        if ( conductionWireInfo )
        {
          UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v126 = (UIWidget_o *)this->fields.qpLb;
          if ( this->fields.haveQpVal >= this->fields._spendQpVal_k__BackingField )
          {
            *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_white(0LL);
            if ( v126 )
            {
              UIWidget__set_color(v126, *(UnityEngine_Color_o *)&v132, 0LL);
              this->fields._IsExeCombine_k__BackingField = 1;
              goto LABEL_138;
            }
          }
          else
          {
            *(UnityEngine_Color_o *)&v127 = UnityEngine_Color__get_red(0LL);
            if ( v126 )
            {
              UIWidget__set_color(v126, *(UnityEngine_Color_o *)&v127, 0LL);
              this->fields._IsExeCombine_k__BackingField = 0;
LABEL_138:
              ServantCombineControl__SetExeBtnState(this, v131);
              return;
            }
          }
        }
LABEL_140:
        sub_B52A5C(conductionWireInfo, checkLv);
      }
    }
    else
    {
      v122 = maxAjustAtk[0];
      if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_125;
    }
    if ( !v115->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v115);
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    goto LABEL_125;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_27205064(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  int64_t Instance; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WarQuestSelectionMaster_o *v9; // x21
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x25
  float v12; // s0
  float v13; // s8
  float v14; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v16; // x25
  __int64 v17; // x26
  float v18; // s9
  WarEntity_o *Entity; // x26
  UserServantEntity_o *v20; // x27
  int32_t SvtClassId; // w0
  int32_t size; // w25
  __int64 v23; // x22
  int v24; // w21
  int v25; // w23
  unsigned int v26; // w8
  const MethodInfo *v27; // x3
  struct UserServantEntity_o *v28; // x8
  System_Collections_Generic_List_UserServantEntity__o *v29; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x28
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v33; // w0
  int64_t v34; // x27
  CombineMaterialEntity_o *v35; // x26
  int v36; // w8
  int value; // w26
  BalanceConfig_c *v38; // x0
  ServantCombineControl_c *v39; // x8
  int SameClassExp; // w27
  float FIXED_VAL; // s11
  double v42; // d0
  int v43; // w27
  int v44; // w27
  int32_t CombineQp; // w0
  int v46; // w26
  __int64 v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  int32_t v55; // w8
  bool isAdjustAtkMax; // w8
  bool isSecondAdjustAtkMax; // w8
  System_Collections_Generic_List_long__o *v58; // x20
  int v59; // w21
  __int64 v60; // x22
  unsigned int v61; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v62; // x8
  __int128 v63; // q0
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  int v72; // [xsp+4h] [xbp-DCh]
  DataMasterBase_WarMaster__WarEntity__int__o *v73; // [xsp+8h] [xbp-D8h]
  int32_t expType; // [xsp+14h] [xbp-CCh]
  int64_t v75; // [xsp+18h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v76; // [xsp+20h] [xbp-C0h]
  CombineMaterialMaster_o *v77; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+50h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_42B123E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&System_Math_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&ServantCombineControl_TypeInfo);
    sub_B52984(&SetCombineData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B123E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v9 = DataManager__GetMasterData_WarQuestSelectionMaster_(
         (DataManager_o *)Instance,
         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_89;
  v76 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  combineEventList = menuListCtr->fields.combineEventList;
  v12 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  v13 = v12;
  v77 = (CombineMaterialMaster_o *)v9;
  v14 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_89;
  v17 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v18 = v14;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v17;
  *(_QWORD *)&v80.fields.fakeValue = v16;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v80, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_89;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_89;
  v20 = this->fields.baseData;
  v75 = Instance;
  if ( !v20 )
    goto LABEL_89;
  expType = HIDWORD(Entity[1].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v20, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v20, SvtClassId, 0LL);
  v72 = Instance;
  if ( !targetMaterialList )
    goto LABEL_89;
  size = targetMaterialList->fields._size;
  if ( size < 1 )
  {
    v25 = 0;
    v24 = 0;
  }
  else
  {
    v73 = MasterData_WarQuestSelectionMaster;
    v23 = 0LL;
    v24 = 0;
    v25 = 0;
    v26 = targetMaterialList->fields._size;
    while ( 1 )
    {
      if ( v26 <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v29 = targetMaterialList;
      v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)targetMaterialList->fields._items->m_Items[v23];
      if ( !v30 )
        goto LABEL_89;
      klass = v30[2].klass;
      monitor = v30[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v81.fields.currentCryptoKey = klass;
      *(_QWORD *)&v81.fields.fakeValue = monitor;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v81, 0LL);
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v73,
                            v33,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_89;
      v34 = Instance;
      Instance = (int64_t)v77;
      if ( !v77 )
        goto LABEL_89;
      v35 = CombineMaterialMaster__GetEntity(v77, *(_DWORD *)(v34 + 136), v30[6].fields.missionTargetId, 0LL);
      Instance = (int64_t)v76;
      if ( !v76 )
        goto LABEL_89;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v76,
                            *(_DWORD *)(v34 + 80),
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v35 || !Instance )
        goto LABEL_89;
      v36 = *(_DWORD *)(Instance + 52);
      value = v35->fields.value;
      if ( v36 == 3 )
        goto LABEL_40;
      if ( v36 == v72 )
      {
        Instance = (int64_t)this->fields.baseData;
        if ( !Instance )
          goto LABEL_89;
        v43 = *(_DWORD *)(v34 + 80);
        if ( v43 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL) )
        {
LABEL_40:
          v38 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v38 = BalanceConfig_TypeInfo;
          }
          v39 = ServantCombineControl_TypeInfo;
          SameClassExp = v38->static_fields->SameClassExp;
          if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v39 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v39->static_fields->FIXED_VAL;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v42 = ceil((double)value * (double)SameClassExp / FIXED_VAL);
          if ( v42 == INFINITY )
            v42 = -INFINITY;
          value = (int)v42;
        }
      }
      Instance = UnityEngine_Mathf__CeilToInt(v13 * (float)value, 0LL);
      if ( !this->fields.baseData )
        goto LABEL_89;
      v44 = Instance;
      CombineQp = UserServantEntity__getCombineQp(this->fields.baseData, 0LL);
      Instance = UnityEngine_Mathf__CeilToInt(v18 * (float)CombineQp, 0LL);
      if ( !v75 )
        goto LABEL_89;
      v46 = Instance + v25;
      if ( (int)Instance + v25 > *(_DWORD *)(v75 + 96) )
        break;
      if ( !v5 )
        goto LABEL_89;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v30,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      v28 = this->fields.baseData;
      if ( !v28 )
        goto LABEL_89;
      v24 += v44;
      if ( ServantCombineControl__IsLevelMax(this, v28->fields.exp + v24, expType, v27) )
        goto LABEL_61;
      targetMaterialList = v29;
      Instance = (int64_t)ServantCombineControl_TypeInfo;
      if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        Instance = (int64_t)ServantCombineControl_TypeInfo;
      }
      if ( (_DWORD)v23 == *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL) - 1 || (int)v23 + 1 >= size )
        goto LABEL_61;
      v26 = v29->fields._size;
      ++v23;
      v25 = v46;
    }
    this->fields.isQpCondClear = 0;
  }
  v46 = v25;
  if ( !v5 )
    return 0LL;
LABEL_61:
  if ( v5->fields._size < 1 )
    return 0LL;
  v47 = sub_B52A54(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v47, 0LL);
  if ( !v47 )
    goto LABEL_89;
  v54 = (System_Int32_array **)this->fields.baseData;
  *(_QWORD *)(v47 + 16) = v54;
  sub_B52920((BattleServantConfConponent_o *)(v47 + 16), v54, v48, v49, v50, v51, v52, v53);
  v55 = v5->fields._size;
  *(_DWORD *)(v47 + 28) = v46;
  *(_DWORD *)(v47 + 32) = v24;
  *(_QWORD *)(v47 + 48) = 0LL;
  *(_DWORD *)(v47 + 24) = v55;
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
  *(_BYTE *)(v47 + 44) = isAdjustAtkMax;
  Instance = (int64_t)this->fields.baseData;
  if ( !Instance )
LABEL_89:
    sub_B52A5C(Instance, v7);
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
  *(_BYTE *)(v47 + 45) = isSecondAdjustAtkMax;
  v58 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v58,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v59 = v5->fields._size;
  if ( v59 >= 1 )
  {
    v60 = 0LL;
    v61 = v5->fields._size;
    while ( 1 )
    {
      if ( v61 <= (unsigned int)v60 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v62 = v5->fields._items->m_Items[v60];
      if ( !v62 )
        goto LABEL_89;
      v63 = *(_OWORD *)&v62->fields.addCount;
      *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v62->fields.missionTargetId;
      *(_OWORD *)&v79.fields.fakeValue = v63;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v78 = v79;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v78, 0LL);
      if ( !v58 )
        goto LABEL_89;
      System_Collections_Generic_List_long___Add(
        v58,
        Instance,
        (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      if ( (int)v60 + 1 >= v59 )
        goto LABEL_87;
      v61 = v5->fields._size;
      ++v60;
    }
  }
  if ( !v58 )
    goto LABEL_89;
LABEL_87:
  v64 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                 v58,
                                 (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
  *(_QWORD *)(v47 + 56) = v64;
  sub_B52920((BattleServantConfConponent_o *)(v47 + 56), v64, v65, v66, v67, v68, v69, v70);
  return (SetCombineData_o *)v47;
}


void __fastcall ServantCombineControl__SetCombineNullData(ServantCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  ServantCombineControl__DestroyGrid(this, method);
  ServantCombineControl__InitInfo(this, v3);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    sub_B52A5C(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
  ServantCombineControl__SetBaseSvtCardImg(this, this->fields.baseData, v6);
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 1, v7);
}


void __fastcall ServantCombineControl__SetDispCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  ServantCombineControl_o *v4; // x20
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  ServantCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_24904472; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_42B122F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantCombineControl_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B122F = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
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
  p_charaGraph = (ServantCombineControl_o **)&v4->fields.charaGraph;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_42B1237 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_42B1237 = 1;
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


void __fastcall ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_42B122A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B122A = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39387012((int)this + 476, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B52A5C(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B52A5C(this, isEnabled);
LABEL_8:
  UICommonButton__SetButtonEnable(recommendedButton, isSelectBase & 1, 1, 0LL);
}


void __fastcall ServantCombineControl__SetMaterialToCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  ServantCombineControl__SetCombineData(this, recommendedCombineData, method);
  ServantCombineControl__SetStateInfoMsg(this, 2, v4);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B52A5C(0LL, v5);
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  System_Int32_array **RecommendedCombineData; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v21; // x2
  WebViewManager_o *v22; // x19
  System_String_o *v23; // x20
  ServantCombineControl___c_c *v24; // x8
  struct ServantCombineControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__107_1; // x22
  System_String_o *v27; // x21
  Il2CppObject *v28; // x23
  struct ServantCombineControl___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t v36; // w8
  CommonUI_o *v37; // x0
  System_String_o *v38; // x1
  System_String_o *v39; // x2
  CommonUI_o *Instance; // x19
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  CommonConfirmDialog_ClickDelegate_o *v44; // x24
  System_String_o *v45; // x21

  if ( (byte_42B123B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__);
    sub_B52984(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__);
    sub_B52984(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__);
    sub_B52984(&ServantCombineControl___c__DisplayClass107_0_TypeInfo);
    sub_B52984(&ServantCombineControl___c_TypeInfo);
    sub_B52984(&StringLiteral_11145/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/);
    sub_B52984(&StringLiteral_11144/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_B52984(&StringLiteral_11143/*"RECOMMENDED_NOT_EXIST_MSG"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B123B = 1;
  }
  v3 = sub_B52A54(ServantCombineControl___c__DisplayClass107_0_TypeInfo);
  ServantCombineControl___c__DisplayClass107_0___ctor((ServantCombineControl___c__DisplayClass107_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = (System_Int32_array **)ServantCombineControl__GetRecommendedCombineData(this, v12);
  *(_QWORD *)(v3 + 24) = RecommendedCombineData;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), RecommendedCombineData, v14, v15, v16, v17, v18, v19);
  isQpCondClear = this->fields.isQpCondClear;
  if ( *(_QWORD *)(v3 + 24) )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
        ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v3 + 24), v21);
        return;
      }
LABEL_33:
      sub_B52A5C(recommendedConfigDialog, v5);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11145/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v44 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v44,
      (Il2CppObject *)v3,
      Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__OpenConfirmDialog_18157444(Instance, (System_String_o *)StringLiteral_1/*""*/, v41, v42, v43, v44, 0, 0, 0, 0LL);
  }
  else
  {
    v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( isQpCondClear )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11143/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                0LL);
      v23 = (System_String_o *)recommendedConfigDialog;
      v24 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v24 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__107_1 = static_fields->__9__107_1;
      v27 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__107_1 )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__107_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__107_1, v28, Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, 0LL);
        v29 = ServantCombineControl___c_TypeInfo->static_fields;
        v29->__9__107_1 = _9__107_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v29->__9__107_1,
          (System_Int32_array **)_9__107_1,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( !v22 )
        goto LABEL_33;
      v36 = 25;
      v37 = (CommonUI_o *)v22;
      v38 = v27;
      v39 = v23;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11144/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
      _9__107_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__107_1,
        (Il2CppObject *)v3,
        Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__,
        0LL);
      if ( !v22 )
        goto LABEL_33;
      v37 = (CommonUI_o *)v22;
      v39 = v45;
      v38 = (System_String_o *)StringLiteral_1/*""*/;
      v36 = 28;
    }
    CommonUI__OpenNotificationDialog(v37, v38, v39, _9__107_1, -1, 0, 0, 0, 0, v36, 0, 0, 0LL, 0LL);
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
    sub_B52A5C(preSelectBaseLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetStateInfoMsg(
        ServantCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
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
  if ( (byte_42B1238 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_7322/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_B52984(&StringLiteral_7331/*"INFO_MSG_SVTCOMBINE_BASE"*/);
    sub_B52984(&StringLiteral_5805/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B52984(&StringLiteral_12304/*"SHORT_QP_INFO_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1238 = 1;
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
      v11 = &StringLiteral_7322/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
    v11 = &StringLiteral_7331/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v11, 0LL);
LABEL_27:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetupCampaign(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *eventInfoData,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
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
  UILabel_o *campaignLabel; // x20
  __int64 v18; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B122D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_19814/*"img_txt_campaign_"*/);
    byte_42B122D = 1;
  }
  v18 = 0LL;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  if ( !eventInfoData )
LABEL_22:
    sub_B52A5C(Instance, v6);
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
    HIDWORD(v18) = v14;
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
  v16 = System_Int32__ToString((int32_t)&v18 + 4, 0LL);
  Instance = System_String__Concat_44568316((System_String_o *)StringLiteral_19814/*"img_txt_campaign_"*/, v16, 0LL);
  if ( !campaign )
    goto LABEL_22;
  UISprite__set_spriteName(campaign, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaign;
  if ( !Instance )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, void *))Instance->klass[1]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[1]._1.interopData);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)EventCampaignMaster__getData(
                                  (EventCampaignMaster_o *)Instance,
                                  eventInfoData->fields.eventId,
                                  0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v18) = SLODWORD(Instance[2].klass) / 1000;
  campaignLabel = this->fields.campaignLabel;
  Instance = System_Int32__ToString((int32_t)&v18, 0LL);
  if ( !campaignLabel )
    goto LABEL_22;
  UILabel__set_text(campaignLabel, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaignLabel;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v19.fields.x) = v11;
  v19.fields.y = v12;
  v19.fields.z = v13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v19, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1

  if ( (byte_42B1233 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3371/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_42B1233 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !this->fields.exeCombineDlg )
    sub_B52A5C(SelfUserGame, v5);
  SetRarityDialogControl__SetExceedMaterialInfo(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    this->fields.exceededCheckList,
    v3,
    this->fields._spendQpVal_k__BackingField,
    SelfUserGame->fields.qp,
    0LL);
}


void __fastcall ServantCombineControl__ShowRareSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  DataManager_o *SelfUserGame; // x0
  __int64 v5; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int32_t masterLoadThreads; // w21
  unsigned __int64 v8; // x23
  unsigned __int64 max_length; // x9
  int64_t v10; // x22
  bool v11; // w6
  __int64 v12; // x0

  if ( (byte_42B1232 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3371/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_42B1232 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_16;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  masterLoadThreads = (int32_t)SelfUserGame->fields.masterLoadThreads;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v8 >= (int)max_length )
    {
      v11 = 0;
      goto LABEL_19;
    }
    if ( v8 >= max_length )
    {
      v12 = sub_B52A88(SelfUserGame);
      sub_B52A28(v12, 0LL);
    }
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      SelfUserGame,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                      v10,
                                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v8;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v11 = 1;
LABEL_19:
  SelfUserGame = (DataManager_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B52A5C(SelfUserGame, v5);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v3,
    this->fields._spendQpVal_k__BackingField,
    masterLoadThreads,
    v11,
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
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x21
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_42B1241 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    byte_42B1241 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_B52A5C(0LL, v6);
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
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_21:
      v17 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v13);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_61;
    v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v18 = (UnityEngine_Component_o *)sub_B52D50(v18);
LABEL_61:
      sub_B52A5C(v18, v19);
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v18,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B52A5C(0LL, v22);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  }
  v23 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v25 = *(_QWORD *)v23;
    v26 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_33;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_33:
      v29 = sub_AEB880(v23, System_IDisposable_TypeInfo, 0LL, v24);
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
                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
          if ( helpBtn )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_63:
    sub_B52A5C(helpBtn, *(_QWORD *)&progress);
  }
}


void __fastcall ServantCombineControl__UnBlockTutorial(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v23; // x8
  __int64 v24; // x20
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v29; // x8
  struct SetRarityDialogControl_o *v30; // x8

  if ( (byte_42B1240 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    byte_42B1240 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_62;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
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
          goto LABEL_21;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_21:
      v15 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v11);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_B52A5C(0LL, v17);
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      helpBtn = (UnityEngine_GameObject_o *)sub_B52D50(v16);
      goto LABEL_62;
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v16,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B52A5C(0LL, v20);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
  }
  v21 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v23 = *(_QWORD *)v21;
    v24 = v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_33;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_33:
      v27 = sub_AEB880(v21, System_IDisposable_TypeInfo, 0LL, v22);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
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
                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v29 = this->fields.exeCombineDlg;
  if ( !v29 )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)v29->fields.cancelBtnLb;
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
                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn
    || (helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))helpBtn->klass[1]._1.namespaze)(
                                                helpBtn,
                                                1LL,
                                                helpBtn->klass[1]._1.byval_arg.data),
        (v30 = this->fields.exeCombineDlg) == 0LL)
    || (helpBtn = (UnityEngine_GameObject_o *)v30->fields.cancelBtnLb) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                helpBtn,
                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_62:
    sub_B52A5C(helpBtn, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))helpBtn->klass[1]._1.implementedInterfaces)(
    helpBtn,
    0LL,
    1LL,
    helpBtn->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantCombineControl__Update(ServantCombineControl_o *this, const MethodInfo *method)
{
  int64_t campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v5; // x8
  int size; // w8
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v8; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v9; // x21
  EventCampaignEntity_o *v10; // x8
  int64_t v11; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v12; // x20
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v14; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v15; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v16; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v17; // x20
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v21; // s8
  MenuListControl_c *v22; // x0
  const MethodInfo *v23; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v24; // x21
  __int64 campaiginPerSelectSvtListIndex; // x22
  System_Collections_Generic_List_EventCampaignEntity__o *v26; // x21
  EventCampaignEntity_o *v27; // x8
  int64_t v28; // x20
  const MethodInfo *v29; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v30; // x20
  __int64 v31; // x21
  const MethodInfo *v32; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v33; // x20
  __int64 v34; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v35; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v36; // x20
  __int64 v37; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v38; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v39; // x20
  int32_t v40; // w21
  int32_t v41; // w8
  System_Collections_Generic_List_EventCampaignEntity__o *v42; // x20
  struct AlphaTransitionCalculator_o *v43; // x8

  if ( (byte_42B1225 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_B52984(&MenuListControl_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_TransitionCalculator_float__Update__);
    sub_B52984(&Method_TransitionCalculator_float__get_Current__);
    byte_42B1225 = 1;
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
      method = (const MethodInfo *)(campaiginListPerSelectSvt->fields._size > 0);
      if ( !campaign )
        goto LABEL_98;
    }
    else
    {
      method = 0LL;
      if ( !campaign )
        goto LABEL_98;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, (bool)method, 0LL);
    v5 = this->fields.campaiginListPerSelectSvt;
    if ( v5 )
    {
      size = v5->fields._size;
      if ( size >= 1 )
      {
        if ( size != 1 )
        {
          campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
          if ( !campaignAlphaCalculator )
            return;
          TransitionCalculator_float___Update(
            campaignAlphaCalculator,
            (const MethodInfo_25D3F60 *)Method_TransitionCalculator_float__Update__);
          campaign = (int64_t)this->fields.campaignAlphaCalculator;
          if ( !campaign )
            goto LABEL_98;
          if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
          {
            realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
            v21 = realtimeSinceStartup;
            v22 = MenuListControl_TypeInfo;
            if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MenuListControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
              v22 = MenuListControl_TypeInfo;
            }
            if ( (float)(v21 - campaignAlphaAnimTimeOld) >= v22->static_fields->ALPHA_ANIMATION_INTERVAL )
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
              campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v23);
              v24 = this->fields.campaiginListPerSelectSvt;
              if ( !v24 )
                goto LABEL_98;
              campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
              if ( v24->fields._size <= (unsigned int)campaiginPerSelectSvtListIndex )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v26 = v24->fields._items->m_Items[campaiginPerSelectSvtListIndex];
              if ( !v26 )
                goto LABEL_98;
              if ( !v26->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v27 = v26->fields._items->m_Items[0];
              if ( !v27 )
                goto LABEL_98;
              if ( !campaign )
                goto LABEL_98;
              campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                                    v27->fields.eventId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !campaign )
                goto LABEL_98;
              v28 = *(_QWORD *)(campaign + 96);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              campaign = NetworkManager__getTime(0LL);
              if ( v28 < campaign )
              {
                v30 = this->fields.campaiginListPerSelectSvt;
                if ( !v30 )
                  goto LABEL_98;
                v31 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v30->fields._size <= (unsigned int)v31 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                campaign = (int64_t)v30->fields._items->m_Items[v31];
                if ( !campaign )
                  goto LABEL_98;
                System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                  0,
                  (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                v33 = this->fields.campaiginListPerSelectSvt;
                if ( !v33 )
                  goto LABEL_98;
                v34 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v33->fields._size <= (unsigned int)v34 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                v35 = v33->fields._items->m_Items[v34];
                if ( !v35 )
                  goto LABEL_98;
                v36 = this->fields.campaiginListPerSelectSvt;
                if ( !v36 )
                  goto LABEL_98;
                v37 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v35->fields._size <= 0 )
                {
                  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                    v37,
                    (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                }
                else
                {
                  if ( v36->fields._size <= (unsigned int)v37 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                  v38 = v36->fields._items->m_Items[v37];
                  if ( !v38 )
                    goto LABEL_98;
                  if ( !v38->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                  ServantCombineControl__SetupCampaign(this, v38->fields._items->m_Items[0], v32);
                }
              }
              v39 = this->fields.campaiginListPerSelectSvt;
              v40 = this->fields.campaiginPerSelectSvtListIndex + 1;
              this->fields.campaiginPerSelectSvtListIndex = v40;
              if ( !v39 )
                goto LABEL_98;
              v41 = v39->fields._size;
              if ( v41 <= v40 )
              {
                this->fields.campaiginPerSelectSvtListIndex = 0;
                v41 = v39->fields._size;
                v40 = 0;
              }
              if ( v41 <= (unsigned int)v40 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v42 = v39->fields._items->m_Items[v40];
              if ( !v42 )
                goto LABEL_98;
              if ( !v42->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              ServantCombineControl__SetupCampaign(this, v42->fields._items->m_Items[0], v29);
            }
            v43 = this->fields.campaignAlphaCalculator;
            if ( v43 )
            {
              campaign = (int64_t)this->fields.campaign;
              this->fields.campaignAlphaAnimNow = v43->fields._Current_k__BackingField;
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
          sub_B52A5C(campaign, method);
        }
        campaign = (int64_t)this->fields.campaign;
        if ( !campaign )
          goto LABEL_98;
        (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)campaign + 440LL))(
          campaign,
          *(_QWORD *)(*(_QWORD *)campaign + 448LL),
          1.0);
        campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v7);
        v8 = this->fields.campaiginListPerSelectSvt;
        if ( !v8 )
          goto LABEL_98;
        if ( !v8->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v9 = v8->fields._items->m_Items[0];
        if ( !v9 )
          goto LABEL_98;
        if ( !v9->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v10 = v9->fields._items->m_Items[0];
        if ( !v10 )
          goto LABEL_98;
        if ( !campaign )
          goto LABEL_98;
        campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                              v10->fields.eventId,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !campaign )
          goto LABEL_98;
        v11 = *(_QWORD *)(campaign + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        campaign = NetworkManager__getTime(0LL);
        if ( v11 < campaign )
        {
          v12 = this->fields.campaiginListPerSelectSvt;
          if ( v12 )
          {
            if ( !v12->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            campaign = (int64_t)v12->fields._items->m_Items[0];
            if ( campaign )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                0,
                (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
              v14 = this->fields.campaiginListPerSelectSvt;
              if ( v14 )
              {
                if ( !v14->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                v15 = v14->fields._items->m_Items[0];
                if ( v15 )
                {
                  v16 = this->fields.campaiginListPerSelectSvt;
                  if ( v16 )
                  {
                    if ( v15->fields._size <= 0 )
                    {
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                        0,
                        (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                      return;
                    }
                    if ( !v16->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                    v17 = v16->fields._items->m_Items[0];
                    if ( v17 )
                    {
                      if ( !v17->fields._size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                      ServantCombineControl__SetupCampaign(this, v17->fields._items->m_Items[0], v13);
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
      sub_B52A5C(0LL, isDecide);
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
  __int64 v10; // x22

  v6 = this;
  if ( (byte_42B1243 & 1) == 0 )
  {
    this = (ServantCombineControl_o *)sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_42B1243 = 1;
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
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || (v10 = *(_QWORD *)&this->fields._targetType_k__BackingField,
        (this = (ServantCombineControl_o *)ServantCombineControl__get_EventMaster(v6, (const MethodInfo *)a)) == 0LL)
    || (this = (ServantCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            b->fields.eventId,
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B52A5C(this, a);
  }
  if ( v10 < *(_QWORD *)&this->fields._targetType_k__BackingField )
    return 1;
  else
    return -1;
}


EventMaster_o *__fastcall ServantCombineControl__get_EventMaster(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  EventMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  BattleServantConfConponent_o *p_eventMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B1224 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1224 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v5);
    p_eventMaster = (BattleServantConfConponent_o *)&this->fields.eventMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B52920(p_eventMaster, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
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
  sub_B52920(
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
  Il2CppObject *v1; // x19
  struct ServantCombineControl___c_StaticFields *static_fields; // x0

  if ( (byte_42AD326 & 1) == 0 )
  {
    sub_B52984(&ServantCombineControl___c_TypeInfo);
    byte_42AD326 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantCombineControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCombineControl___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall ServantCombineControl___c___ctor(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCombineControl___c___InitSvtCombine_b__81_0(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x9
  ServantCombineControl___c_o *v5; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v6; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_42AD327 & 1) == 0 )
  {
    sub_B52984(&CombineRootComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AD327 = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_B52A5C(Instance, v3);
  v4 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v4
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v4 - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    v5 = (ServantCombineControl___c_o *)sub_B52D50(Instance);
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
    sub_B52A5C(this, a);
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

  if ( (byte_42AD328 & 1) == 0 )
  {
    this = (ServantCombineControl___c_o *)sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    byte_42AD328 = 1;
  }
  if ( !a )
    goto LABEL_12;
  if ( !a->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = a->fields._items->m_Items[0];
  if ( !v6 || !b )
    goto LABEL_12;
  target = v6->fields.target;
  if ( !b->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v8 = b->fields._items->m_Items[0];
  if ( !v8 )
LABEL_12:
    sub_B52A5C(this, a);
  return target - v8->fields.target;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__107_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD329 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD329 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___ctor(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__0(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_42AD32A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD32A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B52A5C(Instance, v6);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_42AD32B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD32B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}