void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19C6D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCombineControl_TypeInfo, v1, v2);
    byte_4B19C6D = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void __fastcall ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19C6C & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    byte_4B19C6C = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall ServantCombineControl__CheckConductionWire(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  __int64 v24; // x21
  __int64 v25; // x22
  __int64 v26; // x1
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v29; // x20
  UILabel_o *v30; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B19C58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_3817/*"CONDUCTION_LIMITUP"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3820/*"CONDUCTION_LVEXCEED_MSG"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3819/*"CONDUCTION_LVEXCEED"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3818/*"CONDUCTION_LIMITUP_MSG"*/, v18, v19);
    byte_4B19C58 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_38;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_38;
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v25 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v31.fields.currentCryptoKey = v25;
    *(_QWORD *)&v31.fields.fakeValue = v24;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                       v31,
                                                       0LL);
    if ( !v23 )
      goto LABEL_38;
    DataMasterBase_object__object__int___GetEntity(
      v23,
      (int32_t)conductionWireInfo,
      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
                conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3820/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3819/*"CONDUCTION_LVEXCEED"*/,
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
                sub_1BCAA3C(conductionWireInfo, method);
              }
            }
          }
        }
        else
        {
          v29 = this->fields.conductionWireLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3818/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v29 )
            goto LABEL_38;
          UILabel__set_text(v29, (System_String_o *)conductionWireInfo, 0LL);
          v30 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3817/*"CONDUCTION_LIMITUP"*/,
                                                             0LL);
          if ( !v30 )
            goto LABEL_38;
          UILabel__set_text(v30, (System_String_o *)conductionWireInfo, 0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  void *baseData; // x0
  int32_t LevelMax; // w0
  int32_t v9; // w8
  int32_t totalExp; // w9
  int32_t v11; // w8
  bool result; // w0

  if ( (byte_4B19C5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B19C5B = 1;
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
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(baseData, *(_QWORD *)&lv);
  }
  v9 = *((_DWORD *)baseData + 6);
  totalExp = this->fields.totalExp;
  if ( v9 <= totalExp )
  {
    if ( v9 != totalExp )
    {
      result = 0;
      ++this->fields.checkLv;
      return result;
    }
    v11 = *((_DWORD *)baseData + 5) + 1;
  }
  else
  {
    v11 = *((_DWORD *)baseData + 5);
  }
  this->fields.increLv = v11;
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

  if ( (byte_4B19C54 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
    byte_4B19C54 = 1;
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
      v17 = v18;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v17, 0LL);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v16, 0LL) )
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_63206508((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0, 0LL);
    return System_Int32__CompareTo_63206508((int32_t)&SvtClassId, v8, 0LL);
  }
  return result;
}


void __fastcall ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *selectGrid; // x0
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
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  __int64 v34; // x20
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( (byte_4B19C60 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v8, v9);
    byte_4B19C60 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_1BCAA3C(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v11);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                       Enumerator,
                                       *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v21);
LABEL_35:
      sub_1BCAA3C(v21, v22);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  v26 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v33 = *(_QWORD *)v26;
    v34 = v26;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_30;
      }
      v37 = v33 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_30:
      v37 = sub_1C1C7C0(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


SetCombineData_o *__fastcall ServantCombineControl__GetRecommendedCombineData(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  void *Instance; // x0
  __int64 v37; // x1
  UserServantEntity_array *CombineMaterialList; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x20
  __int64 v43; // x1
  int32_t SvtClassId; // w22
  __int64 v45; // x1
  bool IsExtraClass; // w22
  RecommendedConfigSaveData_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_T__o *v51; // x23
  int v52; // w19
  int32_t v53; // w25
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  __int64 v57; // x27
  __int64 v58; // x28
  UserServantEntity_o *v59; // x25
  int v60; // w26
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
  __int64 v71; // x2
  __int64 v72; // x3
  ServantCombineControl_o *v73; // x0
  const MethodInfo *v74; // x4
  const MethodInfo *v75; // x2
  System_Comparison_T__o *v77; // x21
  ServantCombineControl_o *v78; // [xsp+8h] [xbp-68h]

  if ( (byte_4B19C66 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserServantEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v26, v27);
    sub_1BCA7E0(&RecommendedConfigSaveData_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_ServantCombineControl_ClassRaritySort__, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v34, v35);
    byte_4B19C66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.baseData;
  if ( !Instance )
    goto LABEL_22;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v43);
  IsExtraClass = SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v45);
  Instance = RecommendedConfigSaveData__LoadConfigSaveData(0LL);
  if ( !Instance )
    goto LABEL_22;
  v47 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v51 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_Rarity_TYPE__TypeInfo,
                                                  v48,
                                                  v49,
                                                  v50);
  System_Collections_Generic_List_Int32Enum____ctor(
    v51,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  Instance = v47->fields.selectRarityList;
  if ( !Instance )
    goto LABEL_22;
  v52 = *((_DWORD *)Instance + 6);
  if ( v52 >= 1 )
  {
    v53 = 0;
    do
    {
      Instance = (void *)System_Collections_Generic_List_int___get_Item(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v53,
                           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v51 )
        break;
      items = v51->fields._items;
      v55 = Method_System_Collections_Generic_List_Rarity_TYPE__Add__;
      ++v51->fields._version;
      if ( !items )
        break;
      size = v51->fields._size;
      v37 = (unsigned int)Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v51,
          (int32_t)Instance,
          *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v51->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = (_DWORD)Instance;
      }
      if ( v52 == ++v53 )
        goto LABEL_23;
      Instance = v47->fields.selectRarityList;
    }
    while ( Instance );
LABEL_22:
    sub_1BCAA3C(Instance, v37);
  }
LABEL_23:
  v78 = this;
  if ( !CombineMaterialList )
    goto LABEL_22;
  if ( (int)*(_QWORD *)&CombineMaterialList->max_length >= 1 )
  {
    v57 = 0LL;
    v58 = (unsigned int)*(_QWORD *)&CombineMaterialList->max_length - 1LL;
    while ( 1 )
    {
      v59 = CombineMaterialList->m_Items[v57];
      Instance = (void *)RecommendedConfigSaveData__IsAll(v47, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v59 )
          goto LABEL_22;
        Instance = (void *)UserServantEntity__getSvtClassId(v59, 0, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_47;
      }
      Instance = (void *)RecommendedConfigSaveData__IsTargetOnly(v47, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v59 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v59, 0, 0LL);
      if ( !v78->fields.baseData )
        goto LABEL_22;
      v60 = (int)Instance;
      Instance = (void *)UserServantEntity__getSvtClassId(v78->fields.baseData, 0, 0LL);
      if ( v60 == (_DWORD)Instance )
        goto LABEL_40;
LABEL_47:
      if ( v58 == v57 )
        goto LABEL_50;
      if ( ++v57 >= (unsigned __int64)CombineMaterialList->max_length )
        sub_1BCAA44(Instance, v37);
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v59 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v59, 0, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_47;
    }
    else
    {
LABEL_39:
      if ( !v59 )
        goto LABEL_22;
    }
LABEL_40:
    Instance = (void *)UserServantEntity__getRarity(v59, 0LL);
    if ( !v51 )
      goto LABEL_22;
    Instance = (void *)System_Collections_Generic_List_Int32Enum___Contains(
                         v51,
                         (int32_t)Instance,
                         (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_22;
      v67 = v42->fields._items;
      v68 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v42->fields._version;
      if ( !v67 )
        goto LABEL_22;
      v69 = v42->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v42,
          (Il2CppObject *)v59,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &v67->obj.klass + v69;
        v42->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)v59;
        sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v59, v61, v62, v63, v64, v65, v66);
      }
    }
    goto LABEL_47;
  }
LABEL_50:
  if ( !v42 )
    goto LABEL_22;
  if ( !v42->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v47, 0LL) )
  {
    Instance = v78->fields.baseData;
    if ( !Instance )
      goto LABEL_22;
    v73 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
    v42 = (System_Collections_Generic_List_object__o *)ServantCombineControl__MixMaterialSort(
                                                         v73,
                                                         (int32_t)v73,
                                                         (System_Collections_Generic_List_Rarity_TYPE__o *)v51,
                                                         (System_Collections_Generic_List_UserServantEntity__o *)v42,
                                                         v74);
  }
  else
  {
    v77 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserServantEntity__TypeInfo, v37, v71, v72);
    System_Comparison_object____ctor(v77, (Il2CppObject *)v78, Method_ServantCombineControl_ClassRaritySort__, 0LL);
    System_Collections_Generic_List_object___Sort_56244000(
      v42,
      v77,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_45890364(
           v78,
           (System_Collections_Generic_List_UserServantEntity__o *)v42,
           v75);
}


int32_t __fastcall ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


void __fastcall ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *currentLvObj; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UILabel_o *qpLb; // x20
  UILabel_o *expLb; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  int v14; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19C52 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B19C52 = 1;
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
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 0, v7);
  ServantCombineControl__ResetCampaign(this, v8);
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
  ServantCombineControl__SetHaveQpInfo(this, v9);
  this->fields._spendQpVal_k__BackingField = 0;
  qpLb = this->fields.qpLb;
  v14 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_63206828(
                                               (int32_t)&v14,
                                               (System_String_o *)StringLiteral_9337/*"N0"*/,
                                               0LL);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0LL);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !currentLvObj )
    goto LABEL_22;
  v15.fields.r = 1.0;
  v15.fields.g = 1.0;
  v15.fields.b = 1.0;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v15, 0LL);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v14 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0LL),
        ServantCombineControl__DestroyGrid(this, v12),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v13),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(currentLvObj, method);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0LL);
}


