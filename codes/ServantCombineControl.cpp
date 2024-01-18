void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189EBB & 1) == 0 )
  {
    sub_B2C35C(&ServantCombineControl_TypeInfo, v1);
    byte_4189EBB = 1;
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

  if ( (byte_4189EA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_3288/*"CONDUCTION_LIMITUP"*/, v7);
    sub_B2C35C(&StringLiteral_3291/*"CONDUCTION_LVEXCEED_MSG"*/, v8);
    sub_B2C35C(&StringLiteral_3290/*"CONDUCTION_LVEXCEED"*/, v9);
    sub_B2C35C(&StringLiteral_3289/*"CONDUCTION_LIMITUP_MSG"*/, v10);
    byte_4189EA7 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_41;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                       v21,
                                                       0LL);
    if ( !v14 )
      goto LABEL_41;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      v14,
      (int32_t)conductionWireInfo,
      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                                                   (System_String_o *)StringLiteral_3291/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3290/*"CONDUCTION_LVEXCEED"*/,
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
                sub_B2C434(conductionWireInfo, method);
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
                                                             (System_String_o *)StringLiteral_3289/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v19 )
            goto LABEL_41;
          UILabel__set_text(v19, (System_String_o *)conductionWireInfo, 0LL);
          v20 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3288/*"CONDUCTION_LIMITUP"*/,
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
    sub_B2C434(this, method);
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

  if ( (byte_4189EAA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189EAA = 1;
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
  baseData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B2C434(baseData, *(_QWORD *)&lv);
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

  if ( (byte_4189EA4 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4189EA4 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL) )
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
  sub_B2C2F8(
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_38381180((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0LL);
    return System_Int32__CompareTo_38381180((int32_t)&SvtClassId, v8, 0LL);
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
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  __int64 v31; // x20
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0

  if ( (byte_4189EAF & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v5);
    byte_4189EAF = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_B2C434(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_36;
    v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v19);
LABEL_36:
      sub_B2C434(v19, v20);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v23 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v30 = *(_QWORD *)v23;
    v31 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_31;
      }
      v34 = v30 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_31:
      v34 = sub_AC5258(v23, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  __int64 v21; // x1
  UserServantEntity_array *CombineMaterialList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  int32_t SvtClassId; // w22
  _BOOL4 IsExtraClass; // w22
  RecommendedConfigSaveData_o *v26; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v27; // x24
  struct System_Collections_Generic_List_int__o *selectRarityList; // x27
  signed __int64 size; // x19
  unsigned __int64 v30; // x25
  __int64 v31; // x8
  const MethodInfo_2F6A424 **v32; // x26
  unsigned __int64 v33; // x27
  signed __int64 v34; // x28
  UserServantEntity_o **m_Items; // x19
  UserServantEntity_o *v36; // x25
  RecommendedConfigSaveData_o *v37; // x24
  UserServantEntity_o **v38; // x23
  signed __int64 v39; // x19
  UserServantEntity_array *v40; // x28
  _BOOL4 v41; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x22
  const MethodInfo_2F6A424 **v43; // x20
  int v44; // w26
  bool v45; // zf
  __int64 v46; // x0
  ServantCombineControl_o *v47; // x0
  const MethodInfo *v48; // x4
  const MethodInfo *v49; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v51; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v52; // [xsp+0h] [xbp-60h]
  ServantCombineControl_o *v53; // [xsp+8h] [xbp-58h]

  if ( (byte_4189EB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserServantEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_UserServantEntity__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v15);
    sub_B2C35C(&RecommendedConfigSaveData_TypeInfo, v16);
    sub_B2C35C(&Method_ServantCombineControl_ClassRaritySort__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v19);
    byte_4189EB5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
  v26 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v27 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v27,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  selectRarityList = v26->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_55;
  size = selectRarityList->fields._size;
  if ( (int)size >= 1 )
  {
    v30 = 0LL;
    do
    {
      if ( v30 >= (unsigned int)selectRarityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v27 )
        break;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v27,
        selectRarityList->fields._items->m_Items[++v30],
        (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
      if ( (__int64)v30 >= size )
        goto LABEL_23;
      selectRarityList = v26->fields.selectRarityList;
    }
    while ( selectRarityList );
LABEL_55:
    sub_B2C434(Instance, v21);
  }
LABEL_23:
  v53 = this;
  if ( !CombineMaterialList )
    goto LABEL_55;
  v31 = *(_QWORD *)&CombineMaterialList->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = (const MethodInfo_2F6A424 **)&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__;
    v33 = 0LL;
    v34 = (int)v31;
    m_Items = CombineMaterialList->m_Items;
    v52 = v27;
    while ( 1 )
    {
      v36 = m_Items[v33];
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsAll(v26, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_55;
        Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v36, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_44;
      }
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsTargetOnly(v26, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v36 )
        goto LABEL_55;
      v37 = v26;
      v38 = m_Items;
      v39 = v34;
      v40 = CombineMaterialList;
      v41 = IsExtraClass;
      v42 = v23;
      v43 = v32;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v36, 0LL);
      if ( !v53->fields.baseData )
        goto LABEL_55;
      v44 = (int)Instance;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v53->fields.baseData, 0LL);
      v45 = v44 == (_DWORD)Instance;
      v32 = v43;
      v23 = v42;
      IsExtraClass = v41;
      CombineMaterialList = v40;
      v34 = v39;
      m_Items = v38;
      v26 = v37;
      v27 = v52;
      if ( v45 )
        goto LABEL_40;
LABEL_44:
      if ( (__int64)++v33 >= v34 )
        goto LABEL_47;
      if ( v33 >= CombineMaterialList->max_length )
      {
        v46 = sub_B2C460(Instance);
        sub_B2C400(v46, 0LL);
      }
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_55;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v36, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_44;
    }
    else
    {
LABEL_39:
      if ( !v36 )
        goto LABEL_55;
    }
LABEL_40:
    Instance = (DataManager_o *)UserServantEntity__getRarity(v36, 0LL);
    if ( !v27 )
      goto LABEL_55;
    Instance = (DataManager_o *)System_Collections_Generic_List_VoiceCondType_Type___Contains(
                                  v27,
                                  (int32_t)Instance,
                                  *v32);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_55;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
    goto LABEL_44;
  }
LABEL_47:
  if ( !v23 )
    goto LABEL_55;
  if ( !v23->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v26, 0LL) )
  {
    Instance = (DataManager_o *)v53->fields.baseData;
    if ( !Instance )
      goto LABEL_55;
    v47 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantCombineControl__MixMaterialSort(
                                                                                                    v47,
                                                                                                    (int32_t)v47,
                                                                                                    (System_Collections_Generic_List_Rarity_TYPE__o *)v27,
                                                                                                    (System_Collections_Generic_List_UserServantEntity__o *)v23,
                                                                                                    v48);
  }
  else
  {
    v51 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v51,
      (Il2CppObject *)v53,
      Method_ServantCombineControl_ClassRaritySort__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
      (System_Comparison_T__o *)v51,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_29218208(
           v53,
           (System_Collections_Generic_List_UserServantEntity__o *)v23,
           v49);
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

  if ( (byte_4189EA2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4189EA2 = 1;
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
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_38381416(
                                               (int32_t)&v17,
                                               (System_String_o *)StringLiteral_9266/*"N0"*/,
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
    sub_B2C434(currentLvObj, method);
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

  if ( (byte_4189EA0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189EA0 = 1;
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
      sub_B2C434(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_charaGraph, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v20; // x9
  ServantCombineControl___c_c *v21; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v24; // x21
  struct ServantCombineControl___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v42; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  _BOOL8 v45; // x0
  __int64 v46; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v48; // x0
  void *v49; // x0
  int v50; // w1
  __int64 v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4189E9F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_B2C35C(&TutorialFlag_TypeInfo, v11);
    sub_B2C35C(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v12);
    sub_B2C35C(&ServantCombineControl___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_8841/*"MSG_PRESELECT_BASE_SVT"*/, v14);
    sub_B2C35C(&StringLiteral_6859/*"GET_EXP_INFO"*/, v15);
    sub_B2C35C(&StringLiteral_9272/*"NEED_QP_INFO"*/, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    byte_4189E9F = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(102, 0LL) )
  {
LABEL_21:
    needQpLb = this->fields.needQpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6859/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        ServantCombineControl__InitMaterialSvtInfo(this, v40);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8841/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v42);
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
                            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v53 = v52;
                          while ( 1 )
                          {
                            v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v53,
                                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v45 )
                              break;
                            if ( !v53.fields.current )
                              sub_B2C434(v45, v46);
                            klass_high = HIDWORD(v53.fields.current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v48 = this->fields.menuListCtr;
                              if ( !v48 )
                                sub_B2C434(0LL, v46);
                              MenuListControl__setBannerIcon(
                                v48,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v53.fields.current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            &v53,
                            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_B2C434(selectMaterialSvtBtn, v19);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].klass;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  v20 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&selectMaterialSvtBtn->klass->_2.bitflags2 + 1) >= (unsigned int)v20
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[v20 - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[25].monitor) == 1 )
    {
      v21 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v21 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__81_0 = static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__81_0, v24, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        v25 = ServantCombineControl___c_TypeInfo->static_fields;
        v25->__9__81_0 = _9__81_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v25->__9__81_0,
          (System_Int32_array **)_9__81_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_21;
  }
  sub_B2C728(selectMaterialSvtBtn);
  if ( v50 != 1 )
    _Unwind_Resume(v49);
  v51 = *(_QWORD *)__cxa_begin_catch(v49);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v51 )
    sub_B2C400(v51, 0LL);
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
  __int64 v12; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t v17; // w22
  int32_t LevelMax; // w0
  int v19; // w21
  int v20; // w8
  int32_t v21; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4189EB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&totalExp);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4189EB6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_23;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v16;
  *(_QWORD *)&v23.fields.fakeValue = v15;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  if ( !v14
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v14,
          (int32_t)Instance,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_23:
    sub_B2C434(Instance, v12);
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
LABEL_19:
    v20 = v19;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_23;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v17, 0LL);
      if ( !Instance )
        goto LABEL_23;
      v21 = *((_DWORD *)Instance + 6);
      if ( v21 > totalExp )
      {
        v20 = *((_DWORD *)Instance + 5);
        return v20 >= v19;
      }
      if ( v21 == totalExp )
        break;
      if ( ++v17 >= v19 )
        goto LABEL_19;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  __int64 SvtClassId; // x0
  __int64 v24; // x1
  int32_t size; // w28
  __int64 v26; // x26
  unsigned int v27; // w8
  Il2CppClass **v28; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x25
  const MethodInfo_2EF4460 *v30; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x0
  ServantCombineControl___c_c *v32; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__113_0; // x23
  Il2CppObject *v35; // x24
  struct ServantCombineControl___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x23
  int32_t v44; // w8
  unsigned __int64 v45; // x25
  int v46; // w8
  System_Collections_Generic_List_Rarity_TYPE__o *v47; // x26
  int32_t v48; // w28
  unsigned int v49; // w19
  __int64 v50; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v51; // x24
  int v52; // w8
  unsigned int v53; // w19
  __int64 v54; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x24
  int v56; // w8
  __int64 v57; // x19
  __int64 v58; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x24
  signed __int64 v61; // [xsp+8h] [xbp-58h]

  if ( (byte_4189EB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserServantEntity___ctor__, *(_QWORD *)&baseServantClass);
    sub_B2C35C(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v15);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v17);
    sub_B2C35C(&Method_ServantCombineControl___c__MixMaterialSort_b__113_0__, v18);
    sub_B2C35C(&ServantCombineControl___c_TypeInfo, v19);
    byte_4189EB8 = 1;
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !materialList )
    goto LABEL_70;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v26 = 0LL;
    v27 = materialList->fields._size;
    while ( 1 )
    {
      if ( v27 <= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v28 = &materialList->fields._items->obj.klass + v26;
      v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)v28[4];
      if ( !v29 )
        goto LABEL_70;
      SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v28[4], 0LL);
      if ( (_DWORD)SvtClassId == baseServantClass )
      {
        if ( !v20 )
          goto LABEL_70;
        v30 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v31 = v20;
      }
      else if ( (_DWORD)SvtClassId == 1001 )
      {
        if ( !v21 )
          goto LABEL_70;
        v30 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v31 = v21;
      }
      else
      {
        if ( !v22 )
          goto LABEL_70;
        v30 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v31 = v22;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v31, v29, v30);
      if ( (int)v26 + 1 >= size )
        break;
      v27 = materialList->fields._size;
      ++v26;
    }
  }
  if ( !v22 )
    goto LABEL_70;
  if ( v22->fields._size >= 1 )
  {
    v32 = ServantCombineControl___c_TypeInfo;
    if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v32 = ServantCombineControl___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__113_0;
    if ( !_9__113_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserServantEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__113_0,
        v35,
        Method_ServantCombineControl___c__MixMaterialSort_b__113_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserServantEntity___ctor__);
      v36 = ServantCombineControl___c_TypeInfo->static_fields;
      v36->__9__113_0 = (struct System_Comparison_UserServantEntity__o *)_9__113_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v36->__9__113_0,
        (System_Int32_array **)_9__113_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
      (System_Comparison_T__o *)_9__113_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !checkRarityTypeList )
    goto LABEL_70;
  v44 = checkRarityTypeList->fields._size;
  if ( v44 >= 1 )
  {
    v61 = v44;
    v45 = 0LL;
    while ( 1 )
    {
      if ( v45 >= (unsigned int)v44 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v20 )
        goto LABEL_70;
      v46 = v20->fields._size;
      v47 = checkRarityTypeList;
      v48 = checkRarityTypeList->fields._items->m_Items[v45 + 1];
      if ( v46 >= 1 )
        break;
LABEL_49:
      if ( !v21 )
        goto LABEL_70;
      v52 = v21->fields._size;
      if ( v52 >= 1 )
      {
        v53 = 0;
        do
        {
          if ( v52 <= v53 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v54 = (__int64)v21->fields._items + 8 * (int)v53;
          v55 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v54 + 32);
          if ( !v55 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v54 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v48 )
          {
            if ( !v43 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v43,
              v55,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v52 = v21->fields._size;
        }
        while ( (int)++v53 < v52 );
      }
      v56 = v22->fields._size;
      if ( v56 >= 1 )
      {
        v57 = 0LL;
        do
        {
          if ( v56 <= (unsigned int)v57 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v58 = (__int64)v22->fields._items + 8 * v57;
          v59 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v58 + 32);
          if ( !v59 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v58 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v48 )
          {
            if ( !v43 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v43,
              v59,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v56 = v22->fields._size;
        }
        while ( (int)++v57 < v56 );
      }
      if ( (__int64)++v45 >= v61 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v43;
      v44 = v47->fields._size;
      checkRarityTypeList = v47;
    }
    v49 = 0;
    while ( 1 )
    {
      if ( v46 <= v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v50 = (__int64)v20->fields._items + 8 * (int)v49;
      v51 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v50 + 32);
      if ( !v51 )
        break;
      SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v50 + 32), 0LL);
      if ( (_DWORD)SvtClassId == v48 )
      {
        if ( !v43 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v43,
          v51,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      }
      v46 = v20->fields._size;
      if ( (int)++v49 >= v46 )
        goto LABEL_49;
    }
LABEL_70:
    sub_B2C434(SvtClassId, v24);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v43;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4189EAE & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189EAE = 1;
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
    sub_B2C434(combineRootComponent, v3);
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
  unsigned __int64 v12; // x23
  unsigned __int64 max_length; // x9
  int64_t v14; // x22
  bool v15; // w5
  __int64 v16; // x0

  if ( (byte_4189EAD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_4189EAD = 1;
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
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  v11 = SelfUserGame;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v12 >= (int)max_length )
    {
      v15 = 0;
      goto LABEL_19;
    }
    if ( v12 >= max_length )
    {
      v16 = sub_B2C460(SelfUserGame);
      sub_B2C400(v16, 0LL);
    }
    v14 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v12];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)SelfUserGame,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                        v14,
                                        (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v12;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v15 = 1;
LABEL_19:
  SelfUserGame = (System_String_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B2C434(SelfUserGame, v8);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v11,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v15,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL);
}


void __fastcall ServantCombineControl__OnClickMaterialSelectList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4189EB2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189EB2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B2C434(0LL, v3);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__OnClickRecommendedButton(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  RecommenededConfigDialog_ClickDelegate_o *v10; // x21

  if ( (byte_4189EB3 & 1) == 0 )
  {
    sub_B2C35C(&RecommenededConfigDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v5);
    byte_4189EB3 = 1;
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
  v10 = (RecommenededConfigDialog_ClickDelegate_o *)sub_B2C42C(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__,
    0LL);
  if ( !recommendedConfigDialog )
LABEL_12:
    sub_B2C434(baseData, v6);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v10, 0LL);
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

  if ( (byte_4189EA1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4189EA1 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_B2C434(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaiginListPerSelectSvt = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt, 0LL, v4, v5, v6, v7, v8, v9);
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
  _BOOL8 v47; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w19
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v51; // w24
  int32_t adjustAtk; // w19
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  int32_t v54; // w24
  const MethodInfo *v55; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x24
  _BOOL8 v57; // x0
  const MethodInfo *v58; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  unsigned int klass_high; // w8
  EventMaster_o *EventMaster; // x0
  __int64 v62; // x1
  WarEntity_o *Entity; // x0
  __int64 v64; // x1
  int64_t v65; // x19
  int64_t Time; // x0
  __int64 v67; // x1
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  const char *namespaze; // x8
  int32_t missionConditionDetailId; // w9
  int32_t SvtClassId; // w1
  __int64 v72; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x27
  int v76; // w19
  __int64 v77; // x25
  __int64 v78; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **p_campaiginListPerSelectSvt; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  _BOOL8 v87; // x0
  __int64 v88; // x1
  EventCampaignEntity_o *v89; // x22
  _BOOL8 v90; // x0
  __int64 v91; // x1
  Il2CppObject *v92; // x23
  Il2CppClass *v93; // x8
  _DWORD *data; // x10
  int32_t target; // w9
  _DWORD *v96; // x9
  _DWORD *v97; // x9
  _DWORD *v98; // x8
  EventCampaignEntity_o *v99; // x0
  __int64 v100; // x8
  char v101; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v102; // x23
  __int64 v103; // x0
  __int64 v104; // x1
  EventCampaignEntity_o *v105; // x0
  __int64 v106; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  EventCampaignEntity_o *v110; // x0
  __int64 v111; // x1
  Il2CppObject *v112; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v113; // x23
  __int64 v114; // x0
  __int64 v115; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v116; // x21
  ServantCombineControl___c_c *v117; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__88_0; // x22
  Il2CppObject *v120; // x23
  struct ServantCombineControl___c_StaticFields *v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  const MethodInfo *v128; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *v130; // x19
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v131; // x8
  MenuListControl_c *v132; // x0
  float v133; // s8
  System_Func_float__float__float__float__o *v134; // x20
  AlphaTransitionCalculator_o *v135; // x21
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  __int64 v142; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v143; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v144; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_List_Enumerator_T__o v145[2]; // [xsp+28h] [xbp-E8h] BYREF
  int v146; // [xsp+58h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v148; // [xsp+80h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A0h] [xbp-70h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16

  if ( (byte_4189EA5 & 1) == 0 )
  {
    sub_B2C35C(&AlphaTransitionCalculator_TypeInfo, usrSvtData);
    sub_B2C35C(&Method_System_Array_IndexOf_int___, v10);
    sub_B2C35C(&BalanceConfig_TypeInfo, v11);
    sub_B2C35C(&Method_System_Comparison_EventCampaignEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Comparison_List_EventCampaignEntity____ctor__, v13);
    sub_B2C35C(&System_Comparison_EventCampaignEntity__TypeInfo, v14);
    sub_B2C35C(&System_Comparison_List_EventCampaignEntity___TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v34);
    sub_B2C35C(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v35);
    sub_B2C35C(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v36);
    sub_B2C35C(&MenuListControl_TypeInfo, v37);
    sub_B2C35C(&NetworkManager_TypeInfo, v38);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B2C35C(&Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__, v40);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_B2C35C(&Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__, v42);
    sub_B2C35C(&ServantCombineControl___c_TypeInfo, v43);
    sub_B2C35C(&StringLiteral_1/*""*/, v44);
    byte_4189EA5 = 1;
  }
  p_baseData = &this->fields.baseData;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  memset(&v148, 0, sizeof(v148));
  memset(&v147, 0, sizeof(v147));
  v146 = 0;
  this->fields.baseData = usrSvtData;
  sub_B2C2F8(
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
    v51 = secondMaxAdjustAtk[1];
  else
    v51 = maxAjustAtk[1];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41609428(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * adjustHp,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * v51,
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
    v54 = secondMaxAdjustAtk[0];
  else
    v54 = maxAjustAtk[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41609428(
    currentAdjustAtkIconLabel,
    45,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * adjustAtk,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * v54,
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
  ServantCombineControl__CheckConductionWire(this, v55);
  combineInfoComp = (struct CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)combineInfoComp,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !combineInfoComp )
    goto LABEL_165;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)combineInfoComp, 0LL);
  if ( !CombineEventCampaigns )
    goto LABEL_151;
  v144 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v144,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v143 = CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v145,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v148 = v145[0];
LABEL_27:
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v148,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v57 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v148.fields.current;
    if ( !v148.fields.current )
      sub_B2C434(v57, v58);
    klass_high = HIDWORD(v148.fields.current[1].klass);
    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000034LL) != 0 )
    {
      EventMaster = ServantCombineControl__get_EventMaster(this, v58);
      if ( !EventMaster )
        sub_B2C434(0LL, v62);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)EventMaster,
                 current->fields.missionTargetId,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_B2C434(0LL, v64);
      v65 = *(_QWORD *)&Entity->fields.eventId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( v65 >= Time )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B2C434(Time, v67);
        namespaze = klass->_1.namespaze;
        missionConditionDetailId = current->fields.missionConditionDetailId;
        if ( namespaze )
        {
          if ( (unsigned int)(missionConditionDetailId - 32) >= 2 )
          {
            if ( missionConditionDetailId == 27 )
            {
              if ( !usrSvtData )
                sub_B2C434(Time, v67);
              if ( UserServantEntity__IsExchangeSvt(usrSvtData, 0LL) )
              {
                if ( !v144 )
                  sub_B2C434(0LL, v74);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v144,
                  current,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                break;
              }
            }
            else if ( (int)namespaze >= 1 )
            {
              v75 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v75 >= (unsigned int)namespaze )
                {
                  v142 = sub_B2C460(Time);
                  sub_B2C400(v142, 0LL);
                }
                if ( !usrSvtData )
                  sub_B2C434(Time, v67);
                v76 = *((_DWORD *)&klass->_1.byval_arg.data + v75);
                v78 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
                v77 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v151.fields.currentCryptoKey = v78;
                *(_QWORD *)&v151.fields.fakeValue = v77;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v151, 0LL);
                if ( v76 == (_DWORD)Time )
                  break;
                LODWORD(namespaze) = klass->_1.namespaze;
                if ( (int)++v75 >= (int)namespaze )
                  goto LABEL_27;
              }
              v73 = v144;
              if ( !v144 )
                sub_B2C434(0LL, v67);
LABEL_62:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v73,
                current,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            }
          }
          else
          {
            if ( !usrSvtData )
              sub_B2C434(Time, v67);
            SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0LL);
            if ( (System_Array__IndexOf_int_(
                    (System_Int32_array *)klass,
                    SvtClassId,
                    (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              v73 = v144;
              if ( !v144 )
                sub_B2C434(0LL, v72);
              goto LABEL_62;
            }
          }
        }
        else if ( (missionConditionDetailId & 0xFFFFFFFE) == 4 )
        {
          v73 = v144;
          if ( !v144 )
            sub_B2C434(0LL, v67);
          goto LABEL_62;
        }
      }
    }
  }
  *((_DWORD *)&v145[1].fields.list + v146++) = 602;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v148,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v146 && *((_DWORD *)&v145[0].fields.current + v146 + 1) == 602 )
    --v146;
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  p_campaiginListPerSelectSvt = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)v79;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt,
    (System_Int32_array **)v79,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  combineInfoComp = (struct CombineInfoComponent_o *)v144;
  if ( !v144 )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v145,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v144,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v148 = v145[0];
  while ( 1 )
  {
    v87 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v148,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v87 )
      break;
    if ( !*p_campaiginListPerSelectSvt )
      sub_B2C434(v87, v88);
    v89 = (EventCampaignEntity_o *)v148.fields.current;
    if ( (*p_campaiginListPerSelectSvt)->fields._size <= 0 )
    {
      v102 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v102,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v89 )
        sub_B2C434(v103, v104);
      v105 = EventCampaignEntity__Clone(v89, 0LL);
      if ( !v102 )
        sub_B2C434(v105, v105);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v102,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      v107 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_B2C434(0LL, v106);
LABEL_107:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v107,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v102,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
    else
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v145,
        *p_campaiginListPerSelectSvt,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v147 = v145[0];
      while ( 1 )
      {
        v90 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v147,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v90 )
          break;
        if ( !v89 )
          sub_B2C434(v90, v91);
        v92 = v147.fields.current;
        if ( !v147.fields.current )
          sub_B2C434(v90, v91);
        if ( !LODWORD(v147.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v93 = v147.fields.current[1].klass;
        data = v93->_1.byval_arg.data;
        if ( !data )
          sub_B2C434(v90, v91);
        if ( v89->fields.target == data[5] )
        {
LABEL_103:
          v99 = EventCampaignEntity__Clone(v89, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v92,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          v100 = v146;
          v101 = 1;
          goto LABEL_109;
        }
        target = v89->fields.target;
        if ( target == 4 )
        {
          if ( !LODWORD(v147.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( data[5] == 32 )
            goto LABEL_103;
          target = v89->fields.target;
        }
        if ( target == 32 )
        {
          if ( !LODWORD(v147.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v96 = v93->_1.byval_arg.data;
          if ( !v96 )
            sub_B2C434(v90, v91);
          if ( v96[5] == 4 )
            goto LABEL_103;
          target = v89->fields.target;
        }
        if ( target == 5 )
        {
          if ( !LODWORD(v147.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v97 = v93->_1.byval_arg.data;
          if ( !v97 )
            sub_B2C434(v90, v91);
          if ( v97[5] == 33 )
            goto LABEL_103;
          target = v89->fields.target;
        }
        if ( target == 33 )
        {
          if ( !LODWORD(v147.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v98 = v93->_1.byval_arg.data;
          if ( !v98 )
            sub_B2C434(v90, v91);
          if ( v98[5] == 5 )
            goto LABEL_103;
        }
      }
      v100 = v146;
      v101 = 0;
LABEL_109:
      *((_DWORD *)&v145[1].fields.list + v100) = 896;
      ++v146;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v147,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v146 && *((_DWORD *)&v145[0].fields.current + v146 + 1) == 896 )
        --v146;
      if ( (v101 & 1) == 0 )
      {
        v102 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v102,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !v89 )
          sub_B2C434(v108, v109);
        v110 = EventCampaignEntity__Clone(v89, 0LL);
        if ( !v102 )
          sub_B2C434(v110, v110);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v102,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v110,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        v107 = *p_campaiginListPerSelectSvt;
        if ( !*p_campaiginListPerSelectSvt )
          sub_B2C434(0LL, v111);
        goto LABEL_107;
      }
    }
  }
  *((_DWORD *)&v145[1].fields.list + v146++) = 962;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v148,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v146 && *((_DWORD *)&v145[0].fields.current + v146 + 1) == 962 )
    --v146;
  combineInfoComp = (struct CombineInfoComponent_o *)*p_campaiginListPerSelectSvt;
  if ( !*p_campaiginListPerSelectSvt )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v145,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineInfoComp,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v147 = v145[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v147,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
  {
    v112 = v147.fields.current;
    v113 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v113,
      (Il2CppObject *)this,
      Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventCampaignEntity___ctor__);
    if ( !v112 )
      sub_B2C434(v114, v115);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v112,
      (System_Comparison_T__o *)v113,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  }
  *((_DWORD *)&v145[1].fields.list + v146++) = 1026;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v147,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  CombineEventCampaigns = v143;
  if ( v146 && *((_DWORD *)&v145[0].fields.current + v146 + 1) == 1026 )
    --v146;
  v116 = *p_campaiginListPerSelectSvt;
  if ( !v116 )
    goto LABEL_165;
  if ( v116->fields._size < 1 )
    goto LABEL_151;
  v117 = ServantCombineControl___c_TypeInfo;
  if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v117 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v117->static_fields;
  _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( (BYTE3(v117->vtable._0_Equals.methodPtr) & 4) != 0 && !v117->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v117);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v120 = (Il2CppObject *)static_fields->__9;
    _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_List_EventCampaignEntity___TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__88_0,
      v120,
      Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_List_EventCampaignEntity____ctor__);
    v121 = ServantCombineControl___c_TypeInfo->static_fields;
    v121->__9__88_0 = (struct System_Comparison_List_EventCampaignEntity___o *)_9__88_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v121->__9__88_0,
      (System_Int32_array **)_9__88_0,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v116,
    (System_Comparison_T__o *)_9__88_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
  campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !campaiginListPerSelectSvt )
    goto LABEL_165;
  if ( !campaiginListPerSelectSvt->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v130 = campaiginListPerSelectSvt->fields._items->m_Items[0];
  if ( !v130 )
    goto LABEL_165;
  if ( !v130->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  ServantCombineControl__SetupCampaign(this, v130->fields._items->m_Items[0], v128);
LABEL_151:
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaign;
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)combineInfoComp,
                                                       0LL);
  if ( CombineEventCampaigns )
  {
    v131 = this->fields.campaiginListPerSelectSvt;
    if ( !v131 )
      goto LABEL_165;
    v47 = v131->fields._size > 0;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  else
  {
    v47 = 0LL;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v47, 0LL);
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
  v135 = (AlphaTransitionCalculator_o *)sub_B2C42C(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v135, v133, v134, 0LL);
  this->fields.campaignAlphaCalculator = v135;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.campaignAlphaCalculator,
    (System_Int32_array **)v135,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_165:
    sub_B2C434(combineInfoComp, v47);
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
  System_String_o *checkLv; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct System_Int64_array *v41; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v43; // x20
  struct UserServantEntity_o *baseData; // x8
  __int64 v45; // x22
  __int64 v46; // x23
  System_Collections_Generic_List_long__o *v47; // x24
  unsigned __int64 v48; // x25
  struct System_Int64_array *v49; // x8
  int64_t v50; // x26
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v53; // x27
  UnityEngine_Transform_o *v54; // x22
  int v55; // s0
  SetCombineData_o *v58; // x23
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v60; // x27
  MaterialSvtInfo_o *v61; // x28
  MaterialSvtInfo_ClickDelegate_o *v62; // x22
  UserServantEntity_o *Entity; // x27
  ServantLimitMaster_o *v64; // x28
  __int64 v65; // x21
  __int64 v66; // x22
  int32_t v67; // w21
  struct System_Int64_array *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct System_Int64_array *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v86; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v87; // x23
  __int64 v88; // x21
  __int64 v89; // x22
  int32_t monitor_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v92; // x2
  int32_t v93; // w23
  struct UserServantEntity_o *v94; // x8
  UILabel_o *currentLvLb; // x21
  UILabel_o *increLvLb; // x21
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v99; // x21
  Il2CppObject *v100; // x0
  UserServantEntity_o *v101; // x8
  __int64 v102; // x21
  __int64 v103; // x22
  int32_t v104; // w24
  __int64 v105; // x22
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  UserServantEntity_o *v112; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v114; // x8
  WebViewObject_o *Component_WebViewObject; // x22
  int v116; // s0
  WebViewObject_o *v120; // x22
  int v121; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v126; // x0
  int v127; // w9
  int32_t v128; // w22
  int32_t StatusUpAdjustHp; // w8
  int v130; // w21
  int getHpAdjustVal; // w23
  int32_t v132; // w22
  int32_t v133; // w22
  int32_t v134; // w23
  int32_t v135; // w1
  BalanceConfig_c *v136; // x0
  int32_t adjustAtk; // w21
  int v138; // w9
  int32_t v139; // w24
  int32_t StatusUpAdjustAtk; // w8
  int v141; // w21
  int getAtkAdjustVal; // w23
  int32_t v143; // w24
  int32_t v144; // w20
  int32_t v145; // w21
  int32_t v146; // w1
  UIWidget_o *v147; // x20
  int v148; // s0
  const MethodInfo *v152; // x1
  int v153; // s0
  __int64 v157; // x0
  int32_t targetLimitCnt; // [xsp+14h] [xbp-ACh]
  UserServantEntity_o **p_baseData; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_long__o *v160; // [xsp+20h] [xbp-A0h]
  int32_t increAmount; // [xsp+28h] [xbp-98h] BYREF
  int32_t v162; // [xsp+2Ch] [xbp-94h] BYREF
  __int64 v163; // [xsp+30h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+38h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+40h] [xbp-80h] BYREF
  __int64 lateExp; // [xsp+48h] [xbp-78h] BYREF
  System_String_array *skillNameList; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4189EA9 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, data);
    sub_B2C35C(&MaterialSvtInfo_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_CombineMenuControl_OnClickMaterial__, v6);
    sub_B2C35C(&CombineSvtData_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v23);
    sub_B2C35C(&StringLiteral_7270/*"INCREMENT_SVTLEVEL"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_4189EA9 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  skillNameList = 0LL;
  idList = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  lateExp = 0LL;
  v163 = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v162 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v3 )
    goto LABEL_140;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (System_Int32_array **)materialUsrSvtIdList,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v41 = v3->fields.materialUsrSvtIdList;
  if ( !v41 )
    goto LABEL_140;
  baseSvtData = v3->fields.baseSvtData;
  v43 = *(_QWORD *)&v41->max_length;
  this->fields.baseData = baseSvtData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)baseSvtData,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_140;
  v46 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v45 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v170.fields.currentCryptoKey = v46;
  *(_QWORD *)&v170.fields.fakeValue = v45;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v170, 0LL);
  v47 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v47,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v160 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v160,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v43 >= 1 )
  {
    conductionWireInfo = this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v48 = 0LL;
    do
    {
      v49 = v3->fields.materialUsrSvtIdList;
      if ( !v49 )
        goto LABEL_140;
      if ( v48 >= v49->max_length )
        goto LABEL_141;
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_140;
      v50 = v49->m_Items[v48];
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
      v53 = conductionWireInfo;
      v54 = UnityEngine_GameObject__get_transform(conductionWireInfo, 0LL);
      *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v54 )
        goto LABEL_140;
      v58 = v3;
      UnityEngine_Transform__set_localPosition(v54, *(UnityEngine_Vector3_o *)&v55, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v53, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v174.fields.x = 0.5;
      v174.fields.y = 0.5;
      v174.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v174, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v53,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v60 = this->fields.baseData;
      v61 = (MaterialSvtInfo_o *)Component_srcLineSprite;
      v62 = (MaterialSvtInfo_ClickDelegate_o *)sub_B2C42C(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(v62, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
      if ( !v61 )
        goto LABEL_140;
      MaterialSvtInfo__setMaterialSvtInfo(v61, v48, v60, v50, 1, 0, v62, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_140;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)conductionWireInfo,
                 v50,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_140;
      v64 = (ServantLimitMaster_o *)conductionWireInfo;
      v65 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v66 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v171.fields.currentCryptoKey = v65;
      *(_QWORD *)&v171.fields.fakeValue = v66;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v171, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                         Entity->fields.limitCount,
                                                         0LL);
      if ( !v64 )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)ServantLimitMaster__GetEntity(
                                                         v64,
                                                         v67,
                                                         (int32_t)conductionWireInfo,
                                                         0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v3 = v58;
      if ( SLODWORD(conductionWireInfo[1].klass) >= 4 )
      {
        if ( !v47 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v47,
          v50,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( UserServantEntity__isExceeded(Entity, 0LL) )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)v160;
        if ( !v160 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v160,
          v50,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsExchangeSvt(Entity, 0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      ++v48;
    }
    while ( (__int64)v48 < (int)v43 );
    if ( !v47 )
      goto LABEL_140;
    v68 = System_Collections_Generic_List_long___ToArray(
            v47,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v68;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.highRarityList,
      (System_Int32_array **)v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    conductionWireInfo = (UnityEngine_GameObject_o *)v160;
    if ( !v160 )
      goto LABEL_140;
    v75 = System_Collections_Generic_List_long___ToArray(
            v160,
            (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v75;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.exceededCheckList,
      (System_Int32_array **)v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v58->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v162 = spendQp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_38381416(
                                                       (int32_t)&v162,
                                                       (System_String_o *)StringLiteral_9266/*"N0"*/,
                                                       0LL);
    if ( !qpLb )
      goto LABEL_140;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v58->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v162 = getExp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v162, 0LL);
    if ( !expLb )
      goto LABEL_140;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v86 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v87 = (DataMasterBase_WarMaster__WarEntity__int__o *)conductionWireInfo;
    v88 = *(_QWORD *)&v86->fields.svtId.fields.currentCryptoKey;
    v89 = *(_QWORD *)&v86->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v172.fields.currentCryptoKey = v88;
    *(_QWORD *)&v172.fields.fakeValue = v89;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                       v172,
                                                       0LL);
    if ( !v87 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v87,
                                                       (int32_t)conductionWireInfo,
                                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v93 = LevelMax;
    if ( (_DWORD)checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, (int32_t)checkLv, v92) )
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
    v94 = this->fields.baseData;
    if ( !v94 )
      goto LABEL_140;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v94 + 256, 0LL);
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
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_7270/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    conductionWireInfo = (UnityEngine_GameObject_o *)System_String__Format(v99, v100, 0LL);
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
        v157 = sub_B2C460(conductionWireInfo);
        sub_B2C400(v157, 0LL);
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
    v101 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v102 = *(_QWORD *)&v101->fields.limitCount.fields.currentCryptoKey;
    v103 = *(_QWORD *)&v101->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v173.fields.currentCryptoKey = v102;
    *(_QWORD *)&v173.fields.fakeValue = v103;
    v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v173, 0LL);
    v105 = sub_B2C42C(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v105, 0LL);
    if ( !v105 )
      goto LABEL_140;
    v112 = *p_baseData;
    *(_QWORD *)(v105 + 16) = *p_baseData;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v105 + 16),
      (System_Int32_array **)v112,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    increLv = this->fields.increLv;
    *(_DWORD *)(v105 + 32) = v93;
    *(_DWORD *)(v105 + 24) = increLv;
    *(_DWORD *)(v105 + 28) = v104;
    v114 = this->fields.baseData;
    if ( !v114 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp + 1,
      (int32_t *)&lateExp,
      this->fields.totalExp,
      v114->fields.lv,
      v93,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v105 + 36) = HIDWORD(lateExp);
    *(_DWORD *)(v105 + 40) = lateExp;
    *(_DWORD *)(v105 + 44) = afterAtk[1];
    *(_DWORD *)(v105 + 48) = v3->fields.getHpAdjustVal;
    *(_DWORD *)(v105 + 52) = afterAtk[0];
    *(_DWORD *)(v105 + 56) = v3->fields.getAtkAdjustVal;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v105,
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
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v116 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v116, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v120 = UnityEngine_Component__GetComponent_WebViewObject_(
             (UnityEngine_Component_o *)conductionWireInfo,
             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v121 = UnityEngine_Color__get_white(0LL);
    if ( !v120 )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)v120, *(UnityEngine_Color_o *)&v121, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v126 = BalanceConfig_TypeInfo;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v126 = BalanceConfig_TypeInfo;
      }
      v127 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v127 = 0;
    }
    v128 = maxAjustAtk[1];
    StatusUpAdjustHp = v126->static_fields->StatusUpAdjustHp;
    v130 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v163) = v130;
    getHpAdjustVal = v3->fields.getHpAdjustVal;
    if ( v127 && !v126->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v126);
      v126 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v130 >= StatusUpAdjustHp * v128 )
    {
      v132 = secondMaxAdjustAtk[1];
      if ( (BYTE3(v126->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    else
    {
      v132 = maxAjustAtk[1];
      if ( (BYTE3(v126->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    if ( !v126->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v126);
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
LABEL_102:
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
    v133 = StatusUpAdjustHp * v132;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v134 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v130;
    UIIconLabel__Set_41609428((UIIconLabel_o *)conductionWireInfo, 44, v134, v133, 0, 0LL, 0, 0, 0, 0LL);
    if ( !System_Int32__Equals_38381340((int32_t)&v163 + 4, v134, 0LL) )
    {
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
      if ( !conductionWireInfo )
        goto LABEL_140;
      if ( v134 >= v133 )
        v135 = v133;
      else
        v135 = v134;
      UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v135, v133, v134 >= v133, 0LL);
    }
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpMaxLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    v136 = BalanceConfig_TypeInfo;
    adjustAtk = (*p_baseData)->fields.adjustAtk;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v136 = BalanceConfig_TypeInfo;
      }
      v138 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v138 = 0;
    }
    v139 = maxAjustAtk[0];
    StatusUpAdjustAtk = v136->static_fields->StatusUpAdjustAtk;
    v141 = StatusUpAdjustAtk * adjustAtk;
    LODWORD(v163) = v141;
    getAtkAdjustVal = v3->fields.getAtkAdjustVal;
    if ( v138 && !v136->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v136);
      v136 = BalanceConfig_TypeInfo;
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    if ( v141 >= StatusUpAdjustAtk * v139 )
    {
      v143 = secondMaxAdjustAtk[0];
      if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_125:
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
        v144 = StatusUpAdjustAtk * v143;
        if ( !conductionWireInfo )
          goto LABEL_140;
        v145 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v141;
        UIIconLabel__Set_41609428((UIIconLabel_o *)conductionWireInfo, 45, v145, v144, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_38381340((int32_t)&v163, v145, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_140;
          if ( v145 >= v144 )
            v146 = v144;
          else
            v146 = v145;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v146, v144, v145 >= v144, 0LL);
        }
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkMaxLabel;
        if ( conductionWireInfo )
        {
          UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v147 = (UIWidget_o *)this->fields.qpLb;
          if ( this->fields.haveQpVal >= this->fields._spendQpVal_k__BackingField )
          {
            *(UnityEngine_Color_o *)&v153 = UnityEngine_Color__get_white(0LL);
            if ( v147 )
            {
              UIWidget__set_color(v147, *(UnityEngine_Color_o *)&v153, 0LL);
              this->fields._IsExeCombine_k__BackingField = 1;
              goto LABEL_138;
            }
          }
          else
          {
            *(UnityEngine_Color_o *)&v148 = UnityEngine_Color__get_red(0LL);
            if ( v147 )
            {
              UIWidget__set_color(v147, *(UnityEngine_Color_o *)&v148, 0LL);
              this->fields._IsExeCombine_k__BackingField = 0;
LABEL_138:
              ServantCombineControl__SetExeBtnState(this, v152);
              return;
            }
          }
        }
LABEL_140:
        sub_B2C434(conductionWireInfo, checkLv);
      }
    }
    else
    {
      v143 = maxAjustAtk[0];
      if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_125;
    }
    if ( !v136->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v136);
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    goto LABEL_125;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_29218208(
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
  __int64 v27; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WarQuestSelectionMaster_o *v29; // x21
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x25
  float v32; // s0
  float v33; // s8
  float v34; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v36; // x25
  __int64 v37; // x26
  float v38; // s9
  WarEntity_o *Entity; // x26
  UserServantEntity_o *v40; // x27
  int32_t SvtClassId; // w0
  int size; // w25
  __int64 v43; // x22
  int v44; // w21
  int v45; // w23
  unsigned int v46; // w8
  const MethodInfo *v47; // x3
  struct UserServantEntity_o *v48; // x8
  System_Collections_Generic_List_UserServantEntity__o *v49; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x28
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v53; // w0
  int64_t v54; // x27
  CombineMaterialEntity_o *v55; // x26
  int v56; // w8
  int value; // w26
  BalanceConfig_c *v58; // x0
  ServantCombineControl_c *v59; // x8
  int SameClassExp; // w27
  float FIXED_VAL; // s11
  double v62; // d0
  int v63; // w27
  int v64; // w27
  int32_t CombineQp; // w0
  int v66; // w26
  __int64 v67; // x23
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  int32_t v75; // w8
  bool isAdjustAtkMax; // w8
  bool isSecondAdjustAtkMax; // w8
  System_Collections_Generic_List_long__o *v78; // x20
  int v79; // w21
  __int64 v80; // x22
  unsigned int v81; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v82; // x8
  __int128 v83; // q0
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  int v92; // [xsp+4h] [xbp-DCh]
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // [xsp+8h] [xbp-D8h]
  int32_t expType; // [xsp+14h] [xbp-CCh]
  int64_t v95; // [xsp+18h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v96; // [xsp+20h] [xbp-C0h]
  CombineMaterialMaster_o *v97; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+50h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  v3 = targetMaterialList;
  if ( (byte_4189EB7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, targetMaterialList);
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18);
    sub_B2C35C(&System_Math_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B2C35C(&ServantCombineControl_TypeInfo, v22);
    sub_B2C35C(&SetCombineData_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4189EB7 = 1;
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v29 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_89;
  v96 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  combineEventList = menuListCtr->fields.combineEventList;
  v32 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  v33 = v32;
  v97 = (CombineMaterialMaster_o *)v29;
  v34 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_89;
  v37 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v38 = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v100.fields.currentCryptoKey = v37;
  *(_QWORD *)&v100.fields.fakeValue = v36;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v100, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_89;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_89;
  v40 = this->fields.baseData;
  v95 = Instance;
  if ( !v40 )
    goto LABEL_89;
  expType = HIDWORD(Entity[1].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v40, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v40, SvtClassId, 0LL);
  v92 = Instance;
  if ( !v3 )
    goto LABEL_89;
  size = v3->fields._size;
  if ( size < 1 )
  {
    v45 = 0;
    v44 = 0;
  }
  else
  {
    v93 = MasterData_WarQuestSelectionMaster;
    v43 = 0LL;
    v44 = 0;
    v45 = 0;
    v46 = v3->fields._size;
    while ( 1 )
    {
      if ( v46 <= (unsigned int)v43 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v49 = v3;
      v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)v3->fields._items->m_Items[v43];
      if ( !v50 )
        goto LABEL_89;
      klass = v50[2].klass;
      monitor = v50[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v101.fields.currentCryptoKey = klass;
      *(_QWORD *)&v101.fields.fakeValue = monitor;
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v101, 0LL);
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v93,
                            v53,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_89;
      v54 = Instance;
      Instance = (int64_t)v97;
      if ( !v97 )
        goto LABEL_89;
      v55 = CombineMaterialMaster__GetEntity(v97, *(_DWORD *)(v54 + 136), v50[6].fields.missionTargetId, 0LL);
      Instance = (int64_t)v96;
      if ( !v96 )
        goto LABEL_89;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v96,
                            *(_DWORD *)(v54 + 80),
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v55 || !Instance )
        goto LABEL_89;
      v56 = *(_DWORD *)(Instance + 52);
      value = v55->fields.value;
      if ( v56 == 3 )
        goto LABEL_40;
      if ( v56 == v92 )
      {
        Instance = (int64_t)this->fields.baseData;
        if ( !Instance )
          goto LABEL_89;
        v63 = *(_DWORD *)(v54 + 80);
        if ( v63 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL) )
        {
LABEL_40:
          v58 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v58 = BalanceConfig_TypeInfo;
          }
          v59 = ServantCombineControl_TypeInfo;
          SameClassExp = v58->static_fields->SameClassExp;
          if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v59 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v59->static_fields->FIXED_VAL;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v62 = ceil((double)value * (double)SameClassExp / FIXED_VAL);
          if ( v62 == INFINITY )
            v62 = -INFINITY;
          value = (int)v62;
        }
      }
      Instance = UnityEngine_Mathf__CeilToInt(v33 * (float)value, 0LL);
      if ( !this->fields.baseData )
        goto LABEL_89;
      v64 = Instance;
      CombineQp = UserServantEntity__getCombineQp(this->fields.baseData, 0LL);
      Instance = UnityEngine_Mathf__CeilToInt(v38 * (float)CombineQp, 0LL);
      if ( !v95 )
        goto LABEL_89;
      v66 = Instance + v45;
      if ( (int)Instance + v45 > *(_DWORD *)(v95 + 96) )
        break;
      if ( !v25 )
        goto LABEL_89;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        v50,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      v48 = this->fields.baseData;
      if ( !v48 )
        goto LABEL_89;
      v44 += v64;
      if ( ServantCombineControl__IsLevelMax(this, v48->fields.exp + v44, expType, v47) )
        goto LABEL_61;
      v3 = v49;
      Instance = (int64_t)ServantCombineControl_TypeInfo;
      if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        Instance = (int64_t)ServantCombineControl_TypeInfo;
      }
      if ( (_DWORD)v43 == *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL) - 1 || (int)v43 + 1 >= size )
        goto LABEL_61;
      v46 = v49->fields._size;
      ++v43;
      v45 = v66;
    }
    this->fields.isQpCondClear = 0;
  }
  v66 = v45;
  if ( !v25 )
    return 0LL;
LABEL_61:
  if ( v25->fields._size < 1 )
    return 0LL;
  v67 = sub_B2C42C(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v67, 0LL);
  if ( !v67 )
    goto LABEL_89;
  v74 = (System_Int32_array **)this->fields.baseData;
  *(_QWORD *)(v67 + 16) = v74;
  sub_B2C2F8((BattleServantConfConponent_o *)(v67 + 16), v74, v68, v69, v70, v71, v72, v73);
  v75 = v25->fields._size;
  *(_DWORD *)(v67 + 28) = v66;
  *(_DWORD *)(v67 + 32) = v44;
  *(_QWORD *)(v67 + 48) = 0LL;
  *(_DWORD *)(v67 + 24) = v75;
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
  *(_BYTE *)(v67 + 44) = isAdjustAtkMax;
  Instance = (int64_t)this->fields.baseData;
  if ( !Instance )
LABEL_89:
    sub_B2C434(Instance, v27);
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
  *(_BYTE *)(v67 + 45) = isSecondAdjustAtkMax;
  v78 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v78,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v79 = v25->fields._size;
  if ( v79 >= 1 )
  {
    v80 = 0LL;
    v81 = v25->fields._size;
    while ( 1 )
    {
      if ( v81 <= (unsigned int)v80 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v82 = v25->fields._items->m_Items[v80];
      if ( !v82 )
        goto LABEL_89;
      v83 = *(_OWORD *)&v82->fields.addCount;
      *(_OWORD *)&v99.fields.currentCryptoKey = *(_OWORD *)&v82->fields.missionTargetId;
      *(_OWORD *)&v99.fields.fakeValue = v83;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v98 = v99;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v98, 0LL);
      if ( !v78 )
        goto LABEL_89;
      System_Collections_Generic_List_long___Add(
        v78,
        Instance,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (int)v80 + 1 >= v79 )
        goto LABEL_87;
      v81 = v25->fields._size;
      ++v80;
    }
  }
  if ( !v78 )
    goto LABEL_89;
LABEL_87:
  v84 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                 v78,
                                 (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  *(_QWORD *)(v67 + 56) = v84;
  sub_B2C2F8((BattleServantConfConponent_o *)(v67 + 56), v84, v85, v86, v87, v88, v89, v90);
  return (SetCombineData_o *)v67;
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
    sub_B2C434(0LL, v4);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantLimitImageMaster_o *v12; // x22
  int32_t ServantImageLimitSealAfter; // w0
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v15; // w21
  ServantCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_25402508; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_4189EA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (ServantCombineControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189EA8 = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
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
    TexturePrefab_25402508 = (System_Int32_array **)CharaGraphManager__CreateTexturePrefab_25402508(
                                                      v4->fields.charaGraphBase,
                                                      usrSvtData,
                                                      v15,
                                                      10,
                                                      0LL,
                                                      0,
                                                      0LL);
    v4->fields.charaGraph = (struct UICharaGraphTexture_o *)TexturePrefab_25402508;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.charaGraph,
      TexturePrefab_25402508,
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
    sub_B2C434(this, usrSvtData);
  UICharaGraphTexture__SetCharacter_35719956((UICharaGraphTexture_o *)this, usrSvtData, v15, 0LL, 0, 0LL);
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

  if ( (byte_4189EB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4189EB0 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_B2C434(combineBtnBg, method);
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
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4189EA3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, method);
    byte_4189EA3 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_38381416((int)this + 476, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B2C434(SelfUserGame, v4);
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
    sub_B2C434(this, isEnabled);
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
    sub_B2C434(0LL, v5);
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
  System_String_o *v37; // x20
  ServantCombineControl___c_c *v38; // x8
  struct ServantCombineControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__107_1; // x22
  System_String_o *v41; // x21
  Il2CppObject *v42; // x23
  struct ServantCombineControl___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w8
  CommonUI_o *v51; // x0
  System_String_o *v52; // x1
  System_String_o *v53; // x2
  CommonUI_o *Instance; // x19
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  CommonConfirmDialog_ClickDelegate_o *v58; // x24
  System_String_o *v59; // x21

  if ( (byte_4189EB4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, v6);
    sub_B2C35C(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__, v7);
    sub_B2C35C(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__, v8);
    sub_B2C35C(&ServantCombineControl___c__DisplayClass107_0_TypeInfo, v9);
    sub_B2C35C(&ServantCombineControl___c_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_11058/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, v11);
    sub_B2C35C(&StringLiteral_11057/*"RECOMMENDED_NOT_HAVE_QP"*/, v12);
    sub_B2C35C(&StringLiteral_11056/*"RECOMMENDED_NOT_EXIST_MSG"*/, v13);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v14);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    byte_4189EB4 = 1;
  }
  v17 = sub_B2C42C(ServantCombineControl___c__DisplayClass107_0_TypeInfo);
  ServantCombineControl___c__DisplayClass107_0___ctor((ServantCombineControl___c__DisplayClass107_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_33;
  *(_QWORD *)(v17 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = (System_Int32_array **)ServantCombineControl__GetRecommendedCombineData(this, v26);
  *(_QWORD *)(v17 + 24) = RecommendedCombineData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 24), RecommendedCombineData, v28, v29, v30, v31, v32, v33);
  isQpCondClear = this->fields.isQpCondClear;
  if ( *(_QWORD *)(v17 + 24) )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
        ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v17 + 24), v35);
        return;
      }
LABEL_33:
      sub_B2C434(recommendedConfigDialog, v19);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11058/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v58,
      (Il2CppObject *)v17,
      Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__OpenConfirmDialog_17970624(Instance, (System_String_o *)StringLiteral_1/*""*/, v55, v56, v57, v58, 0, 0, 0, 0LL);
  }
  else
  {
    v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( isQpCondClear )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11056/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                0LL);
      v37 = (System_String_o *)recommendedConfigDialog;
      v38 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v38 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v38->static_fields;
      _9__107_1 = static_fields->__9__107_1;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__107_1 )
      {
        if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v42 = (Il2CppObject *)static_fields->__9;
        _9__107_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__107_1, v42, Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, 0LL);
        v43 = ServantCombineControl___c_TypeInfo->static_fields;
        v43->__9__107_1 = _9__107_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v43->__9__107_1,
          (System_Int32_array **)_9__107_1,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      if ( !v36 )
        goto LABEL_33;
      v50 = 25;
      v51 = (CommonUI_o *)v36;
      v52 = v41;
      v53 = v37;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11057/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
      _9__107_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__107_1,
        (Il2CppObject *)v17,
        Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__,
        0LL);
      if ( !v36 )
        goto LABEL_33;
      v51 = (CommonUI_o *)v36;
      v53 = v59;
      v52 = (System_String_o *)StringLiteral_1/*""*/;
      v50 = 28;
    }
    CommonUI__OpenNotificationDialog(v51, v52, v53, _9__107_1, -1, 0, 0, 0, 0, v50, 0, 0, 0LL, 0LL);
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
    sub_B2C434(preSelectBaseLb, method);
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
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v13; // x21
  float v14; // s4
  float v15; // s5
  float v16; // s6
  __int64 *v17; // x8
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4189EB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_7276/*"INFO_MSG_COMBINE_MATERIAL"*/, v6);
    sub_B2C35C(&StringLiteral_7285/*"INFO_MSG_SVTCOMBINE_BASE"*/, v7);
    sub_B2C35C(&StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_B2C35C(&StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4189EB1 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_29;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v19.fields.g = 0.87891;
  v19.fields.b = 0.98828;
  v13 = (UIWidget_o *)Component_WebViewObject;
  v19.fields.r = 0.0;
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  UnityEngine_Color___ctor_40633184(v19, v14, v15, v16, (const MethodInfo *)&v18);
  if ( !v13 )
LABEL_29:
    sub_B2C434(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v13, v18, 0LL);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_7276/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
        v17 = &StringLiteral_5763/*"EXE_SUMMON_COMBINE_TXT"*/;
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
        v17 = &StringLiteral_12215/*"SHORT_QP_INFO_MSG"*/;
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
    v17 = &StringLiteral_7285/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v17, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Instance; // x0
  __int64 v8; // x1
  int v9; // s0
  float v10; // s1
  float v11; // s2
  int32_t target; // w8
  int v13; // s8
  float v14; // s9
  float v15; // s10
  int v16; // w8
  UISprite_o *campaign; // x21
  System_String_o *v18; // x0
  UILabel_o *campaignLabel; // x20
  __int64 v20; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189EA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, eventInfoData);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_19667/*"img_txt_campaign_"*/, v6);
    byte_4189EA6 = 1;
  }
  v20 = 0LL;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !eventInfoData )
