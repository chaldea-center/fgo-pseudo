void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFD32 & 1) == 0 )
  {
    sub_1B640C8(&ServantCombineControl_TypeInfo, v1);
    byte_49FFD32 = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void __fastcall ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_49FFD31 & 1) == 0 )
  {
    sub_1B640C8(&CombineMenuControl_TypeInfo, method);
    byte_49FFD31 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v19; // x20
  UILabel_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_49FFD1D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_3761/*"CONDUCTION_LIMITUP"*/, v7);
    sub_1B640C8(&StringLiteral_3764/*"CONDUCTION_LVEXCEED_MSG"*/, v8);
    sub_1B640C8(&StringLiteral_3763/*"CONDUCTION_LVEXCEED"*/, v9);
    sub_1B640C8(&StringLiteral_3762/*"CONDUCTION_LIMITUP_MSG"*/, v10);
    byte_49FFD1D = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_38;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_38;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v16;
    *(_QWORD *)&v21.fields.fakeValue = v15;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                       v21,
                                                       0LL);
    if ( !v14 )
      goto LABEL_38;
    DataMasterBase_object__object__int___GetEntity(
      v14,
      (int32_t)conductionWireInfo,
      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_38;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
    {
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
      if ( !conductionWireInfo )
        goto LABEL_38;
      if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)conductionWireInfo, 0LL) )
      {
        conductionWireInfo = this->fields.resAdjustInfo;
        if ( !conductionWireInfo )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
        if ( !conductionWireInfo )
          goto LABEL_38;
        CombineInfoComponent__setCurrentStatusInfo(
          (CombineInfoComponent_o *)conductionWireInfo,
          this->fields.baseData,
          0LL);
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
        if ( !conductionWireInfo )
          goto LABEL_38;
        if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
          if ( !conductionWireInfo )
            goto LABEL_38;
          if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
          {
            conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
            if ( !conductionWireInfo )
              goto LABEL_38;
            if ( !UserServantEntity__isExceedLvMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
            {
              conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
              if ( !conductionWireInfo )
                goto LABEL_38;
              if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)conductionWireInfo, 0LL) )
              {
                conductionWireLabel = this->fields.conductionWireLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3764/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3763/*"CONDUCTION_LVEXCEED"*/,
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
LABEL_38:
                sub_1B64324(conductionWireInfo);
              }
            }
          }
        }
        else
        {
          v19 = this->fields.conductionWireLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3762/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v19 )
            goto LABEL_38;
          UILabel__set_text(v19, (System_String_o *)conductionWireInfo, 0LL);
          v20 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3761/*"CONDUCTION_LIMITUP"*/,
                                                             0LL);
          if ( !v20 )
            goto LABEL_38;
          UILabel__set_text(v20, (System_String_o *)conductionWireInfo, 0LL);
          conductionWireInfo = this->fields.conductionWireInfo;
          if ( !conductionWireInfo )
            goto LABEL_38;
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
    sub_1B64324(this);
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

  if ( (byte_49FFD20 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFD20 = 1;
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
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B64324(baseData);
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
  int32_t v3; // w3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_49FFD1A & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_49FFD1A = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v7 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v7;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v14;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v13, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v12, 0LL) )
        ServantCombineControl__InitMaterialSvtInfo(this, v10);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    ServantCombineControl__InitMaterialSvtInfo(this, (const MethodInfo *)selectBase);
    this->fields.isSelectBase = 0;
    ServantCombineControl__ResetCampaign(this, v11);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (int32_t)method,
    v3);
}


void __fastcall ServantCombineControl__CheckRareSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *highRarityList; // x8

  highRarityList = this->fields.highRarityList;
  if ( !highRarityList )
    sub_1B64324(this);
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

  if ( !e1 || (this = (ServantCombineControl_o *)UserServantEntity__getRarity(e1, 0LL), SvtClassId = (int)this, !e2) )
    sub_1B64324(this);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_62180348((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0, 0LL);
    return System_Int32__CompareTo_62180348((int32_t)&SvtClassId, v8, 0LL);
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
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  if ( (byte_49FFD25 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v5);
    byte_49FFD25 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_1B64324(selectGrid);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v16);
LABEL_35:
      sub_1B64324(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  v19 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v22 = *(_QWORD *)v19;
    v23 = v19;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_30;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_30:
      v26 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0,
    v20,
    v21);
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
  void *Instance; // x0
  UserServantEntity_array *CombineMaterialList; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t SvtClassId; // w22
  bool IsExtraClass; // w22
  RecommendedConfigSaveData_o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_T__o *v29; // x23
  int v30; // w19
  int32_t v31; // w25
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  __int64 v35; // x27
  __int64 v36; // x28
  UserServantEntity_o *v37; // x25
  __int64 v38; // x1
  int v39; // w26
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  ServantCombineControl_o *v48; // x0
  const MethodInfo *v49; // x4
  const MethodInfo *v50; // x2
  System_Comparison_T__o *v52; // x21
  ServantCombineControl_o *v53; // [xsp+8h] [xbp-68h]

  if ( (byte_49FFD2B & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_UserServantEntity__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v14);
    sub_1B640C8(&RecommendedConfigSaveData_TypeInfo, v15);
    sub_1B640C8(&Method_ServantCombineControl_ClassRaritySort__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v18);
    byte_49FFD2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.baseData;
  if ( !Instance )
    goto LABEL_22;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  IsExtraClass = SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
  Instance = RecommendedConfigSaveData__LoadConfigSaveData(0LL);
  if ( !Instance )
    goto LABEL_22;
  v26 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v29 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_Rarity_TYPE__TypeInfo,
                                                  v27,
                                                  v28);
  System_Collections_Generic_List_Int32Enum____ctor(
    v29,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  Instance = v26->fields.selectRarityList;
  if ( !Instance )
    goto LABEL_22;
  v30 = *((_DWORD *)Instance + 6);
  if ( v30 >= 1 )
  {
    v31 = 0;
    do
    {
      Instance = (void *)System_Collections_Generic_List_int___get_Item(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v31,
                           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v29 )
        break;
      items = v29->fields._items;
      v33 = Method_System_Collections_Generic_List_Rarity_TYPE__Add__;
      ++v29->fields._version;
      if ( !items )
        break;
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v29,
          (int32_t)Instance,
          *(const MethodInfo_34927A8 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v29->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = (_DWORD)Instance;
      }
      if ( v30 == ++v31 )
        goto LABEL_23;
      Instance = v26->fields.selectRarityList;
    }
    while ( Instance );
LABEL_22:
    sub_1B64324(Instance);
  }
LABEL_23:
  v53 = this;
  if ( !CombineMaterialList )
    goto LABEL_22;
  if ( (int)*(_QWORD *)&CombineMaterialList->max_length >= 1 )
  {
    v35 = 0LL;
    v36 = (unsigned int)*(_QWORD *)&CombineMaterialList->max_length - 1LL;
    while ( 1 )
    {
      v37 = CombineMaterialList->m_Items[v35];
      Instance = (void *)RecommendedConfigSaveData__IsAll(v26, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_22;
        Instance = (void *)UserServantEntity__getSvtClassId(v37, 0, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_47;
      }
      Instance = (void *)RecommendedConfigSaveData__IsTargetOnly(v26, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v37 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v37, 0, 0LL);
      if ( !v53->fields.baseData )
        goto LABEL_22;
      v39 = (int)Instance;
      Instance = (void *)UserServantEntity__getSvtClassId(v53->fields.baseData, 0, 0LL);
      if ( v39 == (_DWORD)Instance )
        goto LABEL_40;
LABEL_47:
      if ( v36 == v35 )
        goto LABEL_50;
      if ( ++v35 >= (unsigned __int64)CombineMaterialList->max_length )
        sub_1B6432C(Instance, v38);
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v37, 0, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_47;
    }
    else
    {
LABEL_39:
      if ( !v37 )
        goto LABEL_22;
    }
LABEL_40:
    Instance = (void *)UserServantEntity__getRarity(v37, 0LL);
    if ( !v29 )
      goto LABEL_22;
    Instance = (void *)System_Collections_Generic_List_Int32Enum___Contains(
                         v29,
                         (int32_t)Instance,
                         (const MethodInfo_3492B20 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_22;
      v42 = v23->fields._items;
      v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v23->fields._version;
      if ( !v42 )
        goto LABEL_22;
      v44 = v23->fields._size;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v37,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v42->obj.klass + v44;
        v23->fields._size = v44 + 1;
        v45[4] = (Il2CppClass *)v37;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v37, v40, v41);
      }
    }
    goto LABEL_47;
  }
LABEL_50:
  if ( !v23 )
    goto LABEL_22;
  if ( !v23->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v26, 0LL) )
  {
    Instance = v53->fields.baseData;
    if ( !Instance )
      goto LABEL_22;
    v48 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
    v23 = (System_Collections_Generic_List_object__o *)ServantCombineControl__MixMaterialSort(
                                                         v48,
                                                         (int32_t)v48,
                                                         (System_Collections_Generic_List_Rarity_TYPE__o *)v29,
                                                         (System_Collections_Generic_List_UserServantEntity__o *)v23,
                                                         v49);
  }
  else
  {
    v52 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserServantEntity__TypeInfo, v46, v47);
    System_Comparison_object____ctor(v52, (Il2CppObject *)v53, Method_ServantCombineControl_ClassRaritySort__, 0LL);
    System_Collections_Generic_List_object___Sort_55243320(
      v23,
      v52,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_44710236(
           v53,
           (System_Collections_Generic_List_UserServantEntity__o *)v23,
           v50);
}


int32_t __fastcall ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


void __fastcall ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UILabel_o *qpLb; // x20
  UILabel_o *expLb; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int v12; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFD18 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FFD18 = 1;
  }
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
  v12 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_62180668(
                                               (int32_t)&v12,
                                               (System_String_o *)StringLiteral_9164/*"N0"*/,
                                               0LL);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !currentLvObj )
    goto LABEL_22;
  v13.fields.r = 1.0;
  v13.fields.g = 1.0;
  v13.fields.b = 1.0;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v13, 0LL);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v12 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0LL),
        ServantCombineControl__DestroyGrid(this, v10),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v11),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0LL) )
  {
LABEL_22:
    sub_1B64324(currentLvObj);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0LL);
}


