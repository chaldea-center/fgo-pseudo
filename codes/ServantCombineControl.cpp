void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_4BE00CD & 1) == 0 )
  {
    sub_1C21E38(&ServantCombineControl_TypeInfo);
    byte_4BE00CD = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void __fastcall ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4BE00CC & 1) == 0 )
  {
    sub_1C21E38(&CombineMenuControl_TypeInfo);
    byte_4BE00CC = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall ServantCombineControl__CheckConductionWire(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v11; // x20
  UILabel_o *v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4BE00B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3841/*"CONDUCTION_LIMITUP"*/);
    sub_1C21E38(&StringLiteral_3844/*"CONDUCTION_LVEXCEED_MSG"*/);
    sub_1C21E38(&StringLiteral_3843/*"CONDUCTION_LVEXCEED"*/);
    sub_1C21E38(&StringLiteral_3842/*"CONDUCTION_LIMITUP_MSG"*/);
    byte_4BE00B8 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_38;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_38;
    v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v8 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                       v13,
                                                       0LL);
    if ( !v6 )
      goto LABEL_38;
    DataMasterBase_object__object__int___GetEntity(
      v6,
      (int32_t)conductionWireInfo,
      (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                                                   (System_String_o *)StringLiteral_3844/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3843/*"CONDUCTION_LVEXCEED"*/,
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
                sub_1C22094(conductionWireInfo, method);
              }
            }
          }
        }
        else
        {
          v11 = this->fields.conductionWireLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3842/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v11 )
            goto LABEL_38;
          UILabel__set_text(v11, (System_String_o *)conductionWireInfo, 0LL);
          v12 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3841/*"CONDUCTION_LIMITUP"*/,
                                                             0LL);
          if ( !v12 )
            goto LABEL_38;
          UILabel__set_text(v12, (System_String_o *)conductionWireInfo, 0LL);
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
    sub_1C22094(this, method);
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

  if ( (byte_4BE00BB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE00BB = 1;
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
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1C22094(baseData, *(_QWORD *)&lv);
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

  if ( (byte_4BE00B4 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BE00B4 = 1;
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
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v17, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v16, 0LL) )
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
  sub_1C21DDC(
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_63920764((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0, 0LL);
    return System_Int32__CompareTo_63920764((int32_t)&SvtClassId, v8, 0LL);
  }
  return result;
}


void __fastcall ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectGrid; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x8
  __int64 v26; // x20
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4BE00C0 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BE00C0 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_1C22094(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_17:
      v13 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v14);
LABEL_35:
      sub_1C22094(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  }
  v18 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v25 = *(_QWORD *)v18;
    v26 = v18;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_30;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_30:
      v29 = sub_1C73E18(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


SetCombineData_o *__fastcall ServantCombineControl__GetRecommendedCombineData(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  UserServantEntity_array *CombineMaterialList; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t SvtClassId; // w22
  bool IsExtraClass; // w22
  RecommendedConfigSaveData_o *v9; // x24
  System_Collections_Generic_List_T__o *v10; // x23
  int v11; // w19
  int32_t v12; // w25
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  __int64 v16; // x27
  __int64 v17; // x28
  UserServantEntity_o *v18; // x25
  int v19; // w26
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  ServantCombineControl_o *v30; // x0
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x2
  System_Comparison_T__o *v34; // x21
  ServantCombineControl_o *v35; // [xsp+8h] [xbp-68h]

  if ( (byte_4BE00C6 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_1C21E38(&RecommendedConfigSaveData_TypeInfo);
    sub_1C21E38(&Method_ServantCombineControl_ClassRaritySort__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SvtClassAttri_TypeInfo);
    byte_4BE00C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
  v9 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v10 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  Instance = v9->fields.selectRarityList;
  if ( !Instance )
    goto LABEL_22;
  v11 = *((_DWORD *)Instance + 6);
  if ( v11 >= 1 )
  {
    v12 = 0;
    do
    {
      Instance = (void *)System_Collections_Generic_List_int___get_Item(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v12,
                           (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v10 )
        break;
      items = v10->fields._items;
      v14 = Method_System_Collections_Generic_List_Rarity_TYPE__Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      v4 = (unsigned int)Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v10,
          (int32_t)Instance,
          *(const MethodInfo_36348BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = (_DWORD)Instance;
      }
      if ( v11 == ++v12 )
        goto LABEL_23;
      Instance = v9->fields.selectRarityList;
    }
    while ( Instance );
LABEL_22:
    sub_1C22094(Instance, v4);
  }
LABEL_23:
  v35 = this;
  if ( !CombineMaterialList )
    goto LABEL_22;
  if ( (int)*(_QWORD *)&CombineMaterialList->max_length >= 1 )
  {
    v16 = 0LL;
    v17 = (unsigned int)*(_QWORD *)&CombineMaterialList->max_length - 1LL;
    while ( 1 )
    {
      v18 = CombineMaterialList->m_Items[v16];
      Instance = (void *)RecommendedConfigSaveData__IsAll(v9, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_22;
        Instance = (void *)UserServantEntity__getSvtClassId(v18, 0, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_47;
      }
      Instance = (void *)RecommendedConfigSaveData__IsTargetOnly(v9, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v18 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v18, 0, 0LL);
      if ( !v35->fields.baseData )
        goto LABEL_22;
      v19 = (int)Instance;
      Instance = (void *)UserServantEntity__getSvtClassId(v35->fields.baseData, 0, 0LL);
      if ( v19 == (_DWORD)Instance )
        goto LABEL_40;
LABEL_47:
      if ( v17 == v16 )
        goto LABEL_50;
      if ( ++v16 >= (unsigned __int64)CombineMaterialList->max_length )
        sub_1C2209C(Instance, v4);
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v18, 0, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_47;
    }
    else
    {
LABEL_39:
      if ( !v18 )
        goto LABEL_22;
    }
LABEL_40:
    Instance = (void *)UserServantEntity__getRarity(v18, 0LL);
    if ( !v10 )
      goto LABEL_22;
    Instance = (void *)System_Collections_Generic_List_Int32Enum___Contains(
                         v10,
                         (int32_t)Instance,
                         (const MethodInfo_3634C34 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_22;
      v26 = v6->fields._items;
      v27 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v6->fields._version;
      if ( !v26 )
        goto LABEL_22;
      v28 = v6->fields._size;
      if ( (unsigned int)v28 >= v26->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v18,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &v26->obj.klass + v28;
        v6->fields._size = v28 + 1;
        v29[4] = (Il2CppClass *)v18;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v18, v20, v21, v22, v23, v24, v25);
      }
    }
    goto LABEL_47;
  }
LABEL_50:
  if ( !v6 )
    goto LABEL_22;
  if ( !v6->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v9, 0LL) )
  {
    Instance = v35->fields.baseData;
    if ( !Instance )
      goto LABEL_22;
    v30 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
    v6 = (System_Collections_Generic_List_object__o *)ServantCombineControl__MixMaterialSort(
                                                        v30,
                                                        (int32_t)v30,
                                                        (System_Collections_Generic_List_Rarity_TYPE__o *)v10,
                                                        (System_Collections_Generic_List_UserServantEntity__o *)v6,
                                                        v31);
  }
  else
  {
    v34 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(v34, (Il2CppObject *)v35, Method_ServantCombineControl_ClassRaritySort__, 0LL);
    System_Collections_Generic_List_object___Sort_56953720(
      v6,
      v34,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_46495204(
           v35,
           (System_Collections_Generic_List_UserServantEntity__o *)v6,
           v32);
}


int32_t __fastcall ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


void __fastcall ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentLvObj; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *qpLb; // x20
  UILabel_o *expLb; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int v11; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BE00B2 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE00B2 = 1;
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
  v11 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_63921084(
                                               (int32_t)&v11,
                                               (System_String_o *)StringLiteral_9399/*"N0"*/,
                                               0LL);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !currentLvObj )
    goto LABEL_22;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v12, 0LL);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v11 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v11, 0LL);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0LL),
        ServantCombineControl__DestroyGrid(this, v9),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v10),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0LL) )
  {
LABEL_22:
    sub_1C22094(currentLvObj, method);
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

  if ( (byte_4BE00B0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE00B0 = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C22094(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantCombineControl__InitSvtCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *selectMaterialSvtBtn; // x0
  __int64 v4; // x1
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_c *v6; // x0
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v8; // x21
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v26; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v32; // x0
  void *v33; // x0
  int v34; // w1
  __int64 v35; // x21
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BE00AF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CombineRootComponent_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__);
    sub_1C21E38(&ServantCombineControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_8953/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1C21E38(&StringLiteral_7076/*"GET_EXP_INFO"*/);
    sub_1C21E38(&StringLiteral_9405/*"NEED_QP_INFO"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE00AF = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(102, 0LL) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9405/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_7076/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        ServantCombineControl__InitMaterialSvtInfo(this, v24);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8953/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v26);
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
                            (System_Collections_Generic_List_Enumerator_T__o *)&v36,
                            combineEventList,
                            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v37 = v36;
                          while ( 1 )
                          {
                            v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v37,
                                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v29 )
                              break;
                            if ( !v37.fields._current )
                              sub_1C22094(v29, v30);
                            klass_high = HIDWORD(v37.fields._current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v32 = this->fields.menuListCtr;
                              if ( !v32 )
                                sub_1C22094(0LL, v30);
                              MenuListControl__setBannerIcon(
                                v32,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v37.fields._current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v37,
                            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_1C22094(selectMaterialSvtBtn, v4);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v6 = ServantCombineControl___c_TypeInfo;
      if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v6 = ServantCombineControl___c_TypeInfo;
      }
      _9__81_0 = v6->static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = ServantCombineControl___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__81_0, v8, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_0 = _9__81_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__81_0,
          (int64_t)_9__81_0,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_18;
  }
  sub_1C22354(selectMaterialSvtBtn);
  if ( v34 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1D0C8C8();
  }
  v35 = *(_QWORD *)__cxa_begin_catch(v33);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v35 )
    sub_1C2208C(v35);
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


bool __fastcall ServantCombineControl__IsLevelMax(
        ServantCombineControl_o *this,
        int32_t totalExp,
        int32_t expType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w22
  int32_t LevelMax; // w0
  int v15; // w21
  int v16; // w8
  int32_t v17; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BE00C7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE00C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v19, 0LL);
  if ( !v10
    || (DataMasterBase_object__object__int___GetEntity(
          v10,
          (int32_t)Instance,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_22:
    sub_1C22094(Instance, v8);
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
LABEL_18:
    v16 = v15;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_22;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v13, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v17 = *((_DWORD *)Instance + 6);
      if ( v17 > totalExp )
      {
        v16 = *((_DWORD *)Instance + 5);
        return v16 >= v15;
      }
      if ( v17 == totalExp )
        break;
      if ( v15 == ++v13 )
        goto LABEL_18;
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
  System_Collections_Generic_List_object__o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  int32_t size; // w19
  int32_t i; // w25
  Il2CppObject *v14; // x26
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  System_Collections_Generic_List_object__o *v29; // x0
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  ServantCombineControl___c_c *v33; // x0
  System_Comparison_T__o *_9__114_0; // x23
  Il2CppObject *v35; // x24
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_List_object__o *v43; // x23
  int32_t v44; // w19
  int32_t v45; // w24
  int v46; // w25
  int32_t v47; // w26
  Il2CppObject *v48; // x27
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  int32_t v59; // w26
  Il2CppObject *v60; // x27
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  int32_t v71; // w26
  Il2CppObject *v72; // x27
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0

  if ( (byte_4BE00C9 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C21E38(&SvtClassAttri_TypeInfo);
    sub_1C21E38(&Method_ServantCombineControl___c__MixMaterialSort_b__114_0__);
    sub_1C21E38(&ServantCombineControl___c_TypeInfo);
    byte_4BE00C9 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        goto LABEL_75;
      v14 = Item;
      Item = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Item, 0, 0LL);
      if ( (_DWORD)Item == baseServantClass )
      {
        if ( !v7 )
          goto LABEL_75;
        items = v7->fields._items;
        v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_75;
        v23 = v7->fields._size;
        if ( (unsigned int)v23 >= items->max_length )
        {
          v28 = v22[4];
          v29 = v7;
LABEL_27:
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            v14,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28 + 192) + 112LL));
          continue;
        }
        v24 = &items->obj.klass + v23;
        v7->fields._size = v23 + 1;
      }
      else if ( (_DWORD)Item == 1001 )
      {
        if ( !v8 )
          goto LABEL_75;
        v25 = v8->fields._items;
        v26 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v8->fields._version;
        if ( !v25 )
          goto LABEL_75;
        v27 = v8->fields._size;
        if ( (unsigned int)v27 >= v25->max_length )
        {
          v28 = v26[4];
          v29 = v8;
          goto LABEL_27;
        }
        v24 = &v25->obj.klass + v27;
        v8->fields._size = v27 + 1;
      }
      else
      {
        if ( !v9 )
          goto LABEL_75;
        v30 = v9->fields._items;
        v31 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v9->fields._version;
        if ( !v30 )
          goto LABEL_75;
        v32 = v9->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          v28 = v31[4];
          v29 = v9;
          goto LABEL_27;
        }
        v24 = &v30->obj.klass + v32;
        v9->fields._size = v32 + 1;
      }
      v24[4] = (Il2CppClass *)v14;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v14, v15, v16, v17, v18, v19, v20);
    }
  }
  if ( !v9 )
    goto LABEL_75;
  if ( v9->fields._size >= 1 )
  {
    v33 = ServantCombineControl___c_TypeInfo;
    if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v33 = ServantCombineControl___c_TypeInfo;
    }
    _9__114_0 = (System_Comparison_T__o *)v33->static_fields->__9__114_0;
    if ( !_9__114_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ServantCombineControl___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__114_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_UserServantEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__114_0,
        v35,
        Method_ServantCombineControl___c__MixMaterialSort_b__114_0__,
        0LL);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      static_fields->__9__114_0 = (struct System_Comparison_UserServantEntity__o *)_9__114_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__114_0,
        (int64_t)_9__114_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    System_Collections_Generic_List_object___Sort_56953720(
      v9,
      _9__114_0,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v43 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Item = (Il2CppObject *)checkRarityTypeList;
  if ( !checkRarityTypeList )
    goto LABEL_75;
  v44 = checkRarityTypeList->fields._size;
  if ( v44 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)Item,
                               v45,
                               (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
      if ( !v7 )
        goto LABEL_75;
      v46 = (int)Item;
      if ( v7->fields._size >= 1 )
        break;
LABEL_52:
      if ( !v8 )
        goto LABEL_75;
      if ( v8->fields._size >= 1 )
      {
        v59 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v8,
                   v59,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v60 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v46 )
          {
            if ( !v43 )
              goto LABEL_75;
            v67 = v43->fields._items;
            v68 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v43->fields._version;
            if ( !v67 )
              goto LABEL_75;
            v69 = v43->fields._size;
            if ( (unsigned int)v69 >= v67->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                v60,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
            }
            else
            {
              v70 = &v67->obj.klass + v69;
              v43->fields._size = v69 + 1;
              v70[4] = (Il2CppClass *)v60;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v60, v61, v62, v63, v64, v65, v66);
            }
          }
        }
        while ( ++v59 < v8->fields._size );
      }
      if ( v9->fields._size >= 1 )
      {
        v71 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v71,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v72 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v46 )
          {
            if ( !v43 )
              goto LABEL_75;
            v79 = v43->fields._items;
            v80 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v43->fields._version;
            if ( !v79 )
              goto LABEL_75;
            v81 = v43->fields._size;
            if ( (unsigned int)v81 >= v79->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                v72,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
            }
            else
            {
              v82 = &v79->obj.klass + v81;
              v43->fields._size = v81 + 1;
              v82[4] = (Il2CppClass *)v72;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v82 + 4), (int64_t)v72, v73, v74, v75, v76, v77, v78);
            }
          }
        }
        while ( ++v71 < v9->fields._size );
      }
      Item = (Il2CppObject *)checkRarityTypeList;
      if ( ++v45 == v44 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v43;
    }
    v47 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v7,
               v47,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        break;
      v48 = Item;
      Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
      if ( (_DWORD)Item == v46 )
      {
        if ( !v43 )
          break;
        v55 = v43->fields._items;
        v56 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v43->fields._version;
        if ( !v55 )
          break;
        v57 = v43->fields._size;
        if ( (unsigned int)v57 >= v55->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            v48,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v55->obj.klass + v57;
          v43->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v48;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v48, v49, v50, v51, v52, v53, v54);
        }
      }
      if ( ++v47 >= v7->fields._size )
        goto LABEL_52;
    }
LABEL_75:
    sub_1C22094(Item, v11);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v43;
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

  if ( (byte_4BE00BF & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantCombineControl_OnClickCombineConductionWire__);
    byte_4BE00BF = 1;
  }
  v3 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
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
    sub_1C22094(combineRootComponent, v5);
  }
}


void __fastcall ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t klass; // w20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v7; // x21
  signed __int64 v8; // x23
  unsigned __int64 max_length; // x27
  int64_t v10; // x22

  if ( (byte_4BE00BE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3893/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4BE00BE = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int32_t)SelfUserGame[4].klass;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3893/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  v7 = SelfUserGame;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      sub_1C2209C(SelfUserGame, v4);
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v10,
                                            (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v8;
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
    sub_1C22094(SelfUserGame, v4);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v7,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v8 < (int)max_length,
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

  if ( (byte_4BE00C3 & 1) == 0 )
  {
    sub_1C21E38(&Method_ServantCombineControl_OnClickMaterialSelectList__);
    byte_4BE00C3 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C22094(0LL, v5);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__OnClickRecommendedButton(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  RecommenededConfigDialog_ClickDelegate_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4BE00C4 & 1) == 0 )
  {
    sub_1C21E38(&RecommenededConfigDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_ServantCombineControl_OnClickRecommendedButton__);
    sub_1C21E38(&Method_ServantCombineControl__OnClickRecommendedButton_b__107_0__);
    sub_1C21E38(&SvtClassAttri_TypeInfo);
    byte_4BE00C4 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ServantCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_10;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v9 = (RecommenededConfigDialog_ClickDelegate_o *)sub_1C22084(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__107_0__,
    v10);
  if ( !recommendedConfigDialog )
LABEL_10:
    sub_1C22094(baseData, v5);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v9, v11);
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

  if ( (byte_4BE00B1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE00B1 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_1C22094(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaignListPerSelectSvt = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.campaignListPerSelectSvt, 0LL, v4, v5, v6, v7, v8, v9);
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
  UserServantEntity_o **p_baseData; // x21
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v16; // w25
  int32_t adjustAtk; // w24
  UIIconLabel_o *currentAdjustAtkIconLabel; // x21
  int32_t v19; // w25
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  char v22; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v24; // x2
  MenuListControl_c *v25; // x0
  float v26; // s8
  System_Func_float__float__float__float__o *v27; // x20
  AlphaTransitionCalculator_o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4BE00B5 & 1) == 0 )
  {
    sub_1C21E38(&AlphaTransitionCalculator_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C21E38(&MenuListControl_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE00B5 = 1;
  }
  p_baseData = &this->fields.baseData;
  this->fields.baseData = usrSvtData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.baseData,
    (int64_t)usrSvtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v11);
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
    v16 = secondMaxAdjustAtk[1];
  else
    v16 = maxAjustAtk[1];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_39480396(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * adjustHp,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * v16,
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
    v19 = secondMaxAdjustAtk[0];
  else
    v19 = maxAjustAtk[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_39480396(
    currentAdjustAtkIconLabel,
    45,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * adjustAtk,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * v19,
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
  ServantCombineControl__CheckConductionWire(this, v20);
  combineInfoComp = (struct CombineInfoComponent_o *)ServantCombineControl__SetCampaignListPerSelectSvt(
                                                       this,
                                                       usrSvtData,
                                                       v21);
  if ( !this->fields.campaign )
    goto LABEL_31;
  v22 = (char)combineInfoComp;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.campaign,
                                                       0LL);
  if ( !combineInfoComp )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v22 & 1, 0LL);
  if ( (v22 & 1) == 0 )
    return;
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                       0,
                                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_31;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v24);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v25 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v25 = MenuListControl_TypeInfo;
  }
  v26 = ChangedFPSUtil__CovertFrameNumToSecond(v25->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v27 = ExtraEasing__AsymptoticSeriesFloat(
          MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
          (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
          0LL);
  v28 = (AlphaTransitionCalculator_o *)sub_1C22084(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v28, v26, v27, 0LL);
  this->fields.campaignAlphaCalculator = v28;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.campaignAlphaCalculator,
    (int64_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_31:
    sub_1C22094(combineInfoComp, v12);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
}


bool __fastcall ServantCombineControl__SetCampaignListPerSelectSvt(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_Collections_Generic_List_object__o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *EventMaster; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  Il2CppClass *klass; // x23
  int64_t Time; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int klass_high; // w8
  System_Int32_array *monitor; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t v29; // w1
  System_Int32_array *v30; // x23
  int32_t SvtClassId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Func_object__int__o *v36; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_object__object__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  ServantCombineControl___c_c *v40; // x8
  System_Func_object__int__o *_9__89_1; // x21
  Il2CppObject *v42; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4BE00B6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C21E38(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C21E38(&System_Func_List_EventCampaignEntity___int__TypeInfo);
    sub_1C21E38(&System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__);
    sub_1C21E38(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__);
    sub_1C21E38(&ServantCombineControl___c_TypeInfo);
    byte_4BE00B6 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_54;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  v8 = (System_Collections_Generic_List_object__o *)CombineEventCampaigns;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v8,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v59 = v58;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = v59.fields._current;
    EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(this, v10);
    if ( !current )
      sub_1C22094(EventMaster, v13);
    if ( !EventMaster )
      sub_1C22094(0LL, v13);
    Entity = DataMasterBase_object__object__int___GetEntity(
               EventMaster,
               (int32_t)current[1].klass,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C22094(0LL, v15);
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
            sub_1C22094(Time, v18);
          if ( *(_QWORD *)&monitor->max_length )
          {
            if ( !usrSvtData )
              sub_1C22094(Time, v18);
            v28 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
            v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v60.fields.currentCryptoKey = v28;
            *(_QWORD *)&v60.fields.fakeValue = v27;
            v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v60, 0LL);
            Time = System_Array__IndexOf_int_(
                     monitor,
                     v29,
                     (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
            goto LABEL_30;
          }
LABEL_31:
          if ( !v9 )
            sub_1C22094(Time, v18);
          items = v9->fields._items;
          v33 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            sub_1C22094(Time, v18);
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              current,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v35[4] = (Il2CppClass *)current;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)current, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      else if ( klass_high == 27 )
      {
        if ( !usrSvtData )
          sub_1C22094(Time, v18);
        Time = UserServantEntity__IsExchangeSvt(usrSvtData, 0LL);
        if ( (Time & 1) != 0 )
          goto LABEL_31;
      }
      else if ( (klass_high & 0xFFFFFFFE) == 32 )
      {
        if ( !usrSvtData )
          sub_1C22094(Time, v18);
        v30 = (System_Int32_array *)current[2].monitor;
        SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0LL);
        Time = System_Array__IndexOf_int_(
                 v30,
                 SvtClassId,
                 (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
LABEL_30:
        if ( (Time & 0x80000000) == 0 )
          goto LABEL_31;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !v9 )
    goto LABEL_54;
  if ( !v9->fields._size )
  {
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  v36 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventCampaignEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v36,
    0LL,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__,
    0LL);
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToLookup_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                               (System_Func_TSource__TKey__o *)v36,
                                                               (const MethodInfo_2FED8B4 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
  v38 = (System_Func_object__object__o *)sub_1C22084(System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
  System_Func_object__object____ctor(
    v38,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__,
    0LL);
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v37,
                                                               (System_Func_TSource__TResult__o *)v38,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
  v40 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v40 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_1 = (System_Func_object__int__o *)v40->static_fields->__9__89_1;
  if ( !_9__89_1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = ServantCombineControl___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v40->static_fields->__9;
    _9__89_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_List_EventCampaignEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_1,
      v42,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_1 = (struct System_Func_List_EventCampaignEntity___int__o *)_9__89_1;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_1,
      (int64_t)_9__89_1,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v39,
                                                               (System_Func_TSource__TKey__o *)_9__89_1,
                                                               (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v50,
                                (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
  if ( !this )
LABEL_54:
    sub_1C22094(Instance, v6);
  this->fields.campaignListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)Instance;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.campaignListPerSelectSvt,
    (int64_t)Instance,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  System_String_o *checkLv; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Int64_array *v20; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v22; // x25
  struct UserServantEntity_o *baseData; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  System_Collections_Generic_List_long__o *v26; // x24
  System_Collections_Generic_List_long__o *v27; // x23
  __int64 v28; // x26
  unsigned __int64 i; // x25
  struct System_Int64_array *v30; // x8
  int64_t v31; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v34; // x28
  UnityEngine_Transform_o *v35; // x22
  SetCombineData_o *v36; // x20
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v38; // x28
  MaterialSvtInfo_o *v39; // x29
  MaterialSvtInfo_ClickDelegate_o *v40; // x22
  Il2CppObject *Entity; // x28
  ServantLimitMaster_o *v42; // x29
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v45; // w22
  struct System_Int64_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  struct System_Int64_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  struct System_Int64_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Int64_array *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v70; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x23
  __int64 v72; // x21
  __int64 v73; // x22
  int32_t monitor_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v76; // x2
  int32_t v77; // w23
  struct UserServantEntity_o *v78; // x8
  UILabel_o *currentLvLb; // x22
  UILabel_o *increLvLb; // x22
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v83; // x21
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  UserServantEntity_o *v88; // x8
  __int64 v89; // x21
  __int64 v90; // x22
  int32_t v91; // w24
  __int64 v92; // x22
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  UserServantEntity_o *v99; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v101; // x8
  int v102; // w8
  int v103; // w8
  BalanceConfig_c *v104; // x0
  int32_t adjustHp; // w20
  uint32_t cctor_finished; // w9
  int v107; // w22
  int32_t StatusUpAdjustHp; // w8
  int v109; // w20
  int getHpAdjustVal; // w21
  int32_t v111; // w22
  int32_t v112; // w22
  int32_t v113; // w23
  int32_t v114; // w1
  BalanceConfig_c *v115; // x0
  int32_t adjustAtk; // w20
  uint32_t v117; // w9
  int32_t StatusUpAdjustAtk; // w8
  int v119; // w21
  int getAtkAdjustVal; // w22
  int v121; // w20
  int32_t v122; // w20
  int32_t v123; // w20
  int32_t v124; // w21
  int32_t v125; // w1
  bool v126; // w20
  float v127; // s0
  float v128; // s1
  float v129; // s2
  float v130; // s3
  const MethodInfo *v131; // x1
  UserServantEntity_o **p_baseData; // [xsp+10h] [xbp-B0h]
  int32_t targetLimitCnt; // [xsp+1Ch] [xbp-A4h]
  int32_t increAmount; // [xsp+20h] [xbp-A0h] BYREF
  int32_t v135; // [xsp+24h] [xbp-9Ch] BYREF
  __int64 v136; // [xsp+28h] [xbp-98h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+30h] [xbp-90h] BYREF
  __int64 maxAjustAtk; // [xsp+38h] [xbp-88h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-80h] BYREF
  System_String_array *skillNameList; // [xsp+48h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+50h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = data;
  if ( (byte_4BE00BA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C21E38(&CombineSvtData_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    sub_1C21E38(&StringLiteral_7526/*"INCREMENT_SVTLEVEL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE00BA = 1;
  }
  idList = 0LL;
  afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  skillNameList = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  maxAjustAtk = 0LL;
  v136 = 0LL;
  v135 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_133;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int64_t)materialUsrSvtIdList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v20 = v3->fields.materialUsrSvtIdList;
  if ( !v20 )
    goto LABEL_133;
  baseSvtData = v3->fields.baseSvtData;
  v22 = *(_QWORD *)&v20->max_length;
  this->fields.baseData = baseSvtData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseData, (int64_t)baseSvtData, v14, v15, v16, v17, v18, v19);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_133;
  v25 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v24 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v143.fields.currentCryptoKey = v25;
  *(_QWORD *)&v143.fields.fakeValue = v24;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v143, 0LL);
  v26 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  v27 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v22 >= 1 )
  {
    conductionWireInfo = this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_133;
    v28 = (unsigned int)v22;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    for ( i = 0LL; i != v28; ++i )
    {
      v30 = v3->fields.materialUsrSvtIdList;
      if ( !v30 )
        goto LABEL_133;
      if ( i >= v30->max_length )
        goto LABEL_134;
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_133;
      v31 = v30->m_Items[i];
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)conductionWireInfo, 0LL);
      conductionWireInfo = BaseMonoBehaviour__createObject(
                             (BaseMonoBehaviour_o *)this,
                             svtFaceInfo,
                             transform,
                             0LL,
                             0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v34 = conductionWireInfo;
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(conductionWireInfo, 0LL);
      v35 = (UnityEngine_Transform_o *)conductionWireInfo;
      if ( !byte_4BD6BB1 )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      if ( !v35 )
        goto LABEL_133;
      v36 = v3;
      UnityEngine_Transform__set_localPosition(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v34, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v147.fields.x = 0.5;
      v147.fields.y = 0.5;
      v147.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v147, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v34,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v38 = this->fields.baseData;
      v39 = (MaterialSvtInfo_o *)Component_object;
      v40 = (MaterialSvtInfo_ClickDelegate_o *)sub_1C22084(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(
        v40,
        (Il2CppObject *)this,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0LL);
      if ( !v39 )
        goto LABEL_133;
      MaterialSvtInfo__setMaterialSvtInfo(v39, i, v38, v31, 1, 0, v40, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo,
                 v31,
                 (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_133;
      v42 = (ServantLimitMaster_o *)conductionWireInfo;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v144.fields.currentCryptoKey = klass;
      *(_QWORD *)&v144.fields.fakeValue = monitor;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v144, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                         (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                         0LL);
      if ( !v42 )
        goto LABEL_133;
      conductionWireInfo = (UnityEngine_GameObject_o *)ServantLimitMaster__GetEntity(
                                                         v42,
                                                         v45,
                                                         (int32_t)conductionWireInfo,
                                                         0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v3 = v36;
      if ( SLODWORD(conductionWireInfo[1].klass) >= 4 )
      {
        if ( !v26 )
          goto LABEL_133;
        items = v26->fields._items;
        v47 = Method_System_Collections_Generic_List_long__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_133;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v26,
            v31,
            *(const MethodInfo_36370E8 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v26->fields._size = size + 1;
          items->m_Items[size] = v31;
        }
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_133;
        v49 = v27->fields._items;
        v50 = Method_System_Collections_Generic_List_long__Add__;
        ++v27->fields._version;
        if ( !v49 )
          goto LABEL_133;
        v51 = v27->fields._size;
        if ( (unsigned int)v51 >= v49->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v31,
            *(const MethodInfo_36370E8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v27->fields._size = v51 + 1;
          v49->m_Items[v51] = v31;
        }
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsExchangeSvt(
                                                         (UserServantEntity_o *)Entity,
                                                         0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
    }
    if ( !v26 )
      goto LABEL_133;
    v52 = System_Collections_Generic_List_long___ToArray(
            v26,
            (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v52;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.highRarityList, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    if ( !v27 )
      goto LABEL_133;
    v59 = System_Collections_Generic_List_long___ToArray(
            v27,
            (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v59;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.exceededCheckList,
      (int64_t)v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v36->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v135 = spendQp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_63921084(
                                                       (int32_t)&v135,
                                                       (System_String_o *)StringLiteral_9399/*"N0"*/,
                                                       0LL);
    if ( !qpLb )
      goto LABEL_133;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v36->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v135 = getExp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v135, 0LL);
    if ( !expLb )
      goto LABEL_133;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    v70 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v73 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
    v72 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v145.fields.currentCryptoKey = v73;
    *(_QWORD *)&v145.fields.fakeValue = v72;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                       v145,
                                                       0LL);
    if ( !v71 )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                       v71,
                                                       (int32_t)conductionWireInfo,
                                                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    monitor_high = HIDWORD(conductionWireInfo[5].monitor);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
    this->fields.expType = monitor_high;
    if ( !conductionWireInfo )
      goto LABEL_133;
    this->fields.totalExp = *((_DWORD *)&conductionWireInfo[10].fields + 1) + this->fields._getExpVal_k__BackingField;
    this->fields.checkLv = conductionWireInfo[10].fields.m_CachedPtr;
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL);
    checkLv = (System_String_o *)(unsigned int)this->fields.checkLv;
    v77 = LevelMax;
    if ( (_DWORD)checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, (int32_t)checkLv, v76) )
        LODWORD(checkLv) = this->fields.checkLv;
    }
    conductionWireInfo = this->fields.currentLvObj;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    conductionWireInfo = this->fields.increLvObj;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.increValLb;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conductionWireInfo, 0LL);
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    v78 = this->fields.baseData;
    if ( !v78 )
      goto LABEL_133;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v78 + 256, 0LL);
    if ( !currentLvLb )
      goto LABEL_133;
    UILabel__set_text(currentLvLb, (System_String_o *)conductionWireInfo, 0LL);
    increLvLb = this->fields.increLvLb;
    p_increLv = &this->fields.increLv;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)this + 528, 0LL);
    if ( !increLvLb )
      goto LABEL_133;
    UILabel__set_text(increLvLb, (System_String_o *)conductionWireInfo, 0LL);
    if ( !*p_baseData )
      goto LABEL_133;
    this->fields.increAmount = this->fields.increLv - (*p_baseData)->fields.lv;
    increValLb = this->fields.increValLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_7526/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v84, v85, v86);
    conductionWireInfo = (UnityEngine_GameObject_o *)System_String__Format(v83, v87, 0LL);
    if ( !increValLb )
      goto LABEL_133;
    UILabel__set_text(increValLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CheckCombineResStatus__getCombineResStatus(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (int32_t *)&afterAtk + 1,
      (int32_t *)&afterAtk,
      *p_baseData,
      *p_increLv,
      0LL);
    HIDWORD(afterAtk) += v36->fields.getHpAdjustVal;
    LODWORD(afterAtk) = v36->fields.getAtkAdjustVal + afterAtk;
    conductionWireInfo = (UnityEngine_GameObject_o *)*p_baseData;
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
        sub_1C2209C(conductionWireInfo, checkLv);
      checkLv = skillNameList->m_Items[0];
      if ( checkLv )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, checkLv, 0LL);
      }
    }
    v88 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v90 = *(_QWORD *)&v88->fields.limitCount.fields.currentCryptoKey;
    v89 = *(_QWORD *)&v88->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v146.fields.currentCryptoKey = v90;
    *(_QWORD *)&v146.fields.fakeValue = v89;
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v146, 0LL);
    v92 = sub_1C22084(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v92, 0LL);
    if ( !v92 )
      goto LABEL_133;
    v99 = *p_baseData;
    *(_QWORD *)(v92 + 16) = *p_baseData;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v92 + 16), (int64_t)v99, v93, v94, v95, v96, v97, v98);
    increLv = this->fields.increLv;
    *(_DWORD *)(v92 + 32) = v77;
    *(_DWORD *)(v92 + 24) = increLv;
    *(_DWORD *)(v92 + 28) = v91;
    v101 = this->fields.baseData;
    if ( !v101 )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp[1],
      lateExp,
      this->fields.totalExp,
      v101->fields.lv,
      v77,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v92 + 36) = lateExp[1];
    v102 = HIDWORD(afterAtk);
    *(_DWORD *)(v92 + 40) = lateExp[0];
    *(_DWORD *)(v92 + 44) = v102;
    v103 = afterAtk;
    *(_DWORD *)(v92 + 48) = v36->fields.getHpAdjustVal;
    *(_DWORD *)(v92 + 52) = v103;
    *(_DWORD *)(v92 + 56) = v36->fields.getAtkAdjustVal;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v92,
      0LL);
    *(_QWORD *)secondMaxAdjustAtk = 0LL;
    maxAjustAtk = 0LL;
    conductionWireInfo = (UnityEngine_GameObject_o *)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    UserServantEntity__GetAdjustMax(
      (UserServantEntity_o *)conductionWireInfo,
      (int32_t *)&maxAjustAtk + 1,
      (int32_t *)&maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0LL);
    conductionWireInfo = this->fields.resAdjustInfo;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)conductionWireInfo,
                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v148.fields.r = 1.0;
    v148.fields.g = 1.0;
    v148.fields.b = 1.0;
    v148.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v148, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)conductionWireInfo,
                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v149.fields.r = 1.0;
    v149.fields.g = 1.0;
    v149.fields.b = 1.0;
    v149.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v149, 0LL);
    if ( !*p_baseData )
      goto LABEL_133;
    v104 = BalanceConfig_TypeInfo;
    adjustHp = (*p_baseData)->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v104 = BalanceConfig_TypeInfo;
      cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    }
    v107 = HIDWORD(maxAjustAtk);
    StatusUpAdjustHp = v104->static_fields->StatusUpAdjustHp;
    v109 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v136) = v109;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v104);
      v104 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v109 >= StatusUpAdjustHp * v107 )
    {
      v111 = secondMaxAdjustAtk[1];
      if ( v104->_2.cctor_finished )
      {
LABEL_96:
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
        v112 = StatusUpAdjustHp * v111;
        if ( !conductionWireInfo )
          goto LABEL_133;
        v113 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v109;
        UIIconLabel__Set_39480396((UIIconLabel_o *)conductionWireInfo, 44, v113, v112, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_63920912((int32_t)&v136 + 4, v113, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_133;
          if ( v113 >= v112 )
            v114 = v112;
          else
            v114 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v109;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v114, v112, v113 >= v112, 0LL);
        }
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpMaxLabel;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !*p_baseData )
          goto LABEL_133;
        v115 = BalanceConfig_TypeInfo;
        adjustAtk = (*p_baseData)->fields.adjustAtk;
        v117 = BalanceConfig_TypeInfo->_2.cctor_finished;
        if ( !v117 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v115 = BalanceConfig_TypeInfo;
          v117 = BalanceConfig_TypeInfo->_2.cctor_finished;
        }
        StatusUpAdjustAtk = v115->static_fields->StatusUpAdjustAtk;
        v119 = StatusUpAdjustAtk * adjustAtk;
        LODWORD(v136) = StatusUpAdjustAtk * adjustAtk;
        getAtkAdjustVal = v3->fields.getAtkAdjustVal;
        v121 = maxAjustAtk;
        if ( !v117 )
        {
          j_il2cpp_runtime_class_init_0(v115);
          v115 = BalanceConfig_TypeInfo;
          StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        }
        if ( v119 >= StatusUpAdjustAtk * v121 )
        {
          v122 = secondMaxAdjustAtk[0];
          if ( v115->_2.cctor_finished )
            goto LABEL_112;
        }
        else
        {
          v122 = maxAjustAtk;
          if ( v115->_2.cctor_finished )
          {
LABEL_112:
            conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
            v123 = StatusUpAdjustAtk * v122;
            if ( !conductionWireInfo )
              goto LABEL_133;
            v124 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v119;
            UIIconLabel__Set_39480396((UIIconLabel_o *)conductionWireInfo, 45, v124, v123, 0, 0LL, 0, 0, 0, 0LL);
            if ( !System_Int32__Equals_63920912((int32_t)&v136, v124, 0LL) )
            {
              conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
              if ( !conductionWireInfo )
                goto LABEL_133;
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
              conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.qpLb;
              if ( this->fields.haveQpVal >= this->fields._spendQpVal_k__BackingField )
              {
                if ( conductionWireInfo )
                {
                  v127 = 1.0;
                  v126 = 1;
                  v128 = 1.0;
                  goto LABEL_131;
                }
              }
              else if ( conductionWireInfo )
              {
                v126 = 0;
                v127 = 1.0;
                v128 = 0.0;
LABEL_131:
                v129 = v128;
                v130 = v127;
                UIWidget__set_color((UIWidget_o *)conductionWireInfo, *(UnityEngine_Color_o *)&v127, 0LL);
                this->fields._IsExeCombine_k__BackingField = v126;
                ServantCombineControl__SetExeBtnState(this, v131);
                return;
              }
            }
LABEL_133:
            sub_1C22094(conductionWireInfo, checkLv);
          }
        }
        j_il2cpp_runtime_class_init_0(v115);
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        goto LABEL_112;
      }
    }
    else
    {
      v111 = HIDWORD(maxAjustAtk);
      if ( v104->_2.cctor_finished )
        goto LABEL_96;
    }
    j_il2cpp_runtime_class_init_0(v104);
    StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    goto LABEL_96;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_46495204(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v8; // x23
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v11; // s0
  float v12; // s8
  float v13; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v15; // x21
  __int64 v16; // x25
  float v17; // s9
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v19; // x21
  int32_t SvtClassId; // w0
  int32_t size; // w8
  const MethodInfo_364EDE4 **v22; // x29
  System_Collections_Generic_List_object__o *v23; // x21
  BalanceConfig_c **v24; // x25
  int v25; // w23
  int32_t v26; // w22
  int32_t v27; // w28
  ServantCombineControl_o *v28; // x19
  int64_t v29; // x27
  __int64 v30; // x21
  __int64 v31; // x26
  int32_t v32; // w0
  int64_t v33; // x21
  CombineMaterialEntity_o *v34; // x26
  int v35; // w8
  int value; // w26
  int v37; // w21
  BalanceConfig_c *v38; // x0
  ServantCombineControl_c *v39; // x8
  int SameClassExp; // w21
  float FIXED_VAL; // s10
  double v42; // d0
  unsigned int v43; // w8
  BalanceConfig_c **v44; // x20
  const MethodInfo_364EDE4 **v45; // x25
  System_Collections_Generic_List_UserServantEntity__o *v46; // x29
  float v47; // s0
  unsigned int v48; // w8
  unsigned int v49; // w24
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int32_t CombineQp; // w21
  float v57; // s0
  unsigned int v58; // w8
  int32_t v59; // w26
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  const MethodInfo *v64; // x3
  struct UserServantEntity_o *v65; // x8
  ServantCombineControl_c *v66; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct UserServantEntity_o *v74; // x1
  int32_t v75; // w8
  bool isAdjustAtkMax; // w0
  bool isSecondAdjustAtkMax; // w0
  System_Collections_Generic_List_long__o *v78; // x20
  int32_t v79; // w23
  int32_t v80; // w22
  __int128 v81; // q0
  struct System_Int64_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  System_Int64_array *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int v93; // [xsp+0h] [xbp-F0h]
  int v94; // [xsp+4h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // [xsp+8h] [xbp-E8h]
  int32_t expType; // [xsp+14h] [xbp-DCh]
  int64_t v97; // [xsp+18h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v98; // [xsp+20h] [xbp-D0h]
  CombineMaterialMaster_o *v99; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v102; // [xsp+78h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4BE00C8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantCombineControl_TypeInfo);
    sub_1C21E38(&SetCombineData_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE00C8 = 1;
  }
  v102 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v102,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_101;
  v98 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  combineEventList = menuListCtr->fields.combineEventList;
  v11 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  v12 = v11;
  v13 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_101;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v17 = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v16;
  *(_QWORD *)&v103.fields.fakeValue = v15;
  v99 = (CombineMaterialMaster_o *)v8;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v103, 0LL);
  if ( !MasterData_object )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_101;
  v19 = this->fields.baseData;
  v97 = Instance;
  if ( !v19 )
    goto LABEL_101;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v19, 0, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v19, SvtClassId, 0LL);
  v93 = Instance;
  if ( !targetMaterialList )
    goto LABEL_101;
  size = targetMaterialList->fields._size;
  v94 = size - 1;
  v22 = (const MethodInfo_364EDE4 **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v23 = v102;
  if ( size < 1 )
  {
    v26 = 0;
    v25 = 0;
LABEL_70:
    v59 = v26;
    if ( v23 )
      goto LABEL_73;
  }
  else
  {
    v95 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v24 = &BalanceConfig_TypeInfo;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    while ( 1 )
    {
      v28 = this;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)targetMaterialList,
                            v27,
                            *v22);
      if ( !Instance )
        goto LABEL_101;
      v29 = Instance;
      v31 = *(_QWORD *)(Instance + 80);
      v30 = *(_QWORD *)(Instance + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v104.fields.currentCryptoKey = v31;
      *(_QWORD *)&v104.fields.fakeValue = v30;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v104, 0LL);
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v95,
                            v32,
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_101;
      v33 = Instance;
      Instance = (int64_t)v99;
      if ( !v99 )
        goto LABEL_101;
      v34 = CombineMaterialMaster__GetEntity(v99, *(_DWORD *)(v33 + 136), *(_DWORD *)(v29 + 256), 0LL);
      Instance = (int64_t)v98;
      if ( !v98 )
        goto LABEL_101;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v98,
                            *(_DWORD *)(v33 + 80),
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v34 || !Instance )
        goto LABEL_101;
      v35 = *(_DWORD *)(Instance + 56);
      value = v34->fields.value;
      if ( v35 == 3 )
        goto LABEL_30;
      if ( v35 == v93 )
      {
        Instance = (int64_t)v28->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        v37 = *(_DWORD *)(v33 + 80);
        if ( v37 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL) )
        {
LABEL_30:
          v38 = *v24;
          if ( !(*v24)->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38);
            v38 = *v24;
          }
          v39 = ServantCombineControl_TypeInfo;
          SameClassExp = v38->static_fields->SameClassExp;
          if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v39 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v39->static_fields->FIXED_VAL;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v42 = (double)value * (double)SameClassExp / FIXED_VAL;
          v43 = vcvtpd_s64_f64(v42);
          if ( ceil(v42) == INFINITY )
            value = 0x80000000;
          else
            value = v43;
        }
      }
      v44 = v24;
      v45 = v22;
      if ( !byte_4BD7265 )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD7265 = 1;
      }
      v46 = targetMaterialList;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = (int64_t)v28->fields.baseData;
      v47 = v12 * (float)value;
      v48 = vcvtps_s32_f32(v47);
      v49 = ceilf(v47) == INFINITY ? 0x80000000 : v48;
      if ( !Instance )
        goto LABEL_101;
      CombineQp = UserServantEntity__getCombineQp((UserServantEntity_o *)Instance, 0LL);
      if ( !byte_4BD7265 )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD7265 = 1;
      }
      Instance = (int64_t)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v57 = v17 * (float)CombineQp;
      v58 = vcvtps_s32_f32(v57);
      if ( ceilf(v57) == INFINITY )
        v58 = 0x80000000;
      if ( !v97 )
        goto LABEL_101;
      v23 = v102;
      v59 = v58 + v26;
      if ( (signed int)(v58 + v26) > *(_DWORD *)(v97 + 96) )
      {
        this = v28;
        v22 = v45;
        v28->fields.isQpCondClear = 0;
        goto LABEL_70;
      }
      if ( !v102 )
        goto LABEL_101;
      items = v102->fields._items;
      v61 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v102->fields._version;
      if ( !items )
        goto LABEL_101;
      v62 = v23->fields._size;
      if ( (unsigned int)v62 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v29,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + v62;
        v23->fields._size = v62 + 1;
        v63[4] = (Il2CppClass *)v29;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v63 + 4), v29, v50, v51, v52, v53, v54, v55);
      }
      v65 = v28->fields.baseData;
      if ( !v65 )
        goto LABEL_101;
      v25 += v49;
      this = v28;
      if ( ServantCombineControl__IsLevelMax(v28, v65->fields.exp + v25, expType, v64) )
        break;
      v66 = ServantCombineControl_TypeInfo;
      if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        v66 = ServantCombineControl_TypeInfo;
      }
      targetMaterialList = v46;
      v22 = v45;
      if ( v27 != v66->static_fields->MAX_SELECT_NUM - 1 )
      {
        v26 = v59;
        v24 = v44;
        if ( v94 != v27++ )
          continue;
      }
      goto LABEL_73;
    }
    v22 = v45;
