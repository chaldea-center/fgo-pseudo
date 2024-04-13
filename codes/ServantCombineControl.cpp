void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9CCF & 1) == 0 )
  {
    sub_B5D5C4(&ServantCombineControl_TypeInfo, v1, v2, v3);
    byte_42E9CCF = 1;
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v37; // x20
  UILabel_o *v38; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42E9CBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3354/*"CONDUCTION_LIMITUP"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3357/*"CONDUCTION_LVEXCEED_MSG"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3356/*"CONDUCTION_LVEXCEED"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3355/*"CONDUCTION_LIMITUP_MSG"*/, v26, v27, v28);
    byte_42E9CBB = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField
    || !*(_QWORD *)&selectMaterialUsrSvtIdList_k__BackingField->max_length )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_41;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_41;
    v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)conductionWireInfo;
    v34 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v34;
    *(_QWORD *)&v39.fields.fakeValue = v33;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                       v39,
                                                       0LL);
    if ( !v32 )
      goto LABEL_41;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      v32,
      (int32_t)conductionWireInfo,
      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                                                                   (System_String_o *)StringLiteral_3357/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3356/*"CONDUCTION_LVEXCEED"*/,
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
                sub_B5D69C(conductionWireInfo, method);
              }
            }
          }
        }
        else
        {
          v37 = this->fields.conductionWireLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3355/*"CONDUCTION_LIMITUP_MSG"*/,
                                                             0LL);
          if ( !v37 )
            goto LABEL_41;
          UILabel__set_text(v37, (System_String_o *)conductionWireInfo, 0LL);
          v38 = this->fields.conductionWireButtonLabel;
          conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3354/*"CONDUCTION_LIMITUP"*/,
                                                             0LL);
          if ( !v38 )
            goto LABEL_41;
          UILabel__set_text(v38, (System_String_o *)conductionWireInfo, 0LL);
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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *baseData; // x0
  int32_t LevelMax; // w0
  int32_t v11; // w8
  int32_t totalExp; // w9
  int32_t v13; // w8
  bool result; // w0

  if ( (byte_42E9CBE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, lv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E9CBE = 1;
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
  baseData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(baseData, *(_QWORD *)&lv);
  }
  v11 = *((_DWORD *)baseData + 6);
  totalExp = this->fields.totalExp;
  if ( v11 <= totalExp )
  {
    if ( v11 != totalExp )
    {
      result = 0;
      ++this->fields.checkLv;
      return result;
    }
    v13 = *((_DWORD *)baseData + 5) + 1;
  }
  else
  {
    v13 = *((_DWORD *)baseData + 5);
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

  if ( (byte_42E9CB8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)selectBase, (_DWORD)method, v3);
    byte_42E9CB8 = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v17, 0LL) )
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
  sub_B5D560(
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_39741540((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0LL);
    return System_Int32__CompareTo_39741540((int32_t)&SvtClassId, v8, 0LL);
  }
  return result;
}


void __fastcall ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
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
  UnityEngine_Component_o *selectGrid; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_IEnumerator_c *v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  UnityEngine_Component_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  UnityEngine_Object_o *gameObject; // x21
  __int64 v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x8
  __int64 v39; // x20
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0

  if ( (byte_42E9CC3 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v11, v12, v13);
    byte_42E9CC3 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_B5D69C(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v15);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (System_Collections_IEnumerator_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1].method;
    }
    else
    {
LABEL_17:
      v26 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
    }
    v27 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                       Enumerator,
                                       *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_36;
    v29 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (UnityEngine_Transform_c *)v27->klass->_2.typeHierarchy[v29 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v27 = (UnityEngine_Component_o *)sub_B5D990(v27);
LABEL_36:
      sub_B5D69C(v27, v28);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v31 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v31 )
  {
    v38 = *(_QWORD *)v31;
    v39 = v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_31;
      }
      v42 = v38 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_31:
      v42 = sub_AF54C0(v31, System_IDisposable_TypeInfo, 0LL, v33);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


SetCombineData_o *__fastcall ServantCombineControl__GetRecommendedCombineData(
        ServantCombineControl_o *this,
        const MethodInfo *method)
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  DataManager_o *Instance; // x0
  __int64 v57; // x1
  UserServantEntity_array *CombineMaterialList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x20
  int32_t SvtClassId; // w22
  _BOOL4 IsExtraClass; // w22
  RecommendedConfigSaveData_o *v62; // x23
  System_Collections_Generic_List_VoiceCondType_Type__o *v63; // x24
  struct System_Collections_Generic_List_int__o *selectRarityList; // x27
  signed __int64 size; // x19
  unsigned __int64 v66; // x25
  __int64 v67; // x8
  const MethodInfo_3044C04 **v68; // x26
  unsigned __int64 v69; // x27
  signed __int64 v70; // x28
  UserServantEntity_o **m_Items; // x19
  UserServantEntity_o *v72; // x25
  RecommendedConfigSaveData_o *v73; // x24
  UserServantEntity_o **v74; // x23
  signed __int64 v75; // x19
  UserServantEntity_array *v76; // x28
  _BOOL4 v77; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // x22
  const MethodInfo_3044C04 **v79; // x20
  int v80; // w26
  bool v81; // zf
  __int64 v82; // x0
  ServantCombineControl_o *v83; // x0
  const MethodInfo *v84; // x4
  const MethodInfo *v85; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v87; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v88; // [xsp+0h] [xbp-60h]
  ServantCombineControl_o *v89; // [xsp+8h] [xbp-58h]

  if ( (byte_42E9CC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserServantEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_UserServantEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&RecommendedConfigSaveData_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_ServantCombineControl_ClassRaritySort__, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v53, v54, v55);
    byte_42E9CC9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_55;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_55;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
  v62 = (RecommendedConfigSaveData_o *)Instance;
  if ( RecommendedConfigSaveData__CanNotSelect((RecommendedConfigSaveData_o *)Instance, 0LL) )
    return 0LL;
  v63 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v63,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  selectRarityList = v62->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_55;
  size = selectRarityList->fields._size;
  if ( (int)size >= 1 )
  {
    v66 = 0LL;
    do
    {
      if ( v66 >= (unsigned int)selectRarityList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v63 )
        break;
      System_Collections_Generic_List_VoiceCondType_Type___Add(
        v63,
        selectRarityList->fields._items->m_Items[++v66],
        (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
      if ( (__int64)v66 >= size )
        goto LABEL_23;
      selectRarityList = v62->fields.selectRarityList;
    }
    while ( selectRarityList );
LABEL_55:
    sub_B5D69C(Instance, v57);
  }
LABEL_23:
  v89 = this;
  if ( !CombineMaterialList )
    goto LABEL_55;
  v67 = *(_QWORD *)&CombineMaterialList->max_length;
  if ( (int)v67 >= 1 )
  {
    v68 = (const MethodInfo_3044C04 **)&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__;
    v69 = 0LL;
    v70 = (int)v67;
    m_Items = CombineMaterialList->m_Items;
    v88 = v63;
    while ( 1 )
    {
      v72 = m_Items[v69];
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsAll(v62, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v72 )
          goto LABEL_55;
        Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v72, 0LL);
        if ( (_DWORD)Instance != 1001 )
          goto LABEL_44;
      }
      Instance = (DataManager_o *)RecommendedConfigSaveData__IsTargetOnly(v62, 0LL);
      if ( IsExtraClass )
        break;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_39;
      if ( !v72 )
        goto LABEL_55;
      v73 = v62;
      v74 = m_Items;
      v75 = v70;
      v76 = CombineMaterialList;
      v77 = IsExtraClass;
      v78 = v59;
      v79 = v68;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v72, 0LL);
      if ( !v89->fields.baseData )
        goto LABEL_55;
      v80 = (int)Instance;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v89->fields.baseData, 0LL);
      v81 = v80 == (_DWORD)Instance;
      v68 = v79;
      v59 = v78;
      IsExtraClass = v77;
      CombineMaterialList = v76;
      v70 = v75;
      m_Items = v74;
      v62 = v73;
      v63 = v88;
      if ( v81 )
        goto LABEL_40;
LABEL_44:
      if ( (__int64)++v69 >= v70 )
        goto LABEL_47;
      if ( v69 >= CombineMaterialList->max_length )
      {
        v82 = sub_B5D6C8(Instance);
        sub_B5D668(v82, 0LL);
      }
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v72 )
        goto LABEL_55;
      Instance = (DataManager_o *)UserServantEntity__getSvtClassId(v72, 0LL);
      if ( (_DWORD)Instance != 1001 )
        goto LABEL_44;
    }
    else
    {
LABEL_39:
      if ( !v72 )
        goto LABEL_55;
    }
LABEL_40:
    Instance = (DataManager_o *)UserServantEntity__getRarity(v72, 0LL);
    if ( !v63 )
      goto LABEL_55;
    Instance = (DataManager_o *)System_Collections_Generic_List_VoiceCondType_Type___Contains(
                                  v63,
                                  (int32_t)Instance,
                                  *v68);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v59 )
        goto LABEL_55;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v59,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
    goto LABEL_44;
  }
LABEL_47:
  if ( !v59 )
    goto LABEL_55;
  if ( !v59->fields._size )
    return 0LL;
  if ( RecommendedConfigSaveData__IsMix(v62, 0LL) )
  {
    Instance = (DataManager_o *)v89->fields.baseData;
    if ( !Instance )
      goto LABEL_55;
    v83 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL);
    v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantCombineControl__MixMaterialSort(
                                                                                                    v83,
                                                                                                    (int32_t)v83,
                                                                                                    (System_Collections_Generic_List_Rarity_TYPE__o *)v63,
                                                                                                    (System_Collections_Generic_List_UserServantEntity__o *)v59,
                                                                                                    v84);
  }
  else
  {
    v87 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v87,
      (Il2CppObject *)v89,
      Method_ServantCombineControl_ClassRaritySort__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v59,
      (System_Comparison_T__o *)v87,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_27517852(
           v89,
           (System_Collections_Generic_List_UserServantEntity__o *)v59,
           v85);
}


int32_t __fastcall ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *currentLvObj; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UILabel_o *qpLb; // x20
  UIWidget_o *v13; // x20
  int v14; // s0
  UILabel_o *expLb; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  int v21; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9CB6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E9CB6 = 1;
  }
  v21 = 0;
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
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 0, v9);
  ServantCombineControl__ResetCampaign(this, v10);
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
  ServantCombineControl__SetHaveQpInfo(this, v11);
  this->fields._spendQpVal_k__BackingField = 0;
  qpLb = this->fields.qpLb;
  v21 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_39741776(
                                               (int32_t)&v21,
                                               (System_String_o *)StringLiteral_9361/*"N0"*/,
                                               0LL);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0LL);
  v13 = (UIWidget_o *)this->fields.qpLb;
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
  if ( !v13 )
    goto LABEL_22;
  UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v21 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v21, 0LL);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0LL),
        ServantCombineControl__DestroyGrid(this, v19),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v20),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(currentLvObj, method);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0LL);
}