void __fastcall ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B19C50 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19C50 = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1BCAA3C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_charaGraph, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall ServantCombineControl__InitSvtCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  CombineRootComponent_c *v34; // x1
  System_String_o *selectMaterialSvtBtn; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_c *v40; // x0
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v42; // x21
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  const MethodInfo *v58; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v60; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v63; // x0
  __int64 v64; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v66; // x0
  void *v67; // x0
  int v68; // w1
  __int64 v69; // x21
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19C4F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v22, v23);
    sub_1BCA7E0(&ServantCombineControl___c_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_7023/*"GET_EXP_INFO"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_9343/*"NEED_QP_INFO"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v32, v33);
    byte_4B19C4F = 1;
  }
  memset(&v71, 0, sizeof(v71));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( TutorialFlag__Get_38402052(102, 0LL) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9343/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_7023/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        ServantCombineControl__InitMaterialSvtInfo(this, v58);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8893/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v60);
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
                            (System_Collections_Generic_List_Enumerator_T__o *)&v70,
                            combineEventList,
                            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v71 = v70;
                          while ( 1 )
                          {
                            v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v71,
                                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v63 )
                              break;
                            if ( !v71.fields._current )
                              sub_1BCAA3C(v63, v64);
                            klass_high = HIDWORD(v71.fields._current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v66 = this->fields.menuListCtr;
                              if ( !v66 )
                                sub_1BCAA3C(0LL, v64);
                              MenuListControl__setBannerIcon(
                                v66,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v71.fields._current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v71,
                            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_1BCAA3C(selectMaterialSvtBtn, v36);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].monitor;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  v34 = CombineRootComponent_TypeInfo;
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(selectMaterialSvtBtn->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[27].klass) == 1 )
    {
      v40 = ServantCombineControl___c_TypeInfo;
      if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, CombineRootComponent_TypeInfo);
        v40 = ServantCombineControl___c_TypeInfo;
      }
      _9__81_0 = v40->static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40, v34);
          v40 = ServantCombineControl___c_TypeInfo;
        }
        v42 = (Il2CppObject *)v40->static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v37, v38);
        System_Action___ctor(_9__81_0, v42, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_0 = _9__81_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__81_0,
          (int64_t)_9__81_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_18;
  }
  sub_1BCACFC(selectMaterialSvtBtn);
  if ( v68 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v71,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1CB5270();
  }
  v69 = *(_QWORD *)__cxa_begin_catch(v67);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v69 )
    sub_1BCAA34(v69);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *Instance; // x0
  __int64 v16; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t v21; // w22
  int32_t LevelMax; // w0
  int v23; // w21
  int v24; // w8
  int32_t v25; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B19C67 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&totalExp, *(_QWORD *)&expType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B19C67 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v20 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v27.fields.currentCryptoKey = v20;
  *(_QWORD *)&v27.fields.fakeValue = v19;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  if ( !v18
    || (DataMasterBase_object__object__int___GetEntity(
          v18,
          (int32_t)Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v16);
  }
  v21 = *((_DWORD *)Instance + 64);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  v23 = LevelMax;
  if ( v21 == LevelMax )
  {
    v24 = 0;
  }
  else if ( v21 >= LevelMax )
  {
LABEL_18:
    v24 = v23;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_22;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v21, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v25 = *((_DWORD *)Instance + 6);
      if ( v25 > totalExp )
      {
        v24 = *((_DWORD *)Instance + 5);
        return v24 >= v23;
      }
      if ( v25 == totalExp )
        break;
      if ( v23 == ++v21 )
        goto LABEL_18;
    }
    v24 = *((_DWORD *)Instance + 5) + 1;
  }
  return v24 >= v23;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *v40; // x22
  Il2CppObject *Item; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  int32_t size; // w19
  int32_t i; // w25
  Il2CppObject *v47; // x26
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  System_Collections_Generic_List_object__o *v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  ServantCombineControl___c_c *v66; // x0
  System_Comparison_T__o *_9__114_0; // x23
  Il2CppObject *v68; // x24
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_List_object__o *v76; // x23
  int32_t v77; // w19
  int32_t v78; // w24
  int v79; // w25
  int32_t v80; // w26
  Il2CppObject *v81; // x27
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  int32_t v92; // w26
  Il2CppObject *v93; // x27
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  int32_t v104; // w26
  Il2CppObject *v105; // x27
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0

  if ( (byte_4B19C69 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserServantEntity__TypeInfo, *(_QWORD *)&baseServantClass, checkRarityTypeList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_ServantCombineControl___c__MixMaterialSort_b__114_0__, v25, v26);
    sub_1BCA7E0(&ServantCombineControl___c_TypeInfo, v27, v28);
    byte_4B19C69 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, *(_QWORD *)&baseServantClass);
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        goto LABEL_75;
      v47 = Item;
      Item = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Item, 0, 0LL);
      if ( (_DWORD)Item == baseServantClass )
      {
        if ( !v32 )
          goto LABEL_75;
        items = v32->fields._items;
        v55 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v32->fields._version;
        if ( !items )
          goto LABEL_75;
        v56 = v32->fields._size;
        if ( (unsigned int)v56 >= items->max_length )
        {
          v61 = v55[4];
          v62 = v32;
LABEL_27:
          System_Collections_Generic_List_object___AddWithResize(
            v62,
            v47,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61 + 192) + 112LL));
          continue;
        }
        v57 = &items->obj.klass + v56;
        v32->fields._size = v56 + 1;
      }
      else if ( (_DWORD)Item == 1001 )
      {
        if ( !v36 )
          goto LABEL_75;
        v58 = v36->fields._items;
        v59 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v36->fields._version;
        if ( !v58 )
          goto LABEL_75;
        v60 = v36->fields._size;
        if ( (unsigned int)v60 >= v58->max_length )
        {
          v61 = v59[4];
          v62 = v36;
          goto LABEL_27;
        }
        v57 = &v58->obj.klass + v60;
        v36->fields._size = v60 + 1;
      }
      else
      {
        if ( !v40 )
          goto LABEL_75;
        v63 = v40->fields._items;
        v64 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v40->fields._version;
        if ( !v63 )
          goto LABEL_75;
        v65 = v40->fields._size;
        if ( (unsigned int)v65 >= v63->max_length )
        {
          v61 = v64[4];
          v62 = v40;
          goto LABEL_27;
        }
        v57 = &v63->obj.klass + v65;
        v40->fields._size = v65 + 1;
      }
      v57[4] = (Il2CppClass *)v47;
      sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v47, v48, v49, v50, v51, v52, v53);
    }
  }
  if ( !v40 )
    goto LABEL_75;
  if ( v40->fields._size >= 1 )
  {
    v66 = ServantCombineControl___c_TypeInfo;
    if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v42);
      v66 = ServantCombineControl___c_TypeInfo;
    }
    _9__114_0 = (System_Comparison_T__o *)v66->static_fields->__9__114_0;
    if ( !_9__114_0 )
    {
      if ( !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66, v42);
        v66 = ServantCombineControl___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v66->static_fields->__9;
      _9__114_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserServantEntity__TypeInfo, v42, v43, v44);
      System_Comparison_object____ctor(
        _9__114_0,
        v68,
        Method_ServantCombineControl___c__MixMaterialSort_b__114_0__,
        0LL);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      static_fields->__9__114_0 = (struct System_Comparison_UserServantEntity__o *)_9__114_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__114_0,
        (int64_t)_9__114_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v40,
      _9__114_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v76 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Item = (Il2CppObject *)checkRarityTypeList;
  if ( !checkRarityTypeList )
    goto LABEL_75;
  v77 = checkRarityTypeList->fields._size;
  if ( v77 >= 1 )
  {
    v78 = 0;
    while ( 1 )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)Item,
                               v78,
                               (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
      if ( !v32 )
        goto LABEL_75;
      v79 = (int)Item;
      if ( v32->fields._size >= 1 )
        break;
LABEL_52:
      if ( !v36 )
        goto LABEL_75;
      if ( v36->fields._size >= 1 )
      {
        v92 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v36,
                   v92,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v93 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v79 )
          {
            if ( !v76 )
              goto LABEL_75;
            v100 = v76->fields._items;
            v101 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v76->fields._version;
            if ( !v100 )
              goto LABEL_75;
            v102 = v76->fields._size;
            if ( (unsigned int)v102 >= v100->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v76,
                v93,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &v100->obj.klass + v102;
              v76->fields._size = v102 + 1;
              v103[4] = (Il2CppClass *)v93;
              sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 4), (int64_t)v93, v94, v95, v96, v97, v98, v99);
            }
          }
        }
        while ( ++v92 < v36->fields._size );
      }
      if ( v40->fields._size >= 1 )
      {
        v104 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v40,
                   v104,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v105 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v79 )
          {
            if ( !v76 )
              goto LABEL_75;
            v112 = v76->fields._items;
            v113 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v76->fields._version;
            if ( !v112 )
              goto LABEL_75;
            v114 = v76->fields._size;
            if ( (unsigned int)v114 >= v112->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v76,
                v105,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
            }
            else
            {
              v115 = &v112->obj.klass + v114;
              v76->fields._size = v114 + 1;
              v115[4] = (Il2CppClass *)v105;
              sub_1BCA784((PartyOrganizationUtility_o *)(v115 + 4), (int64_t)v105, v106, v107, v108, v109, v110, v111);
            }
          }
        }
        while ( ++v104 < v40->fields._size );
      }
      Item = (Il2CppObject *)checkRarityTypeList;
      if ( ++v78 == v77 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v76;
    }
    v80 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               v80,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        break;
      v81 = Item;
      Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
      if ( (_DWORD)Item == v79 )
      {
        if ( !v76 )
          break;
        v88 = v76->fields._items;
        v89 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v76->fields._version;
        if ( !v88 )
          break;
        v90 = v76->fields._size;
        if ( (unsigned int)v90 >= v88->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v76,
            v81,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v88->obj.klass + v90;
          v76->fields._size = v90 + 1;
          v91[4] = (Il2CppClass *)v81;
          sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v81, v82, v83, v84, v85, v86, v87);
        }
      }
      if ( ++v80 >= v32->fields._size )
        goto LABEL_52;
    }
LABEL_75:
    sub_1BCAA3C(Item, v42);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v76;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19C5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantCombineControl_OnClickCombineConductionWire__, method, v2);
    byte_4B19C5F = 1;
  }
  v4 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
    sub_1BCAA3C(combineRootComponent, v6);
  }
}


void __fastcall ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v13; // x1
  int32_t klass; // w20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v16; // x21
  signed __int64 v17; // x23
  unsigned __int64 max_length; // x27
  int64_t v19; // x22

  if ( (byte_4B19C5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, v10, v11);
    byte_4B19C5E = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int32_t)SelfUserGame[4].klass;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  v16 = SelfUserGame;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v17 >= (int)max_length )
      break;
    if ( v17 >= max_length )
      sub_1BCAA44(SelfUserGame, v13);
    v19 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v17];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v19,
                                            (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v17;
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
    sub_1BCAA3C(SelfUserGame, v13);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v16,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v17 < (int)max_length,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL);
}


void __fastcall ServantCombineControl__OnClickMaterialSelectList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B19C63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantCombineControl_OnClickMaterialSelectList__, method, v2);
    byte_4B19C63 = 1;
  }
  v4 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__OnClickRecommendedButton(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  UserServantEntity_o *baseData; // x0
  __int64 v14; // x1
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  RecommenededConfigDialog_ClickDelegate_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2

  if ( (byte_4B19C64 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommenededConfigDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantCombineControl_OnClickRecommendedButton__, v4, v5);
    sub_1BCA7E0(&Method_ServantCombineControl__OnClickRecommendedButton_b__107_0__, v6, v7);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v8, v9);
    byte_4B19C64 = 1;
  }
  v10 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_ServantCombineControl_OnClickRecommendedButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_10;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v14);
  SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v20 = (RecommenededConfigDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                      RecommenededConfigDialog_ClickDelegate_TypeInfo,
                                                      v17,
                                                      v18,
                                                      v19);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__107_0__,
    v21);
  if ( !recommendedConfigDialog )
LABEL_10:
    sub_1BCAA3C(baseData, v12);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v20, v22);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *campaign; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_4B19C51 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19C51 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_1BCAA3C(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaignListPerSelectSvt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.campaignListPerSelectSvt, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UserServantEntity_o **p_baseData; // x21
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v26; // w25
  int32_t adjustAtk; // w24
  UIIconLabel_o *currentAdjustAtkIconLabel; // x21
  int32_t v29; // w25
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  char v32; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x1
  MenuListControl_c *v36; // x0
  float v37; // s8
  System_Func_float__float__float__float__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AlphaTransitionCalculator_o *v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B19C55 & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, usrSvtData, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v14, v15);
    sub_1BCA7E0(&MenuListControl_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B19C55 = 1;
  }
  p_baseData = &this->fields.baseData;
  this->fields.baseData = usrSvtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseData,
    (int64_t)usrSvtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v21);
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
    v26 = secondMaxAdjustAtk[1];
  else
    v26 = maxAjustAtk[1];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_38947284(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * adjustHp,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * v26,
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
    v29 = secondMaxAdjustAtk[0];
  else
    v29 = maxAjustAtk[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_38947284(
    currentAdjustAtkIconLabel,
    45,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * adjustAtk,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * v29,
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
  ServantCombineControl__CheckConductionWire(this, v30);
  combineInfoComp = (struct CombineInfoComponent_o *)ServantCombineControl__SetCampaignListPerSelectSvt(
                                                       this,
                                                       usrSvtData,
                                                       v31);
  if ( !this->fields.campaign )
    goto LABEL_31;
  v32 = (char)combineInfoComp;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.campaign,
                                                       0LL);
  if ( !combineInfoComp )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v32 & 1, 0LL);
  if ( (v32 & 1) == 0 )
    return;
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                       0,
                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_31;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v34);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v36 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, v35);
    v36 = MenuListControl_TypeInfo;
  }
  v37 = ChangedFPSUtil__CovertFrameNumToSecond(v36->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v38 = ExtraEasing__AsymptoticSeriesFloat(
          MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
          (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
          0LL);
  v42 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v39, v40, v41);
  AlphaTransitionCalculator___ctor(v42, v37, v38, 0LL);
  this->fields.campaignAlphaCalculator = v42;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.campaignAlphaCalculator,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_31:
    sub_1BCAA3C(combineInfoComp, v22);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
}


bool __fastcall ServantCombineControl__SetCampaignListPerSelectSvt(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  DataManager_o *Instance; // x0
  __int64 v54; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_object__o *v59; // x22
  System_Collections_Generic_List_object__o *v60; // x20
  const MethodInfo *v61; // x1
  Il2CppObject *current; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *EventMaster; // x0
  __int64 v64; // x1
  Il2CppObject *Entity; // x0
  __int64 v66; // x1
  Il2CppClass *klass; // x23
  int64_t Time; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int klass_high; // w8
  System_Int32_array *monitor; // x23
  __int64 v78; // x24
  __int64 v79; // x25
  int32_t v80; // w1
  System_Int32_array *v81; // x23
  int32_t SvtClassId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  __int64 v87; // x2
  __int64 v88; // x3
  System_Func_object__int__o *v89; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Func_object__object__o *v94; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x20
  ServantCombineControl___c_c *v99; // x8
  System_Func_object__int__o *_9__89_1; // x21
  Il2CppObject *v101; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_4B19C56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, usrSvtData, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___, v9, v10);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v21, v22);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__int__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_List_EventCampaignEntity___int__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v37, v38);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__, v43, v44);
    sub_1BCA7E0(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__, v45, v46);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48);
    sub_1BCA7E0(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__, v49, v50);
    sub_1BCA7E0(&ServantCombineControl___c_TypeInfo, v51, v52);
    byte_4B19C56 = 1;
  }
  memset(&v118, 0, sizeof(v118));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_54;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  v59 = (System_Collections_Generic_List_object__o *)CombineEventCampaigns;
  v60 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v56,
                                                       v57,
                                                       v58);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    v59,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v118 = v117;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = v118.fields._current;
    EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(this, v61);
    if ( !current )
      sub_1BCAA3C(EventMaster, v64);
    if ( !EventMaster )
      sub_1BCAA3C(0LL, v64);
    Entity = DataMasterBase_object__object__int___GetEntity(
               EventMaster,
               (int32_t)current[1].klass,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !Entity )
      sub_1BCAA3C(0LL, v66);
    klass = Entity[6].klass;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66);
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
            sub_1BCAA3C(Time, v69);
          if ( *(_QWORD *)&monitor->max_length )
          {
            if ( !usrSvtData )
              sub_1BCAA3C(Time, v69);
            v79 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
            v78 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v69);
            *(_QWORD *)&v119.fields.currentCryptoKey = v79;
            *(_QWORD *)&v119.fields.fakeValue = v78;
            v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v119, 0LL);
            Time = System_Array__IndexOf_int_(
                     monitor,
                     v80,
                     (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
            goto LABEL_30;
          }
LABEL_31:
          if ( !v60 )
            sub_1BCAA3C(Time, v69);
          items = v60->fields._items;
          v84 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v60->fields._version;
          if ( !items )
            sub_1BCAA3C(Time, v69);
          size = v60->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v60,
              current,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v86 = &items->obj.klass + size;
            v60->fields._size = size + 1;
            v86[4] = (Il2CppClass *)current;
            sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 4), (int64_t)current, v70, v71, v72, v73, v74, v75);
          }
        }
      }
      else if ( klass_high == 27 )
      {
        if ( !usrSvtData )
          sub_1BCAA3C(Time, v69);
        Time = UserServantEntity__IsExchangeSvt(usrSvtData, 0LL);
        if ( (Time & 1) != 0 )
          goto LABEL_31;
      }
      else if ( (klass_high & 0xFFFFFFFE) == 32 )
      {
        if ( !usrSvtData )
          sub_1BCAA3C(Time, v69);
        v81 = (System_Int32_array *)current[2].monitor;
        SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0LL);
        Time = System_Array__IndexOf_int_(
                 v81,
                 SvtClassId,
                 (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
LABEL_30:
        if ( (Time & 0x80000000) == 0 )
          goto LABEL_31;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !v60 )
    goto LABEL_54;
  if ( !v60->fields._size )
  {
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  v89 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventCampaignEntity__int__TypeInfo, v54, v87, v88);
  System_Func_object__int____ctor(
    v89,
    0LL,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__,
    0LL);
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToLookup_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v60,
                                                               (System_Func_TSource__TKey__o *)v89,
                                                               (const MethodInfo_2F4FA50 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
  v94 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo,
                                           v91,
                                           v92,
                                           v93);
  System_Func_object__object____ctor(
    v94,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__,
    0LL);
  v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v90,
                                                               (System_Func_TSource__TResult__o *)v94,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
  v99 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v95);
    v99 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_1 = (System_Func_object__int__o *)v99->static_fields->__9__89_1;
  if ( !_9__89_1 )
  {
    if ( !v99->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v99, v95);
      v99 = ServantCombineControl___c_TypeInfo;
    }
    v101 = (Il2CppObject *)v99->static_fields->__9;
    _9__89_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_List_EventCampaignEntity___int__TypeInfo,
                                               v95,
                                               v96,
                                               v97);
    System_Func_object__int____ctor(
      _9__89_1,
      v101,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_1 = (struct System_Func_List_EventCampaignEntity___int__o *)_9__89_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_1,
      (int64_t)_9__89_1,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  v109 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v98,
                                                                (System_Func_TSource__TKey__o *)_9__89_1,
                                                                (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v109,
                                (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
  if ( !this )
LABEL_54:
    sub_1BCAA3C(Instance, v54);
  this->fields.campaignListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)Instance;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.campaignListPerSelectSvt,
    (int64_t)Instance,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 conductionWireInfo; // x0
  System_String_o *checkLv; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Int64_array *v62; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v64; // x25
  struct UserServantEntity_o *baseData; // x8
  __int64 v66; // x21
  __int64 v67; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Collections_Generic_List_long__o *v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_long__o *v75; // x23
  __int64 v76; // x26
  unsigned __int64 i; // x25
  struct System_Int64_array *v78; // x8
  int64_t v79; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v82; // x28
  __int64 v83; // x2
  UnityEngine_Transform_o *v84; // x22
  SetCombineData_o *v85; // x20
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v87; // x28
  MaterialSvtInfo_o *v88; // x29
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  MaterialSvtInfo_ClickDelegate_o *v92; // x22
  Il2CppObject *Entity; // x28
  ServantLimitMaster_o *v94; // x29
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v97; // w22
  struct System_Int64_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  struct System_Int64_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  struct System_Int64_array *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  struct System_Int64_array *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v122; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v123; // x23
  __int64 v124; // x21
  __int64 v125; // x22
  int32_t v126; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v128; // x2
  int32_t v129; // w23
  struct UserServantEntity_o *v130; // x8
  UILabel_o *currentLvLb; // x22
  UILabel_o *increLvLb; // x22
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v135; // x21
  Il2CppObject *v136; // x0
  UserServantEntity_o *v137; // x8
  __int64 v138; // x21
  __int64 v139; // x22
  int32_t v140; // w24
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x22
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  UserServantEntity_o *v151; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v153; // x8
  int v154; // w8
  int v155; // w8
  BalanceConfig_c *v156; // x0
  int32_t adjustHp; // w20
  uint32_t cctor_finished; // w9
  int v159; // w22
  int32_t StatusUpAdjustHp; // w8
  int v161; // w20
  int getHpAdjustVal; // w21
  int32_t v163; // w22
  int32_t v164; // w22
  int32_t v165; // w23
  int32_t v166; // w1
  BalanceConfig_c *v167; // x0
  int32_t adjustAtk; // w20
  uint32_t v169; // w9
  int32_t StatusUpAdjustAtk; // w8
  int v171; // w21
  int getAtkAdjustVal; // w22
  int v173; // w20
  int32_t v174; // w20
  int32_t v175; // w20
  int32_t v176; // w21
  int32_t v177; // w1
  bool v178; // w20
  float v179; // s0
  float v180; // s1
  float v181; // s2
  float v182; // s3
  const MethodInfo *v183; // x1
  UserServantEntity_o **p_baseData; // [xsp+10h] [xbp-B0h]
  int32_t targetLimitCnt; // [xsp+1Ch] [xbp-A4h]
  int32_t increAmount; // [xsp+20h] [xbp-A0h] BYREF
  int32_t v187; // [xsp+24h] [xbp-9Ch] BYREF
  __int64 v188; // [xsp+28h] [xbp-98h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+30h] [xbp-90h] BYREF
  __int64 maxAjustAtk; // [xsp+38h] [xbp-88h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-80h] BYREF
  System_String_array *skillNameList; // [xsp+48h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+50h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  UnityEngine_Vector3_o v199; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v200; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v201; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = data;
  if ( (byte_4B19C5A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, data, method);
    sub_1BCA7E0(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickMaterial__, v7, v8);
    sub_1BCA7E0(&CombineSvtData_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_7474/*"INCREMENT_SVTLEVEL"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v45, v46);
    byte_4B19C5A = 1;
  }
  idList = 0LL;
  afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  skillNameList = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  maxAjustAtk = 0LL;
  v188 = 0LL;
  v187 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_133;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int64_t)materialUsrSvtIdList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v62 = v3->fields.materialUsrSvtIdList;
  if ( !v62 )
    goto LABEL_133;
  baseSvtData = v3->fields.baseSvtData;
  v64 = *(_QWORD *)&v62->max_length;
  this->fields.baseData = baseSvtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseData, (int64_t)baseSvtData, v56, v57, v58, v59, v60, v61);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_133;
  v67 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v66 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, checkLv);
  *(_QWORD *)&v195.fields.currentCryptoKey = v67;
  *(_QWORD *)&v195.fields.fakeValue = v66;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v195, 0LL);
  v71 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v68,
                                                     v69,
                                                     v70);
  System_Collections_Generic_List_long____ctor(
    v71,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  v75 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v72,
                                                     v73,
                                                     v74);
  System_Collections_Generic_List_long____ctor(
    v75,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v64 >= 1 )
  {
    conductionWireInfo = (__int64)this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_133;
    v76 = (unsigned int)v64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conductionWireInfo, 0, 0LL);
    for ( i = 0LL; i != v76; ++i )
    {
      v78 = v3->fields.materialUsrSvtIdList;
      if ( !v78 )
        goto LABEL_133;
      if ( i >= v78->max_length )
        goto LABEL_134;
      conductionWireInfo = (__int64)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_133;
      v79 = v78->m_Items[i];
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
      v82 = (UnityEngine_GameObject_o *)conductionWireInfo;
      conductionWireInfo = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)conductionWireInfo,
                                      0LL);
      v84 = (UnityEngine_Transform_o *)conductionWireInfo;
      if ( !byte_4B109C1 )
      {
        conductionWireInfo = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, checkLv, v83);
        byte_4B109C1 = 1;
      }
      if ( !v84 )
        goto LABEL_133;
      v85 = v3;
      UnityEngine_Transform__set_localPosition(v84, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      conductionWireInfo = (__int64)UnityEngine_GameObject__get_transform(v82, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v199.fields.x = 0.5;
      v199.fields.y = 0.5;
      v199.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v199, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v82,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v87 = this->fields.baseData;
      v88 = (MaterialSvtInfo_o *)Component_object;
      v92 = (MaterialSvtInfo_ClickDelegate_o *)sub_1BCAA2C(MaterialSvtInfo_ClickDelegate_TypeInfo, v89, v90, v91);
      MaterialSvtInfo_ClickDelegate___ctor(
        v92,
        (Il2CppObject *)this,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0LL);
      if ( !v88 )
        goto LABEL_133;
      MaterialSvtInfo__setMaterialSvtInfo(v88, i, v87, v79, 1, 0, v92, 0LL);
      conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)conductionWireInfo,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo,
                 v79,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)conductionWireInfo,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_133;
      v94 = (ServantLimitMaster_o *)conductionWireInfo;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, checkLv);
      *(_QWORD *)&v196.fields.currentCryptoKey = klass;
      *(_QWORD *)&v196.fields.fakeValue = monitor;
      v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v196, 0LL);
      conductionWireInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                             0LL);
      if ( !v94 )
        goto LABEL_133;
      conductionWireInfo = (__int64)ServantLimitMaster__GetEntity(v94, v97, conductionWireInfo, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v3 = v85;
      if ( *(int *)(conductionWireInfo + 24) >= 4 )
      {
        if ( !v71 )
          goto LABEL_133;
        items = v71->fields._items;
        v99 = Method_System_Collections_Generic_List_long__Add__;
        ++v71->fields._version;
        if ( !items )
          goto LABEL_133;
        size = v71->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v71,
            v79,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v71->fields._size = size + 1;
          items->m_Items[size] = v79;
        }
      }
      conductionWireInfo = UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL);
      if ( (conductionWireInfo & 1) != 0 )
      {
        if ( !v75 )
          goto LABEL_133;
        v101 = v75->fields._items;
        v102 = Method_System_Collections_Generic_List_long__Add__;
        ++v75->fields._version;
        if ( !v101 )
          goto LABEL_133;
        v103 = v75->fields._size;
        if ( (unsigned int)v103 >= v101->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v75,
            v79,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
        }
        else
        {
          v75->fields._size = v103 + 1;
          v101->m_Items[v103] = v79;
        }
      }
      conductionWireInfo = UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL);
      if ( (conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
    }
    if ( !v71 )
      goto LABEL_133;
    v104 = System_Collections_Generic_List_long___ToArray(
             v71,
             (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v104;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.highRarityList,
      (int64_t)v104,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    if ( !v75 )
      goto LABEL_133;
    v111 = System_Collections_Generic_List_long___ToArray(
             v75,
             (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v111;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.exceededCheckList,
      (int64_t)v111,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    conductionWireInfo = (__int64)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v85->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v187 = spendQp;
    conductionWireInfo = (__int64)System_Int32__ToString_63206828(
                                    (int32_t)&v187,
                                    (System_String_o *)StringLiteral_9337/*"N0"*/,
                                    0LL);
    if ( !qpLb )
      goto LABEL_133;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v85->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v187 = getExp;
    conductionWireInfo = (__int64)System_Int32__ToString((int32_t)&v187, 0LL);
    if ( !expLb )
      goto LABEL_133;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)conductionWireInfo,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    v122 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v123 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v125 = *(_QWORD *)&v122->fields.svtId.fields.currentCryptoKey;
    v124 = *(_QWORD *)&v122->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, checkLv);
    *(_QWORD *)&v197.fields.currentCryptoKey = v125;
    *(_QWORD *)&v197.fields.fakeValue = v124;
    conductionWireInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v197, 0LL);
    if ( !v123 )
      goto LABEL_133;
    conductionWireInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    v123,
                                    conductionWireInfo,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v126 = *(_DWORD *)(conductionWireInfo + 132);
    conductionWireInfo = (__int64)this->fields.baseData;
    this->fields.expType = v126;
    if ( !conductionWireInfo )
      goto LABEL_133;
    this->fields.totalExp = *(_DWORD *)(conductionWireInfo + 260) + this->fields._getExpVal_k__BackingField;
    this->fields.checkLv = *(_DWORD *)(conductionWireInfo + 256);
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL);
    checkLv = (System_String_o *)(unsigned int)this->fields.checkLv;
    v129 = LevelMax;
    if ( (_DWORD)checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, (int32_t)checkLv, v128) )
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
    v130 = this->fields.baseData;
    if ( !v130 )
      goto LABEL_133;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (__int64)System_Int32__ToString((int)v130 + 256, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, checkLv);
    v135 = LocalizationManager__Get((System_String_o *)StringLiteral_7474/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    conductionWireInfo = (__int64)System_String__Format(v135, v136, 0LL);
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
    HIDWORD(afterAtk) += v85->fields.getHpAdjustVal;
    LODWORD(afterAtk) = v85->fields.getAtkAdjustVal + afterAtk;
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
        sub_1BCAA44(conductionWireInfo, checkLv);
      checkLv = skillNameList->m_Items[0];
      if ( checkLv )
      {
        conductionWireInfo = (__int64)this->fields.getSkillLb;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, checkLv, 0LL);
      }
    }
    v137 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v139 = *(_QWORD *)&v137->fields.limitCount.fields.currentCryptoKey;
    v138 = *(_QWORD *)&v137->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, checkLv);
    *(_QWORD *)&v198.fields.currentCryptoKey = v139;
    *(_QWORD *)&v198.fields.fakeValue = v138;
    v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v198, 0LL);
    v144 = sub_1BCAA2C(CombineSvtData_TypeInfo, v141, v142, v143);
    CombineSvtData___ctor((CombineSvtData_o *)v144, 0LL);
    if ( !v144 )
      goto LABEL_133;
    v151 = *p_baseData;
    *(_QWORD *)(v144 + 16) = *p_baseData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 16), (int64_t)v151, v145, v146, v147, v148, v149, v150);
    increLv = this->fields.increLv;
    *(_DWORD *)(v144 + 32) = v129;
    *(_DWORD *)(v144 + 24) = increLv;
    *(_DWORD *)(v144 + 28) = v140;
    v153 = this->fields.baseData;
    if ( !v153 )
      goto LABEL_133;
    conductionWireInfo = (__int64)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp[1],
      lateExp,
      this->fields.totalExp,
      v153->fields.lv,
      v129,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v144 + 36) = lateExp[1];
    v154 = HIDWORD(afterAtk);
    *(_DWORD *)(v144 + 40) = lateExp[0];
    *(_DWORD *)(v144 + 44) = v154;
    v155 = afterAtk;
    *(_DWORD *)(v144 + 48) = v85->fields.getHpAdjustVal;
    *(_DWORD *)(v144 + 52) = v155;
    *(_DWORD *)(v144 + 56) = v85->fields.getAtkAdjustVal;
    conductionWireInfo = (__int64)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v144,
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
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v200.fields.r = 1.0;
    v200.fields.g = 1.0;
    v200.fields.b = 1.0;
    v200.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v200, 0LL);
    conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)conductionWireInfo,
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v201.fields.r = 1.0;
    v201.fields.g = 1.0;
    v201.fields.b = 1.0;
    v201.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v201, 0LL);
    if ( !*p_baseData )
      goto LABEL_133;
    v156 = BalanceConfig_TypeInfo;
    adjustHp = (*p_baseData)->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, checkLv);
      v156 = BalanceConfig_TypeInfo;
      cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    }
    v159 = HIDWORD(maxAjustAtk);
    StatusUpAdjustHp = v156->static_fields->StatusUpAdjustHp;
    v161 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v188) = v161;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v156, checkLv);
      v156 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v161 >= StatusUpAdjustHp * v159 )
    {
      v163 = secondMaxAdjustAtk[1];
      if ( v156->_2.cctor_finished )
      {
LABEL_96:
        conductionWireInfo = (__int64)this->fields.resAdjustHpIconLabel;
        v164 = StatusUpAdjustHp * v163;
        if ( !conductionWireInfo )
          goto LABEL_133;
        v165 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v161;
        UIIconLabel__Set_38947284((UIIconLabel_o *)conductionWireInfo, 44, v165, v164, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_63206656((int32_t)&v188 + 4, v165, 0LL) )
        {
          conductionWireInfo = (__int64)this->fields.resAdjustHpIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_133;
          if ( v165 >= v164 )
            v166 = v164;
          else
            v166 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v161;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v166, v164, v165 >= v164, 0LL);
        }
        conductionWireInfo = (__int64)this->fields.resAdjustHpMaxLabel;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !*p_baseData )
          goto LABEL_133;
        v167 = BalanceConfig_TypeInfo;
        adjustAtk = (*p_baseData)->fields.adjustAtk;
        v169 = BalanceConfig_TypeInfo->_2.cctor_finished;
        if ( !v169 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, checkLv);
          v167 = BalanceConfig_TypeInfo;
          v169 = BalanceConfig_TypeInfo->_2.cctor_finished;
        }
        StatusUpAdjustAtk = v167->static_fields->StatusUpAdjustAtk;
        v171 = StatusUpAdjustAtk * adjustAtk;
        LODWORD(v188) = StatusUpAdjustAtk * adjustAtk;
        getAtkAdjustVal = v3->fields.getAtkAdjustVal;
        v173 = maxAjustAtk;
        if ( !v169 )
        {
          j_il2cpp_runtime_class_init_0(v167, checkLv);
          v167 = BalanceConfig_TypeInfo;
          StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        }
        if ( v171 >= StatusUpAdjustAtk * v173 )
        {
          v174 = secondMaxAdjustAtk[0];
          if ( v167->_2.cctor_finished )
            goto LABEL_112;
        }
        else
        {
          v174 = maxAjustAtk;
          if ( v167->_2.cctor_finished )
          {
LABEL_112:
            conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
            v175 = StatusUpAdjustAtk * v174;
            if ( !conductionWireInfo )
              goto LABEL_133;
            v176 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v171;
            UIIconLabel__Set_38947284((UIIconLabel_o *)conductionWireInfo, 45, v176, v175, 0, 0LL, 0, 0, 0, 0LL);
            if ( !System_Int32__Equals_63206656((int32_t)&v188, v176, 0LL) )
            {
              conductionWireInfo = (__int64)this->fields.resAdjustAtkIconLabel;
              if ( !conductionWireInfo )
                goto LABEL_133;
              if ( v176 >= v175 )
                v177 = v175;
              else
                v177 = v176;
              UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v177, v175, v176 >= v175, 0LL);
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
                  v179 = 1.0;
                  v178 = 1;
                  v180 = 1.0;
                  goto LABEL_131;
                }
              }
              else if ( conductionWireInfo )
              {
                v178 = 0;
                v179 = 1.0;
                v180 = 0.0;
LABEL_131:
                v181 = v180;
                v182 = v179;
                UIWidget__set_color((UIWidget_o *)conductionWireInfo, *(UnityEngine_Color_o *)&v179, 0LL);
                this->fields._IsExeCombine_k__BackingField = v178;
                ServantCombineControl__SetExeBtnState(this, v183);
                return;
              }
            }