void __fastcall ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FFD16 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFD16 = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_charaGraph, 0, v6, v7);
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
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_c *v22; // x0
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v24; // x21
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v34; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v37; // x0
  unsigned int klass_high; // w9
  MenuListControl_o *v39; // x0
  void *v40; // x0
  int v41; // w1
  __int64 v42; // x21
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FFD15 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_1B640C8(&TutorialFlag_TypeInfo, v11);
    sub_1B640C8(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v12);
    sub_1B640C8(&ServantCombineControl___c_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_8723/*"MSG_PRESELECT_BASE_SVT"*/, v14);
    sub_1B640C8(&StringLiteral_6872/*"GET_EXP_INFO"*/, v15);
    sub_1B640C8(&StringLiteral_9170/*"NEED_QP_INFO"*/, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    byte_49FFD15 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37376848(102, 0LL) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9170/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6872/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0,
          v30,
          v31);
        ServantCombineControl__InitMaterialSvtInfo(this, v32);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8723/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v34);
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
                        combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
                        if ( combineEventList && combineEventList->fields._size >= 1 )
                        {
                          System_Collections_Generic_List_object___GetEnumerator(
                            (System_Collections_Generic_List_Enumerator_T__o *)&v43,
                            combineEventList,
                            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v44 = v43;
                          while ( 1 )
                          {
                            v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v44,
                                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v37 )
                              break;
                            if ( !v44.fields._current )
                              sub_1B64324(v37);
                            klass_high = HIDWORD(v44.fields._current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v39 = this->fields.menuListCtr;
                              if ( !v39 )
                                sub_1B64324(0LL);
                              MenuListControl__setBannerIcon(
                                v39,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v44.fields._current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v44,
                            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                        }
                        goto LABEL_40;
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
LABEL_46:
    sub_1B64324(selectMaterialSvtBtn);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].monitor;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  v20 = CombineRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(selectMaterialSvtBtn->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    if ( *(_DWORD *)&selectMaterialSvtBtn[25].fields._firstChar == 1 )
    {
      v22 = ServantCombineControl___c_TypeInfo;
      if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v22 = ServantCombineControl___c_TypeInfo;
      }
      _9__81_0 = v22->static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = ServantCombineControl___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v19);
        System_Action___ctor(_9__81_0, v24, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_0 = _9__81_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v26, v27);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_18;
  }
  sub_1B645E4(selectMaterialSvtBtn);
  if ( v41 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C4EB58();
  }
  v42 = *(_QWORD *)__cxa_begin_catch(v40);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v42 )
    sub_1B6431C(v42);
LABEL_40:
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  selectMaterialSvtBtn = (System_String_o *)this->fields.resAdjustInfo;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
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
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w22
  int32_t LevelMax; // w0
  int v18; // w21
  int v19; // w8
  int32_t v20; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49FFD2C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&totalExp);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FFD2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v15;
  *(_QWORD *)&v22.fields.fakeValue = v14;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
  if ( !v13
    || (DataMasterBase_object__object__int___GetEntity(
          v13,
          (int32_t)Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_22:
    sub_1B64324(Instance);
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
LABEL_18:
    v19 = v18;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_22;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v16, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v20 = *((_DWORD *)Instance + 6);
      if ( v20 > totalExp )
      {
        v19 = *((_DWORD *)Instance + 5);
        return v19 >= v18;
      }
      if ( v20 == totalExp )
        break;
      if ( v18 == ++v16 )
        goto LABEL_18;
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
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x22
  Il2CppObject *Item; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t size; // w19
  int32_t i; // w25
  Il2CppObject *v32; // x26
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  System_Collections_Generic_List_object__o *v43; // x0
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  ServantCombineControl___c_c *v47; // x0
  System_Comparison_T__o *_9__113_0; // x23
  Il2CppObject *v49; // x24
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_List_object__o *v53; // x23
  int32_t v54; // w19
  int32_t v55; // w24
  int v56; // w25
  int32_t v57; // w26
  Il2CppObject *v58; // x27
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  int32_t v65; // w26
  Il2CppObject *v66; // x27
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w26
  Il2CppObject *v74; // x27
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0

  if ( (byte_49FFD2E & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_UserServantEntity__TypeInfo, *(_QWORD *)&baseServantClass);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v15);
    sub_1B640C8(&Method_ServantCombineControl___c__MixMaterialSort_b__113_0__, v16);
    sub_1B640C8(&ServantCombineControl___c_TypeInfo, v17);
    byte_49FFD2E = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !materialList )
    goto LABEL_75;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; size != i; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)materialList,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        goto LABEL_75;
      v32 = Item;
      Item = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Item, 0, 0LL);
      if ( (_DWORD)Item == baseServantClass )
      {
        if ( !v20 )
          goto LABEL_75;
        items = v20->fields._items;
        v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_75;
        v37 = v20->fields._size;
        if ( (unsigned int)v37 >= items->max_length )
        {
          v42 = v36[4];
          v43 = v20;
LABEL_27:
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            v32,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42 + 192) + 112LL));
          continue;
        }
        v38 = &items->obj.klass + v37;
        v20->fields._size = v37 + 1;
      }
      else if ( (_DWORD)Item == 1001 )
      {
        if ( !v23 )
          goto LABEL_75;
        v39 = v23->fields._items;
        v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v23->fields._version;
        if ( !v39 )
          goto LABEL_75;
        v41 = v23->fields._size;
        if ( (unsigned int)v41 >= v39->max_length )
        {
          v42 = v40[4];
          v43 = v23;
          goto LABEL_27;
        }
        v38 = &v39->obj.klass + v41;
        v23->fields._size = v41 + 1;
      }
      else
      {
        if ( !v26 )
          goto LABEL_75;
        v44 = v26->fields._items;
        v45 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v26->fields._version;
        if ( !v44 )
          goto LABEL_75;
        v46 = v26->fields._size;
        if ( (unsigned int)v46 >= v44->max_length )
        {
          v42 = v45[4];
          v43 = v26;
          goto LABEL_27;
        }
        v38 = &v44->obj.klass + v46;
        v26->fields._size = v46 + 1;
      }
      v38[4] = (Il2CppClass *)v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
    }
  }
  if ( !v26 )
    goto LABEL_75;
  if ( v26->fields._size >= 1 )
  {
    v47 = ServantCombineControl___c_TypeInfo;
    if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v47 = ServantCombineControl___c_TypeInfo;
    }
    _9__113_0 = (System_Comparison_T__o *)v47->static_fields->__9__113_0;
    if ( !_9__113_0 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v47 = ServantCombineControl___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v47->static_fields->__9;
      _9__113_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserServantEntity__TypeInfo, v28, v29);
      System_Comparison_object____ctor(
        _9__113_0,
        v49,
        Method_ServantCombineControl___c__MixMaterialSort_b__113_0__,
        0LL);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      static_fields->__9__113_0 = (struct System_Comparison_UserServantEntity__o *)_9__113_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__113_0, (int32_t)_9__113_0, v51, v52);
    }
    System_Collections_Generic_List_object___Sort_55243320(
      v26,
      _9__113_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Item = (Il2CppObject *)checkRarityTypeList;
  if ( !checkRarityTypeList )
    goto LABEL_75;
  v54 = checkRarityTypeList->fields._size;
  if ( v54 >= 1 )
  {
    v55 = 0;
    while ( 1 )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)Item,
                               v55,
                               (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
      if ( !v20 )
        goto LABEL_75;
      v56 = (int)Item;
      if ( v20->fields._size >= 1 )
        break;
LABEL_52:
      if ( !v23 )
        goto LABEL_75;
      if ( v23->fields._size >= 1 )
      {
        v65 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v23,
                   v65,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v66 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v56 )
          {
            if ( !v53 )
              goto LABEL_75;
            v69 = v53->fields._items;
            v70 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v53->fields._version;
            if ( !v69 )
              goto LABEL_75;
            v71 = v53->fields._size;
            if ( (unsigned int)v71 >= v69->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v53,
                v66,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
            else
            {
              v72 = &v69->obj.klass + v71;
              v53->fields._size = v71 + 1;
              v72[4] = (Il2CppClass *)v66;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v66, v67, v68);
            }
          }
        }
        while ( ++v65 < v23->fields._size );
      }
      if ( v26->fields._size >= 1 )
      {
        v73 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v26,
                   v73,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v74 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v56 )
          {
            if ( !v53 )
              goto LABEL_75;
            v77 = v53->fields._items;
            v78 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v53->fields._version;
            if ( !v77 )
              goto LABEL_75;
            v79 = v53->fields._size;
            if ( (unsigned int)v79 >= v77->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v53,
                v74,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v80 = &v77->obj.klass + v79;
              v53->fields._size = v79 + 1;
              v80[4] = (Il2CppClass *)v74;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v74, v75, v76);
            }
          }
        }
        while ( ++v73 < v26->fields._size );
      }
      Item = (Il2CppObject *)checkRarityTypeList;
      if ( ++v55 == v54 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v53;
    }
    v57 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v20,
               v57,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        break;
      v58 = Item;
      Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
      if ( (_DWORD)Item == v56 )
      {
        if ( !v53 )
          break;
        v61 = v53->fields._items;
        v62 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v53->fields._version;
        if ( !v61 )
          break;
        v63 = v53->fields._size;
        if ( (unsigned int)v63 >= v61->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            v58,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &v61->obj.klass + v63;
          v53->fields._size = v63 + 1;
          v64[4] = (Il2CppClass *)v58;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
        }
      }
      if ( ++v57 >= v20->fields._size )
        goto LABEL_52;
    }
LABEL_75:
    sub_1B64324(Item);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v53;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFD24 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantCombineControl_OnClickCombineConductionWire__, method);
    byte_49FFD24 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  conductionType = this->fields.conductionType;
  if ( conductionType == 2 )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_12;
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
LABEL_12:
    sub_1B64324(combineRootComponent);
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
  __int64 v9; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v11; // x21
  signed __int64 v12; // x23
  unsigned __int64 max_length; // x27
  int64_t v14; // x22

  if ( (byte_49FFD23 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_49FFD23 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int32_t)SelfUserGame[4].klass;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  v11 = SelfUserGame;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v12 >= (int)max_length )
      break;
    if ( v12 >= max_length )
      sub_1B6432C(SelfUserGame, v9);
    v14 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v12];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v14,
                                            (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v12;
          if ( selectMaterialUsrSvtIdList_k__BackingField )
            continue;
        }
      }
    }
    goto LABEL_15;
  }
  SelfUserGame = (System_String_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_15:
    sub_1B64324(SelfUserGame);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v11,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v12 < (int)max_length,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL);
}


void __fastcall ServantCombineControl__OnClickMaterialSelectList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_49FFD28 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantCombineControl_OnClickMaterialSelectList__, method);
    byte_49FFD28 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__OnClickRecommendedButton(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  RecommenededConfigDialog_ClickDelegate_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49FFD29 & 1) == 0 )
  {
    sub_1B640C8(&RecommenededConfigDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_ServantCombineControl_OnClickRecommendedButton__, v3);
    sub_1B640C8(&Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__, v4);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v5);
    byte_49FFD29 = 1;
  }
  v6 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_ServantCombineControl_OnClickRecommendedButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_10;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v13 = (RecommenededConfigDialog_ClickDelegate_o *)sub_1B64314(
                                                      RecommenededConfigDialog_ClickDelegate_TypeInfo,
                                                      v11,
                                                      v12);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__,
    v14);
  if ( !recommendedConfigDialog )
