void ServantCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_596A23A & 1) == 0 )
  {
    sub_2213A60(&ServantCombineControl_TypeInfo);
    byte_596A23A = 1;
  }
  *ServantCombineControl_TypeInfo->static_fields = (struct ServantCombineControl_StaticFields)0x14447A0000LL;
}


void ServantCombineControl___ctor(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A239 & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_596A239 = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method, v2);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


void ServantCombineControl__CheckConductionWire(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  int v4; // w20
  _BOOL4 isLimitCountMax; // w0
  __int64 v6; // x2
  __int64 v7; // x2
  UILabel_o *v8; // x20
  UILabel_o *v9; // x20
  int32_t v10; // w20
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionWireButtonLabel; // x20

  if ( (byte_596A221 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3859/*"CONDUCTION_LIMITUP"*/);
    sub_2213A60(&StringLiteral_3862/*"CONDUCTION_LVEXCEED_MSG"*/);
    sub_2213A60(&StringLiteral_3861/*"CONDUCTION_LVEXCEED"*/);
    sub_2213A60(&StringLiteral_3860/*"CONDUCTION_LIMITUP_MSG"*/);
    byte_596A221 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
  if ( !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0) )
    return;
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
  if ( !conductionWireInfo )
    goto LABEL_34;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0) )
    return;
  conductionWireInfo = this->fields.resAdjustInfo;
  if ( !conductionWireInfo )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0);
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !conductionWireInfo )
    goto LABEL_34;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)conductionWireInfo, this->fields.baseData, 0);
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
  if ( !conductionWireInfo )
    goto LABEL_34;
  conductionWireInfo = (UnityEngine_GameObject_o *)UserServantEntity__IsHeroine(
                                                     (UserServantEntity_o *)conductionWireInfo,
                                                     0);
  if ( !this->fields.baseData )
    goto LABEL_34;
  v4 = (int)conductionWireInfo;
  isLimitCountMax = UserServantEntity__isLimitCountMax(this->fields.baseData, 0);
  if ( ((isLimitCountMax | v4) & 1) == 0 )
  {
    conductionWireLabel = this->fields.conductionWireLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v6);
    conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"CONDUCTION_LIMITUP_MSG"*/, 0);
    if ( conductionWireLabel )
    {
      UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0);
      conductionWireButtonLabel = this->fields.conductionWireButtonLabel;
      conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3859/*"CONDUCTION_LIMITUP"*/,
                                                         0);
      if ( conductionWireButtonLabel )
      {
        UILabel__set_text(conductionWireButtonLabel, (System_String_o *)conductionWireInfo, 0);
        conductionWireInfo = this->fields.conductionWireInfo;
        if ( conductionWireInfo )
        {
          v10 = 1;
          goto LABEL_32;
        }
      }
    }
    goto LABEL_34;
  }
  if ( !isLimitCountMax )
    return;
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
  if ( !conductionWireInfo )
    goto LABEL_34;
  if ( UserServantEntity__isExceedLvMax((UserServantEntity_o *)conductionWireInfo, 0) )
    return;
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
  if ( !conductionWireInfo )
    goto LABEL_34;
  if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)conductionWireInfo, 0) )
    return;
  if ( (v4 & 1) != 0 )
  {
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
    if ( !conductionWireInfo )
      goto LABEL_34;
    if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)conductionWireInfo, 0) )
      return;
  }
  v8 = this->fields.conductionWireLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v7);
  conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3862/*"CONDUCTION_LVEXCEED_MSG"*/, 0);
  if ( !v8
    || (UILabel__set_text(v8, (System_String_o *)conductionWireInfo, 0),
        v9 = this->fields.conductionWireButtonLabel,
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3861/*"CONDUCTION_LVEXCEED"*/,
                                                           0),
        !v9)
    || (UILabel__set_text(v9, (System_String_o *)conductionWireInfo, 0),
        (conductionWireInfo = this->fields.conductionWireInfo) == 0) )
  {
LABEL_34:
    sub_2213CDC(conductionWireInfo, method);
  }
  v10 = 2;
LABEL_32:
  UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0);
  this->fields.conductionType = v10;
}


void ServantCombineControl__CheckExceededSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *exceededCheckList; // x8

  exceededCheckList = this->fields.exceededCheckList;
  if ( !exceededCheckList )
    sub_2213CDC(this, method);
  if ( exceededCheckList->max_length )
    ServantCombineControl__ShowExceededSvtDlg(this, method);
  else
    ServantCombineControl__CheckRareSvt(this, method);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCombineControl__CheckIncrementLv(ServantCombineControl_o *this, int32_t lv, const MethodInfo *method)
{
  void *baseData; // x0
  int32_t LevelMax; // w0
  int32_t v7; // w8
  int32_t totalExp; // w9
  int32_t v9; // w8

  if ( (byte_596A224 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A224 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseData, 0);
  if ( LevelMax <= lv )
  {
    this->fields.increLv = LevelMax;
    return 1;
  }
  baseData = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseData
    || (baseData = DataManager__GetMasterData_object_(
                     (DataManager_o *)baseData,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
    || (baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, this->fields.expType, lv, 0)) == 0 )
  {
LABEL_16:
    sub_2213CDC(baseData, *(_QWORD *)&lv);
  }
  v7 = *((_DWORD *)baseData + 6);
  totalExp = this->fields.totalExp;
  if ( v7 <= totalExp )
  {
    if ( v7 != totalExp )
    {
      ++this->fields.checkLv;
      return 0;
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


void ServantCombineControl__CheckIsSelectBaseSvt(
        ServantCombineControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v11; // q1
  int64_t v12; // x0
  __int128 v13; // q1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_596A21D & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A21D = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v11 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v11;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase, method);
      v17 = v18;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v17, 0);
      v13 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v13;
      if ( v12 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v16, 0) )
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity,
    (int32_t)selectBase,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCombineControl__CheckRareSvt(ServantCombineControl_o *this, const MethodInfo *method)
{
  struct System_Int64_array *highRarityList; // x8

  highRarityList = this->fields.highRarityList;
  if ( !highRarityList )
    sub_2213CDC(this, method);
  if ( highRarityList->max_length )
    ServantCombineControl__ShowRareSvtDlg(this, method);
  else
    ServantCombineControl__OnClickExeCombine(this, method);
}


void ServantCombineControl__DestroyGrid(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectGrid; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 naturalAligment; // x9
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_IEnumerator_o *v34; // [xsp+28h] [xbp-38h]

  if ( (byte_596A229 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596A229 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid || (selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0)) == 0 )
    sub_2213CDC(selectGrid, method);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)selectGrid, 0);
  v34 = Enumerator;
  while ( 1 )
  {
    if ( !v34 )
      goto LABEL_36;
    klass = v34->klass;
    v7 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_11;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v9 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v34, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v34->klass;
    v11 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_18;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_18:
      v13 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v34,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_2213CDC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_221405C(v14, UnityEngine_Transform_TypeInfo, v16, v17);
LABEL_36:
      sub_2213CDC(Enumerator, v5);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  v22 = sub_2213BB4(v34, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v29 = *(_QWORD *)v22;
    v30 = v22;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_31;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_31:
      v33 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


System_Collections_IEnumerator_o *ServantCombineControl__FadeAutoSetAnnounceLabel(
        ServantCombineControl_o *this,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596A237 & 1) == 0 )
  {
    sub_2213A60(&ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_TypeInfo);
    byte_596A237 = 1;
  }
  v5 = sub_2213CCC(ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = localizationKey;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)localizationKey, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


SetCombineData_o *ServantCombineControl__GetRecommendedCombineData(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x23
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *baseData; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  UserServantEntity_array *CombineMaterialList; // x29
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t SvtClassId; // w24
  __int64 v14; // x1
  __int64 v15; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x27
  System_Collections_Generic_List_int__o *v17; // x25
  System_Collections_Generic_List_T__o *v18; // x26
  System_String_o *v19; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  int klass; // w19
  int32_t v22; // w28
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  il2cpp_array_size_t max_length; // x20
  __int64 v27; // x19
  UserServantEntity_o *v28; // x27
  __int64 v29; // x24
  __int64 v30; // x28
  Il2CppObject *Entity; // x0
  const MethodInfo *v32; // x4
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x2
  ServantCombineControl___c_c *v43; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__117_0; // x22
  Il2CppObject *v46; // x23
  struct ServantCombineControl___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x21
  System_Func_object__bool__o *v55; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  ServantCombineControl___c_c *v59; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x20
  struct ServantCombineControl___c_StaticFields *v61; // x9
  System_Func_object__bool__o *_9__117_2; // x21
  Il2CppObject *v63; // x22
  struct ServantCombineControl___c_StaticFields *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  ServantCombineControl___c_c *v74; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v75; // x20
  struct ServantCombineControl___c_StaticFields *v76; // x9
  System_Func_object__int__o *_9__117_3; // x21
  Il2CppObject *v78; // x22
  struct ServantCombineControl___c_StaticFields *v79; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Collections_Generic_List_UserServantEntity__o *v87; // x0
  const MethodInfo *v88; // x2
  Il2CppObject *v90; // [xsp+8h] [xbp-78h]
  bool IsExtraClass; // [xsp+14h] [xbp-6Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_596A231 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_UserServantEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_UserServantEntity__bool___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_UserServantEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_UserServantEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Rarity_TYPE__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    sub_2213A60(&SvtClassAttri_TypeInfo);
    sub_2213A60(&Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_0__);
    sub_2213A60(&Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_2__);
    sub_2213A60(&Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_3__);
    sub_2213A60(&Method_ServantCombineControl___c__DisplayClass117_0__GetRecommendedCombineData_b__1__);
    sub_2213A60(&ServantCombineControl___c__DisplayClass117_0_TypeInfo);
    sub_2213A60(&ServantCombineControl___c_TypeInfo);
    byte_596A231 = 1;
  }
  v2 = sub_2213CCC(ServantCombineControl___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_64;
  v8 = baseData;
  CombineMaterialList = UserServantMaster__GetCombineMaterialList((UserServantMaster_o *)Master_object, 0);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.baseData;
  if ( !baseData )
    goto LABEL_64;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)baseData, 0, 0, 0);
  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v11, v12);
  v90 = (Il2CppObject *)v2;
  IsExtraClass = SvtClassAttri__IsExtraClass(SvtClassId, 0);
  if ( !*(&RecommendedConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v14, v15);
  baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)RecommendedConfigSaveData__LoadConfigSaveData(0);
  if ( !baseData )
    goto LABEL_64;
  v16 = baseData;
  v17 = *(System_Collections_Generic_List_int__o **)&baseData->fields._MasterKind_k__BackingField;
  v18 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v18,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor__);
  MasterName_k__BackingField = v16->fields._MasterName_k__BackingField;
  if ( !MasterName_k__BackingField )
    goto LABEL_64;
  klass = (int)MasterName_k__BackingField[1].klass;
  if ( klass >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)v16->fields._MasterName_k__BackingField;
      if ( !baseData )
        break;
      baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_int___get_Item(
                                                                 (System_Collections_Generic_List_int__o *)baseData,
                                                                 v22,
                                                                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v18 )
        break;
      items = v18->fields._items;
      v24 = Method_System_Collections_Generic_List_Rarity_TYPE__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      v7 = (unsigned int)baseData;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v18,
          (int32_t)baseData,
          *(const MethodInfo_4469A88 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v18->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = (_DWORD)baseData;
      }
      if ( klass == ++v22 )
        goto LABEL_22;
    }
LABEL_64:
    sub_2213CDC(baseData, v7);
  }
LABEL_22:
  if ( !CombineMaterialList )
    goto LABEL_64;
  max_length = CombineMaterialList->max_length;
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    do
    {
      if ( (unsigned int)v27 >= LODWORD(CombineMaterialList->max_length) )
        sub_2213CE4(baseData);
      v28 = CombineMaterialList->m_Items[v27];
      if ( !v28 )
        goto LABEL_64;
      v30 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v19);
      *(_QWORD *)&v93.fields.currentCryptoKey = v30;
      *(_QWORD *)&v93.fields.fakeValue = v29;
      baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                 v93,
                                                                 0);
      if ( !v8 )
        goto LABEL_64;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v8,
                 (int32_t)baseData,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__IsMatchServantClassType(
                                                                 this,
                                                                 (ServantEntity_o *)Entity,
                                                                 v17,
                                                                 IsExtraClass,
                                                                 v32);
      if ( ((unsigned __int8)baseData & 1) != 0 )
      {
        baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)v18,
                                                                   0);
        if ( ((unsigned __int8)baseData & 1) != 0 )
          goto LABEL_68;
        baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getRarity(v28, 0);
        if ( !v18 )
          goto LABEL_64;
        baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_Int32Enum___Contains(
                                                                   v18,
                                                                   (int32_t)baseData,
                                                                   (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
        if ( ((unsigned __int8)baseData & 1) != 0 )
        {
LABEL_68:
          if ( !v10 )
            goto LABEL_64;
          v38 = v10->fields._items;
          v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v10->fields._version;
          if ( !v38 )
            goto LABEL_64;
          v40 = v10->fields._size;
          if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v28,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &v38->obj.klass + v40;
            v10->fields._size = v40 + 1;
            v41[4] = (Il2CppClass *)v28;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v28, v19, v33, v34, v35, v36, v37);
          }
        }
      }
    }
    while ( (_DWORD)max_length != (_DWORD)++v27 );
  }
  if ( !v10 )
    goto LABEL_64;
  if ( !v10->fields._size )
    return 0;
  baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.baseData;
  if ( !baseData )
    goto LABEL_64;
  baseData = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__getSvtClassId(
                                                             (UserServantEntity_o *)baseData,
                                                             0,
                                                             0,
                                                             0);
  if ( !v2 )
    goto LABEL_64;
  *(_DWORD *)(v2 + 16) = (_DWORD)baseData;
  v43 = ServantCombineControl___c_TypeInfo;
  if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v7, v42);
    v43 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__117_0 = (System_Func_object__int__o *)static_fields->__9__117_0;
  if ( !_9__117_0 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v7, v42);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__117_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_0,
      v46,
      Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_0__,
      0);
    v47 = ServantCombineControl___c_TypeInfo->static_fields;
    v47->__9__117_0 = (struct System_Func_UserServantEntity__int__o *)_9__117_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->__9__117_0, (int32_t)_9__117_0, v48, v49, v50, v51, v52, v53);
  }
  v54 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (System_Func_TSource__TKey__o *)_9__117_0,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_UserServantEntity__int___);
  v55 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v55,
    v90,
    Method_ServantCombineControl___c__DisplayClass117_0__GetRecommendedCombineData_b__1__,
    0);
  v56 = System_Linq_Enumerable__ThenByDescending_object__bool_(
          v54,
          (System_Func_TSource__TKey__o *)v55,
          (const MethodInfo_389B2F0 *)Method_System_Linq_Enumerable_ThenByDescending_UserServantEntity__bool___);
  v59 = ServantCombineControl___c_TypeInfo;
  v60 = v56;
  if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v57, v58);
    v59 = ServantCombineControl___c_TypeInfo;
  }
  v61 = v59->static_fields;
  _9__117_2 = (System_Func_object__bool__o *)v61->__9__117_2;
  if ( !_9__117_2 )
  {
    if ( !*(&v59->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v59, v57, v58);
      v61 = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)v61->__9;
    _9__117_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__117_2,
      v63,
      Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_2__,
      0);
    v64 = ServantCombineControl___c_TypeInfo->static_fields;
    v64->__9__117_2 = (struct System_Func_UserServantEntity__bool__o *)_9__117_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v64->__9__117_2, (int32_t)_9__117_2, v65, v66, v67, v68, v69, v70);
  }
  v71 = System_Linq_Enumerable__ThenByDescending_object__bool_(
          v60,
          (System_Func_TSource__TKey__o *)_9__117_2,
          (const MethodInfo_389B2F0 *)Method_System_Linq_Enumerable_ThenByDescending_UserServantEntity__bool___);
  v74 = ServantCombineControl___c_TypeInfo;
  v75 = v71;
  if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v72, v73);
    v74 = ServantCombineControl___c_TypeInfo;
  }
  v76 = v74->static_fields;
  _9__117_3 = (System_Func_object__int__o *)v76->__9__117_3;
  if ( !_9__117_3 )
  {
    if ( !*(&v74->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v74, v72, v73);
      v76 = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)v76->__9;
    _9__117_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_3,
      v78,
      Method_ServantCombineControl___c__GetRecommendedCombineData_b__117_3__,
      0);
    v79 = ServantCombineControl___c_TypeInfo->static_fields;
    v79->__9__117_3 = (struct System_Func_UserServantEntity__int__o *)_9__117_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v79->__9__117_3, (int32_t)_9__117_3, v80, v81, v82, v83, v84, v85);
  }
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v75,
                                                               (System_Func_TSource__TKey__o *)_9__117_3,
                                                               (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_UserServantEntity__int___);
  v87 = (System_Collections_Generic_List_UserServantEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v86,
                                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
  return ServantCombineControl__SetCombineData_37686956(this, v87, v88);
}


