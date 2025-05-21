void __fastcall ServantCombineControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B489B6 & 1) == 0 )
  {
    sub_1BDB878(&ServantCombineControl_TypeInfo, v1);
    byte_4B489B6 = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void __fastcall ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B489B5 & 1) == 0 )
  {
    sub_1BDB878(&CombineMenuControl_TypeInfo, method);
    byte_4B489B5 = 1;
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  int v8; // w20
  _BOOL4 isLimitCountMax; // w0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20
  UILabel_o *v12; // x20
  UILabel_o *v13; // x20

  if ( (byte_4B489A1 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3748/*"CONDUCTION_LIMITUP"*/, v3);
    sub_1BDB878(&StringLiteral_3751/*"CONDUCTION_LVEXCEED_MSG"*/, v4);
    sub_1BDB878(&StringLiteral_3750/*"CONDUCTION_LVEXCEED"*/, v5);
    sub_1BDB878(&StringLiteral_3749/*"CONDUCTION_LIMITUP_MSG"*/, v6);
    byte_4B489A1 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._selectMaterialUsrSvtIdList_k__BackingField,
         0LL) )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_33;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
    {
      conductionWireInfo = this->fields.resAdjustInfo;
      if ( !conductionWireInfo )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
      if ( !conductionWireInfo )
        goto LABEL_33;
      CombineInfoComponent__setCurrentStatusInfo(
        (CombineInfoComponent_o *)conductionWireInfo,
        this->fields.baseData,
        0LL);
      conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
      if ( !conductionWireInfo )
        goto LABEL_33;
      conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsHeroine(
                                                         (UserServantEntity_o *)conductionWireInfo,
                                                         0LL);
      if ( !this->fields.baseData )
        goto LABEL_33;
      v8 = (int)conductionWireInfo;
      isLimitCountMax = UserServantEntity__isLimitCountMax(this->fields.baseData, 0LL);
      if ( ((v8 | isLimitCountMax) & 1) != 0 )
      {
        if ( isLimitCountMax )
        {
          conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
          if ( !conductionWireInfo )
            goto LABEL_33;
          if ( !UserServantEntity__isExceedLvMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
          {
            conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
            if ( !conductionWireInfo )
              goto LABEL_33;
            if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)conductionWireInfo, 0LL) )
            {
              if ( (v8 & 1) == 0 )
                goto LABEL_20;
              conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
              if ( !conductionWireInfo )
                goto LABEL_33;
              if ( UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)conductionWireInfo, 0LL) )
              {
LABEL_20:
                conductionWireLabel = this->fields.conductionWireLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_3751/*"CONDUCTION_LVEXCEED_MSG"*/,
                                                                   0LL);
                if ( conductionWireLabel )
                {
                  UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
                  conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
                  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_3750/*"CONDUCTION_LVEXCEED"*/,
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
LABEL_33:
                sub_1BDBAD4(conductionWireInfo, method);
              }
            }
          }
        }
      }
      else
      {
        v12 = this->fields.conductionWireLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3749/*"CONDUCTION_LIMITUP_MSG"*/,
                                                           0LL);
        if ( !v12 )
          goto LABEL_33;
        UILabel__set_text(v12, (System_String_o *)conductionWireInfo, 0LL);
        v13 = this->fields.conductionWireButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3748/*"CONDUCTION_LIMITUP"*/,
                                                           0LL);
        if ( !v13 )
          goto LABEL_33;
        UILabel__set_text(v13, (System_String_o *)conductionWireInfo, 0LL);
        conductionWireInfo = this->fields.conductionWireInfo;
        if ( !conductionWireInfo )
          goto LABEL_33;
        UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
        this->fields.conductionType = 1;
      }
    }
  }
}


void __fastcall ServantCombineControl__CheckExceededSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *exceededCheckList; // x8

  exceededCheckList = this->fields.exceededCheckList;
  if ( !exceededCheckList )
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B489A4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&lv);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B489A4 = 1;
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
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BDBAD4(baseData, *(_QWORD *)&lv);
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
  const MethodInfo *v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4B4899D & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4B4899D = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v13, 0LL);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v12, 0LL) )
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, (int32_t)method, v3);
}


void __fastcall ServantCombineControl__CheckRareSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *highRarityList; // x8

  highRarityList = this->fields.highRarityList;
  if ( !highRarityList )
    sub_1BDBAD4(this, method);
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
    sub_1BDBAD4(this, e1);
  Rarity = UserServantEntity__getRarity(e2, 0LL);
  result = System_Int32__CompareTo_64086936((int32_t)&SvtClassId, Rarity, 0LL);
  if ( !result )
  {
    SvtClassId = UserServantEntity__getSvtClassId(e1, 0, 0, 0LL);
    v8 = UserServantEntity__getSvtClassId(e2, 0, 0, 0LL);
    return System_Int32__CompareTo_64086936((int32_t)&SvtClassId, v8, 0LL);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  __int64 v25; // x20
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( (byte_4B489A9 & 1) == 0 )
  {
    sub_1BDB878(&System_IDisposable_TypeInfo, method);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&UnityEngine_Transform_TypeInfo, v5);
    byte_4B489A9 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid
    || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0LL)) == 0LL )
  {
    sub_1BDBAD4(selectGrid, method);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0LL);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v7);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v16 = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1BDBD94(v17);