LABEL_22:
    sub_B2C434(Instance, v8);
  target = eventInfoData->fields.target;
  v13 = v9;
  v14 = v10;
  v15 = v11;
  if ( target > 5 )
  {
    if ( target != 27 )
    {
      if ( (target & 0xFFFFFFFE) != 32 )
        goto LABEL_13;
      goto LABEL_11;
    }
LABEL_9:
    v13 = 1113849856;
    v16 = 1;
LABEL_12:
    v14 = 4.0;
    v15 = 0.0;
    HIDWORD(v20) = v16;
    goto LABEL_13;
  }
  if ( target == 2 )
    goto LABEL_9;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_11:
    v13 = 1119748096;
    v16 = 2;
    goto LABEL_12;
  }
LABEL_13:
  campaign = this->fields.campaign;
  v18 = System_Int32__ToString((int32_t)&v20 + 4, 0LL);
  Instance = System_String__Concat_44305532((System_String_o *)StringLiteral_19667/*"img_txt_campaign_"*/, v18, 0LL);
  if ( !campaign )
    goto LABEL_22;
  UISprite__set_spriteName(campaign, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaign;
  if ( !Instance )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, void *))Instance->klass[1]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[1]._1.interopData);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)EventCampaignMaster__getData(
                                  (EventCampaignMaster_o *)Instance,
                                  eventInfoData->fields.eventId,
                                  0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v20) = SLODWORD(Instance[2].klass) / 1000;
  campaignLabel = this->fields.campaignLabel;
  Instance = System_Int32__ToString((int32_t)&v20, 0LL);
  if ( !campaignLabel )
    goto LABEL_22;
  UILabel__set_text(campaignLabel, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaignLabel;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v21.fields.x) = v13;
  v21.fields.y = v14;
  v21.fields.z = v15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v21, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1

  if ( (byte_4189EAC & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, v3);
    byte_4189EAC = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !this->fields.exeCombineDlg )
    sub_B2C434(SelfUserGame, v6);
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
  __int64 v9; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int32_t masterLoadThreads; // w21
  unsigned __int64 v12; // x23
  unsigned __int64 max_length; // x9
  int64_t v14; // x22
  bool v15; // w6
  __int64 v16; // x0

  if ( (byte_4189EAB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_4189EAB = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_16;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  masterLoadThreads = (int32_t)SelfUserGame->fields.masterLoadThreads;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v12 >= (int)max_length )
    {
      v15 = 0;
      goto LABEL_19;
    }
    if ( v12 >= max_length )
    {
      v16 = sub_B2C460(SelfUserGame);
      sub_B2C400(v16, 0LL);
    }
    v14 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v12];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      SelfUserGame,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                      v14,
                                      (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v12;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v15 = 1;
LABEL_19:
  SelfUserGame = (DataManager_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B2C434(SelfUserGame, v9);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v7,
    this->fields._spendQpVal_k__BackingField,
    masterLoadThreads,
    v15,
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
  __int64 v13; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_IEnumerator_c *v20; // x8
  unsigned __int64 v21; // x10
  System_Collections_IEnumerator_c **v22; // x11
  __int64 v23; // x0
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x3
  __int64 v31; // x8
  __int64 v32; // x21
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4189EBA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&progress);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v10);
    byte_4189EBA = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 2;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
    }
    else
    {
LABEL_21:
      v23 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v19);
    }
    v24 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                       Enumerator,
                                       *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_61;
    v26 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (UnityEngine_Transform_c *)v24->klass->_2.typeHierarchy[v26 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v24);
