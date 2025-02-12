void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB8217 & 1) == 0 )
  {
    sub_1C13D24(&ServantCombineControl_TypeInfo, v1);
    byte_4BB8217 = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void __fastcall ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4BB8216 & 1) == 0 )
  {
    sub_1C13D24(&CombineMenuControl_TypeInfo, method);
    byte_4BB8216 = 1;
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

  if ( (byte_4BB8202 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_3829/*"CONCENT_OK"*/, v7);
    sub_1C13D24(&StringLiteral_3832/*"CONDUCTION_LIMITUP"*/, v8);
    sub_1C13D24(&StringLiteral_3831/*"CONDUCTION_COMBINE_MSG"*/, v9);
    sub_1C13D24(&StringLiteral_3830/*"CONDUCTION_COMBINE"*/, v10);
    byte_4BB8202 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_38;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
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
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                       v21,
                                                       0LL);
    if ( !v14 )
      goto LABEL_38;
    DataMasterBase_object__object__int___GetEntity(
      v14,
      (int32_t)conductionWireInfo,
      (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                                                   (System_String_o *)StringLiteral_3832/*"CONDUCTION_LIMITUP"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3831/*"CONDUCTION_COMBINE_MSG"*/,
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
                sub_1C13F80(conductionWireInfo, method);
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
                                                             (System_String_o *)StringLiteral_3830/*"CONDUCTION_COMBINE"*/,
                                                             0LL);
          if ( !v19 )
            goto LABEL_38;
          UILabel__set_text(v19, (System_String_o *)conductionWireInfo, 0LL);
          v20 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3829/*"CONCENT_OK"*/,
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
    sub_1C13F80(this, method);
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

  if ( (byte_4BB8205 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB8205 = 1;
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
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1C13F80(baseData, *(_QWORD *)&lv);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_4BB81FE & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4BB81FE = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v17 = v18;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v17, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v16, 0LL) )
        ServantCombineControl__InitMaterialSvtInfo(this, v14);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    ServantCombineControl__InitMaterialSvtInfo(this, (const MethodInfo *)selectBase);
    this->fields.isSelectBase = 0;
    ServantCombineControl__ResetCampaign(this, v15);
  }
  this->fields.baseUserServantEntity = selectBase;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity,
    (int64_t)selectBase,
    (int64_t)method,
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_63773232((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0, 0LL);
    return System_Int32__CompareTo_63773232((int32_t)&SvtClassId, v8, 0LL);
  }
  return result;
}