LABEL_10:
    sub_1B64324(baseData);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v13, v15);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_49FFD17 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FFD17 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_1B64324(campaign);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaiginListPerSelectSvt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.campaiginListPerSelectSvt, 0, v4, v5);
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
  int32_t v3; // w3
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
  UserServantEntity_o **p_baseData; // x20
  const MethodInfo *v40; // x2
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w23
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v44; // w24
  int32_t adjustAtk; // w23
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  int32_t v47; // w24
  const MethodInfo *v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_object__o *CombineEventCampaigns; // x20
  System_Collections_Generic_List_object__o *v52; // x22
  _BOOL8 v53; // x0
  const MethodInfo *v54; // x1
  Il2CppObject *current; // x23
  unsigned int klass_high; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *EventMaster; // x0
  Il2CppObject *Entity; // x0
  Il2CppClass *klass; // x19
  int64_t Time; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  System_Int32_array *monitor; // x24
  __int64 v65; // x8
  int v66; // w9
  int32_t SvtClassId; // w1
  __int64 v68; // x0
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  _BOOL8 IsExchangeSvt; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x28
  int32_t v76; // w20
  __int64 v77; // x25
  __int64 v78; // x26
  Il2CppClass **v79; // x0
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  System_Collections_Generic_List_object__o *v86; // x23
  System_Collections_Generic_List_object__o **p_campaiginListPerSelectSvt; // x21
  int32_t v88; // w2
  int32_t v89; // w3
  _BOOL8 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  EventCampaignEntity_o *v93; // x22
  _BOOL8 v94; // x0
  System_Collections_Generic_List_object__o *v95; // x23
  int32_t target; // w19
  Il2CppObject *Item; // x0
  int32_t v98; // w8
  Il2CppObject *v99; // x0
  Il2CppObject *v100; // x0
  Il2CppObject *v101; // x0
  Il2CppObject *v102; // x0
  Il2CppObject *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  Il2CppObject *v106; // x1
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  System_Collections_Generic_List_object__o *v111; // x23
  __int64 v112; // x0
  Il2CppObject *v113; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  Il2CppObject *v116; // x1
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  char v123; // w19
  System_Collections_Generic_List_object__o *v124; // x0
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x8
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x0
  Il2CppObject *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  Il2CppObject *v135; // x1
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  Il2CppObject *v142; // x22
  System_Comparison_T__o *v143; // x23
  __int64 v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  System_Collections_Generic_List_object__o *v147; // x21
  ServantCombineControl___c_c *v148; // x0
  System_Comparison_T__o *_9__88_0; // x22
  Il2CppObject *v150; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  Il2CppObject *v154; // x0
  const MethodInfo *v155; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
  bool v157; // w1
  MenuListControl_c *v158; // x0
  float v159; // s8
  System_Func_float__float__float__float__o *v160; // x20
  __int64 v161; // x1
  __int64 v162; // x2
  AlphaTransitionCalculator_o *v163; // x21
  int32_t v164; // w2
  int32_t v165; // w3
  System_Collections_Generic_List_object__o *v166; // [xsp+18h] [xbp-D8h]
  ServantCombineControl_o *v167; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v169; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v170; // [xsp+60h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16

  if ( (byte_49FFD1B & 1) == 0 )
  {
    sub_1B640C8(&AlphaTransitionCalculator_TypeInfo, usrSvtData);
    sub_1B640C8(&Method_System_Array_IndexOf_int___, v6);
    sub_1B640C8(&BalanceConfig_TypeInfo, v7);
    sub_1B640C8(&System_Comparison_EventCampaignEntity__TypeInfo, v8);
    sub_1B640C8(&System_Comparison_List_EventCampaignEntity___TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v28);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v29);
    sub_1B640C8(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v30);
    sub_1B640C8(&MenuListControl_TypeInfo, v31);
    sub_1B640C8(&NetworkManager_TypeInfo, v32);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_1B640C8(&Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__, v34);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_1B640C8(&Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__, v36);
    sub_1B640C8(&ServantCombineControl___c_TypeInfo, v37);
    sub_1B640C8(&StringLiteral_1/*""*/, v38);
    byte_49FFD1B = 1;
  }
  p_baseData = &this->fields.baseData;
  memset(&v170, 0, sizeof(v170));
  memset(&v169, 0, sizeof(v169));
  this->fields.baseData = usrSvtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)usrSvtData, (int32_t)method, v3);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v40);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_164;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, *p_baseData, 0LL);
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  combineInfoComp = (struct CombineInfoComponent_o *)*p_baseData;
  if ( !*p_baseData )
    goto LABEL_164;
  combineInfoComp = (struct CombineInfoComponent_o *)UserServantEntity__GetAdjustMax(
                                                       (UserServantEntity_o *)combineInfoComp,
                                                       &maxAjustAtk[1],
                                                       maxAjustAtk,
                                                       &secondMaxAdjustAtk[1],
                                                       secondMaxAdjustAtk,
                                                       0LL);
  if ( !*p_baseData )
    goto LABEL_164;
  adjustHp = (*p_baseData)->fields.adjustHp;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( adjustHp >= maxAjustAtk[1] )
    v44 = secondMaxAdjustAtk[1];
  else
    v44 = maxAjustAtk[1];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_164;
  UIIconLabel__Set_37921148(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * adjustHp,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * v44,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_164;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !*p_baseData )
    goto LABEL_164;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  adjustAtk = (*p_baseData)->fields.adjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( adjustAtk >= maxAjustAtk[0] )
    v47 = secondMaxAdjustAtk[0];
  else
    v47 = maxAjustAtk[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_164;
  UIIconLabel__Set_37921148(
    currentAdjustAtkIconLabel,
    45,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * adjustAtk,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * v47,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_164;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantCombineControl__CheckConductionWire(this, v48);
  combineInfoComp = (struct CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_164;
  combineInfoComp = (struct CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)combineInfoComp,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !combineInfoComp )
    goto LABEL_164;
  CombineEventCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns(
                                                                         (EventCampaignMaster_o *)combineInfoComp,
                                                                         0LL);
  if ( !CombineEventCampaigns )
    goto LABEL_151;
  v167 = this;
  v52 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v49,
                                                       v50);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v166 = CombineEventCampaigns;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v168,
    CombineEventCampaigns,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v170 = v168;
LABEL_25:
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v170,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v53 )
      break;
    current = v170.fields._current;
    if ( !v170.fields._current )
      sub_1B64324(v53);
    klass_high = HIDWORD(v170.fields._current[1].klass);
    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000034LL) != 0 )
    {
      EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(v167, v54);
      if ( !EventMaster )
        sub_1B64324(0LL);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 EventMaster,
                 (int32_t)current[1].klass,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B64324(0LL);
      klass = Entity[6].klass;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( (__int64)klass >= Time )
      {
        monitor = (System_Int32_array *)current[2].monitor;
        if ( !monitor )
          sub_1B64324(Time);
        v65 = *(_QWORD *)&monitor->max_length;
        v66 = HIDWORD(current[1].klass);
        if ( v65 )
        {
          if ( (unsigned int)(v66 - 32) >= 2 )
          {
            if ( v66 == 27 )
            {
              if ( !usrSvtData )
                sub_1B64324(Time);
              IsExchangeSvt = UserServantEntity__IsExchangeSvt(usrSvtData, 0LL);
              if ( IsExchangeSvt )
              {
                if ( !v52 )
                  sub_1B64324(IsExchangeSvt);
                items = v52->fields._items;
                v81 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v52->fields._version;
                if ( !items )
                  sub_1B64324(IsExchangeSvt);
                size = v52->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v52,
                    current,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                }
                else
                {
                  v83 = &items->obj.klass + size;
                  v52->fields._size = size + 1;
                  v83[4] = (Il2CppClass *)current;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 4), (int32_t)current, v73, v74);
                }
                break;
              }
            }
            else if ( (int)v65 >= 1 )
            {
              v75 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v75 >= (unsigned int)v65 )
                  sub_1B6432C(Time, v61);
                if ( !usrSvtData )
                  sub_1B64324(Time);
                v76 = monitor->m_Items[v75 + 1];
                v78 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
                v77 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v173.fields.currentCryptoKey = v78;
                *(_QWORD *)&v173.fields.fakeValue = v77;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v173, 0LL);
                if ( v76 == (_DWORD)Time )
                  break;
                LODWORD(v65) = monitor->max_length;
                if ( (int)++v75 >= (int)v65 )
                  goto LABEL_25;
              }
              if ( !v52 )
                sub_1B64324(Time);
              v69 = v52->fields._items;
              v70 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
              ++v52->fields._version;
              if ( !v69 )
                sub_1B64324(Time);
              v71 = v52->fields._size;
              if ( (unsigned int)v71 >= v69->max_length )
                goto LABEL_67;
LABEL_66:
              v79 = &v69->obj.klass + v71;
              v52->fields._size = v71 + 1;
              v79[4] = (Il2CppClass *)current;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)current, v62, v63);
            }
          }
          else
          {
            if ( !usrSvtData )
              sub_1B64324(Time);
            SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0LL);
            v68 = System_Array__IndexOf_int_(
                    monitor,
                    SvtClassId,
                    (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
            if ( (v68 & 0x80000000) == 0 )
            {
              if ( !v52 )
                sub_1B64324(v68);
              v69 = v52->fields._items;
              v70 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
              ++v52->fields._version;
              if ( !v69 )
                sub_1B64324(v68);
              v71 = v52->fields._size;
              if ( (unsigned int)v71 < v69->max_length )
                goto LABEL_66;
LABEL_67:
              System_Collections_Generic_List_object___AddWithResize(
                v52,
                current,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
            }
          }
        }
        else if ( (v66 & 0xFFFFFFFE) == 4 )
        {
          if ( !v52 )
            sub_1B64324(Time);
          v69 = v52->fields._items;
          v70 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v52->fields._version;
          if ( !v69 )
            sub_1B64324(Time);
          v71 = v52->fields._size;
          if ( (unsigned int)v71 >= v69->max_length )
            goto LABEL_67;
          goto LABEL_66;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v170,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  v86 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo,
                                                       v84,
                                                       v85);
  System_Collections_Generic_List_object____ctor(
    v86,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  p_campaiginListPerSelectSvt = (System_Collections_Generic_List_object__o **)&v167->fields.campaiginListPerSelectSvt;
  v167->fields.campaiginListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)v86;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v167->fields.campaiginListPerSelectSvt, (int32_t)v86, v88, v89);
  if ( !v52 )
    goto LABEL_164;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v168,
    v52,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v170 = v168;
  while ( 1 )
  {
    v90 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v170,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v90 )
      break;
    if ( !*p_campaiginListPerSelectSvt )
      sub_1B64324(v90);
    v93 = (EventCampaignEntity_o *)v170.fields._current;
    if ( (*p_campaiginListPerSelectSvt)->fields._size <= 0 )
    {
      v111 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                            System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                            v91,
                                                            v92);
      System_Collections_Generic_List_object____ctor(
        v111,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v93 )
        sub_1B64324(v112);
      v113 = (Il2CppObject *)EventCampaignEntity__Clone(v93, 0LL);
      v116 = v113;
      if ( !v111 )
        sub_1B64324(v113);
      v117 = v111->fields._items;
      v118 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v111->fields._version;
      if ( !v117 )
        sub_1B64324(v113);
      v119 = v111->fields._size;
      if ( (unsigned int)v119 >= v117->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v111,
          v113,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &v117->obj.klass + v119;
        v111->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)v116;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v120 + 4), (int32_t)v116, v114, v115);
      }
      v124 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_1B64324(0LL);
      v125 = v124->fields._items;
      v126 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v124->fields._version;
      if ( !v125 )
        sub_1B64324(v124);
      v127 = v124->fields._size;
      if ( (unsigned int)v127 < v125->max_length )
      {
LABEL_113:
        v128 = &v125->obj.klass + v127;
        v124->fields._size = v127 + 1;
        v128[4] = (Il2CppClass *)v111;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v128 + 4), (int32_t)v111, v121, v122);
        continue;
      }
      goto LABEL_126;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v168,
      *p_campaiginListPerSelectSvt,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    v169 = v168;
    while ( 1 )
    {
      v94 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v169,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v94 )
      {
        v123 = 0;
        goto LABEL_116;
      }
      if ( !v93 )
        sub_1B64324(v94);
      v95 = (System_Collections_Generic_List_object__o *)v169.fields._current;
      if ( !v169.fields._current )
        sub_1B64324(v94);
      target = v93->fields.target;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v169.fields._current,
               0,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        sub_1B64324(0LL);
      if ( target == HIDWORD(Item[1].klass) )
        break;
      v98 = v93->fields.target;
      if ( v98 == 4 )
      {
        v99 = System_Collections_Generic_List_object___get_Item(
                v95,
                0,
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v99 )
          sub_1B64324(0LL);
        if ( HIDWORD(v99[1].klass) == 32 )
          break;
        v98 = v93->fields.target;
      }
      if ( v98 == 32 )
      {
        v100 = System_Collections_Generic_List_object___get_Item(
                 v95,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v100 )
          sub_1B64324(0LL);
        if ( HIDWORD(v100[1].klass) == 4 )
          break;
        v98 = v93->fields.target;
      }
      if ( v98 == 5 )
      {
        v101 = System_Collections_Generic_List_object___get_Item(
                 v95,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v101 )
          sub_1B64324(0LL);
        if ( HIDWORD(v101[1].klass) == 33 )
          break;
        v98 = v93->fields.target;
      }
      if ( v98 == 33 )
      {
        v102 = System_Collections_Generic_List_object___get_Item(
                 v95,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v102 )
          sub_1B64324(0LL);
        if ( HIDWORD(v102[1].klass) == 5 )
          break;
      }
    }
    v103 = (Il2CppObject *)EventCampaignEntity__Clone(v93, 0LL);
    v106 = v103;
    v107 = v95->fields._items;
    v108 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v95->fields._version;
    if ( !v107 )
      sub_1B64324(v103);
    v109 = v95->fields._size;
    if ( (unsigned int)v109 >= v107->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v95,
        v103,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    }
    else
    {
      v110 = &v107->obj.klass + v109;
      v95->fields._size = v109 + 1;
      v110[4] = (Il2CppClass *)v106;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v106, v104, v105);
    }
    v123 = 1;