LABEL_35:
      sub_1BDBAD4(v17, v18);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
  }
  v21 = sub_1BDB9B4(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v24 = *(_QWORD *)v21;
    v25 = v21;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_30;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_30:
      v28 = sub_1C2C00C(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField, 0, v22, v23);
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
  __int64 v35; // x2
  int v36; // w26
  const MethodInfo *v37; // x3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  ServantCombineControl_o *v42; // x0
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x2
  System_Comparison_T__o *v46; // x21
  ServantCombineControl_o *v47; // [xsp+8h] [xbp-68h]

  if ( (byte_4B489AF & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_UserServantEntity__TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BDB878(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo, v14);
    sub_1BDB878(&RecommendedConfigSaveData_TypeInfo, v15);
    sub_1BDB878(&Method_ServantCombineControl_ClassRaritySort__, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BDB878(&SvtClassAttri_TypeInfo, v18);
    byte_4B489AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_22;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.baseData;
  if ( !Instance )
    goto LABEL_22;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0LL);
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
  v26 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v26,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
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
                           (const MethodInfo_36B8AB0 *)Method_System_Collections_Generic_List_int__get_Item__);
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
          *(const MethodInfo_36BB5CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
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
    sub_1BDBAD4(Instance, v20);
  }
LABEL_23:
  v47 = this;
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
        Instance = (void *)UserServantEntity__getSvtClassId(v34, 0, 0, 0LL);
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
      Instance = (void *)UserServantEntity__getSvtClassId(v34, 0, 0, 0LL);
      if ( !v47->fields.baseData )
        goto LABEL_22;
      v36 = (int)Instance;
      Instance = (void *)UserServantEntity__getSvtClassId(v47->fields.baseData, 0, 0, 0LL);
      if ( v36 == (_DWORD)Instance )
        goto LABEL_40;
LABEL_47:
      if ( v33 == v32 )
        goto LABEL_50;
      if ( ++v32 >= (unsigned __int64)CombineMaterialList->max_length )
        sub_1BDBADC(Instance, v20, v35);
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_22;
      Instance = (void *)UserServantEntity__getSvtClassId(v34, 0, 0, 0LL);
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
                         (const MethodInfo_36BB944 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_22;
      v38 = v22->fields._items;
      v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v22->fields._version;
      if ( !v38 )
        goto LABEL_22;
      v40 = v22->fields._size;
      if ( (unsigned int)v40 >= v38->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v34,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &v38->obj.klass + v40;
        v22->fields._size = v40 + 1;
        v41[4] = (Il2CppClass *)v34;
        sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v34, v35, v37);
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
    Instance = v47->fields.baseData;
    if ( !Instance )
      goto LABEL_22;
    v42 = (ServantCombineControl_o *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0LL);
    v22 = (System_Collections_Generic_List_object__o *)ServantCombineControl__MixMaterialSort(
                                                         v42,
                                                         (int32_t)v42,
                                                         (System_Collections_Generic_List_Rarity_TYPE__o *)v26,
                                                         (System_Collections_Generic_List_UserServantEntity__o *)v22,
                                                         v43);
  }
  else
  {
    v46 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(v46, (Il2CppObject *)v47, Method_ServantCombineControl_ClassRaritySort__, 0LL);
    System_Collections_Generic_List_object___Sort_57505928(
      v22,
      v46,
      (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  return ServantCombineControl__SetCombineData_47469160(
           v47,
           (System_Collections_Generic_List_UserServantEntity__o *)v22,
           v44);
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

  if ( (byte_4B4899B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v3);
    byte_4B4899B = 1;
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
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_64087256(
                                               (int32_t)&v12,
                                               (System_String_o *)StringLiteral_9229/*"N0"*/,
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
    sub_1BDBAD4(currentLvObj, method);
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
  const MethodInfo *v8; // x3

  if ( (byte_4B48999 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48999 = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1BDBAD4(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)p_charaGraph, 0, v7, v8);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v33; // x1
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v39; // x0
  void *v40; // x0
  int v41; // w1
  __int64 v42; // x21
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B48998 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&CombineRootComponent_TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventInfoData__get_Count__, v8);
    sub_1BDB878(&LocalizationManager_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10);
    sub_1BDB878(&TutorialFlag_TypeInfo, v11);
    sub_1BDB878(&Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, v12);
    sub_1BDB878(&ServantCombineControl___c_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_8797/*"MSG_PRESELECT_BASE_SVT"*/, v14);
    sub_1BDB878(&StringLiteral_6950/*"GET_EXP_INFO"*/, v15);
    sub_1BDB878(&StringLiteral_9235/*"NEED_QP_INFO"*/, v16);
    sub_1BDB878(&StringLiteral_1/*""*/, v17);
    byte_4B48998 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39449392(102, 0LL) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NEED_QP_INFO"*/, 0LL);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0LL);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6950/*"GET_EXP_INFO"*/, 0LL);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0LL);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField, 0, v29, v30);
        ServantCombineControl__InitMaterialSvtInfo(this, v31);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0LL);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_8797/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
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
                  ServantCombineControl__SetExeBtnState(this, v33);
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
                            (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                          v44 = v43;
                          while ( 1 )
                          {
                            v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                    &v44,
                                    (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                            if ( !v36 )
                              break;
                            if ( !v44.fields._current )
                              sub_1BDBAD4(v36, v37);
                            klass_high = HIDWORD(v44.fields._current[1].klass);
                            if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                            {
                              v39 = this->fields.menuListCtr;
                              if ( !v39 )
                                sub_1BDBAD4(0LL, v37);
                              MenuListControl__setBannerIcon(
                                v39,
                                this->fields.eventNoticeImg,
                                (EventEntity_o *)v44.fields._current[5].klass,
                                0LL);
                            }
                          }
                          System_Collections_Generic_List_Enumerator_object___Dispose(
                            &v44,
                            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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
    sub_1BDBAD4(selectMaterialSvtBtn, v19);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].monitor;
  if ( !selectMaterialSvtBtn )
    goto LABEL_46;
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(selectMaterialSvtBtn->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[27].monitor) == 1 )
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
        _9__81_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(_9__81_0, v23, Method_ServantCombineControl___c__InitSvtCombine_b__81_0__, 0LL);
        static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_0 = _9__81_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v25, v26);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__81_0, 0LL);
    }
    goto LABEL_18;
  }
  sub_1BDBD94(selectMaterialSvtBtn);
  if ( v41 != 1 )
  {
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1CC490C();
  }
  v42 = *(_QWORD *)__cxa_begin_catch(v40);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v42 )
    sub_1BDBACC(v42);
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

  if ( (byte_4B489B0 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantExpMaster___, *(_QWORD *)&totalExp);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B489B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v23, 0LL);
  if ( !v14
    || (DataMasterBase_object__object__int___GetEntity(
          v14,
          (int32_t)Instance,
          (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0LL) )
  {
LABEL_22:
    sub_1BDBAD4(Instance, v12);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantExpMaster___);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_object__o *v36; // x0
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  ServantCombineControl___c_c *v40; // x0
  System_Comparison_T__o *_9__115_0; // x23
  Il2CppObject *v42; // x24
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_List_object__o *v46; // x23
  int32_t v47; // w19
  int32_t v48; // w24
  int v49; // w25
  int32_t v50; // w26
  Il2CppObject *v51; // x27
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int32_t v58; // w26
  Il2CppObject *v59; // x27
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int32_t v66; // w26
  Il2CppObject *v67; // x27
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0

  if ( (byte_4B489B2 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_UserServantEntity__TypeInfo, *(_QWORD *)&baseServantClass);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__, v13);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_1BDB878(&SvtClassAttri_TypeInfo, v15);
    sub_1BDB878(&Method_ServantCombineControl___c__MixMaterialSort_b__115_0__, v16);
    sub_1BDB878(&ServantCombineControl___c_TypeInfo, v17);
    byte_4B489B2 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(baseServantClass, 0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        goto LABEL_75;
      v25 = Item;
      Item = (Il2CppObject *)UserServantEntity__getSvtClassId((UserServantEntity_o *)Item, 0, 0, 0LL);
      if ( (_DWORD)Item == baseServantClass )
      {
        if ( !v18 )
          goto LABEL_75;
        items = v18->fields._items;
        v29 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_75;
        v30 = v18->fields._size;
        if ( (unsigned int)v30 >= items->max_length )
        {
          v35 = v29[4];
          v36 = v18;
LABEL_27:
          System_Collections_Generic_List_object___AddWithResize(
            v36,
            v25,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v35 + 192) + 112LL));
          continue;
        }
        v31 = &items->obj.klass + v30;
        v18->fields._size = v30 + 1;
      }
      else if ( (_DWORD)Item == 1001 )
      {
        if ( !v19 )
          goto LABEL_75;
        v32 = v19->fields._items;
        v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v19->fields._version;
        if ( !v32 )
          goto LABEL_75;
        v34 = v19->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          v35 = v33[4];
          v36 = v19;
          goto LABEL_27;
        }
        v31 = &v32->obj.klass + v34;
        v19->fields._size = v34 + 1;
      }
      else
      {
        if ( !v20 )
          goto LABEL_75;
        v37 = v20->fields._items;
        v38 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v20->fields._version;
        if ( !v37 )
          goto LABEL_75;
        v39 = v20->fields._size;
        if ( (unsigned int)v39 >= v37->max_length )
        {
          v35 = v38[4];
          v36 = v20;
          goto LABEL_27;
        }
        v31 = &v37->obj.klass + v39;
        v20->fields._size = v39 + 1;
      }
      v31[4] = (Il2CppClass *)v25;
      sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
    }
  }
  if ( !v20 )
    goto LABEL_75;
  if ( v20->fields._size >= 1 )
  {
    v40 = ServantCombineControl___c_TypeInfo;
    if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
      v40 = ServantCombineControl___c_TypeInfo;
    }
    _9__115_0 = (System_Comparison_T__o *)v40->static_fields->__9__115_0;
    if ( !_9__115_0 )
    {
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = ServantCombineControl___c_TypeInfo;
      }
      v42 = (Il2CppObject *)v40->static_fields->__9;
      _9__115_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_UserServantEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__115_0,
        v42,
        Method_ServantCombineControl___c__MixMaterialSort_b__115_0__,
        0LL);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
      static_fields->__9__115_0 = (struct System_Comparison_UserServantEntity__o *)_9__115_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__115_0, (int32_t)_9__115_0, v44, v45);
    }
    System_Collections_Generic_List_object___Sort_57505928(
      v20,
      _9__115_0,
      (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  }
  v46 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Item = (Il2CppObject *)checkRarityTypeList;
  if ( !checkRarityTypeList )
    goto LABEL_75;
  v47 = checkRarityTypeList->fields._size;
  if ( v47 >= 1 )
  {
    v48 = 0;
    while ( 1 )
    {
      Item = (Il2CppObject *)System_Collections_Generic_List_Int32Enum___get_Item(
                               (System_Collections_Generic_List_T__o *)Item,
                               v48,
                               (const MethodInfo_36BB2DC *)Method_System_Collections_Generic_List_Rarity_TYPE__get_Item__);
      if ( !v18 )
        goto LABEL_75;
      v49 = (int)Item;
      if ( v18->fields._size >= 1 )
        break;
LABEL_52:
      if ( !v19 )
        goto LABEL_75;
      if ( v19->fields._size >= 1 )
      {
        v58 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v19,
                   v58,
                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v59 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v49 )
          {
            if ( !v46 )
              goto LABEL_75;
            v62 = v46->fields._items;
            v63 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v46->fields._version;
            if ( !v62 )
              goto LABEL_75;
            v64 = v46->fields._size;
            if ( (unsigned int)v64 >= v62->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v46,
                v59,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = &v62->obj.klass + v64;
              v46->fields._size = v64 + 1;
              v65[4] = (Il2CppClass *)v59;
              sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
            }
          }
        }
        while ( ++v58 < v19->fields._size );
      }
      if ( v20->fields._size >= 1 )
      {
        v66 = 0;
        do
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v20,
                   v66,
                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !Item )
            goto LABEL_75;
          v67 = Item;
          Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
          if ( (_DWORD)Item == v49 )
          {
            if ( !v46 )
              goto LABEL_75;
            v70 = v46->fields._items;
            v71 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v46->fields._version;
            if ( !v70 )
              goto LABEL_75;
            v72 = v46->fields._size;
            if ( (unsigned int)v72 >= v70->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v46,
                v67,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &v70->obj.klass + v72;
              v46->fields._size = v72 + 1;
              v73[4] = (Il2CppClass *)v67;
              sub_1BDB81C((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v67, v68, v69);
            }
          }
        }
        while ( ++v66 < v20->fields._size );
      }
      Item = (Il2CppObject *)checkRarityTypeList;
      if ( ++v48 == v47 )
        return (System_Collections_Generic_List_UserServantEntity__o *)v46;
    }
    v50 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v50,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !Item )
        break;
      v51 = Item;
      Item = (Il2CppObject *)UserServantEntity__getRarity((UserServantEntity_o *)Item, 0LL);
      if ( (_DWORD)Item == v49 )
      {
        if ( !v46 )
          break;
        v54 = v46->fields._items;
        v55 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v46->fields._version;
        if ( !v54 )
          break;
        v56 = v46->fields._size;
        if ( (unsigned int)v56 >= v54->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            v51,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v54->obj.klass + v56;
          v46->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v51;
          sub_1BDB81C((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
        }
      }
      if ( ++v50 >= v18->fields._size )
        goto LABEL_52;
    }
LABEL_75:
    sub_1BDBAD4(Item, v22);
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v46;
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

  if ( (byte_4B489A8 & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantCombineControl_OnClickCombineConductionWire__, method);
    byte_4B489A8 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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
    sub_1BDBAD4(combineRootComponent, v5);
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
  int64_t klass; // x20
  __int64 v10; // x2
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v12; // x21
  signed __int64 v13; // x23
  unsigned __int64 max_length; // x27
  int64_t v15; // x22

  if ( (byte_4B489A7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BDB878(&StringLiteral_3805/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_4B489A7 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int64_t)SelfUserGame[4].klass;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  v12 = SelfUserGame;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v13 >= (int)max_length )
      break;
    if ( v13 >= max_length )
      sub_1BDBADC(SelfUserGame, v8, v10);
    v15 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v13];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v15,
                                            (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v13;
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
    sub_1BDBAD4(SelfUserGame, v8);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v12,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v13 < (int)max_length,
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

  if ( (byte_4B489AC & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantCombineControl_OnClickMaterialSelectList__, method);
    byte_4B489AC = 1;
  }
  v3 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BDBAD4(0LL, v5);
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

  if ( (byte_4B489AD & 1) == 0 )
  {
    sub_1BDB878(&RecommenededConfigDialog_ClickDelegate_TypeInfo, method);
    sub_1BDB878(&Method_ServantCombineControl_OnClickRecommendedButton__, v3);
    sub_1BDB878(&Method_ServantCombineControl__OnClickRecommendedButton_b__108_0__, v4);
    sub_1BDB878(&SvtClassAttri_TypeInfo, v5);
    byte_4B489AD = 1;
  }
  v6 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BDB890(Method_ServantCombineControl_OnClickRecommendedButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_10;
  SvtClassId = UserServantEntity__getSvtClassId(baseData, 0, 0, 0LL);
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
  SvtClassAttri__IsExtraClass(SvtClassId, 0LL);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v12 = (RecommenededConfigDialog_ClickDelegate_o *)sub_1BDBAC4(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__108_0__,
    v13);
  if ( !recommendedConfigDialog )
LABEL_10:
    sub_1BDBAD4(baseData, v8);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v12, v14);
}


void __fastcall ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_4B4899A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B4899A = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0LL),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0LL) )
  {
    sub_1BDBAD4(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.campaignListPerSelectSvt = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.campaignListPerSelectSvt, 0, v4, v5);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserServantEntity_o **p_baseData; // x21
  struct UICharaGraphTexture_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  struct CombineInfoComponent_o *combineInfoComp; // x0
  int32_t adjustHp; // w24
  UIIconLabel_o *currentAdjustHpIconLabel; // x22
  int32_t v19; // w25
  int32_t adjustAtk; // w24
  UIIconLabel_o *currentAdjustAtkIconLabel; // x21
  int32_t v22; // w25
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  char v25; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v27; // x2
  MenuListControl_c *v28; // x0
  float v29; // s8
  System_Func_float__float__float__float__o *v30; // x20
  AlphaTransitionCalculator_o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-58h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B4899E & 1) == 0 )
  {
    sub_1BDB878(&AlphaTransitionCalculator_TypeInfo, usrSvtData);
    sub_1BDB878(&BalanceConfig_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v8);
    sub_1BDB878(&MenuListControl_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_1/*""*/, v10);
    byte_4B4899E = 1;
  }
  p_baseData = &this->fields.baseData;
  this->fields.baseData = usrSvtData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseData, (int32_t)usrSvtData, (int32_t)method, v3);
  v12 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCombineControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                          this,
                                          this->fields.charaGraph,
                                          this->fields.baseData,
                                          this->klass[1]._1.image);
  this->fields.charaGraph = v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)v12, v13, v14);
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
    v19 = secondMaxAdjustAtk[1];
  else
    v19 = maxAjustAtk[1];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustHpIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_40036752(
    currentAdjustHpIconLabel,
    44,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[38]) * adjustHp,
    LODWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[38]) * v19,
    0,
    0LL,
    0,
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
    v22 = secondMaxAdjustAtk[0];
  else
    v22 = maxAjustAtk[0];
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineInfoComp = (struct CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  }
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_31;
  UIIconLabel__Set_40036752(
    currentAdjustAtkIconLabel,
    45,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[37]) * adjustAtk,
    HIDWORD(combineInfoComp->fields.resLimitCntInfos->m_Items[37]) * v22,
    0,
    0LL,
    0,
    0,
    0,
    0,
    0LL);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  ServantCombineControl__CheckConductionWire(this, v23);
  combineInfoComp = (struct CombineInfoComponent_o *)ServantCombineControl__SetCampaignListPerSelectSvt(
                                                       this,
                                                       usrSvtData,
                                                       v24);
  if ( !this->fields.campaign )
    goto LABEL_31;
  v25 = (char)combineInfoComp;
  combineInfoComp = (struct CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.campaign,
                                                       0LL);
  if ( !combineInfoComp )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v25 & 1, 0LL);
  if ( (v25 & 1) == 0 )
    return;
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_31;
  combineInfoComp = (struct CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                       (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                       0,
                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_31;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v27);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v28 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v28 = MenuListControl_TypeInfo;
  }
  v29 = ChangedFPSUtil__CovertFrameNumToSecond(v28->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v30 = ExtraEasing__AsymptoticSeriesFloat(
          MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
          (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
          0LL);
  v31 = (AlphaTransitionCalculator_o *)sub_1BDBAC4(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v31, v29, v30, 0LL);
  this->fields.campaignAlphaCalculator = v31;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.campaignAlphaCalculator, (int32_t)v31, v32, v33);
  combineInfoComp = (struct CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_31:
    sub_1BDBAD4(combineInfoComp, v15);
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
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int klass_high; // w8
  System_Int32_array *monitor; // x23
  __int64 v47; // x24
  __int64 v48; // x25
  int32_t v49; // w1
  System_Int32_array *v50; // x23
  int32_t SvtClassId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Func_object__int__o *v56; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x20
  System_Func_object__object__o *v58; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x20
  ServantCombineControl___c_c *v60; // x8
  System_Func_object__int__o *_9__89_1; // x21
  Il2CppObject *v62; // x22
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4B4899F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, usrSvtData);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___, v7);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____,
      v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_1BDB878(&System_Func_EventCampaignEntity__int__TypeInfo, v14);
    sub_1BDB878(&System_Func_List_EventCampaignEntity___int__TypeInfo, v15);
    sub_1BDB878(&System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v20);
    sub_1BDB878(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v21);
    sub_1BDB878(&NetworkManager_TypeInfo, v22);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BDB878(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__, v24);
    sub_1BDB878(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__, v25);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BDB878(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__, v27);
    sub_1BDB878(&ServantCombineControl___c_TypeInfo, v28);
    byte_4B4899F = 1;
  }
  memset(&v71, 0, sizeof(v71));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_54;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  v32 = (System_Collections_Generic_List_object__o *)CombineEventCampaigns;
  v33 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    v32,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v71 = v70;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = v71.fields._current;
    EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(this, v34);
    if ( !current )
      sub_1BDBAD4(EventMaster, v37);
    if ( !EventMaster )
      sub_1BDBAD4(0LL, v37);
    Entity = DataMasterBase_object__object__int___GetEntity(
               EventMaster,
               (int32_t)current[1].klass,
               (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !Entity )
      sub_1BDBAD4(0LL, v39);
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
            sub_1BDBAD4(Time, v42);
          if ( *(_QWORD *)&monitor->max_length )
          {
            if ( !usrSvtData )
              sub_1BDBAD4(Time, v42);
            v48 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
            v47 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v72.fields.currentCryptoKey = v48;
            *(_QWORD *)&v72.fields.fakeValue = v47;
            v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v72, 0LL);
            Time = System_Array__IndexOf_int_(
                     monitor,
                     v49,
                     (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
            goto LABEL_30;
          }
LABEL_31:
          if ( !v33 )
            sub_1BDBAD4(Time, v42);
          items = v33->fields._items;
          v53 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v33->fields._version;
          if ( !items )
            sub_1BDBAD4(Time, v42);
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              current,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &items->obj.klass + size;
            v33->fields._size = size + 1;
            v55[4] = (Il2CppClass *)current;
            sub_1BDB81C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)current, v43, v44);
          }
        }
      }
      else if ( klass_high == 27 )
      {
        if ( !usrSvtData )
          sub_1BDBAD4(Time, v42);
        Time = UserServantEntity__IsExchangeSvt(usrSvtData, 0LL);
        if ( (Time & 1) != 0 )
          goto LABEL_31;
      }
      else if ( (klass_high & 0xFFFFFFFE) == 32 )
      {
        if ( !usrSvtData )
          sub_1BDBAD4(Time, v42);
        v50 = (System_Int32_array *)current[2].monitor;
        SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0, 0LL);
        Time = System_Array__IndexOf_int_(
                 v50,
                 SvtClassId,
                 (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___);
LABEL_30:
        if ( (Time & 0x80000000) == 0 )
          goto LABEL_31;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !v33 )
    goto LABEL_54;
  if ( !v33->fields._size )
  {
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  v56 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_EventCampaignEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v56,
    0LL,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2__,
    0LL);
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToLookup_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                               (System_Func_TSource__TKey__o *)v56,
                                                               (const MethodInfo_3075328 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
  v58 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
  System_Func_object__object____ctor(
    v58,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_0__,
    0LL);
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v57,
                                                               (System_Func_TSource__TResult__o *)v58,
                                                               (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
  v60 = ServantCombineControl___c_TypeInfo;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v60 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_1 = (System_Func_object__int__o *)v60->static_fields->__9__89_1;
  if ( !_9__89_1 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = ServantCombineControl___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__89_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_List_EventCampaignEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_1,
      v62,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_1__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_1 = (struct System_Func_List_EventCampaignEntity___int__o *)_9__89_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__89_1, (int32_t)_9__89_1, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v59,
                                                               (System_Func_TSource__TKey__o *)_9__89_1,
                                                               (const MethodInfo_305F578 *)Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v66,
                                (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
  if ( !this )
LABEL_54:
    sub_1BDBAD4(Instance, v30);
  this->fields.campaignListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)Instance;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.campaignListPerSelectSvt, (int32_t)Instance, v67, v68);
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl__SetCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *data,
        bool isUpdateMaterialGrid,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x20
  ServantCombineControl_o *v6; // x19
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
  struct System_Int64_array *materialUsrSvtIdList; // x1
  char v19; // w2
  const MethodInfo *v20; // x3
  struct System_Int64_array *v21; // x8
  _BOOL4 v22; // w25
  struct UserServantEntity_o *baseSvtData; // x1
  UserServantEntity_o **p_baseData; // x21
  struct UserServantEntity_o *baseData; // x8
  __int64 v26; // x22
  __int64 v27; // x24
  int32_t v28; // w0
  int32_t v29; // w22
  const MethodInfo *v30; // x2
  int spendQp; // w8
  UILabel_o *qpLb; // x23
  int getExp; // w8
  UILabel_o *expLb; // x23
  UserServantEntity_o *v35; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x23
  __int64 v37; // x24
  __int64 v38; // x25
  int32_t assetList_high; // w8
  int32_t LevelMax; // w0
  const MethodInfo *v41; // x2
  int32_t v42; // w23
  struct UserServantEntity_o *v43; // x8
  UILabel_o *currentLvLb; // x24
  UILabel_o *increLvLb; // x25
  int32_t *p_increLv; // x24
  UILabel_o *increValLb; // x25
  System_String_o *v48; // x26
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  __int64 v53; // x2
  UserServantEntity_o *v54; // x8
  __int64 v55; // x22
  __int64 v56; // x24
  int32_t v57; // w24
  __int64 v58; // x22
  char v59; // w2
  const MethodInfo *v60; // x3
  UserServantEntity_o *v61; // x1
  int32_t increLv; // w8
  struct UserServantEntity_o *v63; // x8
  int32_t v64; // w8
  int32_t v65; // w8
  int32_t adjustHp; // w22
  BalanceConfig_c *v67; // x0
  uint32_t cctor_finished; // w9
  int32_t StatusUpAdjustHp; // w8
  int v70; // w23
  int getHpAdjustVal; // w25
  int32_t v72; // w22
  int32_t v73; // w22
  int32_t v74; // w22
  int32_t v75; // w23
  int32_t v76; // w1
  BalanceConfig_c *v77; // x0
  int32_t adjustAtk; // w21
  uint32_t v79; // w9
  int32_t StatusUpAdjustAtk; // w8
  int v81; // w21
  int getAtkAdjustVal; // w23
  int32_t v83; // w20
  int32_t v84; // w20
  int32_t v85; // w20
  int32_t v86; // w21
  int32_t v87; // w1
  char v88; // w20
  float v89; // s0
  float v90; // s1
  float v91; // s2
  float v92; // s3
  const MethodInfo *v93; // x1
  int32_t increAmount; // [xsp+18h] [xbp-98h] BYREF
  int v95; // [xsp+1Ch] [xbp-94h] BYREF
  __int64 v96; // [xsp+20h] [xbp-90h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+28h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+30h] [xbp-80h] BYREF
  __int64 lateExp; // [xsp+38h] [xbp-78h] BYREF
  System_String_array *skillNameList; // [xsp+40h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+48h] [xbp-68h] BYREF
  int32_t afterAtk[2]; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = data;
  v6 = this;
  if ( (byte_4B489A2 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, data);
    sub_1BDB878(&CombineSvtData_TypeInfo, v7);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIWidget___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v15);
    sub_1BDB878(&StringLiteral_7433/*"INCREMENT_SVTLEVEL"*/, v16);
    this = (ServantCombineControl_o *)sub_1BDB878(&StringLiteral_1/*""*/, v17);
    byte_4B489A2 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  skillNameList = 0LL;
  idList = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  lateExp = 0LL;
  v96 = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  v95 = 0;
  if ( isUpdateMaterialGrid )
    ServantCombineControl__DestroyGrid(v6, (const MethodInfo *)data);
  if ( !v5 )
    goto LABEL_103;
  materialUsrSvtIdList = v5->fields.materialUsrSvtIdList;
  v6->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&v6->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int32_t)materialUsrSvtIdList,
    isUpdateMaterialGrid,
    method);
  v21 = v5->fields.materialUsrSvtIdList;
  v22 = v21 && v21->max_length != 0;
  baseSvtData = v5->fields.baseSvtData;
  p_baseData = &v6->fields.baseData;
  v6->fields.baseData = baseSvtData;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields.baseData, (int32_t)baseSvtData, v19, v20);
  baseData = v6->fields.baseData;
  if ( !baseData )
    goto LABEL_103;
  v27 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v26 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v27;
  *(_QWORD *)&v103.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v103, 0LL);
  if ( v22 )
  {
    v29 = v28;
    this = (ServantCombineControl_o *)v6->fields.conductionWireInfo;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( isUpdateMaterialGrid )
      ServantCombineControl__SetCombineMaterialGrid(v6, v5->fields.materialUsrSvtIdList, v30);
    spendQp = v5->fields.spendQp;
    qpLb = v6->fields.qpLb;
    v6->fields._spendQpVal_k__BackingField = spendQp;
    v95 = spendQp;
    this = (ServantCombineControl_o *)System_Int32__ToString_64087256(
                                        (int32_t)&v95,
                                        (System_String_o *)StringLiteral_9229/*"N0"*/,
                                        0LL);
    if ( !qpLb )
      goto LABEL_103;
    UILabel__set_text(qpLb, (System_String_o *)this, 0LL);
    getExp = v5->fields.getExp;
    expLb = v6->fields.expLb;
    v6->fields._getExpVal_k__BackingField = getExp;
    v95 = getExp;
    this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v95, 0LL);
    if ( !expLb )
      goto LABEL_103;
    UILabel__set_text(expLb, (System_String_o *)this, 0LL);
    this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
    v35 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
    v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v104.fields.currentCryptoKey = v38;
    *(_QWORD *)&v104.fields.fakeValue = v37;
    this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v104, 0LL);
    if ( !v36 )
      goto LABEL_103;
    this = (ServantCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        v36,
                                        (int32_t)this,
                                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_103;
    assetList_high = HIDWORD(this->fields.assetList);
    this = (ServantCombineControl_o *)v6->fields.baseData;
    v6->fields.expType = assetList_high;
    if ( !this )
      goto LABEL_103;
    v6->fields.totalExp = HIDWORD(this->fields.increValLb) + v6->fields._getExpVal_k__BackingField;
    v6->fields.checkLv = (int32_t)this->fields.increValLb;
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
    data = (SetCombineData_o *)(unsigned int)v6->fields.checkLv;
    v42 = LevelMax;
    if ( (_DWORD)data == LevelMax )
    {
      v6->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(v6, (int32_t)data, v41) )
        LODWORD(data) = v6->fields.checkLv;
    }
    this = (ServantCombineControl_o *)v6->fields.currentLvObj;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ServantCombineControl_o *)v6->fields.increLvObj;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ServantCombineControl_o *)v6->fields.increValLb;
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v43 = v6->fields.baseData;
    if ( !v43 )
      goto LABEL_103;
    currentLvLb = v6->fields.currentLvLb;
    this = (ServantCombineControl_o *)System_Int32__ToString((int)v43 + 256, 0LL);
    if ( !currentLvLb )
      goto LABEL_103;
    UILabel__set_text(currentLvLb, (System_String_o *)this, 0LL);
    increLvLb = v6->fields.increLvLb;
    p_increLv = &v6->fields.increLv;
    this = (ServantCombineControl_o *)System_Int32__ToString((int)v6 + 528, 0LL);
    if ( !increLvLb )
      goto LABEL_103;
    UILabel__set_text(increLvLb, (System_String_o *)this, 0LL);
    if ( !*p_baseData )
      goto LABEL_103;
    v6->fields.increAmount = v6->fields.increLv - (*p_baseData)->fields.lv;
    increValLb = v6->fields.increValLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_7433/*"INCREMENT_SVTLEVEL"*/, 0LL);
    increAmount = v6->fields.increAmount;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v49, v50, v51);
    this = (ServantCombineControl_o *)System_String__Format(v48, v52, 0LL);
    if ( !increValLb )
      goto LABEL_103;
    UILabel__set_text(increValLb, (System_String_o *)this, 0LL);
    this = (ServantCombineControl_o *)v6->fields.combineResStatus;
    if ( !this )
      goto LABEL_103;
    CheckCombineResStatus__getCombineResStatus(
      (CheckCombineResStatus_o *)this,
      &afterAtk[1],
      afterAtk,
      *p_baseData,
      *p_increLv,
      0LL);
    afterAtk[1] += v5->fields.getHpAdjustVal;
    afterAtk[0] += v5->fields.getAtkAdjustVal;
    this = (ServantCombineControl_o *)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    UserServantEntity__getNextUseSkillInfo(
      (UserServantEntity_o *)this,
      &idList,
      &skillNameList,
      *p_increLv,
      v29,
      1,
      0LL);
    if ( skillNameList )
    {
      if ( !skillNameList->max_length )
        sub_1BDBADC(this, data, v53);
      data = (SetCombineData_o *)skillNameList->m_Items[0];
      if ( data )
      {
        this = (ServantCombineControl_o *)v6->fields.getSkillLb;
        if ( !this )
          goto LABEL_103;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)data, 0LL);
      }
    }
    v54 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    v56 = *(_QWORD *)&v54->fields.limitCount.fields.currentCryptoKey;
    v55 = *(_QWORD *)&v54->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v105.fields.currentCryptoKey = v56;
    *(_QWORD *)&v105.fields.fakeValue = v55;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v105, 0LL);
    v58 = sub_1BDBAC4(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v58, 0LL);
    if ( !v58 )
      goto LABEL_103;
    v61 = *p_baseData;
    *(_QWORD *)(v58 + 16) = *p_baseData;
    sub_1BDB81C((CGThumbnailListItem_o *)(v58 + 16), (int32_t)v61, v59, v60);
    increLv = v6->fields.increLv;
    *(_DWORD *)(v58 + 32) = v42;
    *(_DWORD *)(v58 + 24) = increLv;
    *(_DWORD *)(v58 + 28) = v57;
    v63 = v6->fields.baseData;
    if ( !v63 )
      goto LABEL_103;
    this = (ServantCombineControl_o *)v6->fields.combineResStatus;
    if ( !this )
      goto LABEL_103;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)this,
      (float *)&lateExp + 1,
      (int32_t *)&lateExp,
      v6->fields.totalExp,
      v63->fields.lv,
      v42,
      v6->fields.expType,
      0LL);
    *(_DWORD *)(v58 + 36) = HIDWORD(lateExp);
    v64 = afterAtk[1];
    *(_DWORD *)(v58 + 40) = lateExp;
    *(_DWORD *)(v58 + 44) = v64;
    v65 = afterAtk[0];
    *(_DWORD *)(v58 + 48) = v5->fields.getHpAdjustVal;
    *(_DWORD *)(v58 + 52) = v65;
    *(_DWORD *)(v58 + 56) = v5->fields.getAtkAdjustVal;
    this = (ServantCombineControl_o *)v6->fields.combineInfoComp;
    if ( !this )
      goto LABEL_103;
    CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v58, 0LL);
    *(_QWORD *)secondMaxAdjustAtk = 0LL;
    *(_QWORD *)maxAjustAtk = 0LL;
    this = (ServantCombineControl_o *)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_103;
    UserServantEntity__GetAdjustMax(
      (UserServantEntity_o *)this,
      &maxAjustAtk[1],
      maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0LL);
    this = (ServantCombineControl_o *)v6->fields.resAdjustInfo;
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ServantCombineControl_o *)v6->fields.resAdjustHpIconLabel;
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_103;
    v106.fields.r = 1.0;
    v106.fields.g = 1.0;
    v106.fields.b = 1.0;
    v106.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v106, 0LL);
    this = (ServantCombineControl_o *)v6->fields.resAdjustAtkIconLabel;
    if ( !this )
      goto LABEL_103;
    this = (ServantCombineControl_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_103;
    v107.fields.r = 1.0;
    v107.fields.g = 1.0;
    v107.fields.b = 1.0;
    v107.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v107, 0LL);
    if ( !*p_baseData )
      goto LABEL_103;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v67 = BalanceConfig_TypeInfo;
    cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v67 = BalanceConfig_TypeInfo;
      cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
    }
    StatusUpAdjustHp = v67->static_fields->StatusUpAdjustHp;
    v70 = StatusUpAdjustHp * adjustHp;
    HIDWORD(v96) = StatusUpAdjustHp * adjustHp;
    getHpAdjustVal = v5->fields.getHpAdjustVal;
    v72 = maxAjustAtk[1];
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v70 >= StatusUpAdjustHp * v72 )
    {
      v73 = secondMaxAdjustAtk[1];
      if ( v67->_2.cctor_finished )
      {
LABEL_66:
        this = (ServantCombineControl_o *)v6->fields.resAdjustHpIconLabel;
        v74 = StatusUpAdjustHp * v73;
        if ( !this )
          goto LABEL_103;
        v75 = (getHpAdjustVal & ~(getHpAdjustVal >> 31)) + v70;
        UIIconLabel__Set_40036752((UIIconLabel_o *)this, 44, v75, v74, 0, 0LL, 0, 0, 0, 0, 0LL);
        if ( !System_Int32__Equals_64087084((int32_t)&v96 + 4, v75, 0LL) )
        {
          this = (ServantCombineControl_o *)v6->fields.resAdjustHpIconLabel;
          if ( !this )
            goto LABEL_103;
          if ( v75 >= v74 )
            v76 = v74;
          else
            v76 = v75;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)this, v76, v74, v75 >= v74, 0LL);
        }
        this = (ServantCombineControl_o *)v6->fields.resAdjustHpMaxLabel;
        if ( !this )
          goto LABEL_103;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !*p_baseData )
          goto LABEL_103;
        v77 = BalanceConfig_TypeInfo;
        adjustAtk = (*p_baseData)->fields.adjustAtk;
        v79 = BalanceConfig_TypeInfo->_2.cctor_finished;
        if ( !v79 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v77 = BalanceConfig_TypeInfo;
          v79 = BalanceConfig_TypeInfo->_2.cctor_finished;
        }
        StatusUpAdjustAtk = v77->static_fields->StatusUpAdjustAtk;
        v81 = StatusUpAdjustAtk * adjustAtk;
        LODWORD(v96) = v81;
        getAtkAdjustVal = v5->fields.getAtkAdjustVal;
        v83 = maxAjustAtk[0];
        if ( !v79 )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = BalanceConfig_TypeInfo;
          StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        }
        if ( v81 >= StatusUpAdjustAtk * v83 )
        {
          v84 = secondMaxAdjustAtk[0];
          if ( v77->_2.cctor_finished )
            goto LABEL_82;
        }
        else
        {
          v84 = maxAjustAtk[0];
          if ( v77->_2.cctor_finished )
          {
LABEL_82:
            this = (ServantCombineControl_o *)v6->fields.resAdjustAtkIconLabel;
            v85 = StatusUpAdjustAtk * v84;
            if ( !this )
              goto LABEL_103;
            v86 = (getAtkAdjustVal & ~(getAtkAdjustVal >> 31)) + v81;
            UIIconLabel__Set_40036752((UIIconLabel_o *)this, 45, v86, v85, 0, 0LL, 0, 0, 0, 0, 0LL);
            if ( !System_Int32__Equals_64087084((int32_t)&v96, v86, 0LL) )
            {
              this = (ServantCombineControl_o *)v6->fields.resAdjustAtkIconLabel;
              if ( !this )
                goto LABEL_103;
              if ( v86 >= v85 )
                v87 = v85;
              else
                v87 = v86;
              UIIconLabel__SetCombineResTxt((UIIconLabel_o *)this, v87, v85, v86 >= v85, 0LL);
            }
            this = (ServantCombineControl_o *)v6->fields.resAdjustAtkMaxLabel;
            if ( this )
            {
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              this = (ServantCombineControl_o *)v6->fields.qpLb;
              if ( v6->fields.haveQpVal >= v6->fields._spendQpVal_k__BackingField )
              {
                if ( this )
                {
                  v89 = 1.0;
                  v88 = 1;
                  v90 = 1.0;
                  goto LABEL_101;
                }
              }
              else if ( this )
              {
                v88 = 0;
                v89 = 1.0;
                v90 = 0.0;
LABEL_101:
                v91 = v90;
                v92 = v89;
                UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v89, 0LL);
                v6->fields._IsExeCombine_k__BackingField = v88;
                ServantCombineControl__SetExeBtnState(v6, v93);
                return;
              }
            }
LABEL_103:
            sub_1BDBAD4(this, data);
          }
        }
        j_il2cpp_runtime_class_init_0(v77);
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
        goto LABEL_82;
      }
    }
    else
    {
      v73 = maxAjustAtk[1];
      if ( v67->_2.cctor_finished )
        goto LABEL_66;
    }
    j_il2cpp_runtime_class_init_0(v67);
    StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    goto LABEL_66;
  }
}