void __fastcall ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *selectGrid; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  __int64 v29; // x20
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_4BB820A & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&UnityEngine_Transform_TypeInfo, v5);
    byte_4BB820A = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_1C13F80(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_1C13F80(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C14240(v17);
LABEL_35:
      sub_1C13F80(v17, v18);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
  }
  v21 = sub_1C13E60(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v28 = *(_QWORD *)v21;
    v29 = v21;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_30;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_30:
      v32 = sub_1C65D04(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  __int64 v20; // x1
  UserServantEntity_array *CombineMaterialList; // x21
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t SvtClassId; // w22
  bool IsExtraClass; // w22
  RecommendedConfigSaveData_o *v25; // x24
  System_Collections_Generic_List_T__o *v26; // x23
  int v27; // w19
  int32_t v28; // w25
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x27
  __int64 v33; // x28
  UserServantEntity_o *v34; // x25
  int v35; // w26
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  ServantCombineControl_o *v46; // x0
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x2
  System_Comparison_T__o *v50; // x21
  ServantCombineControl_o *v51; // [xsp+8h] [xbp-68h]

  if ( (byte_4BB8210 & 1) == 0 )
  {
    sub_1C13D24(&System_Comparison_UserServantEntity__TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1C13D24(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1C13D24(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v14);
    sub_1C13D24(&RecommendedConfigSaveData_TypeInfo, v15);
    sub_1C13D24(&Method_ServantCombineControl_ClassRaritySort__, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C13D24(&SvtClassAttri_TypeInfo, v18);
    byte_4BB8210 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
  v25 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v26 = (System_Collections_Generic_List_T__o *)sub_1C13F70(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v26,
    (const MethodInfo_3612180 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  Instance = v25->fields.selectRarityList;
  if ( !Instance )
    goto LABEL_22;
  v27 = *((_DWORD *)Instance + 6);
  if ( v27 >= 1 )
  {
    v28 = 0;
    do
    {
      Instance = (void *)System_Collections_Generic_List_int___get_Item(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v28,
                           (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v26 )
        break;
      items = v26->fields._items;
      v30 = Method_System_Collections_Generic_List_Rarity_TYPE__Add__;
      ++v26->fields._version;
      if ( !items )
        break;
      size = v26->fields._size;
      v20 = (unsigned int)Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v26,
          (int32_t)Instance,
          *(const MethodInfo_36129D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v26->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = (_DWORD)Instance;
      }
      if ( v27 == ++v28 )
        goto LABEL_23;
      Instance = v25->fields.selectRarityList;
    }
    while ( Instance );
LABEL_22:
    sub_1C13F80(Instance, v20);
  }
LABEL_23:
  v51 = this;
  if ( !CombineMaterialList )
    goto LABEL_22;
  if ( (int)*(_QWORD *)&CombineMaterialList->max_length >= 1 )
  {
    v32 = 0LL;
    v33 = (unsigned int)*(_QWORD *)&CombineMaterialList->max_length - 1LL;
    while ( 1 )
    {
      v34 = CombineMaterialList->m_Items[v32];
      Instance = (void *)RecommendedConfigSaveData__IsAll(v25, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v34 )
          goto LABEL_22;
        Instance = (void *)UserServantEntity__getSvtClassId(v34, 0, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_47;
      }
      Instance = (void *)RecommendedConfigSaveData__IsTargetOnly(v25, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v34 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v34, 0, 0LL);
      if ( !v51->fields.baseData )
        goto LABEL_22;
      v35 = (int)Instance;
      Instance = (void *)UserServantEntity__getSvtClassId(v51->fields.baseData, 0, 0LL);
      if ( v35 == (_DWORD)Instance )
        goto LABEL_40;
LABEL_47:
      if ( v33 == v32 )
        goto LABEL_50;
      if ( ++v32 >= (unsigned __int64)CombineMaterialList->max_length )
        sub_1C13F88(Instance, v20);
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v34, 0, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_47;
    }
    else
    {
LABEL_39:
      if ( !v34 )
        goto LABEL_22;
    }
LABEL_40:
    Instance = (void *)UserServantEntity__getRarity(v34, 0LL);
    if ( !v26 )
      goto LABEL_22;
    Instance = (void *)System_Collections_Generic_List_Int32Enum___Contains(
                         v26,
                         (int32_t)Instance,
                         (const MethodInfo_3612D4C *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_22;
      v42 = v22->fields._items;
      v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v22->fields._version;
      if ( !v42 )
        goto LABEL_22;
      v44 = v22->fields._size;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v34,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &v42->obj.klass + v44;
        v22->fields._size = v44 + 1;
        v45[4] = (Il2CppClass *)v34;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v34, v36, v37, v38, v39, v40, v41);
      }
    }
    goto LABEL_47;
  }
LABEL_50:
  if ( !v22 )
    goto LABEL_22;
  if ( !v22->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v25, 0LL) )
  {
    Instance = v51->fields.baseData;
    if ( !Instance )
      goto LABEL_22;
    v46 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
    v22 = (System_Collections_Generic_List_object__o *)ServantCombineControl__MixMaterialSort(
                                                         v46,
                                                         (int32_t)v46,
                                                         (System_Collections_Generic_List_Rarity_TYPE__o *)v26,
                                                         (System_Collections_Generic_List_UserServantEntity__o *)v22,
                                                         v47);
  }
  else
  {
    v50 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(v50, (Il2CppObject *)v51, Method_ServantCombineControl_ClassRaritySort__, 0LL);
    System_Collections_Generic_List_object___Sort_56814736(
      v22,
      v50,
      (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_46364684(
           v51,
           (System_Collections_Generic_List_UserServantEntity__o *)v22,
           v48);
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

  if ( (byte_4BB81FC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v3);
    byte_4BB81FC = 1;
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
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_63773552(
                                               (int32_t)&v12,
                                               (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
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
    sub_1C13F80(currentLvObj, method);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0LL);
}


void __fastcall ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BB81FA & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB81FA = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C13F80(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_c *v21; // x0
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v23; // x21
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v41; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v47; // x0
  void *v48; // x0
  int v49; // w1
  __int64 v50; // x21
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BB81F9 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&CombineRootComponent_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v8);
    sub_1C13D24(&LocalizationManager_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_1C13D24(&TutorialFlag_TypeInfo, v11);
    sub_1C13D24(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v12);
    sub_1C13D24(&ServantCombineControl___c_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_8937/*"MSG_LIMITUP_MAX"*/, v14);
    sub_1C13D24(&StringLiteral_7063/*"GET_ACTIVITIES"*/, v15);
    sub_1C13D24(&StringLiteral_9389/*"N0"*/, v16);
    sub_1C13D24(&StringLiteral_1/*""*/, v17);
    byte_4BB81F9 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38831432(102, 0LL) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"N0"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_7063/*"GET_ACTIVITIES"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        ServantCombineControl__InitMaterialSvtInfo(this, v39);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8937/*"MSG_LIMITUP_MAX"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v41);
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
                            (System_Collections_Generic_List_Enumerator_T__o *)&v51,
                            combineEventList,
                            (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v52 = v51;
                          while ( 1 )
                          {
                            v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v52,
                                    (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v44 )
                              break;
                            if ( !v52.fields._current )
                              sub_1C13F80(v44, v45);
                            klass_high = HIDWORD(v52.fields._current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v47 = this->fields.menuListCtr;
                              if ( !v47 )
                                sub_1C13F80(0LL, v45);
                              MenuListControl__setBannerIcon(
                                v47,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v52.fields._current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v52,
                            (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_1C13F80(selectMaterialSvtBtn, v19);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].monitor;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(selectMaterialSvtBtn->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[27].klass) == 1 )
    {
      v21 = ServantCombineControl___c_TypeInfo;
      if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v21 = ServantCombineControl___c_TypeInfo;
      }
      _9__81_0 = v21->static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = ServantCombineControl___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(_9__81_0, v23, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_0 = _9__81_0;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__81_0,
          (int64_t)_9__81_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_18;
  }
  sub_1C14240(selectMaterialSvtBtn);
  if ( v49 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1CFE7B4();
  }
  v50 = *(_QWORD *)__cxa_begin_catch(v48);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v50 )
    sub_1C13F78(v50);
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
  __int64 v12; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t v17; // w22
  int32_t LevelMax; // w0
  int v19; // w21
  int v20; // w8
  int32_t v21; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4BB8211 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&totalExp);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB8211 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v16;
  *(_QWORD *)&v23.fields.fakeValue = v15;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v23, 0LL);
  if ( !v14
    || (DataMasterBase_object__object__int___GetEntity(
          v14,
          (int32_t)Instance,
          (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_22:
    sub_1C13F80(Instance, v12);
  }
  v17 = *((_DWORD *)Instance + 64);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  v19 = LevelMax;
  if ( v17 == LevelMax )
  {
    v20 = 0;
  }
  else if ( v17 >= LevelMax )
  {
LABEL_18:
    v20 = v19;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_22;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v17, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v21 = *((_DWORD *)Instance + 6);
      if ( v21 > totalExp )
      {
        v20 = *((_DWORD *)Instance + 5);
        return v20 >= v19;
      }
      if ( v21 == totalExp )
        break;
      if ( v19 == ++v17 )
        goto LABEL_18;
    }
    v20 = *((_DWORD *)Instance + 5) + 1;
  }
  return v20 >= v19;
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
  System_Collections_Generic_List_object__o *v18; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  System_Collections_Generic_List_object__o *v20; // x22
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  int32_t size; // w19
  int32_t i; // w25
  Il2CppObject *v25; // x26
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  ServantCombineControl___c_c *v44; // x0
  System_Comparison_T__o *_9__114_0; // x23
  Il2CppObject *v46; // x24
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_List_object__o *v54; // x23
  int32_t v55; // w19
  int32_t v56; // w24
  int v57; // w25
  int32_t v58; // w26
  Il2CppObject *v59; // x27
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  int32_t v70; // w26
  Il2CppObject *v71; // x27
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  int32_t v82; // w26
  Il2CppObject *v83; // x27
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0

  if ( (byte_4BB8213 & 1) == 0 )
  {
    sub_1C13D24(&System_Comparison_UserServantEntity__TypeInfo, *(_QWORD *)&baseServantClass);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v13);
    sub_1C13D24(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_1C13D24(&SvtClassAttri_TypeInfo, v15);
    sub_1C13D24(&Method_ServantCombineControl___c__MixMaterialSort_b__114_0__, v16);
    sub_1C13D24(&ServantCombineControl___c_TypeInfo, v17);
    byte_4BB8213 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        goto LABEL_75;
      v25 = Item;
      Item = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Item, 0, 0LL);
      if ( (_DWORD)Item == baseServantClass )
      {
        if ( !v18 )
          goto LABEL_75;
        items = v18->fields._items;
        v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_75;
        v34 = v18->fields._size;
        if ( (unsigned int)v34 >= items->max_length )
        {
          v39 = v33[4];
          v40 = v18;
LABEL_27:
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            v25,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v39 + 192) + 112LL));
          continue;
        }
        v35 = &items->obj.klass + v34;
        v18->fields._size = v34 + 1;
      }
      else if ( (_DWORD)Item == 1001 )
      {
        if ( !v19 )
          goto LABEL_75;
        v36 = v19->fields._items;
        v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v19->fields._version;
        if ( !v36 )
          goto LABEL_75;
        v38 = v19->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          v39 = v37[4];
          v40 = v19;
          goto LABEL_27;
        }
        v35 = &v36->obj.klass + v38;
        v19->fields._size = v38 + 1;
      }
      else
      {
        if ( !v20 )
          goto LABEL_75;
        v41 = v20->fields._items;
        v42 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v20->fields._version;
        if ( !v41 )
          goto LABEL_75;
        v43 = v20->fields._size;
        if ( (unsigned int)v43 >= v41->max_length )
        {
          v39 = v42[4];
          v40 = v20;
          goto LABEL_27;
        }
        v35 = &v41->obj.klass + v43;
        v20->fields._size = v43 + 1;
      }
      v35[4] = (Il2CppClass *)v25;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v25, v26, v27, v28, v29, v30, v31);
    }
  }
  if ( !v20 )
    goto LABEL_75;
  if ( v20->fields._size >= 1 )
  {
    v44 = ServantCombineControl___c_TypeInfo;
    if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v44 = ServantCombineControl___c_TypeInfo;
    }
    _9__114_0 = (System_Comparison_T__o *)v44->static_fields->__9__114_0;
    if ( !_9__114_0 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = ServantCombineControl___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v44->static_fields->__9;
      _9__114_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_UserServantEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__114_0,
        v46,
        Method_ServantCombineControl___c__MixMaterialSort_b__114_0__,
        0LL);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      static_fields->__9__114_0 = (struct System_Comparison_UserServantEntity__o *)_9__114_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__114_0,
        (int64_t)_9__114_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    System_Collections_Generic_List_object___Sort_56814736(
      v20,
      _9__114_0,
      (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v54 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Item = (Il2CppObject *)checkRarityTypeList;
  if ( !checkRarityTypeList )
    goto LABEL_75;
  v55 = checkRarityTypeList->fields._size;
  if ( v55 >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)Item,
                               v56,
                               (const MethodInfo_36126E4 *)Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
      if ( !v18 )
        goto LABEL_75;
      v57 = (int)Item;
      if ( v18->fields._size >= 1 )
        break;
LABEL_52:
      if ( !v19 )
        goto LABEL_75;
      if ( v19->fields._size >= 1 )
      {
        v70 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v19,
                   v70,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v71 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v57 )
          {
            if ( !v54 )
              goto LABEL_75;
            v78 = v54->fields._items;
            v79 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v54->fields._version;
            if ( !v78 )
              goto LABEL_75;
            v80 = v54->fields._size;
            if ( (unsigned int)v80 >= v78->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v54,
                v71,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = &v78->obj.klass + v80;
              v54->fields._size = v80 + 1;
              v81[4] = (Il2CppClass *)v71;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)v71, v72, v73, v74, v75, v76, v77);
            }
          }
        }
        while ( ++v70 < v19->fields._size );
      }
      if ( v20->fields._size >= 1 )
      {
        v82 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v20,
                   v82,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v83 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v57 )
          {
            if ( !v54 )
              goto LABEL_75;
            v90 = v54->fields._items;
            v91 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v54->fields._version;
            if ( !v90 )
              goto LABEL_75;
            v92 = v54->fields._size;
            if ( (unsigned int)v92 >= v90->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v54,
                v83,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v93 = &v90->obj.klass + v92;
              v54->fields._size = v92 + 1;
              v93[4] = (Il2CppClass *)v83;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v83, v84, v85, v86, v87, v88, v89);
            }
          }
        }
        while ( ++v82 < v20->fields._size );
      }
      Item = (Il2CppObject *)checkRarityTypeList;
      if ( ++v56 == v55 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v54;
    }
    v58 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v58,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        break;
      v59 = Item;
      Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
      if ( (_DWORD)Item == v57 )
      {
        if ( !v54 )
          break;
        v66 = v54->fields._items;
        v67 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v54->fields._version;
        if ( !v66 )
          break;
        v68 = v54->fields._size;
        if ( (unsigned int)v68 >= v66->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            v59,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = &v66->obj.klass + v68;
          v54->fields._size = v68 + 1;
          v69[4] = (Il2CppClass *)v59;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v59, v60, v61, v62, v63, v64, v65);
        }
      }
      if ( ++v58 >= v18->fields._size )
        goto LABEL_52;
    }
LABEL_75:
    sub_1C13F80(Item, v22);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v54;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4BB8209 & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantCombineControl_OnClickCombineConductionWire__, method);
    byte_4BB8209 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
    sub_1C13F80(combineRootComponent, v5);
  }
}


void __fastcall ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *SelfUserGame; // x0
  __int64 v8; // x1
  int32_t klass; // w20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v11; // x21
  signed __int64 v12; // x23
  unsigned __int64 max_length; // x27
  int64_t v14; // x22

  if ( (byte_4BB8208 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&StringLiteral_3881/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v6);
    byte_4BB8208 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int32_t)SelfUserGame[4].klass;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3881/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
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
      sub_1C13F88(SelfUserGame, v8);
    v14 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v12];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v14,
                                            (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    sub_1C13F80(SelfUserGame, v8);
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
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4BB820D & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantCombineControl_OnClickMaterialSelectList__, method);
    byte_4BB820D = 1;
  }
  v3 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C13F80(0LL, v5);
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
  __int64 v8; // x1
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  RecommenededConfigDialog_ClickDelegate_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BB820E & 1) == 0 )
  {
    sub_1C13D24(&RecommenededConfigDialog_ClickDelegate_TypeInfo, method);
    sub_1C13D24(&Method_ServantCombineControl_OnClickRecommendedButton__, v3);
    sub_1C13D24(&Method_ServantCombineControl__OnClickRecommendedButton_b__107_0__, v4);
    sub_1C13D24(&SvtClassAttri_TypeInfo, v5);
    byte_4BB820E = 1;
  }
  v6 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C13D3C(Method_ServantCombineControl_OnClickRecommendedButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_10;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v12 = (RecommenededConfigDialog_ClickDelegate_o *)sub_1C13F70(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__107_0__,
    v13);
  if ( !recommendedConfigDialog )
LABEL_10:
    sub_1C13F80(baseData, v8);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v12, v14);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_4BB81FB & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB81FB = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_1C13F80(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaignListPerSelectSvt = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.campaignListPerSelectSvt, 0LL, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UserServantEntity_o **p_baseData; // x21
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v21; // w25
  int32_t adjustAtk; // w24
  UIIconLabel_o *currentAdjustAtkIconLabel; // x21
  int32_t v24; // w25
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  char v27; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v29; // x2
  MenuListControl_c *v30; // x0
  float v31; // s8
  System_Func_float__float__float__float__o *v32; // x20
  AlphaTransitionCalculator_o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4BB81FF & 1) == 0 )
  {
    sub_1C13D24(&AlphaTransitionCalculator_TypeInfo, usrSvtData);
    sub_1C13D24(&BalanceConfig_TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v12);
    sub_1C13D24(&MenuListControl_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_1/*""*/, v14);
    byte_4BB81FF = 1;
  }
  p_baseData = &this->fields.baseData;
  this->fields.baseData = usrSvtData;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.baseData,
    (int64_t)usrSvtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v16);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_31;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, *p_baseData, 0LL);
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  combineInfoComp = (struct CombineInfoComponent_o *)*p_baseData;
  if ( !*p_baseData )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)UserServantEntity__GetAdjustMax(
                                                       (UserServantEntity_o *)combineInfoComp,
                                                       &maxAjustAtk[1],
                                                       maxAjustAtk,
                                                       &secondMaxAdjustAtk[1],
                                                       secondMaxAdjustAtk,
                                                       0LL);
  if ( !*p_baseData )
    goto LABEL_31;
  adjustHp = (*p_baseData)->fields.adjustHp;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  if ( adjustHp >= maxAjustAtk[1] )
    v21 = secondMaxAdjustAtk[1];
  else
    v21 = maxAjustAtk[1];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_39380320(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * adjustHp,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * v21,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !*p_baseData )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  adjustAtk = (*p_baseData)->fields.adjustAtk;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  if ( adjustAtk >= maxAjustAtk[0] )
    v24 = secondMaxAdjustAtk[0];
  else
    v24 = maxAjustAtk[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_39380320(
    currentAdjustAtkIconLabel,
    45,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * adjustAtk,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * v24,
    0,
    0LL,
    0,
    0,
    0,
    0LL);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantCombineControl__CheckConductionWire(this, v25);
  combineInfoComp = (struct CombineInfoComponent_o *)ServantCombineControl__SetCampaignListPerSelectSvt(
                                                       this,
                                                       usrSvtData,
                                                       v26);
  if ( !this->fields.campaign )
    goto LABEL_31;
  v27 = (char)combineInfoComp;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.campaign,
                                                       0LL);
  if ( !combineInfoComp )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v27 & 1, 0LL);
  if ( (v27 & 1) == 0 )
    return;
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                       0,
                                                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_31;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v29);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v30 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v30 = MenuListControl_TypeInfo;
  }
  v31 = ChangedFPSUtil__CovertFrameNumToSecond(v30->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v32 = ExtraEasing__AsymptoticSeriesFloat(
          MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
          (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
          0LL);
  v33 = (AlphaTransitionCalculator_o *)sub_1C13F70(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v33, v31, v32, 0LL);
  this->fields.campaignAlphaCalculator = v33;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.campaignAlphaCalculator,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_31:
    sub_1C13F80(combineInfoComp, v17);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
}


bool __fastcall ServantCombineControl__SetCampaignListPerSelectSvt(
        ServantCombineControl_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_object__o *v32; // x22
  System_Collections_Generic_List_object__o *v33; // x20
  const MethodInfo *v34; // x1
  Il2CppObject *current; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *EventMaster; // x0
  __int64 v37; // x1
  Il2CppObject *Entity; // x0
  __int64 v39; // x1
  Il2CppClass *klass; // x23
  int64_t Time; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int klass_high; // w8
  System_Int32_array *monitor; // x23
  __int64 v51; // x24
  __int64 v52; // x25
  int32_t v53; // w1
  System_Int32_array *v54; // x23
  int32_t SvtClassId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Func_object__int__o *v60; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x20
  System_Func_object__object__o *v62; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x20
  ServantCombineControl___c_c *v64; // x8
  System_Func_object__int__o *_9__89_1; // x21
  Il2CppObject *v66; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4BB8200 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_IndexOf_int___, usrSvtData);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___, v7);
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____,
      v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_1C13D24(&System_Func_EventCampaignEntity__int__TypeInfo, v14);
    sub_1C13D24(&System_Func_List_EventCampaignEntity___int__TypeInfo, v15);
    sub_1C13D24(&System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v20);
    sub_1C13D24(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v21);
    sub_1C13D24(&NetworkManager_TypeInfo, v22);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1C13D24(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__, v24);
    sub_1C13D24(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__, v25);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1C13D24(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__, v27);
    sub_1C13D24(&ServantCombineControl___c_TypeInfo, v28);
    byte_4BB8200 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_54;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  v32 = (System_Collections_Generic_List_object__o *)CombineEventCampaigns;
  v33 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    v32,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v83 = v82;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = v83.fields._current;
    EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(this, v34);
    if ( !current )
      sub_1C13F80(EventMaster, v37);
    if ( !EventMaster )
      sub_1C13F80(0LL, v37);
    Entity = DataMasterBase_object__object__int___GetEntity(
               EventMaster,
               (int32_t)current[1].klass,
               (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C13F80(0LL, v39);
    klass = Entity[6].klass;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( (__int64)klass >= Time )
    {
      klass_high = HIDWORD(current[1].klass);
      if ( klass_high <= 5 )
      {
        if ( (unsigned int)klass_high <= 5 && ((1 << klass_high) & 0x34) != 0 )
        {
          monitor = (System_Int32_array *)current[2].monitor;
          if ( !monitor )
            sub_1C13F80(Time, v42);
          if ( *(_QWORD *)&monitor->max_length )
          {
            if ( !usrSvtData )
              sub_1C13F80(Time, v42);
            v52 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
            v51 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v84.fields.currentCryptoKey = v52;
            *(_QWORD *)&v84.fields.fakeValue = v51;
            v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v84, 0LL);
            Time = System_Array__IndexOf_int_(
                     monitor,
                     v53,
                     (const MethodInfo_308C194 *)Method_System_Array_IndexOf_int___);
            goto LABEL_30;
          }
LABEL_31:
          if ( !v33 )
            sub_1C13F80(Time, v42);
          items = v33->fields._items;
          v57 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v33->fields._version;
          if ( !items )
            sub_1C13F80(Time, v42);
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              current,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &items->obj.klass + size;
            v33->fields._size = size + 1;
            v59[4] = (Il2CppClass *)current;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)current, v43, v44, v45, v46, v47, v48);
          }
        }
      }
      else if ( klass_high == 27 )
      {
        if ( !usrSvtData )
          sub_1C13F80(Time, v42);
        Time = UserServantEntity__IsExchangeSvt(usrSvtData, 0LL);
        if ( (Time & 1) != 0 )
          goto LABEL_31;
      }
      else if ( (klass_high & 0xFFFFFFFE) == 32 )
      {
        if ( !usrSvtData )
          sub_1C13F80(Time, v42);
        v54 = (System_Int32_array *)current[2].monitor;
        SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0LL);
        Time = System_Array__IndexOf_int_(
                 v54,
                 SvtClassId,
                 (const MethodInfo_308C194 *)Method_System_Array_IndexOf_int___);
LABEL_30:
        if ( (Time & 0x80000000) == 0 )
          goto LABEL_31;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !v33 )
    goto LABEL_54;
  if ( !v33->fields._size )
  {
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  v60 = (System_Func_object__int__o *)sub_1C13F70(System_Func_EventCampaignEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v60,
    0LL,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__,
    0LL);
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToLookup_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                               (System_Func_TSource__TKey__o *)v60,
                                                               (const MethodInfo_2FCCD7C *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
  v62 = (System_Func_object__object__o *)sub_1C13F70(System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
  System_Func_object__object____ctor(
    v62,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__,
    0LL);
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v61,
                                                               (System_Func_TSource__TResult__o *)v62,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
  v64 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v64 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_1 = (System_Func_object__int__o *)v64->static_fields->__9__89_1;
  if ( !_9__89_1 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = ServantCombineControl___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v64->static_fields->__9;
    _9__89_1 = (System_Func_object__int__o *)sub_1C13F70(System_Func_List_EventCampaignEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_1,
      v66,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_1 = (struct System_Func_List_EventCampaignEntity___int__o *)_9__89_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_1,
      (int64_t)_9__89_1,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v63,
                                                               (System_Func_TSource__TKey__o *)_9__89_1,
                                                               (const MethodInfo_2FB842C *)Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v74,
                                (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
  if ( !this )
LABEL_54:
    sub_1C13F80(Instance, v30);
  this->fields.campaignListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)Instance;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.campaignListPerSelectSvt,
    (int64_t)Instance,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
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
  System_String_o *checkLv; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Int64_array *v41; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v43; // x25
  struct UserServantEntity_o *baseData; // x8
  __int64 v45; // x21
  __int64 v46; // x22
  System_Collections_Generic_List_long__o *v47; // x24
  System_Collections_Generic_List_long__o *v48; // x23
  __int64 v49; // x26
  unsigned __int64 i; // x25
  struct System_Int64_array *v51; // x8
  int64_t v52; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v55; // x28
  UnityEngine_Transform_o *v56; // x22
  SetCombineData_o *v57; // x20
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v59; // x28
  MaterialSvtInfo_o *v60; // x29
  MaterialSvtInfo_ClickDelegate_o *v61; // x22
  Il2CppObject *Entity; // x28
  ServantLimitMaster_o *v63; // x29
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v66; // w22
  struct System_Int64_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  struct System_Int64_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  struct System_Int64_array *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Int64_array *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v91; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x23
  __int64 v93; // x21
  __int64 v94; // x22
  int32_t v95; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v97; // x2
  int32_t v98; // w23
  struct UserServantEntity_o *v99; // x8
  UILabel_o *currentLvLb; // x22
  UILabel_o *increLvLb; // x22
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v104; // x21
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  UserServantEntity_o *v109; // x8
  __int64 v110; // x21
  __int64 v111; // x22
  int32_t v112; // w24
  __int64 v113; // x22
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  UserServantEntity_o *v120; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v122; // x8
  int v123; // w8
  int v124; // w8
  BalanceConfig_c *v125; // x0
  int32_t adjustHp; // w20
  uint32_t cctor_finished; // w9
  int v128; // w22
  int32_t StatusUpAdjustHp; // w8
  int v130; // w20
  int getHpAdjustVal; // w21
  int32_t v132; // w22
  int32_t v133; // w22
  int32_t v134; // w23
  int32_t v135; // w1
  BalanceConfig_c *v136; // x0
  int32_t adjustAtk; // w20
  uint32_t v138; // w9
  int32_t StatusUpAdjustAtk; // w8
  int v140; // w21
  int getAtkAdjustVal; // w22
  int v142; // w20
  int32_t v143; // w20
  int32_t v144; // w20
  int32_t v145; // w21
  int32_t v146; // w1
  bool v147; // w20
  float v148; // s0
  float v149; // s1
  float v150; // s2
  float v151; // s3
  const MethodInfo *v152; // x1
  UserServantEntity_o **p_baseData; // [xsp+10h] [xbp-B0h]
  int32_t targetLimitCnt; // [xsp+1Ch] [xbp-A4h]
  int32_t increAmount; // [xsp+20h] [xbp-A0h] BYREF
  int32_t v156; // [xsp+24h] [xbp-9Ch] BYREF
  __int64 v157; // [xsp+28h] [xbp-98h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+30h] [xbp-90h] BYREF
  __int64 maxAjustAtk; // [xsp+38h] [xbp-88h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-80h] BYREF
  System_String_array *skillNameList; // [xsp+48h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+50h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v169; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v170; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = data;
  if ( (byte_4BB8204 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, data);
    sub_1C13D24(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_1C13D24(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_1C13D24(&CombineSvtData_TypeInfo, v7);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_1C13D24(&int_TypeInfo, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v18);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_1C13D24(&LocalizationManager_TypeInfo, v20);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, v23);
    sub_1C13D24(&StringLiteral_7513/*"IM Used"*/, v24);
    sub_1C13D24(&StringLiteral_1/*""*/, v25);
    byte_4BB8204 = 1;
  }
  idList = 0LL;
  afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  skillNameList = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  maxAjustAtk = 0LL;
  v157 = 0LL;
  v156 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_133;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int64_t)materialUsrSvtIdList,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v41 = v3->fields.materialUsrSvtIdList;
  if ( !v41 )
    goto LABEL_133;
  baseSvtData = v3->fields.baseSvtData;
  v43 = *(_QWORD *)&v41->max_length;
  this->fields.baseData = baseSvtData;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseData, (int64_t)baseSvtData, v35, v36, v37, v38, v39, v40);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_133;
  v46 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v45 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v164.fields.currentCryptoKey = v46;
  *(_QWORD *)&v164.fields.fakeValue = v45;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v164, 0LL);
  v47 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  v48 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v48,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v43 >= 1 )
  {
    conductionWireInfo = (__int64)this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_133;
    v49 = (unsigned int)v43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conductionWireInfo, 0, 0LL);
    for ( i = 0LL; i != v49; ++i )
    {
      v51 = v3->fields.materialUsrSvtIdList;
      if ( !v51 )
        goto LABEL_133;
      if ( i >= v51->max_length )
        goto LABEL_134;
      conductionWireInfo = (__int64)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_133;
      v52 = v51->m_Items[i];
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
      v55 = (UnityEngine_GameObject_o *)conductionWireInfo;
      conductionWireInfo = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)conductionWireInfo,
                                      0LL);
      v56 = (UnityEngine_Transform_o *)conductionWireInfo;
      if ( !byte_4BAEDA1 )
      {
        conductionWireInfo = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, checkLv);
        byte_4BAEDA1 = 1;
      }
      if ( !v56 )
        goto LABEL_133;
      v57 = v3;
      UnityEngine_Transform__set_localPosition(v56, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      conductionWireInfo = (__int64)UnityEngine_GameObject__get_transform(v55, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v168.fields.x = 0.5;
      v168.fields.y = 0.5;
      v168.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v168, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v55,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v59 = this->fields.baseData;
      v60 = (MaterialSvtInfo_o *)Component_object;
      v61 = (MaterialSvtInfo_ClickDelegate_o *)sub_1C13F70(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(
        v61,
        (Il2CppObject *)this,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0LL);
      if ( !v60 )
        goto LABEL_133;
      MaterialSvtInfo__setMaterialSvtInfo(v60, i, v59, v52, 1, 0, v61, 0LL);
      conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)conductionWireInfo,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo,
                 v52,
                 (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)conductionWireInfo,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_133;
      v63 = (ServantLimitMaster_o *)conductionWireInfo;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v165.fields.currentCryptoKey = klass;
      *(_QWORD *)&v165.fields.fakeValue = monitor;
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v165, 0LL);
      conductionWireInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                             0LL);
      if ( !v63 )
        goto LABEL_133;
      conductionWireInfo = (__int64)ServantLimitMaster__GetEntity(v63, v66, conductionWireInfo, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v3 = v57;
      if ( *(int *)(conductionWireInfo + 24) >= 4 )
      {
        if ( !v47 )
          goto LABEL_133;
        items = v47->fields._items;
        v68 = Method_System_Collections_Generic_List_long__Add__;
        ++v47->fields._version;
        if ( !items )
          goto LABEL_133;
        size = v47->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v47,
            v52,
            *(const MethodInfo_3615200 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v47->fields._size = size + 1;
          items->m_Items[size] = v52;
        }
      }
      conductionWireInfo = UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL);
      if ( (conductionWireInfo & 1) != 0 )
      {
        if ( !v48 )
          goto LABEL_133;
        v70 = v48->fields._items;
        v71 = Method_System_Collections_Generic_List_long__Add__;
        ++v48->fields._version;
        if ( !v70 )
          goto LABEL_133;
        v72 = v48->fields._size;
        if ( (unsigned int)v72 >= v70->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v48,
            v52,
            *(const MethodInfo_3615200 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v48->fields._size = v72 + 1;
          v70->m_Items[v72] = v52;
        }
      }
      conductionWireInfo = UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL);
      if ( (conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
    }
    if ( !v47 )
      goto LABEL_133;
    v73 = System_Collections_Generic_List_long___ToArray(
            v47,
            (const MethodInfo_3616CB8 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v73;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.highRarityList, (int64_t)v73, v74, v75, v76, v77, v78, v79);
    if ( !v48 )
      goto LABEL_133;
    v80 = System_Collections_Generic_List_long___ToArray(
            v48,
            (const MethodInfo_3616CB8 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v80;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.exceededCheckList,
      (int64_t)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    conductionWireInfo = (__int64)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v57->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v156 = spendQp;
    conductionWireInfo = (__int64)System_Int32__ToString_63773552(
                                    (int32_t)&v156,
                                    (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_133;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v57->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v156 = getExp;
    conductionWireInfo = (__int64)System_Int32__ToString((int32_t)&v156, 0LL);
    if ( !expLb )
      goto LABEL_133;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)conductionWireInfo,
                                    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
    v91 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v94 = *(_QWORD *)&v91->fields.svtId.fields.currentCryptoKey;
    v93 = *(_QWORD *)&v91->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v166.fields.currentCryptoKey = v94;
    *(_QWORD *)&v166.fields.fakeValue = v93;
    conductionWireInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v166, 0LL);
    if ( !v92 )
      goto LABEL_133;
    conductionWireInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    v92,
                                    conductionWireInfo,
                                    (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v95 = *(_DWORD *)(conductionWireInfo + 132);
    conductionWireInfo = (__int64)this->fields.baseData;
    this->fields.expType = v95;
    if ( !conductionWireInfo )
      goto LABEL_133;
    this->fields.totalExp = *(_DWORD *)(conductionWireInfo + 260) + this->fields._getExpVal_k__BackingField;
    this->fields.checkLv = *(_DWORD *)(conductionWireInfo + 256);
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL);
    checkLv = (System_String_o *)(unsigned int)this->fields.checkLv;
    v98 = LevelMax;
    if ( (_DWORD)checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, (int32_t)checkLv, v97) )
        LODWORD(checkLv) = this->fields.checkLv;
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
    v99 = this->fields.baseData;
    if ( !v99 )
      goto LABEL_133;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (__int64)System_Int32__ToString((int)v99 + 256, 0LL);
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
    v104 = LocalizationManager__Get((System_String_o *)StringLiteral_7513/*"IM Used"*/, 0LL);
    increAmount = this->fields.increAmount;
    v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v105, v106, v107);
    conductionWireInfo = (__int64)System_String__Format(v104, v108, 0LL);
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
    HIDWORD(afterAtk) += v57->fields.getHpAdjustVal;
    LODWORD(afterAtk) = v57->fields.getAtkAdjustVal + afterAtk;
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
        sub_1C13F88(conductionWireInfo, checkLv);
      checkLv = skillNameList->m_Items[0];
      if ( checkLv )
      {
        conductionWireInfo = (__int64)this->fields.getSkillLb;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, checkLv, 0LL);
      }
    }
    v109 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v111 = *(_QWORD *)&v109->fields.limitCount.fields.currentCryptoKey;
    v110 = *(_QWORD *)&v109->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v167.fields.currentCryptoKey = v111;
    *(_QWORD *)&v167.fields.fakeValue = v110;
    v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v167, 0LL);
    v113 = sub_1C13F70(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v113, 0LL);
    if ( !v113 )
      goto LABEL_133;
    v120 = *p_baseData;
    *(_QWORD *)(v113 + 16) = *p_baseData;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v113 + 16), (int64_t)v120, v114, v115, v116, v117, v118, v119);
    increLv = this->fields.increLv;
    *(_DWORD *)(v113 + 32) = v98;
    *(_DWORD *)(v113 + 24) = increLv;
    *(_DWORD *)(v113 + 28) = v112;
    v122 = this->fields.baseData;
    if ( !v122 )
      goto LABEL_133;
    conductionWireInfo = (__int64)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp[1],
      lateExp,
      this->fields.totalExp,
      v122->fields.lv,
      v98,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v113 + 36) = lateExp[1];
    v123 = HIDWORD(afterAtk);
    *(_DWORD *)(v113 + 40) = lateExp[0];
    *(_DWORD *)(v113 + 44) = v123;
    v124 = afterAtk;
    *(_DWORD *)(v113 + 48) = v57->fields.getHpAdjustVal;
    *(_DWORD *)(v113 + 52) = v124;
    *(_DWORD *)(v113 + 56) = v57->fields.getAtkAdjustVal;
    conductionWireInfo = (__int64)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v113,
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
                                    (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v169.fields.r = 1.0;
    v169.fields.g = 1.0;
    v169.fields.b = 1.0;
    v169.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v169, 0LL);
    conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)conductionWireInfo,
                                    (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v170.fields.r = 1.0;
    v170.fields.g = 1.0;
    v170.fields.b = 1.0;
    v170.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v170, 0LL);
    if ( !*p_baseData )
      goto LABEL_133;
    v125 = BalanceConfig_TypeInfo;
    adjustHp = (*p_baseData)->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v125 = BalanceConfig_TypeInfo;
      cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    }
    v128 = HIDWORD(maxAjustAtk);
    StatusUpAdjustHp = v125->static_fields->StatusUpAdjustHp;
    v130 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v157) = v130;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v125);
      v125 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v130 >= StatusUpAdjustHp * v128 )
    {
      v132 = secondMaxAdjustAtk[1];
      if ( v125->_2.cctor_finished )
      {
LABEL_96:
        conductionWireInfo = (__int64)this->fields.resAdjustHpIconLabel;
        v133 = StatusUpAdjustHp * v132;
        if ( !conductionWireInfo )
          goto LABEL_133;
        v134 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v130;
        UIIconLabel__Set_39380320((UIIconLabel_o *)conductionWireInfo, 44, v134, v133, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_63773380((int32_t)&v157 + 4, v134, 0LL) )
        {
          conductionWireInfo = (__int64)this->fields.resAdjustHpIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_133;
          if ( v134 >= v133 )
            v135 = v133;
          else
            v135 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v130;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v135, v133, v134 >= v133, 0LL);
        }
        conductionWireInfo = (__int64)this->fields.resAdjustHpMaxLabel;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !*p_baseData )
          goto LABEL_133;
        v136 = BalanceConfig_TypeInfo;
        adjustAtk = (*p_baseData)->fields.adjustAtk;
        v138 = BalanceConfig_TypeInfo->_2.cctor_finished;
        if ( !v138 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v136 = BalanceConfig_TypeInfo;
          v138 = BalanceConfig_TypeInfo->_2.cctor_finished;
        }
        StatusUpAdjustAtk = v136->static_fields->StatusUpAdjustAtk;
        v140 = StatusUpAdjustAtk * adjustAtk;
        LODWORD(v157) = StatusUpAdjustAtk * adjustAtk;
        getAtkAdjustVal = v3->fields.getAtkAdjustVal;
        v142 = maxAjustAtk;
        if ( !v138 )
        {
          j_il2cpp_runtime_class_init_0(v136);
          v136 = BalanceConfig_TypeInfo;
          StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        }
        if ( v140 >= StatusUpAdjustAtk * v142 )
        {
          v143 = secondMaxAdjustAtk[0];
          if ( v136->_2.cctor_finished )
            goto LABEL_112;
        }
        else
        {
          v143 = maxAjustAtk;
          if ( v136->_2.cctor_finished )
          {
LABEL_112:
            conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
            v144 = StatusUpAdjustAtk * v143;
            if ( !conductionWireInfo )
              goto LABEL_133;
            v145 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v140;
            UIIconLabel__Set_39380320((UIIconLabel_o *)conductionWireInfo, 45, v145, v144, 0, 0LL, 0, 0, 0, 0LL);
            if ( !System_Int32__Equals_63773380((int32_t)&v157, v145, 0LL) )
            {
              conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
              if ( !conductionWireInfo )
                goto LABEL_133;
              if ( v145 >= v144 )
                v146 = v144;
              else
                v146 = v145;
              UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v146, v144, v145 >= v144, 0LL);
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
                  v148 = 1.0;
                  v147 = 1;
                  v149 = 1.0;
                  goto LABEL_131;
                }
              }
              else if ( conductionWireInfo )
              {
                v147 = 0;
                v148 = 1.0;
                v149 = 0.0;
LABEL_131:
                v150 = v149;
                v151 = v148;
                UIWidget__set_color((UIWidget_o *)conductionWireInfo, *(UnityEngine_Color_o *)&v148, 0LL);
                this->fields._IsExeCombine_k__BackingField = v147;
                ServantCombineControl__SetExeBtnState(this, v152);
                return;
              }
            }