LABEL_116:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v169,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    if ( (v123 & 1) == 0 )
    {
      v111 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                            System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                            v129,
                                                            v130);
      System_Collections_Generic_List_object____ctor(
        v111,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v93 )
        sub_1B64324(v131);
      v132 = (Il2CppObject *)EventCampaignEntity__Clone(v93, 0LL);
      v135 = v132;
      if ( !v111 )
        sub_1B64324(v132);
      v136 = v111->fields._items;
      v137 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v111->fields._version;
      if ( !v136 )
        sub_1B64324(v132);
      v138 = v111->fields._size;
      if ( (unsigned int)v138 >= v136->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v111,
          v132,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
      }
      else
      {
        v139 = &v136->obj.klass + v138;
        v111->fields._size = v138 + 1;
        v139[4] = (Il2CppClass *)v135;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v139 + 4), (int32_t)v135, v133, v134);
      }
      v124 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_1B64324(0LL);
      v125 = v124->fields._items;
      v126 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v124->fields._version;
      if ( !v125 )
        sub_1B64324(v124);
      v127 = v124->fields._size;
      if ( (unsigned int)v127 < v125->max_length )
        goto LABEL_113;
LABEL_126:
      System_Collections_Generic_List_object___AddWithResize(
        v124,
        (Il2CppObject *)v111,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
      continue;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v170,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  combineInfoComp = (struct CombineInfoComponent_o *)*p_campaiginListPerSelectSvt;
  if ( !*p_campaiginListPerSelectSvt )
    goto LABEL_164;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v168,
    (System_Collections_Generic_List_object__o *)combineInfoComp,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v169 = v168;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v169,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
  {
    v142 = v169.fields._current;
    v143 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventCampaignEntity__TypeInfo, v140, v141);
    System_Comparison_object____ctor(
      v143,
      (Il2CppObject *)v167,
      Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__,
      0LL);
    if ( !v142 )
      sub_1B64324(v144);
    System_Collections_Generic_List_object___Sort_55243320(
      (System_Collections_Generic_List_object__o *)v142,
      v143,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v169,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  v147 = *p_campaiginListPerSelectSvt;
  CombineEventCampaigns = v166;
  this = v167;
  if ( !v147 )
    goto LABEL_164;
  if ( v147->fields._size < 1 )
    goto LABEL_151;
  v148 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v148 = ServantCombineControl___c_TypeInfo;
  }
  _9__88_0 = (System_Comparison_T__o *)v148->static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = ServantCombineControl___c_TypeInfo;
    }
    v150 = (Il2CppObject *)v148->static_fields->__9;
    _9__88_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_List_EventCampaignEntity___TypeInfo, v145, v146);
    System_Comparison_object____ctor(_9__88_0, v150, Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__, 0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Comparison_List_EventCampaignEntity___o *)_9__88_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__88_0, (int32_t)_9__88_0, v152, v153);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v147,
    _9__88_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
  combineInfoComp = (struct CombineInfoComponent_o *)v167->fields.campaiginListPerSelectSvt;
  v167->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_164;
  combineInfoComp = (struct CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                       0,
                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_164;
  v154 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(v167, (EventCampaignEntity_o *)v154, v155);
LABEL_151:
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaign;
  if ( !combineInfoComp )
    goto LABEL_164;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)combineInfoComp,
                                                       0LL);
  if ( CombineEventCampaigns )
  {
    campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
    if ( !campaiginListPerSelectSvt )
      goto LABEL_164;
    v157 = campaiginListPerSelectSvt->fields._size > 0;
    if ( !combineInfoComp )
      goto LABEL_164;
  }
  else
  {
    v157 = 0;
    if ( !combineInfoComp )
      goto LABEL_164;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v157, 0LL);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v158 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v158 = MenuListControl_TypeInfo;
  }
  v159 = ChangedFPSUtil__CovertFrameNumToSecond(v158->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v160 = ExtraEasing__AsymptoticSeriesFloat(
           MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
           (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
           0LL);
  v163 = (AlphaTransitionCalculator_o *)sub_1B64314(AlphaTransitionCalculator_TypeInfo, v161, v162);
  AlphaTransitionCalculator___ctor(v163, v159, v160, 0LL);
  this->fields.campaignAlphaCalculator = v163;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.campaignAlphaCalculator, (int32_t)v163, v164, v165);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_164:
    sub_1B64324(combineInfoComp);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x29
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
  __int64 conductionWireInfo; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Int64_array *materialUsrSvtIdList; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Int64_array *v32; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v34; // x25
  struct UserServantEntity_o *baseData; // x8
  __int64 v36; // x21
  __int64 v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_long__o *v40; // x24
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_long__o *v43; // x23
  __int64 v44; // x26
  __int64 v45; // x1
  unsigned __int64 i; // x25
  struct System_Int64_array *v47; // x8
  int64_t v48; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v51; // x28
  __int64 v52; // x1
  UnityEngine_Transform_o *v53; // x22
  SetCombineData_o *v54; // x20
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v56; // x28
  MaterialSvtInfo_o *v57; // x29
  __int64 v58; // x1
  __int64 v59; // x2
  MaterialSvtInfo_ClickDelegate_o *v60; // x22
  Il2CppObject *Entity; // x28
  ServantLimitMaster_o *v62; // x29
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v65; // w22
  struct System_Int64_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  struct System_Int64_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  struct System_Int64_array *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  struct System_Int64_array *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v82; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x23
  __int64 v84; // x21
  __int64 v85; // x22
  int32_t v86; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v88; // x2
  int32_t checkLv; // w1
  int32_t v90; // w23
  struct UserServantEntity_o *v91; // x8
  UILabel_o *currentLvLb; // x22
  UILabel_o *increLvLb; // x22
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v96; // x21
  Il2CppObject *v97; // x0
  System_String_o *v98; // x1
  UserServantEntity_o *v99; // x8
  __int64 v100; // x21
  __int64 v101; // x22
  int32_t v102; // w24
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x22
  int32_t v106; // w2
  int32_t v107; // w3
  UserServantEntity_o *v108; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v110; // x8
  int v111; // w8
  int v112; // w8
  BalanceConfig_c *v113; // x0
  int32_t adjustHp; // w20
  uint32_t cctor_finished; // w9
  int v116; // w22
  int32_t StatusUpAdjustHp; // w8
  int v118; // w20
  int getHpAdjustVal; // w21
  int32_t v120; // w22
  int32_t v121; // w22
  int32_t v122; // w23
  int32_t v123; // w1
  BalanceConfig_c *v124; // x0
  int32_t adjustAtk; // w20
  uint32_t v126; // w9
  int32_t StatusUpAdjustAtk; // w8
  int v128; // w21
  int getAtkAdjustVal; // w22
  int v130; // w20
  int32_t v131; // w20
  int32_t v132; // w20
  int32_t v133; // w21
  int32_t v134; // w1
  bool v135; // w20
  float v136; // s0
  float v137; // s1
  float v138; // s2
  float v139; // s3
  const MethodInfo *v140; // x1
  UserServantEntity_o **p_baseData; // [xsp+10h] [xbp-B0h]
  int32_t targetLimitCnt; // [xsp+1Ch] [xbp-A4h]
  int32_t increAmount; // [xsp+20h] [xbp-A0h] BYREF
  int32_t v144; // [xsp+24h] [xbp-9Ch] BYREF
  __int64 v145; // [xsp+28h] [xbp-98h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+30h] [xbp-90h] BYREF
  __int64 maxAjustAtk; // [xsp+38h] [xbp-88h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-80h] BYREF
  System_String_array *skillNameList; // [xsp+48h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+50h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = data;
  if ( (byte_49FFD1F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, data);
    sub_1B640C8(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_1B640C8(&CombineSvtData_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_1B640C8(&int_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v23);
    sub_1B640C8(&StringLiteral_7319/*"INCREMENT_SVTLEVEL"*/, v24);
    sub_1B640C8(&StringLiteral_1/*""*/, v25);
    byte_49FFD1F = 1;
  }
  idList = 0LL;
  afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  skillNameList = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  maxAjustAtk = 0LL;
  v145 = 0LL;
  v144 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_133;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int32_t)materialUsrSvtIdList,
    v27,
    v28);
  v32 = v3->fields.materialUsrSvtIdList;
  if ( !v32 )
    goto LABEL_133;
  baseSvtData = v3->fields.baseSvtData;
  v34 = *(_QWORD *)&v32->max_length;
  this->fields.baseData = baseSvtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)baseSvtData, v30, v31);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_133;
  v37 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v36 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v152.fields.currentCryptoKey = v37;
  *(_QWORD *)&v152.fields.fakeValue = v36;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v152, 0LL);
  v40 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v38, v39);
  System_Collections_Generic_List_long____ctor(
    v40,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  v43 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v41, v42);
  System_Collections_Generic_List_long____ctor(
    v43,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v34 >= 1 )
  {
    conductionWireInfo = (__int64)this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_133;
    v44 = (unsigned int)v34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conductionWireInfo, 0, 0LL);
    for ( i = 0LL; i != v44; ++i )
    {
      v47 = v3->fields.materialUsrSvtIdList;
      if ( !v47 )
        goto LABEL_133;
      if ( i >= v47->max_length )
        goto LABEL_134;
      conductionWireInfo = (__int64)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_133;
      v48 = v47->m_Items[i];
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)conductionWireInfo, 0LL);
      conductionWireInfo = (__int64)BaseMonoBehaviour__createObject(
                                      (BaseMonoBehaviour_o *)this,
                                      svtFaceInfo,
                                      transform,
                                      0LL,
                                      0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v51 = (UnityEngine_GameObject_o *)conductionWireInfo;
      conductionWireInfo = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)conductionWireInfo,
                                      0LL);
      v53 = (UnityEngine_Transform_o *)conductionWireInfo;
      if ( !byte_49F7111 )
      {
        conductionWireInfo = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v52);
        byte_49F7111 = 1;
      }
      if ( !v53 )
        goto LABEL_133;
      v54 = v3;
      UnityEngine_Transform__set_localPosition(v53, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      conductionWireInfo = (__int64)UnityEngine_GameObject__get_transform(v51, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v156.fields.x = 0.5;
      v156.fields.y = 0.5;
      v156.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v156, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v51,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v56 = this->fields.baseData;
      v57 = (MaterialSvtInfo_o *)Component_object;
      v60 = (MaterialSvtInfo_ClickDelegate_o *)sub_1B64314(MaterialSvtInfo_ClickDelegate_TypeInfo, v58, v59);
      MaterialSvtInfo_ClickDelegate___ctor(
        v60,
        (Il2CppObject *)this,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0LL);
      if ( !v57 )
        goto LABEL_133;
      MaterialSvtInfo__setMaterialSvtInfo(v57, i, v56, v48, 1, 0, v60, 0LL);
      conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)conductionWireInfo,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo,
                 v48,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)conductionWireInfo,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_133;
      v62 = (ServantLimitMaster_o *)conductionWireInfo;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v153.fields.currentCryptoKey = klass;
      *(_QWORD *)&v153.fields.fakeValue = monitor;
      v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v153, 0LL);
      conductionWireInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                             0LL);
      if ( !v62 )
        goto LABEL_133;
      conductionWireInfo = (__int64)ServantLimitMaster__GetEntity(v62, v65, conductionWireInfo, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v3 = v54;
      if ( *(int *)(conductionWireInfo + 24) >= 4 )
      {
        if ( !v40 )
          goto LABEL_133;
        items = v40->fields._items;
        v67 = Method_System_Collections_Generic_List_long__Add__;
        ++v40->fields._version;
        if ( !items )
          goto LABEL_133;
        size = v40->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v40,
            v48,
            *(const MethodInfo_3495074 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v40->fields._size = size + 1;
          items->m_Items[size] = v48;
        }
      }
      conductionWireInfo = UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL);
      if ( (conductionWireInfo & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_133;
        v69 = v43->fields._items;
        v70 = Method_System_Collections_Generic_List_long__Add__;
        ++v43->fields._version;
        if ( !v69 )
          goto LABEL_133;
        v71 = v43->fields._size;
        if ( (unsigned int)v71 >= v69->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v43,
            v48,
            *(const MethodInfo_3495074 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v43->fields._size = v71 + 1;
          v69->m_Items[v71] = v48;
        }
      }
      conductionWireInfo = UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL);
      if ( (conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
    }
    if ( !v40 )
      goto LABEL_133;
    v72 = System_Collections_Generic_List_long___ToArray(
            v40,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v72;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.highRarityList, (int32_t)v72, v73, v74);
    if ( !v43 )
      goto LABEL_133;
    v75 = System_Collections_Generic_List_long___ToArray(
            v43,
            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v75;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.exceededCheckList, (int32_t)v75, v76, v77);
    conductionWireInfo = (__int64)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v54->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v144 = spendQp;
    conductionWireInfo = (__int64)System_Int32__ToString_62180668(
                                    (int32_t)&v144,
                                    (System_String_o *)StringLiteral_9164/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_133;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v54->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v144 = getExp;
    conductionWireInfo = (__int64)System_Int32__ToString((int32_t)&v144, 0LL);
    if ( !expLb )
      goto LABEL_133;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)conductionWireInfo,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v82 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v85 = *(_QWORD *)&v82->fields.svtId.fields.currentCryptoKey;
    v84 = *(_QWORD *)&v82->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v154.fields.currentCryptoKey = v85;
    *(_QWORD *)&v154.fields.fakeValue = v84;
    conductionWireInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v154, 0LL);
    if ( !v83 )
      goto LABEL_133;
    conductionWireInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    v83,
                                    conductionWireInfo,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v86 = *(_DWORD *)(conductionWireInfo + 132);
    conductionWireInfo = (__int64)this->fields.baseData;
    this->fields.expType = v86;
    if ( !conductionWireInfo )
      goto LABEL_133;
    this->fields.totalExp = *(_DWORD *)(conductionWireInfo + 260) + this->fields._getExpVal_k__BackingField;
    this->fields.checkLv = *(_DWORD *)(conductionWireInfo + 256);
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL);
    checkLv = this->fields.checkLv;
    v90 = LevelMax;
    if ( checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, checkLv, v88) )
        checkLv = this->fields.checkLv;
    }
    conductionWireInfo = (__int64)this->fields.currentLvObj;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conductionWireInfo, 1, 0LL);
    conductionWireInfo = (__int64)this->fields.increLvObj;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conductionWireInfo, 1, 0LL);
    conductionWireInfo = (__int64)this->fields.increValLb;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)conductionWireInfo,
                                    0LL);
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conductionWireInfo, 1, 0LL);
    v91 = this->fields.baseData;
    if ( !v91 )
      goto LABEL_133;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (__int64)System_Int32__ToString((int)v91 + 256, 0LL);
    if ( !currentLvLb )
      goto LABEL_133;
    UILabel__set_text(currentLvLb, (System_String_o *)conductionWireInfo, 0LL);
    increLvLb = this->fields.increLvLb;
    p_increLv = &this->fields.increLv;
    conductionWireInfo = (__int64)System_Int32__ToString((int)this + 528, 0LL);
    if ( !increLvLb )
      goto LABEL_133;
    UILabel__set_text(increLvLb, (System_String_o *)conductionWireInfo, 0LL);
    if ( !*p_baseData )
      goto LABEL_133;
    this->fields.increAmount = this->fields.increLv - (*p_baseData)->fields.lv;
    increValLb = this->fields.increValLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v96 = LocalizationManager__Get((System_String_o *)StringLiteral_7319/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    conductionWireInfo = (__int64)System_String__Format(v96, v97, 0LL);
    if ( !increValLb )
      goto LABEL_133;
    UILabel__set_text(increValLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (__int64)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CheckCombineResStatus__getCombineResStatus(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (int32_t *)&afterAtk + 1,
      (int32_t *)&afterAtk,
      *p_baseData,
      *p_increLv,
      0LL);
    HIDWORD(afterAtk) += v54->fields.getHpAdjustVal;
    LODWORD(afterAtk) = v54->fields.getAtkAdjustVal + afterAtk;
    conductionWireInfo = (__int64)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
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
LABEL_134:
        sub_1B6432C(conductionWireInfo, v45);
      v98 = skillNameList->m_Items[0];
      if ( v98 )
      {
        conductionWireInfo = (__int64)this->fields.getSkillLb;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, v98, 0LL);
      }
    }
    v99 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v101 = *(_QWORD *)&v99->fields.limitCount.fields.currentCryptoKey;
    v100 = *(_QWORD *)&v99->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v155.fields.currentCryptoKey = v101;
    *(_QWORD *)&v155.fields.fakeValue = v100;
    v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v155, 0LL);
    v105 = sub_1B64314(CombineSvtData_TypeInfo, v103, v104);
    CombineSvtData___ctor((CombineSvtData_o *)v105, 0LL);
    if ( !v105 )
      goto LABEL_133;
    v108 = *p_baseData;
    *(_QWORD *)(v105 + 16) = *p_baseData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v105 + 16), (int32_t)v108, v106, v107);
    increLv = this->fields.increLv;
    *(_DWORD *)(v105 + 32) = v90;
    *(_DWORD *)(v105 + 24) = increLv;
    *(_DWORD *)(v105 + 28) = v102;
    v110 = this->fields.baseData;
    if ( !v110 )
      goto LABEL_133;
    conductionWireInfo = (__int64)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp[1],
      lateExp,
      this->fields.totalExp,
      v110->fields.lv,
      v90,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v105 + 36) = lateExp[1];
    v111 = HIDWORD(afterAtk);
    *(_DWORD *)(v105 + 40) = lateExp[0];
    *(_DWORD *)(v105 + 44) = v111;
    v112 = afterAtk;
    *(_DWORD *)(v105 + 48) = v54->fields.getHpAdjustVal;
    *(_DWORD *)(v105 + 52) = v112;
    *(_DWORD *)(v105 + 56) = v54->fields.getAtkAdjustVal;
    conductionWireInfo = (__int64)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v105,
      0LL);
    *(_QWORD *)secondMaxAdjustAtk = 0LL;
    maxAjustAtk = 0LL;
    conductionWireInfo = (__int64)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    UserServantEntity__GetAdjustMax(
      (UserServantEntity_o *)conductionWireInfo,
      (int32_t *)&maxAjustAtk + 1,
      (int32_t *)&maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0LL);
    conductionWireInfo = (__int64)this->fields.resAdjustInfo;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conductionWireInfo, 1, 0LL);
    conductionWireInfo = (__int64)this->fields.resAdjustHpIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)conductionWireInfo,
                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v157.fields.r = 1.0;
    v157.fields.g = 1.0;
    v157.fields.b = 1.0;
    v157.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v157, 0LL);
    conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)conductionWireInfo,
                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v158.fields.r = 1.0;
    v158.fields.g = 1.0;
    v158.fields.b = 1.0;
    v158.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v158, 0LL);
    if ( !*p_baseData )
      goto LABEL_133;
    v113 = BalanceConfig_TypeInfo;
    adjustHp = (*p_baseData)->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v113 = BalanceConfig_TypeInfo;
      cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    }
    v116 = HIDWORD(maxAjustAtk);
    StatusUpAdjustHp = v113->static_fields->StatusUpAdjustHp;
    v118 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v145) = v118;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v113);
      v113 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v118 >= StatusUpAdjustHp * v116 )
    {
      v120 = secondMaxAdjustAtk[1];
      if ( v113->_2.cctor_finished )
      {
LABEL_96:
        conductionWireInfo = (__int64)this->fields.resAdjustHpIconLabel;
        v121 = StatusUpAdjustHp * v120;
        if ( !conductionWireInfo )
          goto LABEL_133;
        v122 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v118;
        UIIconLabel__Set_37921148((UIIconLabel_o *)conductionWireInfo, 44, v122, v121, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_62180496((int32_t)&v145 + 4, v122, 0LL) )
        {
          conductionWireInfo = (__int64)this->fields.resAdjustHpIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_133;
          if ( v122 >= v121 )
            v123 = v121;
          else
            v123 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v118;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v123, v121, v122 >= v121, 0LL);
        }
        conductionWireInfo = (__int64)this->fields.resAdjustHpMaxLabel;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !*p_baseData )
          goto LABEL_133;
        v124 = BalanceConfig_TypeInfo;
        adjustAtk = (*p_baseData)->fields.adjustAtk;
        v126 = BalanceConfig_TypeInfo->_2.cctor_finished;
        if ( !v126 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v124 = BalanceConfig_TypeInfo;
          v126 = BalanceConfig_TypeInfo->_2.cctor_finished;
        }
        StatusUpAdjustAtk = v124->static_fields->StatusUpAdjustAtk;
        v128 = StatusUpAdjustAtk * adjustAtk;
        LODWORD(v145) = StatusUpAdjustAtk * adjustAtk;
        getAtkAdjustVal = v3->fields.getAtkAdjustVal;
        v130 = maxAjustAtk;
        if ( !v126 )
        {
          j_il2cpp_runtime_class_init_0(v124);
          v124 = BalanceConfig_TypeInfo;
          StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        }
        if ( v128 >= StatusUpAdjustAtk * v130 )
        {
          v131 = secondMaxAdjustAtk[0];
          if ( v124->_2.cctor_finished )
            goto LABEL_112;
        }
        else
        {
          v131 = maxAjustAtk;
          if ( v124->_2.cctor_finished )
          {
LABEL_112:
            conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
            v132 = StatusUpAdjustAtk * v131;
            if ( !conductionWireInfo )
              goto LABEL_133;
            v133 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v128;
            UIIconLabel__Set_37921148((UIIconLabel_o *)conductionWireInfo, 45, v133, v132, 0, 0LL, 0, 0, 0, 0LL);
            if ( !System_Int32__Equals_62180496((int32_t)&v145, v133, 0LL) )
            {
              conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
              if ( !conductionWireInfo )
                goto LABEL_133;
              if ( v133 >= v132 )
                v134 = v132;
              else
                v134 = v133;
              UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v134, v132, v133 >= v132, 0LL);
            }
            conductionWireInfo = (__int64)this->fields.resAdjustAtkMaxLabel;
            if ( conductionWireInfo )
            {
              UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              conductionWireInfo = (__int64)this->fields.qpLb;
              if ( this->fields.haveQpVal >= this->fields._spendQpVal_k__BackingField )
              {
                if ( conductionWireInfo )
                {
                  v136 = 1.0;
                  v135 = 1;
                  v137 = 1.0;
                  goto LABEL_131;
                }
              }
              else if ( conductionWireInfo )
              {
                v135 = 0;
                v136 = 1.0;
                v137 = 0.0;
LABEL_131:
                v138 = v137;
                v139 = v136;
                UIWidget__set_color((UIWidget_o *)conductionWireInfo, *(UnityEngine_Color_o *)&v136, 0LL);
                this->fields._IsExeCombine_k__BackingField = v135;
                ServantCombineControl__SetExeBtnState(this, v140);
                return;
              }
            }
LABEL_133:
            sub_1B64324(conductionWireInfo);
          }
        }
        j_il2cpp_runtime_class_init_0(v124);
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        goto LABEL_112;
      }
    }
    else
    {
      v120 = HIDWORD(maxAjustAtk);
      if ( v113->_2.cctor_finished )
        goto LABEL_96;
    }
    j_il2cpp_runtime_class_init_0(v113);
    StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    goto LABEL_96;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_44710236(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x24
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v27; // x23
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v30; // s0
  float v31; // s8
  float v32; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v34; // x21
  __int64 v35; // x25
  float v36; // s9
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v38; // x21
  int32_t SvtClassId; // w0
  __int64 v40; // x1
  __int64 v41; // x2
  int size; // w8
  const MethodInfo_34AD404 **v43; // x29
  System_Collections_Generic_List_object__o *v44; // x21
  BalanceConfig_c **v45; // x25
  int v46; // w23
  int32_t v47; // w22
  int32_t v48; // w28
  ServantCombineControl_o *v49; // x19
  int64_t v50; // x27
  __int64 v51; // x21
  __int64 v52; // x26
  int32_t v53; // w0
  int64_t v54; // x21
  CombineMaterialEntity_o *v55; // x26
  __int64 v56; // x1
  int v57; // w8
  int value; // w26
  int v59; // w21
  BalanceConfig_c *v60; // x0
  ServantCombineControl_c *v61; // x8
  int SameClassExp; // w21
  float FIXED_VAL; // s10
  double v64; // d0
  unsigned int v65; // w8
  BalanceConfig_c **v66; // x20
  const MethodInfo_34AD404 **v67; // x25
  System_Collections_Generic_List_object__o *v68; // x29
  float v69; // s0
  unsigned int v70; // w8
  unsigned int v71; // w24
  int32_t v72; // w3
  int32_t CombineQp; // w21
  float v74; // s0
  unsigned int v75; // w8
  int32_t v76; // w26
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  const MethodInfo *v81; // x3
  struct UserServantEntity_o *v82; // x8
  ServantCombineControl_c *v83; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  struct UserServantEntity_o *v87; // x1
  int32_t v88; // w8
  bool isAdjustAtkMax; // w0
  __int64 v90; // x1
  __int64 v91; // x2
  bool isSecondAdjustAtkMax; // w0
  System_Collections_Generic_List_long__o *v93; // x20
  int32_t v94; // w23
  int32_t v95; // w22
  __int128 v96; // q0
  struct System_Int64_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  System_Int64_array *v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  int v104; // [xsp+0h] [xbp-F0h]
  int v105; // [xsp+4h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v106; // [xsp+8h] [xbp-E8h]
  int32_t expType; // [xsp+14h] [xbp-DCh]
  int64_t v108; // [xsp+18h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v109; // [xsp+20h] [xbp-D0h]
  CombineMaterialMaster_o *v110; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v113; // [xsp+78h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)targetMaterialList;
  if ( (byte_49FFD2D & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, targetMaterialList);
    sub_1B640C8(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v18);
    sub_1B640C8(&System_Math_TypeInfo, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1B640C8(&ServantCombineControl_TypeInfo, v22);
    sub_1B640C8(&SetCombineData_TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_49FFD2D = 1;
  }
  v113 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                        targetMaterialList,
                                                        method);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  v27 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_101;
  v109 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  combineEventList = menuListCtr->fields.combineEventList;
  v30 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  v31 = v30;
  v32 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_101;
  v35 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v36 = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v114.fields.currentCryptoKey = v35;
  *(_QWORD *)&v114.fields.fakeValue = v34;
  v110 = (CombineMaterialMaster_o *)v27;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v114, 0LL);
  if ( !MasterData_object )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_101;
  v38 = this->fields.baseData;
  v108 = Instance;
  if ( !v38 )
    goto LABEL_101;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v38, 0, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v38, SvtClassId, 0LL);
  v104 = Instance;
  if ( !v3 )
    goto LABEL_101;
  size = v3->fields._size;
  v105 = size - 1;
  v43 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v44 = v113;
  if ( size < 1 )
  {
    v47 = 0;
    v46 = 0;
LABEL_70:
    v76 = v47;
    if ( v44 )
      goto LABEL_73;
  }
  else
  {
    v106 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v45 = &BalanceConfig_TypeInfo;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    while ( 1 )
    {
      v49 = this;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v3, v48, *v43);
      if ( !Instance )
        goto LABEL_101;
      v50 = Instance;
      v52 = *(_QWORD *)(Instance + 80);
      v51 = *(_QWORD *)(Instance + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v115.fields.currentCryptoKey = v52;
      *(_QWORD *)&v115.fields.fakeValue = v51;
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v115, 0LL);
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v106,
                            v53,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_101;
      v54 = Instance;
      Instance = (int64_t)v110;
      if ( !v110 )
        goto LABEL_101;
      v55 = CombineMaterialMaster__GetEntity(v110, *(_DWORD *)(v54 + 136), *(_DWORD *)(v50 + 256), 0LL);
      Instance = (int64_t)v109;
      if ( !v109 )
        goto LABEL_101;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v109,
                            *(_DWORD *)(v54 + 80),
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v55 || !Instance )
        goto LABEL_101;
      v57 = *(_DWORD *)(Instance + 52);
      value = v55->fields.value;
      if ( v57 == 3 )
        goto LABEL_30;
      if ( v57 == v104 )
      {
        Instance = (int64_t)v49->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        v59 = *(_DWORD *)(v54 + 80);
        if ( v59 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL) )
        {
LABEL_30:
          v60 = *v45;
          if ( !(*v45)->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v60);
            v60 = *v45;
          }
          v61 = ServantCombineControl_TypeInfo;
          SameClassExp = v60->static_fields->SameClassExp;
          if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v61 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v61->static_fields->FIXED_VAL;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v64 = (double)value * (double)SameClassExp / FIXED_VAL;
          v65 = vcvtpd_s64_f64(v64);
          if ( ceil(v64) == INFINITY )
            value = 0x80000000;
          else
            value = v65;
        }
      }
      v66 = v45;
      v67 = v43;
      if ( !byte_49F779D )
      {
        sub_1B640C8(&System_Math_TypeInfo, v56);
        byte_49F779D = 1;
      }
      v68 = v3;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = (int64_t)v49->fields.baseData;
      v69 = v31 * (float)value;
      v70 = vcvtps_s32_f32(v69);
      v71 = ceilf(v69) == INFINITY ? 0x80000000 : v70;
      if ( !Instance )
        goto LABEL_101;
      CombineQp = UserServantEntity__getCombineQp((UserServantEntity_o *)Instance, 0LL);
      if ( !byte_49F779D )
      {
        sub_1B640C8(&System_Math_TypeInfo, v40);
        byte_49F779D = 1;
      }
      Instance = (int64_t)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v74 = v36 * (float)CombineQp;
      v75 = vcvtps_s32_f32(v74);
      if ( ceilf(v74) == INFINITY )
        v75 = 0x80000000;
      if ( !v108 )
        goto LABEL_101;
      v44 = v113;
      v76 = v75 + v47;
      if ( (signed int)(v75 + v47) > *(_DWORD *)(v108 + 96) )
      {
        this = v49;
        v43 = v67;
        v49->fields.isQpCondClear = 0;
        goto LABEL_70;
      }
      if ( !v113 )
        goto LABEL_101;
      items = v113->fields._items;
      v78 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v113->fields._version;
      if ( !items )
        goto LABEL_101;
      v79 = v44->fields._size;
      if ( (unsigned int)v79 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v50,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + v79;
        v44->fields._size = v79 + 1;
        v80[4] = (Il2CppClass *)v50;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), v50, v41, v72);
      }
      v82 = v49->fields.baseData;
      if ( !v82 )
        goto LABEL_101;
      v46 += v71;
      this = v49;
      if ( ServantCombineControl__IsLevelMax(v49, v82->fields.exp + v46, expType, v81) )
        break;
      v83 = ServantCombineControl_TypeInfo;
      if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        v83 = ServantCombineControl_TypeInfo;
      }
      v3 = v68;
      v43 = v67;
      if ( v48 != v83->static_fields->MAX_SELECT_NUM - 1 )
      {
        v47 = v76;
        v45 = v66;
        if ( v105 != v48++ )
          continue;
      }
      goto LABEL_73;
    }
    v43 = v67;