void __fastcall ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9CB4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CB4 = 1;
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
      sub_B5D69C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_charaGraph, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall ServantCombineControl__InitSvtCombine(ServantCombineControl_o *this, const MethodInfo *method)
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_String_o *selectMaterialSvtBtn; // x0
  __int64 v51; // x1
  __int64 v52; // x9
  ServantCombineControl___c_c *v53; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__81_0; // x20
  Il2CppObject *v56; // x21
  struct ServantCombineControl___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v74; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *combineEventList; // x0
  _BOOL8 v77; // x0
  __int64 v78; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v80; // x0
  void *v81; // x0
  int v82; // w1
  __int64 v83; // x20
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E9CB3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v32, v33, v34);
    sub_B5D5C4(&ServantCombineControl___c_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_6942/*"GET_EXP_INFO"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_9367/*"NEED_QP_INFO"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    byte_42E9CB3 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(102, 0LL) )
  {
LABEL_21:
    needQpLb = this->fields.needQpLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9367/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6942/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0LL,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
        ServantCombineControl__InitMaterialSvtInfo(this, v72);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v74);
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
                            &v84,
                            combineEventList,
                            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v85 = v84;
                          while ( 1 )
                          {
                            v77 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                    &v85,
                                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v77 )
                              break;
                            if ( !v85.fields.current )
                              sub_B5D69C(v77, v78);
                            klass_high = HIDWORD(v85.fields.current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v80 = this->fields.menuListCtr;
                              if ( !v80 )
                                sub_B5D69C(0LL, v78);
                              MenuListControl__setBannerIcon(
                                v80,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v85.fields.current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                            &v85,
                            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_B5D69C(selectMaterialSvtBtn, v51);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].klass;
  if ( !selectMaterialSvtBtn )
    goto LABEL_50;
  v52 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&selectMaterialSvtBtn->klass->_2.bitflags2 + 1) >= (unsigned int)v52
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[v52 - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[25].monitor) == 1 )
    {
      v53 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v53 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v53->static_fields;
      _9__81_0 = static_fields->__9__81_0;
      if ( !_9__81_0 )
      {
        if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)static_fields->__9;
        _9__81_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__81_0, v56, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        v57 = ServantCombineControl___c_TypeInfo->static_fields;
        v57->__9__81_0 = _9__81_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v57->__9__81_0,
          (System_Int32_array **)_9__81_0,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_21;
  }
  v81 = (void *)sub_B5D990(selectMaterialSvtBtn);
  if ( v82 != 1 )
    _Unwind_Resume(v81);
  v83 = *(_QWORD *)__cxa_begin_catch(v81);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v85,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v83 )
    sub_B5D668(v83, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  void *Instance; // x0
  __int64 v20; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x22
  __int64 v23; // x23
  __int64 v24; // x24
  int32_t v25; // w22
  int32_t LevelMax; // w0
  int v27; // w21
  int v28; // w8
  int32_t v29; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42E9CCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExpMaster___, totalExp, expType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E9CCA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_23;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v24 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v24;
  *(_QWORD *)&v31.fields.fakeValue = v23;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
  if ( !v22
    || (DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v22,
          (int32_t)Instance,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_23:
    sub_B5D69C(Instance, v20);
  }
  v25 = *((_DWORD *)Instance + 64);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0LL);
  v27 = LevelMax;
  if ( v25 == LevelMax )
  {
    v28 = 0;
  }
  else if ( v25 >= LevelMax )
  {
LABEL_19:
    v28 = v27;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_23;
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_23;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v25, 0LL);
      if ( !Instance )
        goto LABEL_23;
      v29 = *((_DWORD *)Instance + 6);
      if ( v29 > totalExp )
      {
        v28 = *((_DWORD *)Instance + 5);
        return v28 >= v27;
      }
      if ( v29 == totalExp )
        break;
      if ( ++v25 >= v27 )
        goto LABEL_19;
    }
    v28 = *((_DWORD *)Instance + 5) + 1;
  }
  return v28 >= v27;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall ServantCombineControl__MixMaterialSort(
        ServantCombineControl_o *this,
        int32_t baseServantClass,
        System_Collections_Generic_List_Rarity_TYPE__o *checkRarityTypeList,
        System_Collections_Generic_List_UserServantEntity__o *materialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Rarity_TYPE__o *v6; // x19
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x22
  __int64 SvtClassId; // x0
  __int64 v48; // x1
  int32_t size; // w28
  __int64 v50; // x26
  unsigned int v51; // w8
  Il2CppClass **v52; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x25
  const MethodInfo_3056FC0 *v54; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x0
  ServantCombineControl___c_c *v56; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__113_0; // x23
  Il2CppObject *v59; // x24
  struct ServantCombineControl___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x23
  int v68; // w8
  unsigned __int64 v69; // x25
  int v70; // w8
  System_Collections_Generic_List_Rarity_TYPE__o *v71; // x26
  int32_t v72; // w28
  unsigned int v73; // w19
  __int64 v74; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v75; // x24
  int v76; // w8
  unsigned int v77; // w19
  __int64 v78; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v79; // x24
  int v80; // w8
  __int64 v81; // x19
  __int64 v82; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x24
  signed __int64 v85; // [xsp+8h] [xbp-58h]

  v6 = checkRarityTypeList;
  if ( (byte_42E9CCC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_UserServantEntity___ctor__,
      baseServantClass,
      (_DWORD)checkRarityTypeList,
      materialList);
    sub_B5D5C4(&System_Comparison_UserServantEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_ServantCombineControl___c__MixMaterialSort_b__113_0__, v38, v39, v40);
    sub_B5D5C4(&ServantCombineControl___c_TypeInfo, v41, v42, v43);
    byte_42E9CCC = 1;
  }
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  }
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !materialList )
    goto LABEL_70;
  size = materialList->fields._size;
  if ( size >= 1 )
  {
    v50 = 0LL;
    v51 = materialList->fields._size;
    while ( 1 )
    {
      if ( v51 <= (unsigned int)v50 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v52 = &materialList->fields._items->obj.klass + v50;
      v53 = (EventMissionProgressRequest_Argument_ProgressData_o *)v52[4];
      if ( !v53 )
        goto LABEL_70;
      SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v52[4], 0LL);
      if ( (_DWORD)SvtClassId == baseServantClass )
      {
        if ( !v44 )
          goto LABEL_70;
        v54 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v55 = v44;
      }
      else if ( (_DWORD)SvtClassId == 1001 )
      {
        if ( !v45 )
          goto LABEL_70;
        v54 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v55 = v45;
      }
      else
      {
        if ( !v46 )
          goto LABEL_70;
        v54 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__;
        v55 = v46;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v55, v53, v54);
      if ( (int)v50 + 1 >= size )
        break;
      v51 = materialList->fields._size;
      ++v50;
    }
  }
  if ( !v46 )
    goto LABEL_70;
  if ( v46->fields._size >= 1 )
  {
    v56 = ServantCombineControl___c_TypeInfo;
    if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v56 = ServantCombineControl___c_TypeInfo;
    }
    static_fields = v56->static_fields;
    _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__113_0;
    if ( !_9__113_0 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)static_fields->__9;
      _9__113_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserServantEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__113_0,
        v59,
        Method_ServantCombineControl___c__MixMaterialSort_b__113_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_UserServantEntity___ctor__);
      v60 = ServantCombineControl___c_TypeInfo->static_fields;
      v60->__9__113_0 = (struct System_Comparison_UserServantEntity__o *)_9__113_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v60->__9__113_0,
        (System_Int32_array **)_9__113_0,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v46,
      (System_Comparison_T__o *)_9__113_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !v6 )
    goto LABEL_70;
  v68 = v6->fields._size;
  if ( v68 >= 1 )
  {
    v85 = v68;
    v69 = 0LL;
    while ( 1 )
    {
      if ( v69 >= (unsigned int)v68 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v44 )
        goto LABEL_70;
      v70 = v44->fields._size;
      v71 = v6;
      v72 = v6->fields._items->m_Items[v69 + 1];
      if ( v70 >= 1 )
        break;
LABEL_49:
      if ( !v45 )
        goto LABEL_70;
      v76 = v45->fields._size;
      if ( v76 >= 1 )
      {
        v77 = 0;
        do
        {
          if ( v76 <= v77 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v78 = (__int64)v45->fields._items + 8 * (int)v77;
          v79 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v78 + 32);
          if ( !v79 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v78 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v72 )
          {
            if ( !v67 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v67,
              v79,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v76 = v45->fields._size;
        }
        while ( (int)++v77 < v76 );
      }
      v80 = v46->fields._size;
      if ( v80 >= 1 )
      {
        v81 = 0LL;
        do
        {
          if ( v80 <= (unsigned int)v81 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v82 = (__int64)v46->fields._items + 8 * v81;
          v83 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v82 + 32);
          if ( !v83 )
            goto LABEL_70;
          SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v82 + 32), 0LL);
          if ( (_DWORD)SvtClassId == v72 )
          {
            if ( !v67 )
              goto LABEL_70;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v67,
              v83,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
          v80 = v46->fields._size;
        }
        while ( (int)++v81 < v80 );
      }
      if ( (__int64)++v69 >= v85 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v67;
      v68 = v71->fields._size;
      v6 = v71;
    }
    v73 = 0;
    while ( 1 )
    {
      if ( v70 <= v73 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v74 = (__int64)v44->fields._items + 8 * (int)v73;
      v75 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v74 + 32);
      if ( !v75 )
        break;
      SvtClassId = UserServantEntity__getRarity(*(UserServantEntity_o **)(v74 + 32), 0LL);
      if ( (_DWORD)SvtClassId == v72 )
      {
        if ( !v67 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v67,
          v75,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      }
      v70 = v44->fields._size;
      if ( (int)++v73 >= v70 )
        goto LABEL_49;
    }
LABEL_70:
    sub_B5D69C(SvtClassId, v48);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v67;
}


void __fastcall ServantCombineControl__OnClickCombineConductionWire(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42E9CC2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CC2 = 1;
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
    sub_B5D69C(combineRootComponent, v5);
  }
}


void __fastcall ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
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
  System_String_o *SelfUserGame; // x0
  __int64 v18; // x1
  int32_t klass; // w20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v21; // x21
  unsigned __int64 v22; // x23
  unsigned __int64 max_length; // x9
  int64_t v24; // x22
  bool v25; // w5
  __int64 v26; // x0

  if ( (byte_42E9CC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, v14, v15, v16);
    byte_42E9CC1 = 1;
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
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  v21 = SelfUserGame;
  v22 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v22 >= (int)max_length )
    {
      v25 = 0;
      goto LABEL_19;
    }
    if ( v22 >= max_length )
    {
      v26 = sub_B5D6C8(SelfUserGame);
      sub_B5D668(v26, 0LL);
    }
    v24 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v22];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)SelfUserGame,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                        (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                        v24,
                                        (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v22;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v25 = 1;
LABEL_19:
  SelfUserGame = (System_String_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B5D69C(SelfUserGame, v18);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v21,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v25,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0LL);
}


void __fastcall ServantCombineControl__OnClickMaterialSelectList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_42E9CC6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9CC6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, v5);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__OnClickRecommendedButton(
        ServantCombineControl_o *this,
        const MethodInfo *method)
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
  __int64 v14; // x1
  UserServantEntity_o *baseData; // x0
  int32_t SvtClassId; // w20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  RecommenededConfigDialog_ClickDelegate_o *v18; // x21

  if ( (byte_42E9CC7 & 1) == 0 )
  {
    sub_B5D5C4(&RecommenededConfigDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SvtClassAttri_TypeInfo, v11, v12, v13);
    byte_42E9CC7 = 1;
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
  v18 = (RecommenededConfigDialog_ClickDelegate_o *)sub_B5D694(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__106_0__,
    0LL);
  if ( !recommendedConfigDialog )
LABEL_12:
    sub_B5D69C(baseData, v14);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v18, 0LL);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *campaign; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_42E9CB5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9CB5 = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_B5D69C(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaiginListPerSelectSvt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt, 0LL, v6, v7, v8, v9, v10, v11);
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  UserServantEntity_o **p_baseData; // x20
  const MethodInfo *v116; // x2
  _BOOL8 v117; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w19
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v121; // w24
  int32_t adjustAtk; // w19
  UIIconLabel_o *currentAdjustAtkIconLabel; // x20
  int32_t v124; // w24
  const MethodInfo *v125; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x24
  _BOOL8 v127; // x0
  const MethodInfo *v128; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  unsigned int klass_high; // w8
  EventMaster_o *EventMaster; // x0
  __int64 v132; // x1
  WarEntity_o *Entity; // x0
  __int64 v134; // x1
  int64_t v135; // x19
  int64_t Time; // x0
  __int64 v137; // x1
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x24
  const char *namespaze; // x8
  int32_t missionConditionDetailId; // w9
  int32_t SvtClassId; // w1
  __int64 v142; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v143; // x0
  __int64 v144; // x1
  __int64 v145; // x27
  int v146; // w19
  __int64 v147; // x25
  __int64 v148; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v149; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **p_campaiginListPerSelectSvt; // x21
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  _BOOL8 v157; // x0
  __int64 v158; // x1
  EventCampaignEntity_o *v159; // x22
  _BOOL8 v160; // x0
  __int64 v161; // x1
  Il2CppObject *v162; // x23
  Il2CppClass *v163; // x8
  _DWORD *data; // x10
  int32_t target; // w9
  _DWORD *v166; // x9
  _DWORD *v167; // x9
  _DWORD *v168; // x8
  EventCampaignEntity_o *v169; // x0
  __int64 v170; // x8
  char v171; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v172; // x23
  __int64 v173; // x0
  __int64 v174; // x1
  EventCampaignEntity_o *v175; // x0
  __int64 v176; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v177; // x0
  __int64 v178; // x0
  __int64 v179; // x1
  EventCampaignEntity_o *v180; // x0
  __int64 v181; // x1
  Il2CppObject *v182; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v183; // x23
  __int64 v184; // x0
  __int64 v185; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v186; // x21
  ServantCombineControl___c_c *v187; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__88_0; // x22
  Il2CppObject *v190; // x23
  struct ServantCombineControl___c_StaticFields *v191; // x0
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  const MethodInfo *v198; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *v200; // x19
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v201; // x8
  MenuListControl_c *v202; // x0
  float v203; // s8
  System_Func_float__float__float__float__o *v204; // x20
  AlphaTransitionCalculator_o *v205; // x21
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  __int64 v212; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v213; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v214; // [xsp+18h] [xbp-F8h]
  System_Collections_Generic_List_Enumerator_T__o v215[2]; // [xsp+28h] [xbp-E8h] BYREF
  int v216; // [xsp+58h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v217; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v218; // [xsp+80h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+A0h] [xbp-70h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+B8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16

  if ( (byte_42E9CB9 & 1) == 0 )
  {
    sub_B5D5C4(&AlphaTransitionCalculator_TypeInfo, (_DWORD)usrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, v10, v11, v12);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Comparison_EventCampaignEntity___ctor__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Comparison_List_EventCampaignEntity____ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Comparison_EventCampaignEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Comparison_List_EventCampaignEntity___TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v46, v47, v48);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__,
      v49,
      v50,
      v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Sort__, v67, v68, v69);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v70, v71, v72);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v73, v74, v75);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v76, v77, v78);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v79, v80, v81);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v82, v83, v84);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v85, v86, v87);
    sub_B5D5C4(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v88, v89, v90);
    sub_B5D5C4(&MenuListControl_TypeInfo, v91, v92, v93);
    sub_B5D5C4(&NetworkManager_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v97, v98, v99);
    sub_B5D5C4(&Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__, v100, v101, v102);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v103, v104, v105);
    sub_B5D5C4(&Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__, v106, v107, v108);
    sub_B5D5C4(&ServantCombineControl___c_TypeInfo, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_1/*""*/, v112, v113, v114);
    byte_42E9CB9 = 1;
  }
  p_baseData = &this->fields.baseData;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  memset(&v218, 0, sizeof(v218));
  memset(&v217, 0, sizeof(v217));
  v216 = 0;
  this->fields.baseData = usrSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantCombineControl__SetDispCardImg(this, this->fields.baseData, v116);
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
    v121 = secondMaxAdjustAtk[1];
  else
    v121 = maxAjustAtk[1];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41886452(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * adjustHp,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m32) * v121,
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
    v124 = secondMaxAdjustAtk[0];
  else
    v124 = maxAjustAtk[0];
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_165;
  UIIconLabel__Set_41886452(
    currentAdjustAtkIconLabel,
    45,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * adjustAtk,
    LODWORD(combineInfoComp->fields.infoLb->fields.mLocalToPanel.fields.m22) * v124,
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
  ServantCombineControl__CheckConductionWire(this, v125);
  combineInfoComp = (struct CombineInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)combineInfoComp,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !combineInfoComp )
    goto LABEL_165;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)combineInfoComp, 0LL);
  if ( !CombineEventCampaigns )
    goto LABEL_151;
  v214 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v214,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v213 = CombineEventCampaigns;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v215,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineEventCampaigns,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v218 = v215[0];
