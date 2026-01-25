void SvtEquipCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_4CE869E & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEquipCombineControl_TypeInfo);
    byte_4CE869E = 1;
  }
  SvtEquipCombineControl_TypeInfo->static_fields->MaxSelectNum = 20;
}


void SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CE869D & 1) == 0 )
  {
    sub_1C7BAE8(&CombineMenuControl_TypeInfo);
    byte_4CE869D = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool SvtEquipCombineControl__CheckIncrementLv(SvtEquipCombineControl_o *this, int32_t lv, const MethodInfo *method)
{
  int afterMaxLv; // w8
  void *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w8
  int32_t totalExp; // w9
  bool result; // w0

  if ( (byte_4CE868B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE868B = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0)) == 0 )
    {
      sub_1C7BD40(Instance, v7);
    }
    v8 = *((_DWORD *)Instance + 6);
    totalExp = this->fields.totalExp;
    if ( v8 <= totalExp )
    {
      if ( v8 != totalExp )
      {
        result = 0;
        ++this->fields.checkLv;
        return result;
      }
      afterMaxLv = *((_DWORD *)Instance + 5) + 1;
    }
    else
    {
      afterMaxLv = *((_DWORD *)Instance + 5);
    }
  }
  result = 1;
  this->fields.increLv = afterMaxLv;
  return result;
}


void SvtEquipCombineControl__CheckIsSelectBaseSvtEq(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v6; // q1
  int64_t v7; // x0
  __int128 v8; // q1
  const MethodInfo *v9; // x1
  bool v10; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]

  if ( (byte_4CE8688 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE8688 = 1;
  }
  if ( selectBase )
  {
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v6 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v6;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v12 = v13;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v12, 0);
      v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v11.fields.fakeValue = v8;
      if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v11, 0) )
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v9);
    }
    v10 = 1;
  }
  else
  {
    SvtEquipCombineControl__InitMaterialSvtEqInfo(this, (const MethodInfo *)selectBase);
    v10 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v10;
  sub_1C7BA8C(&this->fields.baseUserServantEntity, selectBase);
}


void SvtEquipCombineControl__CheckRareSvt(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( this->fields.isContainedRare || this->fields.isLimitOverMaterial || this->fields.isLimitUpMaterial )
    SvtEquipCombineControl__ShowRareSvtDlg(this, method);
  else
    SvtEquipCombineControl__OnClickExeCombine(this, method);
}


void SvtEquipCombineControl__DestroyGrid(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4CE8690 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8690 = 1;
  }
  selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
  if ( !selectGrid )
    goto LABEL_14;
  selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0);
  if ( !selectGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)selectGrid, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      selectGrid = (UnityEngine_Component_o *)this->fields.selectGrid;
      if ( !selectGrid )
        break;
      selectGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectGrid, 0);
      if ( !selectGrid )
        break;
      selectGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)selectGrid,
                                                v5 - 2,
                                                0);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C7BD40(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0;
  sub_1C7BA8C(&this->fields.selectMtSvtEqList, 0);
}


System_Collections_IEnumerator_o *SvtEquipCombineControl__FadeAutoSetAnnounceLabel(
        SvtEquipCombineControl_o *this,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CE869B & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
    byte_4CE869B = 1;
  }
  v5 = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)sub_1C7BD34(SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
  SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87___ctor(v5, 0, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  v5->fields.__4__this = this;
  sub_1C7BA8C(&v5->fields.__4__this, this);
  v5->fields.localizationKey = localizationKey;
  sub_1C7BA8C(&v5->fields.localizationKey, localizationKey);
  return (System_Collections_IEnumerator_o *)v5;
}


bool SvtEquipCombineControl__GetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isExeCombine;
}