int32_t ServantCombineControl__GetTutorialOpenType(ServantCombineControl_o *this, const MethodInfo *method)
{
  return 35;
}


void ServantCombineControl__InitInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentLvObj; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  System_String_o *v7; // x1
  UILabel_o *qpLb; // x20
  UILabel_o *expLb; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int v12; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A21B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A21B = 1;
  }
  currentLvObj = this->fields.currentLvObj;
  v12 = 0;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.increLvObj;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_22;
  currentLvObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentLvObj, 0);
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.resAdjustInfo;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.conductionWireInfo;
  if ( !currentLvObj )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 0, v4);
  ServantCombineControl__ResetCampaign(this, v5);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increLvLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustHpIconLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UIIconLabel__Clear((UIIconLabel_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UIIconLabel__Clear((UIIconLabel_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !currentLvObj )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  ServantCombineControl__SetHaveQpInfo(this, v6);
  v7 = (System_String_o *)StringLiteral_9617/*"N0"*/;
  qpLb = this->fields.qpLb;
  this->fields._spendQpVal_k__BackingField = 0;
  v12 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_77138656((int32_t)&v12, v7, 0);
  if ( !qpLb )
    goto LABEL_22;
  UILabel__set_text(qpLb, (System_String_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.qpLb;
  if ( !currentLvObj )
    goto LABEL_22;
  v13.fields.r = 1.0;
  v13.fields.g = 1.0;
  v13.fields.b = 1.0;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v13, 0);
  expLb = this->fields.expLb;
  this->fields._getExpVal_k__BackingField = 0;
  v12 = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v12, 0);
  if ( !expLb
    || (UILabel__set_text(expLb, (System_String_o *)currentLvObj, 0),
        ServantCombineControl__DestroyGrid(this, v10),
        this->fields._isExchangeSvtInList_k__BackingField = 0,
        this->fields._IsExeCombine_k__BackingField = 0,
        ServantCombineControl__SetExeBtnState(this, v11),
        (currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp) == 0) )
  {
LABEL_22:
    sub_2213CDC(currentLvObj, method);
  }
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 0, 0);
}


void ServantCombineControl__InitMaterialSvtInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A219 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A219 = 1;
  }
  ServantCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_2213CDC(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_charaGraph = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_charaGraph, 0, v11, v12, v13, v14, v15, v16);
  }
}


void ServantCombineControl__InitSvtCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineRootComponent_c *v4; // x1
  __int64 v5; // x2
  System_String_o *selectMaterialSvtBtn; // x0
  __int64 v7; // x1
  __int64 v8; // x3
  __int64 naturalAligment; // x9
  ServantCombineControl___c_c *v10; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__86_0; // x20
  Il2CppObject *v13; // x21
  struct ServantCombineControl___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UILabel_o *needQpLb; // x20
  UILabel_o *getExpLb; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1
  UILabel_o *preSelectBaseLb; // x20
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 *v37; // x8
  System_String_o *v38; // x21
  UILabel_o *autoRecommendedButtonLabel; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v48; // x0
  __int64 v49; // x1
  unsigned int klass_high; // w9
  MenuListControl_o *v51; // x0
  void *v52; // x0
  void *v53; // x20
  int v54; // w1
  struct System_Collections_Generic_List_T__o *v55; // x20
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596A218 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_ServantCombineControl___c__InitSvtCombine_b__86_0__);
    sub_2213A60(&ServantCombineControl___c_TypeInfo);
    sub_2213A60(&StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/);
    sub_2213A60(&StringLiteral_2190/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_2189/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_7233/*"GET_EXP_INFO"*/);
    sub_2213A60(&StringLiteral_9623/*"NEED_QP_INFO"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A218 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( TutorialFlag__Get_47388504(102, 0) )
  {
LABEL_18:
    needQpLb = this->fields.needQpLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9623/*"NEED_QP_INFO"*/, 0);
    if ( needQpLb )
    {
      UILabel__set_text(needQpLb, selectMaterialSvtBtn, 0);
      getExpLb = this->fields.getExpLb;
      selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_7233/*"GET_EXP_INFO"*/, 0);
      if ( getExpLb )
      {
        UILabel__set_text(getExpLb, selectMaterialSvtBtn, 0);
        this->fields.isSelectBase = 0;
        CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
        this->fields._selectMaterialUsrSvtIdList_k__BackingField = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
          0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        ServantCombineControl__InitMaterialSvtInfo(this, v29);
        selectMaterialSvtBtn = (System_String_o *)this->fields.selectMaterialSvtBtn;
        if ( selectMaterialSvtBtn )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectMaterialSvtBtn, 0, 0);
          preSelectBaseLb = this->fields.preSelectBaseLb;
          selectMaterialSvtBtn = LocalizationManager__Get((System_String_o *)StringLiteral_9171/*"MSG_PRESELECT_BASE_SVT"*/, 0);
          if ( preSelectBaseLb )
          {
            UILabel__set_text(preSelectBaseLb, selectMaterialSvtBtn, 0);
            selectMaterialSvtBtn = (System_String_o *)this->fields.preSelectBaseLb;
            if ( selectMaterialSvtBtn )
            {
              selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                          0);
              if ( selectMaterialSvtBtn )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 1, 0);
                selectMaterialSvtBtn = (System_String_o *)this->fields.baseSelectInfoLb;
                if ( selectMaterialSvtBtn )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 1, 0);
                  this->fields._IsExeCombine_k__BackingField = 0;
                  ServantCombineControl__SetExeBtnState(this, v31);
                  selectMaterialSvtBtn = (System_String_o *)this->fields.eventNoticeImg;
                  this->fields._targetType_k__BackingField = 0;
                  this->fields.conductionType = 0;
                  if ( selectMaterialSvtBtn )
                  {
                    selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                                0);
                    if ( selectMaterialSvtBtn )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0);
                      if ( !*(&RecommendedConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v32, v33);
                      ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0);
                      if ( ConfigSaveData && RecommendedConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
                        v37 = &StringLiteral_2190/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
                      else
                        v37 = &StringLiteral_2189/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
                      v38 = (System_String_o *)*v37;
                      autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
                      selectMaterialSvtBtn = LocalizationManager__Get(v38, 0);
                      if ( autoRecommendedButtonLabel )
                      {
                        UILabel__set_text(autoRecommendedButtonLabel, selectMaterialSvtBtn, 0);
                        selectMaterialSvtBtn = (System_String_o *)this->fields.autoSetAnnounceObj;
                        if ( selectMaterialSvtBtn )
                        {
                          ((void (__fastcall *)(System_String_o *, const MethodInfo *, float))selectMaterialSvtBtn->klass->vtable._8_Equals.methodPtr)(
                            selectMaterialSvtBtn,
                            selectMaterialSvtBtn->klass->vtable._8_Equals.method,
                            1.0);
                          selectMaterialSvtBtn = (System_String_o *)this->fields.autoSetAnnounceObj;
                          if ( selectMaterialSvtBtn )
                          {
                            selectMaterialSvtBtn = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)selectMaterialSvtBtn,
                                                                        0);
                            if ( selectMaterialSvtBtn )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0);
                              this->fields.autoSetAnnounceCoroutine = 0;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&this->fields.autoSetAnnounceCoroutine,
                                0,
                                v40,
                                v41,
                                v42,
                                v43,
                                v44,
                                v45);
                              menuListCtr = this->fields.menuListCtr;
                              if ( menuListCtr )
                              {
                                combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
                                if ( combineEventList && combineEventList->fields._size >= 1 )
                                {
                                  System_Collections_Generic_List_object___GetEnumerator(
                                    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
                                    combineEventList,
                                    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
                                  v57 = v56;
                                  v56.fields._list = 0;
                                  *(_QWORD *)&v56.fields._index = &v57;
                                  while ( 1 )
                                  {
                                    v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                            &v57,
                                            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
                                    if ( !v48 )
                                      break;
                                    if ( !v57.fields._current )
                                      sub_2213CDC(v48, v49);
                                    klass_high = HIDWORD(v57.fields._current[1].klass);
                                    if ( klass_high <= 0x21 && ((1LL << klass_high) & 0x308000036LL) != 0 )
                                    {
                                      v51 = this->fields.menuListCtr;
                                      if ( !v51 )
                                        sub_2213CDC(0, v49);
                                      MenuListControl__setBannerIcon(
                                        v51,
                                        this->fields.eventNoticeImg,
                                        (EventEntity_o *)v57.fields._current[5].klass,
                                        0);
                                    }
                                  }
                                  System_Collections_Generic_List_Enumerator_object___Dispose(
                                    &v57,
                                    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
                                }
                                goto LABEL_52;
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
        }
      }
    }
LABEL_58:
    sub_2213CDC(selectMaterialSvtBtn, v7);
  }
  selectMaterialSvtBtn = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  selectMaterialSvtBtn = (System_String_o *)selectMaterialSvtBtn[1].monitor;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  v4 = CombineRootComponent_TypeInfo;
  naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( selectMaterialSvtBtn->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineRootComponent_c *)selectMaterialSvtBtn->klass->_2.typeHierarchy[naturalAligment - 1] == CombineRootComponent_TypeInfo )
  {
    if ( HIDWORD(selectMaterialSvtBtn[28].monitor) == 1 )
    {
      v10 = ServantCombineControl___c_TypeInfo;
      if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, CombineRootComponent_TypeInfo, v5);
        v10 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v10->static_fields;
      _9__86_0 = static_fields->__9__86_0;
      if ( !_9__86_0 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v10, v4, v5);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__86_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__86_0, v13, Method_ServantCombineControl___c__InitSvtCombine_b__86_0__, 0);
        v14 = ServantCombineControl___c_TypeInfo->static_fields;
        v14->__9__86_0 = _9__86_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v14->__9__86_0,
          (int32_t)_9__86_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 35, _9__86_0, 0, 0);
    }
    goto LABEL_18;
  }
  v52 = (void *)sub_221405C(selectMaterialSvtBtn, CombineRootComponent_TypeInfo, v5, v8);
  v53 = v52;
  if ( v54 != 1 )
  {
    sub_1FFECB4(&v56);
    sub_230112C(v53);
  }
  v55 = *(struct System_Collections_Generic_List_T__o **)__cxa_begin_catch(v52);
  v56.fields._list = v55;
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v56.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  if ( v55 )
    sub_2213CD4(v55);
LABEL_52:
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkIconLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UIIconLabel__Clear((UIIconLabel_o *)selectMaterialSvtBtn, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UILabel__set_text((UILabel_o *)selectMaterialSvtBtn, (System_String_o *)StringLiteral_1/*""*/, 0);
  selectMaterialSvtBtn = (System_String_o *)this->fields.resAdjustInfo;
  if ( !selectMaterialSvtBtn )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectMaterialSvtBtn, 0, 0);
}


bool ServantCombineControl__IsBaseSelect(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


bool ServantCombineControl__IsLevelMax(
        ServantCombineControl_o *this,
        int32_t totalExp,
        int32_t expType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w22
  int32_t LevelMax; // w0
  int32_t v16; // w21
  int v17; // w8
  int32_t v18; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_596A233 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A233 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_22;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( !v11
    || (DataMasterBase_object__object__int___GetEntity(
          v11,
          (int32_t)Instance,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = this->fields.baseData) == 0) )
  {
LABEL_22:
    sub_2213CDC(Instance, v8);
  }
  v14 = *((_DWORD *)Instance + 100);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)Instance, 0);
  v16 = LevelMax;
  if ( v14 == LevelMax )
  {
    v17 = 0;
  }
  else if ( v14 >= LevelMax )
  {
LABEL_18:
    v17 = v16;
  }
  else
  {
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_22;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___);
      if ( !Instance )
        goto LABEL_22;
      Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, expType, v14, 0);
      if ( !Instance )
        goto LABEL_22;
      v18 = *((_DWORD *)Instance + 6);
      if ( v18 > totalExp )
      {
        v17 = *((_DWORD *)Instance + 5);
        return v17 >= v16;
      }
      if ( v18 == totalExp )
        break;
      if ( v16 == ++v14 )
        goto LABEL_18;
    }
    v17 = *((_DWORD *)Instance + 5) + 1;
  }
  return v17 >= v16;
}