LABEL_27:
  while ( 1 )
  {
    v127 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v218,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v127 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v218.fields.current;
    if ( !v218.fields.current )
      sub_B5D69C(v127, v128);
    klass_high = HIDWORD(v218.fields.current[1].klass);
    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000034LL) != 0 )
    {
      EventMaster = ServantCombineControl__get_EventMaster(this, v128);
      if ( !EventMaster )
        sub_B5D69C(0LL, v132);
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)EventMaster,
                 current->fields.missionTargetId,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_B5D69C(0LL, v134);
      v135 = *(_QWORD *)&Entity->fields.eventId;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      if ( v135 >= Time )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B5D69C(Time, v137);
        namespaze = klass->_1.namespaze;
        missionConditionDetailId = current->fields.missionConditionDetailId;
        if ( namespaze )
        {
          if ( (unsigned int)(missionConditionDetailId - 32) >= 2 )
          {
            if ( missionConditionDetailId == 27 )
            {
              if ( !usrSvtData )
                sub_B5D69C(Time, v137);
              if ( UserServantEntity__IsExchangeSvt(usrSvtData, 0LL) )
              {
                if ( !v214 )
                  sub_B5D69C(0LL, v144);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v214,
                  current,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
                break;
              }
            }
            else if ( (int)namespaze >= 1 )
            {
              v145 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v145 >= (unsigned int)namespaze )
                {
                  v212 = sub_B5D6C8(Time);
                  sub_B5D668(v212, 0LL);
                }
                if ( !usrSvtData )
                  sub_B5D69C(Time, v137);
                v146 = *((_DWORD *)&klass->_1.byval_arg.data + v145);
                v148 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
                v147 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v221.fields.currentCryptoKey = v148;
                *(_QWORD *)&v221.fields.fakeValue = v147;
                Time = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v221, 0LL);
                if ( v146 == (_DWORD)Time )
                  break;
                LODWORD(namespaze) = klass->_1.namespaze;
                if ( (int)++v145 >= (int)namespaze )
                  goto LABEL_27;
              }
              v143 = v214;
              if ( !v214 )
                sub_B5D69C(0LL, v137);
LABEL_62:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v143,
                current,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
            }
          }
          else
          {
            if ( !usrSvtData )
              sub_B5D69C(Time, v137);
            SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0LL);
            if ( (System_Array__IndexOf_int_(
                    (System_Int32_array *)klass,
                    SvtClassId,
                    (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              v143 = v214;
              if ( !v214 )
                sub_B5D69C(0LL, v142);
              goto LABEL_62;
            }
          }
        }
        else if ( (missionConditionDetailId & 0xFFFFFFFE) == 4 )
        {
          v143 = v214;
          if ( !v214 )
            sub_B5D69C(0LL, v137);
          goto LABEL_62;
        }
      }
    }
  }
  *((_DWORD *)&v215[1].fields.list + v216++) = 602;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v218,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v216 && *((_DWORD *)&v215[0].fields.current + v216 + 1) == 602 )
    --v216;
  v149 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v149,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  p_campaiginListPerSelectSvt = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)v149;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.campaiginListPerSelectSvt,
    (System_Int32_array **)v149,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  combineInfoComp = (struct CombineInfoComponent_o *)v214;
  if ( !v214 )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v215,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v214,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v218 = v215[0];
  while ( 1 )
  {
    v157 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v218,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v157 )
      break;
    if ( !*p_campaiginListPerSelectSvt )
      sub_B5D69C(v157, v158);
    v159 = (EventCampaignEntity_o *)v218.fields.current;
    if ( (*p_campaiginListPerSelectSvt)->fields._size <= 0 )
    {
      v172 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v172,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !v159 )
        sub_B5D69C(v173, v174);
      v175 = EventCampaignEntity__Clone(v159, 0LL);
      if ( !v172 )
        sub_B5D69C(v175, v175);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v172,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v175,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
      v177 = *p_campaiginListPerSelectSvt;
      if ( !*p_campaiginListPerSelectSvt )
        sub_B5D69C(0LL, v176);