LABEL_133:
            sub_1BCAA3C(conductionWireInfo, checkLv);
          }
        }
        j_il2cpp_runtime_class_init_0(v167, checkLv);
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        goto LABEL_112;
      }
    }
    else
    {
      v163 = HIDWORD(maxAjustAtk);
      if ( v156->_2.cctor_finished )
        goto LABEL_96;
    }
    j_il2cpp_runtime_class_init_0(v156, checkLv);
    StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    goto LABEL_96;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_45890364(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *v4; // x24
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  int64_t Instance; // x0
  __int64 v47; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v49; // x23
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v52; // s0
  float v53; // s8
  float v54; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v56; // x21
  __int64 v57; // x25
  float v58; // s9
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v60; // x21
  int32_t SvtClassId; // w0
  int64_t v62; // x2
  __int64 v63; // x3
  int size; // w8
  const MethodInfo_35A198C **v65; // x29
  System_Collections_Generic_List_object__o *v66; // x21
  BalanceConfig_c **v67; // x25
  int v68; // w23
  int32_t v69; // w22
  int32_t v70; // w28
  ServantCombineControl_o *v71; // x19
  int64_t v72; // x27
  __int64 v73; // x21
  __int64 v74; // x26
  int32_t v75; // w0
  int64_t v76; // x21
  CombineMaterialEntity_o *v77; // x26
  __int64 v78; // x2
  int v79; // w8
  int value; // w26
  int v81; // w21
  BalanceConfig_c *v82; // x0
  ServantCombineControl_c *v83; // x8
  int SameClassExp; // w21
  float FIXED_VAL; // s10
  double v86; // d0
  unsigned int v87; // w8
  BalanceConfig_c **v88; // x20
  const MethodInfo_35A198C **v89; // x25
  System_Collections_Generic_List_object__o *v90; // x29
  float v91; // s0
  unsigned int v92; // w8
  unsigned int v93; // w24
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int32_t CombineQp; // w21
  float v99; // s0
  unsigned int v100; // w8
  int32_t v101; // w26
  struct System_Object_array *items; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  const MethodInfo *v106; // x3
  struct UserServantEntity_o *v107; // x8
  ServantCombineControl_c *v108; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct UserServantEntity_o *v116; // x1
  int32_t v117; // w8
  bool isAdjustAtkMax; // w0
  __int64 v119; // x2
  __int64 v120; // x3
  bool isSecondAdjustAtkMax; // w0
  System_Collections_Generic_List_long__o *v122; // x20
  int32_t v123; // w23
  int32_t v124; // w22
  __int128 v125; // q0
  struct System_Int64_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  System_Int64_array *v129; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int v137; // [xsp+0h] [xbp-F0h]
  int v138; // [xsp+4h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v139; // [xsp+8h] [xbp-E8h]
  int32_t expType; // [xsp+14h] [xbp-DCh]
  int64_t v141; // [xsp+18h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v142; // [xsp+20h] [xbp-D0h]
  CombineMaterialMaster_o *v143; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v146; // [xsp+78h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  v4 = (System_Collections_Generic_List_object__o *)targetMaterialList;
  if ( (byte_4B19C68 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, targetMaterialList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Math_TypeInfo, v34, v35);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v39);
    sub_1BCA7E0(&ServantCombineControl_TypeInfo, v40, v41);
    sub_1BCA7E0(&SetCombineData_TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45);
    byte_4B19C68 = 1;
  }
  v146 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                        targetMaterialList,
                                                        method,
                                                        v3);
  System_Collections_Generic_List_object____ctor(
    v146,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  v49 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_101;
  v142 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  combineEventList = menuListCtr->fields.combineEventList;
  v52 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  v53 = v52;
  v54 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_101;
  v57 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v58 = v54;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
  *(_QWORD *)&v147.fields.currentCryptoKey = v57;
  *(_QWORD *)&v147.fields.fakeValue = v56;
  v143 = (CombineMaterialMaster_o *)v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v147, 0LL);
  if ( !MasterData_object )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_101;
  v60 = this->fields.baseData;
  v141 = Instance;
  if ( !v60 )
    goto LABEL_101;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v60, 0, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v60, SvtClassId, 0LL);
  v137 = Instance;
  if ( !v4 )
    goto LABEL_101;
  size = v4->fields._size;
  v138 = size - 1;
  v65 = (const MethodInfo_35A198C **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v66 = v146;
  if ( size < 1 )
  {
    v69 = 0;
    v68 = 0;
LABEL_70:
    v101 = v69;
    if ( v66 )
      goto LABEL_73;
  }
  else
  {
    v139 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v67 = &BalanceConfig_TypeInfo;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    while ( 1 )
    {
      v71 = this;
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v4, v70, *v65);
      if ( !Instance )
        goto LABEL_101;
      v72 = Instance;
      v74 = *(_QWORD *)(Instance + 80);
      v73 = *(_QWORD *)(Instance + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47);
      *(_QWORD *)&v148.fields.currentCryptoKey = v74;
      *(_QWORD *)&v148.fields.fakeValue = v73;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v148, 0LL);
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v139,
                            v75,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_101;
      v76 = Instance;
      Instance = (int64_t)v143;
      if ( !v143 )
        goto LABEL_101;
      v77 = CombineMaterialMaster__GetEntity(v143, *(_DWORD *)(v76 + 136), *(_DWORD *)(v72 + 256), 0LL);
      Instance = (int64_t)v142;
      if ( !v142 )
        goto LABEL_101;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v142,
                            *(_DWORD *)(v76 + 80),
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v77 || !Instance )
        goto LABEL_101;
      v79 = *(_DWORD *)(Instance + 56);
      value = v77->fields.value;
      if ( v79 == 3 )
        goto LABEL_30;
      if ( v79 == v137 )
      {
        Instance = (int64_t)v71->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        v81 = *(_DWORD *)(v76 + 80);
        if ( v81 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL) )
        {
LABEL_30:
          v82 = *v67;
          if ( !(*v67)->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v82, v47);
            v82 = *v67;
          }
          v83 = ServantCombineControl_TypeInfo;
          SameClassExp = v82->static_fields->SameClassExp;
          if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo, v47);
            v83 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v83->static_fields->FIXED_VAL;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47);
          v86 = (double)value * (double)SameClassExp / FIXED_VAL;
          v87 = vcvtpd_s64_f64(v86);
          if ( ceil(v86) == INFINITY )
            value = 0x80000000;
          else
            value = v87;
        }
      }
      v88 = v67;
      v89 = v65;
      if ( !byte_4B1103A )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v47, v78);
        byte_4B1103A = 1;
      }
      v90 = v4;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47);
      Instance = (int64_t)v71->fields.baseData;
      v91 = v53 * (float)value;
      v92 = vcvtps_s32_f32(v91);
      v93 = ceilf(v91) == INFINITY ? 0x80000000 : v92;
      if ( !Instance )
        goto LABEL_101;
      CombineQp = UserServantEntity__getCombineQp((UserServantEntity_o *)Instance, 0LL);
      if ( !byte_4B1103A )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v47, v62);
        byte_4B1103A = 1;
      }
      Instance = (int64_t)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47);
      v99 = v58 * (float)CombineQp;
      v100 = vcvtps_s32_f32(v99);
      if ( ceilf(v99) == INFINITY )
        v100 = 0x80000000;
      if ( !v141 )
        goto LABEL_101;
      v66 = v146;
      v101 = v100 + v69;
      if ( (signed int)(v100 + v69) > *(_DWORD *)(v141 + 96) )
      {
        this = v71;
        v65 = v89;
        v71->fields.isQpCondClear = 0;
        goto LABEL_70;
      }
      if ( !v146 )
        goto LABEL_101;
      items = v146->fields._items;
      v103 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v146->fields._version;
      if ( !items )
        goto LABEL_101;
      v104 = v66->fields._size;
      if ( (unsigned int)v104 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v66,
          (Il2CppObject *)v72,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
      }
      else
      {
        v105 = &items->obj.klass + v104;
        v66->fields._size = v104 + 1;
        v105[4] = (Il2CppClass *)v72;
        sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 4), v72, v62, v63, v94, v95, v96, v97);
      }
      v107 = v71->fields.baseData;
      if ( !v107 )
        goto LABEL_101;
      v68 += v93;
      this = v71;
      if ( ServantCombineControl__IsLevelMax(v71, v107->fields.exp + v68, expType, v106) )
        break;
      v108 = ServantCombineControl_TypeInfo;
      if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo, v47);
        v108 = ServantCombineControl_TypeInfo;
      }
      v4 = v90;
      v65 = v89;
      if ( v70 != v108->static_fields->MAX_SELECT_NUM - 1 )
      {
        v69 = v101;
        v67 = v88;
        if ( v138 != v70++ )
          continue;
      }
      goto LABEL_73;
    }
    v65 = v89;