LABEL_73:
    if ( v23->fields._size < 1 )
    {
      return 0LL;
    }
    else
    {
      v23 = (System_Collections_Generic_List_object__o *)sub_1C22084(SetCombineData_TypeInfo);
      SetCombineData___ctor((SetCombineData_o *)v23, 0LL);
      if ( !v23 )
        goto LABEL_101;
      v74 = this->fields.baseData;
      v23->fields._items = (struct System_Object_array *)v74;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v23->fields, (int64_t)v74, v68, v69, v70, v71, v72, v73);
      v75 = v102->fields._size;
      v23->fields._version = v59;
      LODWORD(v23->fields._syncRoot) = v25;
      v23[1].monitor = 0LL;
      v23->fields._size = v75;
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
      BYTE4(v23[1].klass) = isAdjustAtkMax;
      Instance = (int64_t)this->fields.baseData;
      if ( !Instance )
LABEL_101:
        sub_1C22094(Instance, v6);
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
      BYTE5(v23[1].klass) = isSecondAdjustAtkMax;
      v78 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v78,
        (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
      v79 = v102->fields._size;
      if ( v79 >= 1 )
      {
        v80 = 0;
        while ( 1 )
        {
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v102, v80, *v22);
          if ( !Instance )
            goto LABEL_101;
          v81 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v101.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v101.fields.fakeValue = v81;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v100 = v101;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v100, 0LL);
          if ( !v78 )
            goto LABEL_101;
          v82 = v78->fields._items;
          v83 = Method_System_Collections_Generic_List_long__Add__;
          ++v78->fields._version;
          if ( !v82 )
            goto LABEL_101;
          v84 = v78->fields._size;
          if ( (unsigned int)v84 >= v82->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v78,
              Instance,
              *(const MethodInfo_36370E8 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v78->fields._size = v84 + 1;
            v82->m_Items[v84] = Instance;
          }
          if ( v79 == ++v80 )
            goto LABEL_99;
        }
      }
      if ( !v78 )
        goto LABEL_101;