LABEL_107:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v177,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v172,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    }
    else
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v215,
        *p_campaiginListPerSelectSvt,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v217 = v215[0];
      while ( 1 )
      {
        v160 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v217,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v160 )
          break;
        if ( !v159 )
          sub_B5D69C(v160, v161);
        v162 = v217.fields.current;
        if ( !v217.fields.current )
          sub_B5D69C(v160, v161);
        if ( !LODWORD(v217.fields.current[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v163 = v217.fields.current[1].klass;
        data = v163->_1.byval_arg.data;
        if ( !data )
          sub_B5D69C(v160, v161);
        if ( v159->fields.target == data[5] )
        {
LABEL_103:
          v169 = EventCampaignEntity__Clone(v159, 0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v162,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v169,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          v170 = v216;
          v171 = 1;
          goto LABEL_109;
        }
        target = v159->fields.target;
        if ( target == 4 )
        {
          if ( !LODWORD(v217.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( data[5] == 32 )
            goto LABEL_103;
          target = v159->fields.target;
        }
        if ( target == 32 )
        {
          if ( !LODWORD(v217.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v166 = v163->_1.byval_arg.data;
          if ( !v166 )
            sub_B5D69C(v160, v161);
          if ( v166[5] == 4 )
            goto LABEL_103;
          target = v159->fields.target;
        }
        if ( target == 5 )
        {
          if ( !LODWORD(v217.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v167 = v163->_1.byval_arg.data;
          if ( !v167 )
            sub_B5D69C(v160, v161);
          if ( v167[5] == 33 )
            goto LABEL_103;
          target = v159->fields.target;
        }
        if ( target == 33 )
        {
          if ( !LODWORD(v217.fields.current[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v168 = v163->_1.byval_arg.data;
          if ( !v168 )
            sub_B5D69C(v160, v161);
          if ( v168[5] == 5 )
            goto LABEL_103;
        }
      }
      v170 = v216;
      v171 = 0;
LABEL_109:
      *((_DWORD *)&v215[1].fields.list + v170) = 896;
      ++v216;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v217,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v216 && *((_DWORD *)&v215[0].fields.current + v216 + 1) == 896 )
        --v216;
      if ( (v171 & 1) == 0 )
      {
        v172 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v172,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !v159 )
          sub_B5D69C(v178, v179);
        v180 = EventCampaignEntity__Clone(v159, 0LL);
        if ( !v172 )
          sub_B5D69C(v180, v180);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v172,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v180,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        v177 = *p_campaiginListPerSelectSvt;
        if ( !*p_campaiginListPerSelectSvt )
          sub_B5D69C(0LL, v181);
        goto LABEL_107;
      }
    }
  }
  *((_DWORD *)&v215[1].fields.list + v216++) = 962;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v218,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( v216 && *((_DWORD *)&v215[0].fields.current + v216 + 1) == 962 )
    --v216;
  combineInfoComp = (struct CombineInfoComponent_o *)*p_campaiginListPerSelectSvt;
  if ( !*p_campaiginListPerSelectSvt )
    goto LABEL_165;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v215,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)combineInfoComp,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
  v217 = v215[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v217,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__) )
  {
    v182 = v217.fields.current;
    v183 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventCampaignEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v183,
      (Il2CppObject *)this,
      Method_ServantCombineControl__SetBaseSvtCardImg_b__88_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventCampaignEntity___ctor__);
    if ( !v182 )
      sub_B5D69C(v184, v185);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v182,
      (System_Comparison_T__o *)v183,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventCampaignEntity__Sort__);
  }
  *((_DWORD *)&v215[1].fields.list + v216++) = 1026;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v217,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
  CombineEventCampaigns = v213;
  if ( v216 && *((_DWORD *)&v215[0].fields.current + v216 + 1) == 1026 )
    --v216;
  v186 = *p_campaiginListPerSelectSvt;
  if ( !v186 )
    goto LABEL_165;
  if ( v186->fields._size < 1 )
    goto LABEL_151;
  v187 = ServantCombineControl___c_TypeInfo;
  if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v187 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v187->static_fields;
  _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    if ( (BYTE3(v187->vtable._0_Equals.methodPtr) & 4) != 0 && !v187->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v187);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v190 = (Il2CppObject *)static_fields->__9;
    _9__88_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_List_EventCampaignEntity___TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__88_0,
      v190,
      Method_ServantCombineControl___c__SetBaseSvtCardImg_b__88_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_List_EventCampaignEntity____ctor__);
    v191 = ServantCombineControl___c_TypeInfo->static_fields;
    v191->__9__88_0 = (struct System_Comparison_List_EventCampaignEntity___o *)_9__88_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v191->__9__88_0,
      (System_Int32_array **)_9__88_0,
      v192,
      v193,
      v194,
      v195,
      v196,
      v197);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v186,
    (System_Comparison_T__o *)_9__88_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___Sort__);
  campaiginListPerSelectSvt = this->fields.campaiginListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !campaiginListPerSelectSvt )
    goto LABEL_165;
  if ( !campaiginListPerSelectSvt->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v200 = campaiginListPerSelectSvt->fields._items->m_Items[0];
  if ( !v200 )
    goto LABEL_165;
  if ( !v200->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  ServantCombineControl__SetupCampaign(this, v200->fields._items->m_Items[0], v198);
LABEL_151:
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaign;
  if ( !combineInfoComp )
    goto LABEL_165;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)combineInfoComp,
                                                       0LL);
  if ( CombineEventCampaigns )
  {
    v201 = this->fields.campaiginListPerSelectSvt;
    if ( !v201 )
      goto LABEL_165;
    v117 = v201->fields._size > 0;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  else
  {
    v117 = 0LL;
    if ( !combineInfoComp )
      goto LABEL_165;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v117, 0LL);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v202 = MenuListControl_TypeInfo;
  if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v202 = MenuListControl_TypeInfo;
  }
  v203 = ChangedFPSUtil__CovertFrameNumToSecond(v202->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v204 = ExtraEasing__AsymptoticSeriesFloat(
           MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
           (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
           0LL);
  v205 = (AlphaTransitionCalculator_o *)sub_B5D694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v205, v203, v204, 0LL);
  this->fields.campaignAlphaCalculator = v205;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.campaignAlphaCalculator,
    (System_Int32_array **)v205,
    v206,
    v207,
    v208,
    v209,
    v210,
    v211);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_165:
    sub_B5D69C(combineInfoComp, v117);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SetCombineData_o *v4; // x28
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
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  System_String_o *checkLv; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct System_Int64_array *v84; // x8
  struct UserServantEntity_o *baseSvtData; // x1
  __int64 v86; // x20
  struct UserServantEntity_o *baseData; // x8
  __int64 v88; // x22
  __int64 v89; // x23
  System_Collections_Generic_List_long__o *v90; // x24
  unsigned __int64 v91; // x25
  struct System_Int64_array *v92; // x8
  int64_t v93; // x26
  UnityEngine_GameObject_o *svtFaceInfo; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v96; // x27
  UnityEngine_Transform_o *v97; // x22
  int v98; // s0
  SetCombineData_o *v101; // x23
  srcLineSprite_o *Component_srcLineSprite; // x0
  UserServantEntity_o *v103; // x27
  MaterialSvtInfo_o *v104; // x28
  MaterialSvtInfo_ClickDelegate_o *v105; // x22
  UserServantEntity_o *Entity; // x27
  ServantLimitMaster_o *v107; // x28
  __int64 v108; // x21
  __int64 v109; // x22
  int32_t v110; // w21
  struct System_Int64_array *v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct System_Int64_array *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x22
  int32_t getExp; // w8
  UILabel_o *expLb; // x22
  UserServantEntity_o *v129; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v130; // x23
  __int64 v131; // x21
  __int64 v132; // x22
  int32_t monitor_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v135; // x2
  int32_t v136; // w23
  struct UserServantEntity_o *v137; // x8
  UILabel_o *currentLvLb; // x21
  UILabel_o *increLvLb; // x21
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v142; // x21
  Il2CppObject *v143; // x0
  UserServantEntity_o *v144; // x8
  __int64 v145; // x21
  __int64 v146; // x22
  int32_t v147; // w24
  __int64 v148; // x22
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  UserServantEntity_o *v155; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v157; // x8
  WebViewObject_o *Component_WebViewObject; // x22
  int v159; // s0
  WebViewObject_o *v163; // x22
  int v164; // s0
  int32_t adjustHp; // w21
  BalanceConfig_c *v169; // x0
  int v170; // w9
  int32_t v171; // w22
  int32_t StatusUpAdjustHp; // w8
  int v173; // w21
  int getHpAdjustVal; // w23
  int32_t v175; // w22
  int32_t v176; // w22
  int32_t v177; // w23
  int32_t v178; // w1
  BalanceConfig_c *v179; // x0
  int32_t adjustAtk; // w21
  int v181; // w9
  int32_t v182; // w24
  int32_t StatusUpAdjustAtk; // w8
  int v184; // w21
  int getAtkAdjustVal; // w23
  int32_t v186; // w24
  int32_t v187; // w20
  int32_t v188; // w21
  int32_t v189; // w1
  UIWidget_o *v190; // x20
  int v191; // s0
  const MethodInfo *v195; // x1
  int v196; // s0
  __int64 v200; // x0
  int32_t targetLimitCnt; // [xsp+14h] [xbp-ACh]
  UserServantEntity_o **p_baseData; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_long__o *v203; // [xsp+20h] [xbp-A0h]
  int32_t increAmount; // [xsp+28h] [xbp-98h] BYREF
  int32_t v205; // [xsp+2Ch] [xbp-94h] BYREF
  __int64 v206; // [xsp+30h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+38h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+40h] [xbp-80h] BYREF
  __int64 lateExp; // [xsp+48h] [xbp-78h] BYREF
  System_String_array *skillNameList; // [xsp+50h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+58h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v213; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  UnityEngine_Vector3_o v217; // 0:s0.4,4:s1.4,8:s2.4

  v4 = data;
  if ( (byte_42E9CBD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&MaterialSvtInfo_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_CombineMenuControl_OnClickMaterial__, v9, v10, v11);
    sub_B5D5C4(&CombineSvtData_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v33, v34, v35);
    sub_B5D5C4(&int_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_7352/*"INCREMENT_SVTLEVEL"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_1/*""*/, v66, v67, v68);
    byte_42E9CBD = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  skillNameList = 0LL;
  idList = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  lateExp = 0LL;
  v206 = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v205 = 0;
  ServantCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  if ( !v4 )
    goto LABEL_140;
  materialUsrSvtIdList = v4->fields.materialUsrSvtIdList;
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (System_Int32_array **)materialUsrSvtIdList,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v84 = v4->fields.materialUsrSvtIdList;
  if ( !v84 )
    goto LABEL_140;
  baseSvtData = v4->fields.baseSvtData;
  v86 = *(_QWORD *)&v84->max_length;
  this->fields.baseData = baseSvtData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)baseSvtData,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_140;
  v89 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v88 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v213.fields.currentCryptoKey = v89;
  *(_QWORD *)&v213.fields.fakeValue = v88;
  targetLimitCnt = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v213, 0LL);
  v90 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v90,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v203 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v203,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v86 >= 1 )
  {
    conductionWireInfo = this->fields.conductionWireInfo;
    p_baseData = &this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    v91 = 0LL;
    do
    {
      v92 = v4->fields.materialUsrSvtIdList;
      if ( !v92 )
        goto LABEL_140;
      if ( v91 >= v92->max_length )
        goto LABEL_141;
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
      if ( !conductionWireInfo )
        goto LABEL_140;
      v93 = v92->m_Items[v91];
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
      v96 = conductionWireInfo;
      v97 = UnityEngine_GameObject__get_transform(conductionWireInfo, 0LL);
      *(UnityEngine_Vector3_o *)&v98 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v97 )
        goto LABEL_140;
      v101 = v4;
      UnityEngine_Transform__set_localPosition(v97, *(UnityEngine_Vector3_o *)&v98, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v96, 0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v217.fields.x = 0.5;
      v217.fields.y = 0.5;
      v217.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)conductionWireInfo, v217, 0LL);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v96,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      v103 = this->fields.baseData;
      v104 = (MaterialSvtInfo_o *)Component_srcLineSprite;
      v105 = (MaterialSvtInfo_ClickDelegate_o *)sub_B5D694(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(v105, (Il2CppObject *)this, Method_CombineMenuControl_OnClickMaterial__, 0LL);
      if ( !v104 )
        goto LABEL_140;
      MaterialSvtInfo__setMaterialSvtInfo(v104, v91, v103, v93, 1, 0, v105, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !conductionWireInfo )
        goto LABEL_140;
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)conductionWireInfo,
                 v93,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !conductionWireInfo )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)conductionWireInfo,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      if ( !Entity )
        goto LABEL_140;
      v107 = (ServantLimitMaster_o *)conductionWireInfo;
      v108 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
      v109 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v214.fields.currentCryptoKey = v108;
      *(_QWORD *)&v214.fields.fakeValue = v109;
      v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v214, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                         Entity->fields.limitCount,
                                                         0LL);
      if ( !v107 )
        goto LABEL_140;
      conductionWireInfo = (UnityEngine_GameObject_o *)ServantLimitMaster__GetEntity(
                                                         v107,
                                                         v110,
                                                         (int32_t)conductionWireInfo,
                                                         0LL);
      if ( !conductionWireInfo )
        goto LABEL_140;
      v4 = v101;
      if ( SLODWORD(conductionWireInfo[1].klass) >= 4 )
      {
        if ( !v90 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v90,
          v93,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( UserServantEntity__isExceeded(Entity, 0LL) )
      {
        conductionWireInfo = (UnityEngine_GameObject_o *)v203;
        if ( !v203 )
          goto LABEL_140;
        System_Collections_Generic_List_long___Add(
          v203,
          v93,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsExchangeSvt(Entity, 0LL);
      if ( ((unsigned __int8)conductionWireInfo & 1) != 0 )
        this->fields._isExchangeSvtInList_k__BackingField = 1;
      ++v91;
    }
    while ( (__int64)v91 < (int)v86 );
    if ( !v90 )
      goto LABEL_140;
    v111 = System_Collections_Generic_List_long___ToArray(
             v90,
             (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.highRarityList = v111;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.highRarityList,
      (System_Int32_array **)v111,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    conductionWireInfo = (UnityEngine_GameObject_o *)v203;
    if ( !v203 )
      goto LABEL_140;
    v118 = System_Collections_Generic_List_long___ToArray(
             v203,
             (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    this->fields.exceededCheckList = v118;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.exceededCheckList,
      (System_Int32_array **)v118,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.selectGrid;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UIGrid__set_repositionNow((UIGrid_o *)conductionWireInfo, 1, 0LL);
    spendQp = v101->fields.spendQp;
    qpLb = this->fields.qpLb;
    this->fields._spendQpVal_k__BackingField = spendQp;
    v205 = spendQp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_39741776(
                                                       (int32_t)&v205,
                                                       (System_String_o *)StringLiteral_9361/*"N0"*/,
                                                       0LL);
    if ( !qpLb )
      goto LABEL_140;
    UILabel__set_text(qpLb, (System_String_o *)conductionWireInfo, 0LL);
    getExp = v101->fields.getExp;
    expLb = this->fields.expLb;
    this->fields._getExpVal_k__BackingField = getExp;
    v205 = getExp;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v205, 0LL);
    if ( !expLb )
      goto LABEL_140;
    UILabel__set_text(expLb, (System_String_o *)conductionWireInfo, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !conductionWireInfo )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)conductionWireInfo,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    v129 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v130 = (DataMasterBase_WarMaster__WarEntity__int__o *)conductionWireInfo;
    v131 = *(_QWORD *)&v129->fields.svtId.fields.currentCryptoKey;
    v132 = *(_QWORD *)&v129->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v215.fields.currentCryptoKey = v131;
    *(_QWORD *)&v215.fields.fakeValue = v132;
    conductionWireInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                       v215,
                                                       0LL);
    if ( !v130 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v130,
                                                       (int32_t)conductionWireInfo,
                                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v136 = LevelMax;
    if ( (_DWORD)checkLv == LevelMax )
    {
      this->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(this, (int32_t)checkLv, v135) )
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
    v137 = this->fields.baseData;
    if ( !v137 )
      goto LABEL_140;
    currentLvLb = this->fields.currentLvLb;
    conductionWireInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v137 + 256, 0LL);
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
    v142 = LocalizationManager__Get((System_String_o *)StringLiteral_7352/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = this->fields.increAmount;
    v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
    conductionWireInfo = (UnityEngine_GameObject_o *)System_String__Format(v142, v143, 0LL);
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
    afterAtk[1] += v4->fields.getHpAdjustVal;
    afterAtk[0] += v4->fields.getAtkAdjustVal;
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
        v200 = sub_B5D6C8(conductionWireInfo);
        sub_B5D668(v200, 0LL);
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
    v144 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_140;
    v145 = *(_QWORD *)&v144->fields.limitCount.fields.currentCryptoKey;
    v146 = *(_QWORD *)&v144->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v216.fields.currentCryptoKey = v145;
    *(_QWORD *)&v216.fields.fakeValue = v146;
    v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v216, 0LL);
    v148 = sub_B5D694(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v148, 0LL);
    if ( !v148 )
      goto LABEL_140;
    v155 = *p_baseData;
    *(_QWORD *)(v148 + 16) = *p_baseData;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v148 + 16),
      (System_Int32_array **)v155,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154);
    increLv = this->fields.increLv;
    *(_DWORD *)(v148 + 32) = v136;
    *(_DWORD *)(v148 + 24) = increLv;
    *(_DWORD *)(v148 + 28) = v147;
    v157 = this->fields.baseData;
    if ( !v157 )
      goto LABEL_140;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineResStatus;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)conductionWireInfo,
      (float *)&lateExp + 1,
      (int32_t *)&lateExp,
      this->fields.totalExp,
      v157->fields.lv,
      v136,
      this->fields.expType,
      0LL);
    *(_DWORD *)(v148 + 36) = HIDWORD(lateExp);
    *(_DWORD *)(v148 + 40) = lateExp;
    *(_DWORD *)(v148 + 44) = afterAtk[1];
    *(_DWORD *)(v148 + 48) = v4->fields.getHpAdjustVal;
    *(_DWORD *)(v148 + 52) = afterAtk[0];
    *(_DWORD *)(v148 + 56) = v4->fields.getAtkAdjustVal;
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( !conductionWireInfo )
      goto LABEL_140;
    CombineInfoComponent__setCombineResStatusInfo(
      (CombineInfoComponent_o *)conductionWireInfo,
      (CombineSvtData_o *)v148,
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
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v159 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v159, 0LL);
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v163 = UnityEngine_Component__GetComponent_WebViewObject_(
             (UnityEngine_Component_o *)conductionWireInfo,
             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    *(UnityEngine_Color_o *)&v164 = UnityEngine_Color__get_white(0LL);
    if ( !v163 )
      goto LABEL_140;
    UIWidget__set_color((UIWidget_o *)v163, *(UnityEngine_Color_o *)&v164, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v169 = BalanceConfig_TypeInfo;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v169 = BalanceConfig_TypeInfo;
      }
      v170 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v170 = 0;
    }
    v171 = maxAjustAtk[1];
    StatusUpAdjustHp = v169->static_fields->StatusUpAdjustHp;
    v173 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v206) = v173;
    getHpAdjustVal = v4->fields.getHpAdjustVal;
    if ( v170 && !v169->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v169);
      v169 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v173 >= StatusUpAdjustHp * v171 )
    {
      v175 = secondMaxAdjustAtk[1];
      if ( (BYTE3(v169->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    else
    {
      v175 = maxAjustAtk[1];
      if ( (BYTE3(v169->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_102;
    }
    if ( !v169->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v169);
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
LABEL_102:
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
    v176 = StatusUpAdjustHp * v175;
    if ( !conductionWireInfo )
      goto LABEL_140;
    v177 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v173;
    UIIconLabel__Set_41886452((UIIconLabel_o *)conductionWireInfo, 44, v177, v176, 0, 0LL, 0, 0, 0, 0LL);
    if ( !System_Int32__Equals_39741700((int32_t)&v206 + 4, v177, 0LL) )
    {
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpIconLabel;
      if ( !conductionWireInfo )
        goto LABEL_140;
      if ( v177 >= v176 )
        v178 = v176;
      else
        v178 = v177;
      UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v178, v176, v177 >= v176, 0LL);
    }
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustHpMaxLabel;
    if ( !conductionWireInfo )
      goto LABEL_140;
    UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !*p_baseData )
      goto LABEL_140;
    v179 = BalanceConfig_TypeInfo;
    adjustAtk = (*p_baseData)->fields.adjustAtk;
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
    {
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v179 = BalanceConfig_TypeInfo;
      }
      v181 = WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    else
    {
      v181 = 0;
    }
    v182 = maxAjustAtk[0];
    StatusUpAdjustAtk = v179->static_fields->StatusUpAdjustAtk;
    v184 = StatusUpAdjustAtk * adjustAtk;
    LODWORD(v206) = v184;
    getAtkAdjustVal = v4->fields.getAtkAdjustVal;
    if ( v181 && !v179->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v179);
      v179 = BalanceConfig_TypeInfo;
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    if ( v184 >= StatusUpAdjustAtk * v182 )
    {
      v186 = secondMaxAdjustAtk[0];
      if ( (BYTE3(v179->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_125:
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
        v187 = StatusUpAdjustAtk * v186;
        if ( !conductionWireInfo )
          goto LABEL_140;
        v188 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v184;
        UIIconLabel__Set_41886452((UIIconLabel_o *)conductionWireInfo, 45, v188, v187, 0, 0LL, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_39741700((int32_t)&v206, v188, 0LL) )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkIconLabel;
          if ( !conductionWireInfo )
            goto LABEL_140;
          if ( v188 >= v187 )
            v189 = v187;
          else
            v189 = v188;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)conductionWireInfo, v189, v187, v188 >= v187, 0LL);
        }
        conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.resAdjustAtkMaxLabel;
        if ( conductionWireInfo )
        {
          UILabel__set_text((UILabel_o *)conductionWireInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v190 = (UIWidget_o *)this->fields.qpLb;
          if ( this->fields.haveQpVal >= this->fields._spendQpVal_k__BackingField )
          {
            *(UnityEngine_Color_o *)&v196 = UnityEngine_Color__get_white(0LL);
            if ( v190 )
            {
              UIWidget__set_color(v190, *(UnityEngine_Color_o *)&v196, 0LL);
              this->fields._IsExeCombine_k__BackingField = 1;
              goto LABEL_138;
            }
          }
          else
          {
            *(UnityEngine_Color_o *)&v191 = UnityEngine_Color__get_red(0LL);
            if ( v190 )
            {
              UIWidget__set_color(v190, *(UnityEngine_Color_o *)&v191, 0LL);
              this->fields._IsExeCombine_k__BackingField = 0;
LABEL_138:
              ServantCombineControl__SetExeBtnState(this, v195);
              return;
            }
          }
        }
LABEL_140:
        sub_B5D69C(conductionWireInfo, checkLv);
      }
    }
    else
    {
      v186 = maxAjustAtk[0];
      if ( (BYTE3(v179->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_125;
    }
    if ( !v179->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v179);
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    goto LABEL_125;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_27517852(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_UserServantEntity__o *v4; // x28
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
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x19
  int64_t Instance; // x0
  __int64 v68; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WarQuestSelectionMaster_o *v70; // x21
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x25
  float v73; // s0
  float v74; // s8
  float v75; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v77; // x25
  __int64 v78; // x26
  float v79; // s9
  WarEntity_o *Entity; // x26
  UserServantEntity_o *v81; // x27
  int32_t SvtClassId; // w0
  int size; // w25
  __int64 v84; // x22
  int v85; // w21
  int v86; // w23
  unsigned int v87; // w8
  const MethodInfo *v88; // x3
  struct UserServantEntity_o *v89; // x8
  System_Collections_Generic_List_UserServantEntity__o *v90; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v91; // x28
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v94; // w0
  int64_t v95; // x27
  CombineMaterialEntity_o *v96; // x26
  int v97; // w8
  int value; // w26
  BalanceConfig_c *v99; // x0
  ServantCombineControl_c *v100; // x8
  int SameClassExp; // w27
  float FIXED_VAL; // s11
  double v103; // d0
  int v104; // w27
  int v105; // w27
  int32_t CombineQp; // w0
  int v107; // w26
  __int64 v108; // x23
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x1
  int32_t v116; // w8
  bool isAdjustAtkMax; // w8
  bool isSecondAdjustAtkMax; // w8
  System_Collections_Generic_List_long__o *v119; // x20
  int v120; // w21
  __int64 v121; // x22
  unsigned int v122; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v123; // x8
  __int128 v124; // q0
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  int v133; // [xsp+4h] [xbp-DCh]
  DataMasterBase_WarMaster__WarEntity__int__o *v134; // [xsp+8h] [xbp-D8h]
  int32_t expType; // [xsp+14h] [xbp-CCh]
  int64_t v136; // [xsp+18h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v137; // [xsp+20h] [xbp-C0h]
  CombineMaterialMaster_o *v138; // [xsp+28h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+50h] [xbp-90h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  v4 = targetMaterialList;
  if ( (byte_42E9CCB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)targetMaterialList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&System_Math_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&ServantCombineControl_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&SetCombineData_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v63, v64, v65);
    byte_42E9CCB = 1;
  }
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v70 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_89;
  v137 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  combineEventList = menuListCtr->fields.combineEventList;
  v73 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_89;
  v74 = v73;
  v138 = (CombineMaterialMaster_o *)v70;
  v75 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_89;
  v78 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v77 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v79 = v75;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v141.fields.currentCryptoKey = v78;
  *(_QWORD *)&v141.fields.fakeValue = v77;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v141, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_89;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_89;
  v81 = this->fields.baseData;
  v136 = Instance;
  if ( !v81 )
    goto LABEL_89;
  expType = HIDWORD(Entity[1].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v81, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v81, SvtClassId, 0LL);
  v133 = Instance;
  if ( !v4 )
    goto LABEL_89;
  size = v4->fields._size;
  if ( size < 1 )
  {
    v86 = 0;
    v85 = 0;
  }
  else
  {
    v134 = MasterData_WarQuestSelectionMaster;
    v84 = 0LL;
    v85 = 0;
    v86 = 0;
    v87 = v4->fields._size;
    while ( 1 )
    {
      if ( v87 <= (unsigned int)v84 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v90 = v4;
      v91 = (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields._items->m_Items[v84];
      if ( !v91 )
        goto LABEL_89;
      klass = v91[2].klass;
      monitor = v91[2].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v142.fields.currentCryptoKey = klass;
      *(_QWORD *)&v142.fields.fakeValue = monitor;
      v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v142, 0LL);
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v134,
                            v94,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_89;
      v95 = Instance;
      Instance = (int64_t)v138;
      if ( !v138 )
        goto LABEL_89;
      v96 = CombineMaterialMaster__GetEntity(v138, *(_DWORD *)(v95 + 136), v91[6].fields.missionTargetId, 0LL);
      Instance = (int64_t)v137;
      if ( !v137 )
        goto LABEL_89;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v137,
                            *(_DWORD *)(v95 + 80),
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v96 || !Instance )
        goto LABEL_89;
      v97 = *(_DWORD *)(Instance + 52);
      value = v96->fields.value;
      if ( v97 == 3 )
        goto LABEL_40;
      if ( v97 == v133 )
      {
        Instance = (int64_t)this->fields.baseData;
        if ( !Instance )
          goto LABEL_89;
        v104 = *(_DWORD *)(v95 + 80);
        if ( v104 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0LL) )
        {
LABEL_40:
          v99 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v99 = BalanceConfig_TypeInfo;
          }
          v100 = ServantCombineControl_TypeInfo;
          SameClassExp = v99->static_fields->SameClassExp;
          if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCombineControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
            v100 = ServantCombineControl_TypeInfo;
          }
          FIXED_VAL = v100->static_fields->FIXED_VAL;
          if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Math_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          }
          v103 = ceil((double)value * (double)SameClassExp / FIXED_VAL);
          if ( v103 == INFINITY )
            v103 = -INFINITY;
          value = (int)v103;
        }
      }
      Instance = UnityEngine_Mathf__CeilToInt(v74 * (float)value, 0LL);
      if ( !this->fields.baseData )
        goto LABEL_89;
      v105 = Instance;
      CombineQp = UserServantEntity__getCombineQp(this->fields.baseData, 0LL);
      Instance = UnityEngine_Mathf__CeilToInt(v79 * (float)CombineQp, 0LL);
      if ( !v136 )
        goto LABEL_89;
      v107 = Instance + v86;
      if ( (int)Instance + v86 > *(_DWORD *)(v136 + 96) )
        break;
      if ( !v66 )
        goto LABEL_89;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v66,
        v91,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
      v89 = this->fields.baseData;
      if ( !v89 )
        goto LABEL_89;
      v85 += v105;
      if ( ServantCombineControl__IsLevelMax(this, v89->fields.exp + v85, expType, v88) )
        goto LABEL_61;
      v4 = v90;
      Instance = (int64_t)ServantCombineControl_TypeInfo;
      if ( (BYTE3(ServantCombineControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        Instance = (int64_t)ServantCombineControl_TypeInfo;
      }
      if ( (_DWORD)v84 == *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL) - 1 || (int)v84 + 1 >= size )
        goto LABEL_61;
      v87 = v90->fields._size;
      ++v84;
      v86 = v107;
    }
    this->fields.isQpCondClear = 0;
  }
  v107 = v86;
  if ( !v66 )
    return 0LL;
LABEL_61:
  if ( v66->fields._size < 1 )
    return 0LL;
  v108 = sub_B5D694(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v108, 0LL);
  if ( !v108 )
    goto LABEL_89;
  v115 = (System_Int32_array **)this->fields.baseData;
  *(_QWORD *)(v108 + 16) = v115;
  sub_B5D560((BattleServantConfConponent_o *)(v108 + 16), v115, v109, v110, v111, v112, v113, v114);
  v116 = v66->fields._size;
  *(_DWORD *)(v108 + 28) = v107;
  *(_DWORD *)(v108 + 32) = v85;
  *(_QWORD *)(v108 + 48) = 0LL;
  *(_DWORD *)(v108 + 24) = v116;
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
  *(_BYTE *)(v108 + 44) = isAdjustAtkMax;
  Instance = (int64_t)this->fields.baseData;
  if ( !Instance )
LABEL_89:
    sub_B5D69C(Instance, v68);
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
  *(_BYTE *)(v108 + 45) = isSecondAdjustAtkMax;
  v119 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v119,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v120 = v66->fields._size;
  if ( v120 >= 1 )
  {
    v121 = 0LL;
    v122 = v66->fields._size;
    while ( 1 )
    {
      if ( v122 <= (unsigned int)v121 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v123 = v66->fields._items->m_Items[v121];
      if ( !v123 )
        goto LABEL_89;
      v124 = *(_OWORD *)&v123->fields.addCount;
      *(_OWORD *)&v140.fields.currentCryptoKey = *(_OWORD *)&v123->fields.missionTargetId;
      *(_OWORD *)&v140.fields.fakeValue = v124;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v139 = v140;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v139, 0LL);
      if ( !v119 )
        goto LABEL_89;
      System_Collections_Generic_List_long___Add(
        v119,
        Instance,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (int)v121 + 1 >= v120 )
        goto LABEL_87;
      v122 = v66->fields._size;
      ++v121;
    }
  }
  if ( !v119 )
    goto LABEL_89;
LABEL_87:
  v125 = (System_Int32_array **)System_Collections_Generic_List_long___ToArray(
                                  v119,
                                  (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  *(_QWORD *)(v108 + 56) = v125;
  sub_B5D560((BattleServantConfConponent_o *)(v108 + 56), v125, v126, v127, v128, v129, v130, v131);
  return (SetCombineData_o *)v108;
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
    sub_B5D69C(0LL, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
  ServantCombineControl__SetBaseSvtCardImg(this, this->fields.baseData, v6);
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 1, v7);
}


void __fastcall ServantCombineControl__SetDispCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantCombineControl_o *v5; // x20
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
  ServantCombineControl_o **p_charaGraph; // x22
  System_Int32_array **TexturePrefab_26715804; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v5 = this;
  if ( (byte_42E9CBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)usrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    this = (ServantCombineControl_o *)sub_B5D5C4(
                                        &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                        v12,
                                        v13,
                                        v14);
    byte_42E9CBC = 1;
  }
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
  this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
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
  p_charaGraph = (ServantCombineControl_o **)&v5->fields.charaGraph;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_42E9CC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E9CC4 = 1;
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


void __fastcall ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_42E9CB7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42E9CB7 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        SelfUserGame = System_Int32__ToString_39741776((int)this + 476, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !haveQpLb) )
  {
    sub_B5D69C(SelfUserGame, v6);
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
    sub_B5D69C(this, isEnabled);
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
    sub_B5D69C(0LL, v5);
  CombineRootComponent__SetRecomendedSelectUserServantIdList(combineRootComponent, 0LL);
}


void __fastcall ServantCombineControl__SetRecommendedMaterial(ServantCombineControl_o *this, const MethodInfo *method)
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  __int64 v47; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x1
  System_Int32_array **RecommendedCombineData; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v65; // x2
  WebViewManager_o *v66; // x19
  System_String_o *v67; // x20
  ServantCombineControl___c_c *v68; // x8
  struct ServantCombineControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__107_1; // x22
  System_String_o *v71; // x21
  Il2CppObject *v72; // x23
  struct ServantCombineControl___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int32_t v80; // w8
  CommonUI_o *v81; // x0
  System_String_o *v82; // x1
  System_String_o *v83; // x2
  CommonUI_o *Instance; // x19
  System_String_o *v85; // x21
  System_String_o *v86; // x22
  System_String_o *v87; // x23
  CommonConfirmDialog_ClickDelegate_o *v88; // x24
  System_String_o *v89; // x21

  if ( (byte_42E9CC8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, v14, v15, v16);
    sub_B5D5C4(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__, v17, v18, v19);
    sub_B5D5C4(&Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__, v20, v21, v22);
    sub_B5D5C4(&ServantCombineControl___c__DisplayClass107_0_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantCombineControl___c_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_11191/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_11190/*"RECOMMENDED_NOT_HAVE_QP"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_11189/*"RECOMMENDED_NOT_EXIST_MSG"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_1/*""*/, v44, v45, v46);
    byte_42E9CC8 = 1;
  }
  v47 = sub_B5D694(ServantCombineControl___c__DisplayClass107_0_TypeInfo);
  ServantCombineControl___c__DisplayClass107_0___ctor((ServantCombineControl___c__DisplayClass107_0_o *)v47, 0LL);
  if ( !v47 )
    goto LABEL_33;
  *(_QWORD *)(v47 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v47 + 16), (System_Int32_array **)this, v50, v51, v52, v53, v54, v55);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = (System_Int32_array **)ServantCombineControl__GetRecommendedCombineData(this, v56);
  *(_QWORD *)(v47 + 24) = RecommendedCombineData;
  sub_B5D560((BattleServantConfConponent_o *)(v47 + 24), RecommendedCombineData, v58, v59, v60, v61, v62, v63);
  isQpCondClear = this->fields.isQpCondClear;
  if ( *(_QWORD *)(v47 + 24) )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0LL);
        ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v47 + 24), v65);
        return;
      }