System_String_o *SvtEquipCombineControl__GetMaterialStatusInfoMsg(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  uint32_t cctor_finished; // w9
  __int64 *v4; // x8

  if ( (byte_4CE8692 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8311/*"LIMIT_UP_MATERIAL_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_8294/*"LIMIT_BOTH_MSG"*/);
    sub_1C7BAE8(&StringLiteral_8309/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/);
    byte_4CE8692 = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8294/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8309/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_8311/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


SetCombineData_o *SvtEquipCombineControl__GetRecommendedCombineData(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t ConfigSaveData; // x0
  __int64 Rarity; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x21
  UserServantEntity_array *ServantEquipList; // x22
  System_Collections_Generic_Dictionary_object__int__o *v7; // x19
  struct UserServantEntity_o *baseData; // x8
  int64_t v9; // x23
  System_Collections_Generic_List_int__o *v10; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x24
  SvtEquipCombineControl___c_c *v12; // x0
  System_Func_T__TResult__o *_9__83_0; // x25
  Il2CppObject *v14; // x26
  struct SvtEquipCombineControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x24
  Il2CppObject *v17; // x28
  int64_t v18; // x8
  SvtEquipCombineControl___c_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x23
  System_Func_object__object__o *_9__83_1; // x24
  Il2CppObject *v22; // x25
  struct SvtEquipCombineControl___c_StaticFields *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  SvtEquipCombineControl___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x23
  System_Func_T__TResult__o *_9__83_2; // x24
  Il2CppObject *v29; // x25
  struct SvtEquipCombineControl___c_StaticFields *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  il2cpp_array_size_t max_length; // x8
  int v33; // w24
  int v34; // w23
  UserServantEntity_o *v35; // x25
  __int64 v36; // x26
  __int64 v37; // x27
  Il2CppObject *Entity; // x0
  __int128 v39; // q0
  ServantEntity_o *v40; // x27
  int64_t v41; // x26
  struct UserServantEntity_o *v42; // x8
  __int128 v43; // q0
  const MethodInfo *v44; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // x0
  __int64 v46; // x26
  int32_t v47; // w26
  Il2CppObject *v48; // x1
  int32_t v49; // w2
  const MethodInfo_34E975C *v50; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // x0
  __int64 v52; // x26
  int32_t v53; // w26
  SvtEquipCombineControl___c_c *v54; // x0
  System_Func_T__TResult__o *_9__83_3; // x21
  Il2CppObject *v56; // x22
  struct SvtEquipCombineControl___c_StaticFields *v57; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x0
  SvtEquipCombineControl___c_c *v59; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x20
  System_Func_T__TResult__o *_9__83_4; // x21
  Il2CppObject *v62; // x22
  struct SvtEquipCombineControl___c_StaticFields *v63; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v64; // x0
  SvtEquipCombineControl___c_c *v65; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x20
  System_Func_T__TResult__o *_9__83_5; // x21
  Il2CppObject *v68; // x22
  struct SvtEquipCombineControl___c_StaticFields *v69; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v70; // x0
  SvtEquipCombineControl___c_c *v71; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x20
  System_Func_T__TResult__o *_9__83_6; // x21
  Il2CppObject *v74; // x22
  struct SvtEquipCombineControl___c_StaticFields *v75; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v76; // x0
  SvtEquipCombineControl___c_c *v77; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v78; // x20
  System_Func_T__TResult__o *_9__83_7; // x21
  Il2CppObject *v80; // x22
  struct SvtEquipCombineControl___c_StaticFields *v81; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v82; // x0
  SvtEquipCombineControl___c_c *v83; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v84; // x20
  System_Func_T__TResult__o *_9__83_8; // x21
  Il2CppObject *v86; // x22
  struct SvtEquipCombineControl___c_StaticFields *v87; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v88; // x0
  SvtEquipCombineControl___c_c *v89; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v90; // x20
  System_Func_T__TResult__o *_9__83_9; // x21
  Il2CppObject *v92; // x22
  struct SvtEquipCombineControl___c_StaticFields *v93; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v94; // x0
  SvtEquipCombineControl___c_c *v95; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x20
  System_Func_T__TResult__o *_9__83_10; // x21
  Il2CppObject *v98; // x22
  struct SvtEquipCombineControl___c_StaticFields *v99; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Collections_Generic_List_UserServantEntity__o *v101; // x0
  const MethodInfo *v102; // x2
  __int64 value; // [xsp+8h] [xbp-138h]
  __int64 valuea; // [xsp+8h] [xbp-138h]
  __int64 v106; // [xsp+10h] [xbp-130h]
  __int64 v107; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_int__o *v108; // [xsp+20h] [xbp-120h]
  System_Collections_ICollection_o *self; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_int__o *selectTypeList; // [xsp+30h] [xbp-110h]
  UserServantGrandMaster_o *v111; // [xsp+38h] [xbp-108h]
  UserRecommendSupportMaster_o *v112; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_T__o *v113; // [xsp+50h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+A0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+C0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16

  if ( (byte_4CE8697 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantLeaderMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_ObscuredLong___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C7BAE8(&System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    sub_1C7BAE8(&System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    sub_1C7BAE8(&System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    sub_1C7BAE8(&System_Func_int__Rarity_TYPE__TypeInfo);
    sub_1C7BAE8(&System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ObscuredLong__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor___78768192);
    sub_1C7BAE8(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__);
    sub_1C7BAE8(&SvtEquipCombineControl___c_TypeInfo);
    byte_4CE8697 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_150;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)ConfigSaveData;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v7 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v7,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_150;
  v106 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v107 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
  ConfigSaveData = (int64_t)RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( !ConfigSaveData )
    goto LABEL_150;
  v9 = ConfigSaveData;
  v10 = *(System_Collections_Generic_List_int__o **)(ConfigSaveData + 16);
  v11 = *(System_Collections_Generic_IEnumerable_TSource__o **)(ConfigSaveData + 24);
  v12 = SvtEquipCombineControl___c_TypeInfo;
  selectTypeList = v10;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v12 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_0 = (System_Func_T__TResult__o *)v12->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = SvtEquipCombineControl___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__83_0 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_int__Rarity_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__83_0,
      v14,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__,
      0);
    static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_int__Rarity_TYPE__o *)_9__83_0;
    sub_1C7BA8C(&static_fields->__9__83_0, _9__83_0);
  }
  v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                         v11,
                                                         (System_Func_TSource__TResult__o *)_9__83_0,
                                                         (const MethodInfo_31A2EB0 *)Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
  self = (System_Collections_ICollection_o *)sub_1C7BD34(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58867416(
    (System_Collections_Generic_List_T__o *)self,
    v16,
    (const MethodInfo_3823ED8 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor___78768192);
  v108 = *(System_Collections_Generic_List_int__o **)(v9 + 32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserDeckMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantLeaderMaster___);
  if ( !ConfigSaveData )
    goto LABEL_150;
  v18 = ConfigSaveData;
  v19 = SvtEquipCombineControl___c_TypeInfo;
  v20 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v18 + 40);
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v19 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_1 = (System_Func_object__object__o *)v19->static_fields->__9__83_1;
  if ( !_9__83_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = SvtEquipCombineControl___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__83_1 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    System_Func_object__object____ctor(
      _9__83_1,
      v22,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__,
      0);
    v23 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v23->__9__83_1 = (struct System_Func_UserServantLeaderEntity__EquipTargetInfo__o *)_9__83_1;
    sub_1C7BA8C(&v23->__9__83_1, _9__83_1);
  }
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v20,
                                                         (System_Func_TSource__TResult__o *)_9__83_1,
                                                         (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
  v25 = BasicHelper__ExcludeNull_object_(
          v24,
          (const MethodInfo_315A07C *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v26 = SvtEquipCombineControl___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v26 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_2 = (System_Func_T__TResult__o *)v26->static_fields->__9__83_2;
  if ( !_9__83_2 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = SvtEquipCombineControl___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__83_2 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    System_Func_object__ObscuredLong____ctor(
      _9__83_2,
      v29,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__,
      0);
    v30 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v30->__9__83_2 = (struct System_Func_EquipTargetInfo__ObscuredLong__o *)_9__83_2;
    sub_1C7BA8C(&v30->__9__83_2, _9__83_2);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__ObscuredLong_(
                                                               v27,
                                                               (System_Func_TSource__TResult__o *)_9__83_2,
                                                               (const MethodInfo_31A62A4 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
  v113 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_ObscuredLong_(
                                                   v31,
                                                   (const MethodInfo_31B3EFC *)Method_System_Linq_Enumerable_ToList_ObscuredLong___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v112 = (UserRecommendSupportMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v111 = (UserServantGrandMaster_o *)ConfigSaveData;
  if ( !ServantEquipList )
    goto LABEL_150;
  max_length = ServantEquipList->max_length;
  v33 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = ServantEquipList->m_Items[v34];
      if ( !v35 )
        goto LABEL_150;
      v37 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v118.fields.currentCryptoKey = v37;
      *(_QWORD *)&v118.fields.fakeValue = v36;
      ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v118, 0);
      if ( !v5 )
        goto LABEL_150;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v5,
                 ConfigSaveData,
                 (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v39 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
      v40 = (ServantEntity_o *)Entity;
      *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v117.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v116 = v117;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v116, 0);
      ConfigSaveData = UserServantEntity__IsChoice(v35, 0);
      if ( (ConfigSaveData & 1) == 0 )
      {
        ConfigSaveData = UserServantEntity__IsLock(v35, 0);
        if ( (ConfigSaveData & 1) == 0 )
        {
          v42 = this->fields.baseData;
          if ( !v42 )
            goto LABEL_150;
          v43 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
          *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v117.fields.fakeValue = v43;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v115 = v117;
          ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v115, 0);
          if ( ConfigSaveData != v41 )
          {
            if ( !v17 )
              goto LABEL_150;
            ConfigSaveData = UserDeckMaster__IsEquip((UserDeckMaster_o *)v17, v41, 0);
            if ( (ConfigSaveData & 1) == 0 )
            {
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v117, v41, 0);
              ConfigSaveData = (int64_t)v113;
              if ( !v113 )
                goto LABEL_150;
              ConfigSaveData = System_Collections_Generic_List_ObscuredLong___Contains(
                                 v113,
                                 &v117,
                                 (const MethodInfo_3841B44 *)Method_System_Collections_Generic_List_ObscuredLong__Contains__);
              if ( (ConfigSaveData & 1) == 0 )
              {
                ConfigSaveData = (int64_t)v112;
                if ( !v112 )
                  goto LABEL_150;
                ConfigSaveData = UserRecommendSupportMaster__IsSettingServant(v112, v41, 1, 0);
                if ( (ConfigSaveData & 1) == 0 )
                {
                  ConfigSaveData = (int64_t)v111;
                  if ( !v111 )
                    goto LABEL_150;
                  ConfigSaveData = UserServantGrandMaster__IsSettingEquip(v111, v41, 0);
                  if ( (ConfigSaveData & 1) == 0 )
                  {
                    ConfigSaveData = SvtEquipCombineControl__IsMatchServantEquipType(
                                       (SvtEquipCombineControl_o *)ConfigSaveData,
                                       v40,
                                       selectTypeList,
                                       v44);
                    if ( (ConfigSaveData & 1) != 0 )
                    {
                      ConfigSaveData = BasicHelper__IsNullOrEmpty(self, 0);
                      if ( (ConfigSaveData & 1) != 0 )
                        goto LABEL_62;
                      Rarity = (unsigned int)UserServantEntity__getRarity(v35, 0);
                      ConfigSaveData = (int64_t)self;
                      if ( !self )
                        goto LABEL_150;
                      ConfigSaveData = System_Collections_Generic_List_Int32Enum___Contains(
                                         (System_Collections_Generic_List_T__o *)self,
                                         Rarity,
                                         (const MethodInfo_382497C *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
                      if ( (ConfigSaveData & 1) != 0 )
                      {
LABEL_62:
                        if ( !v40 )
                          goto LABEL_150;
                        if ( ServantEntity__get_IsSvtEquipExp(v40, 0)
                          || !v35->fields.exp
                          && UserServantEntity__getLimitCntMax(v35, 0)
                          && !ServantEntity__get_IsChocolateSvtEquip(v40, 0) )
                        {
                          ConfigSaveData = (int64_t)v108;
                          if ( !v108 )
                            goto LABEL_150;
                          if ( !System_Collections_Generic_List_int___Contains(
                                  v108,
                                  1,
                                  (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
                            || (ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                                   v108,
                                                   0,
                                                   (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__),
                                (ConfigSaveData & 1) != 0) )
                          {
                            v46 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
                            *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              value = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              *(_QWORD *)&v45.fields.fakeValue = value;
                            }
                            *(_QWORD *)&v45.fields.currentCryptoKey = v46;
                            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v45, 0);
                            *(_QWORD *)&v119.fields.fakeValue = v106;
                            *(_QWORD *)&v119.fields.currentCryptoKey = v107;
                            if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v119, 0) )
                            {
                              ConfigSaveData = (int64_t)v7;
                              if ( !v7 )
                                goto LABEL_150;
                              v48 = (Il2CppObject *)v35;
                              v49 = 0;
                              v50 = (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                              goto LABEL_94;
                            }
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp(v40, 0);
                            if ( !v7 )
                              goto LABEL_150;
                            v50 = (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                            if ( (ConfigSaveData & 1) != 0 )
                              v49 = 20;
                            else
                              v49 = 40;
LABEL_92:
                            ConfigSaveData = (int64_t)v7;
                            goto LABEL_93;
                          }
                        }
                        else
                        {
                          ConfigSaveData = (int64_t)v108;
                          if ( !v108 )
                            goto LABEL_150;
                          if ( System_Collections_Generic_List_int___Contains(
                                 v108,
                                 1,
                                 (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
                            || (ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                                   v108,
                                                   0,
                                                   (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__),
                                (ConfigSaveData & 1) == 0) )
                          {
                            v52 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
                            *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              valuea = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              *(_QWORD *)&v51.fields.fakeValue = valuea;
                            }
                            *(_QWORD *)&v51.fields.currentCryptoKey = v52;
                            v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v51, 0);
                            *(_QWORD *)&v120.fields.fakeValue = v106;
                            *(_QWORD *)&v120.fields.currentCryptoKey = v107;
                            if ( v53 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v120, 0) )
                            {
                              ConfigSaveData = (int64_t)v7;
                              if ( !v7 )
                                goto LABEL_150;
                              v49 = 10;
                              v50 = (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
LABEL_93:
                              v48 = (Il2CppObject *)v35;
LABEL_94:
                              System_Collections_Generic_Dictionary_object__int___Add(
                                (System_Collections_Generic_Dictionary_object__int__o *)ConfigSaveData,
                                v48,
                                v49,
                                v50);
                              goto LABEL_95;
                            }
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp(v40, 0);
                            if ( !v7 )
                              goto LABEL_150;
                            v50 = (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                            if ( (ConfigSaveData & 1) != 0 )
                              v49 = 30;
                            else
                              v49 = 50;
                            goto LABEL_92;
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
LABEL_95:
      if ( v33 == v34 )
        break;
      if ( (unsigned int)++v34 >= LODWORD(ServantEquipList->max_length) )
        sub_1C7BD48(ConfigSaveData);
    }
  }
  if ( !v7 )
LABEL_150:
    sub_1C7BD40(ConfigSaveData, Rarity);
  if ( !System_Collections_Generic_Dictionary_object__int___get_Count(
          v7,
          (const MethodInfo_34E942C *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__) )
    return 0;
  v54 = SvtEquipCombineControl___c_TypeInfo;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v54 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_3 = (System_Func_T__TResult__o *)v54->static_fields->__9__83_3;
  if ( !_9__83_3 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = SvtEquipCombineControl___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v54->static_fields->__9;
    _9__83_3 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_3,
      v56,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__,
      0);
    v57 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v57->__9__83_3 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_3;
    sub_1C7BA8C(&v57->__9__83_3, _9__83_3);
  }
  v58 = System_Linq_Enumerable__OrderBy_KeyValuePair_object__int___int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (System_Func_TSource__TKey__o *)_9__83_3,
          (const MethodInfo_319EC64 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
  v59 = SvtEquipCombineControl___c_TypeInfo;
  v60 = v58;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v59 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_4 = (System_Func_T__TResult__o *)v59->static_fields->__9__83_4;
  if ( !_9__83_4 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = SvtEquipCombineControl___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v59->static_fields->__9;
    _9__83_4 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_4,
      v62,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__,
      0);
    v63 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v63->__9__83_4 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_4;
    sub_1C7BA8C(&v63->__9__83_4, _9__83_4);
  }
  v64 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___int_(
          v60,
          (System_Func_TSource__TKey__o *)_9__83_4,
          (const MethodInfo_31ADCE8 *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
  v65 = SvtEquipCombineControl___c_TypeInfo;
  v66 = v64;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v65 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_5 = (System_Func_T__TResult__o *)v65->static_fields->__9__83_5;
  if ( !_9__83_5 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = SvtEquipCombineControl___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v65->static_fields->__9;
    _9__83_5 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_5,
      v68,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__,
      0);
    v69 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v69->__9__83_5 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_5;
    sub_1C7BA8C(&v69->__9__83_5, _9__83_5);
  }
  v70 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___int_(
          v66,
          (System_Func_TSource__TKey__o *)_9__83_5,
          (const MethodInfo_31AE678 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
  v71 = SvtEquipCombineControl___c_TypeInfo;
  v72 = v70;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v71 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_6 = (System_Func_T__TResult__o *)v71->static_fields->__9__83_6;
  if ( !_9__83_6 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = SvtEquipCombineControl___c_TypeInfo;
    }
    v74 = (Il2CppObject *)v71->static_fields->__9;
    _9__83_6 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_6,
      v74,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__,
      0);
    v75 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v75->__9__83_6 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_6;
    sub_1C7BA8C(&v75->__9__83_6, _9__83_6);
  }
  v76 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___long_(
          v72,
          (System_Func_TSource__TKey__o *)_9__83_6,
          (const MethodInfo_31ADDB4 *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
  v77 = SvtEquipCombineControl___c_TypeInfo;
  v78 = v76;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v77 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_7 = (System_Func_T__TResult__o *)v77->static_fields->__9__83_7;
  if ( !_9__83_7 )
  {
    if ( !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77);
      v77 = SvtEquipCombineControl___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v77->static_fields->__9;
    _9__83_7 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_7,
      v80,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__,
      0);
    v81 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v81->__9__83_7 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_7;
    sub_1C7BA8C(&v81->__9__83_7, _9__83_7);
  }
  v82 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
          v78,
          (System_Func_TSource__TKey__o *)_9__83_7,
          (const MethodInfo_31AE744 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v83 = SvtEquipCombineControl___c_TypeInfo;
  v84 = v82;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v83 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_8 = (System_Func_T__TResult__o *)v83->static_fields->__9__83_8;
  if ( !_9__83_8 )
  {
    if ( !v83->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v83);
      v83 = SvtEquipCombineControl___c_TypeInfo;
    }
    v86 = (Il2CppObject *)v83->static_fields->__9;
    _9__83_8 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_8,
      v86,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__,
      0);
    v87 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v87->__9__83_8 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_8;
    sub_1C7BA8C(&v87->__9__83_8, _9__83_8);
  }
  v88 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
          v84,
          (System_Func_TSource__TKey__o *)_9__83_8,
          (const MethodInfo_31AE744 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v89 = SvtEquipCombineControl___c_TypeInfo;
  v90 = v88;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v89 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_9 = (System_Func_T__TResult__o *)v89->static_fields->__9__83_9;
  if ( !_9__83_9 )
  {
    if ( !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v89 = SvtEquipCombineControl___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v89->static_fields->__9;
    _9__83_9 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_9,
      v92,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__,
      0);
    v93 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v93->__9__83_9 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_9;
    sub_1C7BA8C(&v93->__9__83_9, _9__83_9);
  }
  v94 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
          v90,
          (System_Func_TSource__TKey__o *)_9__83_9,
          (const MethodInfo_31AE744 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v95 = SvtEquipCombineControl___c_TypeInfo;
  v96 = (System_Collections_Generic_IEnumerable_TSource__o *)v94;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v95 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_10 = (System_Func_T__TResult__o *)v95->static_fields->__9__83_10;
  if ( !_9__83_10 )
  {
    if ( !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95);
      v95 = SvtEquipCombineControl___c_TypeInfo;
    }
    v98 = (Il2CppObject *)v95->static_fields->__9;
    _9__83_10 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    System_Func_KeyValuePair_object__int___object____ctor(
      _9__83_10,
      v98,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__,
      0);
    v99 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v99->__9__83_10 = (struct System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__o *)_9__83_10;
    sub_1C7BA8C(&v99->__9__83_10, _9__83_10);
  }
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                                v96,
                                                                (System_Func_TSource__TResult__o *)_9__83_10,
                                                                (const MethodInfo_31A141C *)Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
  v101 = (System_Collections_Generic_List_UserServantEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v100,
                                                                   (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
  return SvtEquipCombineControl__GetRecommendedSvtEquipCombineData(this, v101, v102);
}


SetCombineData_o *SvtEquipCombineControl__GetRecommendedSvtEquipCombineData(
        SvtEquipCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *Master_object; // x19
  __int64 combineResStatus; // x0
  __int64 v8; // x1
  struct MenuListControl_o *menuListCtr; // x8
  CombineMaterialMaster_o *v10; // x21
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x24
  float v12; // s0
  float v13; // s8
  float v14; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v16; // x21
  __int64 v17; // x24
  float v18; // s9
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v20; // x8
  int32_t size; // w9
  float v22; // s0
  unsigned int v23; // w8
  int v24; // w27
  int v25; // w19
  int v26; // w22
  int32_t v27; // w25
  SvtEquipCombineControl_o *v28; // x26
  System_Collections_Generic_List_UserServantEntity__o *v29; // x23
  UserServantEntity_o *v30; // x28
  __int64 v31; // x21
  __int64 v32; // x29
  int32_t v33; // w0
  __int64 v34; // x29
  int v35; // s9
  float v36; // s9
  unsigned int v37; // w8
  unsigned int v38; // w21
  unsigned int v39; // w9
  int v40; // w29
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  const MethodInfo *v45; // x3
  struct UserServantEntity_o *v46; // x8
  SvtEquipCombineControl_c *v47; // x0
  System_Collections_Generic_Dictionary_long__bool__o *v48; // x21
  _BOOL8 v49; // x0
  __int64 v50; // x1
  Il2CppObject v51; // q0
  int64_t v52; // x0
  __int64 v53; // x22
  struct UserServantEntity_o *v54; // x1
  int32_t v55; // w8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int64_array *v57; // x0
  int v59; // [xsp+Ch] [xbp-104h]
  System_Collections_Generic_List_object__o *v60; // [xsp+10h] [xbp-100h]
  int32_t v61; // [xsp+18h] [xbp-F8h]
  int32_t baseExpType; // [xsp+1Ch] [xbp-F4h]
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // [xsp+20h] [xbp-F0h]
  unsigned int v64; // [xsp+2Ch] [xbp-E4h]
  __int64 v65; // [xsp+30h] [xbp-E0h]
  CombineMaterialMaster_o *v66; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+80h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4CE8698 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_CombineMaterialMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&SetCombineData_TypeInfo);
    sub_1C7BAE8(&SvtEquipCombineControl_TypeInfo);
    byte_4CE8698 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  combineResStatus = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CombineMaterialMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_76;
  v10 = (CombineMaterialMaster_o *)combineResStatus;
  combineResStatus = (__int64)this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  combineEventList = menuListCtr->fields.combineEventList;
  v12 = CheckCombineResStatus__GetSvtEquipExpCampaignValue(
          (CheckCombineResStatus_o *)combineResStatus,
          this->fields.baseData,
          combineEventList,
          0);
  combineResStatus = (__int64)this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  v13 = v12;
  v66 = v10;
  v14 = CheckCombineResStatus__GetSvtEquipQpCampaignValue(
          (CheckCombineResStatus_o *)combineResStatus,
          this->fields.baseData,
          combineEventList,
          0);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_76;
  v17 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v18 = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v70.fields.currentCryptoKey = v17;
  *(_QWORD *)&v70.fields.fakeValue = v16;
  combineResStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v70, 0);
  if ( !Master_object )
    goto LABEL_76;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             combineResStatus,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  combineResStatus = (__int64)UserGameMaster__getSelfUserGame(0);
  v20 = this->fields.baseData;
  v65 = combineResStatus;
  if ( !v20 )
    goto LABEL_76;
  combineResStatus = UserServantEntity__getCombineQpSvtEq(v20, 0);
  if ( !Entity || !targetMaterialList )
    goto LABEL_76;
  size = targetMaterialList->fields._size;
  v60 = v5;
  if ( size < 1 )
  {
    v26 = 0;
    v25 = 0;
    v24 = 0;
    goto LABEL_55;
  }
  v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v22 = v18 * (float)(int)combineResStatus;
  v61 = targetMaterialList->fields._size;
  baseExpType = HIDWORD(Entity[8].klass);
  v23 = vcvtps_s32_f32(v22);
  if ( ceilf(v22) == INFINITY )
    v23 = 0x80000000;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v64 = v23;
  v59 = v23 * size;
  while ( 1 )
  {
    v28 = this;
    v29 = targetMaterialList;
    combineResStatus = (__int64)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)targetMaterialList,
                                  v27,
                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    if ( !combineResStatus )
      goto LABEL_76;
    v30 = (UserServantEntity_o *)combineResStatus;
    v31 = *(_QWORD *)(combineResStatus + 80);
    v32 = *(_QWORD *)(combineResStatus + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v71.fields.currentCryptoKey = v31;
    *(_QWORD *)&v71.fields.fakeValue = v32;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v71, 0);
    combineResStatus = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  v63,
                                  v33,
                                  (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !combineResStatus )
      goto LABEL_76;
    v34 = combineResStatus;
    combineResStatus = (__int64)v66;
    if ( !v66 )
      goto LABEL_76;
    combineResStatus = (__int64)CombineMaterialMaster__GetEntity(v66, *(_DWORD *)(v34 + 136), v30->fields.lv, 0);
    if ( !combineResStatus )
      goto LABEL_76;
    v35 = *(_DWORD *)(combineResStatus + 24);
    if ( !byte_4CE84E7 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE84E7 = 1;
    }
    v36 = v13 * (float)v35;
    if ( System_Math_TypeInfo->_2.cctor_finished )
    {
      v37 = vcvtps_s32_f32(v36);
      v38 = ceilf(v36) == INFINITY ? 0x80000000 : v37;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v39 = vcvtps_s32_f32(v36);
      if ( ceilf(v36) == INFINITY )
        v38 = 0x80000000;
      else
        v38 = v39;
      if ( !byte_4CE84E7 )
      {
        sub_1C7BAE8(&System_Math_TypeInfo);
        byte_4CE84E7 = 1;
      }
      v5 = v60;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    combineResStatus = UserServantEntity__getAddTotalExp(v30, *(_DWORD *)(v34 + 136), 0);
    if ( !v65 )
      goto LABEL_76;
    v25 += combineResStatus;
    v40 = v26 + v64;
    if ( *(_QWORD *)(v65 + 96) < (int)(v26 + v64) )
    {
      this = v28;
      v28->fields.isQpCondClear = 0;
LABEL_55:
      v40 = v26;
      if ( v5 )
        goto LABEL_58;
      goto LABEL_76;
    }
    if ( !v5 )
      goto LABEL_76;
    items = v5->fields._items;
    v42 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_76;
    v43 = v5->fields._size;
    if ( (unsigned int)v43 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v30,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + v43;
      v5->fields._size = v43 + 1;
      v44[4] = (Il2CppClass *)v30;
      combineResStatus = sub_1C7BA8C(v44 + 4, v30);
    }
    v46 = v28->fields.baseData;
    if ( !v46 )
      goto LABEL_76;
    v24 += v38;
    this = v28;
    if ( SvtEquipCombineControl__IsLevelMax(v28, v25 + v24 + v46->fields.exp, baseExpType, v45) )
      break;
    v47 = SvtEquipCombineControl_TypeInfo;
    if ( !SvtEquipCombineControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEquipCombineControl_TypeInfo);
      v47 = SvtEquipCombineControl_TypeInfo;
    }
    if ( v27 == v47->static_fields->MaxSelectNum - 1 )
      goto LABEL_58;
    ++v27;
    v26 += v64;
    targetMaterialList = v29;
    if ( v61 == v27 )
    {
      v40 = v59;
      goto LABEL_58;
    }
  }
  v40 = v64 + v26;
LABEL_58:
  if ( !v5->fields._size )
    return 0;
  v48 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v48,
    (const MethodInfo_34C18EC *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    v5,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v69.fields._list = *(_OWORD *)&v68.fields.currentCryptoKey;
  v69.fields._current = (Il2CppObject *)v68.fields.fakeValue;
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v49 )
      break;
    if ( !v69.fields._current )
      sub_1C7BD40(v49, v50);
    v51 = v69.fields._current[2];
    *(Il2CppObject *)&v68.fields.currentCryptoKey = v69.fields._current[1];
    *(Il2CppObject *)&v68.fields.fakeValue = v51;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v67 = v68;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v67, 0);
    if ( !v48 )
      sub_1C7BD40(v52, v52);
    System_Collections_Generic_Dictionary_long__bool___Add(
      v48,
      v52,
      0,
      (const MethodInfo_34C22CC *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  v53 = sub_1C7BD34(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v53, 0);
  if ( !v53 )
    goto LABEL_76;
  v54 = this->fields.baseData;
  *(_QWORD *)(v53 + 16) = v54;
  sub_1C7BA8C(v53 + 16, v54);
  v55 = v5->fields._size;
  *(_DWORD *)(v53 + 32) = v24;
  *(_DWORD *)(v53 + 36) = v25;
  *(_QWORD *)(v53 + 48) = 0;
  *(_DWORD *)(v53 + 24) = v55;
  *(_DWORD *)(v53 + 28) = v40;
  combineResStatus = (__int64)this->fields.baseData;
  if ( !combineResStatus )
    goto LABEL_76;
  if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)combineResStatus, 0) )
  {
    combineResStatus = (__int64)this->fields.baseData;
    if ( combineResStatus )
    {
      combineResStatus = UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)combineResStatus, 0);
      goto LABEL_73;
    }
    goto LABEL_76;
  }
  combineResStatus = 0;
LABEL_73:
  *(_BYTE *)(v53 + 44) = combineResStatus & 1;
  if ( !v48 )
LABEL_76:
    sub_1C7BD40(combineResStatus, v8);
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v48,
           (const MethodInfo_34C1F80 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  v57 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_31AF15C *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v53 + 56) = v57;
  sub_1C7BA8C(v53 + 56, v57);
  *(_QWORD *)(v53 + 64) = v48;
  sub_1C7BA8C(v53 + 64, v48);
  return (SetCombineData_o *)v53;
}


int32_t SvtEquipCombineControl__GetTutorialOpenType(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return 38;
}


void SvtEquipCombineControl__InitInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v6; // x21
  __int64 v7; // x0
  BalanceConfig_c *v8; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v17; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CE8686 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9258/*"N0"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_12536/*"SUM_INFO"*/);
    byte_4CE8686 = 1;
  }
  this->fields.isExeCombine = 0;
  this->fields.isLimitUpMaterial = 0;
  *(_WORD *)&this->fields.isContainedRare = 0;
  SvtEquipCombineControl__SetExeBtnState(this, method);
  currentLvObj = this->fields.currentLvObj;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.increLvObj;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.increValObj;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = this->fields.getExpInfo;
  if ( !currentLvObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(currentLvObj, 0, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.currentLvLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increLvLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.increValLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.getSkillLb;
  if ( !currentLvObj )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)currentLvObj, (System_String_o *)StringLiteral_1/*""*/, 0);
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUM_INFO"*/, 0);
  v17 = 0;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v8 = BalanceConfig_TypeInfo;
  v9 = (Il2CppObject *)v7;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v8->static_fields->ServantCombineMax;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_64218220(v6, v9, v10, 0);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0);
  SvtEquipCombineControl__SetHaveQpInfo(this, v11);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_65685416(
                                               (int)this + 552,
                                               (System_String_o *)StringLiteral_9258/*"N0"*/,
                                               0);
  if ( !needQpLb )
    goto LABEL_20;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.needQpLb;
  if ( !currentLvObj )
    goto LABEL_20;
  v18.fields.r = 1.0;
  v18.fields.g = 1.0;
  v18.fields.b = 1.0;
  v18.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v18, 0);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v13);
  this->fields.selectMtSvtEqTbl = 0;
  sub_1C7BA8C(&this->fields.selectMtSvtEqTbl, 0);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v14);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_1C7BD40(currentLvObj, v3);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 0, v15);
}


void SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4CE8685 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8685 = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C7BD40(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
    *p_charaGraph = 0;
    sub_1C7BA8C(p_charaGraph, 0);
  }
}


void SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  System_Collections_Generic_Dictionary_long__bool__o *v7; // x21
  const MethodInfo *v8; // x1
  UILabel_o *preSelectBaseLb; // x20
  RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  __int64 *v11; // x8
  System_String_o *v12; // x21
  UILabel_o *autoRecommendedButtonLabel; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  MenuListControl_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CE8684 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2090/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C7BAE8(&StringLiteral_2089/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    sub_1C7BAE8(&StringLiteral_9264/*"NEED_QP_INFO"*/);
    sub_1C7BAE8(&StringLiteral_8831/*"MSG_PRESELECT_BASE_SVTEQ"*/);
    sub_1C7BAE8(&StringLiteral_10857/*"QP_TAKE"*/);
    byte_4CE8684 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  EventTutorialMaster__CheckTutorial(0, 38, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10857/*"QP_TAKE"*/, 0);
  if ( !haveQpTitleLb )
    goto LABEL_47;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9264/*"NEED_QP_INFO"*/, 0);
  if ( !needQpTitleLb )
    goto LABEL_47;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0;
  sub_1C7BA8C(&this->fields.selectMtSvtEqList, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v7 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v7,
      (const MethodInfo_34C18EC *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v7;
    sub_1C7BA8C(&this->fields.selectMtSvtEqTbl, v7);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_47;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_34C2468 *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v8);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)helpBtn, 0, 0);
  helpBtn = this->fields.materialBgObj;
  if ( !helpBtn )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  helpBtn = this->fields.baseSelectInfoLb;
  if ( !helpBtn )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  this->fields._targetType_k__BackingField = 0;
  if ( !helpBtn )
    goto LABEL_47;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8831/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_47;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0);
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v11 = &StringLiteral_2090/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v11 = &StringLiteral_2089/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
  v12 = (System_String_o *)*v11;
  autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get(v12, 0);
  if ( !autoRecommendedButtonLabel )
    goto LABEL_47;
  UILabel__set_text(autoRecommendedButtonLabel, (System_String_o *)helpBtn, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.autoSetAnnounceObj;
  if ( !helpBtn
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))helpBtn->klass[1]._1.element_class)(
          helpBtn,
          helpBtn->klass[1]._1.castClass,
          1.0),
        (helpBtn = (UnityEngine_GameObject_o *)this->fields.autoSetAnnounceObj) == 0)
    || (helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0)) == 0
    || (UnityEngine_GameObject__SetActive(helpBtn, 0, 0),
        this->fields.autoSetAnnounceCoroutine = 0,
        helpBtn = (UnityEngine_GameObject_o *)sub_1C7BA8C(&this->fields.autoSetAnnounceCoroutine, 0),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_47:
    sub_1C7BD40(helpBtn, v3);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      combineEventList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v16 )
        break;
      if ( !v20.fields._current )
        sub_1C7BD40(v16, v17);
      switch ( HIDWORD(v20.fields._current[1].klass) )
      {
        case 0x10:
          v18 = this->fields.menuListCtr;
          if ( !v18 )
            sub_1C7BD40(0, v17);
          goto LABEL_44;
        case 0x11:
          v18 = this->fields.menuListCtr;
          if ( !v18 )
            sub_1C7BD40(0, v17);
          goto LABEL_44;
        case 0x12:
          v18 = this->fields.menuListCtr;
          if ( !v18 )
            sub_1C7BD40(0, v17);
          goto LABEL_44;
        case 0x13:
          v18 = this->fields.menuListCtr;
          if ( !v18 )
            sub_1C7BD40(0, v17);
LABEL_44:
          MenuListControl__setBannerIcon(
            v18,
            this->fields.eventNoticeImg,
            (EventEntity_o *)v20.fields._current[5].klass,
            0);
          break;
        default:
          continue;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


// local variable allocation has failed, the output may be wrong!
bool SvtEquipCombineControl__IsLevelMax(
        SvtEquipCombineControl_o *this,
        int32_t combinedBaseTotalExp,
        int32_t baseExpType,
        const MethodInfo *method)
{
  void *baseData; // x0
  int32_t v8; // w22
  int32_t LevelMax; // w0
  int32_t v10; // w21
  int v11; // w8
  int32_t v12; // w8

  if ( (byte_4CE869A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CE869A = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
LABEL_18:
    sub_1C7BD40(baseData, *(_QWORD *)&combinedBaseTotalExp);
  v8 = *((_DWORD *)baseData + 64);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseData, 0);
  v10 = LevelMax;
  if ( v8 == LevelMax )
  {
    v11 = 0;
  }
  else if ( v8 >= LevelMax )
  {
LABEL_14:
    v11 = v10;
  }
  else
  {
    while ( 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      baseData = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantExpMaster___);
      if ( !baseData )
        goto LABEL_18;
      baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, baseExpType, v8, 0);
      if ( !baseData )
        goto LABEL_18;
      v12 = *((_DWORD *)baseData + 6);
      if ( v12 > combinedBaseTotalExp )
      {
        v11 = *((_DWORD *)baseData + 5);
        return v11 >= v10;
      }
      if ( v12 == combinedBaseTotalExp )
        break;
      if ( v10 == ++v8 )
        goto LABEL_14;
    }
    v11 = *((_DWORD *)baseData + 5) + 1;
  }
  return v11 >= v10;
}


bool SvtEquipCombineControl__IsMatchServantEquipType(
        SvtEquipCombineControl_o *this,
        ServantEntity_o *svtEntity,
        System_Collections_Generic_List_int__o *selectTypeList,
        const MethodInfo *method)
{
  if ( (byte_4CE8699 & 1) == 0 )
  {
    this = (SvtEquipCombineControl_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4CE8699 = 1;
  }
  if ( !svtEntity )
    goto LABEL_29;
  if ( ServantEntity__get_IsFriendShipSvtEquip(svtEntity, 0) )
    return 0;
  this = (SvtEquipCombineControl_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)selectTypeList, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( selectTypeList )
      return System_Collections_Generic_List_int___Contains(
               selectTypeList,
               5,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               0,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
          && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               6,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               1,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               2,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               3,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               4,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0);
LABEL_29:
    sub_1C7BD40(this, svtEntity);
  }
  return 1;
}


void SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  bool exists; // w0
  _QWORD *v6; // x8
  bool v7; // w20
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4CE868E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl_OnClickBase__);
    byte_4CE868E = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  v6 = Method_SvtEquipCombineControl_OnClickBase__;
  v7 = exists;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C7BB00(Method_SvtEquipCombineControl_OnClickBase__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1C7BD40(Instance, v4);
  CombineRootComponent__ShowBaseSvtEqList((CombineRootComponent_o *)Instance, 0);
}


void SvtEquipCombineControl__OnClickClearMaterialButton(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  SvtEqCombineListViewManager_o *svtEqListManager; // x0
  const MethodInfo *v7; // x1
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4CE8694 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
    byte_4CE8694 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickClearMaterialButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickClearMaterialButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__SvtEqCombineNullData(this, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtEqListManager = combineRootComponent->fields.svtEqListManager) == 0 )
    sub_1C7BD40(svtEqListManager, v7);
  SvtEqCombineListViewManager__ClearSelectedSvtList(svtEqListManager, v7);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v9);
  SvtEquipCombineControl__SetStateInfoMsg(this, 1, v10);
}


void SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4CE868F & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3780/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4CE868F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3780/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C7BD40(v3, v4);
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0,
    this->fields.selectMtSvtEqTbl,
    0);
}