LABEL_99:
      v85 = System_Collections_Generic_List_long___ToArray(
              v78,
              (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
      v23[1].fields._items = (struct System_Object_array *)v85;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v23[1].fields, (int64_t)v85, v86, v87, v88, v89, v90, v91);
    }
  }
  return (SetCombineData_o *)v23;
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
    sub_1C22094(0LL, v4);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x23
  __int64 v8; // x24
  ServantLimitImageMaster_o *v9; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v12; // w21
  ServantCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_39152216; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_4BE00B9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantCombineControl_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE00B9 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v8;
  *(_QWORD *)&v21.fields.fakeValue = v7;
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v21, 0LL);
  if ( !v9 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v9,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v12 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = (ServantCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_39152216 = CharaGraphManager__CreateTexturePrefab_39152216(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v12,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_39152216;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_39152216,
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
LABEL_14:
    sub_1C22094(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_42107664((UICharaGraphTexture_o *)this, usrSvtData, v12, 0LL, 0, 0LL);
}


void __fastcall ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BE00C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4BE00C1 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v8.fields.r = 1.0;
      v8.fields.g = 1.0;
      v8.fields.b = 1.0;
      v8.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v8, 0LL);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0LL);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v7, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1C22094(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0LL);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0LL);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4BE00B3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9399/*"N0"*/);
    byte_4BE00B3 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63921084((int)this + 540, (System_String_o *)StringLiteral_9399/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1C22094(SelfUserGame, v4);
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
      sub_1C22094(recommendedButton, isEnabled);
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
    sub_1C22094(0LL, v5);
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v22; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v24; // x20
  ServantCombineControl___c_c *v25; // x8
  System_Action_o *_9__108_1; // x22
  System_String_o *v27; // x21
  Il2CppObject *v28; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *v36; // x19
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  CommonConfirmDialog_ClickDelegate_o *v40; // x24
  System_String_o *v41; // x21
  System_Action_o *v42; // x22

  if ( (byte_4BE00C5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__108_1__);
    sub_1C21E38(&Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__0__);
    sub_1C21E38(&Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__2__);
    sub_1C21E38(&ServantCombineControl___c__DisplayClass108_0_TypeInfo);
    sub_1C21E38(&ServantCombineControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_11211/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C21E38(&StringLiteral_11210/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_1C21E38(&StringLiteral_11209/*"RECOMMENDED_NOT_EXIST_MSG"*/);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE00C5 = 1;
  }
  v3 = sub_1C22084(ServantCombineControl___c__DisplayClass108_0_TypeInfo);
  ServantCombineControl___c__DisplayClass108_0___ctor((ServantCombineControl___c__DisplayClass108_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v12);
  *(_QWORD *)(v3 + 24) = RecommendedCombineData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)RecommendedCombineData, v14, v15, v16, v17, v18, v19);
  isQpCondClear = this->fields.isQpCondClear;
  if ( !*(_QWORD *)(v3 + 24) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isQpCondClear )
      {
LABEL_10:
        recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11209/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                  0LL);
        v24 = (System_String_o *)recommendedConfigDialog;
        v25 = ServantCombineControl___c_TypeInfo;
        if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
          v25 = ServantCombineControl___c_TypeInfo;
        }
        _9__108_1 = v25->static_fields->__9__108_1;
        v27 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__108_1 )
        {
          if ( !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            v25 = ServantCombineControl___c_TypeInfo;
          }
          v28 = (Il2CppObject *)v25->static_fields->__9;
          _9__108_1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(_9__108_1, v28, Method_ServantCombineControl___c__SetRecommendedMaterial_b__108_1__, 0LL);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
          static_fields->__9__108_1 = _9__108_1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__108_1,
            (int64_t)_9__108_1,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
        }
        if ( !Instance )
          goto LABEL_25;
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v27,
          v24,
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
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11210/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
    v42 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v3,
      Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__2__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v41,
      v42,
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
      RecommenededConfigDialog__Close_46474208(recommendedConfigDialog, 0LL, v20);
      ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v3 + 24), v22);
      return;
    }