SetCombineData_o *__fastcall ServantCombineControl__SetCombineData_47469160(
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
  const MethodInfo_36D5AF4 **v42; // x29
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
  const MethodInfo_36D5AF4 **v65; // x25
  System_Collections_Generic_List_object__o *v66; // x29
  float v67; // s0
  unsigned int v68; // w8
  unsigned int v69; // w24
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t CombineQp; // w21
  float v73; // s0
  unsigned int v74; // w8
  int32_t v75; // w26
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  const MethodInfo *v80; // x3
  struct UserServantEntity_o *v81; // x8
  ServantCombineControl_c *v82; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct UserServantEntity_o *v86; // x1
  int32_t v87; // w8
  bool isAdjustAtkMax; // w0
  bool isSecondAdjustAtkMax; // w0
  System_Collections_Generic_List_long__o *v90; // x20
  int32_t v91; // w23
  int32_t v92; // w22
  __int128 v93; // q0
  struct System_Int64_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  System_Int64_array *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int v101; // [xsp+0h] [xbp-F0h]
  int v102; // [xsp+4h] [xbp-ECh]
  DataMasterBase_TMaster__TEntity__PKType__o *v103; // [xsp+8h] [xbp-E8h]
  int32_t expType; // [xsp+14h] [xbp-DCh]
  int64_t v105; // [xsp+18h] [xbp-D8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v106; // [xsp+20h] [xbp-D0h]
  CombineMaterialMaster_o *v107; // [xsp+28h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+50h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v110; // [xsp+78h] [xbp-78h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  v3 = (System_Collections_Generic_List_object__o *)targetMaterialList;
  if ( (byte_4B489B1 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, targetMaterialList);
    sub_1BDB878(&Method_DataManager_GetMasterData_CombineMaterialMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantClassMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BDB878(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v16);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v18);
    sub_1BDB878(&System_Math_TypeInfo, v19);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_1BDB878(&ServantCombineControl_TypeInfo, v22);
    sub_1BDB878(&SetCombineData_TypeInfo, v23);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B489B1 = 1;
  }
  v110 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  v28 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_101;
  v106 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
  *(_QWORD *)&v111.fields.currentCryptoKey = v36;
  *(_QWORD *)&v111.fields.fakeValue = v35;
  v107 = (CombineMaterialMaster_o *)v28;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v111, 0LL);
  if ( !MasterData_object )
    goto LABEL_101;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Entity )
    goto LABEL_101;
  v39 = this->fields.baseData;
  v105 = Instance;
  if ( !v39 )
    goto LABEL_101;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v39, 0, 0, 0LL);
  Instance = UserServantEntity__getSvtClassGroupType(v39, SvtClassId, 0LL);
  v101 = Instance;
  if ( !v3 )
    goto LABEL_101;
  size = v3->fields._size;
  v102 = size - 1;
  v42 = (const MethodInfo_36D5AF4 **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v43 = v110;
  if ( size < 1 )
  {
    v46 = 0;
    v45 = 0;
LABEL_70:
    v75 = v46;
    if ( v43 )
      goto LABEL_73;
  }
  else
  {
    v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
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
      *(_QWORD *)&v112.fields.currentCryptoKey = v51;
      *(_QWORD *)&v112.fields.fakeValue = v50;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v112, 0LL);
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v103,
                            v52,
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_101;
      v53 = Instance;
      Instance = (int64_t)v107;
      if ( !v107 )
        goto LABEL_101;
      v54 = CombineMaterialMaster__GetEntity(v107, *(_DWORD *)(v53 + 136), *(_DWORD *)(v49 + 256), 0LL);
      Instance = (int64_t)v106;
      if ( !v106 )
        goto LABEL_101;
      Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                            v106,
                            *(_DWORD *)(v53 + 80),
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
      if ( !v54 || !Instance )
        goto LABEL_101;
      v55 = *(_DWORD *)(Instance + 56);
      value = v54->fields.value;
      if ( v55 == 3 )
        goto LABEL_30;
      if ( v55 == v101 )
      {
        Instance = (int64_t)v48->fields.baseData;
        if ( !Instance )
          goto LABEL_101;
        v57 = *(_DWORD *)(v53 + 80);
        if ( v57 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0LL) )
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
      if ( !byte_4B3EFD1 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v26);
        byte_4B3EFD1 = 1;
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
      if ( !byte_4B3EFD1 )
      {
        sub_1BDB878(&System_Math_TypeInfo, v26);
        byte_4B3EFD1 = 1;
      }
      Instance = (int64_t)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v73 = v37 * (float)CombineQp;
      v74 = vcvtps_s32_f32(v73);
      if ( ceilf(v73) == INFINITY )
        v74 = 0x80000000;
      if ( !v105 )
        goto LABEL_101;
      v43 = v110;
      v75 = v74 + v46;
      if ( *(_QWORD *)(v105 + 96) < (int)(v74 + v46) )
      {
        this = v48;
        v42 = v65;
        v48->fields.isQpCondClear = 0;
        goto LABEL_70;
      }
      if ( !v110 )
        goto LABEL_101;
      items = v110->fields._items;
      v77 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v110->fields._version;
      if ( !items )
        goto LABEL_101;
      v78 = v43->fields._size;
      if ( (unsigned int)v78 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          (Il2CppObject *)v49,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v79 = &items->obj.klass + v78;
        v43->fields._size = v78 + 1;
        v79[4] = (Il2CppClass *)v49;
        sub_1BDB81C((CGThumbnailListItem_o *)(v79 + 4), v49, v70, v71);
      }
      v81 = v48->fields.baseData;
      if ( !v81 )
        goto LABEL_101;
      v45 += v69;
      this = v48;
      if ( ServantCombineControl__IsLevelMax(v48, v81->fields.exp + v45, expType, v80) )
        break;
      v82 = ServantCombineControl_TypeInfo;
      if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
        v82 = ServantCombineControl_TypeInfo;
      }
      v3 = v66;
      v42 = v65;
      if ( v47 != v82->static_fields->MAX_SELECT_NUM - 1 )
      {
        v46 = v75;
        v44 = v64;
        if ( v102 != v47++ )
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
      v43 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(SetCombineData_TypeInfo);
      SetCombineData___ctor((SetCombineData_o *)v43, 0LL);
      if ( !v43 )
        goto LABEL_101;
      v86 = this->fields.baseData;
      v43->fields._items = (struct System_Object_array *)v86;
      sub_1BDB81C((CGThumbnailListItem_o *)&v43->fields, (int32_t)v86, v84, v85);
      v87 = v110->fields._size;
      v43->fields._version = v75;
      LODWORD(v43->fields._syncRoot) = v45;
      v43[1].monitor = 0LL;
      v43->fields._size = v87;
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
        sub_1BDBAD4(Instance, v26);
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
      v90 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v90,
        (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
      v91 = v110->fields._size;
      if ( v91 >= 1 )
      {
        v92 = 0;
        while ( 1 )
        {
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v110, v92, *v42);
          if ( !Instance )
            goto LABEL_101;
          v93 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v109.fields.fakeValue = v93;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v108 = v109;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v108, 0LL);
          if ( !v90 )
            goto LABEL_101;
          v94 = v90->fields._items;
          v95 = Method_System_Collections_Generic_List_long__Add__;
          ++v90->fields._version;
          if ( !v94 )
            goto LABEL_101;
          v96 = v90->fields._size;
          if ( (unsigned int)v96 >= v94->max_length )
          {
            System_Collections_Generic_List_long___AddWithResize(
              v90,
              Instance,
              *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
          }
          else
          {
            v90->fields._size = v96 + 1;
            v94->m_Items[v96] = Instance;
          }
          if ( v91 == ++v92 )
            goto LABEL_99;
        }
      }
      if ( !v90 )
        goto LABEL_101;
LABEL_99:
      v97 = System_Collections_Generic_List_long___ToArray(
              v90,
              (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
      v43[1].fields._items = (struct System_Object_array *)v97;
      sub_1BDB81C((CGThumbnailListItem_o *)&v43[1].fields, (int32_t)v97, v98, v99);
    }
  }
  return (SetCombineData_o *)v43;
}