void SvtEquipCombineControl__OnClickHelp(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineMenuControl__OnClickHelp((CombineMenuControl_o *)this, 0);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v3);
}


void SvtEquipCombineControl__OnClickMaterialSelectList(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4CE8693 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
    byte_4CE8693 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, v5);
  CombineRootComponent__ShowSvtEqMaterialList(combineRootComponent, 0);
}


void SvtEquipCombineControl__OnClickRecommendedButton(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  SvtEquipRecommenededConfigDialog_o *recommendedConfigDialog; // x20
  System_Action_bool__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CE8695 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_bool__TypeInfo);
    sub_1C7BAE8(&Method_SvtEquipCombineControl_OnClickRecommendedButton__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__);
    byte_4CE8695 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SvtEquipCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v5);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v7 = (System_Action_bool__o *)sub_1C7BD34(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__,
    0);
  if ( !recommendedConfigDialog )
    sub_1C7BD40(v8, v9);
  SvtEquipRecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v7, 0);
}


void SvtEquipCombineControl__SetBaseSvtEqCardImg(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x22
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  __int64 v7; // x1
  struct UICharaGraphTexture_o *TexturePrefab_41224016; // x0
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_4CE8689 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8689 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    TexturePrefab_41224016 = CharaGraphManager__CreateTexturePrefab_41224016(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0,
                               0);
    this->fields.charaGraph = TexturePrefab_41224016;
    sub_1C7BA8C(&this->fields.charaGraph, TexturePrefab_41224016);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_11;
    UICharaGraphTexture__SetCharacter_44444724(combineInfoComp, usrSvtData, 0, 0);
  }
  this->fields.baseData = usrSvtData;
  sub_1C7BA8C(&this->fields.baseData, usrSvtData);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_1C7BD40(combineInfoComp, v7);
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)combineInfoComp, this->fields.baseData, 0);
}