LABEL_73:
    if ( v44->fields._size < 1 )
    {
      return 0LL;
    }
    else
    {
      v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(SetCombineData_TypeInfo, v40, v41);
      SetCombineData___ctor((SetCombineData_o *)v44, 0LL);
      if ( !v44 )
        goto LABEL_101;
      v87 = this->fields.baseData;
      v44->fields._items = (struct System_Object_array *)v87;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44->fields, (int32_t)v87, v85, v86);
      v88 = v113->fields._size;
      v44->fields._version = v76;
      LODWORD(v44->fields._syncRoot) = v46;
      v44[1].monitor = 0LL;
      v44->fields._size = v88;
      Instance = (int64_t)this->fields.baseData;
      if ( !Instance )
        goto LABEL_101;
      if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)Instance, 0LL) )
      {
        Instance = (int64_t)this->fields.baseData;
        if ( Instance )
        {
          isAdjustAtkMax = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
          goto LABEL_81;
        }
        goto LABEL_101;
      }
      isAdjustAtkMax = 0;
LABEL_81:
      BYTE4(v44[1].klass) = isAdjustAtkMax;
      Instance = (int64_t)this->fields.baseData;
      if ( !Instance )
LABEL_101:
        sub_1B64324(Instance);
      if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)Instance, 0LL) )
      {
        Instance = (int64_t)this->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)Instance, 0LL);
      }
      else
      {
        isSecondAdjustAtkMax = 0;
      }
      BYTE5(v44[1].klass) = isSecondAdjustAtkMax;
      v93 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v90,
                                                         v91);
      System_Collections_Generic_List_long____ctor(
        v93,
        (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
      v94 = v113->fields._size;
      if ( v94 >= 1 )
      {
        v95 = 0;
        while ( 1 )
        {
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v113, v95, *v43);
          if ( !Instance )
            goto LABEL_101;
          v96 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v112.fields.fakeValue = v96;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v111 = v112;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v111, 0LL);
          if ( !v93 )
            goto LABEL_101;
          v97 = v93->fields._items;
          v98 = Method_System_Collections_Generic_List_long__Add__;
          ++v93->fields._version;
          if ( !v97 )
            goto LABEL_101;
          v99 = v93->fields._size;
          if ( (unsigned int)v99 >= v97->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v93,
              Instance,
              *(const MethodInfo_3495074 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
          }
          else
          {
            v93->fields._size = v99 + 1;
            v97->m_Items[v99] = Instance;
          }
          if ( v94 == ++v95 )
            goto LABEL_99;
        }
      }
      if ( !v93 )
        goto LABEL_101;
LABEL_99:
      v100 = System_Collections_Generic_List_long___ToArray(
               v93,
               (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
      v44[1].fields._items = (struct System_Object_array *)v100;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v44[1].fields, (int32_t)v100, v101, v102);
    }
  }
  return (SetCombineData_o *)v44;
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
    sub_1B64324(0LL);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  ServantCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_37591604; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_49FFD1E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantCombineControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FFD1E = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
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
  p_charaGraph = (ServantCombineControl_o **)&v4->fields.charaGraph;
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