bool ServantCombineControl__IsMatchServantClassType(
        ServantCombineControl_o *this,
        ServantEntity_o *svtEntity,
        System_Collections_Generic_List_int__o *selectClassList,
        bool isExtraClass,
        const MethodInfo *method)
{
  UserServantEntity_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  bool v11; // w19
  int32_t classId; // w22
  const MethodInfo_44675F0 *v13; // x2
  System_Collections_Generic_List_int__o *v14; // x0

  if ( (byte_596A232 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596A232 = 1;
  }
  IsNullOrEmpty = (UserServantEntity_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)selectClassList,
                                           0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 1;
  if ( !svtEntity )
    goto LABEL_21;
  classId = svtEntity->fields.classId;
  if ( classId != 1001 )
  {
    IsNullOrEmpty = this->fields.baseData;
    if ( IsNullOrEmpty )
    {
      IsNullOrEmpty = (UserServantEntity_o *)UserServantEntity__getSvtClassId(IsNullOrEmpty, 0, 0, 0);
      if ( classId == (_DWORD)IsNullOrEmpty )
      {
        if ( selectClassList )
        {
          v13 = (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__;
LABEL_15:
          v14 = selectClassList;
          v11 = 1;
          if ( System_Collections_Generic_List_int___Contains(v14, 1, v13) )
            return v11;
          return 0;
        }
      }
      else if ( selectClassList )
      {
        return System_Collections_Generic_List_int___Contains(
                 selectClassList,
                 2,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_21:
    sub_2213CDC(IsNullOrEmpty, v10);
  }
  if ( !selectClassList )
    goto LABEL_21;
  if ( !System_Collections_Generic_List_int___Contains(
          selectClassList,
          0,
          (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    if ( isExtraClass )
    {
      v13 = (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__;
      goto LABEL_15;
    }
    return 0;
  }
  return 1;
}


void ServantCombineControl__OnClickClearMaterialButton(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CombineServantListViewManager_o *combineSvtManager; // x0
  __int64 v7; // x1
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596A22D & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCombineControl_OnClickClearMaterialButton__);
    byte_596A22D = 1;
  }
  v3 = Method_ServantCombineControl_OnClickClearMaterialButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickClearMaterialButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantCombineControl_OnClickClearMaterialButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ServantCombineControl__SetCombineNullData(this, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (combineSvtManager = combineRootComponent->fields.combineSvtManager) == 0 )
    sub_2213CDC(combineSvtManager, v7);
  CombineServantListViewManager__clearSelectedSvtList(combineSvtManager, 0);
  ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v9);
  ServantCombineControl__SetStateInfoMsg(this, 1, v10);
}


void ServantCombineControl__OnClickCombineConductionWire(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  int32_t conductionType; // w8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_596A228 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCombineControl_OnClickCombineConductionWire__);
    byte_596A228 = 1;
  }
  v3 = Method_ServantCombineControl_OnClickCombineConductionWire__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickCombineConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantCombineControl_OnClickCombineConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  conductionType = this->fields.conductionType;
  if ( conductionType == 2 )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_12;
    CombineRootComponent__ConductionWireLvExceed(combineRootComponent, 0);
  }
  else if ( conductionType == 1 )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__ConductionWireLimitUp(combineRootComponent, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(combineRootComponent, v5);
  }
}


void ServantCombineControl__OnClickExeCombine(ServantCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t klass; // x20
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  System_String_o *v8; // x21
  signed __int64 v9; // x23
  unsigned __int64 max_length_low; // x27
  int64_t v11; // x22

  if ( (byte_596A227 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_596A227 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_15;
  klass = (int64_t)SelfUserGame[4].klass;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  v8 = SelfUserGame;
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(selectMaterialUsrSvtIdList_k__BackingField->max_length);
    if ( v9 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      sub_2213CE4(SelfUserGame);
    v11 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v9];
    SelfUserGame = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (System_String_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (System_String_o *)DataMasterBase_object__object__long___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                            v11,
                                            (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (System_String_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v9;
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
    sub_2213CDC(SelfUserGame, v4);
  SetRarityDialogControl__SetConfirmCombine(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    v8,
    this->fields._spendQpVal_k__BackingField,
    klass,
    v9 < (int)max_length_low,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0);
}


void ServantCombineControl__OnClickHelp(ServantCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineMenuControl__OnClickHelp((CombineMenuControl_o *)this, 0);
  ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v3);
}


void ServantCombineControl__OnClickMaterialSelectList(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_596A22C & 1) == 0 )
  {
    sub_2213A60(&Method_ServantCombineControl_OnClickMaterialSelectList__);
    byte_596A22C = 1;
  }
  v3 = Method_ServantCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_2213CDC(0, v5);
  CombineRootComponent__ShowMaterialSvtList(combineRootComponent, 0);
}


void ServantCombineControl__OnClickRecommendedButton(ServantCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  RecommenededConfigDialog_o *recommendedConfigDialog; // x20
  RecommenededConfigDialog_ClickDelegate_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_596A22E & 1) == 0 )
  {
    sub_2213A60(&RecommenededConfigDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_ServantCombineControl_OnClickRecommendedButton__);
    sub_2213A60(&Method_ServantCombineControl__OnClickRecommendedButton_b__114_0__);
    byte_596A22E = 1;
  }
  v3 = Method_ServantCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_ServantCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v5);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v7 = (RecommenededConfigDialog_ClickDelegate_o *)sub_2213CCC(RecommenededConfigDialog_ClickDelegate_TypeInfo);
  RecommenededConfigDialog_ClickDelegate___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantCombineControl__OnClickRecommendedButton_b__114_0__,
    v8);
  if ( !recommendedConfigDialog )
    sub_2213CDC(v9, v10);
  RecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v7, v11);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__OnRecommendedAndClearButtonCollider(
        ServantCombineControl_o *this,
        int32_t tutorialProgress,
        const MethodInfo *method)
{
  UICommonButton_o *clearMaterialButton; // x0

  if ( tutorialProgress == 6 )
  {
    clearMaterialButton = this->fields.clearMaterialButton;
    if ( !clearMaterialButton )
      goto LABEL_9;
    UICommonButton__SetColliderEnable(clearMaterialButton, 0, 1, 0);
  }
  else if ( tutorialProgress == 3 )
  {
    clearMaterialButton = this->fields.recommendedButton;
    if ( clearMaterialButton )
    {
      UICommonButton__SetColliderEnable(clearMaterialButton, 0, 1, 0);
      clearMaterialButton = this->fields.clearMaterialButton;
      if ( clearMaterialButton )
      {
        UICommonButton__SetButtonEnableWithCollider(clearMaterialButton, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_2213CDC(clearMaterialButton, *(_QWORD *)&tutorialProgress);
  }
}


void ServantCombineControl__ResetCampaign(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *campaign; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *campaignAlphaCalculator; // x0

  if ( (byte_596A21A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A21A = 1;
  }
  campaign = (UnityEngine_Component_o *)this->fields.campaign;
  if ( !campaign
    || (campaign = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(campaign, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, 0, 0),
        (campaign = (UnityEngine_Component_o *)this->fields.campaignLabel) == 0) )
  {
    sub_2213CDC(campaign, method);
  }
  UILabel__set_text((UILabel_o *)campaign, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.campaignListPerSelectSvt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.campaignListPerSelectSvt, 0, v4, v5, v6, v7, v8, v9);
  *(_QWORD *)&this->fields.campaiginPerSelectSvtListIndex = 0x3F80000000000000LL;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  campaignAlphaCalculator = this->fields.campaignAlphaCalculator;
  this->fields.campaignAlphaAnimTimeOld = realtimeSinceStartup;
  if ( campaignAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(campaignAlphaCalculator, 0);
}


void ServantCombineControl__SetBaseSvtCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UserServantEntity_o **p_baseData; // x21
  struct UICharaGraphTexture_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v20; // x2
  UserServantEntity_o *v21; // x8
  int adjustHp; // w9
  int32_t v23; // w23
  int32_t v24; // w22
  int32_t v25; // w24
  int32_t v26; // w0
  UIIconLabel_o *currentAdjustHpIconLabel; // x23
  int32_t v28; // w24
  __int64 v29; // x2
  UserServantEntity_o *v30; // x8
  int adjustAtk; // w9
  int32_t v32; // w23
  int32_t v33; // w22
  int32_t v34; // w24
  int32_t v35; // w0
  UIIconLabel_o *currentAdjustAtkIconLabel; // x21
  int32_t v37; // w23
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  char v40; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  MenuListControl_c *v45; // x0
  float v46; // s8
  System_Func_float__float__float__float__o *v47; // x20
  AlphaTransitionCalculator_o *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t addParamMaxAdjust2[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+20h] [xbp-60h] BYREF
  __int64 maxAjustAtk; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_596A21E & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&MenuListControl_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A21E = 1;
  }
  p_baseData = &this->fields.baseData;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  maxAjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  this->fields.baseData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseData,
    (int32_t)usrSvtData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCombineControl_o *, struct UICharaGraphTexture_o *, struct UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                          this,
                                          this->fields.charaGraph,
                                          this->fields.baseData,
                                          this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_45;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, *p_baseData, 0);
  combineInfoComp = (CombineInfoComponent_o *)*p_baseData;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  maxAjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  if ( !combineInfoComp )
    goto LABEL_45;
  combineInfoComp = (CombineInfoComponent_o *)UserServantEntity__GetAdjustMax(
                                                (UserServantEntity_o *)combineInfoComp,
                                                (int32_t *)&maxAjustAtk + 1,
                                                (int32_t *)&maxAjustAtk,
                                                &secondMaxAdjustAtk[1],
                                                secondMaxAdjustAtk,
                                                &addParamMaxAdjust2[1],
                                                addParamMaxAdjust2,
                                                0);
  v21 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_45;
  adjustHp = v21->fields.adjustHp;
  v23 = HIDWORD(maxAjustAtk);
  v24 = HIDWORD(maxAjustAtk);
  if ( adjustHp >= SHIDWORD(maxAjustAtk) )
  {
    v25 = secondMaxAdjustAtk[1];
    if ( adjustHp >= secondMaxAdjustAtk[1] )
    {
      v24 = addParamMaxAdjust2[1];
      if ( adjustHp > addParamMaxAdjust2[1] )
        goto LABEL_12;
    }
    else
    {
      v24 = secondMaxAdjustAtk[1];
    }
  }
  if ( v24 > 0 )
    goto LABEL_16;
  v25 = secondMaxAdjustAtk[1];
  v24 = addParamMaxAdjust2[1];
LABEL_12:
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18, v20);
  v26 = System_Math__Max_77153260(v25, v24, 0);
  combineInfoComp = (CombineInfoComponent_o *)System_Math__Max_77153260(v23, v26, 0);
  v21 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_45;
  v24 = (int)combineInfoComp;
LABEL_16:
  currentAdjustHpIconLabel = this->fields.currentAdjustHpIconLabel;
  v28 = v21->fields.adjustHp;
  combineInfoComp = (CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v20);
  if ( !currentAdjustHpIconLabel )
    goto LABEL_45;
  UIIconLabel__Set_48071660(
    currentAdjustHpIconLabel,
    44,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v28,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * v24,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.currentAdjustHpMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_45;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  v30 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_45;
  adjustAtk = v30->fields.adjustAtk;
  v32 = maxAjustAtk;
  v33 = maxAjustAtk;
  if ( adjustAtk >= (int)maxAjustAtk )
  {
    v34 = secondMaxAdjustAtk[0];
    if ( adjustAtk >= secondMaxAdjustAtk[0] )
    {
      v33 = addParamMaxAdjust2[0];
      if ( adjustAtk > addParamMaxAdjust2[0] )
        goto LABEL_27;
    }
    else
    {
      v33 = secondMaxAdjustAtk[0];
    }
  }
  if ( v33 > 0 )
    goto LABEL_31;
  v34 = secondMaxAdjustAtk[0];
  v33 = addParamMaxAdjust2[0];
LABEL_27:
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18, v29);
  v35 = System_Math__Max_77153260(v34, v33, 0);
  combineInfoComp = (CombineInfoComponent_o *)System_Math__Max_77153260(v32, v35, 0);
  v30 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_45;
  v33 = (int)combineInfoComp;
LABEL_31:
  combineInfoComp = (CombineInfoComponent_o *)BalanceConfig_TypeInfo;
  currentAdjustAtkIconLabel = this->fields.currentAdjustAtkIconLabel;
  v37 = v30->fields.adjustAtk;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v29);
  if ( !currentAdjustAtkIconLabel )
    goto LABEL_45;
  UIIconLabel__Set_48071660(
    currentAdjustAtkIconLabel,
    45,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v37,
    BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v33,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.currentAdjustAtkMaxLabel;
  if ( !combineInfoComp )
    goto LABEL_45;
  UILabel__set_text((UILabel_o *)combineInfoComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  ServantCombineControl__CheckConductionWire(this, v38);
  combineInfoComp = (CombineInfoComponent_o *)ServantCombineControl__SetCampaignListPerSelectSvt(this, usrSvtData, v39);
  if ( !this->fields.campaign )
    goto LABEL_45;
  v40 = (char)combineInfoComp;
  combineInfoComp = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.campaign,
                                                0);
  if ( !combineInfoComp )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)combineInfoComp, v40 & 1, 0);
  if ( (v40 & 1) == 0 )
    return;
  combineInfoComp = (CombineInfoComponent_o *)this->fields.campaignListPerSelectSvt;
  this->fields.campaiginPerSelectSvtListIndex = 0;
  if ( !combineInfoComp )
    goto LABEL_45;
  combineInfoComp = (CombineInfoComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)combineInfoComp,
                                                0,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
  if ( !combineInfoComp )
    goto LABEL_45;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)combineInfoComp,
           0,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v42);
  this->fields.campaignAlphaAnimNow = 0.0;
  this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
  v45 = MenuListControl_TypeInfo;
  if ( !*(&MenuListControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, v43, v44);
    v45 = MenuListControl_TypeInfo;
  }
  v46 = ChangedFPSUtil__CovertFrameNumToSecond(v45->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0);
  v47 = ExtraEasing__AsymptoticSeriesFloat(
          MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
          (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
          0);
  v48 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v48, v46, v47, 0);
  this->fields.campaignAlphaCalculator = v48;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.campaignAlphaCalculator,
    (int32_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  combineInfoComp = (CombineInfoComponent_o *)this->fields.campaignAlphaCalculator;
  if ( !combineInfoComp )
LABEL_45:
    sub_2213CDC(combineInfoComp, v18);
  AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)combineInfoComp, 0);
}