void SvtEquipCombineControl__SetExeBtnState(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  _BOOL4 isExeCombine; // w9
  UIWidget_o *combineBtnTxt; // x8
  UnityEngine_Behaviour_o *v7; // x19
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CE868D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CE868D = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  isExeCombine = this->fields.isExeCombine;
  combineBtnTxt = (UIWidget_o *)this->fields.combineBtnTxt;
  v7 = (UnityEngine_Behaviour_o *)combineBtnBg;
  if ( isExeCombine )
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
    sub_1C7BD40(combineBtnBg, method);
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


void SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20

  if ( (byte_4CE8687 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9258/*"N0"*/);
    byte_4CE8687 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65690592(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9258/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C7BD40(SelfUserGame, v4);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(
        SvtEquipCombineControl_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UICommonButton_o *recommendedButton; // x0
  UICommonButton_o *v6; // x21
  bool isSelectBase; // w8
  UserServantEntity_o *baseData; // x0
  UICommonButton_o *clearMaterialButton; // x21
  char v10; // w8

  recommendedButton = this->fields.recommendedButton;
  if ( isEnabled )
    v6 = recommendedButton;
  else
    v6 = 0;
  if ( !isEnabled )
  {
    isSelectBase = 0;
LABEL_9:
    if ( !recommendedButton )
      goto LABEL_18;
    goto LABEL_13;
  }
  isSelectBase = this->fields.isSelectBase;
  if ( !isSelectBase )
    goto LABEL_9;
  baseData = this->fields.baseData;
  if ( baseData )
    isSelectBase = !UserServantEntity__isLevelMax(baseData, 0);
  else
    isSelectBase = 0;
  recommendedButton = v6;
  if ( !v6 )
LABEL_18:
    sub_1C7BD40(recommendedButton, isEnabled);
LABEL_13:
  UICommonButton__SetButtonEnable(recommendedButton, isSelectBase, 1, 0);
  clearMaterialButton = this->fields.clearMaterialButton;
  if ( isEnabled )
  {
    recommendedButton = (UICommonButton_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)this->fields.selectMtSvtEqList,
                                              0);
    v10 = (unsigned __int8)recommendedButton ^ 1;
  }
  else
  {
    v10 = 0;
  }
  if ( !clearMaterialButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnable(clearMaterialButton, v10 & 1, 1, 0);
}


void SvtEquipCombineControl__SetMaterialToCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  SvtEqCombineListViewManager_o *svtEqListManager; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v10; // x2

  SvtEquipCombineControl__SetSvtEqCombineData(this, recommendedCombineData, method);
  SvtEquipCombineControl__SetStateInfoMsg(this, 2, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtEqListManager = combineRootComponent->fields.svtEqListManager) == 0 )
    sub_1C7BD40(svtEqListManager, v7);
  SvtEqCombineListViewManager__SetRecommendedSelectedMaterialList(
    svtEqListManager,
    this->fields.selectMtSvtEqList,
    recommendedCombineData,
    v8);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v10);
}