void __fastcall ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_49FFD26 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_49FFD26 = 1;
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


void __fastcall ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  UILabel_o *haveQpLb; // x20

  if ( (byte_49FFD19 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, method);
    byte_49FFD19 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62180668((int)this + 540, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B64324(SelfUserGame);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


void __fastcall ServantCombineControl__SetIsRecommendedButtonEnabled(
        ServantCombineControl_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UICommonButton_o *recommendedButton; // x0
  UICommonButton_o *v5; // x19
  UserServantEntity_o *baseData; // x0
  bool v7; // w8

  recommendedButton = this->fields.recommendedButton;
  if ( isEnabled )
    v5 = recommendedButton;
  else
    v5 = 0LL;
  if ( isEnabled && this->fields.isSelectBase )
  {
    baseData = this->fields.baseData;
    if ( baseData )
      v7 = !UserServantEntity__isLevelMax(baseData, 0LL);
    else
      v7 = 0;
    recommendedButton = v5;
    if ( !v5 )
LABEL_12:
      sub_1B64324(recommendedButton);
  }
  else
  {
    v7 = 0;
    if ( !recommendedButton )
      goto LABEL_12;
  }
  UICommonButton__SetButtonEnable(recommendedButton, v7, 1, 0LL);
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
    sub_1B64324(0LL);
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
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x2
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v28; // x2
  Il2CppObject *Instance; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x20
  ServantCombineControl___c_c *v33; // x8
  System_Action_o *_9__107_1; // x22
  System_String_o *v35; // x21
  Il2CppObject *v36; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x19
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  System_String_o *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  CommonConfirmDialog_ClickDelegate_o *v46; // x24
  System_String_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x22

  if ( (byte_49FFD2A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, v7);
    sub_1B640C8(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__, v8);
    sub_1B640C8(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__, v9);
    sub_1B640C8(&ServantCombineControl___c__DisplayClass107_0_TypeInfo, v10);
    sub_1B640C8(&ServantCombineControl___c_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_10946/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, v12);
    sub_1B640C8(&StringLiteral_10945/*"RECOMMENDED_NOT_HAVE_QP"*/, v13);
    sub_1B640C8(&StringLiteral_10944/*"RECOMMENDED_NOT_EXIST_MSG"*/, v14);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    byte_49FFD2A = 1;
  }
  v18 = sub_1B64314(ServantCombineControl___c__DisplayClass107_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v20, v21);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v22);
  *(_QWORD *)(v18 + 24) = RecommendedCombineData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)RecommendedCombineData, v24, v25);
  isQpCondClear = this->fields.isQpCondClear;
  if ( !*(_QWORD *)(v18 + 24) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isQpCondClear )
      {
LABEL_10:
        recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10944/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                  0LL);
        v32 = (System_String_o *)recommendedConfigDialog;
        v33 = ServantCombineControl___c_TypeInfo;
        if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
          v33 = ServantCombineControl___c_TypeInfo;
        }
        _9__107_1 = v33->static_fields->__9__107_1;
        v35 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__107_1 )
        {
          if ( !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            v33 = ServantCombineControl___c_TypeInfo;
          }
          v36 = (Il2CppObject *)v33->static_fields->__9;
          _9__107_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v30, v31);
          System_Action___ctor(_9__107_1, v36, Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, 0LL);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
          static_fields->__9__107_1 = _9__107_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__107_1, (int32_t)_9__107_1, v38, v39);
        }
        if ( !Instance )
          goto LABEL_25;
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v35,
          v32,
          _9__107_1,
          -1,
          0,
          0,
          0,
          0,
          25,
          0,
          0,
          0LL,
          0.0,
          0LL);
        return;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isQpCondClear )
        goto LABEL_10;
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10945/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
    v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v48, v49);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v18,
      Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v47,
      v50,
      -1,
      0,
      0,
      0,
      0,
      28,
      0,
      0,
      0LL,
      0.0,
      0LL);
    return;
  }
  if ( this->fields.isQpCondClear )
  {
    recommendedConfigDialog = this->fields.recommendedConfigDialog;
    if ( recommendedConfigDialog )
    {
      RecommenededConfigDialog__Close_44687120(recommendedConfigDialog, 0LL, v26);
      ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v18 + 24), v28);
      return;
    }