bool ServantCombineControl__SetCampaignListPerSelectSvt(
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
  __int64 v16; // x2
  Il2CppClass *klass; // x23
  int64_t Time; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int klass_high; // w8
  System_Int32_array *monitor; // x23
  __int64 v28; // x24
  __int64 v29; // x25
  int32_t v30; // w1
  System_Int32_array *v31; // x23
  int32_t SvtClassId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Func_object__int__o *v37; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  System_Func_object__object__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  ServantCombineControl___c_c *v43; // x8
  struct ServantCombineControl___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__94_1; // x21
  Il2CppObject *v46; // x22
  struct ServantCombineControl___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_596A21F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_2213A60(&System_Func_List_EventCampaignEntity___int__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_0__);
    sub_2213A60(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_94_2__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_1__);
    sub_2213A60(&ServantCombineControl___c_TypeInfo);
    byte_596A21F = 1;
  }
  memset(&v63, 0, sizeof(v63));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_53;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0);
  if ( !CombineEventCampaigns )
    return (char)CombineEventCampaigns;
  v8 = (System_Collections_Generic_List_object__o *)CombineEventCampaigns;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    v8,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v63 = v62;
  v62.fields._list = 0;
  *(_QWORD *)&v62.fields._index = &v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
  {
    current = v63.fields._current;
    EventMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantCombineControl__get_EventMaster(this, v10);
    if ( !current )
      sub_2213CDC(EventMaster, v13);
    if ( !EventMaster )
      sub_2213CDC(0, v13);
    Entity = DataMasterBase_object__object__int___GetEntity(
               EventMaster,
               (int32_t)current[1].klass,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !Entity )
      sub_2213CDC(0, v15);
    klass = Entity[6].klass;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
    Time = NetworkManager__getTime(0);
    if ( (__int64)klass >= Time )
    {
      klass_high = HIDWORD(current[1].klass);
      if ( klass_high <= 5 )
      {
        if ( (unsigned int)klass_high <= 5 && ((1 << klass_high) & 0x34) != 0 )
        {
          monitor = (System_Int32_array *)current[2].monitor;
          if ( !monitor )
            sub_2213CDC(Time, v19);
          if ( monitor->max_length )
          {
            if ( !usrSvtData )
              sub_2213CDC(Time, v19);
            v28 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
            v29 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
            *(_QWORD *)&v64.fields.currentCryptoKey = v28;
            *(_QWORD *)&v64.fields.fakeValue = v29;
            v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v64, 0);
            Time = System_Array__IndexOf_int_(
                     monitor,
                     v30,
                     (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
            goto LABEL_30;
          }
LABEL_31:
          if ( !v9
            || (items = v9->fields._items,
                v34 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
                ++v9->fields._version,
                !items) )
          {
            sub_2213CDC(Time, v19);
          }
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              current,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v36[4] = (Il2CppClass *)current;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)current, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      else if ( klass_high == 27 )
      {
        if ( !usrSvtData )
          sub_2213CDC(Time, v19);
        Time = UserServantEntity__IsExchangeSvt(usrSvtData, 0);
        if ( (Time & 1) != 0 )
          goto LABEL_31;
      }
      else if ( (klass_high & 0x7FFFFFFE) == 0x20 )
      {
        if ( !usrSvtData )
          sub_2213CDC(Time, v19);
        v31 = (System_Int32_array *)current[2].monitor;
        SvtClassId = UserServantEntity__getSvtClassId(usrSvtData, 0, 0, 0);
        Time = System_Array__IndexOf_int_(
                 v31,
                 SvtClassId,
                 (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
LABEL_30:
        if ( (Time & 0x80000000) == 0 )
          goto LABEL_31;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  if ( !v9 )
    goto LABEL_53;
  if ( !v9->fields._size )
  {
    LOBYTE(CombineEventCampaigns) = 0;
    return (char)CombineEventCampaigns;
  }
  v37 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventCampaignEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v37,
    0,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_g__GetEquivalentTarget_94_2__,
    0);
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToLookup_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                                               (System_Func_TSource__TKey__o *)v37,
                                                               (const MethodInfo_38A1174 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
  v39 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity___TypeInfo);
  System_Func_object__object____ctor(
    v39,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_0__,
    0);
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v38,
                                                               (System_Func_TSource__TResult__o *)v39,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_IGrouping_int__EventCampaignEntity___List_EventCampaignEntity____);
  v43 = ServantCombineControl___c_TypeInfo;
  if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v40, v41);
    v43 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__94_1 = (System_Func_object__int__o *)static_fields->__9__94_1;
  if ( !_9__94_1 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v40, v41);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__94_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_List_EventCampaignEntity___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__94_1,
      v46,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_1__,
      0);
    v47 = ServantCombineControl___c_TypeInfo->static_fields;
    v47->__9__94_1 = (struct System_Func_List_EventCampaignEntity___int__o *)_9__94_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->__9__94_1, (int32_t)_9__94_1, v48, v49, v50, v51, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__94_1,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_List_EventCampaignEntity___int___);
  Instance = (DataManager_o *)System_Linq_Enumerable__ToList_object_(
                                v54,
                                (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_List_EventCampaignEntity____);
  if ( !this )
LABEL_53:
    sub_2213CDC(Instance, v6);
  this->fields.campaignListPerSelectSvt = (struct System_Collections_Generic_List_List_EventCampaignEntity___o *)Instance;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.campaignListPerSelectSvt,
    (int32_t)Instance,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  LOBYTE(CombineEventCampaigns) = 1;
  return (char)CombineEventCampaigns;
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__SetCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *data,
        bool isUpdateMaterialGrid,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SetCombineData_o *v9; // x20
  ServantCombineControl_o *v10; // x19
  struct System_Int64_array *materialUsrSvtIdList; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Int64_array *v18; // x8
  _BOOL4 v19; // w25
  struct UserServantEntity_o *baseSvtData; // x1
  UserServantEntity_o **p_baseData; // x21
  __int64 v22; // x2
  struct UserServantEntity_o *baseData; // x8
  __int64 v24; // x22
  __int64 v25; // x24
  int32_t v26; // w0
  int32_t v27; // w22
  const MethodInfo *v28; // x2
  int32_t spendQp; // w8
  UILabel_o *qpLb; // x23
  int32_t getExp; // w8
  UILabel_o *expLb; // x23
  __int64 v33; // x2
  UserServantEntity_o *v34; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x23
  __int64 v36; // x24
  __int64 v37; // x25
  float r; // w8
  int32_t combineTxtImg; // w10
  const MethodInfo *v40; // x2
  int32_t LevelMax; // w23
  struct UserServantEntity_o *v42; // x8
  UILabel_o *currentLvLb; // x24
  int32_t *p_increLv; // x24
  UILabel_o *increLvLb; // x25
  __int64 v46; // x2
  UILabel_o *increValLb; // x25
  LocalizationManager_c *v48; // x0
  int v49; // w10
  System_String_o *v50; // x26
  Il2CppObject *v51; // x0
  int v52; // w8
  __int64 v53; // x2
  UserServantEntity_o *v54; // x8
  __int64 v55; // x22
  __int64 v56; // x24
  int32_t v57; // w24
  __int64 v58; // x22
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct UserServantEntity_o *v65; // x1
  int32_t increLv; // w9
  struct UserServantEntity_o *v67; // x8
  int v68; // w9
  int32_t v69; // s0
  int32_t getHpAdjustVal; // w10
  int v71; // w8
  int32_t getAtkAdjustVal; // w9
  __int64 v73; // x2
  int32_t adjustHp; // w22
  BalanceConfig_c *v75; // x0
  int v76; // w9
  int v77; // w25
  int32_t StatusUpAdjustHp; // w8
  int v79; // w23
  int v80; // w22
  int32_t v81; // w22
  int32_t v82; // w22
  int32_t v83; // w23
  int32_t v84; // w1
  __int64 v85; // x2
  BalanceConfig_c *v86; // x0
  int32_t adjustAtk; // w21
  _BOOL4 v88; // w9
  int v89; // w22
  int32_t v90; // w26
  int v91; // w9
  int v92; // w23
  int v93; // w20
  int32_t StatusUpAdjustAtk; // w8
  int v95; // w21
  int v96; // w9
  int32_t v97; // w20
  int32_t v98; // w20
  int32_t v99; // w21
  int32_t v100; // w1
  char v102; // w20
  int32_t v103; // w20
  int v104; // w9
  const MethodInfo *v105; // x1
  int32_t increAmount; // [xsp+18h] [xbp-98h] BYREF
  int32_t v107; // [xsp+1Ch] [xbp-94h] BYREF
  __int64 v108; // [xsp+20h] [xbp-90h] BYREF
  int32_t addParamMaxAdjust2[2]; // [xsp+28h] [xbp-88h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+30h] [xbp-80h] BYREF
  __int64 maxAjustAtk; // [xsp+38h] [xbp-78h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  System_String_array *skillNameList; // [xsp+48h] [xbp-68h] BYREF
  System_Int32_array *idList; // [xsp+50h] [xbp-60h] BYREF
  __int64 afterAtk; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = data;
  v10 = this;
  if ( (byte_596A222 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CombineSvtData_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_7758/*"INCREMENT_SVTLEVEL"*/);
    this = (ServantCombineControl_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A222 = 1;
  }
  idList = 0;
  afterAtk = 0;
  *(_QWORD *)lateExp = 0;
  skillNameList = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  maxAjustAtk = 0;
  v108 = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  v107 = 0;
  if ( isUpdateMaterialGrid )
    ServantCombineControl__DestroyGrid(v10, (const MethodInfo *)data);
  if ( !v9 )
    goto LABEL_113;
  materialUsrSvtIdList = v9->fields.materialUsrSvtIdList;
  v10->fields._selectMaterialUsrSvtIdList_k__BackingField = materialUsrSvtIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int32_t)materialUsrSvtIdList,
    (System_String_o *)isUpdateMaterialGrid,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v18 = v9->fields.materialUsrSvtIdList;
  v19 = v18 && LODWORD(v18->max_length) != 0;
  baseSvtData = v9->fields.baseSvtData;
  p_baseData = &v10->fields.baseData;
  v10->fields.baseData = baseSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.baseData,
    (int32_t)baseSvtData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  baseData = v10->fields.baseData;
  if ( !baseData )
    goto LABEL_113;
  v24 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v25 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data, v22);
  *(_QWORD *)&v116.fields.currentCryptoKey = v24;
  *(_QWORD *)&v116.fields.fakeValue = v25;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v116, 0);
  if ( v19 )
  {
    v27 = v26;
    this = (ServantCombineControl_o *)v10->fields.conductionWireInfo;
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    if ( isUpdateMaterialGrid )
      ServantCombineControl__SetCombineMaterialGrid(v10, v9->fields.materialUsrSvtIdList, v28);
    spendQp = v9->fields.spendQp;
    qpLb = v10->fields.qpLb;
    v10->fields._spendQpVal_k__BackingField = spendQp;
    v107 = spendQp;
    this = (ServantCombineControl_o *)System_Int32__ToString_77138656(
                                        (int32_t)&v107,
                                        (System_String_o *)StringLiteral_9617/*"N0"*/,
                                        0);
    if ( !qpLb )
      goto LABEL_113;
    UILabel__set_text(qpLb, (System_String_o *)this, 0);
    getExp = v9->fields.getExp;
    expLb = v10->fields.expLb;
    v10->fields._getExpVal_k__BackingField = getExp;
    v107 = getExp;
    this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v107, 0);
    if ( !expLb )
      goto LABEL_113;
    UILabel__set_text(expLb, (System_String_o *)this, 0);
    this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_113;
    this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    v34 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_113;
    v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
    v37 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data, v33);
    *(_QWORD *)&v117.fields.currentCryptoKey = v36;
    *(_QWORD *)&v117.fields.fakeValue = v37;
    this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v117, 0);
    if ( !v35 )
      goto LABEL_113;
    this = (ServantCombineControl_o *)DataMasterBase_object__object__int___GetEntity(
                                        v35,
                                        (int32_t)this,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_113;
    r = this->fields._CondTitleLabelColor_k__BackingField.fields.r;
    this = (ServantCombineControl_o *)v10->fields.baseData;
    *(float *)&v10->fields.expType = r;
    if ( !this )
      goto LABEL_113;
    combineTxtImg = (int32_t)this->fields.combineTxtImg;
    v10->fields.totalExp = HIDWORD(this->fields.combineTxtImg) + v10->fields._getExpVal_k__BackingField;
    v10->fields.checkLv = combineTxtImg;
    LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
    if ( v10->fields.checkLv == LevelMax )
    {
      v10->fields.increLv = LevelMax;
    }
    else
    {
      while ( !ServantCombineControl__CheckIncrementLv(v10, v10->fields.checkLv, v40) )
        ;
    }
    this = (ServantCombineControl_o *)v10->fields.currentLvObj;
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ServantCombineControl_o *)v10->fields.increLvObj;
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ServantCombineControl_o *)v10->fields.increValLb;
    if ( !this )
      goto LABEL_113;
    this = (ServantCombineControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v42 = v10->fields.baseData;
    if ( !v42 )
      goto LABEL_113;
    currentLvLb = v10->fields.currentLvLb;
    this = (ServantCombineControl_o *)System_Int32__ToString((int)v42 + 400, 0);
    if ( !currentLvLb )
      goto LABEL_113;
    UILabel__set_text(currentLvLb, (System_String_o *)this, 0);
    p_increLv = &v10->fields.increLv;
    increLvLb = v10->fields.increLvLb;
    this = (ServantCombineControl_o *)System_Int32__ToString((int)v10 + 632, 0);
    if ( !increLvLb )
      goto LABEL_113;
    UILabel__set_text(increLvLb, (System_String_o *)this, 0);
    if ( !*p_baseData )
      goto LABEL_113;
    increValLb = v10->fields.increValLb;
    v48 = LocalizationManager_TypeInfo;
    v49 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    v10->fields.increAmount = v10->fields.increLv - (*p_baseData)->fields.lv;
    if ( !v49 )
      j_il2cpp_runtime_class_init_0(v48, data, v46);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_7758/*"INCREMENT_SVTLEVEL"*/, 0);
    increAmount = v10->fields.increAmount;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &increAmount);
    this = (ServantCombineControl_o *)System_String__Format(v50, v51, 0);
    if ( !increValLb )
      goto LABEL_113;
    UILabel__set_text(increValLb, (System_String_o *)this, 0);
    this = (ServantCombineControl_o *)v10->fields.combineResStatus;
    if ( !this )
      goto LABEL_113;
    CheckCombineResStatus__getCombineResStatus(
      (CheckCombineResStatus_o *)this,
      (int32_t *)&afterAtk + 1,
      (int32_t *)&afterAtk,
      *p_baseData,
      *p_increLv,
      0);
    this = (ServantCombineControl_o *)*p_baseData;
    v52 = v9->fields.getHpAdjustVal + HIDWORD(afterAtk);
    LODWORD(afterAtk) = v9->fields.getAtkAdjustVal + afterAtk;
    HIDWORD(afterAtk) = v52;
    if ( !this )
      goto LABEL_113;
    UserServantEntity__getNextUseSkillInfo((UserServantEntity_o *)this, &idList, &skillNameList, *p_increLv, v27, 1, 0);
    if ( skillNameList )
    {
      if ( !LODWORD(skillNameList->max_length) )
        sub_2213CE4(this);
      data = (SetCombineData_o *)skillNameList->m_Items[0];
      if ( data )
      {
        this = (ServantCombineControl_o *)v10->fields.getSkillLb;
        if ( !this )
          goto LABEL_113;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)data, 0);
      }
    }
    v54 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_113;
    v55 = *(_QWORD *)&v54->fields.limitCount.fields.currentCryptoKey;
    v56 = *(_QWORD *)&v54->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data, v53);
    *(_QWORD *)&v118.fields.currentCryptoKey = v55;
    *(_QWORD *)&v118.fields.fakeValue = v56;
    v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v118, 0);
    v58 = sub_2213CCC(CombineSvtData_TypeInfo);
    CombineSvtData___ctor((CombineSvtData_o *)v58, 0);
    if ( !v58 )
      goto LABEL_113;
    v65 = v10->fields.baseData;
    *(_QWORD *)(v58 + 16) = v65;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 16), (int32_t)v65, v59, v60, v61, v62, v63, v64);
    increLv = v10->fields.increLv;
    v67 = v10->fields.baseData;
    *(_DWORD *)(v58 + 32) = LevelMax;
    *(_DWORD *)(v58 + 24) = increLv;
    *(_DWORD *)(v58 + 28) = v57;
    if ( !v67 )
      goto LABEL_113;
    this = (ServantCombineControl_o *)v10->fields.combineResStatus;
    if ( !this )
      goto LABEL_113;
    CheckCombineResStatus__setSvtExp(
      (CheckCombineResStatus_o *)this,
      (float *)&lateExp[1],
      lateExp,
      v10->fields.totalExp,
      v67->fields.lv,
      LevelMax,
      v10->fields.expType,
      0);
    v68 = HIDWORD(afterAtk);
    v69 = lateExp[1];
    getHpAdjustVal = v9->fields.getHpAdjustVal;
    this = (ServantCombineControl_o *)v10->fields.combineInfoComp;
    *(_DWORD *)(v58 + 40) = lateExp[0];
    *(_DWORD *)(v58 + 44) = v68;
    v71 = afterAtk;
    getAtkAdjustVal = v9->fields.getAtkAdjustVal;
    *(_DWORD *)(v58 + 36) = v69;
    *(_DWORD *)(v58 + 48) = getHpAdjustVal;
    *(_DWORD *)(v58 + 52) = v71;
    *(_DWORD *)(v58 + 56) = getAtkAdjustVal;
    if ( !this )
      goto LABEL_113;
    CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v58, 0);
    this = (ServantCombineControl_o *)*p_baseData;
    *(_QWORD *)secondMaxAdjustAtk = 0;
    maxAjustAtk = 0;
    *(_QWORD *)addParamMaxAdjust2 = 0;
    if ( !this )
      goto LABEL_113;
    UserServantEntity__GetAdjustMax(
      (UserServantEntity_o *)this,
      (int32_t *)&maxAjustAtk + 1,
      (int32_t *)&maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      &addParamMaxAdjust2[1],
      addParamMaxAdjust2,
      0);
    this = (ServantCombineControl_o *)v10->fields.resAdjustInfo;
    if ( !this )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (ServantCombineControl_o *)v10->fields.resAdjustHpIconLabel;
    if ( !this )
      goto LABEL_113;
    this = (ServantCombineControl_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_113;
    v119.fields.r = 1.0;
    v119.fields.g = 1.0;
    v119.fields.b = 1.0;
    v119.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v119, 0);
    this = (ServantCombineControl_o *)v10->fields.resAdjustAtkIconLabel;
    if ( !this )
      goto LABEL_113;
    this = (ServantCombineControl_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !this )
      goto LABEL_113;
    v120.fields.r = 1.0;
    v120.fields.g = 1.0;
    v120.fields.b = 1.0;
    v120.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v120, 0);
    if ( !*p_baseData )
      goto LABEL_113;
    adjustHp = (*p_baseData)->fields.adjustHp;
    v75 = BalanceConfig_TypeInfo;
    v76 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
    if ( !v76 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, data, v73);
      v75 = BalanceConfig_TypeInfo;
      v76 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
    }
    v77 = v9->fields.getHpAdjustVal;
    StatusUpAdjustHp = v75->static_fields->StatusUpAdjustHp;
    v79 = StatusUpAdjustHp * adjustHp;
    v80 = HIDWORD(maxAjustAtk);
    HIDWORD(v108) = v79;
    if ( !v76 )
    {
      j_il2cpp_runtime_class_init_0(v75, data, v73);
      v75 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    if ( v79 < StatusUpAdjustHp * v80 )
    {
      v81 = HIDWORD(maxAjustAtk);
      if ( *(&v75->_2.cctor_finished + 1) )
        goto LABEL_67;
      goto LABEL_66;
    }
    v89 = HIDWORD(v108);
    v90 = secondMaxAdjustAtk[1];
    if ( !*(&v75->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v75, data, v73);
      v75 = BalanceConfig_TypeInfo;
      StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
    }
    v91 = *(&v75->_2.cctor_finished + 1);
    if ( v89 >= StatusUpAdjustHp * v90 )
    {
      v81 = addParamMaxAdjust2[1];
      if ( !v91 )
        goto LABEL_66;
    }
    else
    {
      v81 = secondMaxAdjustAtk[1];
      if ( !v91 )
      {
LABEL_66:
        j_il2cpp_runtime_class_init_0(v75, data, v73);
        StatusUpAdjustHp = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp;
      }
    }
LABEL_67:
    v82 = StatusUpAdjustHp * v81;
    this = (ServantCombineControl_o *)v10->fields.resAdjustHpIconLabel;
    if ( !this )
      goto LABEL_113;
    v83 = (v77 & ~(v77 >> 31)) + v79;
    UIIconLabel__Set_48071660((UIIconLabel_o *)this, 44, v83, v82, 0, 0, 0, 0, 0, 0, 0);
    if ( !System_Int32__Equals_77138484((int32_t)&v108 + 4, v83, 0) )
    {
      this = (ServantCombineControl_o *)v10->fields.resAdjustHpIconLabel;
      if ( !this )
        goto LABEL_113;
      if ( v83 >= v82 )
        v84 = v82;
      else
        v84 = v83;
      UIIconLabel__SetCombineResTxt((UIIconLabel_o *)this, v84, v82, v83 >= v82, 0);
    }
    this = (ServantCombineControl_o *)v10->fields.resAdjustHpMaxLabel;
    if ( !this )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !*p_baseData )
      goto LABEL_113;
    v86 = BalanceConfig_TypeInfo;
    adjustAtk = (*p_baseData)->fields.adjustAtk;
    if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      v88 = 0;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, data, v85);
      v86 = BalanceConfig_TypeInfo;
      v88 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) == 0;
    }
    v92 = v9->fields.getAtkAdjustVal;
    v93 = maxAjustAtk;
    StatusUpAdjustAtk = v86->static_fields->StatusUpAdjustAtk;
    v95 = StatusUpAdjustAtk * adjustAtk;
    LODWORD(v108) = v95;
    if ( v88 )
    {
      j_il2cpp_runtime_class_init_0(v86, data, v85);
      v86 = BalanceConfig_TypeInfo;
      StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    }
    v96 = *(&v86->_2.cctor_finished + 1);
    if ( v95 >= StatusUpAdjustAtk * v93 )
    {
      v103 = secondMaxAdjustAtk[0];
      if ( !v96 )
      {
        j_il2cpp_runtime_class_init_0(v86, data, v85);
        v86 = BalanceConfig_TypeInfo;
        StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
      }
      v104 = *(&v86->_2.cctor_finished + 1);
      if ( v95 >= StatusUpAdjustAtk * v103 )
      {
        v97 = addParamMaxAdjust2[0];
        if ( v104 )
          goto LABEL_89;
      }
      else
      {
        v97 = secondMaxAdjustAtk[0];
        if ( v104 )
          goto LABEL_89;
      }
    }
    else
    {
      v97 = maxAjustAtk;
      if ( v96 )
      {
LABEL_89:
        v98 = StatusUpAdjustAtk * v97;
        this = (ServantCombineControl_o *)v10->fields.resAdjustAtkIconLabel;
        if ( !this )
          goto LABEL_113;
        v99 = (v92 & ~(v92 >> 31)) + v95;
        UIIconLabel__Set_48071660((UIIconLabel_o *)this, 45, v99, v98, 0, 0, 0, 0, 0, 0, 0);
        if ( !System_Int32__Equals_77138484((int32_t)&v108, v99, 0) )
        {
          this = (ServantCombineControl_o *)v10->fields.resAdjustAtkIconLabel;
          if ( !this )
            goto LABEL_113;
          if ( v99 >= v98 )
            v100 = v98;
          else
            v100 = v99;
          UIIconLabel__SetCombineResTxt((UIIconLabel_o *)this, v100, v98, v99 >= v98, 0);
        }
        this = (ServantCombineControl_o *)v10->fields.resAdjustAtkMaxLabel;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
          this = (ServantCombineControl_o *)v10->fields.qpLb;
          if ( v10->fields.haveQpVal >= v10->fields._spendQpVal_k__BackingField )
          {
            if ( this )
            {
              v121.fields.r = 1.0;
              v121.fields.g = 1.0;
              v102 = 1;
              goto LABEL_107;
            }
          }
          else if ( this )
          {
            v121.fields.g = 0.0;
            v121.fields.r = 1.0;
            v102 = 0;
LABEL_107:
            v121.fields.b = v121.fields.g;
            v121.fields.a = v121.fields.r;
            UIWidget__set_color((UIWidget_o *)this, v121, 0);
            v10->fields._IsExeCombine_k__BackingField = v102;
            ServantCombineControl__SetExeBtnState(v10, v105);
            return;
          }
        }
LABEL_113:
        sub_2213CDC(this, data);
      }
    }
    j_il2cpp_runtime_class_init_0(v86, data, v85);
    StatusUpAdjustAtk = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk;
    goto LABEL_89;
  }
}