void SvtEquipCombineControl__SetRecommendedMaterial(
        SvtEquipCombineControl_o *this,
        bool isAutoSet,
        const MethodInfo *method)
{
  SvtEquipCombineControl___c__DisplayClass81_0_o *v5; // x21
  SvtEquipRecommenededConfigDialog_o *recommendedConfigDialog; // x0
  SetCombineData_o *v7; // x1
  const MethodInfo *v8; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  __int64 *v12; // x8
  System_Collections_IEnumerator_o *v13; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  Il2CppObject *v15; // x19
  System_String_o *v16; // x20
  SvtEquipCombineControl___c_c *v17; // x8
  System_Action_o *_9__81_1; // x22
  __int64 v19; // x21
  Il2CppObject *v20; // x23
  struct SvtEquipCombineControl___c_StaticFields *static_fields; // x0
  int32_t v22; // w8
  float v23; // s0
  CommonUI_o *v24; // x0
  System_String_o *v25; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v27; // x20
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  CommonConfirmDialog_ClickDelegate_o *v30; // x24
  Il2CppObject *v31; // x19

  if ( (byte_4CE8696 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__);
    sub_1C7BAE8(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__);
    sub_1C7BAE8(&SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
    sub_1C7BAE8(&SvtEquipCombineControl___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11053/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_11043/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C7BAE8(&StringLiteral_11062/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/);
    sub_1C7BAE8(&StringLiteral_11063/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11041/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_11042/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/);
    byte_4CE8696 = 1;
  }
  v5 = (SvtEquipCombineControl___c__DisplayClass81_0_o *)sub_1C7BD34(SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
  SvtEquipCombineControl___c__DisplayClass81_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_35;
  v5->fields.__4__this = this;
  sub_1C7BA8C(&v5->fields, this);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = SvtEquipCombineControl__GetRecommendedCombineData(this, v8);
  v5->fields.recommendedCombineData = RecommendedCombineData;
  sub_1C7BA8C(&v5->fields.recommendedCombineData, RecommendedCombineData);
  v7 = v5->fields.recommendedCombineData;
  if ( v7 )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        SvtEquipRecommenededConfigDialog__Close(recommendedConfigDialog, 0);
        SvtEquipCombineControl__SetMaterialToCombineData(this, v5->fields.recommendedCombineData, v11);
        return;
      }
LABEL_35:
      sub_1C7BD40(recommendedConfigDialog, v7);
    }
    if ( isAutoSet )
    {
      SvtEquipCombineControl__SetMaterialToCombineData(this, v7, v10);
      v12 = &StringLiteral_11043/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/;
      goto LABEL_15;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11063/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/, 0);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)v5,
      Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__,
      0);
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenConfirmDialog_31482460(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v27,
      v28,
      v29,
      v30,
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
        v12 = &StringLiteral_11041/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/;
LABEL_15:
        v13 = SvtEquipCombineControl__FadeAutoSetAnnounceLabel(this, (System_String_o *)*v12, v10);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v13, 0);
        this->fields.autoSetAnnounceCoroutine = started;
        sub_1C7BA8C(&this->fields.autoSetAnnounceCoroutine, started);
        return;
      }
      v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      recommendedConfigDialog = (SvtEquipRecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_11062/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/,
                                                                        0);
      v16 = (System_String_o *)recommendedConfigDialog;
      v17 = SvtEquipCombineControl___c_TypeInfo;
      if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
        v17 = SvtEquipCombineControl___c_TypeInfo;
      }
      _9__81_1 = v17->static_fields->__9__81_1;
      v19 = StringLiteral_1/*""*/;
      if ( !_9__81_1 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = SvtEquipCombineControl___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v17->static_fields->__9;
        _9__81_1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(_9__81_1, v20, Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__, 0);
        static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_1 = _9__81_1;
        recommendedConfigDialog = (SvtEquipRecommenededConfigDialog_o *)sub_1C7BA8C(&static_fields->__9__81_1, _9__81_1);
      }
      if ( !v15 )
        goto LABEL_35;
      v22 = 26;
      v23 = -2.0;
      v24 = (CommonUI_o *)v15;
      v25 = (System_String_o *)v19;
    }
    else
    {
      if ( isAutoSet )
      {
        v12 = &StringLiteral_11042/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/;
        goto LABEL_15;
      }
      v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11053/*"RECOMMENDED_NOT_HAVE_QP"*/, 0);
      _9__81_1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        _9__81_1,
        (Il2CppObject *)v5,
        Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__,
        0);
      if ( !v31 )
        goto LABEL_35;
      v23 = 0.0;
      v24 = (CommonUI_o *)v31;
      v25 = (System_String_o *)StringLiteral_1/*""*/;
      v22 = 28;
    }
    CommonUI__OpenNotificationDialog(v24, v25, v16, _9__81_1, -1, 0, 0, 0, 0, v22, 0, 0, 0, v23, 0, 0);
  }
}