void __fastcall ServantCombineControl__SetCombineMaterialGrid(
        ServantCombineControl_o *this,
        System_Int64_array *materialUsrSvtIdList,
        const MethodInfo *method)
{
  ServantCombineControl_o *v4; // x19
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
  __int64 v16; // x20
  System_Collections_Generic_List_long__o *v17; // x22
  System_Collections_Generic_List_long__o *v18; // x21
  __int64 v19; // x2
  unsigned __int64 v20; // x23
  int64_t v21; // x25
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  ServantCombineControl_o *v24; // x26
  ServantCombineControl_o *v25; // x27
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *baseData; // x26
  MaterialSvtInfo_o *v28; // x27
  MaterialSvtInfo_ClickDelegate_o *v29; // x28
  Il2CppObject *Entity; // x26
  ServantLimitMaster_o *v31; // x27
  void *monitor; // x28
  Il2CppClass *klass; // x29
  int32_t v34; // w28
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  struct System_Int64_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  System_Int64_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Int64_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B489A3 & 1) == 0 )
  {
    sub_1BDB878(&MaterialSvtInfo_ClickDelegate_TypeInfo, materialUsrSvtIdList);
    sub_1BDB878(&Method_CombineMenuControl_OnClickMaterial__, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v14);
    this = (ServantCombineControl_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_4B489A3 = 1;
  }
  if ( !materialUsrSvtIdList )
    goto LABEL_41;
  v16 = *(_QWORD *)&materialUsrSvtIdList->max_length;
  v17 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  v4->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)v16 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= materialUsrSvtIdList->max_length )
        sub_1BDBADC(this, materialUsrSvtIdList, v19);
      this = (ServantCombineControl_o *)v4->fields.selectGrid;
      if ( !this )
        break;
      v21 = materialUsrSvtIdList->m_Items[v20];
      svtFaceInfo = v4->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      this = (ServantCombineControl_o *)BaseMonoBehaviour__createObject(
                                          (BaseMonoBehaviour_o *)v4,
                                          svtFaceInfo,
                                          transform,
                                          0LL,
                                          0LL);
      if ( !this )
        break;
      v24 = this;
      this = (ServantCombineControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      v25 = this;
      if ( !byte_4B3E911 )
      {
        this = (ServantCombineControl_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, materialUsrSvtIdList);
        byte_4B3E911 = 1;
      }
      if ( !v25 )
        break;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v25,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      this = (ServantCombineControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v24, 0LL);
      if ( !this )
        break;
      v48.fields.x = 0.5;
      v48.fields.y = 0.5;
      v48.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v48, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v24,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      baseData = v4->fields.baseData;
      v28 = (MaterialSvtInfo_o *)Component_object;
      v29 = (MaterialSvtInfo_ClickDelegate_o *)sub_1BDBAC4(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(
        v29,
        (Il2CppObject *)v4,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0LL);
      if ( !v28 )
        break;
      MaterialSvtInfo__setMaterialSvtInfo(v28, v20, baseData, v21, 1, 0, v29, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !this )
        break;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v21,
                 (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this = (ServantCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      if ( !Entity )
        break;
      v31 = (ServantLimitMaster_o *)this;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v47.fields.currentCryptoKey = klass;
      *(_QWORD *)&v47.fields.fakeValue = monitor;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v47, 0LL);
      this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                          0LL);
      if ( !v31 )
        break;
      this = (ServantCombineControl_o *)ServantLimitMaster__GetEntity(v31, v34, (int32_t)this, 0LL);
      if ( !this )
        break;
      if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 4 )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v36 = Method_System_Collections_Generic_List_long__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v17,
            v21,
            *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = v21;
        }
      }
      this = (ServantCombineControl_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          break;
        v38 = v18->fields._items;
        v39 = Method_System_Collections_Generic_List_long__Add__;
        ++v18->fields._version;
        if ( !v38 )
          break;
        v40 = v18->fields._size;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v18,
            v21,
            *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = v40 + 1;
          v38->m_Items[v40] = v21;
        }
      }
      this = (ServantCombineControl_o *)UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v4->fields._isExchangeSvtInList_k__BackingField = 1;
      if ( (unsigned int)v16 == ++v20 )
        goto LABEL_37;
    }