LABEL_33:
      sub_B5D69C(recommendedConfigDialog, v49);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11191/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v88 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v88,
      (Il2CppObject *)v47,
      Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__OpenConfirmDialog_18201384(Instance, (System_String_o *)StringLiteral_1/*""*/, v85, v86, v87, v88, 0, 0, 0, 0LL);
  }
  else
  {
    v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( isQpCondClear )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11189/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                0LL);
      v67 = (System_String_o *)recommendedConfigDialog;
      v68 = ServantCombineControl___c_TypeInfo;
      if ( (BYTE3(ServantCombineControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
        v68 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v68->static_fields;
      _9__107_1 = static_fields->__9__107_1;
      v71 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__107_1 )
      {
        if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v72 = (Il2CppObject *)static_fields->__9;
        _9__107_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__107_1, v72, Method_ServantCombineControl___c__SetRecommendedMaterial_b__107_1__, 0LL);
        v73 = ServantCombineControl___c_TypeInfo->static_fields;
        v73->__9__107_1 = _9__107_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v73->__9__107_1,
          (System_Int32_array **)_9__107_1,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
      }
      if ( !v66 )
        goto LABEL_33;
      v80 = 25;
      v81 = (CommonUI_o *)v66;
      v82 = v71;
      v83 = v67;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_11190/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
      _9__107_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__107_1,
        (Il2CppObject *)v47,
        Method_ServantCombineControl___c__DisplayClass107_0__SetRecommendedMaterial_b__2__,
        0LL);
      if ( !v66 )
        goto LABEL_33;
      v81 = (CommonUI_o *)v66;
      v83 = v89;
      v82 = (System_String_o *)StringLiteral_1/*""*/;
      v80 = 28;
    }
    CommonUI__OpenNotificationDialog(v81, v82, v83, _9__107_1, -1, 0, 0, 0, 0, v80, 0, 0, 0LL, 0LL);
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
    sub_B5D69C(preSelectBaseLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetStateInfoMsg(
        ServantCombineControl_o *this,
        int32_t state,
        const MethodInfo *method)
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
  if ( (byte_42E9CC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, state, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_7358/*"INFO_MSG_COMBINE_MATERIAL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_7367/*"INFO_MSG_SVTCOMBINE_BASE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42E9CC5 = 1;
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
      v30 = &StringLiteral_7358/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
    v30 = &StringLiteral_7367/*"INFO_MSG_SVTCOMBINE_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v30, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *Instance; // x0
  __int64 v13; // x1
  int v14; // s0
  float v15; // s1
  float v16; // s2
  int32_t target; // w8
  int v18; // s8
  float v19; // s9
  float v20; // s10
  int v21; // w8
  UISprite_o *campaign; // x21
  System_String_o *v23; // x0
  UILabel_o *campaignLabel; // x20
  __int64 v25; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9CBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)eventInfoData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_19916/*"img_txt_campaign_"*/, v9, v10, v11);
    byte_42E9CBA = 1;
  }
  v25 = 0LL;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  if ( !eventInfoData )
LABEL_22:
    sub_B5D69C(Instance, v13);
  target = eventInfoData->fields.target;
  v18 = v14;
  v19 = v15;
  v20 = v16;
  if ( target > 5 )
  {
    if ( target != 27 )
    {
      if ( (target & 0xFFFFFFFE) != 32 )
        goto LABEL_13;
      goto LABEL_11;
    }
LABEL_9:
    v18 = 1113849856;
    v21 = 1;
LABEL_12:
    v19 = 4.0;
    v20 = 0.0;
    HIDWORD(v25) = v21;
    goto LABEL_13;
  }
  if ( target == 2 )
    goto LABEL_9;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_11:
    v18 = 1119748096;
    v21 = 2;
    goto LABEL_12;
  }
