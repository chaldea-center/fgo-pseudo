void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EB1B & 1) == 0 )
  {
    sub_1B885B0(&ServantCombineControl_TypeInfo);
    byte_4A5EB1B = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void __fastcall ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EB1A & 1) == 0 )
  {
    sub_1B885B0(&CombineMenuControl_TypeInfo);
    byte_4A5EB1A = 1;
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

  if ( (byte_4A5EB06 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3784/*"CONDUCTION_LIMITUP"*/);
    sub_1B885B0(&StringLiteral_3787/*"CONDUCTION_LVEXCEED_MSG"*/);
    sub_1B885B0(&StringLiteral_3786/*"CONDUCTION_LVEXCEED"*/);
    sub_1B885B0(&StringLiteral_3785/*"CONDUCTION_LIMITUP_MSG"*/);
    byte_4A5EB06 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_38;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
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
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                       v13,
                                                       0LL);
    if ( !v6 )
      goto LABEL_38;
    DataMasterBase_object__object__int___GetEntity(
      v6,
      (int32_t)conductionWireInfo,
      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                                                   (System_String_o *)StringLiteral_3787/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3786/*"CONDUCTION_LVEXCEED"*/,
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
                sub_1B8880C(conductionWireInfo, method);
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
                                                             (System_String_o *)StringLiteral_3785/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v11 )
            goto LABEL_38;
          UILabel__set_text(v11, (System_String_o *)conductionWireInfo, 0LL);
          v12 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3784/*"CONDUCTION_LIMITUP"*/,
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5EB09 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EB09 = 1;
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
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(baseData, *(_QWORD *)&lv);
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
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4A5EB03 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5EB03 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v13, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v12, 0LL) )
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
  sub_1B88554(
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_62511992((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0, 0LL);
    return System_Int32__CompareTo_62511992((int32_t)&SvtClassId, v8, 0LL);
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
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  __int64 v22; // x20
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A5EB0E & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5EB0E = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_1B8880C(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v4);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v13 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B88ACC(v14);
LABEL_35:
      sub_1B8880C(v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  v18 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v21 = *(_QWORD *)v18;
    v22 = v18;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_30;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_30:
      v25 = sub_1BDA590(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0,
    v19,
    v20);
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  ServantCombineControl_o *v26; // x0
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x2
  System_Comparison_T__o *v30; // x21
  ServantCombineControl_o *v31; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5EB14 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_1B885B0(&RecommendedConfigSaveData_TypeInfo);
    sub_1B885B0(&Method_ServantCombineControl_ClassRaritySort__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    byte_4A5EB14 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
  v10 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
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
                           (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
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
          *(const MethodInfo_34E303C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1B8880C(Instance, v4);
  }
LABEL_23:
  v31 = this;
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
      if ( !v31->fields.baseData )
        goto LABEL_22;
      v19 = (int)Instance;
      Instance = (void *)UserServantEntity__getSvtClassId(v31->fields.baseData, 0, 0LL);
      if ( v19 == (_DWORD)Instance )
        goto LABEL_40;
LABEL_47:
      if ( v17 == v16 )
        goto LABEL_50;
      if ( ++v16 >= (unsigned __int64)CombineMaterialList->max_length )
        sub_1B88814(Instance, v4);
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
                         (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_22;
      v22 = v6->fields._items;
      v23 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v6->fields._version;
      if ( !v22 )
        goto LABEL_22;
      v24 = v6->fields._size;
      if ( (unsigned int)v24 >= v22->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &v22->obj.klass + v24;
        v6->fields._size = v24 + 1;
        v25[4] = (Il2CppClass *)v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
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
    Instance = v31->fields.baseData;
    if ( !Instance )
      goto LABEL_22;
    v26 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0LL);
    v6 = (System_Collections_Generic_List_object__o *)ServantCombineControl__MixMaterialSort(
                                                        v26,
                                                        (int32_t)v26,
                                                        (System_Collections_Generic_List_Rarity_TYPE__o *)v10,
                                                        (System_Collections_Generic_List_UserServantEntity__o *)v6,
                                                        v27);
  }
  else
  {
    v30 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(v30, (Il2CppObject *)v31, Method_ServantCombineControl_ClassRaritySort__, 0LL);
    System_Collections_Generic_List_object___Sort_55571192(
      v6,
      v30,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_45085956(
           v31,
           (System_Collections_Generic_List_UserServantEntity__o *)v6,
           v28);
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

  if ( (byte_4A5EB01 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EB01 = 1;
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
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_62512312(
                                               (int32_t)&v11,
                                               (System_String_o *)StringLiteral_9206/*"N0"*/,
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
    sub_1B8880C(currentLvObj, method);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0LL);
}


void __fastcall ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EAFF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EAFF = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_charaGraph, 0, v7, v8);
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
  int32_t v10; // w2
  int32_t v11; // w3
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v18; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v24; // x0
  void *v25; // x0
  int v26; // w1
  __int64 v27; // x21
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5EAFE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__);
    sub_1B885B0(&ServantCombineControl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_1B885B0(&StringLiteral_6900/*"GET_EXP_INFO"*/);
    sub_1B885B0(&StringLiteral_9212/*"NEED_QP_INFO"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EAFE = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, 0LL) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9212/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6900/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0,
          v14,
          v15);
        ServantCombineControl__InitMaterialSvtInfo(this, v16);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8765/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v18);
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
                            (System_Collections_Generic_List_Enumerator_T__o *)&v28,
                            combineEventList,
                            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v29 = v28;
                          while ( 1 )
                          {
                            v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v29,
                                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v21 )
                              break;
                            if ( !v29.fields._current )
                              sub_1B8880C(v21, v22);
                            klass_high = HIDWORD(v29.fields._current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v24 = this->fields.menuListCtr;
                              if ( !v24 )
                                sub_1B8880C(0LL, v22);
                              MenuListControl__setBannerIcon(
                                v24,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v29.fields._current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v29,
                            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_1B8880C(selectMaterialSvtBtn, v4);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].monitor;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(selectMaterialSvtBtn->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    if ( *(_DWORD *)&selectMaterialSvtBtn[25].fields._firstChar == 1 )
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
        _9__81_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__81_0, v8, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_0 = _9__81_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v10, v11);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_18;
  }
  sub_1B88ACC(selectMaterialSvtBtn);
  if ( v26 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C73040();
  }
  v27 = *(_QWORD *)__cxa_begin_catch(v25);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v27 )
    sub_1B88804(v27);
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

  if ( (byte_4A5EB15 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EB15 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
  if ( !v10
    || (DataMasterBase_object__object__int___GetEntity(
          v10,
          (int32_t)Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(Instance, v8);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_object__o *v25; // x0
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  ServantCombineControl___c_c *v29; // x0
  System_Comparison_T__o *_9__113_0; // x23
  Il2CppObject *v31; // x24
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x23
  int32_t v36; // w19
  int32_t v37; // w24
  int v38; // w25
  int32_t v39; // w26
  Il2CppObject *v40; // x27
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w26
  Il2CppObject *v48; // x27
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w26
  Il2CppObject *v56; // x27
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0

  if ( (byte_4A5EB17 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    sub_1B885B0(&Method_ServantCombineControl___c__MixMaterialSort_b__113_0__);
    sub_1B885B0(&ServantCombineControl___c_TypeInfo);
    byte_4A5EB17 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        goto LABEL_75;
      v14 = Item;
      Item = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Item, 0, 0LL);
      if ( (_DWORD)Item == baseServantClass )
      {
        if ( !v7 )
          goto LABEL_75;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_75;
        v19 = v7->fields._size;
        if ( (unsigned int)v19 >= items->max_length )
        {
          v24 = v18[4];
          v25 = v7;
LABEL_27:
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            v14,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24 + 192) + 112LL));
          continue;
        }
        v20 = &items->obj.klass + v19;
        v7->fields._size = v19 + 1;
      }
      else if ( (_DWORD)Item == 1001 )
      {
        if ( !v8 )
          goto LABEL_75;
        v21 = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v8->fields._version;
        if ( !v21 )
          goto LABEL_75;
        v23 = v8->fields._size;
        if ( (unsigned int)v23 >= v21->max_length )
        {
          v24 = v22[4];
          v25 = v8;
          goto LABEL_27;
        }
        v20 = &v21->obj.klass + v23;
        v8->fields._size = v23 + 1;
      }
      else
      {
        if ( !v9 )
          goto LABEL_75;
        v26 = v9->fields._items;
        v27 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v9->fields._version;
        if ( !v26 )
          goto LABEL_75;
        v28 = v9->fields._size;
        if ( (unsigned int)v28 >= v26->max_length )
        {
          v24 = v27[4];
          v25 = v9;
          goto LABEL_27;
        }
        v20 = &v26->obj.klass + v28;
        v9->fields._size = v28 + 1;
      }
      v20[4] = (Il2CppClass *)v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
    }
  }
  if ( !v9 )
    goto LABEL_75;
  if ( v9->fields._size >= 1 )
  {
    v29 = ServantCombineControl___c_TypeInfo;
    if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v29 = ServantCombineControl___c_TypeInfo;
    }
    _9__113_0 = (System_Comparison_T__o *)v29->static_fields->__9__113_0;
    if ( !_9__113_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = ServantCombineControl___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__113_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserServantEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__113_0,
        v31,
        Method_ServantCombineControl___c__MixMaterialSort_b__113_0__,
        0LL);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      static_fields->__9__113_0 = (struct System_Comparison_UserServantEntity__o *)_9__113_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__113_0, (int32_t)_9__113_0, v33, v34);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      v9,
      _9__113_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v35 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Item = (Il2CppObject *)checkRarityTypeList;
  if ( !checkRarityTypeList )
    goto LABEL_75;
  v36 = checkRarityTypeList->fields._size;
  if ( v36 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)Item,
                               v37,
                               (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
      if ( !v7 )
        goto LABEL_75;
      v38 = (int)Item;
      if ( v7->fields._size >= 1 )
        break;
LABEL_52:
      if ( !v8 )
        goto LABEL_75;
      if ( v8->fields._size >= 1 )
      {
        v47 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v8,
                   v47,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v48 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v38 )
          {
            if ( !v35 )
              goto LABEL_75;
            v51 = v35->fields._items;
            v52 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v35->fields._version;
            if ( !v51 )
              goto LABEL_75;
            v53 = v35->fields._size;
            if ( (unsigned int)v53 >= v51->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v35,
                v48,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &v51->obj.klass + v53;
              v35->fields._size = v53 + 1;
              v54[4] = (Il2CppClass *)v48;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v48, v49, v50);
            }
          }
        }
        while ( ++v47 < v8->fields._size );
      }
      if ( v9->fields._size >= 1 )
      {
        v55 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v55,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v56 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v38 )
          {
            if ( !v35 )
              goto LABEL_75;
            v59 = v35->fields._items;
            v60 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v35->fields._version;
            if ( !v59 )
              goto LABEL_75;
            v61 = v35->fields._size;
            if ( (unsigned int)v61 >= v59->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v35,
                v56,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v62 = &v59->obj.klass + v61;
              v35->fields._size = v61 + 1;
              v62[4] = (Il2CppClass *)v56;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
            }
          }
        }
        while ( ++v55 < v9->fields._size );
      }
      Item = (Il2CppObject *)checkRarityTypeList;
      if ( ++v37 == v36 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v35;
    }
    v39 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v7,
               v39,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        break;
      v40 = Item;
      Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
      if ( (_DWORD)Item == v38 )
      {
        if ( !v35 )
          break;
        v43 = v35->fields._items;
        v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v35->fields._version;
        if ( !v43 )
          break;
        v45 = v35->fields._size;
        if ( (unsigned int)v45 >= v43->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            v40,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &v43->obj.klass + v45;
          v35->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v40;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
        }
      }
      if ( ++v39 >= v7->fields._size )
        goto LABEL_52;
    }
LABEL_75:
    sub_1B8880C(Item, v11);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v35;
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

  if ( (byte_4A5EB0D & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantCombineControl_OnClickCombineConductionWire__);
    byte_4A5EB0D = 1;
  }
  v3 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
    sub_1B8880C(combineRootComponent, v5);
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

  if ( (byte_4A5EB0C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4A5EB0C = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int32_t)SelfUserGame[4].klass;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
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
      sub_1B88814(SelfUserGame, v4);
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v10,
                                            (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    sub_1B8880C(SelfUserGame, v4);
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

  if ( (byte_4A5EB11 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantCombineControl_OnClickMaterialSelectList__);
    byte_4A5EB11 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, v5);
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

  if ( (byte_4A5EB12 & 1) == 0 )
  {
    sub_1B885B0(&RecommenededConfigDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_ServantCombineControl_OnClickRecommendedButton__);
    sub_1B885B0(&Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    byte_4A5EB12 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ServantCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_10;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v9 = (RecommenededConfigDialog_ClickDelegate_o *)sub_1B887FC(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__,
    v10);
  if ( !recommendedConfigDialog )
LABEL_10:
    sub_1B8880C(baseData, v5);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v9, v11);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_4A5EB00 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EB00 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_1B8880C(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaiginListPerSelectSvt = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.campaiginListPerSelectSvt, 0, v4, v5);
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
  UserServantEntity_o **p_baseData; // x20
  const MethodInfo *v7; // x2
  _BOOL8 v8; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w23
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v12; // w24
  int32_t adjustAtk; // w23
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  int32_t v15; // w24
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_object__o *CombineEventCampaigns; // x20
  System_Collections_Generic_List_object__o *v18; // x22
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  Il2CppObject *current; // x23
  unsigned int klass_high; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *EventMaster; // x0
  __int64 v24; // x1
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  Il2CppClass *klass; // x19
  int64_t Time; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_Int32_array *monitor; // x24
  __int64 v33; // x8
  int v34; // w9
  int32_t SvtClassId; // w1
  __int64 v36; // x0
  __int64 v37; // x1
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  _BOOL8 IsExchangeSvt; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x28
  int32_t v46; // w20
  __int64 v47; // x25
  __int64 v48; // x26
  Il2CppClass **v49; // x0
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_object__o *v54; // x23
  System_Collections_Generic_List_object__o **p_campaiginListPerSelectSvt; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  _BOOL8 v58; // x0
  __int64 v59; // x1
  EventCampaignEntity_o *v60; // x22
  _BOOL8 v61; // x0
  __int64 v62; // x1
  System_Collections_Generic_List_object__o *v63; // x23
  int32_t target; // w19
  Il2CppObject *Item; // x0
  __int64 v66; // x1
  int32_t v67; // w8
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  Il2CppObject *v70; // x0
  __int64 v71; // x1
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  Il2CppObject *v74; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x1
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  System_Collections_Generic_List_object__o *v84; // x23
  __int64 v85; // x0
  __int64 v86; // x1
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  Il2CppObject *v90; // x1
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  __int64 v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  char v98; // w19
  System_Collections_Generic_List_object__o *v99; // x0
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x8
  __int64 v104; // x0
  __int64 v105; // x1
  Il2CppObject *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  Il2CppObject *v109; // x1
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x0
  __int64 v114; // x1
  Il2CppObject *v115; // x22
  System_Comparison_T__o *v116; // x23
  __int64 v117; // x0
  __int64 v118; // x1
  System_Collections_Generic_List_object__o *v119; // x21
  ServantCombineControl___c_c *v120; // x0
  System_Comparison_T__o *_9__88_0; // x22
  Il2CppObject *v122; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  Il2CppObject *v126; // x0
  const MethodInfo *v127; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
  MenuListControl_c *v129; // x0
  float v130; // s8
  System_Func_float__float__float__float__o *v131; // x20
  AlphaTransitionCalculator_o *v132; // x21
  int32_t v133; // w2
  int32_t v134; // w3
  System_Collections_Generic_List_object__o *v135; // [xsp+18h] [xbp-D8h]
  ServantCombineControl_o *v136; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+60h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_4A5EB04 & 1) == 0 )
  {
    sub_1B885B0(&AlphaTransitionCalculator_TypeInfo);
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&System_Comparison_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&System_Comparison_List_EventCampaignEntity___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
    sub_1B885B0(&MenuListControl_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__);
    sub_1B885B0(&ServantCombineControl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EB04 = 1;
  }
  p_baseData = &this->fields.baseData;
  memset(&v139, 0, sizeof(v139));
  memset(&v138, 0, sizeof(v138));
  this->fields.baseData = usrSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)usrSvtData, (int32_t)method, v3);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v7);
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
    v12 = secondMaxAdjustAtk[1];
  else
    v12 = maxAjustAtk[1];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_164;
  UIIconLabel__Set_38235604(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * adjustHp,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[35]) * v12,
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
    v15 = secondMaxAdjustAtk[0];
  else
    v15 = maxAjustAtk[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_164;
  UIIconLabel__Set_38235604(
    currentAdjustAtkIconLabel,
    45,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * adjustAtk,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[34]) * v15,
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
  ServantCombineControl__CheckConductionWire(this, v16);
  combineInfoComp = (struct CombineInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_164;
  combineInfoComp = (struct CombineInfoComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)combineInfoComp,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !combineInfoComp )
    goto LABEL_164;
  CombineEventCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetCombineEventCampaigns(
                                                                         (EventCampaignMaster_o *)combineInfoComp,
                                                                         0LL);
  if ( !CombineEventCampaigns )
    goto LABEL_151;
  v136 = this;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v135 = CombineEventCampaigns;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v137,
    CombineEventCampaigns,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v139 = v137;
LABEL_25:
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v139,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v19 )
      break;
    current = v139.fields._current;
    if ( !v139.fields._current )
      sub_1B8880C(v19, v20);
    klass_high = HIDWORD(v139.fields._current[1].klass);
    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000034LL) != 0 )
    {
      EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(v136, v20);
      if ( !EventMaster )
        sub_1B8880C(0LL, v24);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 EventMaster,
                 (int32_t)current[1].klass,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B8880C(0LL, v26);
      klass = Entity[6].klass;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( (__int64)klass >= Time )
      {
        monitor = (System_Int32_array *)current[2].monitor;
        if ( !monitor )
          sub_1B8880C(Time, v29);
        v33 = *(_QWORD *)&monitor->max_length;
        v34 = HIDWORD(current[1].klass);
        if ( v33 )
        {
          if ( (unsigned int)(v34 - 32) >= 2 )
          {
            if ( v34 == 27 )
            {
              if ( !usrSvtData )
                sub_1B8880C(Time, v29);
              IsExchangeSvt = UserServantEntity__IsExchangeSvt(usrSvtData, 0LL);
              if ( IsExchangeSvt )
              {
                if ( !v18 )
                  sub_1B8880C(IsExchangeSvt, v42);
                items = v18->fields._items;
                v51 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v18->fields._version;
                if ( !items )
                  sub_1B8880C(IsExchangeSvt, v42);
                size = v18->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v18,
                    current,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                }
                else
                {
                  v53 = &items->obj.klass + size;
                  v18->fields._size = size + 1;
                  v53[4] = (Il2CppClass *)current;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)current, v43, v44);
                }
                break;
              }
            }
            else if ( (int)v33 >= 1 )
            {
              v45 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v45 >= (unsigned int)v33 )
                  sub_1B88814(Time, v29);
                if ( !usrSvtData )
                  sub_1B8880C(Time, v29);
                v46 = monitor->m_Items[v45 + 1];
                v48 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
                v47 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v142.fields.currentCryptoKey = v48;
                *(_QWORD *)&v142.fields.fakeValue = v47;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v142, 0LL);
                if ( v46 == (_DWORD)Time )
                  break;
                LODWORD(v33) = monitor->max_length;
                if ( (int)++v45 >= (int)v33 )
                  goto LABEL_25;
              }
              if ( !v18 )
                sub_1B8880C(Time, v29);
              v38 = v18->fields._items;
              v39 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
              ++v18->fields._version;
              if ( !v38 )
                sub_1B8880C(Time, v29);
              v40 = v18->fields._size;
              if ( (unsigned int)v40 >= v38->max_length )
                goto LABEL_67;
LABEL_66:
              v49 = &v38->obj.klass + v40;
              v18->fields._size = v40 + 1;
              v49[4] = (Il2CppClass *)current;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)current, v30, v31);
            }
          }
          else
          {
            if ( !usrSvtData )
              sub_1B8880C(Time, v29);
            SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0LL);
            v36 = System_Array__IndexOf_int_(
                    monitor,
                    SvtClassId,
                    (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
            if ( (v36 & 0x80000000) == 0 )
            {
              if ( !v18 )
                sub_1B8880C(v36, v37);
              v38 = v18->fields._items;
              v39 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
              ++v18->fields._version;
              if ( !v38 )
                sub_1B8880C(v36, v37);
              v40 = v18->fields._size;
              if ( (unsigned int)v40 < v38->max_length )
                goto LABEL_66;
LABEL_67:
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                current,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
          }
        }
        else if ( (v34 & 0xFFFFFFFE) == 4 )
        {
          if ( !v18 )
            sub_1B8880C(Time, v29);
          v38 = v18->fields._items;
          v39 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v18->fields._version;
          if ( !v38 )
            sub_1B8880C(Time, v29);
          v40 = v18->fields._size;
          if ( (unsigned int)v40 >= v38->max_length )
            goto LABEL_67;
          goto LABEL_66;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v139,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  v54 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  p_campaiginListPerSelectSvt = (System_Collections_Generic_List_object__o **)&v136->fields.campaiginListPerSelectSvt;
  v136->fields.campaiginListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)v54;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v136->fields.campaiginListPerSelectSvt, (int32_t)v54, v56, v57);
  if ( !v18 )
    goto LABEL_164;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v137,
    v18,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v139 = v137;
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v139,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v58 )
      break;
    if ( !*p_campaiginListPerSelectSvt )
      sub_1B8880C(v58, v59);
    v60 = (EventCampaignEntity_o *)v139.fields._current;
    if ( (*p_campaiginListPerSelectSvt)->fields._size <= 0 )
    {
      v84 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v84,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v60 )
        sub_1B8880C(v85, v86);
      v87 = (Il2CppObject *)EventCampaignEntity__Clone(v60, 0LL);
      v90 = v87;
      if ( !v84 )
        sub_1B8880C(v87, v87);
      v91 = v84->fields._items;
      v92 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v84->fields._version;
      if ( !v91 )
        sub_1B8880C(v87, v87);
      v93 = v84->fields._size;
      if ( (unsigned int)v93 >= v91->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v84,
          v87,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
      }
      else
      {
        v94 = &v91->obj.klass + v93;
        v84->fields._size = v93 + 1;
        v94[4] = (Il2CppClass *)v90;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v90, v88, v89);
      }
      v99 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_1B8880C(0LL, v95);
      v100 = v99->fields._items;
      v101 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v99->fields._version;
      if ( !v100 )
        sub_1B8880C(v99, v95);
      v102 = v99->fields._size;
      if ( (unsigned int)v102 < v100->max_length )
      {
LABEL_113:
        v103 = &v100->obj.klass + v102;
        v99->fields._size = v102 + 1;
        v103[4] = (Il2CppClass *)v84;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v103 + 4), (int32_t)v84, v96, v97);
        continue;
      }
      goto LABEL_126;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v137,
      *p_campaiginListPerSelectSvt,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    v138 = v137;
    while ( 1 )
    {
      v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v138,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
      if ( !v61 )
      {
        v98 = 0;
        goto LABEL_116;
      }
      if ( !v60 )
        sub_1B8880C(v61, v62);
      v63 = (System_Collections_Generic_List_object__o *)v138.fields._current;
      if ( !v138.fields._current )
        sub_1B8880C(v61, v62);
      target = v60->fields.target;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v138.fields._current,
               0,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
      if ( !Item )
        sub_1B8880C(0LL, v66);
      if ( target == HIDWORD(Item[1].klass) )
        break;
      v67 = v60->fields.target;
      if ( v67 == 4 )
      {
        v68 = System_Collections_Generic_List_object___get_Item(
                v63,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v68 )
          sub_1B8880C(0LL, v69);
        if ( HIDWORD(v68[1].klass) == 32 )
          break;
        v67 = v60->fields.target;
      }
      if ( v67 == 32 )
      {
        v70 = System_Collections_Generic_List_object___get_Item(
                v63,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v70 )
          sub_1B8880C(0LL, v71);
        if ( HIDWORD(v70[1].klass) == 4 )
          break;
        v67 = v60->fields.target;
      }
      if ( v67 == 5 )
      {
        v72 = System_Collections_Generic_List_object___get_Item(
                v63,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v72 )
          sub_1B8880C(0LL, v73);
        if ( HIDWORD(v72[1].klass) == 33 )
          break;
        v67 = v60->fields.target;
      }
      if ( v67 == 33 )
      {
        v74 = System_Collections_Generic_List_object___get_Item(
                v63,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v74 )
          sub_1B8880C(0LL, v75);
        if ( HIDWORD(v74[1].klass) == 5 )
          break;
      }
    }
    v76 = (Il2CppObject *)EventCampaignEntity__Clone(v60, 0LL);
    v79 = v76;
    v80 = v63->fields._items;
    v81 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
    ++v63->fields._version;
    if ( !v80 )
      sub_1B8880C(v76, v76);
    v82 = v63->fields._size;
    if ( (unsigned int)v82 >= v80->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v63,
        v76,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = &v80->obj.klass + v82;
      v63->fields._size = v82 + 1;
      v83[4] = (Il2CppClass *)v79;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v83 + 4), (int32_t)v79, v77, v78);
    }
    v98 = 1;
LABEL_116:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v138,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    if ( (v98 & 1) == 0 )
    {
      v84 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v84,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v60 )
        sub_1B8880C(v104, v105);
      v106 = (Il2CppObject *)EventCampaignEntity__Clone(v60, 0LL);
      v109 = v106;
      if ( !v84 )
        sub_1B8880C(v106, v106);
      v110 = v84->fields._items;
      v111 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v84->fields._version;
      if ( !v110 )
        sub_1B8880C(v106, v106);
      v112 = v84->fields._size;
      if ( (unsigned int)v112 >= v110->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v84,
          v106,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v113 = &v110->obj.klass + v112;
        v84->fields._size = v112 + 1;
        v113[4] = (Il2CppClass *)v109;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v113 + 4), (int32_t)v109, v107, v108);
      }
      v99 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_1B8880C(0LL, v114);
      v100 = v99->fields._items;
      v101 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v99->fields._version;
      if ( !v100 )
        sub_1B8880C(v99, v114);
      v102 = v99->fields._size;
      if ( (unsigned int)v102 < v100->max_length )
        goto LABEL_113;
LABEL_126:
      System_Collections_Generic_List_object___AddWithResize(
        v99,
        (Il2CppObject *)v84,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
      continue;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v139,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  combineInfoComp = (struct CombineInfoComponent_o *)*p_campaiginListPerSelectSvt;
  if ( !*p_campaiginListPerSelectSvt )
    goto LABEL_164;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v137,
    (System_Collections_Generic_List_object__o *)combineInfoComp,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v138 = v137;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v138,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
  {
    v115 = v138.fields._current;
    v116 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_object____ctor(
      v116,
      (Il2CppObject *)v136,
      Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__,
      0LL);
    if ( !v115 )
      sub_1B8880C(v117, v118);
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)v115,
      v116,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v138,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  v119 = *p_campaiginListPerSelectSvt;
  CombineEventCampaigns = v135;
  this = v136;
  if ( !v119 )
    goto LABEL_164;
  if ( v119->fields._size < 1 )
    goto LABEL_151;
  v120 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v120 = ServantCombineControl___c_TypeInfo;
  }
  _9__88_0 = (System_Comparison_T__o *)v120->static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( !v120->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v120);
      v120 = ServantCombineControl___c_TypeInfo;
    }
    v122 = (Il2CppObject *)v120->static_fields->__9;
    _9__88_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_List_EventCampaignEntity___TypeInfo);
    System_Comparison_object____ctor(_9__88_0, v122, Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__, 0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Comparison_List_EventCampaignEntity___o *)_9__88_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__88_0, (int32_t)_9__88_0, v124, v125);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v119,
    _9__88_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
  combineInfoComp = (struct CombineInfoComponent_o *)v136->fields.campaiginListPerSelectSvt;
  v136->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_164;
  combineInfoComp = (struct CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                       0,
                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_164;
  v126 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(v136, (EventCampaignEntity_o *)v126, v127);
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
    v8 = campaiginListPerSelectSvt->fields._size > 0;
    if ( !combineInfoComp )
      goto LABEL_164;
  }
  else
  {
    v8 = 0LL;
    if ( !combineInfoComp )
      goto LABEL_164;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v8, 0LL);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v129 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v129 = MenuListControl_TypeInfo;
  }
  v130 = ChangedFPSUtil__CovertFrameNumToSecond(v129->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v131 = ExtraEasing__AsymptoticSeriesFloat(
           MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
           (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
           0LL);
  v132 = (AlphaTransitionCalculator_o *)sub_1B887FC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v132, v130, v131, 0LL);
  this->fields.campaignAlphaCalculator = v132;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.campaignAlphaCalculator, (int32_t)v132, v133, v134);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_164:
    sub_1B8880C(combineInfoComp, v8);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int64_array *materialUsrSvtIdList; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int64_array *v12; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v14; // x25
  struct UserServantEntity_o *baseData; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  System_Collections_Generic_List_long__o *v18; // x24
  System_Collections_Generic_List_long__o *v19; // x23
  __int64 v20; // x26
  unsigned __int64 i; // x25
  struct System_Int64_array *v22; // x8
  int64_t v23; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x28
  UnityEngine_Transform_o *v27; // x22
  SetCombineData_o *v28; // x20
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v30; // x28
  MaterialSvtInfo_o *v31; // x29
  MaterialSvtInfo_ClickDelegate_o *v32; // x22
  Il2CppObject *Entity; // x28
  ServantLimitMaster_o *v34; // x29
  Il2CppClass *klass; // x21
  void *monitor; // x22
  int32_t v37; // w22
  struct System_Int64_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  struct System_Int64_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  struct System_Int64_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Int64_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v54; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x23
  __int64 v56; // x21
  __int64 v57; // x22
  int32_t monitor_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v60; // x2
  int32_t v61; // w23
  struct UserServantEntity_o *v62; // x8
  UILabel_o *currentLvLb; // x22
  UILabel_o *increLvLb; // x22
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v67; // x21
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  UserServantEntity_o *v72; // x8
  __int64 v73; // x21
  __int64 v74; // x22
  int32_t v75; // w24
  __int64 v76; // x22
  int32_t v77; // w2
  int32_t v78; // w3
  UserServantEntity_o *v79; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v81; // x8
  int v82; // w8
  int v83; // w8
  BalanceConfig_c *v84; // x0
  int32_t adjustHp; // w20
  uint32_t cctor_finished; // w9
  int v87; // w22
  int32_t StatusUpAdjustHp; // w8
  int v89; // w20
  int getHpAdjustVal; // w21
  int32_t v91; // w22
  int32_t v92; // w22
  int32_t v93; // w23
  int32_t v94; // w1
  BalanceConfig_c *v95; // x0
  int32_t adjustAtk; // w20
  uint32_t v97; // w9
  int32_t StatusUpAdjustAtk; // w8
  int v99; // w21
  int getAtkAdjustVal; // w22
  int v101; // w20
  int32_t v102; // w20
  int32_t v103; // w20
  int32_t v104; // w21
  int32_t v105; // w1
  bool v106; // w20
  float v107; // s0
  float v108; // s1
  float v109; // s2
  float v110; // s3
  const MethodInfo *v111; // x1
  UserServantEntity_o **p_baseData; // [xsp+10h] [xbp-B0h]
  int32_t targetLimitCnt; // [xsp+1Ch] [xbp-A4h]
  int32_t increAmount; // [xsp+20h] [xbp-A0h] BYREF
  int32_t v115; // [xsp+24h] [xbp-9Ch] BYREF
  __int64 v116; // [xsp+28h] [xbp-98h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+30h] [xbp-90h] BYREF
  __int64 maxAjustAtk; // [xsp+38h] [xbp-88h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-80h] BYREF
  System_String_array *skillNameList; // [xsp+48h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+50h] [xbp-70h] BYREF
  __int64 afterAtk; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = data;
  if ( (byte_4A5EB08 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1B885B0(&CombineSvtData_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    sub_1B885B0(&StringLiteral_7349/*"INCREMENT_SVTLEVEL"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EB08 = 1;
  }
  idList = 0LL;
  afterAtk = 0LL;
  *(_QWORD *)lateExp = 0LL;
  skillNameList = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  maxAjustAtk = 0LL;
  v116 = 0LL;
  v115 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_133;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int32_t)materialUsrSvtIdList,
    v7,
    v8);
  v12 = v3->fields.materialUsrSvtIdList;
  if ( !v12 )
    goto LABEL_133;
  baseSvtData = v3->fields.baseSvtData;
  v14 = *(_QWORD *)&v12->max_length;
  this->fields.baseData = baseSvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseData, (int32_t)baseSvtData, v10, v11);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_133;
  v17 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v123.fields.currentCryptoKey = v17;
  *(_QWORD *)&v123.fields.fakeValue = v16;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v123, 0LL);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  v19 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v14 >= 1 )
  {
    conductionWireInfo = this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_133;
    v20 = (unsigned int)v14;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    for ( i = 0LL; i != v20; ++i )
    {
      v22 = v3->fields.materialUsrSvtIdList;
      if ( !v22 )
        goto LABEL_133;
      if ( i >= v22->max_length )
        goto LABEL_134;
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_133;
      v23 = v22->m_Items[i];
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
      v26 = conductionWireInfo;
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(conductionWireInfo, 0LL);
      v27 = (UnityEngine_Transform_o *)conductionWireInfo;
      if ( !byte_4A55CE1 )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      if ( !v27 )
        goto LABEL_133;
      v28 = v3;
      UnityEngine_Transform__set_localPosition(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v26, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v127.fields.x = 0.5;
      v127.fields.y = 0.5;
      v127.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v127, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v26,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v30 = this->fields.baseData;
      v31 = (MaterialSvtInfo_o *)Component_object;
      v32 = (MaterialSvtInfo_ClickDelegate_o *)sub_1B887FC(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(
        v32,
        (Il2CppObject *)this,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0LL);
      if ( !v31 )
        goto LABEL_133;
      MaterialSvtInfo__setMaterialSvtInfo(v31, i, v30, v23, 1, 0, v32, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo,
                 v23,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_133;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_133;
      v34 = (ServantLimitMaster_o *)conductionWireInfo;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v124.fields.currentCryptoKey = klass;
      *(_QWORD *)&v124.fields.fakeValue = monitor;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v124, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                         (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                         0LL);
      if ( !v34 )
        goto LABEL_133;
      conductionWireInfo = (UnityEngine_GameObject_o *)ServantLimitMaster__GetEntity(
                                                         v34,
                                                         v37,
                                                         (int32_t)conductionWireInfo,
                                                         0LL);
      if ( !conductionWireInfo )
        goto LABEL_133;
      v3 = v28;
      if ( SLODWORD(conductionWireInfo[1].klass) >= 4 )
      {
        if ( !v18 )
          goto LABEL_133;
        items = v18->fields._items;
        v39 = Method_System_Collections_Generic_List_long__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_133;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v18,
            v23,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size] = v23;
        }
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_133;
        v41 = v19->fields._items;
        v42 = Method_System_Collections_Generic_List_long__Add__;
        ++v19->fields._version;
        if ( !v41 )
          goto LABEL_133;
        v43 = v19->fields._size;
        if ( (unsigned int)v43 >= v41->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v19,
            v23,
            *(const MethodInfo_34E5868 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = v43 + 1;
          v41->m_Items[v43] = v23;
        }
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsExchangeSvt(
                                                         (UserServantEntity_o *)Entity,
                                                         0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
    }
    if ( !v18 )
      goto LABEL_133;
    v44 = System_Collections_Generic_List_long___ToArray(
            v18,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.highRarityList, (int32_t)v44, v45, v46);
    if ( !v19 )
      goto LABEL_133;
    v47 = System_Collections_Generic_List_long___ToArray(
            v19,
            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v47;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.exceededCheckList, (int32_t)v47, v48, v49);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_133;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v28->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v115 = spendQp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_62512312(
                                                       (int32_t)&v115,
                                                       (System_String_o *)StringLiteral_9206/*"N0"*/,
                                                       0LL);
    if ( !qpLb )
      goto LABEL_133;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v28->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v115 = getExp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v115, 0LL);
    if ( !expLb )
      goto LABEL_133;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v54 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)conductionWireInfo;
    v57 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
    v56 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v125.fields.currentCryptoKey = v57;
    *(_QWORD *)&v125.fields.fakeValue = v56;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                       v125,
                                                       0LL);
    if ( !v55 )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                       v55,
                                                       (int32_t)conductionWireInfo,
                                                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v61 = LevelMax;
    if ( (_DWORD)checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, (int32_t)checkLv, v60) )
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
    v62 = this->fields.baseData;
    if ( !v62 )
      goto LABEL_133;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v62 + 256, 0LL);
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
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_7349/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v68, v69, v70);
    conductionWireInfo = (UnityEngine_GameObject_o *)System_String__Format(v67, v71, 0LL);
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
    HIDWORD(afterAtk) += v28->fields.getHpAdjustVal;
    LODWORD(afterAtk) = v28->fields.getAtkAdjustVal + afterAtk;
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
        sub_1B88814(conductionWireInfo, checkLv);
      checkLv = skillNameList->m_Items[0];
      if ( checkLv )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, checkLv, 0LL);
      }
    }
    v72 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_133;
    v74 = *(_QWORD *)&v72->fields.limitCount.fields.currentCryptoKey;
    v73 = *(_QWORD *)&v72->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v126.fields.currentCryptoKey = v74;
    *(_QWORD *)&v126.fields.fakeValue = v73;
    v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v126, 0LL);
    v76 = sub_1B887FC(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v76, 0LL);
    if ( !v76 )
      goto LABEL_133;
    v79 = *p_baseData;
    *(_QWORD *)(v76 + 16) = *p_baseData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v76 + 16), (int32_t)v79, v77, v78);
    increLv = this->fields.increLv;
    *(_DWORD *)(v76 + 32) = v61;
    *(_DWORD *)(v76 + 24) = increLv;
    *(_DWORD *)(v76 + 28) = v75;
    v81 = this->fields.baseData;
    if ( !v81 )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp[1],
      lateExp,
      this->fields.totalExp,
      v81->fields.lv,
      v61,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v76 + 36) = lateExp[1];
    v82 = HIDWORD(afterAtk);
    *(_DWORD *)(v76 + 40) = lateExp[0];
    *(_DWORD *)(v76 + 44) = v82;
    v83 = afterAtk;
    *(_DWORD *)(v76 + 48) = v28->fields.getHpAdjustVal;
    *(_DWORD *)(v76 + 52) = v83;
    *(_DWORD *)(v76 + 56) = v28->fields.getAtkAdjustVal;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_133;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v76,
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
                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v128.fields.r = 1.0;
    v128.fields.g = 1.0;
    v128.fields.b = 1.0;
    v128.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v128, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_133;
    conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)conductionWireInfo,
                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !conductionWireInfo )
      goto LABEL_133;
    v129.fields.r = 1.0;
    v129.fields.g = 1.0;
    v129.fields.b = 1.0;
    v129.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)conductionWireInfo, v129, 0LL);
    if ( !*p_baseData )
      goto LABEL_133;
    v84 = BalanceConfig_TypeInfo;
    adjustHp = (*p_baseData)->fields.adjustHp;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v84 = BalanceConfig_TypeInfo;
      cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    }
    v87 = HIDWORD(maxAjustAtk);
    StatusUpAdjustHp = v84->static_fields->StatusUpAdjustHp;
    v89 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v116) = v89;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v84 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v89 >= StatusUpAdjustHp * v87 )
    {
      v91 = secondMaxAdjustAtk[1];
      if ( v84->_2.cctor_finished )
      {
LABEL_96:
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
        v92 = StatusUpAdjustHp * v91;
        if ( !conductionWireInfo )
          goto LABEL_133;
        v93 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v89;
        UIIconLabel__Set_38235604((UIIconLabel_o *)conductionWireInfo, 44, v93, v92, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_62512140((int32_t)&v116 + 4, v93, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_133;
          if ( v93 >= v92 )
            v94 = v92;
          else
            v94 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v89;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v94, v92, v93 >= v92, 0LL);
        }
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpMaxLabel;
        if ( !conductionWireInfo )
          goto LABEL_133;
        UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !*p_baseData )
          goto LABEL_133;
        v95 = BalanceConfig_TypeInfo;
        adjustAtk = (*p_baseData)->fields.adjustAtk;
        v97 = BalanceConfig_TypeInfo->_2.cctor_finished;
        if ( !v97 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v95 = BalanceConfig_TypeInfo;
          v97 = BalanceConfig_TypeInfo->_2.cctor_finished;
        }
        StatusUpAdjustAtk = v95->static_fields->StatusUpAdjustAtk;
        v99 = StatusUpAdjustAtk * adjustAtk;
        LODWORD(v116) = StatusUpAdjustAtk * adjustAtk;
        getAtkAdjustVal = v3->fields.getAtkAdjustVal;
        v101 = maxAjustAtk;
        if ( !v97 )
        {
          j_il2cpp_runtime_class_init_0(v95);
          v95 = BalanceConfig_TypeInfo;
          StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        }
        if ( v99 >= StatusUpAdjustAtk * v101 )
        {
          v102 = secondMaxAdjustAtk[0];
          if ( v95->_2.cctor_finished )
            goto LABEL_112;
        }
        else
        {
          v102 = maxAjustAtk;
          if ( v95->_2.cctor_finished )
          {
LABEL_112:
            conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
            v103 = StatusUpAdjustAtk * v102;
            if ( !conductionWireInfo )
              goto LABEL_133;
            v104 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v99;
            UIIconLabel__Set_38235604((UIIconLabel_o *)conductionWireInfo, 45, v104, v103, 0, 0LL, 0, 0, 0, 0LL);
            if ( !System_Int32__Equals_62512140((int32_t)&v116, v104, 0LL) )
            {
              conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
              if ( !conductionWireInfo )
                goto LABEL_133;
              if ( v104 >= v103 )
                v105 = v103;
              else
                v105 = v104;
              UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v105, v103, v104 >= v103, 0LL);
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
                  v107 = 1.0;
                  v106 = 1;
                  v108 = 1.0;
                  goto LABEL_131;
                }
              }
              else if ( conductionWireInfo )
              {
                v106 = 0;
                v107 = 1.0;
                v108 = 0.0;
LABEL_131:
                v109 = v108;
                v110 = v107;
                UIWidget__set_color((UIWidget_o *)conductionWireInfo, *(UnityEngine_Color_o *)&v107, 0LL);
                this->fields._IsExeCombine_k__BackingField = v106;
                ServantCombineControl__SetExeBtnState(this, v111);
                return;
              }
            }