LABEL_73:
    if ( v66->fields._size < 1 )
    {
      return 0LL;
    }
    else
    {
      v66 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(SetCombineData_TypeInfo, v47, v62, v63);
      SetCombineData___ctor((SetCombineData_o *)v66, 0LL);
      if ( !v66 )
        goto LABEL_101;
      v116 = this->fields.baseData;
      v66->fields._items = (struct System_Object_array *)v116;
      sub_1BCA784((PartyOrganizationUtility_o *)&v66->fields, (int64_t)v116, v110, v111, v112, v113, v114, v115);
      v117 = v146->fields._size;
      v66->fields._version = v101;
      LODWORD(v66->fields._syncRoot) = v68;
      v66[1].monitor = 0LL;
      v66->fields._size = v117;
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
      BYTE4(v66[1].klass) = isAdjustAtkMax;
      Instance = (int64_t)this->fields.baseData;
      if ( !Instance )
LABEL_101:
        sub_1BCAA3C(Instance, v47);
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
      BYTE5(v66[1].klass) = isSecondAdjustAtkMax;
      v122 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_long__TypeInfo,
                                                          v47,
                                                          v119,
                                                          v120);
      System_Collections_Generic_List_long____ctor(
        v122,
        (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
      v123 = v146->fields._size;
      if ( v123 >= 1 )
      {
        v124 = 0;
        while ( 1 )
        {
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v146, v124, *v65);
          if ( !Instance )
            goto LABEL_101;
          v125 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v145.fields.fakeValue = v125;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
          v144 = v145;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v144, 0LL);
          if ( !v122 )
            goto LABEL_101;
          v126 = v122->fields._items;
          v127 = Method_System_Collections_Generic_List_long__Add__;
          ++v122->fields._version;
          if ( !v126 )
            goto LABEL_101;
          v128 = v122->fields._size;
          if ( (unsigned int)v128 >= v126->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v122,
              Instance,
              *(const MethodInfo_3589C90 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
          }
          else
          {
            v122->fields._size = v128 + 1;
            v126->m_Items[v128] = Instance;
          }
          if ( v123 == ++v124 )
            goto LABEL_99;
        }
      }
      if ( !v122 )
        goto LABEL_101;
LABEL_99:
      v129 = System_Collections_Generic_List_long___ToArray(
               v122,
               (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
      v66[1].fields._items = (struct System_Object_array *)v129;
      sub_1BCA784((PartyOrganizationUtility_o *)&v66[1].fields, (int64_t)v129, v130, v131, v132, v133, v134, v135);
    }
  }
  return (SetCombineData_o *)v66;
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
    sub_1BCAA3C(0LL, v4);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t CardImageLimitCount; // w21
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitImageMaster_o *v16; // x22
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v18; // x1
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v20; // w21
  ServantCombineControl_o **p_charaGraph; // x22
  UICharaGraphTexture_o *TexturePrefab_38621628; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  v4 = this;
  if ( (byte_4B19C59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (ServantCombineControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B19C59 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v29.fields.currentCryptoKey = v15;
  *(_QWORD *)&v29.fields.fakeValue = v14;
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v29, 0LL);
  if ( !v16 )
    goto LABEL_14;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v16,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0LL);
  charaGraph = (UnityEngine_Object_o *)v4->fields.charaGraph;
  v20 = ServantImageLimitSealAfter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  p_charaGraph = (ServantCombineControl_o **)&v4->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_38621628 = CharaGraphManager__CreateTexturePrefab_38621628(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v20,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_38621628;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.charaGraph,
      (int64_t)TexturePrefab_38621628,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1BCAA3C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_41557848((UICharaGraphTexture_o *)this, usrSvtData, v20, 0LL, 0, 0LL);
}


void __fastcall ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v7; // x20
  _BOOL4 IsExeCombine_k__BackingField; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v10; // x19
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19C61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenScale___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v4, v5);
    byte_4B19C61 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v7 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v10 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( IsExeCombine_k__BackingField )
  {
    if ( combineBtnTxt )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color(combineBtnTxt, v11, 0LL);
      if ( v7 )
      {
        v12.fields.r = 1.0;
        v12.fields.g = 1.0;
        v12.fields.b = 1.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(v7, v12, 0LL);
        if ( v10 )
        {
          UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
          UITweener__PlayForward((UITweener_o *)v10, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v13, 0LL);
  if ( !v7 )
    goto LABEL_14;
  v14.fields.r = 0.5;
  v14.fields.g = 0.5;
  v14.fields.b = 0.5;
  v14.fields.a = 1.0;
  UIWidget__set_color(v7, v14, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
}


void __fastcall ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B19C53 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, method, v2);
    byte_4B19C53 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_63206828((int)this + 540, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1BCAA3C(SelfUserGame, v5);
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
      sub_1BCAA3C(recommendedButton, isEnabled);
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
    sub_1BCAA3C(0LL, v5);
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x2
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v52; // x2
  __int64 v53; // x1
  Il2CppObject *Instance; // x19
  __int64 v55; // x2
  __int64 v56; // x3
  System_String_o *v57; // x20
  ServantCombineControl___c_c *v58; // x8
  System_Action_o *_9__108_1; // x22
  System_String_o *v60; // x21
  Il2CppObject *v61; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  Il2CppObject *v70; // x19
  System_String_o *v71; // x21
  System_String_o *v72; // x22
  System_String_o *v73; // x23
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  CommonConfirmDialog_ClickDelegate_o *v77; // x24
  System_String_o *v78; // x21
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Action_o *v82; // x22

  if ( (byte_4B19C65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__108_1__, v11, v12);
    sub_1BCA7E0(&Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__0__, v13, v14);
    sub_1BCA7E0(&Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__2__, v15, v16);
    sub_1BCA7E0(&ServantCombineControl___c__DisplayClass108_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantCombineControl___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_11134/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11133/*"RECOMMENDED_NOT_HAVE_QP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11132/*"RECOMMENDED_NOT_EXIST_MSG"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B19C65 = 1;
  }
  v33 = sub_1BCAA2C(ServantCombineControl___c__DisplayClass108_0_TypeInfo, method, v2, v3);
  ServantCombineControl___c__DisplayClass108_0___ctor((ServantCombineControl___c__DisplayClass108_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_25;
  *(_QWORD *)(v33 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)this, v36, v37, v38, v39, v40, v41);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v42);
  *(_QWORD *)(v33 + 24) = RecommendedCombineData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)RecommendedCombineData, v44, v45, v46, v47, v48, v49);
  isQpCondClear = this->fields.isQpCondClear;
  if ( !*(_QWORD *)(v33 + 24) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isQpCondClear )
      {
LABEL_10:
        recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11132/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                  0LL);
        v57 = (System_String_o *)recommendedConfigDialog;
        v58 = ServantCombineControl___c_TypeInfo;
        if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v35);
          v58 = ServantCombineControl___c_TypeInfo;
        }
        _9__108_1 = v58->static_fields->__9__108_1;
        v60 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__108_1 )
        {
          if ( !v58->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v58, v35);
            v58 = ServantCombineControl___c_TypeInfo;
          }
          v61 = (Il2CppObject *)v58->static_fields->__9;
          _9__108_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v55, v56);
          System_Action___ctor(_9__108_1, v61, Method_ServantCombineControl___c__SetRecommendedMaterial_b__108_1__, 0LL);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
          static_fields->__9__108_1 = _9__108_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__108_1,
            (int64_t)_9__108_1,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
        }
        if ( !Instance )
          goto LABEL_25;
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v60,
          v57,
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
      if ( isQpCondClear )
        goto LABEL_10;
    }
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11133/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
    v82 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v79, v80, v81);
    System_Action___ctor(
      v82,
      (Il2CppObject *)v33,
      Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__2__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v78,
      v82,
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
      RecommenededConfigDialog__Close_45869404(recommendedConfigDialog, 0LL, v50);
      ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v33 + 24), v52);
      return;
    }
LABEL_25:
    sub_1BCAA3C(recommendedConfigDialog, v35);
  }
  v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11134/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v77 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v74, v75, v76);
  CommonConfirmDialog_ClickDelegate___ctor(
    v77,
    (Il2CppObject *)v33,
    Method_ServantCombineControl___c__DisplayClass108_0__SetRecommendedMaterial_b__0__,
    0LL);
  if ( !v70 )
    goto LABEL_25;
  CommonUI__OpenConfirmDialog_30766228(
    (CommonUI_o *)v70,
    (System_String_o *)StringLiteral_1/*""*/,
    v71,
    v72,
    v73,
    v77,
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
    sub_1BCAA3C(preSelectBaseLb, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v18; // x21
  __int64 v19; // x1
  __int64 *v20; // x8
  __int64 v21; // x1
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4B19C62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_7481/*"INFO_MSG_COMBINE_MATERIAL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_7490/*"INFO_MSG_SVTCOMBINE_BASE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B19C62 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(detailInfoLb, *(_QWORD *)&state);
  }
  v22.fields.r = 0.0;
  v22.fields.a = 1.0;
  v22.fields.g = 0.87891;
  v22.fields.b = 0.98828;
  v18 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v22, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
      v20 = &StringLiteral_5868/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v23.fields.r = 1.0;
      v23.fields.g = 1.0;
      v23.fields.b = 1.0;
      v23.fields.a = 1.0;
      UIWidget__set_color(v18, v23, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      v20 = &StringLiteral_12266/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = &StringLiteral_7481/*"INFO_MSG_COMBINE_MATERIAL"*/;
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = &StringLiteral_7490/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v20, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int32_t target; // w8
  float y; // s9
  float x; // s10
  float z; // s8
  int v14; // w8
  int v15; // w9
  UISprite_o *campaign; // x21
  System_String_o *v17; // x0
  UILabel_o *campaignLabel; // x20
  __int64 v19; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B19C57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, eventInfoData, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    this = (ServantCombineControl_o *)sub_1BCA7E0(&StringLiteral_20731/*"img_txt_campaign_"*/, v7, v8);
    byte_4B19C57 = 1;
  }
  v19 = 0LL;
  if ( !byte_4B109C1 )
  {
    this = (ServantCombineControl_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, eventInfoData, method);
    byte_4B109C1 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_1BCAA3C(this, eventInfoData);
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
    v14 = 1;
    z = 0.0;
    v15 = 1113849856;
LABEL_14:
    y = 4.0;
    x = *(float *)&v15;
    HIDWORD(v19) = v14;
    goto LABEL_15;
  }
  if ( target == 2 )
    goto LABEL_11;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_13:
    v14 = 2;
    z = 0.0;
    v15 = 1119748096;
    goto LABEL_14;
  }
LABEL_15:
  campaign = v4->fields.campaign;
  v17 = System_Int32__ToString((int32_t)&v19 + 4, 0LL);
  this = (ServantCombineControl_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_20731/*"img_txt_campaign_"*/, v17, 0LL);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)EventCampaignMaster__getData(
                                      (EventCampaignMaster_o *)this,
                                      eventInfoData->fields.eventId,
                                      0LL);
  if ( !this )
    goto LABEL_24;
  LODWORD(v19) = SLODWORD(this->fields.baseUserServantEntity) / 1000;
  campaignLabel = v4->fields.campaignLabel;
  this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !campaignLabel )
    goto LABEL_24;
  UILabel__set_text(campaignLabel, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaignLabel;
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v20, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19C5D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, v4, v5);
    byte_4B19C5D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0LL )
    sub_1BCAA3C(SelfUserGame, v8);
  SetRarityDialogControl__SetExceedMaterialInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.exceededCheckList,
    v6,
    this->fields._spendQpVal_k__BackingField,
    SelfUserGame->fields.qp,
    0LL);
}