void SvtEquipCombineControl__SetSelectMaterialEnable(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectAddGridObj; // x0

  selectAddGridObj = this->fields.selectAddGridObj;
  if ( !selectAddGridObj
    || (UnityEngine_GameObject__SetActive(selectAddGridObj, 1, 0),
        (selectAddGridObj = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)selectAddGridObj, this->fields.isSelectBase, 0),
        (selectAddGridObj = this->fields.materialBgObj) == 0)
    || (UnityEngine_GameObject__SetActive(selectAddGridObj, !this->fields.isSelectBase, 0),
        (selectAddGridObj = this->fields.baseSelectInfoLb) == 0) )
  {
    sub_1C7BD40(selectAddGridObj, method);
  }
  UnityEngine_GameObject__SetActive(selectAddGridObj, !this->fields.isSelectBase, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEquipCombineControl__SetStateInfoMsg(SvtEquipCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_4CE8691 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7473/*"INFO_MSG_SVTEQ_MATERIAL"*/);
    sub_1C7BAE8(&StringLiteral_7472/*"INFO_MSG_SVTEQ_BASE"*/);
    sub_1C7BAE8(&StringLiteral_5798/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C7BAE8(&StringLiteral_12240/*"SHORT_QP_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8691 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_25:
    sub_1C7BD40(detailInfoLb, *(_QWORD *)&state);
  }
  v8.fields.r = 0.0;
  v8.fields.a = 1.0;
  v8.fields.g = 0.87891;
  v8.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v8, 0);
  if ( v3 == 2 )
  {
    if ( this->fields.isExeCombine )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5798/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v9.fields.r = 1.0;
      v9.fields.g = 1.0;
      v9.fields.b = 1.0;
      v9.fields.a = 1.0;
      UIWidget__set_color(v6, v9, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12240/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7473/*"INFO_MSG_SVTEQ_MATERIAL"*/;
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
    v7 = &StringLiteral_7472/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v7, 0);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEquipCombineControl__SetSvtEqCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x28
  __int64 Instance; // x0
  __int64 lv; // x1
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  struct System_Int64_array *v9; // x8
  il2cpp_array_size_t max_length; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v12; // x21
  __int64 v13; // x0
  BalanceConfig_c *v14; // x8
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  struct UserServantEntity_o *baseData; // x8
  __int64 v20; // x20
  __int64 v21; // x23
  int32_t v22; // w26
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v24; // x24
  struct UserServantEntity_o *v25; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x20
  __int64 v27; // x23
  __int64 v28; // x25
  unsigned __int64 v29; // x26
  struct System_Int64_array *v30; // x8
  int32_t *v31; // x22
  int64_t v32; // x28
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v34; // w29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v36; // x23
  UnityEngine_Transform_o *v37; // x20
  __int64 v38; // x20
  __int64 v39; // x25
  __int64 v40; // x27
  int32_t v41; // w25
  __int64 v42; // x25
  __int64 v43; // x27
  UserServantEntity_o *v44; // x8
  __int64 v45; // x25
  __int64 v46; // x27
  int32_t v47; // w25
  UnityEngine_GameObject_o *v48; // x21
  bool v49; // w20
  __int64 v50; // x23
  __int64 v51; // x25
  __int64 v52; // x20
  __int64 v53; // x23
  int v54; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v56; // x23
  MaterialSvtInfo_o *v57; // x25
  MaterialSvtInfo_ClickDelegate_o *v58; // x27
  UserServantEntity_o *v59; // x8
  int32_t v60; // w26
  __int64 v61; // x20
  __int64 v62; // x23
  int32_t v63; // w0
  UILabel_o *basicExpLb; // x20
  int32_t v65; // w8
  Il2CppObject *v66; // x0
  UILabel_o *addTotalExpLb; // x20
  Il2CppObject *v68; // x0
  const MethodInfo *v69; // x2
  struct UserServantEntity_o *v70; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v72; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v77; // x25
  Il2CppObject *v78; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v81; // x20
  UserServantEntity_o *v82; // x1
  struct UserServantEntity_o *v83; // x8
  int32_t v84; // w8
  int32_t v85; // w8
  bool v86; // w20
  float v87; // s0 OVERLAPPED
  float v88; // s1
  float v89; // s2
  float v90; // s3
  const MethodInfo *v91; // x1
  __int64 v92; // [xsp+10h] [xbp-A0h]
  int32_t v93; // [xsp+18h] [xbp-98h]
  int32_t v94; // [xsp+1Ch] [xbp-94h]
  __int64 v95; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **v97; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4CE868A & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C7BAE8(&CombineSvtData_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_25348/*"{0:N0}"*/);
    sub_1C7BAE8(&StringLiteral_9258/*"N0"*/);
    sub_1C7BAE8(&StringLiteral_7454/*"INCREMENT_SVTLEVEL"*/);
    sub_1C7BAE8(&StringLiteral_12536/*"SUM_INFO"*/);
    byte_4CE868A = 1;
  }
  *(_QWORD *)lateExp = 0;
  *(_QWORD *)afterAtk = 0;
  SvtEquipCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  *(_WORD *)&this->fields.isContainedRare = 0;
  this->fields.isLimitUpMaterial = 0;
  if ( !v3 )
    goto LABEL_103;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  p_selectMtSvtEqList = &this->fields.selectMtSvtEqList;
  this->fields.selectMtSvtEqList = materialUsrSvtIdList;
  sub_1C7BA8C(&this->fields.selectMtSvtEqList, materialUsrSvtIdList);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  Instance = sub_1C7BA8C(&this->fields.selectMtSvtEqTbl, svtEqMaterialList);
  v9 = v3->fields.materialUsrSvtIdList;
  if ( !v9 )
    goto LABEL_103;
  max_length = v9->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SUM_INFO"*/, 0);
  increAmount = max_length;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  v14 = BalanceConfig_TypeInfo;
  v15 = (Il2CppObject *)v13;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v14->static_fields->ServantCombineMax;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = (__int64)System_String__Format_64218220(v12, v15, v16, 0);
  if ( !selectSumLb )
    goto LABEL_103;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  Instance = sub_1C7BA8C(&this->fields.baseData, baseSvtData);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_103;
  v21 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v102.fields.currentCryptoKey = v21;
  *(_QWORD *)&v102.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v102, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)max_length < 1 )
    return;
  v24 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v25 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_103;
  v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v28 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v28;
  *(_QWORD *)&v103.fields.fakeValue = v27;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v103, 0);
  if ( !v26 )
    goto LABEL_103;
  v94 = v22;
  v97 = &this->fields.baseData;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v26,
                        Instance,
                        (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_103;
  v95 = (unsigned int)max_length;
  v29 = 0;
  v92 = Instance;
  v93 = *(_DWORD *)(Instance + 88);
  do
  {
    v30 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_103;
    if ( v29 >= LODWORD(v30->max_length) )
      sub_1C7BD48(Instance);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_103;
    v31 = (int32_t *)v3;
    v32 = v30->m_Items[v29];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v32,
                 (const MethodInfo_34C2220 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_103;
    svtFaceInfo = this->fields.svtFaceInfo;
    v34 = Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Instance )
      goto LABEL_103;
    v36 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    v37 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4CE7E59 )
    {
      Instance = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    if ( !v37 )
      goto LABEL_103;
    UnityEngine_Transform__set_localPosition(v37, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v36, 0);
    if ( !Instance )
      goto LABEL_103;
    v110.fields.x = 0.5;
    v110.fields.y = 0.5;
    v110.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v110, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_103;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v32,
                          (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_103;
    v38 = Instance;
    v40 = *(_QWORD *)(Instance + 80);
    v39 = *(_QWORD *)(Instance + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v104.fields.currentCryptoKey = v40;
    *(_QWORD *)&v104.fields.fakeValue = v39;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v104, 0);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v38 + 96),
                 0);
    if ( !v24 )
      goto LABEL_103;
    Instance = (__int64)ServantLimitMaster__GetEntity(v24, v41, Instance, 0);
    if ( !Instance )
      goto LABEL_103;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v43 = *(_QWORD *)(v38 + 96);
    v42 = *(_QWORD *)(v38 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v105.fields.currentCryptoKey = v43;
    *(_QWORD *)&v105.fields.fakeValue = v42;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v105, 0);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v44 = *v97;
    if ( !*v97 )
      goto LABEL_103;
    v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v106.fields.currentCryptoKey = v46;
    *(_QWORD *)&v106.fields.fakeValue = v45;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v106, 0);
    if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v38 + 80),
                  0) )
    {
      v48 = v36;
      Instance = (__int64)*v97;
      if ( !*v97 )
        goto LABEL_103;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0) )
      {
        v49 = 0;
      }
      else
      {
        v51 = *(_QWORD *)(v38 + 96);
        v50 = *(_QWORD *)(v38 + 104);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v107.fields.currentCryptoKey = v51;
        *(_QWORD *)&v107.fields.fakeValue = v50;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v107, 0) < 1 )
        {
          v54 = 1;
        }
        else
        {
          v53 = *(_QWORD *)(v38 + 96);
          v52 = *(_QWORD *)(v38 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v108.fields.currentCryptoKey = v53;
          *(_QWORD *)&v108.fields.fakeValue = v52;
          v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v108, 0) + 1;
          this->fields.isLimitUpMaterial = 1;
        }
        v36 = v48;
        v94 += v54;
        v49 = v94 > v93;
      }
    }
    else
    {
      v49 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v36,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v56 = this->fields.baseData;
    v57 = (MaterialSvtInfo_o *)Component_object;
    v58 = (MaterialSvtInfo_ClickDelegate_o *)sub_1C7BD34(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(
      v58,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0);
    if ( !v57 )
      goto LABEL_103;
    MaterialSvtInfo__setMaterialSvtInfo_31824892(v57, v29++, v56, v32, 1, v49, v34 & 1, v58, 0);
    v3 = (SetCombineData_o *)v31;
  }
  while ( v95 != v29 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_103;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0);
  v59 = *v97;
  v60 = v94 >= v93 ? v93 : v94;
  if ( !v59 )
    goto LABEL_103;
  v62 = *(_QWORD *)&v59->fields.svtId.fields.currentCryptoKey;
  v61 = *(_QWORD *)&v59->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v62;
  *(_QWORD *)&v109.fields.fakeValue = v61;
  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v109, 0);
  Instance = (__int64)ServantLimitMaster__GetEntity(v24, v63, v60, 0);
  if ( !Instance )
    goto LABEL_103;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v65 = v31[8];
  this->fields.getExpVal = v31[9] + v65;
  increAmount = v65;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v66, 0);
  if ( !basicExpLb )
    goto LABEL_103;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v31[9];
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25348/*"{0:N0}"*/, v68, 0);
  if ( !addTotalExpLb )
    goto LABEL_103;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0);
  v70 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v92 + 132);
  if ( !v70 )
    goto LABEL_103;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v70->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v70->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v69) )
      LODWORD(lv) = this->fields.checkLv;
  }
  Instance = (__int64)this->fields.currentLvObj;
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.increLvObj;
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.increValObj;
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v72 = this->fields.baseData;
  if ( !v72 )
    goto LABEL_103;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v72 + 256, 0);
  if ( !currentLvLb )
    goto LABEL_103;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = (__int64)System_Int32__ToString((int)this + 528, 0);
  if ( !increLvLb )
    goto LABEL_103;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0);
  if ( !*v97 )
    goto LABEL_103;
  this->fields.increAmount = this->fields.increLv - (*v97)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_7454/*"INCREMENT_SVTLEVEL"*/, 0);
  increAmount = this->fields.increAmount;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount);
  Instance = (__int64)System_String__Format(v77, v78, 0);
  if ( !increValLb )
    goto LABEL_103;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *v97,
                        *p_increLv,
                        v60,
                        0);
  if ( !getSkillLb )
    goto LABEL_103;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v31[7];
  Instance = (__int64)System_Int32__ToString_65685416((int)this + 552, (System_String_o *)StringLiteral_9258/*"N0"*/, 0);
  if ( !needQpLb )
    goto LABEL_103;
  UILabel__set_text(needQpLb, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)Instance,
    &afterAtk[1],
    afterAtk,
    *v97,
    *p_increLv,
    0);
  afterAtk[1] += v31[12];
  afterAtk[0] += v31[13];
  v81 = sub_1C7BD34(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v81, 0);
  if ( !v81 )
    goto LABEL_103;
  v82 = *v97;
  *(_QWORD *)(v81 + 16) = *v97;
  Instance = sub_1C7BA8C(v81 + 16, v82);
  *(_DWORD *)(v81 + 24) = this->fields.increLv;
  *(_DWORD *)(v81 + 28) = v60;
  *(_DWORD *)(v81 + 32) = this->fields.afterMaxLv;
  v83 = this->fields.baseData;
  if ( !v83 )
    goto LABEL_103;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v83->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0);
  *(_DWORD *)(v81 + 36) = lateExp[1];
  v84 = afterAtk[1];
  *(_DWORD *)(v81 + 40) = lateExp[0];
  *(_DWORD *)(v81 + 44) = v84;
  v85 = afterAtk[0];
  *(_DWORD *)(v81 + 48) = v31[12];
  *(_DWORD *)(v81 + 52) = v85;
  *(_DWORD *)(v81 + 56) = v31[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_103;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v81, 0);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v87 = 1.0;
      v86 = 1;
      v88 = 1.0;
      goto LABEL_101;
    }