LABEL_133:
            sub_1B8880C(conductionWireInfo, checkLv);
          }
        }
        j_il2cpp_runtime_class_init_0(v95);
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        goto LABEL_112;
      }
    }
    else
    {
      v91 = HIDWORD(maxAjustAtk);
      if ( v84->_2.cctor_finished )
        goto LABEL_96;
    }
    j_il2cpp_runtime_class_init_0(v84);
    StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    goto LABEL_96;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_45085956(
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
  const MethodInfo_34FD564 **v22; // x29
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
  const MethodInfo_34FD564 **v45; // x25
  System_Collections_Generic_List_UserServantEntity__o *v46; // x29
  float v47; // s0
  unsigned int v48; // w8
  unsigned int v49; // w24
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t CombineQp; // w21
  float v53; // s0
  unsigned int v54; // w8
  int32_t v55; // w26
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  const MethodInfo *v60; // x3
  struct UserServantEntity_o *v61; // x8
  ServantCombineControl_c *v62; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct UserServantEntity_o *v66; // x1
  int32_t v67; // w8
  bool isAdjustAtkMax; // w0
  bool isSecondAdjustAtkMax; // w0
  System_Collections_Generic_List_long__o *v70; // x20
  int32_t v71; // w23
  int32_t v72; // w22
  __int128 v73; // q0
  struct System_Int64_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  System_Int64_array *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  int v81; // [xsp+0h] [xbp-F0h]
  int v82; // [xsp+4h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // [xsp+8h] [xbp-E8h]
  int32_t expType; // [xsp+14h] [xbp-DCh]
  int64_t v85; // [xsp+18h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // [xsp+20h] [xbp-D0h]
  CombineMaterialMaster_o *v87; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v90; // [xsp+78h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4A5EB16 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantCombineControl_TypeInfo);
    sub_1B885B0(&SetCombineData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EB16 = 1;
  }
  v90 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_101;
  v86 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
  *(_QWORD *)&v91.fields.currentCryptoKey = v16;
  *(_QWORD *)&v91.fields.fakeValue = v15;
  v87 = (CombineMaterialMaster_o *)v8;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v91, 0LL);
  if ( !MasterData_object )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_101;
  v19 = this->fields.baseData;
  v85 = Instance;
  if ( !v19 )
    goto LABEL_101;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v19, 0, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v19, SvtClassId, 0LL);
  v81 = Instance;
  if ( !targetMaterialList )
    goto LABEL_101;
  size = targetMaterialList->fields._size;
  v82 = size - 1;
  v22 = (const MethodInfo_34FD564 **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v23 = v90;
  if ( size < 1 )
  {
    v26 = 0;
    v25 = 0;
LABEL_70:
    v55 = v26;
    if ( v23 )
      goto LABEL_73;
  }
  else
  {
    v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
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
      *(_QWORD *)&v92.fields.currentCryptoKey = v31;
      *(_QWORD *)&v92.fields.fakeValue = v30;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v92, 0LL);
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v83,
                            v32,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_101;
      v33 = Instance;
      Instance = (int64_t)v87;
      if ( !v87 )
        goto LABEL_101;
      v34 = CombineMaterialMaster__GetEntity(v87, *(_DWORD *)(v33 + 136), *(_DWORD *)(v29 + 256), 0LL);
      Instance = (int64_t)v86;
      if ( !v86 )
        goto LABEL_101;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v86,
                            *(_DWORD *)(v33 + 80),
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v34 || !Instance )
        goto LABEL_101;
      v35 = *(_DWORD *)(Instance + 52);
      value = v34->fields.value;
      if ( v35 == 3 )
        goto LABEL_30;
      if ( v35 == v81 )
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
      if ( !byte_4A5638E )
      {
        sub_1B885B0(&System_Math_TypeInfo);
        byte_4A5638E = 1;
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
      if ( !byte_4A5638E )
      {
        sub_1B885B0(&System_Math_TypeInfo);
        byte_4A5638E = 1;
      }
      Instance = (int64_t)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v53 = v17 * (float)CombineQp;
      v54 = vcvtps_s32_f32(v53);
      if ( ceilf(v53) == INFINITY )
        v54 = 0x80000000;
      if ( !v85 )
        goto LABEL_101;
      v23 = v90;
      v55 = v54 + v26;
      if ( (signed int)(v54 + v26) > *(_DWORD *)(v85 + 96) )
      {
        this = v28;
        v22 = v45;
        v28->fields.isQpCondClear = 0;
        goto LABEL_70;
      }
      if ( !v90 )
        goto LABEL_101;
      items = v90->fields._items;
      v57 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v90->fields._version;
      if ( !items )
        goto LABEL_101;
      v58 = v23->fields._size;
      if ( (unsigned int)v58 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v29,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &items->obj.klass + v58;
        v23->fields._size = v58 + 1;
        v59[4] = (Il2CppClass *)v29;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v59 + 4), v29, v50, v51);
      }
      v61 = v28->fields.baseData;
      if ( !v61 )
        goto LABEL_101;
      v25 += v49;
      this = v28;
      if ( ServantCombineControl__IsLevelMax(v28, v61->fields.exp + v25, expType, v60) )
        break;
      v62 = ServantCombineControl_TypeInfo;
      if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        v62 = ServantCombineControl_TypeInfo;
      }
      targetMaterialList = v46;
      v22 = v45;
      if ( v27 != v62->static_fields->MAX_SELECT_NUM - 1 )
      {
        v26 = v55;
        v24 = v44;
        if ( v82 != v27++ )
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
      v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(SetCombineData_TypeInfo);
      SetCombineData___ctor((SetCombineData_o *)v23, 0LL);
      if ( !v23 )
        goto LABEL_101;
      v66 = this->fields.baseData;
      v23->fields._items = (struct System_Object_array *)v66;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->fields, (int32_t)v66, v64, v65);
      v67 = v90->fields._size;
      v23->fields._version = v55;
      LODWORD(v23->fields._syncRoot) = v25;
      v23[1].monitor = 0LL;
      v23->fields._size = v67;
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
        sub_1B8880C(Instance, v6);
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
      v70 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v70,
        (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
      v71 = v90->fields._size;
      if ( v71 >= 1 )
      {
        v72 = 0;
        while ( 1 )
        {
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v90, v72, *v22);
          if ( !Instance )
            goto LABEL_101;
          v73 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v89.fields.fakeValue = v73;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v88 = v89;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v88, 0LL);
          if ( !v70 )
            goto LABEL_101;
          v74 = v70->fields._items;
          v75 = Method_System_Collections_Generic_List_long__Add__;
          ++v70->fields._version;
          if ( !v74 )
            goto LABEL_101;
          v76 = v70->fields._size;
          if ( (unsigned int)v76 >= v74->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v70,
              Instance,
              *(const MethodInfo_34E5868 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v70->fields._size = v76 + 1;
            v74->m_Items[v76] = Instance;
          }
          if ( v71 == ++v72 )
            goto LABEL_99;
        }
      }
      if ( !v70 )
        goto LABEL_101;