LABEL_13:
  campaign = this->fields.campaign;
  v23 = System_Int32__ToString((int32_t)&v25 + 4, 0LL);
  Instance = System_String__Concat_44577788((System_String_o *)StringLiteral_19916/*"img_txt_campaign_"*/, v23, 0LL);
  if ( !campaign )
    goto LABEL_22;
  UISprite__set_spriteName(campaign, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaign;
  if ( !Instance )
    goto LABEL_22;
  ((void (__fastcall *)(System_String_o *, void *))Instance->klass[1]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[1]._1.interopData);
  Instance = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)EventCampaignMaster__getData(
                                  (EventCampaignMaster_o *)Instance,
                                  eventInfoData->fields.eventId,
                                  0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v25) = SLODWORD(Instance[2].klass) / 1000;
  campaignLabel = this->fields.campaignLabel;
  Instance = System_Int32__ToString((int32_t)&v25, 0LL);
  if ( !campaignLabel )
    goto LABEL_22;
  UILabel__set_text(campaignLabel, Instance, 0LL);
  Instance = (System_String_o *)this->fields.campaignLabel;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(v26.fields.x) = v18;
  v26.fields.y = v19;
  v26.fields.z = v20;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v26, 0LL);
}


void __fastcall ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v10; // x1

  if ( (byte_42E9CC0 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, v5, v6, v7);
    byte_42E9CC0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !this->fields.exeCombineDlg )
    sub_B5D69C(SelfUserGame, v10);
  SetRarityDialogControl__SetExceedMaterialInfo(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    this->fields.exceededCheckList,
    v8,
    this->fields._spendQpVal_k__BackingField,
    SelfUserGame->fields.qp,
    0LL);
}