LABEL_133:
            sub_1C13F80(conductionWireInfo, checkLv);
          }
        }
        j_il2cpp_runtime_class_init_0(v136);
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        goto LABEL_112;
      }
    }
    else
    {
      v132 = HIDWORD(maxAjustAtk);
      if ( v125->_2.cctor_finished )
        goto LABEL_96;
    }
    j_il2cpp_runtime_class_init_0(v125);
    StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    goto LABEL_96;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_46364684(
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
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v28; // x23
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v31; // s0
  float v32; // s8
  float v33; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v35; // x21
  __int64 v36; // x25
  float v37; // s9
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v39; // x21
  int32_t SvtClassId; // w0
  int size; // w8
  const MethodInfo_362CEFC **v42; // x29
  System_Collections_Generic_List_object__o *v43; // x21
  BalanceConfig_c **v44; // x25
  int v45; // w23
  int32_t v46; // w22
  int32_t v47; // w28
  ServantCombineControl_o *v48; // x19
  int64_t v49; // x27
  __int64 v50; // x21
  __int64 v51; // x26
  int32_t v52; // w0
  int64_t v53; // x21
  CombineMaterialEntity_o *v54; // x26
  int v55; // w8
  int value; // w26
  int v57; // w21
  BalanceConfig_c *v58; // x0
  ServantCombineControl_c *v59; // x8
  int SameClassExp; // w21
  float FIXED_VAL; // s10
  double v62; // d0
  unsigned int v63; // w8
  BalanceConfig_c **v64; // x20
  const MethodInfo_362CEFC **v65; // x25
  System_Collections_Generic_List_object__o *v66; // x29
  float v67; // s0
  unsigned int v68; // w8
  unsigned int v69; // w24
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int32_t CombineQp; // w21
  float v77; // s0
  unsigned int v78; // w8
  int32_t v79; // w26
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  const MethodInfo *v84; // x3
  struct UserServantEntity_o *v85; // x8
  ServantCombineControl_c *v86; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct UserServantEntity_o *v94; // x1
  int32_t v95; // w8
  bool isAdjustAtkMax; // w0
  bool isSecondAdjustAtkMax; // w0
  System_Collections_Generic_List_long__o *v98; // x20
  int32_t v99; // w23
  int32_t v100; // w22
  __int128 v101; // q0
  struct System_Int64_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  System_Int64_array *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int v113; // [xsp+0h] [xbp-F0h]
  int v114; // [xsp+4h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v115; // [xsp+8h] [xbp-E8h]
  int32_t expType; // [xsp+14h] [xbp-DCh]
  int64_t v117; // [xsp+18h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v118; // [xsp+20h] [xbp-D0h]
  CombineMaterialMaster_o *v119; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v122; // [xsp+78h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)targetMaterialList;
  if ( (byte_4BB8212 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, targetMaterialList);
    sub_1C13D24(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantClassMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C13D24(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v16);
    sub_1C13D24(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v18);
    sub_1C13D24(&System_Math_TypeInfo, v19);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1C13D24(&ServantCombineControl_TypeInfo, v22);
    sub_1C13D24(&SetCombineData_TypeInfo, v23);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4BB8212 = 1;
  }
  v122 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v122,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_101;
  v118 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  combineEventList = menuListCtr->fields.combineEventList;
  v31 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  v32 = v31;
  v33 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_101;
  v36 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v37 = v33;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v123.fields.currentCryptoKey = v36;
  *(_QWORD *)&v123.fields.fakeValue = v35;
  v119 = (CombineMaterialMaster_o *)v28;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v123, 0LL);
  if ( !MasterData_object )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_101;
  v39 = this->fields.baseData;
  v117 = Instance;
  if ( !v39 )
    goto LABEL_101;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v39, 0, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v39, SvtClassId, 0LL);
  v113 = Instance;
  if ( !v3 )
    goto LABEL_101;
  size = v3->fields._size;
  v114 = size - 1;
  v42 = (const MethodInfo_362CEFC **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v43 = v122;
  if ( size < 1 )
  {
    v46 = 0;
    v45 = 0;
LABEL_70:
    v79 = v46;
    if ( v43 )
      goto LABEL_73;
  }
  else
  {
    v115 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v44 = &BalanceConfig_TypeInfo;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    while ( 1 )
    {
      v48 = this;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v3, v47, *v42);
      if ( !Instance )
        goto LABEL_101;
      v49 = Instance;
      v51 = *(_QWORD *)(Instance + 80);
      v50 = *(_QWORD *)(Instance + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v124.fields.currentCryptoKey = v51;
      *(_QWORD *)&v124.fields.fakeValue = v50;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v124, 0LL);
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v115,
                            v52,
                            (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_101;
      v53 = Instance;
      Instance = (int64_t)v119;
      if ( !v119 )
        goto LABEL_101;
      v54 = CombineMaterialMaster__GetEntity(v119, *(_DWORD *)(v53 + 136), *(_DWORD *)(v49 + 256), 0LL);
      Instance = (int64_t)v118;
      if ( !v118 )
        goto LABEL_101;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v118,
                            *(_DWORD *)(v53 + 80),
                            (const MethodInfo_3238624 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v54 || !Instance )
        goto LABEL_101;
      v55 = *(_DWORD *)(Instance + 56);
      value = v54->fields.value;
      if ( v55 == 3 )
        goto LABEL_30;
      if ( v55 == v113 )
      {
        Instance = (int64_t)v48->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        v57 = *(_DWORD *)(v53 + 80);
        if ( v57 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL) )
        {
LABEL_30:
          v58 = *v44;
          if ( !(*v44)->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v58);
            v58 = *v44;
          }
          v59 = ServantCombineControl_TypeInfo;
          SameClassExp = v58->static_fields->SameClassExp;
          if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v59 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v59->static_fields->FIXED_VAL;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v62 = (double)value * (double)SameClassExp / FIXED_VAL;
          v63 = vcvtpd_s64_f64(v62);
          if ( ceil(v62) == INFINITY )
            value = 0x80000000;
          else
            value = v63;
        }
      }
      v64 = v44;
      v65 = v42;
      if ( !byte_4BAF44E )
      {
        sub_1C13D24(&System_Math_TypeInfo, v26);
        byte_4BAF44E = 1;
      }
      v66 = v3;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = (int64_t)v48->fields.baseData;
      v67 = v32 * (float)value;
      v68 = vcvtps_s32_f32(v67);
      v69 = ceilf(v67) == INFINITY ? 0x80000000 : v68;
      if ( !Instance )
        goto LABEL_101;
      CombineQp = UserServantEntity__getCombineQp((UserServantEntity_o *)Instance, 0LL);
      if ( !byte_4BAF44E )
      {
        sub_1C13D24(&System_Math_TypeInfo, v26);
        byte_4BAF44E = 1;
      }
      Instance = (int64_t)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v77 = v37 * (float)CombineQp;
      v78 = vcvtps_s32_f32(v77);
      if ( ceilf(v77) == INFINITY )
        v78 = 0x80000000;
      if ( !v117 )
        goto LABEL_101;
      v43 = v122;
      v79 = v78 + v46;
      if ( (signed int)(v78 + v46) > *(_DWORD *)(v117 + 96) )
      {
        this = v48;
        v42 = v65;
        v48->fields.isQpCondClear = 0;
        goto LABEL_70;
      }
      if ( !v122 )
        goto LABEL_101;
      items = v122->fields._items;
      v81 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v122->fields._version;
      if ( !items )
        goto LABEL_101;
      v82 = v43->fields._size;
      if ( (unsigned int)v82 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          (Il2CppObject *)v49,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = &items->obj.klass + v82;
        v43->fields._size = v82 + 1;
        v83[4] = (Il2CppClass *)v49;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v83 + 4), v49, v70, v71, v72, v73, v74, v75);
      }
      v85 = v48->fields.baseData;
      if ( !v85 )
        goto LABEL_101;
      v45 += v69;
      this = v48;
      if ( ServantCombineControl__IsLevelMax(v48, v85->fields.exp + v45, expType, v84) )
        break;
      v86 = ServantCombineControl_TypeInfo;
      if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        v86 = ServantCombineControl_TypeInfo;
      }
      v3 = v66;
      v42 = v65;
      if ( v47 != v86->static_fields->MAX_SELECT_NUM - 1 )
      {
        v46 = v79;
        v44 = v64;
        if ( v114 != v47++ )
          continue;
      }
      goto LABEL_73;
    }
    v42 = v65;