void __fastcall ServantCombineControl__ShowRareSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x20
  DataManager_o *SelfUserGame; // x0
  __int64 v14; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int32_t lockCountObj; // w21
  signed __int64 v17; // x23
  unsigned __int64 max_length; // x27
  int64_t v19; // x22

  if ( (byte_4B19C5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, v10, v11);
    byte_4B19C5C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  lockCountObj = (int32_t)SelfUserGame->fields.lockCountObj;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v17 >= (int)max_length )
      break;
    if ( v17 >= max_length )
      sub_1BCAA44(SelfUserGame, v14);
    v19 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v17];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v19,
                                          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v17;
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
    sub_1BCAA3C(SelfUserGame, v14);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v12,
    this->fields._spendQpVal_k__BackingField,
    lockCountObj,
    v17 < (int)max_length,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v18; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  UnityEngine_Component_o *v28; // x0
  __int64 v29; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x21
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4B19C6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&progress, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v15, v16);
    byte_4B19C6B = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1BCAA3C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = (System_Collections_IEnumerator_c **)&v24->_1.interfaceOffsets->offset;
      while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 2;
        if ( !v25 )
          goto LABEL_21;
      }
      v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1].method;
    }
    else
    {
LABEL_21:
      v27 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v28 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(
                                       Enumerator,
                                       *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_61;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v28);
LABEL_61:
      sub_1BCAA3C(v28, v29);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v28,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v32);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v33 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v33 )
  {
    v34 = *(_QWORD *)v33;
    v35 = v33;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_33;
      }
      v38 = v34 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_33:
      v38 = sub_1C1C7C0(v33, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
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
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1BCAA3C(helpBtn, *(_QWORD *)&progress);
  }
}