void __fastcall ServantCombineControl__ShowRareSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
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
  System_String_o *v17; // x20
  DataManager_o *SelfUserGame; // x0
  __int64 v19; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int32_t masterLoadThreads; // w21
  unsigned __int64 v22; // x23
  unsigned __int64 max_length; // x9
  int64_t v24; // x22
  bool v25; // w6
  __int64 v26; // x0

  if ( (byte_42E9CBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, v14, v15, v16);
    byte_42E9CBF = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_16;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_16;
  masterLoadThreads = (int32_t)SelfUserGame->fields.masterLoadThreads;
  v22 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( (__int64)v22 >= (int)max_length )
    {
      v25 = 0;
      goto LABEL_19;
    }
    if ( v22 >= max_length )
    {
      v26 = sub_B5D6C8(SelfUserGame);
      sub_B5D668(v26, 0LL);
    }
    v24 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v22];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      SelfUserGame,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
                                      v24,
                                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      break;
    selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
    ++v22;
    if ( !selectMaterialUsrSvtIdList_k__BackingField )
      goto LABEL_16;
  }
  v25 = 1;
LABEL_19:
  SelfUserGame = (DataManager_o *)this->fields.exeCombineDlg;
  if ( !SelfUserGame )
LABEL_16:
    sub_B5D69C(SelfUserGame, v19);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v17,
    this->fields._spendQpVal_k__BackingField,
    masterLoadThreads,
    v25,
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
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x3
  System_Collections_IEnumerator_c *v33; // x8
  unsigned __int64 v34; // x10
  System_Collections_IEnumerator_c **v35; // x11
  __int64 v36; // x0
  UnityEngine_Component_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v41; // x1
  __int64 v42; // x0
  __int64 v43; // x3
  __int64 v44; // x8
  __int64 v45; // x21
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_42E9CCE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, progress, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v21, v22, v23);
    byte_42E9CCE = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_B5D69C(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = (System_Collections_IEnumerator_c **)&v33->_1.interfaceOffsets->offset;
      while ( *(v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        v35 += 2;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1].method;
    }
    else
    {
LABEL_21:
      v36 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v32);
    }
    v37 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v36)(
                                       Enumerator,
                                       *(_QWORD *)(v36 + 8));
    if ( !v37 )
      goto LABEL_61;
    v39 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v39
      || (UnityEngine_Transform_c *)v37->klass->_2.typeHierarchy[v39 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v37 = (UnityEngine_Component_o *)sub_B5D990(v37);
LABEL_61:
      sub_B5D69C(v37, v38);
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v37,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B5D69C(0LL, v41);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  }
  v42 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v42 )
  {
    v44 = *(_QWORD *)v42;
    v45 = v42;
    if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
    {
      v46 = 0LL;
      v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
          goto LABEL_33;
      }
      v48 = v44 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_33:
      v48 = sub_AF54C0(v42, System_IDisposable_TypeInfo, 0LL, v43);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
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
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
          if ( helpBtn )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_63:
    sub_B5D69C(helpBtn, *(_QWORD *)&progress);
  }
}


void __fastcall ServantCombineControl__UnBlockTutorial(ServantCombineControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_IEnumerator_c *v35; // x8
  unsigned __int64 v36; // x10
  System_Collections_IEnumerator_c **v37; // x11
  __int64 v38; // x0
  UnityEngine_Component_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x9
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v43; // x1
  __int64 v44; // x0
  __int64 v45; // x3
  __int64 v46; // x8
  __int64 v47; // x20
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v52; // x8
  struct SetRarityDialogControl_o *v53; // x8

  if ( (byte_42E9CCD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v23, v24, v25);
    byte_42E9CCD = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          helpBtn,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_62;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_B5D69C(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_14;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_14:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = (System_Collections_IEnumerator_c **)&v35->_1.interfaceOffsets->offset;
      while ( *(v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        v37 += 2;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_21;
      }
      v38 = (__int64)&v35->vtable[*(_DWORD *)v37 + 1].method;
    }
    else
    {
LABEL_21:
      v38 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v34);
    }
    v39 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v38)(
                                       Enumerator,
                                       *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_B5D69C(0LL, v40);
    v41 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v41
      || (UnityEngine_Transform_c *)v39->klass->_2.typeHierarchy[v41 - 1] != UnityEngine_Transform_TypeInfo )
    {
      helpBtn = (UnityEngine_GameObject_o *)sub_B5D990(v39);
      goto LABEL_62;
    }
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v39,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_WebViewObject )
      sub_B5D69C(0LL, v43);
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
  }
  v44 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v44 )
  {
    v46 = *(_QWORD *)v44;
    v47 = v44;
    if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
          goto LABEL_33;
      }
      v50 = v46 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_33:
      v50 = sub_AF54C0(v44, System_IDisposable_TypeInfo, 0LL, v45);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
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
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_62;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  v52 = this->fields.exeCombineDlg;
  if ( !v52 )
    goto LABEL_62;
  helpBtn = (UnityEngine_GameObject_o *)v52->fields.cancelBtnLb;
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
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn
    || (helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))helpBtn->klass[1]._1.namespaze)(
                                                helpBtn,
                                                1LL,
                                                helpBtn->klass[1]._1.byval_arg.data),
        (v53 = this->fields.exeCombineDlg) == 0LL)
    || (helpBtn = (UnityEngine_GameObject_o *)v53->fields.cancelBtnLb) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0LL)) == 0LL
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                helpBtn,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_62:
    sub_B5D69C(helpBtn, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))helpBtn->klass[1]._1.implementedInterfaces)(
    helpBtn,
    0LL,
    1LL,
    helpBtn->klass[1]._1.interfaceOffsets);
}