LABEL_73:
    if ( v43->fields._size < 1 )
    {
      return 0LL;
    }
    else
    {
      v43 = (System_Collections_Generic_List_object__o *)sub_1C13F70(SetCombineData_TypeInfo);
      SetCombineData___ctor((SetCombineData_o *)v43, 0LL);
      if ( !v43 )
        goto LABEL_101;
      v94 = this->fields.baseData;
      v43->fields._items = (struct System_Object_array *)v94;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v43->fields, (int64_t)v94, v88, v89, v90, v91, v92, v93);
      v95 = v122->fields._size;
      v43->fields._version = v79;
      LODWORD(v43->fields._syncRoot) = v45;
      v43[1].monitor = 0LL;
      v43->fields._size = v95;
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
      BYTE4(v43[1].klass) = isAdjustAtkMax;
      Instance = (int64_t)this->fields.baseData;
      if ( !Instance )
LABEL_101:
        sub_1C13F80(Instance, v26);
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
      BYTE5(v43[1].klass) = isSecondAdjustAtkMax;
      v98 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v98,
        (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
      v99 = v122->fields._size;
      if ( v99 >= 1 )
      {
        v100 = 0;
        while ( 1 )
        {
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v122, v100, *v42);
          if ( !Instance )
            goto LABEL_101;
          v101 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v121.fields.fakeValue = v101;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v120 = v121;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v120, 0LL);
          if ( !v98 )
            goto LABEL_101;
          v102 = v98->fields._items;
          v103 = Method_System_Collections_Generic_List_long__Add__;
          ++v98->fields._version;
          if ( !v102 )
            goto LABEL_101;
          v104 = v98->fields._size;
          if ( (unsigned int)v104 >= v102->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v98,
              Instance,
              *(const MethodInfo_3615200 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
          }
          else
          {
            v98->fields._size = v104 + 1;
            v102->m_Items[v104] = Instance;
          }
          if ( v99 == ++v100 )
            goto LABEL_99;
        }
      }
      if ( !v98 )
        goto LABEL_101;