LABEL_41:
    sub_1BDBAD4(this, materialUsrSvtIdList);
  }
LABEL_37:
  if ( !v17 )
    goto LABEL_41;
  v41 = System_Collections_Generic_List_long___ToArray(
          v17,
          (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
  v4->fields.highRarityList = v41;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.highRarityList, (int32_t)v41, v42, v43);
  if ( !v18 )
    goto LABEL_41;
  v44 = System_Collections_Generic_List_long___ToArray(
          v18,
          (const MethodInfo_36BF8B0 *)Method_System_Collections_Generic_List_long__ToArray__);
  v4->fields.exceededCheckList = v44;
  sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.exceededCheckList, (int32_t)v44, v45, v46);
  this = (ServantCombineControl_o *)v4->fields.selectGrid;
  if ( !this )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
}


void __fastcall ServantCombineControl__SetCombineNullData(ServantCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  ServantCombineControl__DestroyGrid(this, method);
  ServantCombineControl__InitInfo(this, v3);
  ServantCombineControl__SetBaseSvtCardImg(this, this->fields.baseData, v4);
  ServantCombineControl__SetIsRecommendedButtonEnabled(this, 1, v5);
}


void __fastcall ServantCombineControl__SetDispCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  struct UICharaGraphTexture_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  p_charaGraph = &this->fields.charaGraph;
  v5 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, void *))this->klass->vtable._7_SetCharaGraph.method)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass[1]._1.image);
  this->fields.charaGraph = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)p_charaGraph, (int32_t)v5, v6, v7);
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

  if ( (byte_4B489AA & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4B489AA = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v5 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1BDBAD4(combineBtnBg, method);
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
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4B4899C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, method);
    byte_4B4899C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_64092432(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                         0LL),
        !haveQpLb) )
  {
    sub_1BDBAD4(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0LL);
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
      sub_1BDBAD4(recommendedButton, isEnabled);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  ServantCombineControl__SetCombineData(this, recommendedCombineData, 1, v3);
  ServantCombineControl__SetStateInfoMsg(this, 2, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BDBAD4(0LL, v6);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  _BOOL4 isQpCondClear; // w22
  const MethodInfo *v28; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v30; // x20
  ServantCombineControl___c_c *v31; // x8
  System_Action_o *_9__109_1; // x22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x23
  struct ServantCombineControl___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x19
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  CommonConfirmDialog_ClickDelegate_o *v42; // x24
  System_String_o *v43; // x21
  System_Action_o *v44; // x22

  if ( (byte_4B489AE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__109_1__, v6);
    sub_1BDB878(&Method_ServantCombineControl___c__DisplayClass109_0__SetRecommendedMaterial_b__0__, v7);
    sub_1BDB878(&Method_ServantCombineControl___c__DisplayClass109_0__SetRecommendedMaterial_b__2__, v8);
    sub_1BDB878(&ServantCombineControl___c__DisplayClass109_0_TypeInfo, v9);
    sub_1BDB878(&ServantCombineControl___c_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_11002/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, v11);
    sub_1BDB878(&StringLiteral_11001/*"RECOMMENDED_NOT_HAVE_QP"*/, v12);
    sub_1BDB878(&StringLiteral_11000/*"RECOMMENDED_NOT_EXIST_MSG"*/, v13);
    sub_1BDB878(&StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, v14);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    byte_4B489AE = 1;
  }
  v17 = sub_1BDBAC4(ServantCombineControl___c__DisplayClass109_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v22);
  *(_QWORD *)(v17 + 24) = RecommendedCombineData;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)RecommendedCombineData, v24, v25);
  isQpCondClear = this->fields.isQpCondClear;
  if ( !*(_QWORD *)(v17 + 24) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isQpCondClear )
      {
LABEL_10:
        recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11000/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                  0LL);
        v30 = (System_String_o *)recommendedConfigDialog;
        v31 = ServantCombineControl___c_TypeInfo;
        if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
          v31 = ServantCombineControl___c_TypeInfo;
        }
        _9__109_1 = v31->static_fields->__9__109_1;
        v33 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__109_1 )
        {
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v31 = ServantCombineControl___c_TypeInfo;
          }
          v34 = (Il2CppObject *)v31->static_fields->__9;
          _9__109_1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(_9__109_1, v34, Method_ServantCombineControl___c__SetRecommendedMaterial_b__109_1__, 0LL);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
          static_fields->__9__109_1 = _9__109_1;
          sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__109_1, (int32_t)_9__109_1, v36, v37);
        }
        if ( !Instance )
          goto LABEL_25;
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v33,
          v30,
          _9__109_1,
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
          0,
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
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11001/*"RECOMMENDED_NOT_HAVE_QP"*/, 0LL);
    v44 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v17,
      Method_ServantCombineControl___c__DisplayClass109_0__SetRecommendedMaterial_b__2__,
      0LL);
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v43,
      v44,
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
      0,
      0LL);
    return;
  }
  if ( this->fields.isQpCondClear )
  {
    recommendedConfigDialog = this->fields.recommendedConfigDialog;
    if ( recommendedConfigDialog )
    {
      RecommenededConfigDialog__Close_47448468(recommendedConfigDialog, 0LL, v26);
      ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v17 + 24), v28);
      return;
    }