void __fastcall ServantCombineControl__Update(ServantCombineControl_o *this, const MethodInfo *method)
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
  int64_t campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaiginListPerSelectSvt; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v37; // x8
  int size; // w8
  const MethodInfo *v39; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v40; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v41; // x21
  EventCampaignEntity_o *v42; // x8
  int64_t v43; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v44; // x20
  const MethodInfo *v45; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v46; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v47; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v48; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v49; // x20
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  float realtimeSinceStartup; // s0
  float campaignAlphaAnimTimeOld; // s9
  float v53; // s8
  MenuListControl_c *v54; // x0
  const MethodInfo *v55; // x1
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v56; // x21
  __int64 campaiginPerSelectSvtListIndex; // x22
  System_Collections_Generic_List_EventCampaignEntity__o *v58; // x21
  EventCampaignEntity_o *v59; // x8
  int64_t v60; // x20
  const MethodInfo *v61; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v62; // x20
  __int64 v63; // x21
  const MethodInfo *v64; // x2
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v65; // x20
  __int64 v66; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v67; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v68; // x20
  __int64 v69; // x21
  System_Collections_Generic_List_EventCampaignEntity__o *v70; // x20
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v71; // x20
  int32_t v72; // w21
  int32_t v73; // w8
  System_Collections_Generic_List_EventCampaignEntity__o *v74; // x20
  struct AlphaTransitionCalculator_o *v75; // x8

  if ( (byte_42E9CB2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v20, v21, v22);
    sub_B5D5C4(&MenuListControl_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v29, v30, v31);
    sub_B5D5C4(&Method_TransitionCalculator_float__get_Current__, v32, v33, v34);
    byte_42E9CB2 = 1;
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
    v37 = this->fields.campaiginListPerSelectSvt;
    if ( v37 )
    {
      size = v37->fields._size;
      if ( size >= 1 )
      {
        if ( size != 1 )
        {
          campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
          if ( !campaignAlphaCalculator )
            return;
          TransitionCalculator_float___Update(
            campaignAlphaCalculator,
            (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__);
          campaign = (int64_t)this->fields.campaignAlphaCalculator;
          if ( !campaign )
            goto LABEL_98;
          if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0LL) )
          {
            realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
            v53 = realtimeSinceStartup;
            v54 = MenuListControl_TypeInfo;
            if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MenuListControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
              v54 = MenuListControl_TypeInfo;
            }
            if ( (float)(v53 - campaignAlphaAnimTimeOld) >= v54->static_fields->ALPHA_ANIMATION_INTERVAL )
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
              campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v55);
              v56 = this->fields.campaiginListPerSelectSvt;
              if ( !v56 )
                goto LABEL_98;
              campaiginPerSelectSvtListIndex = this->fields.campaiginPerSelectSvtListIndex;
              if ( v56->fields._size <= (unsigned int)campaiginPerSelectSvtListIndex )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v58 = v56->fields._items->m_Items[campaiginPerSelectSvtListIndex];
              if ( !v58 )
                goto LABEL_98;
              if ( !v58->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v59 = v58->fields._items->m_Items[0];
              if ( !v59 )
                goto LABEL_98;
              if ( !campaign )
                goto LABEL_98;
              campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                                    v59->fields.eventId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !campaign )
                goto LABEL_98;
              v60 = *(_QWORD *)(campaign + 96);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              campaign = NetworkManager__getTime(0LL);
              if ( v60 < campaign )
              {
                v62 = this->fields.campaiginListPerSelectSvt;
                if ( !v62 )
                  goto LABEL_98;
                v63 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v62->fields._size <= (unsigned int)v63 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                campaign = (int64_t)v62->fields._items->m_Items[v63];
                if ( !campaign )
                  goto LABEL_98;
                System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                  (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                  0,
                  (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                v65 = this->fields.campaiginListPerSelectSvt;
                if ( !v65 )
                  goto LABEL_98;
                v66 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v65->fields._size <= (unsigned int)v66 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                v67 = v65->fields._items->m_Items[v66];
                if ( !v67 )
                  goto LABEL_98;
                v68 = this->fields.campaiginListPerSelectSvt;
                if ( !v68 )
                  goto LABEL_98;
                v69 = this->fields.campaiginPerSelectSvtListIndex;
                if ( v67->fields._size <= 0 )
                {
                  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                    v69,
                    (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                }
                else
                {
                  if ( v68->fields._size <= (unsigned int)v69 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  v70 = v68->fields._items->m_Items[v69];
                  if ( !v70 )
                    goto LABEL_98;
                  if ( !v70->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  ServantCombineControl__SetupCampaign(this, v70->fields._items->m_Items[0], v64);
                }
              }
              v71 = this->fields.campaiginListPerSelectSvt;
              v72 = this->fields.campaiginPerSelectSvtListIndex + 1;
              this->fields.campaiginPerSelectSvtListIndex = v72;
              if ( !v71 )
                goto LABEL_98;
              v73 = v71->fields._size;
              if ( v73 <= v72 )
              {
                this->fields.campaiginPerSelectSvtListIndex = 0;
                v73 = v71->fields._size;
                v72 = 0;
              }
              if ( v73 <= (unsigned int)v72 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v74 = v71->fields._items->m_Items[v72];
              if ( !v74 )
                goto LABEL_98;
              if ( !v74->fields._size )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              ServantCombineControl__SetupCampaign(this, v74->fields._items->m_Items[0], v61);
            }
            v75 = this->fields.campaignAlphaCalculator;
            if ( v75 )
            {
              campaign = (int64_t)this->fields.campaign;
              this->fields.campaignAlphaAnimNow = v75->fields._Current_k__BackingField;
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
          sub_B5D69C(campaign, method);
        }
        campaign = (int64_t)this->fields.campaign;
        if ( !campaign )
          goto LABEL_98;
        (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)campaign + 440LL))(
          campaign,
          *(_QWORD *)(*(_QWORD *)campaign + 448LL),
          1.0);
        campaign = (int64_t)ServantCombineControl__get_EventMaster(this, v39);
        v40 = this->fields.campaiginListPerSelectSvt;
        if ( !v40 )
          goto LABEL_98;
        if ( !v40->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v41 = v40->fields._items->m_Items[0];
        if ( !v41 )
          goto LABEL_98;
        if ( !v41->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v42 = v41->fields._items->m_Items[0];
        if ( !v42 )
          goto LABEL_98;
        if ( !campaign )
          goto LABEL_98;
        campaign = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)campaign,
                              v42->fields.eventId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !campaign )
          goto LABEL_98;
        v43 = *(_QWORD *)(campaign + 96);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        campaign = NetworkManager__getTime(0LL);
        if ( v43 < campaign )
        {
          v44 = this->fields.campaiginListPerSelectSvt;
          if ( v44 )
          {
            if ( !v44->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            campaign = (int64_t)v44->fields._items->m_Items[0];
            if ( campaign )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)campaign,
                0,
                (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
              v46 = this->fields.campaiginListPerSelectSvt;
              if ( v46 )
              {
                if ( !v46->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                v47 = v46->fields._items->m_Items[0];
                if ( v47 )
                {
                  v48 = this->fields.campaiginListPerSelectSvt;
                  if ( v48 )
                  {
                    if ( v47->fields._size <= 0 )
                    {
                      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.campaiginListPerSelectSvt,
                        0,
                        (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                      return;
                    }
                    if ( !v48->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                    v49 = v48->fields._items->m_Items[0];
                    if ( v49 )
                    {
                      if ( !v49->fields._size )
                        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                      ServantCombineControl__SetupCampaign(this, v49->fields._items->m_Items[0], v45);
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
      sub_B5D69C(0LL, isDecide);
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
  if ( (byte_42E9CD0 & 1) == 0 )
  {
    this = (ServantCombineControl_o *)sub_B5D5C4(
                                        &Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__,
                                        (_DWORD)a,
                                        (_DWORD)b,
                                        method);
    byte_42E9CD0 = 1;
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
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL
    || (v10 = *(_QWORD *)&this->fields._targetType_k__BackingField,
        (this = (ServantCombineControl_o *)ServantCombineControl__get_EventMaster(v6, (const MethodInfo *)a)) == 0LL)
    || (this = (ServantCombineControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            b->fields.eventId,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(this, a);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  BattleServantConfConponent_o *p_eventMaster; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42E9CB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E9CB1 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v10);
    p_eventMaster = (BattleServantConfConponent_o *)&this->fields.eventMaster;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B5D560(p_eventMaster, MasterData_WarQuestSelectionMaster, v13, v14, v15, v16, v17, v18);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantCombineControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D3E & 1) == 0 )
  {
    sub_B5D5C4(&ServantCombineControl___c_TypeInfo, v1, v2, v3);
    byte_42E5D3E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantCombineControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCombineControl___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantCombineControl___c___ctor(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCombineControl___c___InitSvtCombine_b__81_0(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CombineRootComponent_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x9
  ServantCombineControl___c_o *v10; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v11; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_42E5D3F & 1) == 0 )
  {
    sub_B5D5C4(&CombineRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42E5D3F = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_B5D69C(Instance, v8);
  v9 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v9 - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    v10 = (ServantCombineControl___c_o *)sub_B5D990(Instance);
    ServantCombineControl___c___SetBaseSvtCardImg_b__88_0(v10, v11, v12, v13);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__113_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0LL), !b) )
    sub_B5D69C(this, a);
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

  if ( (byte_42E5D40 & 1) == 0 )
  {
    this = (ServantCombineControl___c_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__,
                                            (_DWORD)a,
                                            (_DWORD)b,
                                            method);
    byte_42E5D40 = 1;
  }
  if ( !a )
    goto LABEL_12;
  if ( !a->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v6 = a->fields._items->m_Items[0];
  if ( !v6 || !b )
    goto LABEL_12;
  target = v6->fields.target;
  if ( !b->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v8 = b->fields._items->m_Items[0];
  if ( !v8 )
LABEL_12:
    sub_B5D69C(this, a);
  return target - v8->fields.target;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__107_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5D41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5D41 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_42E5D42 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E5D42 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B5D69C(Instance, v7);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass107_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_42E5D43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5D43 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_B5D69C(Instance, v6);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0LL);
}