LABEL_25:
    sub_1B64324(recommendedConfigDialog);
  }
  v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10946/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v44, v45);
  CommonConfirmDialog_ClickDelegate___ctor(
    v46,
    (Il2CppObject *)v18,
    Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__,
    0LL);
  if ( !v40 )
    goto LABEL_25;
  CommonUI__OpenConfirmDialog_30344968(
    (CommonUI_o *)v40,
    (System_String_o *)StringLiteral_1/*""*/,
    v41,
    v42,
    v43,
    v46,
    0,
    0,
    0,
    0LL);
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
    sub_1B64324(preSelectBaseLb);
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
  UIWidget_o *v12; // x21
  __int64 *v13; // x8
  System_String_o *v14; // x1
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFD27 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_7326/*"INFO_MSG_COMBINE_MATERIAL"*/, v6);
    sub_1B640C8(&StringLiteral_7335/*"INFO_MSG_SVTCOMBINE_BASE"*/, v7);
    sub_1B640C8(&StringLiteral_5730/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_1B640C8(&StringLiteral_12055/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FFD27 = 1;
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
    v13 = &StringLiteral_7326/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
    v13 = &StringLiteral_7335/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  v14 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, v14, 0LL);
}


void __fastcall ServantCombineControl__SetupCampaign(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *eventInfoData,
        const MethodInfo *method)
{
  ServantCombineControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t target; // w8
  float y; // s9
  float x; // s10
  float z; // s8
  int v12; // w8
  int v13; // w9
  UISprite_o *campaign; // x21
  System_String_o *v15; // x0
  UILabel_o *campaignLabel; // x20
  __int64 v17; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FFD1C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignMaster___, eventInfoData);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (ServantCombineControl_o *)sub_1B640C8(&StringLiteral_20428/*"img_txt_campaign_"*/, v6);
    byte_49FFD1C = 1;
  }
  v17 = 0LL;
  if ( !byte_49F7111 )
  {
    this = (ServantCombineControl_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, eventInfoData);
    byte_49F7111 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_1B64324(this);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  target = eventInfoData->fields.target;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( target > 5 )
  {
    if ( target != 27 )
    {
      if ( (target & 0xFFFFFFFE) != 32 )
        goto LABEL_15;
      goto LABEL_13;
    }
LABEL_11:
    v12 = 1;
    z = 0.0;
    v13 = 1113849856;
LABEL_14:
    y = 4.0;
    x = *(float *)&v13;
    HIDWORD(v17) = v12;
    goto LABEL_15;
  }
  if ( target == 2 )
    goto LABEL_11;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_13:
    v12 = 2;
    z = 0.0;
    v13 = 1119748096;
    goto LABEL_14;
  }
LABEL_15:
  campaign = v4->fields.campaign;
  v15 = System_Int32__ToString((int32_t)&v17 + 4, 0LL);
  this = (ServantCombineControl_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_20428/*"img_txt_campaign_"*/, v15, 0LL);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)EventCampaignMaster__getData(
                                      (EventCampaignMaster_o *)this,
                                      eventInfoData->fields.eventId,
                                      0LL);
  if ( !this )
    goto LABEL_24;
  LODWORD(v17) = SLODWORD(this->fields.baseUserServantEntity) / 1000;
  campaignLabel = v4->fields.campaignLabel;
  this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v17, 0LL);
  if ( !campaignLabel )
    goto LABEL_24;
  UILabel__set_text(campaignLabel, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaignLabel;
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v18, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  UserGameEntity_o *SelfUserGame; // x0
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_49FFD22 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, v3);
    byte_49FFD22 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0LL )
    sub_1B64324(SelfUserGame);
  SetRarityDialogControl__SetExceedMaterialInfo(
    exeCombineDlg,
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
  __int64 v9; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int32_t lockCountObj; // w21
  signed __int64 v12; // x23
  unsigned __int64 max_length; // x27
  int64_t v14; // x22

  if ( (byte_49FFD21 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_49FFD21 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  lockCountObj = (int32_t)SelfUserGame->fields.lockCountObj;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v12 >= (int)max_length )
      break;
    if ( v12 >= max_length )
      sub_1B6432C(SelfUserGame, v9);
    v14 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v12];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v14,
                                          (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v12;
          if ( selectMaterialUsrSvtIdList_k__BackingField )
            continue;
        }
      }
    }
    goto LABEL_15;
  }
  SelfUserGame = (DataManager_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_15:
    sub_1B64324(SelfUserGame);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v7,
    this->fields._spendQpVal_k__BackingField,
    lockCountObj,
    v12 < (int)max_length,
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
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x21
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_49FFD30 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&progress);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v10);
    byte_49FFD30 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_21:
      v20 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_61;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v21);