LABEL_103:
    sub_1C7BD40(Instance, lv);
  }
  if ( !Instance )
    goto LABEL_103;
  v86 = 0;
  v87 = 1.0;
  v88 = 0.0;
LABEL_101:
  v89 = v88;
  v90 = v87;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v87, 0);
  this->fields.isExeCombine = v86;
  SvtEquipCombineControl__SetExeBtnState(this, v91);
}


void SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v5; // x1
  int64_t klass; // x21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26

  if ( (byte_4CE868C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3780/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4CE868C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3780/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (klass = (int64_t)SelfUserGame[4].klass,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        SelfUserGame = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v5),
        !exeCombineDlg) )
  {
    sub_1C7BD40(SelfUserGame, v5);
  }
  SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
    exeCombineDlg,
    baseData,
    selectMtSvtEqTbl,
    v3,
    spendQpVal,
    klass,
    isContainedRare,
    SelfUserGame,
    0);
}


void SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *autoSetAnnounceCoroutine; // x1
  UnityEngine_Component_o *autoSetAnnounceObj; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CE869C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_TryGetComponent_TweenAlpha___);
    byte_4CE869C = 1;
  }
  component = 0;
  autoSetAnnounceCoroutine = this->fields.autoSetAnnounceCoroutine;
  if ( autoSetAnnounceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71855960((UnityEngine_MonoBehaviour_o *)this, autoSetAnnounceCoroutine, 0);
    this->fields.autoSetAnnounceCoroutine = 0;
    sub_1C7BA8C(&this->fields.autoSetAnnounceCoroutine, 0);
  }
  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj )
    goto LABEL_12;
  if ( UnityEngine_Component__TryGetComponent_object_(
         autoSetAnnounceObj,
         &component,
         (const MethodInfo_3167CC0 *)Method_UnityEngine_Component_TryGetComponent_TweenAlpha___) )
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
    sub_1C7BD40(autoSetAnnounceObj, autoSetAnnounceCoroutine);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