LABEL_61:
      sub_B2C434(v24, v25);
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v24,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B2C434(0LL, v28);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  }
  v29 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v29 )
  {
    v31 = *(_QWORD *)v29;
    v32 = v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_33;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_33:
      v35 = sub_AC5258(v29, System_IDisposable_TypeInfo, 0LL, v30);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
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
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
          if ( helpBtn )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_63:
    sub_B2C434(helpBtn, *(_QWORD *)&progress);
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
  __int64 v12; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_IEnumerator_c *v19; // x8
  unsigned __int64 v20; // x10
  System_Collections_IEnumerator_c **v21; // x11
  __int64 v22; // x0
  UnityEngine_Component_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x20
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v36; // x8
  struct SetRarityDialogControl_o *v37; // x8

  if ( (byte_4189EB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v9);
    byte_4189EB9 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_62;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_B2C434(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 2;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1].method;
    }
    else
    {
LABEL_21:
      v22 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v18);
    }
    v23 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                                       Enumerator,
                                       *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_B2C434(0LL, v24);
    v25 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (UnityEngine_Transform_c *)v23->klass->_2.typeHierarchy[v25 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B2C728(v23);
      goto LABEL_62;
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v23,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B2C434(0LL, v27);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
  }
  v28 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v30 = *(_QWORD *)v28;
    v31 = v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_33;
      }
      v34 = v30 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_AC5258(v28, System_IDisposable_TypeInfo, 0LL, v29);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
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
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v36 = this->fields.exeCombineDlg;
  if ( !v36 )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)v36->fields.cancelBtnLb;
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
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn
    || (helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))helpBtn->klass[1]._1.namespaze)(
                                                helpBtn,
                                                1LL,
                                                helpBtn->klass[1]._1.byval_arg.data),
        (v37 = this->fields.exeCombineDlg) == 0LL)
    || (helpBtn = (UnityEngine_GameObject_o *)v37->fields.cancelBtnLb) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                helpBtn,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_62:
    sub_B2C434(helpBtn, method);
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
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v15; // x8
  int size; // w8
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v18; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v19; // x21
  EventCampaignEntity_o *v20; // x8
  int64_t v21; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v22; // x20
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v24; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v25; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v26; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v27; // x20
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v31; // s8
  MenuListControl_c *v32; // x0
  const MethodInfo *v33; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v34; // x21
  __int64 campaiginPerSelectSvtListIndex; // x22
  System_Collections_Generic_List_EventCampaignEntity__o *v36; // x21
  EventCampaignEntity_o *v37; // x8
  int64_t v38; // x20
  const MethodInfo *v39; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v40; // x20
  __int64 v41; // x21
  const MethodInfo *v42; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v43; // x20
  __int64 v44; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v45; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v46; // x20
  __int64 v47; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v48; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v49; // x20
  int32_t v50; // w21
  int32_t v51; // w8
  System_Collections_Generic_List_EventCampaignEntity__o *v52; // x20
  struct AlphaTransitionCalculator_o *v53; // x8

  if ( (byte_4189E9E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v8);
    sub_B2C35C(&MenuListControl_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_TransitionCalculator_float__Update__, v11);
    sub_B2C35C(&Method_TransitionCalculator_float__get_Current__, v12);
    byte_4189E9E = 1;
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
    v15 = this->fields.campaiginListPerSelectSvt;
    if ( v15 )
    {
      size = v15->fields._size;
      if ( size >= 1 )
      {
        if ( size != 1 )
        {
          campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
          if ( !campaignAlphaCalculator )
            return;
          TransitionCalculator_float___Update(
            campaignAlphaCalculator,
            (const MethodInfo_26488C4 *)Method_TransitionCalculator_float__Update__);
          campaign = (int64_t)this->fields.campaignAlphaCalculator;
          if ( !campaign )
            goto LABEL_98;
          if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
          {
            realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
            v31 = realtimeSinceStartup;
            v32 = MenuListControl_TypeInfo;
            if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MenuListControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
              v32 = MenuListControl_TypeInfo;
            }
            if ( (float)(v31 - campaignAlphaAnimTimeOld) >= v32->static_fields->ALPHA_ANIMATION_INTERVAL )
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
              campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v33);
              v34 = this->fields.campaiginListPerSelectSvt;
              if ( !v34 )
                goto LABEL_98;
              campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
              if ( v34->fields._size <= (unsigned int)campaiginPerSelectSvtListIndex )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v36 = v34->fields._items->m_Items[campaiginPerSelectSvtListIndex];
              if ( !v36 )
                goto LABEL_98;
              if ( !v36->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v37 = v36->fields._items->m_Items[0];
              if ( !v37 )
                goto LABEL_98;
              if ( !campaign )
                goto LABEL_98;
              campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                                    v37->fields.eventId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !campaign )
                goto LABEL_98;
              v38 = *(_QWORD *)(campaign + 96);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              campaign = NetworkManager__getTime(0LL);
              if ( v38 < campaign )
              {
                v40 = this->fields.campaiginListPerSelectSvt;
                if ( !v40 )
                  goto LABEL_98;
                v41 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v40->fields._size <= (unsigned int)v41 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                campaign = (int64_t)v40->fields._items->m_Items[v41];
                if ( !campaign )
                  goto LABEL_98;
                System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                  0,
                  (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                v43 = this->fields.campaiginListPerSelectSvt;
                if ( !v43 )
                  goto LABEL_98;
                v44 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v43->fields._size <= (unsigned int)v44 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                v45 = v43->fields._items->m_Items[v44];
                if ( !v45 )
                  goto LABEL_98;
                v46 = this->fields.campaiginListPerSelectSvt;
                if ( !v46 )
                  goto LABEL_98;
                v47 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v45->fields._size <= 0 )
                {
                  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                    v47,
                    (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                }
                else
                {
                  if ( v46->fields._size <= (unsigned int)v47 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  v48 = v46->fields._items->m_Items[v47];
                  if ( !v48 )
                    goto LABEL_98;
                  if ( !v48->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  ServantCombineControl__SetupCampaign(this, v48->fields._items->m_Items[0], v42);
                }
              }
              v49 = this->fields.campaiginListPerSelectSvt;
              v50 = this->fields.campaiginPerSelectSvtListIndex + 1;
              this->fields.campaiginPerSelectSvtListIndex = v50;
              if ( !v49 )
                goto LABEL_98;
              v51 = v49->fields._size;
              if ( v51 <= v50 )
              {
                this->fields.campaiginPerSelectSvtListIndex = 0;
                v51 = v49->fields._size;
                v50 = 0;
              }
              if ( v51 <= (unsigned int)v50 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v52 = v49->fields._items->m_Items[v50];
              if ( !v52 )
                goto LABEL_98;
              if ( !v52->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              ServantCombineControl__SetupCampaign(this, v52->fields._items->m_Items[0], v39);
            }
            v53 = this->fields.campaignAlphaCalculator;
            if ( v53 )
            {
              campaign = (int64_t)this->fields.campaign;
              this->fields.campaignAlphaAnimNow = v53->fields._Current_k__BackingField;
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
          sub_B2C434(campaign, method);
        }
        campaign = (int64_t)this->fields.campaign;
        if ( !campaign )
          goto LABEL_98;
        (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)campaign + 440LL))(
          campaign,
          *(_QWORD *)(*(_QWORD *)campaign + 448LL),
          1.0);
        campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v17);
        v18 = this->fields.campaiginListPerSelectSvt;
        if ( !v18 )
          goto LABEL_98;
        if ( !v18->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v19 = v18->fields._items->m_Items[0];
        if ( !v19 )
          goto LABEL_98;
        if ( !v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v20 = v19->fields._items->m_Items[0];
        if ( !v20 )
          goto LABEL_98;
        if ( !campaign )
          goto LABEL_98;
        campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                              v20->fields.eventId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !campaign )
          goto LABEL_98;
        v21 = *(_QWORD *)(campaign + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        campaign = NetworkManager__getTime(0LL);
        if ( v21 < campaign )
        {
          v22 = this->fields.campaiginListPerSelectSvt;
          if ( v22 )
          {
            if ( !v22->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            campaign = (int64_t)v22->fields._items->m_Items[0];
            if ( campaign )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                0,
                (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
              v24 = this->fields.campaiginListPerSelectSvt;
              if ( v24 )
              {
                if ( !v24->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                v25 = v24->fields._items->m_Items[0];
                if ( v25 )
                {
                  v26 = this->fields.campaiginListPerSelectSvt;
                  if ( v26 )
                  {
                    if ( v25->fields._size <= 0 )
                    {
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                        0,
                        (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                      return;
                    }
                    if ( !v26->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                    v27 = v26->fields._items->m_Items[0];
                    if ( v27 )
                    {
                      if ( !v27->fields._size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                      ServantCombineControl__SetupCampaign(this, v27->fields._items->m_Items[0], v23);
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
      sub_B2C434(0LL, isDecide);
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
  if ( (byte_4189EBC & 1) == 0 )
  {
    this = (ServantCombineControl_o *)sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, a);
    byte_4189EBC = 1;
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
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || (v10 = *(_QWORD *)&this->fields._targetType_k__BackingField,
        (this = (ServantCombineControl_o *)ServantCombineControl__get_EventMaster(v6, (const MethodInfo *)a)) == 0LL)
    || (this = (ServantCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            b->fields.eventId,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B2C434(this, a);
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
  __int64 v3; // x1
  EventMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  BattleServantConfConponent_o *p_eventMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4189E9D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4189E9D = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v6);
    p_eventMaster = (BattleServantConfConponent_o *)&this->fields.eventMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_eventMaster, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  sub_B2C2F8(
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
  Il2CppObject *v2; // x19
  struct ServantCombineControl___c_StaticFields *static_fields; // x0

  if ( (byte_41853CE & 1) == 0 )
  {
    sub_B2C35C(&ServantCombineControl___c_TypeInfo, v1);
    byte_41853CE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantCombineControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCombineControl___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v5; // x9
  ServantCombineControl___c_o *v6; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v7; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_41853CF & 1) == 0 )
  {
    sub_B2C35C(&CombineRootComponent_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_41853CF = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_B2C434(Instance, v4);
  v5 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v5
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v5 - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    v6 = (ServantCombineControl___c_o *)sub_B2C728(Instance);
    ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(v6, v7, v8, v9);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__113_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0LL), !b) )
    sub_B2C434(this, a);
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

  if ( (byte_41853D0 & 1) == 0 )
  {
    this = (ServantCombineControl___c_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__,
                                            a);
    byte_41853D0 = 1;
  }
  if ( !a )
    goto LABEL_12;
  if ( !a->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v6 = a->fields._items->m_Items[0];
  if ( !v6 || !b )
    goto LABEL_12;
  target = v6->fields.target;
  if ( !b->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v8 = b->fields._items->m_Items[0];
  if ( !v8 )
LABEL_12:
    sub_B2C434(this, a);
  return target - v8->fields.target;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__107_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_41853D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41853D1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  __int64 v6; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_41853D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41853D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(Instance, v6);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_41853D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41853D3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_B2C434(Instance, v4);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}