LABEL_99:
      v77 = System_Collections_Generic_List_long___ToArray(
              v70,
              (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
      v23[1].fields._items = (struct System_Object_array *)v77;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[1].fields, (int32_t)v77, v78, v79);
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
    sub_1B8880C(0LL, v4);
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
  UICharaGraphTexture_o *TexturePrefab_37906428; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4A5EB07 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantCombineControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EB07 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_14;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v8 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v9 = (ServantLimitImageMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
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
    TexturePrefab_37906428 = CharaGraphManager__CreateTexturePrefab_37906428(
                               v4->fields.charaGraphBase,
                               usrSvtData,
                               v12,
                               10,
                               0LL,
                               0,
                               0LL);
    v4->fields.charaGraph = TexturePrefab_37906428;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.charaGraph, (int32_t)TexturePrefab_37906428, v15, v16);
    return;
  }
  this = *p_charaGraph;
  if ( !*p_charaGraph )
LABEL_14:
    sub_1B8880C(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_40836020((UICharaGraphTexture_o *)this, usrSvtData, v12, 0LL, 0, 0LL);
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

  if ( (byte_4A5EB0F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4A5EB0F = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1B8880C(combineBtnBg, method);
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

  if ( (byte_4A5EB02 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5EB02 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_62512312((int)this + 540, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_1B8880C(SelfUserGame, v4);
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
      sub_1B8880C(recommendedButton, isEnabled);
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
    sub_1B8880C(0LL, v5);
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v14; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v16; // x20
  ServantCombineControl___c_c *v17; // x8
  System_Action_o *_9__107_1; // x22
  System_String_o *v19; // x21
  Il2CppObject *v20; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x19
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  CommonConfirmDialog_ClickDelegate_o *v28; // x24
  System_String_o *v29; // x21
  System_Action_o *v30; // x22

  if ( (byte_4A5EB13 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__);
    sub_1B885B0(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__);
    sub_1B885B0(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__);
    sub_1B885B0(&ServantCombineControl___c__DisplayClass107_0_TypeInfo);
    sub_1B885B0(&ServantCombineControl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_10998/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/);
    sub_1B885B0(&StringLiteral_10997/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_10996/*"RECOMMENDED_NOT_EXIST_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EB13 = 1;
  }
  v3 = sub_1B887FC(ServantCombineControl___c__DisplayClass107_0_TypeInfo);
  ServantCombineControl___c__DisplayClass107_0___ctor((ServantCombineControl___c__DisplayClass107_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v8);
  *(_QWORD *)(v3 + 24) = RecommendedCombineData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)RecommendedCombineData, v10, v11);
  isQpCondClear = this->fields.isQpCondClear;
  if ( !*(_QWORD *)(v3 + 24) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isQpCondClear )
      {
LABEL_10:
        recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10996/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                  0LL);
        v16 = (System_String_o *)recommendedConfigDialog;
        v17 = ServantCombineControl___c_TypeInfo;
        if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
          v17 = ServantCombineControl___c_TypeInfo;
        }
        _9__107_1 = v17->static_fields->__9__107_1;
        v19 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__107_1 )
        {
          if ( !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            v17 = ServantCombineControl___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v17->static_fields->__9;
          _9__107_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(_9__107_1, v20, Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, 0LL);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
          static_fields->__9__107_1 = _9__107_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__107_1, (int32_t)_9__107_1, v22, v23);
        }
        if ( !Instance )
          goto LABEL_25;
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v19,
          v16,
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
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10997/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
    v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v3,
      Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v29,
      v30,
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
      RecommenededConfigDialog__Close_45062848(recommendedConfigDialog, 0LL, v12);
      ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v3 + 24), v14);
      return;
    }
LABEL_25:
    sub_1B8880C(recommendedConfigDialog, v5);
  }
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10998/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v3,
    Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__,
    0LL);
  if ( !v24 )
    goto LABEL_25;
  CommonUI__OpenConfirmDialog_30493912(
    (CommonUI_o *)v24,
    (System_String_o *)StringLiteral_1/*""*/,
    v25,
    v26,
    v27,
    v28,
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
    sub_1B8880C(preSelectBaseLb, method);
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
  if ( (byte_4A5EB10 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7356/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_7365/*"INFO_MSG_SVTCOMBINE_BASE"*/);
    sub_1B885B0(&StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1B885B0(&StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EB10 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1B8880C(detailInfoLb, *(_QWORD *)&state);
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
      v7 = &StringLiteral_5756/*"EXE_SUMMON_COMBINE_TXT"*/;
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
      v7 = &StringLiteral_12110/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7356/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
    v7 = &StringLiteral_7365/*"INFO_MSG_SVTCOMBINE_BASE"*/;
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
  if ( (byte_4A5EB05 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantCombineControl_o *)sub_1B885B0(&StringLiteral_20509/*"img_txt_campaign_"*/);
    byte_4A5EB05 = 1;
  }
  v15 = 0LL;
  if ( !byte_4A55CE1 )
  {
    this = (ServantCombineControl_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_1B8880C(this, eventInfoData);
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
  this = (ServantCombineControl_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_20509/*"img_txt_campaign_"*/, v13, 0LL);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    this->klass[2]._1.name);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
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

  if ( (byte_4A5EB0B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4A5EB0B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0LL )
    sub_1B8880C(SelfUserGame, v5);
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

  if ( (byte_4A5EB0A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4A5EB0A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
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
      sub_1B88814(SelfUserGame, v5);
    v10 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v8];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v10,
                                          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    sub_1B8880C(SelfUserGame, v5);
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

  if ( (byte_4A5EB19 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5EB19 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1B8880C(0LL, v6);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v15 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B88ACC(v16);
LABEL_61:
      sub_1B8880C(v16, v17);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v16,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1B8880C(0LL, v20);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v21 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
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
      v26 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
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
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1B8880C(helpBtn, *(_QWORD *)&progress);
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

  if ( (byte_4A5EB18 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5EB18 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_64;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1B8880C(0LL, v4);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v13 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B88ACC(v14);
LABEL_62:
      sub_1B8880C(v14, v15);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v14,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1B8880C(0LL, v18);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0LL);
  }
  v19 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
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
      v24 = sub_1BDA590(v19, System_IDisposable_TypeInfo, 0LL);
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
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
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
                                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_64:
    sub_1B8880C(helpBtn, method);
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
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
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

  if ( (byte_4A5EAFD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1B885B0(&MenuListControl_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_TransitionCalculator_float__Update__);
    sub_1B885B0(&Method_TransitionCalculator_float__get_Current__);
    byte_4A5EAFD = 1;
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
      method = (const MethodInfo *)(campaiginListPerSelectSvt->fields._size > 0);
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
    v5 = this->fields.campaiginListPerSelectSvt;
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
            if ( this->fields.campaiginListPerSelectSvt )
            {
              v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this->fields.campaiginListPerSelectSvt,
                           0,
                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                if ( campaign )
                {
                  if ( v8 )
                  {
                    campaign = DataMasterBase_object__object__int___GetEntity(
                                 v8,
                                 *((_DWORD *)campaign + 4),
                                 (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                    if ( campaign )
                    {
                      v9 = *((_QWORD *)campaign + 12);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( v9 >= NetworkManager__getTime(0LL) )
                        return;
                      campaign = this->fields.campaiginListPerSelectSvt;
                      if ( campaign )
                      {
                        campaign = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)campaign,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                        if ( campaign )
                        {
                          System_Collections_Generic_List_object___RemoveAt(
                            (System_Collections_Generic_List_object__o *)campaign,
                            0,
                            (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                          campaign = this->fields.campaiginListPerSelectSvt;
                          if ( campaign )
                          {
                            campaign = System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)campaign,
                                         0,
                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                            if ( campaign )
                            {
                              v10 = (int *)campaign;
                              campaign = this->fields.campaiginListPerSelectSvt;
                              if ( campaign )
                              {
                                if ( v10[6] <= 0 )
                                {
                                  System_Collections_Generic_List_object___RemoveAt(
                                    (System_Collections_Generic_List_object__o *)campaign,
                                    0,
                                    (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                                }
                                else
                                {
                                  campaign = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)campaign,
                                               0,
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                                  if ( !campaign )
                                    goto LABEL_67;
                                  Item = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)campaign,
                                           0,
                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
          (const MethodInfo_37B9DC0 *)Method_TransitionCalculator_float__Update__);
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
          if ( !this->fields.campaiginListPerSelectSvt )
            goto LABEL_67;
          v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.campaiginListPerSelectSvt,
                       this->fields.campaiginPerSelectSvtListIndex,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_67;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_67;
          if ( !v19 )
            goto LABEL_67;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v19,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !campaign )
            goto LABEL_67;
          v20 = *((_QWORD *)campaign + 12);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( v20 < NetworkManager__getTime(0LL) )
          {
            campaign = this->fields.campaiginListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaiginListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            v21 = (int *)campaign;
            campaign = this->fields.campaiginListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
            if ( v21[6] <= 0 )
            {
              System_Collections_Generic_List_object___RemoveAt(
                (System_Collections_Generic_List_object__o *)campaign,
                campaiginPerSelectSvtListIndex,
                (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
            }
            else
            {
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           campaiginPerSelectSvtListIndex,
                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_67;
              v23 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v23, v24);
            }
          }
          campaign = this->fields.campaiginListPerSelectSvt;
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
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
LABEL_67:
            sub_1B8880C(campaign, method);
          v25 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
      sub_1B8880C(0LL, isDecide);
    RecommenededConfigDialog__Close_45062848(recommendedConfigDialog, 0LL, method);
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
  struct MenuListControl_o *menuListCtr; // x22

  v6 = this;
  if ( (byte_4A5EB1C & 1) == 0 )
  {
    this = (ServantCombineControl_o *)sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_4A5EB1C = 1;
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
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || (menuListCtr = this->fields.menuListCtr,
        (this = (ServantCombineControl_o *)ServantCombineControl__get_EventMaster(v6, (const MethodInfo *)a)) == 0LL)
    || (this = (ServantCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            b->fields.eventId,
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_1B8880C(this, a);
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
  EventMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantStatusBattleListViewItem_o *p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5EAFC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EAFC = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v5);
    p_eventMaster = (ServantStatusBattleListViewItem_o *)&this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B88554(p_eventMaster, (int32_t)MasterData_object, v8, v9);
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
  sub_1B88554(
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EB1D & 1) == 0 )
  {
    sub_1B885B0(&ServantCombineControl___c_TypeInfo);
    byte_4A5EB1D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantCombineControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  System_Collections_Generic_List_EventCampaignEntity__o *v6; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4A5EB1E & 1) == 0 )
  {
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5EB1E = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_1B8880C(Instance, v3);
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    sub_1B88ACC(Instance);
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
    sub_1B8880C(this, a);
  return (_DWORD)this - UserServantEntity__getSvtClassId(b, 0, 0LL);
}


int32_t __fastcall ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *a,
        System_Collections_Generic_List_EventCampaignEntity__o *b,
        const MethodInfo *method)
{
  int klass_high; // w20

  if ( (byte_4A5EB1F & 1) == 0 )
  {
    this = (ServantCombineControl___c_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    byte_4A5EB1F = 1;
  }
  if ( !a
    || (this = (ServantCombineControl___c_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)a,
                                                0,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__)) == 0LL
    || !b
    || (klass_high = HIDWORD(this[1].klass),
        (this = (ServantCombineControl___c_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)b,
                                                 0,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__)) == 0LL) )
  {
    sub_1B8880C(this, a);
  }
  return klass_high - HIDWORD(this[1].klass);
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__107_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5EB20 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EB20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
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

  if ( (byte_4A5EB21 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EB21 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, v6);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4A5EB22 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EB22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}