SetCombineData_o *ServantCombineControl__SetCombineData_37686956(
        ServantCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v9; // x23
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v12; // s0
  float v13; // s8
  __int64 v14; // x2
  float v15; // s0
  struct UserServantEntity_o *baseData; // x8
  float v17; // s9
  __int64 v18; // x21
  __int64 v19; // x25
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v21; // x21
  int32_t SvtClassId; // w0
  int32_t size; // w8
  const MethodInfo_4483994 **v24; // x29
  int v25; // w23
  int v26; // w22
  int32_t v27; // w28
  __int64 v28; // x2
  int64_t v29; // x27
  __int64 v30; // x21
  __int64 v31; // x26
  int32_t v32; // w0
  int64_t v33; // x21
  CombineMaterialEntity_o *v34; // x26
  __int64 v35; // x2
  int v36; // w8
  int value; // w26
  BalanceConfig_c *v38; // x8
  ServantCombineControl_c *v39; // x0
  int SameClassExp; // w21
  float FIXED_VAL; // s10
  double v42; // d0
  unsigned int v43; // w8
  int v44; // w21
  const MethodInfo_4483994 **v45; // x25
  System_Collections_Generic_List_UserServantEntity__o *v46; // x29
  float v47; // s0
  unsigned int v48; // w8
  unsigned int v49; // w24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t CombineQp; // w21
  float v57; // s0
  unsigned int v58; // w8
  int v59; // w26
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  const MethodInfo *v64; // x3
  struct UserServantEntity_o *v65; // x8
  __int64 v66; // x1
  __int64 v67; // x2
  ServantCombineControl_c *v68; // x0
  __int64 v70; // x21
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct UserServantEntity_o *v77; // x1
  int32_t v78; // w8
  bool IsAdjustAtkMax; // w0
  bool v80; // w8
  struct UserServantEntity_o *v81; // x8
  bool v82; // w8
  System_Collections_Generic_List_long__o *v83; // x20
  int v84; // w23
  int32_t v85; // w22
  __int64 v86; // x2
  __int128 v87; // q1
  int v88; // w8
  struct System_Int64_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  System_Int64_array *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  int v100; // [xsp+10h] [xbp-100h]
  int v101; // [xsp+14h] [xbp-FCh]
  DataMasterBase_TMaster__TEntity__PKType__o *v102; // [xsp+18h] [xbp-F8h]
  int32_t expType; // [xsp+24h] [xbp-ECh]
  int64_t v104; // [xsp+28h] [xbp-E8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v105; // [xsp+30h] [xbp-E0h]
  CombineMaterialMaster_o *v106; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+60h] [xbp-B0h]
  int32_t addParamMaxAdjust2[2]; // [xsp+80h] [xbp-90h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+88h] [xbp-88h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_596A234 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CombineMaterialMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&ServantCombineControl_TypeInfo);
    sub_2213A60(&SetCombineData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A234 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  secondMaxAdjustAtk = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CombineMaterialMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_103;
  v105 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  combineEventList = menuListCtr->fields.combineEventList;
  v12 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0);
  Instance = (int64_t)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  v13 = v12;
  v15 = CheckCombineResStatus__GetQpCampaignValue(
          (CheckCombineResStatus_o *)Instance,
          this->fields.baseData,
          combineEventList,
          0);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_103;
  v17 = v15;
  v18 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v14);
  *(_QWORD *)&v112.fields.currentCryptoKey = v18;
  *(_QWORD *)&v112.fields.fakeValue = v19;
  v106 = (CombineMaterialMaster_o *)v9;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v112, 0);
  if ( !MasterData_object )
    goto LABEL_103;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             Instance,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Entity )
    goto LABEL_103;
  v21 = this->fields.baseData;
  v104 = Instance;
  if ( !v21 )
    goto LABEL_103;
  expType = HIDWORD(Entity[8].klass);
  SvtClassId = UserServantEntity__getSvtClassId(v21, 0, 0, 0);
  Instance = UserServantEntity__getSvtClassGroupType(v21, SvtClassId, 0);
  v100 = Instance;
  if ( !targetMaterialList )
    goto LABEL_103;
  size = targetMaterialList->fields._size;
  v24 = (const MethodInfo_4483994 **)&Method_System_Collections_Generic_List_UserServantEntity__get_Item__;
  v101 = size - 1;
  if ( size < 1 )
  {
    v26 = 0;
    v25 = 0;
LABEL_70:
    v59 = v26;
    if ( v5 )
      goto LABEL_73;
    return 0;
  }
  v102 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)targetMaterialList,
                          v27,
                          *v24);
    if ( !Instance )
      goto LABEL_103;
    v29 = Instance;
    v30 = *(_QWORD *)(Instance + 80);
    v31 = *(_QWORD *)(Instance + 88);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v28);
    *(_QWORD *)&v113.fields.currentCryptoKey = v30;
    *(_QWORD *)&v113.fields.fakeValue = v31;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v113, 0);
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v102,
                          v32,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_103;
    v33 = Instance;
    Instance = (int64_t)v106;
    if ( !v106 )
      goto LABEL_103;
    v34 = CombineMaterialMaster__GetEntity(v106, *(_DWORD *)(v33 + 136), *(_DWORD *)(v29 + 400), 0);
    Instance = (int64_t)v105;
    if ( !v105 )
      goto LABEL_103;
    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          v105,
                          *(_DWORD *)(v33 + 80),
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    if ( !v34 || !Instance )
      goto LABEL_103;
    v36 = *(_DWORD *)(Instance + 56);
    value = v34->fields.value;
    if ( v36 == 3 )
      goto LABEL_27;
    if ( v36 == v100 )
    {
      Instance = (int64_t)this->fields.baseData;
      if ( !Instance )
        goto LABEL_103;
      v44 = *(_DWORD *)(v33 + 80);
      if ( v44 == UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0) )
      {
LABEL_27:
        v38 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v35);
          v38 = BalanceConfig_TypeInfo;
        }
        v39 = ServantCombineControl_TypeInfo;
        SameClassExp = v38->static_fields->SameClassExp;
        if ( !*(&ServantCombineControl_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo, v7, v35);
          v39 = ServantCombineControl_TypeInfo;
        }
        FIXED_VAL = v39->static_fields->FIXED_VAL;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v35);
        v42 = (double)value * (double)SameClassExp / FIXED_VAL;
        v43 = vcvtpd_s64_f64(v42);
        if ( ceil(v42) == INFINITY )
          value = 0x80000000;
        else
          value = v43;
      }
    }
    v45 = v24;
    if ( !byte_596A15B )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A15B = 1;
    }
    v46 = targetMaterialList;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v35);
    Instance = (int64_t)this->fields.baseData;
    v47 = v13 * (float)value;
    v48 = vcvtps_s32_f32(v47);
    v49 = ceilf(v47) == INFINITY ? 0x80000000 : v48;
    if ( !Instance )
      goto LABEL_103;
    CombineQp = UserServantEntity__getCombineQp((UserServantEntity_o *)Instance, 0);
    if ( !byte_596A15B )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A15B = 1;
    }
    Instance = (int64_t)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v50);
    v57 = v17 * (float)CombineQp;
    v58 = vcvtps_s32_f32(v57);
    if ( ceilf(v57) == INFINITY )
      v58 = 0x80000000;
    if ( !v104 )
      goto LABEL_103;
    v59 = v58 + v26;
    if ( *(_QWORD *)(v104 + 96) < (int)(v58 + v26) )
    {
      v24 = v45;
      this->fields.isQpCondClear = 0;
      goto LABEL_70;
    }
    if ( !v5 )
      goto LABEL_103;
    items = v5->fields._items;
    v61 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_103;
    v62 = v5->fields._size;
    if ( (unsigned int)v62 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v29,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &items->obj.klass + v62;
      v5->fields._size = v62 + 1;
      v63[4] = (Il2CppClass *)v29;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), v29, v50, v51, v52, v53, v54, v55);
    }
    v65 = this->fields.baseData;
    if ( !v65 )
      goto LABEL_103;
    v25 += v49;
    if ( ServantCombineControl__IsLevelMax(this, v65->fields.exp + v25, expType, v64) )
      break;
    v68 = ServantCombineControl_TypeInfo;
    if ( !*(&ServantCombineControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo, v66, v67);
      v68 = ServantCombineControl_TypeInfo;
    }
    targetMaterialList = v46;
    v24 = v45;
    if ( v27 != v68->static_fields->MAX_SELECT_NUM - 1 )
    {
      v26 = v59;
      if ( v101 != v27++ )
        continue;
    }
    goto LABEL_73;
  }
  v24 = v45;
LABEL_73:
  if ( v5->fields._size < 1 )
    return 0;
  v70 = sub_2213CCC(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v70, 0);
  if ( !v70 )
    goto LABEL_103;
  v77 = this->fields.baseData;
  *(_QWORD *)(v70 + 16) = v77;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 16), (int32_t)v77, v71, v72, v73, v74, v75, v76);
  v78 = v5->fields._size;
  *(_QWORD *)(v70 + 48) = 0;
  Instance = (int64_t)this->fields.baseData;
  *(_DWORD *)(v70 + 32) = v25;
  *(_DWORD *)(v70 + 24) = v78;
  *(_DWORD *)(v70 + 28) = v59;
  if ( !Instance )
    goto LABEL_103;
  if ( UserServantEntity__IsAdjustHpMax((UserServantEntity_o *)Instance, 0) )
  {
    Instance = (int64_t)this->fields.baseData;
    if ( Instance )
    {
      IsAdjustAtkMax = UserServantEntity__IsAdjustAtkMax((UserServantEntity_o *)Instance, 0);
      goto LABEL_81;
    }
    goto LABEL_103;
  }
  IsAdjustAtkMax = 0;
LABEL_81:
  v80 = IsAdjustAtkMax;
  Instance = (int64_t)this->fields.baseData;
  *(_WORD *)(v70 + 44) = v80;
  if ( !Instance )
LABEL_103:
    sub_2213CDC(Instance, v7);
  Instance = UserServantEntity__GetAdjustMax(
               (UserServantEntity_o *)Instance,
               &maxAjustAtk[1],
               maxAjustAtk,
               (int32_t *)&secondMaxAdjustAtk + 1,
               (int32_t *)&secondMaxAdjustAtk,
               &addParamMaxAdjust2[1],
               addParamMaxAdjust2,
               0);
  if ( (Instance & 1) != 0 )
  {
    v81 = this->fields.baseData;
    if ( !v81 )
      goto LABEL_103;
    v82 = v81->fields.adjustHp >= SHIDWORD(secondMaxAdjustAtk) && v81->fields.adjustAtk >= (int)secondMaxAdjustAtk;
    *(_BYTE *)(v70 + 45) = v82;
  }
  v83 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v83,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v84 = v5->fields._size;
  if ( v84 >= 1 )
  {
    v85 = 0;
    while ( 1 )
    {
      Instance = (int64_t)System_Collections_Generic_List_object___get_Item(v5, v85, *v24);
      if ( !Instance )
        goto LABEL_103;
      v87 = *(_OWORD *)(Instance + 32);
      v88 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
      *(_OWORD *)&v108.fields.fakeValue = v87;
      if ( !v88 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v86);
      v107 = v108;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v107, 0);
      if ( !v83 )
        goto LABEL_103;
      v89 = v83->fields._items;
      v90 = Method_System_Collections_Generic_List_long__Add__;
      ++v83->fields._version;
      if ( !v89 )
        goto LABEL_103;
      v91 = v83->fields._size;
      if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v83,
          Instance,
          *(const MethodInfo_446C29C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v83->fields._size = v91 + 1;
        v89->m_Items[v91] = Instance;
      }
      if ( v84 == ++v85 )
        goto LABEL_101;
    }
  }
  if ( !v83 )
    goto LABEL_103;
LABEL_101:
  v92 = System_Collections_Generic_List_long___ToArray(
          v83,
          (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  *(_QWORD *)(v70 + 56) = v92;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 56), (int32_t)v92, v93, v94, v95, v96, v97, v98);
  return (SetCombineData_o *)v70;
}