void SvtEquipCombineControl__SvtEqCombineNullData(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v6; // x2

  SvtEquipCombineControl__DestroyGrid(this, method);
  SvtEquipCombineControl__InitInfo(this, v3);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    sub_1C7BD40(0, v4);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v6);
}


void SvtEquipCombineControl___FadeAutoSetAnnounceLabel_b__87_0(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *autoSetAnnounceObj; // x0

  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj
    || (autoSetAnnounceObj = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(autoSetAnnounceObj, 0)) == 0 )
  {
    sub_1C7BD40(autoSetAnnounceObj, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


void SvtEquipCombineControl___OnClickRecommendedButton_b__80_0(
        SvtEquipCombineControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  __int64 *v6; // x8
  System_String_o *v7; // x22
  UILabel_o *autoRecommendedButtonLabel; // x21
  System_String_o *recommendedConfigDialog; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4CE869F & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2090/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C7BAE8(&StringLiteral_2089/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    byte_4CE869F = 1;
  }
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v6 = &StringLiteral_2090/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v6 = &StringLiteral_2089/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
  v7 = (System_String_o *)*v6;
  autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  recommendedConfigDialog = LocalizationManager__Get(v7, 0);
  if ( !autoRecommendedButtonLabel )
    goto LABEL_16;
  UILabel__set_text(autoRecommendedButtonLabel, recommendedConfigDialog, 0);
  if ( isDecide )
  {
    SvtEquipCombineControl__SetRecommendedMaterial(this, 0, v11);
    return;
  }
  recommendedConfigDialog = (System_String_o *)this->fields.recommendedConfigDialog;
  if ( !recommendedConfigDialog )
LABEL_16:
    sub_1C7BD40(recommendedConfigDialog, v10);
  SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)recommendedConfigDialog, 0);
}


void SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87___ctor(
        SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87__MoveNext(
        SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *this,
        const MethodInfo *method)
{
  SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *v2; // x19
  int32_t _1__state; // w8
  struct SvtEquipCombineControl_o *_4__this; // x20
  UILabel_o *autoSetAnnounceLabel; // x21
  System_String_o *localizationKey; // x22
  struct CombineRootComponent_o *v7; // x8
  float autoSetAnnounceWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct CombineRootComponent_o *combineRootComponent; // x8
  UITweener_o *v13; // x19
  EventDelegate_Callback_o *v14; // x21

  v2 = this;
  if ( (byte_4CE86AC & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_b__87_0__);
    this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)sub_1C7BAE8(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CE86AC = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)_4__this->fields.autoSetAnnounceObj;
    if ( !this )
      goto LABEL_20;
    this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
    combineRootComponent = _4__this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_20;
    v13 = (UITweener_o *)TweenAlpha__Begin(
                           (UnityEngine_GameObject_o *)this,
                           combineRootComponent->fields.autoSetAnnounceFadeTime,
                           0.0,
                           0);
    v14 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v14,
      (Il2CppObject *)_4__this,
      Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_b__87_0__,
      0);
    if ( !v13 )
      goto LABEL_20;
    UITweener__SetOnFinished(v13, v14, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      autoSetAnnounceLabel = _4__this->fields.autoSetAnnounceLabel;
      localizationKey = v2->fields.localizationKey;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)LocalizationManager__Get(localizationKey, 0);
      if ( autoSetAnnounceLabel )
      {
        UILabel__set_text(autoSetAnnounceLabel, (System_String_o *)this, 0);
        this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)_4__this->fields.autoSetAnnounceObj;
        if ( this )
        {
          this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)_4__this->fields.autoSetAnnounceObj;
            if ( this )
            {
              this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)((__int64 (__fastcall *)(SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
                                                                                   this,
                                                                                   this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
                                                                                   1.0);
              v7 = _4__this->fields.combineRootComponent;
              if ( v7 )
              {
                autoSetAnnounceWaitTime = v7->fields.autoSetAnnounceWaitTime;
                v9 = (UnityEngine_WaitForSeconds_o *)sub_1C7BD34(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v9, autoSetAnnounceWaitTime, 0);
                v2->fields.__2__current = (Il2CppObject *)v9;
                p__2__current = &v2->fields.__2__current;
                sub_1C7BA8C(p__2__current, v9);
                result = 1;
                *((_DWORD *)p__2__current - 2) = 1;
                return result;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C7BD40(this, method);
  }
  return 0;
}


Il2CppObject *SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87__System_Collections_IEnumerator_Reset(
        SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87__System_Collections_IEnumerator_get_Current(
        SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87__System_IDisposable_Dispose(
        SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *this,
        const MethodInfo *method)
{
  ;
}


void SvtEquipCombineControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE86A0 & 1) == 0 )
  {
    sub_1C7BAE8(&SvtEquipCombineControl___c_TypeInfo);
    byte_4CE86A0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SvtEquipCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEquipCombineControl___c_TypeInfo->static_fields->__9 = (struct SvtEquipCombineControl___c_o *)v1;
  sub_1C7BA8C(SvtEquipCombineControl___c_TypeInfo->static_fields, v1);
}


void SvtEquipCombineControl___c___ctor(SvtEquipCombineControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_0(
        SvtEquipCombineControl___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


EquipTargetInfo_o *SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_1(
        SvtEquipCombineControl___c_o *this,
        UserServantLeaderEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.equipTarget1;
}


UserServantEntity_o *SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_10(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4CE86A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4CE86A9 = 1;
  }
  return key;
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_2(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__return_ptr retstr,
        SvtEquipCombineControl___c_o *this,
        EquipTargetInfo_o *y,
        const MethodInfo *method)
{
  __int128 v4; // q0

  if ( !y )
    sub_1C7BD40(this, 0);
  v4 = *(_OWORD *)&y->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&retstr->fields.currentCryptoKey = *(_OWORD *)&y->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&retstr->fields.fakeValue = v4;
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)this;
}


int32_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_3(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4CE86A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Value__);
    byte_4CE86A2 = 1;
  }
  return value;
}


int32_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_4(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4CE86A3 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4CE86A3 = 1;
  }
  if ( !key )
    sub_1C7BD40(this, x.fields.key);
  return UserServantEntity__getRarity(key, 0);
}


int32_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_5(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  key = x.fields.key;
  if ( (byte_4CE86A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE86A4 = 1;
  }
  if ( !key )
    sub_1C7BD40(this, x.fields.key);
  v5 = *(_QWORD *)&key->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&key->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v7, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_6(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4CE86A5 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4CE86A5 = 1;
  }
  if ( !key )
    sub_1C7BD40(this, x.fields.key);
  return UserServantEntity__getLimitCount(key, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_7(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4CE86A6 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4CE86A6 = 1;
  }
  if ( !key )
    sub_1C7BD40(this, x.fields.key);
  return key->fields.lv;
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_8(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4CE86A7 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4CE86A7 = 1;
  }
  if ( !key )
    sub_1C7BD40(this, x.fields.key);
  return key->fields.exp;
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_9(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  key = x.fields.key;
  if ( (byte_4CE86A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CE86A8 = 1;
  }
  if ( !key )
    sub_1C7BD40(this, x.fields.key);
  v4 = *(_OWORD *)&key->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&key->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v6, 0);
}


void SvtEquipCombineControl___c___SetRecommendedMaterial_b__81_1(
        SvtEquipCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CE86A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE86A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void SvtEquipCombineControl___c__DisplayClass81_0___ctor(
        SvtEquipCombineControl___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtEquipCombineControl___c__DisplayClass81_0___SetRecommendedMaterial_b__0(
        SvtEquipCombineControl___c__DisplayClass81_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  struct SvtEquipCombineControl_o *_4__this; // x8

  if ( (byte_4CE86AA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE86AA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)Instance, v6);
        Instance = (CommonUI_o *)this->fields.__4__this;
        if ( Instance )
        {
          SvtEquipCombineControl__SetMaterialToCombineData(
            (SvtEquipCombineControl_o *)Instance,
            this->fields.recommendedCombineData,
            0);
          return;
        }
      }
    }
LABEL_10:
    sub_1C7BD40(Instance, v6);
  }
}


void SvtEquipCombineControl___c__DisplayClass81_0___SetRecommendedMaterial_b__2(
        SvtEquipCombineControl___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  struct SvtEquipCombineControl_o *_4__this; // x8

  if ( (byte_4CE86AB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE86AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)Instance, v4);
}