LABEL_61:
      sub_1B64324(v21);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v21,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1B64324(0LL);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v24 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_33;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_33:
      v29 = sub_1BB60A8(v24, System_IDisposable_TypeInfo, 0LL);
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
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  if ( progress == 1 )
  {
    helpBtn = this->fields.charaGraphBase;
    if ( !helpBtn )
      goto LABEL_63;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0LL);
    if ( !helpBtn )
      goto LABEL_63;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
    if ( !helpBtn )
      goto LABEL_63;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)helpBtn,
                                            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !helpBtn )
      goto LABEL_63;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  }
  else if ( progress == 3 )
  {
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
    if ( helpBtn )
    {
      helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)helpBtn,
                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( helpBtn )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
        helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
        if ( helpBtn )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))helpBtn->klass[1]._1.implementedInterfaces)(
            helpBtn,
            0LL,
            1LL,
            helpBtn->klass[1]._1.interfaceOffsets);
          return;
        }
      }
    }
LABEL_63:
    sub_1B64324(helpBtn);
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
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x20
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v30; // x8
  struct SetRarityDialogControl_o *v31; // x8

  if ( (byte_49FFD2F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v9);
    byte_49FFD2F = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_64;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectGrid;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_21;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_21:
      v19 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_62;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v20);
LABEL_62:
      sub_1B64324(v20);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v20,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1B64324(0LL);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0LL);
  }
  v23 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_33;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_33:
      v28 = sub_1BB60A8(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
  helpBtn = this->fields.charaGraphBase;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_64;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v30 = this->fields.exeCombineDlg;
  if ( !v30 )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)v30->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL);
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
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
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                helpBtn,
                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_64:
    sub_1B64324(helpBtn);
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
  void *campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
  bool v15; // w1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v16; // x8
  int size; // w8
  const MethodInfo *v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  int64_t v20; // x20
  int *v21; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v23; // x2
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v27; // s8
  MenuListControl_c *v28; // x0
  const MethodInfo *v29; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  int64_t v31; // x20
  int *v32; // x8
  int32_t campaiginPerSelectSvtListIndex; // w1
  Il2CppObject *v34; // x0
  const MethodInfo *v35; // x2
  int32_t v36; // w1
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x2
  struct AlphaTransitionCalculator_o *v39; // x8

  if ( (byte_49FFD14 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v8);
    sub_1B640C8(&MenuListControl_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_TransitionCalculator_float__Update__, v11);
    sub_1B640C8(&Method_TransitionCalculator_float__get_Current__, v12);
    byte_49FFD14 = 1;
  }
  if ( this->fields.isSelectBase )
  {
    campaign = this->fields.campaign;
    if ( !campaign )
      goto LABEL_67;
    campaign = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)campaign, 0LL);
    campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
    if ( campaiginListPerSelectSvt )
    {
      v15 = campaiginListPerSelectSvt->fields._size > 0;
      if ( !campaign )
        goto LABEL_67;
    }
    else
    {
      v15 = 0;
      if ( !campaign )
        goto LABEL_67;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, v15, 0LL);
    v16 = this->fields.campaiginListPerSelectSvt;
    if ( v16 )
    {
      size = v16->fields._size;
      if ( size >= 1 )
      {
        if ( size == 1 )
        {
          campaign = this->fields.campaign;
          if ( campaign )
          {
            (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)campaign + 440LL))(
              campaign,
              *(_QWORD *)(*(_QWORD *)campaign + 448LL),
              1.0);
            campaign = ServantCombineControl__get_EventMaster(this, v18);
            if ( this->fields.campaiginListPerSelectSvt )
            {
              v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this->fields.campaiginListPerSelectSvt,
                           0,
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                if ( campaign )
                {
                  if ( v19 )
                  {
                    campaign = DataMasterBase_object__object__int___GetEntity(
                                 v19,
                                 *((_DWORD *)campaign + 4),
                                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                    if ( campaign )
                    {
                      v20 = *((_QWORD *)campaign + 12);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( v20 >= NetworkManager__getTime(0LL) )
                        return;
                      campaign = this->fields.campaiginListPerSelectSvt;
                      if ( campaign )
                      {
                        campaign = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)campaign,
                                     0,
                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                        if ( campaign )
                        {
                          System_Collections_Generic_List_object___RemoveAt(
                            (System_Collections_Generic_List_object__o *)campaign,
                            0,
                            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                          campaign = this->fields.campaiginListPerSelectSvt;
                          if ( campaign )
                          {
                            campaign = System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)campaign,
                                         0,
                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                            if ( campaign )
                            {
                              v21 = (int *)campaign;
                              campaign = this->fields.campaiginListPerSelectSvt;
                              if ( campaign )
                              {
                                if ( v21[6] <= 0 )
                                {
                                  System_Collections_Generic_List_object___RemoveAt(
                                    (System_Collections_Generic_List_object__o *)campaign,
                                    0,
                                    (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                                }
                                else
                                {
                                  campaign = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)campaign,
                                               0,
                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                                  if ( !campaign )
                                    goto LABEL_67;
                                  Item = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)campaign,
                                           0,
                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                                  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v23);
                                }
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
          goto LABEL_67;
        }
        campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
        if ( !campaignAlphaCalculator )
          return;
        TransitionCalculator_float___Update(
          campaignAlphaCalculator,
          (const MethodInfo_376C0A0 *)Method_TransitionCalculator_float__Update__);
        campaign = this->fields.campaignAlphaCalculator;
        if ( !campaign )
          goto LABEL_67;
        if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
        {
          realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
          v27 = realtimeSinceStartup;
          v28 = MenuListControl_TypeInfo;
          if ( !MenuListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
            v28 = MenuListControl_TypeInfo;
          }
          if ( (float)(v27 - campaignAlphaAnimTimeOld) >= v28->static_fields->ALPHA_ANIMATION_INTERVAL )
          {
            campaign = this->fields.campaignAlphaCalculator;
            if ( !campaign )
              goto LABEL_67;
            AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)campaign, 0LL);
          }
        }
        campaign = this->fields.campaignAlphaCalculator;
        if ( !campaign )
          goto LABEL_67;
        campaign = (void *)AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)campaign, 0LL);
        if ( ((unsigned __int8)campaign & 1) != 0 )
        {
          campaign = this->fields.campaignAlphaCalculator;
          if ( !campaign )
            goto LABEL_67;
          AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)campaign, 0LL);
          this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          campaign = ServantCombineControl__get_EventMaster(this, v29);
          if ( !this->fields.campaiginListPerSelectSvt )
            goto LABEL_67;
          v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.campaiginListPerSelectSvt,
                       this->fields.campaiginPerSelectSvtListIndex,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_67;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_67;
          if ( !v30 )
            goto LABEL_67;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v30,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !campaign )
            goto LABEL_67;
          v31 = *((_QWORD *)campaign + 12);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v31 < NetworkManager__getTime(0LL) )
          {
            campaign = this->fields.campaiginListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaiginListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            v32 = (int *)campaign;
            campaign = this->fields.campaiginListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
            if ( v32[6] <= 0 )
            {
              System_Collections_Generic_List_object___RemoveAt(
                (System_Collections_Generic_List_object__o *)campaign,
                campaiginPerSelectSvtListIndex,
                (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
            }
            else
            {
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           campaiginPerSelectSvtListIndex,
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_67;
              v34 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v34, v35);
            }
          }
          campaign = this->fields.campaiginListPerSelectSvt;
          v36 = this->fields.campaiginPerSelectSvtListIndex + 1;
          this->fields.campaiginPerSelectSvtListIndex = v36;
          if ( !campaign )
            goto LABEL_67;
          if ( *((_DWORD *)campaign + 6) <= v36 )
          {
            v36 = 0;
            this->fields.campaiginPerSelectSvtListIndex = 0;
          }
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       v36,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
LABEL_67:
            sub_1B64324(campaign);
          v37 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v37, v38);
        }
        v39 = this->fields.campaignAlphaCalculator;
        if ( v39 )
        {
          campaign = this->fields.campaign;
          this->fields.campaignAlphaAnimNow = v39->fields._Current_k__BackingField;
          if ( campaign )
          {
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)campaign + 440LL))(
              campaign,
              *(_QWORD *)(*(_QWORD *)campaign + 448LL));
            return;
          }
        }
        goto LABEL_67;
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
      sub_1B64324(0LL);
    RecommenededConfigDialog__Close_44687120(recommendedConfigDialog, 0LL, method);
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
  struct MenuListControl_o *menuListCtr; // x22

  v6 = this;
  if ( (byte_49FFD33 & 1) == 0 )
  {
    this = (ServantCombineControl_o *)sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, a);
    byte_49FFD33 = 1;
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
    || (this = (ServantCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            a->fields.eventId,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || (menuListCtr = this->fields.menuListCtr,
        (this = (ServantCombineControl_o *)ServantCombineControl__get_EventMaster(v6, v10)) == 0LL)
    || (this = (ServantCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            b->fields.eventId,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_1B64324(this);
  }
  if ( (__int64)menuListCtr < (__int64)this->fields.menuListCtr )
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
  Il2CppObject *Instance; // x0
  ServantStatusBattleListViewItem_o *p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FFD13 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FFD13 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    p_eventMaster = (ServantStatusBattleListViewItem_o *)&this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B6406C(p_eventMaster, (int32_t)MasterData_object, v8, v9);
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
  int32_t v3; // w3

  this->fields._selectMaterialUsrSvtIdList_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFD34 & 1) == 0 )
  {
    sub_1B640C8(&ServantCombineControl___c_TypeInfo, v1);
    byte_49FFD34 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantCombineControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantCombineControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_o *v5; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v6; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_49FFD35 & 1) == 0 )
  {
    sub_1B640C8(&CombineRootComponent_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49FFD35 = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_1B64324(Instance);
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    sub_1B645E4(Instance);
    ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(v5, v6, v7, v8);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__113_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0, 0LL), !b) )
    sub_1B64324(this);
  return (_DWORD)this - UserServantEntity__getSvtClassId(b, 0, 0LL);
}


int32_t __fastcall ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *a,
        System_Collections_Generic_List_EventCampaignEntity__o *b,
        const MethodInfo *method)
{
  int klass_high; // w20

  if ( (byte_49FFD36 & 1) == 0 )
  {
    this = (ServantCombineControl___c_o *)sub_1B640C8(
                                            &Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__,
                                            a);
    byte_49FFD36 = 1;
  }
  if ( !a
    || (this = (ServantCombineControl___c_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)a,
                                                0,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__)) == 0LL
    || !b
    || (klass_high = HIDWORD(this[1].klass),
        (this = (ServantCombineControl___c_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)b,
                                                 0,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__)) == 0LL) )
  {
    sub_1B64324(this);
  }
  return klass_high - HIDWORD(this[1].klass);
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__107_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FFD37 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FFD37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
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
  const MethodInfo *v6; // x2
  struct ServantCombineControl_o *_4__this; // x8
  const MethodInfo *v8; // x2

  if ( (byte_49FFD38 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FFD38 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        RecommenededConfigDialog__Close_44687120((RecommenededConfigDialog_o *)Instance, 0LL, v6);
        Instance = (CommonUI_o *)this->fields.__4__this;
        if ( Instance )
        {
          ServantCombineControl__SetMaterialToCombineData(
            (ServantCombineControl_o *)Instance,
            this->fields.recommendedCombineData,
            v8);
          return;
        }
      }
    }
LABEL_10:
    sub_1B64324(Instance);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_49FFD39 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FFD39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_1B64324(Instance);
  }
  RecommenededConfigDialog__Close_44687120((RecommenededConfigDialog_o *)Instance, 0LL, v4);
}