void ServantCombineControl__SetCombineMaterialGrid(
        ServantCombineControl_o *this,
        System_Int64_array *materialUsrSvtIdList,
        const MethodInfo *method)
{
  ServantCombineControl_o *v4; // x19
  il2cpp_array_size_t max_length; // x20
  System_Collections_Generic_List_long__o *v6; // x22
  System_Collections_Generic_List_long__o *v7; // x21
  unsigned __int64 v8; // x23
  int64_t v9; // x25
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  ServantCombineControl_o *v12; // x26
  ServantCombineControl_o *v13; // x27
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *baseData; // x26
  MaterialSvtInfo_o *v16; // x27
  MaterialSvtInfo_ClickDelegate_o *v17; // x28
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Entity; // x26
  __int64 v21; // x2
  ServantLimitMaster_o *v22; // x27
  Il2CppClass *klass; // x28
  void *monitor; // x29
  int32_t v25; // w28
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  System_Int64_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Int64_array *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596A223 & 1) == 0 )
  {
    sub_2213A60(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_CombineMenuControl_OnClickMaterial__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    this = (ServantCombineControl_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A223 = 1;
  }
  if ( !materialUsrSvtIdList )
    goto LABEL_41;
  max_length = materialUsrSvtIdList->max_length;
  v6 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  v4->fields._isExchangeSvtInList_k__BackingField = 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= LODWORD(materialUsrSvtIdList->max_length) )
        sub_2213CE4(this);
      this = (ServantCombineControl_o *)v4->fields.selectGrid;
      if ( !this )
        break;
      v9 = materialUsrSvtIdList->m_Items[v8];
      svtFaceInfo = v4->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this = (ServantCombineControl_o *)BaseMonoBehaviour__createObject(
                                          (BaseMonoBehaviour_o *)v4,
                                          svtFaceInfo,
                                          transform,
                                          0,
                                          0);
      if ( !this )
        break;
      v12 = this;
      this = (ServantCombineControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      v13 = this;
      if ( !byte_5969AE0 )
      {
        this = (ServantCombineControl_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v13 )
        break;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v13,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      this = (ServantCombineControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
      if ( !this )
        break;
      v47.fields.x = 0.5;
      v47.fields.y = 0.5;
      v47.fields.z = 0.5;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v47, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      baseData = v4->fields.baseData;
      v16 = (MaterialSvtInfo_o *)Component_object;
      v17 = (MaterialSvtInfo_ClickDelegate_o *)sub_2213CCC(MaterialSvtInfo_ClickDelegate_TypeInfo);
      MaterialSvtInfo_ClickDelegate___ctor(
        v17,
        (Il2CppObject *)v4,
        (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
        0);
      if ( !v16 )
        break;
      MaterialSvtInfo__setMaterialSvtInfo(v16, v8, baseData, v9, 1, 0, v17, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
      this = (ServantCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !this )
        break;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v9,
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      this = (ServantCombineControl_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
      if ( !Entity )
        break;
      v22 = (ServantLimitMaster_o *)this;
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, materialUsrSvtIdList, v21);
      *(_QWORD *)&v46.fields.currentCryptoKey = klass;
      *(_QWORD *)&v46.fields.fakeValue = monitor;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v46, 0);
      this = (ServantCombineControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                          0);
      if ( !v22 )
        break;
      this = (ServantCombineControl_o *)ServantLimitMaster__GetEntity(v22, v25, (int32_t)this, 0);
      if ( !this )
        break;
      if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 4 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v27 = Method_System_Collections_Generic_List_long__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v6,
            v9,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v9;
        }
      }
      this = (ServantCombineControl_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Entity, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          break;
        v29 = v7->fields._items;
        v30 = Method_System_Collections_Generic_List_long__Add__;
        ++v7->fields._version;
        if ( !v29 )
          break;
        v31 = v7->fields._size;
        if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v7,
            v9,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v31 + 1;
          v29->m_Items[v31] = v9;
        }
      }
      this = (ServantCombineControl_o *)UserServantEntity__IsExchangeSvt((UserServantEntity_o *)Entity, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        v4->fields._isExchangeSvtInList_k__BackingField = 1;
      if ( (unsigned int)max_length == ++v8 )
        goto LABEL_37;
    }
LABEL_41:
    sub_2213CDC(this, materialUsrSvtIdList);
  }
LABEL_37:
  if ( !v6 )
    goto LABEL_41;
  v32 = System_Collections_Generic_List_long___ToArray(
          v6,
          (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  v4->fields.highRarityList = v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.highRarityList,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !v7 )
    goto LABEL_41;
  v39 = System_Collections_Generic_List_long___ToArray(
          v7,
          (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  v4->fields.exceededCheckList = v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.exceededCheckList,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this = (ServantCombineControl_o *)v4->fields.selectGrid;
  if ( !this )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
}


void ServantCombineControl__SetCombineNullData(ServantCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  ServantCombineControl__DestroyGrid(this, method);
  ServantCombineControl__InitInfo(this, v3);
  ServantCombineControl__SetBaseSvtCardImg(this, this->fields.baseData, v4);
  ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v5);
}


void ServantCombineControl__SetDispCardImg(
        ServantCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  struct UICharaGraphTexture_o *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = (struct UICharaGraphTexture_o *)((__int64 (__fastcall *)(ServantCombineControl_o *, struct UICharaGraphTexture_o *, UserServantEntity_o *, const MethodInfo *))this->klass->vtable._7_SetCharaGraph.methodPtr)(
                                         this,
                                         this->fields.charaGraph,
                                         usrSvtData,
                                         this->klass->vtable._7_SetCharaGraph.method);
  this->fields.charaGraph = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void ServantCombineControl__SetExeBtnState(ServantCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_596A22A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_596A22A = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
      UIWidget__set_color(combineBtnTxt, v8, 0);
      if ( v4 )
      {
        v9.fields.r = 1.0;
        v9.fields.g = 1.0;
        v9.fields.b = 1.0;
        v9.fields.a = 1.0;
        UIWidget__set_color(v4, v9, 0);
        if ( v7 )
        {
          UnityEngine_Behaviour__set_enabled(v7, 1, 0);
          UITweener__PlayForward((UITweener_o *)v7, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_2213CDC(combineBtnBg, method);
  }
  if ( !combineBtnTxt )
    goto LABEL_14;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color(combineBtnTxt, v10, 0);
  if ( !v4 )
    goto LABEL_14;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(v4, v11, 0);
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0);
}


void ServantCombineControl__SetHaveQpInfo(ServantCombineControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20
  System_String_o *v6; // x1

  if ( (byte_596A21C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596A21C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        v6 = (System_String_o *)StringLiteral_9617/*"N0"*/,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_77143864((int64_t)&this->fields.haveQpVal, v6, 0),
        !haveQpLb) )
  {
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(
        ServantCombineControl_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UICommonButton_o *recommendedButton; // x21
  ServantCombineControl_o *v4; // x19
  char isSelectBase; // w8
  UICommonButton_o *clearMaterialButton; // x21
  char v8; // w8

  recommendedButton = this->fields.recommendedButton;
  v4 = this;
  if ( !isEnabled )
  {
    if ( !recommendedButton )
      goto LABEL_14;
    UICommonButton__SetButtonEnable(this->fields.recommendedButton, 0, 1, 0);
    clearMaterialButton = v4->fields.clearMaterialButton;
    goto LABEL_10;
  }
  isSelectBase = this->fields.isSelectBase;
  if ( !isSelectBase )
    goto LABEL_5;
  this = (ServantCombineControl_o *)this->fields.baseData;
  if ( this )
  {
    this = (ServantCombineControl_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0);
    isSelectBase = (unsigned __int8)this ^ 1;
LABEL_5:
    if ( !recommendedButton )
      goto LABEL_14;
    goto LABEL_6;
  }
  isSelectBase = 0;
  if ( !recommendedButton )
LABEL_14:
    sub_2213CDC(this, isEnabled);
LABEL_6:
  UICommonButton__SetButtonEnable(recommendedButton, isSelectBase & 1, 1, 0);
  clearMaterialButton = v4->fields.clearMaterialButton;
  if ( isEnabled )
  {
    this = (ServantCombineControl_o *)BasicHelper__IsNullOrEmpty(
                                        (System_Collections_ICollection_o *)v4->fields._selectMaterialUsrSvtIdList_k__BackingField,
                                        0);
    v8 = (unsigned __int8)this ^ 1;
    goto LABEL_11;
  }
LABEL_10:
  v8 = 0;
LABEL_11:
  if ( !clearMaterialButton )
    goto LABEL_14;
  UICommonButton__SetButtonEnable(clearMaterialButton, v8 & 1, 1, 0);
}


void ServantCombineControl__SetMaterialToCombineData(
        ServantCombineControl_o *this,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_long__o *v7; // x0
  __int64 v8; // x1
  struct CombineRootComponent_o *combineRootComponent; // x8
  CombineServantListViewManager_o *combineSvtManager; // x21
  const MethodInfo *v11; // x2

  if ( (byte_596A230 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_long___);
    byte_596A230 = 1;
  }
  ServantCombineControl__SetCombineData(this, recommendedCombineData, 1, v3);
  ServantCombineControl__SetStateInfoMsg(this, 2, v6);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (combineSvtManager = combineRootComponent->fields.combineSvtManager,
        v7 = (System_Collections_Generic_List_long__o *)System_Linq_Enumerable__ToList_long_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._selectMaterialUsrSvtIdList_k__BackingField,
                                                          (const MethodInfo_38A0C70 *)Method_System_Linq_Enumerable_ToList_long___),
        !combineSvtManager) )
  {
    sub_2213CDC(v7, v8);
  }
  CombineServantListViewManager__SetRecomendedSelectedMaterialList(combineSvtManager, v7, recommendedCombineData, 0);
  ServantCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v11);
}


void ServantCombineControl__SetRecommendedMaterial(
        ServantCombineControl_o *this,
        bool isAutoSet,
        const MethodInfo *method)
{
  __int64 v5; // x20
  RecommenededConfigDialog_o *recommendedConfigDialog; // x0
  SetCombineData_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  __int64 *v24; // x8
  System_Collections_IEnumerator_o *v25; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x19
  __int64 v36; // x2
  RecommenededConfigDialog_o *v37; // x20
  ServantCombineControl___c_c *v38; // x8
  struct ServantCombineControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__115_1; // x22
  System_String_o *v41; // x21
  Il2CppObject *v42; // x23
  struct ServantCombineControl___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t v50; // w8
  CommonUI_o *v51; // x0
  System_String_o *v52; // x1
  System_String_o *v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v57; // x21
  System_String_o *v58; // x22
  System_String_o *v59; // x23
  CommonConfirmDialog_ClickDelegate_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  Il2CppObject *v63; // x19
  System_String_o *v64; // x21

  if ( (byte_596A22F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ServantCombineControl___c__SetRecommendedMaterial_b__115_1__);
    sub_2213A60(&Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__0__);
    sub_2213A60(&Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__2__);
    sub_2213A60(&ServantCombineControl___c__DisplayClass115_0_TypeInfo);
    sub_2213A60(&ServantCombineControl___c_TypeInfo);
    sub_2213A60(&StringLiteral_11488/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/);
    sub_2213A60(&StringLiteral_11487/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_2213A60(&StringLiteral_11477/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/);
    sub_2213A60(&StringLiteral_11486/*"RECOMMENDED_NOT_EXIST_MSG"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_11475/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_11476/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/);
    byte_596A22F = 1;
  }
  v5 = sub_2213CCC(ServantCombineControl___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = ServantCombineControl__GetRecommendedCombineData(this, v14);
  *(_QWORD *)(v5 + 24) = RecommendedCombineData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v5 + 24),
    (int32_t)RecommendedCombineData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v7 = *(SetCombineData_o **)(v5 + 24);
  if ( v7 )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        RecommenededConfigDialog__Close(recommendedConfigDialog, 0, v22);
        ServantCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v5 + 24), v23);
        return;
      }
LABEL_35:
      sub_2213CDC(recommendedConfigDialog, v7);
    }
    if ( isAutoSet )
    {
      ServantCombineControl__SetMaterialToCombineData(this, v7, v22);
      v24 = &StringLiteral_11477/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/;
      goto LABEL_15;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54, v55);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11488/*"RECOMMENDED_NOT_HAVE_QP_CONFIRM"*/, 0);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v60 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v60,
      (Il2CppObject *)v5,
      Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__0__,
      0);
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenConfirmDialog_37373144(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v57,
      v58,
      v59,
      v60,
      0,
      0,
      0,
      0);
  }
  else
  {
    if ( this->fields.isQpCondClear )
    {
      if ( isAutoSet )
      {
        v24 = &StringLiteral_11475/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/;
LABEL_15:
        v25 = ServantCombineControl__FadeAutoSetAnnounceLabel(this, (System_String_o *)*v24, v22);
        started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v25, 0);
        this->fields.autoSetAnnounceCoroutine = started;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.autoSetAnnounceCoroutine,
          (int32_t)started,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        return;
      }
      v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
      recommendedConfigDialog = (RecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_11486/*"RECOMMENDED_NOT_EXIST_MSG"*/,
                                                                0);
      v37 = recommendedConfigDialog;
      v38 = ServantCombineControl___c_TypeInfo;
      if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v7, v36);
        v38 = ServantCombineControl___c_TypeInfo;
      }
      static_fields = v38->static_fields;
      _9__115_1 = static_fields->__9__115_1;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__115_1 )
      {
        if ( !*(&v38->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v38, v7, v36);
          static_fields = ServantCombineControl___c_TypeInfo->static_fields;
        }
        v42 = (Il2CppObject *)static_fields->__9;
        _9__115_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__115_1, v42, Method_ServantCombineControl___c__SetRecommendedMaterial_b__115_1__, 0);
        v43 = ServantCombineControl___c_TypeInfo->static_fields;
        v43->__9__115_1 = _9__115_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v43->__9__115_1,
          (int32_t)_9__115_1,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      if ( !v35 )
        goto LABEL_35;
      v50 = 26;
      v51 = (CommonUI_o *)v35;
      v52 = v41;
      v53 = (System_String_o *)v37;
    }
    else
    {
      if ( isAutoSet )
      {
        v24 = &StringLiteral_11476/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/;
        goto LABEL_15;
      }
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61, v62);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11487/*"RECOMMENDED_NOT_HAVE_QP"*/, 0);
      _9__115_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__115_1,
        (Il2CppObject *)v5,
        Method_ServantCombineControl___c__DisplayClass115_0__SetRecommendedMaterial_b__2__,
        0);
      if ( !v63 )
        goto LABEL_35;
      v51 = (CommonUI_o *)v63;
      v53 = v64;
      v52 = (System_String_o *)StringLiteral_1/*""*/;
      v50 = 28;
    }
    CommonUI__OpenNotificationDialog(v51, v52, v53, _9__115_1, -1, 0, 0, 0, 0, v50, 0, 0, 0, 0.0, 0, 0);
  }
}


void ServantCombineControl__SetSelectMaterialEnable(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *preSelectBaseLb; // x0

  preSelectBaseLb = (UnityEngine_Component_o *)this->fields.preSelectBaseLb;
  if ( !preSelectBaseLb
    || (preSelectBaseLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(preSelectBaseLb, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.selectMaterialSvtBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)preSelectBaseLb, this->fields.isSelectBase, 0),
        (preSelectBaseLb = (UnityEngine_Component_o *)this->fields.baseSelectInfoLb) == 0) )
  {
    sub_2213CDC(preSelectBaseLb, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)preSelectBaseLb, !this->fields.isSelectBase, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__SetStateInfoMsg(ServantCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  LocalizationManager_c *v9; // x0
  __int64 *v10; // x20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_596A22B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7766/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_2213A60(&StringLiteral_7775/*"INFO_MSG_SVTCOMBINE_BASE"*/);
    sub_2213A60(&StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A22B = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_21:
    sub_2213CDC(detailInfoLb, *(_QWORD *)&state);
  }
  v11.fields.r = 0.0;
  v11.fields.a = 1.0;
  v11.fields.g = 0.87891;
  v11.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v11, 0);
  switch ( v3 )
  {
    case 2:
      if ( this->fields._IsExeCombine_k__BackingField )
      {
        v9 = LocalizationManager_TypeInfo;
        v10 = &StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_12;
      }
      else
      {
        v12.fields.r = 1.0;
        v12.fields.g = 1.0;
        v12.fields.b = 1.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(v6, v12, 0);
        v9 = LocalizationManager_TypeInfo;
        v10 = &StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/;
        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          goto LABEL_12;
      }
      goto LABEL_11;
    case 1:
      v9 = LocalizationManager_TypeInfo;
      v10 = &StringLiteral_7766/*"INFO_MSG_COMBINE_MATERIAL"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_11:
        j_il2cpp_runtime_class_init_0(v9, v7, v8);
LABEL_12:
      *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v10, 0);
      goto LABEL_17;
    case 0:
      v9 = LocalizationManager_TypeInfo;
      v10 = &StringLiteral_7775/*"INFO_MSG_SVTCOMBINE_BASE"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_11;
      goto LABEL_12;
  }
  *(_QWORD *)&state = StringLiteral_1/*""*/;
LABEL_17:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0);
}