LABEL_99:
      v105 = System_Collections_Generic_List_long___ToArray(
               v98,
               (const MethodInfo_3616CB8 *)Method_System_Collections_Generic_List_long__ToArray__);
      v43[1].fields._items = (struct System_Object_array *)v105;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v43[1].fields, (int64_t)v105, v106, v107, v108, v109, v110, v111);
    }
  }
  return (SetCombineData_o *)v43;
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
    sub_1C13F80(0LL, v4);
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
  UICharaGraphTexture_o *TexturePrefab_39052248; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4BB8203 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantCombineControl_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB8203 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v12 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v24, 0LL);
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
    TexturePrefab_39052248 = CharaGraphManager__CreateTexturePrefab_39052248(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v15,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_39052248;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_39052248,
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
    sub_1C13F80(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_41996284((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
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

  if ( (byte_4BB820B & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4BB820B = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C13F80(combineBtnBg, method);
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
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4BB81FD & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9383/*"MyRoomFrontObj"*/, method);
    byte_4BB81FD = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63773552((int)this + 540, (System_String_o *)StringLiteral_9383/*"MyRoomFrontObj"*/, 0LL),
        !haveQpLb) )
  {
    sub_1C13F80(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C13F80(recommendedButton, isEnabled);
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
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  ServantCombineControl__SetCombineData(this, recommendedCombineData, method);
  ServantCombineControl__SetStateInfoMsg(this, 2, v4);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C13F80(0LL, v5);
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
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
  __int64 v17; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x2
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v36; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v38; // x20
  ServantCombineControl___c_c *v39; // x8
  System_Action_o *_9__108_1; // x22
  System_String_o *v41; // x21
  Il2CppObject *v42; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  Il2CppObject *v50; // x19
  System_String_o *v51; // x21
  System_String_o *v52; // x22
  System_String_o *v53; // x23
  CommonConfirmDialog_ClickDelegate_o *v54; // x24
  System_String_o *v55; // x21
  System_Action_o *v56; // x22

  if ( (byte_4BB820F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__108_1__, v6);
    sub_1C13D24(&Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__0__, v7);
    sub_1C13D24(&Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__2__, v8);
    sub_1C13D24(&ServantCombineControl___c__DisplayClass108_0_TypeInfo, v9);
    sub_1C13D24(&ServantCombineControl___c_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_11190/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, v11);
    sub_1C13D24(&StringLiteral_11189/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, v12);
    sub_1C13D24(&StringLiteral_11188/*"RECIPE_EVENT_POINT_REWARD"*/, v13);
    sub_1C13D24(&StringLiteral_3800/*"COMMON"*/, v14);
    sub_1C13D24(&StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, v15);
    sub_1C13D24(&StringLiteral_1/*""*/, v16);
    byte_4BB820F = 1;
  }
  v17 = sub_1C13F70(ServantCombineControl___c__DisplayClass108_0_TypeInfo);
  ServantCombineControl___c__DisplayClass108_0___ctor((ServantCombineControl___c__DisplayClass108_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v26);
  *(_QWORD *)(v17 + 24) = RecommendedCombineData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)RecommendedCombineData, v28, v29, v30, v31, v32, v33);
  isQpCondClear = this->fields.isQpCondClear;
  if ( !*(_QWORD *)(v17 + 24) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isQpCondClear )
      {
LABEL_10:
        recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11188/*"RECIPE_EVENT_POINT_REWARD"*/,
                                                                  0LL);
        v38 = (System_String_o *)recommendedConfigDialog;
        v39 = ServantCombineControl___c_TypeInfo;
        if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
          v39 = ServantCombineControl___c_TypeInfo;
        }
        _9__108_1 = v39->static_fields->__9__108_1;
        v41 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__108_1 )
        {
          if ( !v39->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v39);
            v39 = ServantCombineControl___c_TypeInfo;
          }
          v42 = (Il2CppObject *)v39->static_fields->__9;
          _9__108_1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(_9__108_1, v42, Method_ServantCombineControl___c__SetRecommendedMaterial_b__108_1__, 0LL);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
          static_fields->__9__108_1 = _9__108_1;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&static_fields->__9__108_1,
            (int64_t)_9__108_1,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
        }
        if ( !Instance )
          goto LABEL_25;
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v41,
          v38,
          _9__108_1,
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
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11189/*"RECIPE_EVENT_PROBABILITY_MESSAGE"*/, 0LL);
    v56 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v17,
      Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__2__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v55,
      v56,
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
      RecommenededConfigDialog__Close_46343688(recommendedConfigDialog, 0LL, v34);
      ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v17 + 24), v36);
      return;
    }