LABEL_25:
    sub_1BDBAD4(recommendedConfigDialog, v19);
  }
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11002/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0LL);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v42 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v42,
    (Il2CppObject *)v17,
    Method_ServantCombineControl___c__DisplayClass109_0__SetRecommendedMaterial_b__0__,
    0LL);
  if ( !v38 )
    goto LABEL_25;
  CommonUI__OpenConfirmDialog_30833192(
    (CommonUI_o *)v38,
    (System_String_o *)StringLiteral_1/*""*/,
    v39,
    v40,
    v41,
    v42,
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
    sub_1BDBAD4(preSelectBaseLb, method);
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
  if ( (byte_4B489AB & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_7440/*"INFO_MSG_COMBINE_MATERIAL"*/, v6);
    sub_1BDB878(&StringLiteral_7449/*"INFO_MSG_SVTCOMBINE_BASE"*/, v7);
    sub_1BDB878(&StringLiteral_5804/*"EXE_SUMMON_COMBINE_TXT"*/, v8);
    sub_1BDB878(&StringLiteral_12160/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_1BDB878(&StringLiteral_1/*""*/, v10);
    byte_4B489AB = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0LL )
  {
LABEL_25:
    sub_1BDBAD4(detailInfoLb, *(_QWORD *)&state);
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
      v13 = &StringLiteral_5804/*"EXE_SUMMON_COMBINE_TXT"*/;
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
      v13 = &StringLiteral_12160/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = &StringLiteral_7440/*"INFO_MSG_COMBINE_MATERIAL"*/;
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
    v13 = &StringLiteral_7449/*"INFO_MSG_SVTCOMBINE_BASE"*/;
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
  if ( (byte_4B489A0 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventCampaignMaster___, eventInfoData);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (ServantCombineControl_o *)sub_1BDB878(&StringLiteral_20638/*"img_txt_campaign_"*/, v6);
    byte_4B489A0 = 1;
  }
  v17 = 0LL;
  if ( !byte_4B3E911 )
  {
    this = (ServantCombineControl_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, eventInfoData);
    byte_4B3E911 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_1BDBAD4(this, eventInfoData);
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
  this = (ServantCombineControl_o *)System_String__Concat_62572260((System_String_o *)StringLiteral_20638/*"img_txt_campaign_"*/, v15, 0LL);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0LL);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._6_GetTutorialOpenType.method)(
    this,
    this->klass[1].vtable._7_SetCharaGraph.methodPtr);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
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

  if ( (byte_4B489A6 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3805/*"CONFIRM_TITLE_SVT_COMBINE"*/, v3);
    byte_4B489A6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0LL )
    sub_1BDBAD4(SelfUserGame, v6);
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
  __int64 v10; // x2
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int64_t lockCountObj; // x21
  signed __int64 v13; // x23
  unsigned __int64 max_length; // x27
  int64_t v15; // x22

  if ( (byte_4B489A5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BDB878(&StringLiteral_3805/*"CONFIRM_TITLE_SVT_COMBINE"*/, v6);
    byte_4B489A5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_15;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  lockCountObj = (int64_t)SelfUserGame->fields.lockCountObj;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = selectMaterialUsrSvtIdList_k__BackingField->max_length;
    if ( v13 >= (int)max_length )
      break;
    if ( v13 >= max_length )
      sub_1BDBADC(SelfUserGame, v9, v10);
    v15 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v13];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v15,
                                          (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0LL);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v13;
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
    sub_1BDBAD4(SelfUserGame, v9);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v7,
    this->fields._spendQpVal_k__BackingField,
    lockCountObj,
    v13 < (int)max_length,
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

  if ( (byte_4B489B4 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&progress);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v5);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_1BDB878(&System_IDisposable_TypeInfo, v8);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Transform_TypeInfo, v10);
    byte_4B489B4 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_63;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1BDBAD4(0LL, v12);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v21 = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1BDBD94(v22);
LABEL_61:
      sub_1BDBAD4(v22, v23);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v22,
                         (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1BDBAD4(0LL, v26);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v27 = sub_1BDB9B4(Enumerator, System_IDisposable_TypeInfo);
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
      v32 = sub_1C2C00C(v27, System_IDisposable_TypeInfo, 0LL);
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
                                          (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_63;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_63;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                            (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1BDBAD4(helpBtn, *(_QWORD *)&progress);
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

  if ( (byte_4B489B3 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UICommonButton___, v3);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v6);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BDB878(&UnityEngine_Transform_TypeInfo, v9);
    byte_4B489B3 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_64;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1BDBAD4(0LL, v11);
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
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v20 = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1BDBD94(v21);
LABEL_62:
      sub_1BDBAD4(v21, v22);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v21,
                         (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_1BDBAD4(0LL, v25);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0LL);
  }
  v26 = sub_1BDB9B4(Enumerator, System_IDisposable_TypeInfo);
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
      v31 = sub_1C2C00C(v26, System_IDisposable_TypeInfo, 0LL);
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
                                          (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_64;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0LL);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_64;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
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
                                          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                          (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
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
                                                (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0LL )
  {
LABEL_64:
    sub_1BDBAD4(helpBtn, method);
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

  if ( (byte_4B48997 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v8);
    sub_1BDB878(&MenuListControl_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_TransitionCalculator_float__Update__, v11);
    sub_1BDB878(&Method_TransitionCalculator_float__get_Current__, v12);
    byte_4B48997 = 1;
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
                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                if ( campaign )
                {
                  if ( v18 )
                  {
                    campaign = DataMasterBase_object__object__int___GetEntity(
                                 v18,
                                 *((_DWORD *)campaign + 4),
                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                                     (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                        if ( campaign )
                        {
                          System_Collections_Generic_List_object___RemoveAt(
                            (System_Collections_Generic_List_object__o *)campaign,
                            0,
                            (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                          campaign = this->fields.campaignListPerSelectSvt;
                          if ( campaign )
                          {
                            campaign = System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)campaign,
                                         0,
                                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
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
                                    (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                                }
                                else
                                {
                                  campaign = System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)campaign,
                                               0,
                                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                                  if ( !campaign )
                                    goto LABEL_67;
                                  Item = System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)campaign,
                                           0,
                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
          (const MethodInfo_398F200 *)Method_TransitionCalculator_float__Update__);
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
                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_67;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_67;
          if ( !v29 )
            goto LABEL_67;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v29,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_67;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_67;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         this->fields.campaiginPerSelectSvtListIndex,
                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
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
                (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
            }
            else
            {
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           campaiginPerSelectSvtListIndex,
                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_67;
              v33 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
LABEL_67:
            sub_1BDBAD4(campaign, method);
          v35 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
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
void __fastcall ServantCombineControl___OnClickRecommendedButton_b__108_0(
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
      sub_1BDBAD4(0LL, isDecide);
    RecommenededConfigDialog__Close_47448468(recommendedConfigDialog, 0LL, method);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v21; // x0
  ServantCombineControl___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__int__o *_9__89_4; // x21
  Il2CppObject *v25; // x22
  struct ServantCombineControl___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x20
  System_Func_T__TResult__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_4B489B7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, g);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v7);
    sub_1BDB878(&System_Func_EventCampaignEntity__int__TypeInfo, v8);
    sub_1BDB878(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v9);
    sub_1BDB878(&System_Func_EventCampaignEntity__long__TypeInfo, v10);
    sub_1BDB878(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__, v11);
    sub_1BDB878(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__, v12);
    sub_1BDB878(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__, v13);
    sub_1BDB878(&ServantCombineControl___c_TypeInfo, v14);
    byte_4B489B7 = 1;
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
    _9__89_3 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__89_3,
      v17,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_3__,
      0LL);
    static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__89_3 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__89_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__89_3, (int32_t)_9__89_3, v19, v20);
  }
  v21 = System_Linq_Enumerable__Select_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)g,
          (System_Func_TSource__TResult__o *)_9__89_3,
          (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
  v22 = ServantCombineControl___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !ServantCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo);
    v22 = ServantCombineControl___c_TypeInfo;
  }
  _9__89_4 = (System_Func_object__int__o *)v22->static_fields->__9__89_4;
  if ( !_9__89_4 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ServantCombineControl___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__89_4 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_4,
      v25,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__89_4__,
      0LL);
    v26 = ServantCombineControl___c_TypeInfo->static_fields;
    v26->__9__89_4 = (struct System_Func_EventCampaignEntity__int__o *)_9__89_4;
    sub_1BDB81C((CGThumbnailListItem_o *)&v26->__9__89_4, (int32_t)_9__89_4, v27, v28);
  }
  v29 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v23,
          (System_Func_TSource__TKey__o *)_9__89_4,
          (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  v30 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_EventCampaignEntity__long__TypeInfo);
  System_Func_object__long____ctor(
    v30,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__89_5__,
    0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)v30,
                                                               (const MethodInfo_306FD08 *)Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v31,
                                                                     (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


int64_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_b__89_5(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  void *EventMaster; // x0
  __int64 v6; // x1

  if ( (byte_4B489B8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, x);
    byte_4B489B8 = 1;
  }
  EventMaster = ServantCombineControl__get_EventMaster(this, (const MethodInfo *)x);
  if ( !x
    || !EventMaster
    || (EventMaster = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)EventMaster,
                        x->fields.eventId,
                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BDBAD4(EventMaster, v6);
  }
  return *((_QWORD *)EventMaster + 12);
}


int32_t __fastcall ServantCombineControl___SetCampaignListPerSelectSvt_g__GetEquivalentTarget_89_2(
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  int32_t target; // w8

  if ( !entity )
    sub_1BDBAD4(0LL, method);
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
  CGThumbnailListItem_o *p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B48996 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B48996 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BDBAD4(0LL, v6);
    p_eventMaster = (CGThumbnailListItem_o *)&this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1BDB81C(p_eventMaster, (int32_t)MasterData_object, v9, v10);
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
  const MethodInfo *v3; // x3

  this->fields._selectMaterialUsrSvtIdList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B489B9 & 1) == 0 )
  {
    sub_1BDB878(&ServantCombineControl___c_TypeInfo, v1);
    byte_4B489B9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)ServantCombineControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B489BA & 1) == 0 )
  {
    sub_1BDB878(&CombineRootComponent_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B489BA = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0LL )
    sub_1BDBAD4(Instance, v4);
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0LL);
  }
  else
  {
    sub_1BDBD94(Instance);
    ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_3(v6, v7, v8);
  }
}


int32_t __fastcall ServantCombineControl___c___MixMaterialSort_b__115_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (ServantCombineControl___c_o *)UserServantEntity__getSvtClassId(a, 0, 0, 0LL), !b) )
    sub_1BDBAD4(this, a);
  return (_DWORD)this - UserServantEntity__getSvtClassId(b, 0, 0, 0LL);
}