void ServantCombineControl__SetupCampaign(
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
  if ( (byte_596A220 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ServantCombineControl_o *)sub_2213A60(&StringLiteral_21624/*"img_txt_campaign_"*/);
    byte_596A220 = 1;
  }
  v15 = 0;
  if ( !byte_5969AE0 )
  {
    this = (ServantCombineControl_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !eventInfoData )
LABEL_24:
    sub_2213CDC(this, eventInfoData);
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  target = eventInfoData->fields.target;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( target > 5 )
  {
    if ( target != 27 )
    {
      if ( (target & 0x7FFFFFFE) != 0x20 )
        goto LABEL_15;
      goto LABEL_13;
    }
LABEL_11:
    z = 0.0;
    y = 4.0;
    v10 = 1;
    v11 = 1113849856;
LABEL_14:
    x = *(float *)&v11;
    HIDWORD(v15) = v10;
    goto LABEL_15;
  }
  if ( target == 2 )
    goto LABEL_11;
  if ( (target & 0xFFFFFFFE) == 4 )
  {
LABEL_13:
    z = 0.0;
    y = 4.0;
    v10 = 2;
    v11 = 1119748096;
    goto LABEL_14;
  }
LABEL_15:
  campaign = v4->fields.campaign;
  v13 = System_Int32__ToString((int32_t)&v15 + 4, 0);
  this = (ServantCombineControl_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_21624/*"img_txt_campaign_"*/, v13, 0);
  if ( !campaign )
    goto LABEL_24;
  UISprite__set_spriteName(campaign, (System_String_o *)this, 0);
  this = (ServantCombineControl_o *)v4->fields.campaign;
  if ( !this )
    goto LABEL_24;
  ((void (__fastcall *)(ServantCombineControl_o *, Il2CppMethodPointer))this->klass[1].vtable._5_OnClickHelp.method)(
    this,
    this->klass[1].vtable._6_GetTutorialOpenType.methodPtr);
  this = (ServantCombineControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)EventCampaignMaster__getData(
                                      (EventCampaignMaster_o *)this,
                                      eventInfoData->fields.eventId,
                                      0);
  if ( !this )
    goto LABEL_24;
  campaignLabel = v4->fields.campaignLabel;
  LODWORD(v15) = SLODWORD(this->fields.baseUserServantEntity) / 1000;
  this = (ServantCombineControl_o *)System_Int32__ToString((int32_t)&v15, 0);
  if ( !campaignLabel )
    goto LABEL_24;
  UILabel__set_text(campaignLabel, (System_String_o *)this, 0);
  this = (ServantCombineControl_o *)v4->fields.campaignLabel;
  if ( !this )
    goto LABEL_24;
  this = (ServantCombineControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_24;
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0);
}


void ServantCombineControl__ShowExceededSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_596A226 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_596A226 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || (exeCombineDlg = this->fields.exeCombineDlg) == 0 )
    sub_2213CDC(SelfUserGame, v6);
  SetRarityDialogControl__SetExceedMaterialInfo(
    exeCombineDlg,
    this->fields.baseData,
    this->fields.exceededCheckList,
    v4,
    this->fields._spendQpVal_k__BackingField,
    SelfUserGame->fields.qp,
    0);
}


void ServantCombineControl__ShowRareSvtDlg(ServantCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  DataManager_o *SelfUserGame; // x0
  __int64 v6; // x1
  struct System_Int64_array *selectMaterialUsrSvtIdList_k__BackingField; // x8
  int64_t lockCountObj; // x21
  signed __int64 v9; // x23
  unsigned __int64 max_length_low; // x27
  int64_t v11; // x22

  if ( (byte_596A225 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_596A225 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_15;
  selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
  if ( !selectMaterialUsrSvtIdList_k__BackingField )
    goto LABEL_15;
  lockCountObj = (int64_t)SelfUserGame->fields.lockCountObj;
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(selectMaterialUsrSvtIdList_k__BackingField->max_length);
    if ( v9 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      sub_2213CE4(SelfUserGame);
    v11 = selectMaterialUsrSvtIdList_k__BackingField->m_Items[v9];
    SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelfUserGame )
    {
      SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                        SelfUserGame,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( SelfUserGame )
      {
        SelfUserGame = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          v11,
                                          (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( SelfUserGame )
        {
          SelfUserGame = (DataManager_o *)UserServantEntity__IsStatusUp((UserServantEntity_o *)SelfUserGame, 0);
          if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
            break;
          selectMaterialUsrSvtIdList_k__BackingField = this->fields._selectMaterialUsrSvtIdList_k__BackingField;
          ++v9;
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
    sub_2213CDC(SelfUserGame, v6);
  SetRarityDialogControl__SetConfirmInfo(
    (SetRarityDialogControl_o *)SelfUserGame,
    this->fields.baseData,
    this->fields.highRarityList,
    v4,
    this->fields._spendQpVal_k__BackingField,
    lockCountObj,
    v9 < (int)max_length_low,
    this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    0,
    0);
}


void ServantCombineControl__StopAutoSetAnnounceLabelCoroutine(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *autoSetAnnounceCoroutine; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_Component_o *autoSetAnnounceObj; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596A238 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_TweenAlpha___);
    byte_596A238 = 1;
  }
  autoSetAnnounceCoroutine = this->fields.autoSetAnnounceCoroutine;
  component = 0;
  if ( autoSetAnnounceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, autoSetAnnounceCoroutine, 0);
    this->fields.autoSetAnnounceCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.autoSetAnnounceCoroutine, 0, v4, v5, v6, v7, v8, v9);
  }
  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj )
    goto LABEL_12;
  if ( UnityEngine_Component__TryGetComponent_object_(
         autoSetAnnounceObj,
         &component,
         (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_TweenAlpha___) )
  {
    autoSetAnnounceObj = (UnityEngine_Component_o *)component;
    if ( !component )
      goto LABEL_12;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)component, 0, 0);
  }
  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj
    || (autoSetAnnounceObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoSetAnnounceObj, 0)) == 0 )
  {
LABEL_12:
    sub_2213CDC(autoSetAnnounceObj, autoSetAnnounceCoroutine);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl__TutorialBlock(ServantCombineControl_o *this, int32_t progress, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x22
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  System_Collections_IEnumerator_o *v32; // [xsp+28h] [xbp-48h]

  if ( (byte_596A236 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596A236 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_67;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 0, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_67;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectGrid;
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_67;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)helpBtn, 0);
  v32 = Enumerator;
  while ( 1 )
  {
    if ( !v32 )
      goto LABEL_64;
    klass = v32->klass;
    v9 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_15;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v11 = sub_224BC3C(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(v32, *(_QWORD *)(v11 + 8)) & 1) == 0 )
      break;
    v12 = v32->klass;
    v13 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_22;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_22:
      v15 = sub_224BC3C(v32, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       v32,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_2213CDC(0, v17);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_221405C(v16, UnityEngine_Transform_TypeInfo, v18, v19);
LABEL_64:
      sub_2213CDC(Enumerator, v7);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v16,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_2213CDC(0, v22);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0);
  }
  v23 = sub_2213BB4(v32, System_IDisposable_TypeInfo);
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
          goto LABEL_34;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_34:
      v28 = sub_224BC3C(v23, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
  helpBtn = this->fields.charaGraphBase;
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_67;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_67;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_67;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  if ( progress == 1 )
  {
    helpBtn = this->fields.charaGraphBase;
    if ( !helpBtn )
      goto LABEL_67;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0);
    if ( !helpBtn )
      goto LABEL_67;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
    if ( !helpBtn )
      goto LABEL_67;
    helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)helpBtn,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !helpBtn )
      goto LABEL_67;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
    if ( !helpBtn )
      goto LABEL_67;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
    helpBtn = (UnityEngine_GameObject_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_Collider___);
    if ( !helpBtn )
      goto LABEL_67;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.clearMaterialButton;
    if ( !helpBtn )
      goto LABEL_67;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
    helpBtn = (UnityEngine_GameObject_o *)GameObjectExtensions__SafeGetComponent_object_(
                                            v31,
                                            (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_Collider___);
    if ( !helpBtn )
      goto LABEL_67;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 0, 0);
  }
  else if ( progress == 3 )
  {
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
    if ( helpBtn )
    {
      helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)helpBtn,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( helpBtn )
      {
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
        helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
        if ( helpBtn )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))helpBtn->klass[1]._1.nestedTypes)(
            helpBtn,
            0,
            1,
            helpBtn->klass[1]._1.implementedInterfaces);
          return;
        }
      }
    }
LABEL_67:
    sub_2213CDC(helpBtn, *(_QWORD *)&progress);
  }
}


void ServantCombineControl__UnBlockTutorial(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_Component_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x21
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  struct SetRarityDialogControl_o *exeCombineDlg; // x8
  struct SetRarityDialogControl_o *v28; // x8
  struct SetRarityDialogControl_o *v29; // x8
  System_Collections_IEnumerator_o *v30; // [xsp+28h] [xbp-58h]

  if ( (byte_596A235 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596A235 = 1;
  }
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_65;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_65;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectGrid;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)helpBtn, 0);
  v30 = Enumerator;
  while ( 1 )
  {
    if ( !v30 )
      goto LABEL_64;
    klass = v30->klass;
    v7 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_15;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v9 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v30, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v30->klass;
    v11 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_22;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_22:
      v13 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                       v30,
                                       *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_2213CDC(0, v15);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      Enumerator = (System_Collections_IEnumerator_o *)sub_221405C(v14, UnityEngine_Transform_TypeInfo, v16, v17);
LABEL_64:
      sub_2213CDC(Enumerator, v5);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v14,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !Component_object )
      sub_2213CDC(0, v20);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0);
  }
  v21 = sub_2213BB4(v30, System_IDisposable_TypeInfo);
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
          goto LABEL_34;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_34:
      v26 = sub_224BC3C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  helpBtn = this->fields.charaGraphBase;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_65;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.recommendedButton;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)helpBtn,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !helpBtn )
    goto LABEL_65;
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)exeCombineDlg->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !helpBtn )
    goto LABEL_65;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)helpBtn, 1, 0);
  v28 = this->fields.exeCombineDlg;
  if ( !v28 )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)v28->fields.cancelBtnLb;
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                          helpBtn,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !helpBtn )
    goto LABEL_65;
  helpBtn = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, __int64, const char *))helpBtn->klass[1]._1.name)(
                                          helpBtn,
                                          1,
                                          helpBtn->klass[1]._1.namespaze);
  v29 = this->fields.exeCombineDlg;
  if ( !v29
    || (helpBtn = (UnityEngine_GameObject_o *)v29->fields.cancelBtnLb) == 0
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)helpBtn,
                                                0)) == 0
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)helpBtn, 0)) == 0
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (helpBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                helpBtn,
                                                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButton___)) == 0
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))helpBtn->klass[1]._1.nestedTypes)(
          helpBtn,
          0,
          1,
          helpBtn->klass[1]._1.implementedInterfaces),
        (helpBtn = (UnityEngine_GameObject_o *)this->fields.clearMaterialButton) == 0) )
  {
LABEL_65:
    sub_2213CDC(helpBtn, method);
  }
  UICommonButton__SetColliderEnable((UICommonButton_o *)helpBtn, 1, 1, 0);
}


void ServantCombineControl__Update(ServantCombineControl_o *this, const MethodInfo *method)
{
  void *campaign; // x0
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *campaignListPerSelectSvt; // x8
  struct System_Collections_Generic_List_List_EventCampaignEntity___o *v5; // x8
  int size; // w8
  const MethodInfo *v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x2
  int64_t v10; // x20
  int v11; // w8
  Il2CppObject *Item; // x1
  const MethodInfo *v13; // x2
  TransitionCalculator_float__o *campaignAlphaCalculator; // x0
  __int64 v15; // x2
  float realtimeSinceStartup; // s8
  float campaignAlphaAnimTimeOld; // s9
  MenuListControl_c *v18; // x0
  const MethodInfo *v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x20
  __int64 v21; // x2
  int64_t v22; // x20
  int v23; // w8
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x2
  struct AlphaTransitionCalculator_o *v28; // x8

  if ( (byte_596A217 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_2213A60(&MenuListControl_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    sub_2213A60(&Method_TransitionCalculator_float__get_Current__);
    byte_596A217 = 1;
  }
  if ( this->fields.isSelectBase )
  {
    campaign = this->fields.campaign;
    if ( !campaign )
      goto LABEL_69;
    campaign = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)campaign, 0);
    campaignListPerSelectSvt = this->fields.campaignListPerSelectSvt;
    if ( campaignListPerSelectSvt )
    {
      method = (const MethodInfo *)(campaignListPerSelectSvt->fields._size > 0);
      if ( !campaign )
        goto LABEL_69;
    }
    else
    {
      method = 0;
      if ( !campaign )
        goto LABEL_69;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)campaign, (bool)method, 0);
    v5 = this->fields.campaignListPerSelectSvt;
    if ( v5 )
    {
      size = v5->fields._size;
      if ( size >= 1 )
      {
        if ( size == 1 )
        {
          campaign = this->fields.campaign;
          if ( !campaign )
            goto LABEL_69;
          (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)campaign + 440LL))(
            campaign,
            *(_QWORD *)(*(_QWORD *)campaign + 448LL),
            1.0);
          campaign = ServantCombineControl__get_EventMaster(this, v7);
          if ( !this->fields.campaignListPerSelectSvt )
            goto LABEL_69;
          v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                       0,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
          if ( !campaign )
            goto LABEL_69;
          campaign = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)campaign,
                       0,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !campaign )
            goto LABEL_69;
          if ( !v8 )
            goto LABEL_69;
          campaign = DataMasterBase_object__object__int___GetEntity(
                       v8,
                       *((_DWORD *)campaign + 4),
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !campaign )
            goto LABEL_69;
          v10 = *((_QWORD *)campaign + 12);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v9);
          if ( v10 < NetworkManager__getTime(0) )
          {
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_69;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         0,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_69;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
            campaign = this->fields.campaignListPerSelectSvt;
            if ( !campaign )
              goto LABEL_69;
            campaign = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)campaign,
                         0,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
            if ( !campaign )
              goto LABEL_69;
            v11 = *((_DWORD *)campaign + 6);
            campaign = this->fields.campaignListPerSelectSvt;
            if ( v11 > 0 )
            {
              if ( campaign )
              {
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             0,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                if ( campaign )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           0,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)Item, v13);
                  return;
                }
              }
              goto LABEL_69;
            }
            if ( !campaign )
              goto LABEL_69;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)campaign,
              0,
              (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
          }
        }
        else
        {
          campaignAlphaCalculator = (TransitionCalculator_float__o *)this->fields.campaignAlphaCalculator;
          if ( campaignAlphaCalculator )
          {
            TransitionCalculator_float___Update(
              campaignAlphaCalculator,
              (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
            campaign = this->fields.campaignAlphaCalculator;
            if ( !campaign )
              goto LABEL_69;
            if ( AlphaTransitionCalculator__IsFadeInFinished((AlphaTransitionCalculator_o *)campaign, 0) )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
              campaignAlphaAnimTimeOld = this->fields.campaignAlphaAnimTimeOld;
              v18 = MenuListControl_TypeInfo;
              if ( !*(&MenuListControl_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, method, v15);
                v18 = MenuListControl_TypeInfo;
              }
              if ( (float)(realtimeSinceStartup - campaignAlphaAnimTimeOld) >= v18->static_fields->ALPHA_ANIMATION_INTERVAL )
              {
                campaign = this->fields.campaignAlphaCalculator;
                if ( !campaign )
                  goto LABEL_69;
                AlphaTransitionCalculator__StartFadeOut((AlphaTransitionCalculator_o *)campaign, 0);
              }
            }
            campaign = this->fields.campaignAlphaCalculator;
            if ( !campaign )
              goto LABEL_69;
            campaign = (void *)AlphaTransitionCalculator__IsFadeOutFinished((AlphaTransitionCalculator_o *)campaign, 0);
            if ( ((unsigned __int8)campaign & 1) != 0 )
            {
              campaign = this->fields.campaignAlphaCalculator;
              if ( !campaign )
                goto LABEL_69;
              AlphaTransitionCalculator__StartFadeIn((AlphaTransitionCalculator_o *)campaign, 0);
              this->fields.campaignAlphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
              campaign = ServantCombineControl__get_EventMaster(this, v19);
              if ( !this->fields.campaignListPerSelectSvt )
                goto LABEL_69;
              v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)campaign;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)this->fields.campaignListPerSelectSvt,
                           this->fields.campaiginPerSelectSvtListIndex,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
                goto LABEL_69;
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           0,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              if ( !campaign )
                goto LABEL_69;
              if ( !v20 )
                goto LABEL_69;
              campaign = DataMasterBase_object__object__int___GetEntity(
                           v20,
                           *((_DWORD *)campaign + 4),
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( !campaign )
                goto LABEL_69;
              v22 = *((_QWORD *)campaign + 12);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v21);
              if ( v22 < NetworkManager__getTime(0) )
              {
                campaign = this->fields.campaignListPerSelectSvt;
                if ( !campaign )
                  goto LABEL_69;
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             this->fields.campaiginPerSelectSvtListIndex,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                if ( !campaign )
                  goto LABEL_69;
                System_Collections_Generic_List_object___RemoveAt(
                  (System_Collections_Generic_List_object__o *)campaign,
                  0,
                  (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_EventCampaignEntity__RemoveAt__);
                campaign = this->fields.campaignListPerSelectSvt;
                if ( !campaign )
                  goto LABEL_69;
                campaign = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)campaign,
                             this->fields.campaiginPerSelectSvtListIndex,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                if ( !campaign )
                  goto LABEL_69;
                v23 = *((_DWORD *)campaign + 6);
                campaign = this->fields.campaignListPerSelectSvt;
                if ( v23 <= 0 )
                {
                  if ( !campaign )
                    goto LABEL_69;
                  System_Collections_Generic_List_object___RemoveAt(
                    (System_Collections_Generic_List_object__o *)campaign,
                    this->fields.campaiginPerSelectSvtListIndex,
                    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___RemoveAt__);
                }
                else
                {
                  if ( !campaign )
                    goto LABEL_69;
                  campaign = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)campaign,
                               this->fields.campaiginPerSelectSvtListIndex,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
                  if ( !campaign )
                    goto LABEL_69;
                  v24 = System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)campaign,
                          0,
                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
                  ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v24, v25);
                }
              }
              campaign = this->fields.campaignListPerSelectSvt;
              method = (const MethodInfo *)(unsigned int)(this->fields.campaiginPerSelectSvtListIndex + 1);
              this->fields.campaiginPerSelectSvtListIndex = (int)method;
              if ( !campaign )
                goto LABEL_69;
              if ( *((_DWORD *)campaign + 6) <= (int)method )
              {
                LODWORD(method) = 0;
                this->fields.campaiginPerSelectSvtListIndex = 0;
              }
              campaign = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)campaign,
                           (int32_t)method,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Item__);
              if ( !campaign )