LABEL_25:
    sub_1C22094(recommendedConfigDialog, v5);
  }
  v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11211/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v40 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v40,
    (Il2CppObject *)v3,
    Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__0__,
    0LL);
  if ( !v36 )
    goto LABEL_25;
  CommonUI__OpenConfirmDialog_31128088(
    (CommonUI_o *)v36,
    (System_String_o *)StringLiteral_1/*""*/,
    v37,
    v38,
    v39,
    v40,
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
    sub_1C22094(preSelectBaseLb, method);
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
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4BE00C2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_7533/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_1C21E38(&StringLiteral_7542/*"INFO_MSG_SVTCOMBINE_BASE"*/);
    sub_1C21E38(&StringLiteral_5912/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C21E38(&StringLiteral_12347/*"SHORT_QP_INFO_MSG"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE00C2 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1C22094(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5912/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12347/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7533/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
    v7 = &StringLiteral_7542/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0LL);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t target; // w8
  float y; // s9
  float x; // s10
  float z; // s8
  int v10; // w8
  int v11; // w9
  UISprite_o *campaign; // x21
  System_String_o *v13; // x0
  UILabel_o *campaignLabel; // x20
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BE00B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantCombineControl_o *)sub_1C21E38(&StringLiteral_20881/*"img_txt_campaign_"*/);
    byte_4BE00B7 = 1;
  }
  v15 = 0LL;
  if ( !byte_4BD6BB1 )
  {
    this = (ServantCombineControl_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_1C22094(this, eventInfoData);
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
    v10 = 1;
    z = 0.0;
    v11 = 1113849856;
LABEL_14:
    y = 4.0;
    x = *(float *)&v11;
    HIDWORD(v15) = v10;
    goto LABEL_15;
  }
  if ( target == 2 )
    goto LABEL_11;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_13:
    v10 = 2;
    z = 0.0;
    v11 = 1119748096;
    goto LABEL_14;
  }
LABEL_15:
  campaign = v4->fields.campaign;
  v13 = System_Int32__ToString((int32_t)&v15 + 4, 0LL);
  this = (ServantCombineControl_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_20881/*"img_txt_campaign_"*/, v13, 0LL);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)EventCampaignMaster__getData(
                                      (EventCampaignMaster_o *)this,
                                      eventInfoData->fields.eventId,
                                      0LL);
  if ( !this )
    goto LABEL_24;
  LODWORD(v15) = SLODWORD(this->fields.baseUserServantEntity) / 1000;
  campaignLabel = v4->fields.campaignLabel;
  this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v15, 0LL);
  if ( !campaignLabel )
    goto LABEL_24;
  UILabel__set_text(campaignLabel, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaignLabel;
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4BE00BD & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3893/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4BE00BD = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3893/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0LL )
    sub_1C22094(SelfUserGame, v5);
  SetRarityDialogControl__SetExceedMaterialInfo(
    exeCombineDlg,
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
  int32_t lockCountObj; // w21
  signed __int64 v8; // x23
  unsigned __int64 max_length; // x27
  int64_t v10; // x22

  if ( (byte_4BE00BC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3893/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4BE00BC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3893/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  lockCountObj = (int32_t)SelfUserGame->fields.lockCountObj;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
      sub_1C2209C(SelfUserGame, v5);
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v10,
                                          (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v8;
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
    sub_1C22094(SelfUserGame, v5);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v3,
    this->fields._spendQpVal_k__BackingField,
    lockCountObj,
    v8 < (int)max_length,
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
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x21
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4BE00CB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BE00CB = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C22094(0LL, v6);
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
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_21;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_21:
      v15 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_61;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v16);
LABEL_61:
      sub_1C22094(v16, v17);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v16,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1C22094(0LL, v20);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v21 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_33;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_33:
      v26 = sub_1C73E18(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
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
                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C22094(helpBtn, *(_QWORD *)&progress);
  }
}


void __fastcall ServantCombineControl__UnBlockTutorial(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x20
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v26; // x8
  struct SetRarityDialogControl_o *v27; // x8

  if ( (byte_4BE00CA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BE00CA = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_64;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C22094(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_21;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_21:
      v13 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       Enumerator,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_62;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v14);
LABEL_62:
      sub_1C22094(v14, v15);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v14,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1C22094(0LL, v18);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0LL);
  }
  v19 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_33;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_33:
      v24 = sub_1C73E18(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
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
                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v26 = this->fields.exeCombineDlg;
  if ( !v26 )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)v26->fields.cancelBtnLb;
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
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn
    || (helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))helpBtn->klass[1]._1.namespaze)(
                                                helpBtn,
                                                1LL,
                                                helpBtn->klass[1]._1.byval_arg.data),
        (v27 = this->fields.exeCombineDlg) == 0LL)
    || (helpBtn = (UnityEngine_GameObject_o *)v27->fields.cancelBtnLb) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                helpBtn,
                                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_64:
    sub_1C22094(helpBtn, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))helpBtn->klass[1]._1.implementedInterfaces)(
    helpBtn,
    0LL,
    1LL,
    helpBtn->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantCombineControl__Update(ServantCombineControl_o *this, const MethodInfo *method)
{
  void *campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaignListPerSelectSvt; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v5; // x8
  int size; // w8
  const MethodInfo *v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  int64_t v9; // x20
  int *v10; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v12; // x2
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v16; // s8
  MenuListControl_c *v17; // x0
  const MethodInfo *v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  int64_t v20; // x20
  int *v21; // x8
  int32_t campaiginPerSelectSvtListIndex; // w1
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x2
  struct AlphaTransitionCalculator_o *v27; // x8

  if ( (byte_4BE00AE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C21E38(&MenuListControl_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_TransitionCalculator_float__Update__);
    sub_1C21E38(&Method_TransitionCalculator_float__get_Current__);
    byte_4BE00AE = 1;
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
    v5 = this->fields.campaignListPerSelectSvt;
    if ( v5 )
    {
      size = v5->fields._size;
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
            campaign = ServantCombineControl__get_EventMaster(this, v7);
            if ( this->fields.campaignListPerSelectSvt )
            {
              v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                           0,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                if ( campaign )
                {
                  if ( v8 )
                  {
                    campaign = DataMasterBase_object__object__int___GetEntity(
                                 v8,
                                 *((_DWORD *)campaign + 4),
                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                    if ( campaign )
                    {
                      v9 = *((_QWORD *)campaign + 12);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( v9 >= NetworkManager__getTime(0LL) )
                        return;
                      campaign = this->fields.campaignListPerSelectSvt;
                      if ( campaign )
                      {
                        campaign = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)campaign,
                                     0,
                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                        if ( campaign )
                        {
                          System_Collections_Generic_List_object___RemoveAt(
                            (System_Collections_Generic_List_object__o *)campaign,
                            0,
                            (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                          campaign = this->fields.campaignListPerSelectSvt;
                          if ( campaign )
                          {
                            campaign = System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)campaign,
                                         0,
                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                            if ( campaign )
                            {
                              v10 = (int *)campaign;
                              campaign = this->fields.campaignListPerSelectSvt;
                              if ( campaign )
                              {
                                if ( v10[6] <= 0 )
                                {
                                  System_Collections_Generic_List_object___RemoveAt(
                                    (System_Collections_Generic_List_object__o *)campaign,
                                    0,
                                    (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                                }
                                else
                                {
                                  campaign = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)campaign,
                                               0,
                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                                  if ( !campaign )
                                    goto LABEL_67;
                                  Item = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)campaign,
                                           0,
                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                                  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v12);
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
          (const MethodInfo_390F058 *)Method_TransitionCalculator_float__Update__);
        campaign = this->fields.campaignAlphaCalculator;
        if ( !campaign )
          goto LABEL_67;
        if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
        {
          realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
          v16 = realtimeSinceStartup;
          v17 = MenuListControl_TypeInfo;
          if ( !MenuListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
            v17 = MenuListControl_TypeInfo;
          }
          if ( (float)(v16 - campaignAlphaAnimTimeOld) >= v17->static_fields->ALPHA_ANIMATION_INTERVAL )
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
          campaign = ServantCombineControl__get_EventMaster(this, v18);
          if ( !this->fields.campaignListPerSelectSvt )
            goto LABEL_67;
          v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                       this->fields.campaiginPerSelectSvtListIndex,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_67;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_67;
          if ( !v19 )
            goto LABEL_67;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v19,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !campaign )
            goto LABEL_67;
          v20 = *((_QWORD *)campaign + 12);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v20 < NetworkManager__getTime(0LL) )
          {
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            v21 = (int *)campaign;
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
            if ( v21[6] <= 0 )
            {
              System_Collections_Generic_List_object___RemoveAt(
                (System_Collections_Generic_List_object__o *)campaign,
                campaiginPerSelectSvtListIndex,
                (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
            }
            else
            {
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           campaiginPerSelectSvtListIndex,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_67;
              v23 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v23, v24);
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
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
LABEL_67:
            sub_1C22094(campaign, method);
          v25 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v25, v26);
        }
        v27 = this->fields.campaignAlphaCalculator;
        if ( v27 )
        {
          campaign = this->fields.campaign;
          this->fields.campaignAlphaAnimNow = v27->fields._Current_k__BackingField;
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
      sub_1C22094(0LL, isDecide);
    RecommenededConfigDialog__Close_46474208(recommendedConfigDialog, 0LL, method);
  }
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall ServantCombineControl___SetCampaignListPerSelectSvt_b__89_0(
        ServantCombineControl_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *g,
        const MethodInfo *method)
{
  ServantCombineControl___c_c *v5; // x0
  System_Func_object__object__o *_9__89_3; // x21
  Il2CppObject *v7; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  ServantCombineControl___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__int__o *_9__89_4; // x21
  Il2CppObject *v19; // x22
  struct ServantCombineControl___c_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x20
  System_Func_T__TResult__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4BE00CE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C21E38(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C21E38(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_1C21E38(&System_Func_EventCampaignEntity__long__TypeInfo);
    sub_1C21E38(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__);
    sub_1C21E38(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__);
    sub_1C21E38(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__);
    sub_1C21E38(&ServantCombineControl___c_TypeInfo);
    byte_4BE00CE = 1;
  }
  v5 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v5 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_3 = (System_Func_object__object__o *)v5->static_fields->__9__89_3;
  if ( !_9__89_3 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantCombineControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__89_3 = (System_Func_object__object__o *)sub_1C22084(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__89_3,
      v7,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_3 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__89_3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__89_3, (int64_t)_9__89_3, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Select_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)g,
          (System_Func_TSource__TResult__o *)_9__89_3,
          (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
  v16 = ServantCombineControl___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v16 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_4 = (System_Func_object__int__o *)v16->static_fields->__9__89_4;
  if ( !_9__89_4 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ServantCombineControl___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__89_4 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_4,
      v19,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__,
      0LL);
    v20 = ServantCombineControl___c_TypeInfo->static_fields;
    v20->__9__89_4 = (struct System_Func_EventCampaignEntity__int__o *)_9__89_4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v20->__9__89_4, (int64_t)_9__89_4, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v17,
          (System_Func_TSource__TKey__o *)_9__89_4,
          (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  v28 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_EventCampaignEntity__long__TypeInfo);
  System_Func_object__long____ctor(
    v28,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__,
    0LL);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v27,
                                                               (System_Func_TSource__TKey__o *)v28,
                                                               (const MethodInfo_2FE8D44 *)Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v29,
                                                                     (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


int64_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_b__89_5(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  void *EventMaster; // x0
  __int64 v6; // x1

  if ( (byte_4BE00CF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4BE00CF = 1;
  }
  EventMaster = ServantCombineControl__get_EventMaster(this, (const MethodInfo *)x);
  if ( !x
    || !EventMaster
    || (EventMaster = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)EventMaster,
                        x->fields.eventId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C22094(EventMaster, v6);
  }
  return *((_QWORD *)EventMaster + 12);
}


int32_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2(
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  int32_t target; // w8

  if ( !entity )
    sub_1C22094(0LL, method);
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
  EventMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  PartyOrganizationUtility_o *p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BE00AD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE00AD = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v5);
    p_eventMaster = (PartyOrganizationUtility_o *)&this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1C21DDC(p_eventMaster, (int64_t)MasterData_object, v8, v9, v10, v11, v12, v13);
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
  sub_1C21DDC(
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE018C & 1) == 0 )
  {
    sub_1C21E38(&ServantCombineControl___c_TypeInfo);
    byte_4BE018C = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantCombineControl___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_o *v5; // x0
  EventCampaignEntity_o *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4BE018D & 1) == 0 )
  {
    sub_1C21E38(&CombineRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BE018D = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_1C22094(Instance, v3);
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    sub_1C22354(Instance);
    ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_3(v5, v6, v7);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__114_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0, 0LL), !b) )
    sub_1C22094(this, a);
  return (_DWORD)this - UserServantEntity__getSvtClassId(b, 0, 0LL);
}


int32_t __fastcall ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_1(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x19

  if ( (byte_4BE018E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    this = (ServantCombineControl___c_o *)sub_1C21E38(&ServantCombineControl_TypeInfo);
    byte_4BE018E = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)x,
           0,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
    sub_1C22094(this, 0LL);
  return x->fields.value;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__108_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BE018F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE018F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantCombineControl___c__DisplayClass108_0___ctor(
        ServantCombineControl___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCombineControl___c__DisplayClass108_0___SetRecommendedMaterial_b__0(
        ServantCombineControl___c__DisplayClass108_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4BE0190 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE0190 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C22094(Instance, v6);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass108_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4BE0191 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE0191 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_1C22094(Instance, v4);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}