int32_t __fastcall ServantCombineControl___c___SetCampaignListPerSelectSvt_b__89_1(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantCombineControl___c_o *v5; // x19
  int klass_high; // w8

  if ( (byte_4B489BB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, x);
    this = (ServantCombineControl___c_o *)sub_1BDB878(&ServantCombineControl_TypeInfo, v4);
    byte_4B489BB = 1;
  }
  if ( !x )
    goto LABEL_14;
  this = (ServantCombineControl___c_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)x,
                                          0,
                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  v5 = this;
  if ( !ServantCombineControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo);
  if ( !v5 )
LABEL_14:
    sub_1BDBAD4(this, x);
  klass_high = HIDWORD(v5[1].klass);
  switch ( klass_high )
  {
    case 27:
      return 2;
    case 32:
      return 4;
    case 33:
      return 5;
  }
  return HIDWORD(v5[1].klass);
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
    sub_1BDBAD4(this, 0LL);
  return x->fields.value;
}


void __fastcall ServantCombineControl___c___SetRecommendedMaterial_b__109_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B489BC & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B489BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ServantCombineControl___c__DisplayClass109_0___ctor(
        ServantCombineControl___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCombineControl___c__DisplayClass109_0___SetRecommendedMaterial_b__0(
        ServantCombineControl___c__DisplayClass109_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ServantCombineControl_o *_4__this; // x8
  const MethodInfo *v9; // x2

  if ( (byte_4B489BD & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B489BD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        RecommenededConfigDialog__Close_47448468((RecommenededConfigDialog_o *)Instance, 0LL, v7);
        Instance = (CommonUI_o *)this->fields.__4__this;
        if ( Instance )
        {
          ServantCombineControl__SetMaterialToCombineData(
            (ServantCombineControl_o *)Instance,
            this->fields.recommendedCombineData,
            v9);
          return;
        }
      }
    }
LABEL_10:
    sub_1BDBAD4(Instance, v6);
  }
}


void __fastcall ServantCombineControl___c__DisplayClass109_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_4B489BE & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B489BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0LL )
  {
    sub_1BDBAD4(Instance, v4);
  }
  RecommenededConfigDialog__Close_47448468((RecommenededConfigDialog_o *)Instance, 0LL, v5);
}