LABEL_25:
    sub_1C13F80(recommendedConfigDialog, v19);
  }
  v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11190/*"RECIPE_EVENT_TOTAL_POINT_NUM"*/, 0LL);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON"*/, 0LL);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, 0LL);
  v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v54,
    (Il2CppObject *)v17,
    Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__0__,
    0LL);
  if ( !v50 )
    goto LABEL_25;
  CommonUI__OpenConfirmDialog_31070492(
    (CommonUI_o *)v50,
    (System_String_o *)StringLiteral_1/*""*/,
    v51,
    v52,
    v53,
    v54,
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
    sub_1C13F80(preSelectBaseLb, method);
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
  if ( (byte_4BB820C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_7520/*"INDIVIDUALITY_IS_SUPPORT"*/, v6);
    sub_1C13D24(&StringLiteral_7529/*"INFO_MSG_SELECT_COSTUME"*/, v7);
    sub_1C13D24(&StringLiteral_5898/*"EXE_BOXGACHA"*/, v8);
    sub_1C13D24(&StringLiteral_12325/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB820C = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1C13F80(detailInfoLb, *(_QWORD *)&state);
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
      v13 = &StringLiteral_5898/*"EXE_BOXGACHA"*/;
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
      v13 = &StringLiteral_12325/*"SHOP_SELL_SERVANT_QP_WILL_BE_MAX_ALERT_MESSAGE"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7520/*"INDIVIDUALITY_IS_SUPPORT"*/;
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
    v13 = &StringLiteral_7529/*"INFO_MSG_SELECT_COSTUME"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v13, 0LL);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
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
  if ( (byte_4BB8201 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventCampaignMaster___, eventInfoData);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (ServantCombineControl_o *)sub_1C13D24(&StringLiteral_20849/*"img_txt_account_overwrite"*/, v6);
    byte_4BB8201 = 1;
  }
  v17 = 0LL;
  if ( !byte_4BAEDA1 )
  {
    this = (ServantCombineControl_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, eventInfoData);
    byte_4BAEDA1 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_1C13F80(this, eventInfoData);
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
  this = (ServantCombineControl_o *)System_String__Concat_62967944((System_String_o *)StringLiteral_20849/*"img_txt_account_overwrite"*/, v15, 0LL);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
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
  __int64 v6; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4BB8207 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3881/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v3);
    byte_4BB8207 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3881/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0LL )
    sub_1C13F80(SelfUserGame, v6);
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

  if ( (byte_4BB8206 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1C13D24(&LocalizationManager_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&StringLiteral_3881/*"CONFIRM_TITLE_SKILL_COMBINE"*/, v6);
    byte_4BB8206 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3881/*"CONFIRM_TITLE_SKILL_COMBINE"*/, 0LL);
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
      sub_1C13F88(SelfUserGame, v9);
    v14 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v12];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v14,
                                          (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    sub_1C13F80(SelfUserGame, v9);
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
  __int64 v12; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x21
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4BB8215 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&progress);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_1C13D24(&System_IDisposable_TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C13D24(&UnityEngine_Transform_TypeInfo, v10);
    byte_4BB8215 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C13F80(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 2;
        if ( !v19 )
          goto LABEL_21;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1].method;
    }
    else
    {
LABEL_21:
      v21 = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                       Enumerator,
                                       *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_61;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v22->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C14240(v22);
LABEL_61:
      sub_1C13F80(v22, v23);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v22,
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1C13F80(0LL, v26);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v27 = sub_1C13E60(Enumerator, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v28 = *(_QWORD *)v27;
    v29 = v27;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_33;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_33:
      v32 = sub_1C65D04(v27, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
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
                                          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C13F80(helpBtn, *(_QWORD *)&progress);
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
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Component_o *v21; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x20
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v33; // x8
  struct SetRarityDialogControl_o *v34; // x8

  if ( (byte_4BB8214 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v3);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v4);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Transform_TypeInfo, v9);
    byte_4BB8214 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_64;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C13F80(0LL, v11);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v20 = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_62;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C14240(v21);
LABEL_62:
      sub_1C13F80(v21, v22);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v21,
                         (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1C13F80(0LL, v25);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0LL);
  }
  v26 = sub_1C13E60(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_33;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_33:
      v31 = sub_1C65D04(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
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
                                          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v33 = this->fields.exeCombineDlg;
  if ( !v33 )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)v33->fields.cancelBtnLb;
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
                                          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn
    || (helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))helpBtn->klass[1]._1.namespaze)(
                                                helpBtn,
                                                1LL,
                                                helpBtn->klass[1]._1.byval_arg.data),
        (v34 = this->fields.exeCombineDlg) == 0LL)
    || (helpBtn = (UnityEngine_GameObject_o *)v34->fields.cancelBtnLb) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                helpBtn,
                                                (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_64:
    sub_1C13F80(helpBtn, method);
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
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaignListPerSelectSvt; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v15; // x8
  int size; // w8
  const MethodInfo *v17; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  int64_t v19; // x20
  int *v20; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v22; // x2
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v26; // s8
  MenuListControl_c *v27; // x0
  const MethodInfo *v28; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x20
  int64_t v30; // x20
  int *v31; // x8
  int32_t campaiginPerSelectSvtListIndex; // w1
  Il2CppObject *v33; // x0
  const MethodInfo *v34; // x2
  Il2CppObject *v35; // x0
  const MethodInfo *v36; // x2
  struct AlphaTransitionCalculator_o *v37; // x8

  if ( (byte_4BB81F8 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v8);
    sub_1C13D24(&MenuListControl_TypeInfo, v9);
    sub_1C13D24(&NetworkManager_TypeInfo, v10);
    sub_1C13D24(&Method_TransitionCalculator_float__Update__, v11);
    sub_1C13D24(&Method_TransitionCalculator_float__get_Current__, v12);
    byte_4BB81F8 = 1;
  }
  if ( this->fields.isSelectBase )
  {
    campaign = this->fields.campaign;
    if ( !campaign )
      goto LABEL_67;
    campaign = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)campaign, 0LL);
    campaignListPerSelectSvt = this->fields.campaignListPerSelectSvt;
    if ( campaignListPerSelectSvt )
    {
      method = (const MethodInfo *)(campaignListPerSelectSvt->fields._size > 0);
      if ( !campaign )
        goto LABEL_67;
    }
    else
    {
      method = 0LL;
      if ( !campaign )
        goto LABEL_67;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, (bool)method, 0LL);
    v15 = this->fields.campaignListPerSelectSvt;
    if ( v15 )
    {
      size = v15->fields._size;
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
            campaign = ServantCombineControl__get_EventMaster(this, v17);
            if ( this->fields.campaignListPerSelectSvt )
            {
              v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                           0,
                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                if ( campaign )
                {
                  if ( v18 )
                  {
                    campaign = DataMasterBase_object__object__int___GetEntity(
                                 v18,
                                 *((_DWORD *)campaign + 4),
                                 (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                    if ( campaign )
                    {
                      v19 = *((_QWORD *)campaign + 12);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( v19 >= NetworkManager__getTime(0LL) )
                        return;
                      campaign = this->fields.campaignListPerSelectSvt;
                      if ( campaign )
                      {
                        campaign = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)campaign,
                                     0,
                                     (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                        if ( campaign )
                        {
                          System_Collections_Generic_List_object___RemoveAt(
                            (System_Collections_Generic_List_object__o *)campaign,
                            0,
                            (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                          campaign = this->fields.campaignListPerSelectSvt;
                          if ( campaign )
                          {
                            campaign = System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)campaign,
                                         0,
                                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                            if ( campaign )
                            {
                              v20 = (int *)campaign;
                              campaign = this->fields.campaignListPerSelectSvt;
                              if ( campaign )
                              {
                                if ( v20[6] <= 0 )
                                {
                                  System_Collections_Generic_List_object___RemoveAt(
                                    (System_Collections_Generic_List_object__o *)campaign,
                                    0,
                                    (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                                }
                                else
                                {
                                  campaign = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)campaign,
                                               0,
                                               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                                  if ( !campaign )
                                    goto LABEL_67;
                                  Item = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)campaign,
                                           0,
                                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                                  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v22);
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
          (const MethodInfo_38EBDBC *)Method_TransitionCalculator_float__Update__);
        campaign = this->fields.campaignAlphaCalculator;
        if ( !campaign )
          goto LABEL_67;
        if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
        {
          realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
          v26 = realtimeSinceStartup;
          v27 = MenuListControl_TypeInfo;
          if ( !MenuListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
            v27 = MenuListControl_TypeInfo;
          }
          if ( (float)(v26 - campaignAlphaAnimTimeOld) >= v27->static_fields->ALPHA_ANIMATION_INTERVAL )
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
          campaign = ServantCombineControl__get_EventMaster(this, v28);
          if ( !this->fields.campaignListPerSelectSvt )
            goto LABEL_67;
          v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                       this->fields.campaiginPerSelectSvtListIndex,
                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_67;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_67;
          if ( !v29 )
            goto LABEL_67;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v29,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !campaign )
            goto LABEL_67;
          v30 = *((_QWORD *)campaign + 12);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v30 < NetworkManager__getTime(0LL) )
          {
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            v31 = (int *)campaign;
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
            if ( v31[6] <= 0 )
            {
              System_Collections_Generic_List_object___RemoveAt(
                (System_Collections_Generic_List_object__o *)campaign,
                campaiginPerSelectSvtListIndex,
                (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
            }
            else
            {
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           campaiginPerSelectSvtListIndex,
                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_67;
              v33 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v33, v34);
            }
          }
          campaign = this->fields.campaignListPerSelectSvt;
          method = (const MethodInfo *)(unsigned int)(this->fields.campaiginPerSelectSvtListIndex + 1);
          this->fields.campaiginPerSelectSvtListIndex = (int)method;
          if ( !campaign )
            goto LABEL_67;
          if ( *((_DWORD *)campaign + 6) <= (int)method )
          {
            LODWORD(method) = 0;
            this->fields.campaiginPerSelectSvtListIndex = 0;
          }
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       (int32_t)method,
                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
LABEL_67:
            sub_1C13F80(campaign, method);
          v35 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v35, v36);
        }
        v37 = this->fields.campaignAlphaCalculator;
        if ( v37 )
        {
          campaign = this->fields.campaign;
          this->fields.campaignAlphaAnimNow = v37->fields._Current_k__BackingField;
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
void __fastcall ServantCombineControl___OnClickRecommendedButton_b__107_0(
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
      sub_1C13F80(0LL, isDecide);
    RecommenededConfigDialog__Close_46343688(recommendedConfigDialog, 0LL, method);
  }
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall ServantCombineControl___SetCampaignListPerSelectSvt_b__89_0(
        ServantCombineControl_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *g,
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
  ServantCombineControl___c_c *v15; // x0
  System_Func_object__object__o *_9__89_3; // x21
  Il2CppObject *v17; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0
  ServantCombineControl___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__int__o *_9__89_4; // x21
  Il2CppObject *v29; // x22
  struct ServantCombineControl___c_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x20
  System_Func_T__TResult__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4BB8218 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, g);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v7);
    sub_1C13D24(&System_Func_EventCampaignEntity__int__TypeInfo, v8);
    sub_1C13D24(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v9);
    sub_1C13D24(&System_Func_EventCampaignEntity__long__TypeInfo, v10);
    sub_1C13D24(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__, v11);
    sub_1C13D24(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__, v12);
    sub_1C13D24(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__, v13);
    sub_1C13D24(&ServantCombineControl___c_TypeInfo, v14);
    byte_4BB8218 = 1;
  }
  v15 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v15 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_3 = (System_Func_object__object__o *)v15->static_fields->__9__89_3;
  if ( !_9__89_3 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ServantCombineControl___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__89_3 = (System_Func_object__object__o *)sub_1C13F70(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__89_3,
      v17,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_3 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__89_3;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_3,
      (int64_t)_9__89_3,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Select_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)g,
          (System_Func_TSource__TResult__o *)_9__89_3,
          (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
  v26 = ServantCombineControl___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v26 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_4 = (System_Func_object__int__o *)v26->static_fields->__9__89_4;
  if ( !_9__89_4 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = ServantCombineControl___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__89_4 = (System_Func_object__int__o *)sub_1C13F70(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_4,
      v29,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__,
      0LL);
    v30 = ServantCombineControl___c_TypeInfo->static_fields;
    v30->__9__89_4 = (struct System_Func_EventCampaignEntity__int__o *)_9__89_4;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v30->__9__89_4, (int64_t)_9__89_4, v31, v32, v33, v34, v35, v36);
  }
  v37 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v27,
          (System_Func_TSource__TKey__o *)_9__89_4,
          (const MethodInfo_2FB895C *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  v38 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_EventCampaignEntity__long__TypeInfo);
  System_Func_object__long____ctor(
    v38,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__,
    0LL);
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v37,
                                                               (System_Func_TSource__TKey__o *)v38,
                                                               (const MethodInfo_2FC8294 *)Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v39,
                                                                     (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


int64_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_b__89_5(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  void *EventMaster; // x0
  __int64 v6; // x1

  if ( (byte_4BB8219 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, x);
    byte_4BB8219 = 1;
  }
  EventMaster = ServantCombineControl__get_EventMaster(this, (const MethodInfo *)x);
  if ( !x
    || !EventMaster
    || (EventMaster = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)EventMaster,
                        x->fields.eventId,
                        (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C13F80(EventMaster, v6);
  }
  return *((_QWORD *)EventMaster + 12);
}


int32_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2(
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  int32_t target; // w8

  if ( !entity )
    sub_1C13F80(0LL, method);
  target = entity->fields.target;
  switch ( target )
  {
    case 27:
      return 2;
    case 32:
      return 4;
    case 33:
      return 5;
  }
  return entity->fields.target;
}


EventMaster_o *__fastcall ServantCombineControl__get_EventMaster(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  PartyOrganizationUtility_o *p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BB81F7 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BB81F7 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v6);
    p_eventMaster = (PartyOrganizationUtility_o *)&this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C13CC8(p_eventMaster, (int64_t)MasterData_object, v9, v10, v11, v12, v13, v14);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._selectMaterialUsrSvtIdList_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB82D6 & 1) == 0 )
  {
    sub_1C13D24(&ServantCombineControl___c_TypeInfo, v1);
    byte_4BB82D6 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantCombineControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v4; // x1
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_o *v6; // x0
  EventCampaignEntity_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BB82D7 & 1) == 0 )
  {
    sub_1C13D24(&CombineRootComponent_TypeInfo, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4BB82D7 = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_1C13F80(Instance, v4);
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    sub_1C14240(Instance);
    ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_3(v6, v7, v8);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__114_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0, 0LL), !b) )
    sub_1C13F80(this, a);
  return (_DWORD)this - UserServantEntity__getSvtClassId(b, 0, 0LL);
}


int32_t __fastcall ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_1(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Item; // x19

  if ( (byte_4BB82D8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, x);
    this = (ServantCombineControl___c_o *)sub_1C13D24(&ServantCombineControl_TypeInfo, v4);
    byte_4BB82D8 = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)x,
           0,
           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
  return ServantCombineControl___SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2(
           (EventCampaignEntity_o *)Item,
           0LL);
}


EventCampaignEntity_o *__fastcall ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_3(
        ServantCombineControl___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


int32_t __fastcall ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_4(
        ServantCombineControl___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.value;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__108_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB82D9 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB82D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantCombineControl___c__DisplayClass108_0___ctor(
        ServantCombineControl___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl___c__DisplayClass108_0___SetRecommendedMaterial_b__0(
        ServantCombineControl___c__DisplayClass108_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4BB82DA & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BB82DA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C13F80(Instance, v6);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass108_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4BB82DB & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB82DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_1C13F80(Instance, v4);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}