LABEL_69:
                sub_2213CDC(campaign, method);
              v26 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)campaign,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
              ServantCombineControl__SetupCampaign(this, (EventCampaignEntity_o *)v26, v27);
            }
            v28 = this->fields.campaignAlphaCalculator;
            if ( !v28 )
              goto LABEL_69;
            campaign = this->fields.campaign;
            this->fields.campaignAlphaAnimNow = v28->fields._Current_k__BackingField;
            if ( !campaign )
              goto LABEL_69;
            (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)campaign + 440LL))(
              campaign,
              *(_QWORD *)(*(_QWORD *)campaign + 448LL));
          }
        }
      }
    }
  }
}


void ServantCombineControl___FadeAutoSetAnnounceLabel_b__124_0(ServantCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *autoSetAnnounceObj; // x0

  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj
    || (autoSetAnnounceObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoSetAnnounceObj, 0)) == 0 )
  {
    sub_2213CDC(autoSetAnnounceObj, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantCombineControl___OnClickRecommendedButton_b__114_0(
        ServantCombineControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 *v8; // x8
  System_String_o *v9; // x22
  UILabel_o *autoRecommendedButtonLabel; // x21
  System_String_o *recommendedConfigDialog; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A23D & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    sub_2213A60(&StringLiteral_2190/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_2189/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    byte_596A23D = 1;
  }
  if ( !*(&RecommendedConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, isDecide, method);
  ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v8 = &StringLiteral_2190/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v8 = &StringLiteral_2189/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
  v9 = (System_String_o *)*v8;
  autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  recommendedConfigDialog = LocalizationManager__Get(v9, 0);
  if ( !autoRecommendedButtonLabel )
    goto LABEL_16;
  UILabel__set_text(autoRecommendedButtonLabel, recommendedConfigDialog, 0);
  if ( isDecide )
  {
    ServantCombineControl__SetRecommendedMaterial(this, 0, v13);
    return;
  }
  recommendedConfigDialog = (System_String_o *)this->fields.recommendedConfigDialog;
  if ( !recommendedConfigDialog )
LABEL_16:
    sub_2213CDC(recommendedConfigDialog, v12);
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)recommendedConfigDialog, 0, v13);
}


System_Collections_Generic_List_EventCampaignEntity__o *ServantCombineControl___SetCampaignListPerSelectSvt_b__94_0(
        ServantCombineControl_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *g,
        const MethodInfo *method)
{
  ServantCombineControl___c_c *v5; // x0
  struct ServantCombineControl___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__94_3; // x21
  Il2CppObject *v8; // x22
  struct ServantCombineControl___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  ServantCombineControl___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  struct ServantCombineControl___c_StaticFields *v21; // x9
  System_Func_object__int__o *_9__94_4; // x21
  Il2CppObject *v23; // x22
  struct ServantCombineControl___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x20
  System_Func_object__long__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  if ( (byte_596A23B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_2213A60(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__long__TypeInfo);
    sub_2213A60(&Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_5__);
    sub_2213A60(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_3__);
    sub_2213A60(&Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_4__);
    sub_2213A60(&ServantCombineControl___c_TypeInfo);
    byte_596A23B = 1;
  }
  v5 = ServantCombineControl___c_TypeInfo;
  if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, g, method);
    v5 = ServantCombineControl___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__94_3 = (System_Func_object__object__o *)static_fields->__9__94_3;
  if ( !_9__94_3 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, g, method);
      static_fields = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__94_3 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__94_3,
      v8,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_3__,
      0);
    v9 = ServantCombineControl___c_TypeInfo->static_fields;
    v9->__9__94_3 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__94_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__94_3, (int32_t)_9__94_3, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)g,
          (System_Func_TSource__TResult__o *)_9__94_3,
          (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_EventCampaignEntity__EventCampaignEntity___);
  v19 = ServantCombineControl___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !*(&ServantCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCombineControl___c_TypeInfo, v17, v18);
    v19 = ServantCombineControl___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__94_4 = (System_Func_object__int__o *)v21->__9__94_4;
  if ( !_9__94_4 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = ServantCombineControl___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__94_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__94_4,
      v23,
      Method_ServantCombineControl___c__SetCampaignListPerSelectSvt_b__94_4__,
      0);
    v24 = ServantCombineControl___c_TypeInfo->static_fields;
    v24->__9__94_4 = (struct System_Func_EventCampaignEntity__int__o *)_9__94_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__94_4, (int32_t)_9__94_4, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v20,
          (System_Func_TSource__TKey__o *)_9__94_4,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  v32 = (System_Func_object__long__o *)sub_2213CCC(System_Func_EventCampaignEntity__long__TypeInfo);
  System_Func_object__long____ctor(
    v32,
    (Il2CppObject *)this,
    Method_ServantCombineControl__SetCampaignListPerSelectSvt_b__94_5__,
    0);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__long_(
                                                               v31,
                                                               (System_Func_TSource__TKey__o *)v32,
                                                               (const MethodInfo_389ABC4 *)Method_System_Linq_Enumerable_ThenBy_EventCampaignEntity__long___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v33,
                                                                     (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


int64_t ServantCombineControl___SetCampaignListPerSelectSvt_b__94_5(
        ServantCombineControl_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  void *EventMaster; // x0
  __int64 v6; // x1

  if ( (byte_596A23C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    byte_596A23C = 1;
  }
  EventMaster = ServantCombineControl__get_EventMaster(this, (const MethodInfo *)x);
  if ( !x
    || !EventMaster
    || (EventMaster = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)EventMaster,
                        x->fields.eventId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(EventMaster, v6);
  }
  return *((_QWORD *)EventMaster + 12);
}


int32_t ServantCombineControl___SetCampaignListPerSelectSvt_g__GetEquivalentTarget_94_2(
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  int32_t target; // w8

  if ( !entity )
    sub_2213CDC(0, method);
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


EventMaster_o *ServantCombineControl__get_EventMaster(ServantCombineControl_o *this, const MethodInfo *method)
{
  EventMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  MissionNaviTransitionBoardItem_o *p_eventMaster; // x19
  Il2CppObject *MasterData_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596A216 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A216 = 1;
  }
  result = this->fields.eventMaster;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v5);
    p_eventMaster = (MissionNaviTransitionBoardItem_o *)&this->fields.eventMaster;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
    p_eventMaster->klass = (MissionNaviTransitionBoardItem_c *)MasterData_object;
    sub_2213A04(p_eventMaster, (int32_t)MasterData_object, v8, v9, v10, v11, v12, v13);
    return (EventMaster_o *)p_eventMaster->klass;
  }
  return result;
}


int32_t ServantCombineControl__get_getExpVal(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._getExpVal_k__BackingField;
}


bool ServantCombineControl__get_isExchangeSvtInList(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._isExchangeSvtInList_k__BackingField;
}


System_Int64_array *ServantCombineControl__get_selectMaterialUsrSvtIdList(
        ServantCombineControl_o *this,
        const MethodInfo *method)
{
  return this->fields._selectMaterialUsrSvtIdList_k__BackingField;
}


int32_t ServantCombineControl__get_spendQpVal(ServantCombineControl_o *this, const MethodInfo *method)
{
  return this->fields._spendQpVal_k__BackingField;
}


void ServantCombineControl__set_getExpVal(ServantCombineControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._getExpVal_k__BackingField = value;
}


void ServantCombineControl__set_isExchangeSvtInList(
        ServantCombineControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isExchangeSvtInList_k__BackingField = value;
}


void ServantCombineControl__set_selectMaterialUsrSvtIdList(
        ServantCombineControl_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._selectMaterialUsrSvtIdList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._selectMaterialUsrSvtIdList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCombineControl__set_spendQpVal(ServantCombineControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._spendQpVal_k__BackingField = value;
}


void ServantCombineControl__FadeAutoSetAnnounceLabel_d__124___ctor(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__MoveNext(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *v3; // x19
  int32_t _1__state; // w23
  struct ServantCombineControl_o *_4__this; // x20
  struct CombineRootComponent_o *v6; // x8
  UITweener_o *v7; // x19
  EventDelegate_Callback_o *v8; // x21
  UILabel_o *autoSetAnnounceLabel; // x21
  System_String_o *localizationKey; // x22
  struct CombineRootComponent_o *combineRootComponent; // x8
  float autoSetAnnounceWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v13; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  v3 = this;
  if ( (byte_596A244 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantCombineControl__FadeAutoSetAnnounceLabel_b__124_0__);
    this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596A244 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      autoSetAnnounceLabel = _4__this->fields.autoSetAnnounceLabel;
      localizationKey = v3->fields.localizationKey;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)LocalizationManager__Get(localizationKey, 0);
      if ( autoSetAnnounceLabel )
      {
        UILabel__set_text(autoSetAnnounceLabel, (System_String_o *)this, 0);
        this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)_4__this->fields.autoSetAnnounceObj;
        if ( this )
        {
          this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)_4__this->fields.autoSetAnnounceObj;
            if ( this )
            {
              this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)((__int64 (__fastcall *)(ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                                                                                   this,
                                                                                   this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
                                                                                   1.0);
              combineRootComponent = _4__this->fields.combineRootComponent;
              if ( combineRootComponent )
              {
                autoSetAnnounceWaitTime = combineRootComponent->fields.autoSetAnnounceWaitTime;
                v13 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v13, autoSetAnnounceWaitTime, 0);
                v3->fields.__2__current = (Il2CppObject *)v13;
                p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
                sub_2213A04(p__2__current, (int32_t)v13, v15, v16, v17, v18, v19, v20);
                p__2__current[-1].fields._BoardType_k__BackingField = 1;
                return _1__state == 0;
              }
            }
          }
        }
      }
    }
    goto LABEL_20;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)_4__this->fields.autoSetAnnounceObj;
      if ( this )
      {
        this = (ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0);
        v6 = _4__this->fields.combineRootComponent;
        if ( v6 )
        {
          v7 = (UITweener_o *)TweenAlpha__Begin(
                                (UnityEngine_GameObject_o *)this,
                                v6->fields.autoSetAnnounceFadeTime,
                                0.0,
                                0);
          v8 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v8,
            (Il2CppObject *)_4__this,
            Method_ServantCombineControl__FadeAutoSetAnnounceLabel_b__124_0__,
            0);
          if ( v7 )
          {
            UITweener__SetOnFinished(v7, v8, 0);
            return _1__state == 0;
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
}


Il2CppObject *ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_Collections_IEnumerator_Reset(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_Collections_IEnumerator_get_Current(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ServantCombineControl__FadeAutoSetAnnounceLabel_d__124__System_IDisposable_Dispose(
        ServantCombineControl__FadeAutoSetAnnounceLabel_d__124_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantCombineControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A23E & 1) == 0 )
  {
    sub_2213A60(&ServantCombineControl___c_TypeInfo);
    byte_596A23E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantCombineControl___c_TypeInfo->static_fields->__9 = (struct ServantCombineControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantCombineControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantCombineControl___c___ctor(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantCombineControl___c___GetRecommendedCombineData_b__117_0(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return UserServantEntity__GetRarity(x, 0, 0);
}


bool ServantCombineControl___c___GetRecommendedCombineData_b__117_2(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 0, 0) == 1001;
}


int32_t ServantCombineControl___c___GetRecommendedCombineData_b__117_3(
        ServantCombineControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 0, 0);
}


void ServantCombineControl___c___InitSvtCombine_b__86_0(ServantCombineControl___c_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 naturalAligment; // x9
  ServantCombineControl___c_o *v7; // x0
  EventCampaignEntity_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596A23F & 1) == 0 )
  {
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A23F = 1;
  }
  Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (CombineRootComponent_o *)Instance->fields.myFSM) == 0 )
    sub_2213CDC(Instance, v3);
  naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] == CombineRootComponent_TypeInfo )
  {
    CombineRootComponent__ShowTutorial(Instance, 0);
  }
  else
  {
    v7 = (ServantCombineControl___c_o *)sub_221405C(Instance, CombineRootComponent_TypeInfo, v4, v5);
    ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_3(v7, v8, v9);
  }
}


int32_t ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_1(
        ServantCombineControl___c_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  __int64 v4; // x2
  ServantCombineControl___c_o *v5; // x19
  int klass_high; // w8

  if ( (byte_596A240 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    this = (ServantCombineControl___c_o *)sub_2213A60(&ServantCombineControl_TypeInfo);
    byte_596A240 = 1;
  }
  if ( !x )
    goto LABEL_14;
  this = (ServantCombineControl___c_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)x,
                                          0,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
  v5 = this;
  if ( !*(&ServantCombineControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCombineControl_TypeInfo, x, v4);
  if ( !v5 )
LABEL_14:
    sub_2213CDC(this, x);
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


EventCampaignEntity_o *ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_3(
        ServantCombineControl___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


int32_t ServantCombineControl___c___SetCampaignListPerSelectSvt_b__94_4(
        ServantCombineControl___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.value;
}


void ServantCombineControl___c___SetRecommendedMaterial_b__115_1(
        ServantCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A241 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A241 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void ServantCombineControl___c__DisplayClass115_0___ctor(
        ServantCombineControl___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCombineControl___c__DisplayClass115_0___SetRecommendedMaterial_b__0(
        ServantCombineControl___c__DisplayClass115_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ServantCombineControl_o *_4__this; // x8
  const MethodInfo *v9; // x2

  if ( (byte_596A242 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A242 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      Instance = (CommonUI_o *)_4__this->fields.recommendedConfigDialog;
      if ( Instance )
      {
        RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0, v7);
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
    sub_2213CDC(Instance, v6);
  }
}


void ServantCombineControl___c__DisplayClass115_0___SetRecommendedMaterial_b__2(
        ServantCombineControl___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct ServantCombineControl_o *_4__this; // x8

  if ( (byte_596A243 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A243 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  RecommenededConfigDialog__Close((RecommenededConfigDialog_o *)Instance, 0, v5);
}


void ServantCombineControl___c__DisplayClass117_0___ctor(
        ServantCombineControl___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantCombineControl___c__DisplayClass117_0___GetRecommendedCombineData_b__1(
        ServantCombineControl___c__DisplayClass117_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return UserServantEntity__getSvtClassId(x, 0, 0, 0) == this->fields.baseServantClass;
}