void __fastcall ServantCombineControl__UnBlockTutorial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v19; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v25; // x8
  __int64 v26; // x9
  System_Collections_IEnumerator_c **v27; // x10
  __int64 v28; // x0
  UnityEngine_Component_o *v29; // x0
  __int64 v30; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Component_object; // x0
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x20
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v41; // x8
  struct SetRarityDialogControl_o *v42; // x8

  if ( (byte_4B19C6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v16, v17);
    byte_4B19C6A = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_64;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1BCAA3C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = (System_Collections_IEnumerator_c **)&v25->_1.interfaceOffsets->offset;
      while ( *(v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 2;
        if ( !v26 )
          goto LABEL_21;
      }
      v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 1].method;
    }
    else
    {
LABEL_21:
      v28 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v29 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v28)(
                                       Enumerator,
                                       *(_QWORD *)(v28 + 8));
    if ( !v29 )
      goto LABEL_62;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v29->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v29);
LABEL_62:
      sub_1BCAA3C(v29, v30);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v29,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v33);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0LL);
  }
  v34 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v34 )
  {
    v35 = *(_QWORD *)v34;
    v36 = v34;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_33;
      }
      v39 = v35 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_33:
      v39 = sub_1C1C7C0(v34, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
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
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v41 = this->fields.exeCombineDlg;
  if ( !v41 )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)v41->fields.cancelBtnLb;
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
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn
    || (helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))helpBtn->klass[1]._1.namespaze)(
                                                helpBtn,
                                                1LL,
                                                helpBtn->klass[1]._1.byval_arg.data),
        (v42 = this->fields.exeCombineDlg) == 0LL)
    || (helpBtn = (UnityEngine_GameObject_o *)v42->fields.cancelBtnLb) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                helpBtn,
                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_64:
    sub_1BCAA3C(helpBtn, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))helpBtn->klass[1]._1.implementedInterfaces)(
    helpBtn,
    0LL,
    1LL,
    helpBtn->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantCombineControl__Update(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  void *campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaignListPerSelectSvt; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v26; // x8
  int size; // w8
  const MethodInfo *v28; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x20
  int64_t v30; // x20
  int *v31; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v33; // x2
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v37; // s8
  MenuListControl_c *v38; // x0
  const MethodInfo *v39; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  int64_t v41; // x20
  int *v42; // x8
  int32_t campaiginPerSelectSvtListIndex; // w1
  Il2CppObject *v44; // x0
  const MethodInfo *v45; // x2
  Il2CppObject *v46; // x0
  const MethodInfo *v47; // x2
  struct AlphaTransitionCalculator_o *v48; // x8

  if ( (byte_4B19C4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v14, v15);
    sub_1BCA7E0(&MenuListControl_TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v20, v21);
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, v22, v23);
    byte_4B19C4E = 1;
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
    v26 = this->fields.campaignListPerSelectSvt;
    if ( v26 )
    {
      size = v26->fields._size;
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
            campaign = ServantCombineControl__get_EventMaster(this, v28);
            if ( this->fields.campaignListPerSelectSvt )
            {
              v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                           0,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                if ( campaign )
                {
                  if ( v29 )
                  {
                    campaign = DataMasterBase_object__object__int___GetEntity(
                                 v29,
                                 *((_DWORD *)campaign + 4),
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                    if ( campaign )
                    {
                      v30 = *((_QWORD *)campaign + 12);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
                      if ( v30 >= NetworkManager__getTime(0LL) )
                        return;
                      campaign = this->fields.campaignListPerSelectSvt;
                      if ( campaign )
                      {
                        campaign = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)campaign,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                        if ( campaign )
                        {
                          System_Collections_Generic_List_object___RemoveAt(
                            (System_Collections_Generic_List_object__o *)campaign,
                            0,
                            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                          campaign = this->fields.campaignListPerSelectSvt;
                          if ( campaign )
                          {
                            campaign = System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)campaign,
                                         0,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                            if ( campaign )
                            {
                              v31 = (int *)campaign;
                              campaign = this->fields.campaignListPerSelectSvt;
                              if ( campaign )
                              {
                                if ( v31[6] <= 0 )
                                {
                                  System_Collections_Generic_List_object___RemoveAt(
                                    (System_Collections_Generic_List_object__o *)campaign,
                                    0,
                                    (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                                }
                                else
                                {
                                  campaign = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)campaign,
                                               0,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                                  if ( !campaign )
                                    goto LABEL_67;
                                  Item = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)campaign,
                                           0,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                                  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v33);
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
          (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
        campaign = this->fields.campaignAlphaCalculator;
        if ( !campaign )
          goto LABEL_67;
        if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
        {
          realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
          v37 = realtimeSinceStartup;
          v38 = MenuListControl_TypeInfo;
          if ( !MenuListControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, method);
            v38 = MenuListControl_TypeInfo;
          }
          if ( (float)(v37 - campaignAlphaAnimTimeOld) >= v38->static_fields->ALPHA_ANIMATION_INTERVAL )
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
          campaign = ServantCombineControl__get_EventMaster(this, v39);
          if ( !this->fields.campaignListPerSelectSvt )
            goto LABEL_67;
          v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                       this->fields.campaiginPerSelectSvtListIndex,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_67;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_67;
          if ( !v40 )
            goto LABEL_67;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v40,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !campaign )
            goto LABEL_67;
          v41 = *((_QWORD *)campaign + 12);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
          if ( v41 < NetworkManager__getTime(0LL) )
          {
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            v42 = (int *)campaign;
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
            if ( v42[6] <= 0 )
            {
              System_Collections_Generic_List_object___RemoveAt(
                (System_Collections_Generic_List_object__o *)campaign,
                campaiginPerSelectSvtListIndex,
                (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
            }
            else
            {
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           campaiginPerSelectSvtListIndex,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_67;
              v44 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v44, v45);
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
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
LABEL_67:
            sub_1BCAA3C(campaign, method);
          v46 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v46, v47);
        }
        v48 = this->fields.campaignAlphaCalculator;
        if ( v48 )
        {
          campaign = this->fields.campaign;
          this->fields.campaignAlphaAnimNow = v48->fields._Current_k__BackingField;
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
      sub_1BCAA3C(0LL, isDecide);
    RecommenededConfigDialog__Close_45869404(recommendedConfigDialog, 0LL, method);
  }
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall ServantCombineControl___SetCampaignListPerSelectSvt_b__89_0(
        ServantCombineControl_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *g,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  ServantCombineControl___c_c *v26; // x0
  System_Func_object__object__o *_9__89_3; // x21
  Il2CppObject *v28; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  ServantCombineControl___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  System_Func_object__int__o *_9__89_4; // x21
  Il2CppObject *v43; // x22
  struct ServantCombineControl___c_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Func_T__TResult__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0

  if ( (byte_4B19C6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, g, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__long__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__, v18, v19);
    sub_1BCA7E0(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__, v20, v21);
    sub_1BCA7E0(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__, v22, v23);
    sub_1BCA7E0(&ServantCombineControl___c_TypeInfo, v24, v25);
    byte_4B19C6E = 1;
  }
  v26 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, g);
    v26 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_3 = (System_Func_object__object__o *)v26->static_fields->__9__89_3;
  if ( !_9__89_3 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, g);
      v26 = ServantCombineControl___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__89_3 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo,
                                                  g,
                                                  method,
                                                  v3);
    System_Func_object__object____ctor(
      _9__89_3,
      v28,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_3 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__89_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__89_3,
      (int64_t)_9__89_3,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = System_Linq_Enumerable__Select_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)g,
          (System_Func_TSource__TResult__o *)_9__89_3,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
  v40 = ServantCombineControl___c_TypeInfo;
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v37);
    v40 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_4 = (System_Func_object__int__o *)v40->static_fields->__9__89_4;
  if ( !_9__89_4 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40, v37);
      v40 = ServantCombineControl___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__89_4 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventCampaignEntity__int__TypeInfo, v37, v38, v39);
    System_Func_object__int____ctor(
      _9__89_4,
      v43,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__,
      0LL);
    v44 = ServantCombineControl___c_TypeInfo->static_fields;
    v44->__9__89_4 = (struct System_Func_EventCampaignEntity__int__o *)_9__89_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v44->__9__89_4, (int64_t)_9__89_4, v45, v46, v47, v48, v49, v50);
  }
  v51 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v41,
          (System_Func_TSource__TKey__o *)_9__89_4,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  v55 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_EventCampaignEntity__long__TypeInfo, v52, v53, v54);
  System_Func_object__long____ctor(
    v55,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__,
    0LL);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v51,
                                                               (System_Func_TSource__TKey__o *)v55,
                                                               (const MethodInfo_2F4AF68 *)Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v56,
                                                                     (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


int64_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_b__89_5(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  void *EventMaster; // x0
  __int64 v6; // x1

  if ( (byte_4B19C6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, x, method);
    byte_4B19C6F = 1;
  }
  EventMaster = ServantCombineControl__get_EventMaster(this, (const MethodInfo *)x);
  if ( !x
    || !EventMaster
    || (EventMaster = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)EventMaster,
                        x->fields.eventId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(EventMaster, v6);
  }
  return *((_QWORD *)EventMaster + 12);
}


int32_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2(
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  int32_t target; // w8

  if ( !entity )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EventMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  PartyOrganizationUtility_o *p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19C4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B19C4D = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v8);
    p_eventMaster = (PartyOrganizationUtility_o *)&this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_eventMaster, (int64_t)MasterData_object, v11, v12, v13, v14, v15, v16);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19D40 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCombineControl___c_TypeInfo, v1, v2);
    byte_4B19D40 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantCombineControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCombineControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantCombineControl___c___ctor(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCombineControl___c___InitSvtCombine_b__81_0(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  CombineRootComponent_o *Instance; // x0
  __int64 v6; // x1
  __int64 methodPtr_low; // x9
  ServantCombineControl___c_o *v8; // x0
  EventCampaignEntity_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B19D41 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B19D41 = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_1BCAA3C(Instance, v6);
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    sub_1BCACFC(Instance);
    ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_3(v8, v9, v10);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__114_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0, 0LL), !b) )
    sub_1BCAA3C(this, a);
  return (_DWORD)this - UserServantEntity__getSvtClassId(b, 0, 0LL);
}


int32_t __fastcall ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_1(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Item; // x19

  if ( (byte_4B19D42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, x, method);
    this = (ServantCombineControl___c_o *)sub_1BCA7E0(&ServantCombineControl_TypeInfo, v4, v5);
    byte_4B19D42 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)x,
           0,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo, v6);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.value;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__108_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B19D43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B19D43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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

  if ( (byte_4B19D44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B19D44 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(Instance, v6);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass108_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4B19D45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B19D45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_1BCAA3C(Instance, v5);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}