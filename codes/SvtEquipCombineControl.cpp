void SvtEquipCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C31B35 & 1) == 0 )
  {
    sub_1C32C20(&SvtEquipCombineControl_TypeInfo);
    byte_4C31B35 = 1;
  }
  SvtEquipCombineControl_TypeInfo->static_fields->MaxSelectNum = 20;
}


void SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C31B34 & 1) == 0 )
  {
    sub_1C32C20(&CombineMenuControl_TypeInfo);
    byte_4C31B34 = 1;
  }
  if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0);
}


bool SvtEquipCombineControl__CheckIncrementLv(SvtEquipCombineControl_o *this, int32_t lv, const MethodInfo *method)
{
  int afterMaxLv; // w8
  void *Instance; // x0
  int32_t v7; // w8
  int32_t totalExp; // w9
  bool result; // w0

  if ( (byte_4C31B22 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31B22 = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    v7 = *((_DWORD *)Instance + 6);
    totalExp = this->fields.totalExp;
    if ( v7 <= totalExp )
    {
      if ( v7 != totalExp )
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

  if ( (byte_4C31B1F & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31B1F = 1;
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
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v12, 0);
      v8 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v11.fields.fakeValue = v8;
      if ( v7 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v11, 0) )
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
  sub_1C32BC4(&this->fields.baseUserServantEntity, selectBase);
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

  if ( (byte_4C31B27 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31B27 = 1;
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
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C32E7C(selectGrid);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0;
  sub_1C32BC4(&this->fields.selectMtSvtEqList, 0);
}


System_Collections_IEnumerator_o *SvtEquipCombineControl__FadeAutoSetAnnounceLabel(
        SvtEquipCombineControl_o *this,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C31B32 & 1) == 0 )
  {
    sub_1C32C20(&SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
    byte_4C31B32 = 1;
  }
  v5 = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)sub_1C32E6C(SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
  SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87___ctor(v5, 0, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.__4__this = this;
  sub_1C32BC4(&v5->fields.__4__this, this);
  v5->fields.localizationKey = localizationKey;
  sub_1C32BC4(&v5->fields.localizationKey, localizationKey);
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

  if ( (byte_4C31B29 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8287/*"LIMIT_UP_MATERIAL_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_8270/*"LIMIT_BOTH_MSG"*/);
    sub_1C32C20(&StringLiteral_8285/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/);
    byte_4C31B29 = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8270/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8285/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_8287/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
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
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x21
  UserServantEntity_array *ServantEquipList; // x22
  System_Collections_Generic_Dictionary_object__int__o *v6; // x19
  struct UserServantEntity_o *baseData; // x8
  int64_t v8; // x23
  System_Collections_Generic_List_int__o *v9; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x24
  SvtEquipCombineControl___c_c *v11; // x0
  System_Func_T__TResult__o *_9__83_0; // x25
  Il2CppObject *v13; // x26
  struct SvtEquipCombineControl___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x24
  Il2CppObject *v16; // x28
  int64_t v17; // x8
  SvtEquipCombineControl___c_c *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x23
  System_Func_object__object__o *_9__83_1; // x24
  Il2CppObject *v21; // x25
  struct SvtEquipCombineControl___c_StaticFields *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  SvtEquipCombineControl___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x23
  System_Func_T__TResult__o *_9__83_2; // x24
  Il2CppObject *v28; // x25
  struct SvtEquipCombineControl___c_StaticFields *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  il2cpp_array_size_t max_length; // x8
  int v32; // w24
  int v33; // w23
  UserServantEntity_o *v34; // x25
  __int64 v35; // x26
  __int64 v36; // x27
  Il2CppObject *Entity; // x0
  __int128 v38; // q0
  ServantEntity_o *v39; // x27
  int64_t v40; // x26
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q0
  const MethodInfo *v43; // x3
  int32_t Rarity; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // x0
  __int64 v46; // x26
  int32_t v47; // w26
  Il2CppObject *v48; // x1
  int32_t v49; // w2
  const MethodInfo_3450098 *v50; // x3
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

  if ( (byte_4C31B2E & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantLeaderMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_ObscuredLong___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C32C20(&System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    sub_1C32C20(&System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    sub_1C32C20(&System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    sub_1C32C20(&System_Func_int__Rarity_TYPE__TypeInfo);
    sub_1C32C20(&System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ObscuredLong__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor___78036184);
    sub_1C32C20(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__);
    sub_1C32C20(&SvtEquipCombineControl___c_TypeInfo);
    byte_4C31B2E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_150;
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)ConfigSaveData;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v6 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v6,
    (const MethodInfo_344F6E4 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
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
  v8 = ConfigSaveData;
  v9 = *(System_Collections_Generic_List_int__o **)(ConfigSaveData + 16);
  v10 = *(System_Collections_Generic_IEnumerable_TSource__o **)(ConfigSaveData + 24);
  v11 = SvtEquipCombineControl___c_TypeInfo;
  selectTypeList = v9;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v11 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_0 = (System_Func_T__TResult__o *)v11->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = SvtEquipCombineControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__83_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__Rarity_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__83_0,
      v13,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__,
      0);
    static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_int__Rarity_TYPE__o *)_9__83_0;
    sub_1C32BC4(&static_fields->__9__83_0, _9__83_0);
  }
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                         v10,
                                                         (System_Func_TSource__TResult__o *)_9__83_0,
                                                         (const MethodInfo_3110A9C *)Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
  self = (System_Collections_ICollection_o *)sub_1C32E6C(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58185880(
    (System_Collections_Generic_List_T__o *)self,
    v15,
    (const MethodInfo_377D898 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor___78036184);
  v108 = *(System_Collections_Generic_List_int__o **)(v8 + 32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v16 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserDeckMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantLeaderMaster___);
  if ( !ConfigSaveData )
    goto LABEL_150;
  v17 = ConfigSaveData;
  v18 = SvtEquipCombineControl___c_TypeInfo;
  v19 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 40);
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v18 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_1 = (System_Func_object__object__o *)v18->static_fields->__9__83_1;
  if ( !_9__83_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = SvtEquipCombineControl___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__83_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    System_Func_object__object____ctor(
      _9__83_1,
      v21,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__,
      0);
    v22 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v22->__9__83_1 = (struct System_Func_UserServantLeaderEntity__EquipTargetInfo__o *)_9__83_1;
    sub_1C32BC4(&v22->__9__83_1, _9__83_1);
  }
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v19,
                                                         (System_Func_TSource__TResult__o *)_9__83_1,
                                                         (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
  v24 = BasicHelper__ExcludeNull_object_(
          v23,
          (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v25 = SvtEquipCombineControl___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v25 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_2 = (System_Func_T__TResult__o *)v25->static_fields->__9__83_2;
  if ( !_9__83_2 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = SvtEquipCombineControl___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__83_2 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    System_Func_object__ObscuredLong____ctor(
      _9__83_2,
      v28,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__,
      0);
    v29 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v29->__9__83_2 = (struct System_Func_EquipTargetInfo__ObscuredLong__o *)_9__83_2;
    sub_1C32BC4(&v29->__9__83_2, _9__83_2);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__ObscuredLong_(
                                                               v26,
                                                               (System_Func_TSource__TResult__o *)_9__83_2,
                                                               (const MethodInfo_3114114 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
  v113 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_ObscuredLong_(
                                                   v30,
                                                   (const MethodInfo_31217A4 *)Method_System_Linq_Enumerable_ToList_ObscuredLong___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v112 = (UserRecommendSupportMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v111 = (UserServantGrandMaster_o *)ConfigSaveData;
  if ( !ServantEquipList )
    goto LABEL_150;
  max_length = ServantEquipList->max_length;
  v32 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      v34 = ServantEquipList->m_Items[v33];
      if ( !v34 )
        goto LABEL_150;
      v36 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v118.fields.currentCryptoKey = v36;
      *(_QWORD *)&v118.fields.fakeValue = v35;
      ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v118, 0);
      if ( !v4 )
        goto LABEL_150;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v4,
                 ConfigSaveData,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v38 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
      v39 = (ServantEntity_o *)Entity;
      *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v117.fields.fakeValue = v38;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v116 = v117;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v116, 0);
      ConfigSaveData = UserServantEntity__IsChoice(v34, 0);
      if ( (ConfigSaveData & 1) == 0 )
      {
        ConfigSaveData = UserServantEntity__IsLock(v34, 0);
        if ( (ConfigSaveData & 1) == 0 )
        {
          v41 = this->fields.baseData;
          if ( !v41 )
            goto LABEL_150;
          v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
          *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v117.fields.fakeValue = v42;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v115 = v117;
          ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v115, 0);
          if ( ConfigSaveData != v40 )
          {
            if ( !v16 )
              goto LABEL_150;
            ConfigSaveData = UserDeckMaster__IsEquip((UserDeckMaster_o *)v16, v40, 0);
            if ( (ConfigSaveData & 1) == 0 )
            {
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v117, v40, 0);
              ConfigSaveData = (int64_t)v113;
              if ( !v113 )
                goto LABEL_150;
              ConfigSaveData = System_Collections_Generic_List_ObscuredLong___Contains(
                                 v113,
                                 &v117,
                                 (const MethodInfo_379DDB0 *)Method_System_Collections_Generic_List_ObscuredLong__Contains__);
              if ( (ConfigSaveData & 1) == 0 )
              {
                ConfigSaveData = (int64_t)v112;
                if ( !v112 )
                  goto LABEL_150;
                ConfigSaveData = UserRecommendSupportMaster__IsSettingServant(v112, v40, 1, 0);
                if ( (ConfigSaveData & 1) == 0 )
                {
                  ConfigSaveData = (int64_t)v111;
                  if ( !v111 )
                    goto LABEL_150;
                  ConfigSaveData = UserServantGrandMaster__IsSettingEquip(v111, v40, 0);
                  if ( (ConfigSaveData & 1) == 0 )
                  {
                    ConfigSaveData = SvtEquipCombineControl__IsMatchServantEquipType(
                                       (SvtEquipCombineControl_o *)ConfigSaveData,
                                       v39,
                                       selectTypeList,
                                       v43);
                    if ( (ConfigSaveData & 1) != 0 )
                    {
                      ConfigSaveData = BasicHelper__IsNullOrEmpty(self, 0);
                      if ( (ConfigSaveData & 1) != 0 )
                        goto LABEL_62;
                      Rarity = UserServantEntity__getRarity(v34, 0);
                      ConfigSaveData = (int64_t)self;
                      if ( !self )
                        goto LABEL_150;
                      ConfigSaveData = System_Collections_Generic_List_Int32Enum___Contains(
                                         (System_Collections_Generic_List_T__o *)self,
                                         Rarity,
                                         (const MethodInfo_377E33C *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
                      if ( (ConfigSaveData & 1) != 0 )
                      {
LABEL_62:
                        if ( !v39 )
                          goto LABEL_150;
                        if ( ServantEntity__get_IsSvtEquipExp(v39, 0)
                          || !v34->fields.exp
                          && UserServantEntity__getLimitCntMax(v34, 0)
                          && !ServantEntity__get_IsChocolateSvtEquip(v39, 0) )
                        {
                          ConfigSaveData = (int64_t)v108;
                          if ( !v108 )
                            goto LABEL_150;
                          if ( !System_Collections_Generic_List_int___Contains(
                                  v108,
                                  1,
                                  (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
                            || (ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                                   v108,
                                                   0,
                                                   (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__),
                                (ConfigSaveData & 1) != 0) )
                          {
                            v46 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
                            *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              value = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              *(_QWORD *)&v45.fields.fakeValue = value;
                            }
                            *(_QWORD *)&v45.fields.currentCryptoKey = v46;
                            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v45, 0);
                            *(_QWORD *)&v119.fields.fakeValue = v106;
                            *(_QWORD *)&v119.fields.currentCryptoKey = v107;
                            if ( v47 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v119, 0) )
                            {
                              ConfigSaveData = (int64_t)v6;
                              if ( !v6 )
                                goto LABEL_150;
                              v48 = (Il2CppObject *)v34;
                              v49 = 0;
                              v50 = (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                              goto LABEL_94;
                            }
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp(v39, 0);
                            if ( !v6 )
                              goto LABEL_150;
                            v50 = (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                            if ( (ConfigSaveData & 1) != 0 )
                              v49 = 20;
                            else
                              v49 = 40;
LABEL_92:
                            ConfigSaveData = (int64_t)v6;
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
                                 (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
                            || (ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                                   v108,
                                                   0,
                                                   (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__),
                                (ConfigSaveData & 1) == 0) )
                          {
                            v52 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
                            *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              valuea = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              *(_QWORD *)&v51.fields.fakeValue = valuea;
                            }
                            *(_QWORD *)&v51.fields.currentCryptoKey = v52;
                            v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v51, 0);
                            *(_QWORD *)&v120.fields.fakeValue = v106;
                            *(_QWORD *)&v120.fields.currentCryptoKey = v107;
                            if ( v53 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v120, 0) )
                            {
                              ConfigSaveData = (int64_t)v6;
                              if ( !v6 )
                                goto LABEL_150;
                              v49 = 10;
                              v50 = (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
LABEL_93:
                              v48 = (Il2CppObject *)v34;
LABEL_94:
                              System_Collections_Generic_Dictionary_object__int___Add(
                                (System_Collections_Generic_Dictionary_object__int__o *)ConfigSaveData,
                                v48,
                                v49,
                                v50);
                              goto LABEL_95;
                            }
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp(v39, 0);
                            if ( !v6 )
                              goto LABEL_150;
                            v50 = (const MethodInfo_3450098 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
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
      if ( v32 == v33 )
        break;
      if ( (unsigned int)++v33 >= LODWORD(ServantEquipList->max_length) )
        sub_1C32E84(ConfigSaveData);
    }
  }
  if ( !v6 )
LABEL_150:
    sub_1C32E7C(ConfigSaveData);
  if ( !System_Collections_Generic_Dictionary_object__int___get_Count(
          v6,
          (const MethodInfo_344FD68 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__) )
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
    _9__83_3 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_3,
      v56,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__,
      0);
    v57 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v57->__9__83_3 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_3;
    sub_1C32BC4(&v57->__9__83_3, _9__83_3);
  }
  v58 = System_Linq_Enumerable__OrderBy_KeyValuePair_object__int___int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v6,
          (System_Func_TSource__TKey__o *)_9__83_3,
          (const MethodInfo_310C850 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
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
    _9__83_4 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_4,
      v62,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__,
      0);
    v63 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v63->__9__83_4 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_4;
    sub_1C32BC4(&v63->__9__83_4, _9__83_4);
  }
  v64 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___int_(
          v60,
          (System_Func_TSource__TKey__o *)_9__83_4,
          (const MethodInfo_311B65C *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
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
    _9__83_5 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_5,
      v68,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__,
      0);
    v69 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v69->__9__83_5 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_5;
    sub_1C32BC4(&v69->__9__83_5, _9__83_5);
  }
  v70 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___int_(
          v66,
          (System_Func_TSource__TKey__o *)_9__83_5,
          (const MethodInfo_311BFEC *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
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
    _9__83_6 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_6,
      v74,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__,
      0);
    v75 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v75->__9__83_6 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_6;
    sub_1C32BC4(&v75->__9__83_6, _9__83_6);
  }
  v76 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___long_(
          v72,
          (System_Func_TSource__TKey__o *)_9__83_6,
          (const MethodInfo_311B728 *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
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
    _9__83_7 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_7,
      v80,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__,
      0);
    v81 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v81->__9__83_7 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_7;
    sub_1C32BC4(&v81->__9__83_7, _9__83_7);
  }
  v82 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
          v78,
          (System_Func_TSource__TKey__o *)_9__83_7,
          (const MethodInfo_311C0B8 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
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
    _9__83_8 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_8,
      v86,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__,
      0);
    v87 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v87->__9__83_8 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_8;
    sub_1C32BC4(&v87->__9__83_8, _9__83_8);
  }
  v88 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
          v84,
          (System_Func_TSource__TKey__o *)_9__83_8,
          (const MethodInfo_311C0B8 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
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
    _9__83_9 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_9,
      v92,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__,
      0);
    v93 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v93->__9__83_9 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_9;
    sub_1C32BC4(&v93->__9__83_9, _9__83_9);
  }
  v94 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
          v90,
          (System_Func_TSource__TKey__o *)_9__83_9,
          (const MethodInfo_311C0B8 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
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
    _9__83_10 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    System_Func_KeyValuePair_object__int___object____ctor(
      _9__83_10,
      v98,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__,
      0);
    v99 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v99->__9__83_10 = (struct System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__o *)_9__83_10;
    sub_1C32BC4(&v99->__9__83_10, _9__83_10);
  }
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                                v96,
                                                                (System_Func_TSource__TResult__o *)_9__83_10,
                                                                (const MethodInfo_310F008 *)Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
  v101 = (System_Collections_Generic_List_UserServantEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v100,
                                                                   (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
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
  struct MenuListControl_o *menuListCtr; // x8
  CombineMaterialMaster_o *v9; // x21
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x24
  float v11; // s0
  float v12; // s8
  float v13; // s0
  struct UserServantEntity_o *baseData; // x8
  __int64 v15; // x21
  __int64 v16; // x24
  float v17; // s9
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v19; // x8
  int32_t size; // w9
  float v21; // s0
  unsigned int v22; // w8
  int v23; // w27
  int v24; // w19
  int v25; // w22
  int32_t v26; // w25
  SvtEquipCombineControl_o *v27; // x26
  System_Collections_Generic_List_UserServantEntity__o *v28; // x23
  UserServantEntity_o *v29; // x28
  __int64 v30; // x21
  __int64 v31; // x29
  int32_t v32; // w0
  __int64 v33; // x29
  int v34; // s9
  float v35; // s9
  unsigned int v36; // w8
  unsigned int v37; // w21
  unsigned int v38; // w9
  int v39; // w29
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  const MethodInfo *v44; // x3
  struct UserServantEntity_o *v45; // x8
  SvtEquipCombineControl_c *v46; // x0
  System_Collections_Generic_Dictionary_long__bool__o *v47; // x21
  _BOOL8 v48; // x0
  Il2CppObject v49; // q0
  int64_t v50; // x0
  __int64 v51; // x22
  struct UserServantEntity_o *v52; // x1
  int32_t v53; // w8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int64_array *v55; // x0
  int v57; // [xsp+Ch] [xbp-104h]
  System_Collections_Generic_List_object__o *v58; // [xsp+10h] [xbp-100h]
  int32_t v59; // [xsp+18h] [xbp-F8h]
  int32_t baseExpType; // [xsp+1Ch] [xbp-F4h]
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // [xsp+20h] [xbp-F0h]
  unsigned int v62; // [xsp+2Ch] [xbp-E4h]
  __int64 v63; // [xsp+30h] [xbp-E0h]
  CombineMaterialMaster_o *v64; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+80h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4C31B2F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CombineMaterialMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&SetCombineData_TypeInfo);
    sub_1C32C20(&SvtEquipCombineControl_TypeInfo);
    byte_4C31B2F = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  combineResStatus = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CombineMaterialMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_76;
  v9 = (CombineMaterialMaster_o *)combineResStatus;
  combineResStatus = (__int64)this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  combineEventList = menuListCtr->fields.combineEventList;
  v11 = CheckCombineResStatus__GetSvtEquipExpCampaignValue(
          (CheckCombineResStatus_o *)combineResStatus,
          this->fields.baseData,
          combineEventList,
          0);
  combineResStatus = (__int64)this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  v12 = v11;
  v64 = v9;
  v13 = CheckCombineResStatus__GetSvtEquipQpCampaignValue(
          (CheckCombineResStatus_o *)combineResStatus,
          this->fields.baseData,
          combineEventList,
          0);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_76;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v17 = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v68.fields.currentCryptoKey = v16;
  *(_QWORD *)&v68.fields.fakeValue = v15;
  combineResStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v68, 0);
  if ( !Master_object )
    goto LABEL_76;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             combineResStatus,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  combineResStatus = (__int64)UserGameMaster__getSelfUserGame(0);
  v19 = this->fields.baseData;
  v63 = combineResStatus;
  if ( !v19 )
    goto LABEL_76;
  combineResStatus = UserServantEntity__getCombineQpSvtEq(v19, 0);
  if ( !Entity || !targetMaterialList )
    goto LABEL_76;
  size = targetMaterialList->fields._size;
  v58 = v5;
  if ( size < 1 )
  {
    v25 = 0;
    v24 = 0;
    v23 = 0;
    goto LABEL_55;
  }
  v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v21 = v17 * (float)(int)combineResStatus;
  v59 = targetMaterialList->fields._size;
  baseExpType = HIDWORD(Entity[8].klass);
  v22 = vcvtps_s32_f32(v21);
  if ( ceilf(v21) == INFINITY )
    v22 = 0x80000000;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v62 = v22;
  v57 = v22 * size;
  while ( 1 )
  {
    v27 = this;
    v28 = targetMaterialList;
    combineResStatus = (__int64)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)targetMaterialList,
                                  v26,
                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    if ( !combineResStatus )
      goto LABEL_76;
    v29 = (UserServantEntity_o *)combineResStatus;
    v30 = *(_QWORD *)(combineResStatus + 80);
    v31 = *(_QWORD *)(combineResStatus + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v69.fields.currentCryptoKey = v30;
    *(_QWORD *)&v69.fields.fakeValue = v31;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v69, 0);
    combineResStatus = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  v61,
                                  v32,
                                  (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !combineResStatus )
      goto LABEL_76;
    v33 = combineResStatus;
    combineResStatus = (__int64)v64;
    if ( !v64 )
      goto LABEL_76;
    combineResStatus = (__int64)CombineMaterialMaster__GetEntity(v64, *(_DWORD *)(v33 + 136), v29->fields.lv, 0);
    if ( !combineResStatus )
      goto LABEL_76;
    v34 = *(_DWORD *)(combineResStatus + 24);
    if ( !byte_4C31A98 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C31A98 = 1;
    }
    v35 = v12 * (float)v34;
    if ( System_Math_TypeInfo->_2.cctor_finished )
    {
      v36 = vcvtps_s32_f32(v35);
      v37 = ceilf(v35) == INFINITY ? 0x80000000 : v36;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v38 = vcvtps_s32_f32(v35);
      if ( ceilf(v35) == INFINITY )
        v37 = 0x80000000;
      else
        v37 = v38;
      if ( !byte_4C31A98 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C31A98 = 1;
      }
      v5 = v58;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    combineResStatus = UserServantEntity__getAddTotalExp(v29, *(_DWORD *)(v33 + 136), 0);
    if ( !v63 )
      goto LABEL_76;
    v24 += combineResStatus;
    v39 = v25 + v62;
    if ( *(_QWORD *)(v63 + 96) < (int)(v25 + v62) )
    {
      this = v27;
      v27->fields.isQpCondClear = 0;
LABEL_55:
      v39 = v25;
      if ( v5 )
        goto LABEL_58;
      goto LABEL_76;
    }
    if ( !v5 )
      goto LABEL_76;
    items = v5->fields._items;
    v41 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_76;
    v42 = v5->fields._size;
    if ( (unsigned int)v42 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v29,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &items->obj.klass + v42;
      v5->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)v29;
      combineResStatus = sub_1C32BC4(v43 + 4, v29);
    }
    v45 = v27->fields.baseData;
    if ( !v45 )
      goto LABEL_76;
    v23 += v37;
    this = v27;
    if ( SvtEquipCombineControl__IsLevelMax(v27, v24 + v23 + v45->fields.exp, baseExpType, v44) )
      break;
    v46 = SvtEquipCombineControl_TypeInfo;
    if ( !SvtEquipCombineControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEquipCombineControl_TypeInfo);
      v46 = SvtEquipCombineControl_TypeInfo;
    }
    if ( v26 == v46->static_fields->MaxSelectNum - 1 )
      goto LABEL_58;
    ++v26;
    v25 += v62;
    targetMaterialList = v28;
    if ( v59 == v26 )
    {
      v39 = v57;
      goto LABEL_58;
    }
  }
  v39 = v62 + v25;
LABEL_58:
  if ( !v5->fields._size )
    return 0;
  v47 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v47,
    (const MethodInfo_3428158 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    v5,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v67.fields._list = *(_OWORD *)&v66.fields.currentCryptoKey;
  v67.fields._current = (Il2CppObject *)v66.fields.fakeValue;
  while ( 1 )
  {
    v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v48 )
      break;
    if ( !v67.fields._current )
      sub_1C32E7C(v48);
    v49 = v67.fields._current[2];
    *(Il2CppObject *)&v66.fields.currentCryptoKey = v67.fields._current[1];
    *(Il2CppObject *)&v66.fields.fakeValue = v49;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v65 = v66;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v65, 0);
    if ( !v47 )
      sub_1C32E7C(v50);
    System_Collections_Generic_Dictionary_long__bool___Add(
      v47,
      v50,
      0,
      (const MethodInfo_3428B38 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  v51 = sub_1C32E6C(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v51, 0);
  if ( !v51 )
    goto LABEL_76;
  v52 = this->fields.baseData;
  *(_QWORD *)(v51 + 16) = v52;
  sub_1C32BC4(v51 + 16, v52);
  v53 = v5->fields._size;
  *(_DWORD *)(v51 + 32) = v23;
  *(_DWORD *)(v51 + 36) = v24;
  *(_QWORD *)(v51 + 48) = 0;
  *(_DWORD *)(v51 + 24) = v53;
  *(_DWORD *)(v51 + 28) = v39;
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
  *(_BYTE *)(v51 + 44) = combineResStatus & 1;
  if ( !v47 )
LABEL_76:
    sub_1C32E7C(combineResStatus);
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v47,
           (const MethodInfo_34287EC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  v55 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_311CA04 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v51 + 56) = v55;
  sub_1C32BC4(v51 + 56, v55);
  *(_QWORD *)(v51 + 64) = v47;
  sub_1C32BC4(v51 + 64, v47);
  return (SetCombineData_o *)v51;
}


int32_t SvtEquipCombineControl__GetTutorialOpenType(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return 38;
}


void SvtEquipCombineControl__InitInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentLvObj; // x0
  UILabel_o *selectSumLb; // x20
  System_String_o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  BalanceConfig_c *v19; // x8
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C31B1D & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_12477/*"SUM_INFO"*/);
    byte_4C31B1D = 1;
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
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
  v28 = 0;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &v28, v6, v7, v8, v9, v10, v11);
  v19 = BalanceConfig_TypeInfo;
  v20 = (Il2CppObject *)v12;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v19->static_fields->ServantCombineMax;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v13, v14, v15, v16, v17, v18);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_63559836(v5, v20, v21, 0);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0);
  SvtEquipCombineControl__SetHaveQpInfo(this, v22);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_65028652(
                                               (int)this + 512,
                                               (System_String_o *)StringLiteral_9231/*"N0"*/,
                                               0);
  if ( !needQpLb )
    goto LABEL_20;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.needQpLb;
  if ( !currentLvObj )
    goto LABEL_20;
  v29.fields.r = 1.0;
  v29.fields.g = 1.0;
  v29.fields.b = 1.0;
  v29.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v29, 0);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v24);
  this->fields.selectMtSvtEqTbl = 0;
  sub_1C32BC4(&this->fields.selectMtSvtEqTbl, 0);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v25);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_1C32E7C(currentLvObj);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 0, v26);
}


void SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C31B1C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31B1C = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_charaGraph = 0;
    sub_1C32BC4(p_charaGraph, 0);
  }
}


void SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  System_Collections_Generic_Dictionary_long__bool__o *v6; // x21
  const MethodInfo *v7; // x1
  UILabel_o *preSelectBaseLb; // x20
  RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  __int64 *v10; // x8
  System_String_o *v11; // x21
  UILabel_o *autoRecommendedButtonLabel; // x20
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v15; // x0
  MenuListControl_o *v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C31B1B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C32C20(&StringLiteral_2092/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C32C20(&StringLiteral_2091/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    sub_1C32C20(&StringLiteral_9237/*"NEED_QP_INFO"*/);
    sub_1C32C20(&StringLiteral_8806/*"MSG_PRESELECT_BASE_SVTEQ"*/);
    sub_1C32C20(&StringLiteral_10815/*"QP_TAKE"*/);
    byte_4C31B1B = 1;
  }
  memset(&v18, 0, sizeof(v18));
  EventTutorialMaster__CheckTutorial(0, 38, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10815/*"QP_TAKE"*/, 0);
  if ( !haveQpTitleLb )
    goto LABEL_47;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9237/*"NEED_QP_INFO"*/, 0);
  if ( !needQpTitleLb )
    goto LABEL_47;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0;
  sub_1C32BC4(&this->fields.selectMtSvtEqList, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v6 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v6,
      (const MethodInfo_3428158 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v6;
    sub_1C32BC4(&this->fields.selectMtSvtEqTbl, v6);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_47;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_3428CD4 *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v7);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_47;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0);
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v10 = &StringLiteral_2092/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v10 = &StringLiteral_2091/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
  v11 = (System_String_o *)*v10;
  autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get(v11, 0);
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
        helpBtn = (UnityEngine_GameObject_o *)sub_1C32BC4(&this->fields.autoSetAnnounceCoroutine, 0),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_47:
    sub_1C32E7C(helpBtn);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      combineEventList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v18 = v17;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v15 )
        break;
      if ( !v18.fields._current )
        sub_1C32E7C(v15);
      switch ( HIDWORD(v18.fields._current[1].klass) )
      {
        case 0x10:
          v16 = this->fields.menuListCtr;
          if ( !v16 )
            sub_1C32E7C(0);
          goto LABEL_44;
        case 0x11:
          v16 = this->fields.menuListCtr;
          if ( !v16 )
            sub_1C32E7C(0);
          goto LABEL_44;
        case 0x12:
          v16 = this->fields.menuListCtr;
          if ( !v16 )
            sub_1C32E7C(0);
          goto LABEL_44;
        case 0x13:
          v16 = this->fields.menuListCtr;
          if ( !v16 )
            sub_1C32E7C(0);
LABEL_44:
          MenuListControl__setBannerIcon(
            v16,
            this->fields.eventNoticeImg,
            (EventEntity_o *)v18.fields._current[5].klass,
            0);
          break;
        default:
          continue;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
  }
}


bool SvtEquipCombineControl__IsBaseSelect(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return this->fields.isSelectBase;
}


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

  if ( (byte_4C31B31 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C31B31 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
LABEL_18:
    sub_1C32E7C(baseData);
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
      baseData = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantExpMaster___);
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
  if ( (byte_4C31B30 & 1) == 0 )
  {
    this = (SvtEquipCombineControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C31B30 = 1;
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
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               0,
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
          && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               6,
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               1,
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               2,
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               3,
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               4,
               (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0);
LABEL_29:
    sub_1C32E7C(this);
  }
  return 1;
}


void SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  bool exists; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4C31B25 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&Method_SvtEquipCombineControl_OnClickBase__);
    byte_4C31B25 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  v5 = Method_SvtEquipCombineControl_OnClickBase__;
  v6 = exists;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_SvtEquipCombineControl_OnClickBase__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  if ( v6 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1C32E7C(Instance);
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

  if ( (byte_4C31B2B & 1) == 0 )
  {
    sub_1C32C20(&Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
    byte_4C31B2B = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickClearMaterialButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickClearMaterialButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__SvtEqCombineNullData(this, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtEqListManager = combineRootComponent->fields.svtEqListManager) == 0 )
    sub_1C32E7C(svtEqListManager);
  SvtEqCombineListViewManager__ClearSelectedSvtList(svtEqListManager, v7);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v9);
  SvtEquipCombineControl__SetStateInfoMsg(this, 1, v10);
}


void SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4C31B26 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3774/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4C31B26 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3774/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C32E7C(v3);
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
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4C31B2A & 1) == 0 )
  {
    sub_1C32C20(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
    byte_4C31B2A = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
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

  if ( (byte_4C31B2C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&Method_SvtEquipCombineControl_OnClickRecommendedButton__);
    sub_1C32C20(&Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__);
    byte_4C31B2C = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_SvtEquipCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v5);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v7 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__,
    0);
  if ( !recommendedConfigDialog )
    sub_1C32E7C(v8);
  SvtEquipRecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v7, 0);
}


void SvtEquipCombineControl__SetBaseSvtEqCardImg(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x22
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  struct UICharaGraphTexture_o *TexturePrefab_40560360; // x0
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_4C31B20 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31B20 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    TexturePrefab_40560360 = CharaGraphManager__CreateTexturePrefab_40560360(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0,
                               0);
    this->fields.charaGraph = TexturePrefab_40560360;
    sub_1C32BC4(&this->fields.charaGraph, TexturePrefab_40560360);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_11;
    UICharaGraphTexture__SetCharacter_43819616(combineInfoComp, usrSvtData, 0, 0);
  }
  this->fields.baseData = usrSvtData;
  sub_1C32BC4(&this->fields.baseData, usrSvtData);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_1C32E7C(combineInfoComp);
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

  if ( (byte_4C31B24 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C31B24 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C32E7C(combineBtnBg);
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
  UILabel_o *haveQpLb; // x20

  if ( (byte_4C31B1E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C31B1E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_65033828(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9231/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C32E7C(SelfUserGame);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)SelfUserGame, 0);
}


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
    sub_1C32E7C(recommendedButton);
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
  const MethodInfo *v7; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v9; // x2

  SvtEquipCombineControl__SetSvtEqCombineData(this, recommendedCombineData, method);
  SvtEquipCombineControl__SetStateInfoMsg(this, 2, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtEqListManager = combineRootComponent->fields.svtEqListManager) == 0 )
    sub_1C32E7C(svtEqListManager);
  SvtEqCombineListViewManager__SetRecommendedSelectedMaterialList(
    svtEqListManager,
    this->fields.selectMtSvtEqList,
    recommendedCombineData,
    v7);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v9);
}


void SvtEquipCombineControl__SetRecommendedMaterial(
        SvtEquipCombineControl_o *this,
        bool isAutoSet,
        const MethodInfo *method)
{
  SvtEquipCombineControl___c__DisplayClass81_0_o *v5; // x21
  SvtEquipRecommenededConfigDialog_o *recommendedConfigDialog; // x0
  const MethodInfo *v7; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  __int64 *v11; // x8
  System_Collections_IEnumerator_o *v12; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  Il2CppObject *v14; // x19
  System_String_o *v15; // x20
  SvtEquipCombineControl___c_c *v16; // x8
  System_Action_o *_9__81_1; // x22
  __int64 v18; // x21
  Il2CppObject *v19; // x23
  struct SvtEquipCombineControl___c_StaticFields *static_fields; // x0
  int32_t v21; // w8
  float v22; // s0
  CommonUI_o *v23; // x0
  System_String_o *v24; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v26; // x20
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  CommonConfirmDialog_ClickDelegate_o *v29; // x24
  Il2CppObject *v30; // x19

  if ( (byte_4C31B2D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__);
    sub_1C32C20(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__);
    sub_1C32C20(&SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
    sub_1C32C20(&SvtEquipCombineControl___c_TypeInfo);
    sub_1C32C20(&StringLiteral_11009/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_10999/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C32C20(&StringLiteral_11018/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/);
    sub_1C32C20(&StringLiteral_11019/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_10997/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10998/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/);
    byte_4C31B2D = 1;
  }
  v5 = (SvtEquipCombineControl___c__DisplayClass81_0_o *)sub_1C32E6C(SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
  SvtEquipCombineControl___c__DisplayClass81_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_35;
  v5->fields.__4__this = this;
  sub_1C32BC4(&v5->fields, this);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = SvtEquipCombineControl__GetRecommendedCombineData(this, v7);
  v5->fields.recommendedCombineData = RecommendedCombineData;
  sub_1C32BC4(&v5->fields.recommendedCombineData, RecommendedCombineData);
  if ( v5->fields.recommendedCombineData )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        SvtEquipRecommenededConfigDialog__Close(recommendedConfigDialog, 0);
        SvtEquipCombineControl__SetMaterialToCombineData(this, v5->fields.recommendedCombineData, v10);
        return;
      }
LABEL_35:
      sub_1C32E7C(recommendedConfigDialog);
    }
    if ( isAutoSet )
    {
      SvtEquipCombineControl__SetMaterialToCombineData(this, v5->fields.recommendedCombineData, v9);
      v11 = &StringLiteral_10999/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/;
      goto LABEL_15;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/, 0);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v29,
      (Il2CppObject *)v5,
      Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__,
      0);
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenConfirmDialog_31190412(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v26,
      v27,
      v28,
      v29,
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
        v11 = &StringLiteral_10997/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/;
LABEL_15:
        v12 = SvtEquipCombineControl__FadeAutoSetAnnounceLabel(this, (System_String_o *)*v11, v9);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v12, 0);
        this->fields.autoSetAnnounceCoroutine = started;
        sub_1C32BC4(&this->fields.autoSetAnnounceCoroutine, started);
        return;
      }
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      recommendedConfigDialog = (SvtEquipRecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_11018/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/,
                                                                        0);
      v15 = (System_String_o *)recommendedConfigDialog;
      v16 = SvtEquipCombineControl___c_TypeInfo;
      if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        recommendedConfigDialog = (SvtEquipRecommenededConfigDialog_o *)j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
        v16 = SvtEquipCombineControl___c_TypeInfo;
      }
      _9__81_1 = v16->static_fields->__9__81_1;
      v18 = StringLiteral_1/*""*/;
      if ( !_9__81_1 )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = SvtEquipCombineControl___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v16->static_fields->__9;
        _9__81_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(_9__81_1, v19, Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__, 0);
        static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_1 = _9__81_1;
        recommendedConfigDialog = (SvtEquipRecommenededConfigDialog_o *)sub_1C32BC4(&static_fields->__9__81_1, _9__81_1);
      }
      if ( !v14 )
        goto LABEL_35;
      v21 = 26;
      v22 = -2.0;
      v23 = (CommonUI_o *)v14;
      v24 = (System_String_o *)v18;
    }
    else
    {
      if ( isAutoSet )
      {
        v11 = &StringLiteral_10998/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/;
        goto LABEL_15;
      }
      v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11009/*"RECOMMENDED_NOT_HAVE_QP"*/, 0);
      _9__81_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__81_1,
        (Il2CppObject *)v5,
        Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__,
        0);
      if ( !v30 )
        goto LABEL_35;
      v22 = 0.0;
      v23 = (CommonUI_o *)v30;
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      v21 = 28;
    }
    CommonUI__OpenNotificationDialog(v23, v24, v15, _9__81_1, -1, 0, 0, 0, 0, v21, 0, 0, 0, v22, 0, 0);
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
    sub_1C32E7C(selectAddGridObj);
  }
  UnityEngine_GameObject__SetActive(selectAddGridObj, !this->fields.isSelectBase, 0);
}


void SvtEquipCombineControl__SetStateInfoMsg(SvtEquipCombineControl_o *this, int32_t state, const MethodInfo *method)
{
  UnityEngine_Component_o *detailInfoLb; // x0
  UIWidget_o *v6; // x21
  __int64 *v7; // x8
  System_String_o *v8; // x1
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C31B28 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7455/*"INFO_MSG_SVTEQ_MATERIAL"*/);
    sub_1C32C20(&StringLiteral_7454/*"INFO_MSG_SVTEQ_BASE"*/);
    sub_1C32C20(&StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C32C20(&StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31B28 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_25:
    sub_1C32E7C(detailInfoLb);
  }
  v9.fields.r = 0.0;
  v9.fields.a = 1.0;
  v9.fields.g = 0.87891;
  v9.fields.b = 0.98828;
  v6 = (UIWidget_o *)detailInfoLb;
  UIWidget__set_color((UIWidget_o *)detailInfoLb, v9, 0);
  if ( state == 2 )
  {
    if ( this->fields.isExeCombine )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_5789/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v10.fields.r = 1.0;
      v10.fields.g = 1.0;
      v10.fields.b = 1.0;
      v10.fields.a = 1.0;
      UIWidget__set_color(v6, v10, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_12189/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( state == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7455/*"INFO_MSG_SVTEQ_MATERIAL"*/;
  }
  else
  {
    if ( state )
    {
      v8 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7454/*"INFO_MSG_SVTEQ_BASE"*/;
  }
  v8 = LocalizationManager__Get((System_String_o *)*v7, 0);
LABEL_23:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)detailInfoLb, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEquipCombineControl__SetSvtEqCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x28
  __int64 Instance; // x0
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  struct System_Int64_array *v8; // x8
  il2cpp_array_size_t max_length; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int64 v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  BalanceConfig_c *v25; // x8
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  struct UserServantEntity_o *baseData; // x8
  __int64 v31; // x20
  __int64 v32; // x23
  int32_t v33; // w26
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v35; // x24
  struct UserServantEntity_o *v36; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x20
  __int64 v38; // x23
  __int64 v39; // x25
  unsigned __int64 v40; // x26
  struct System_Int64_array *v41; // x8
  int32_t *v42; // x22
  int64_t v43; // x28
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v45; // w29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v47; // x23
  UnityEngine_Transform_o *v48; // x20
  __int64 v49; // x20
  __int64 v50; // x25
  __int64 v51; // x27
  int32_t v52; // w25
  __int64 v53; // x25
  __int64 v54; // x27
  UserServantEntity_o *v55; // x8
  __int64 v56; // x25
  __int64 v57; // x27
  int32_t v58; // w25
  UnityEngine_GameObject_o *v59; // x21
  bool v60; // w20
  __int64 v61; // x23
  __int64 v62; // x25
  __int64 v63; // x20
  __int64 v64; // x23
  int v65; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v67; // x23
  MaterialSvtInfo_o *v68; // x25
  MaterialSvtInfo_ClickDelegate_o *v69; // x27
  UserServantEntity_o *v70; // x8
  int32_t v71; // w26
  __int64 v72; // x20
  __int64 v73; // x23
  int32_t v74; // w0
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  __int64 v78; // x5
  __int64 v79; // x6
  __int64 v80; // x7
  UILabel_o *basicExpLb; // x20
  int32_t v82; // w8
  Il2CppObject *v83; // x0
  UILabel_o *addTotalExpLb; // x20
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  Il2CppObject *v91; // x0
  const MethodInfo *v92; // x2
  struct UserServantEntity_o *v93; // x8
  int32_t afterMaxLv; // w23
  int32_t lv; // w1
  struct UserServantEntity_o *v96; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v101; // x25
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  __int64 v105; // x5
  __int64 v106; // x6
  __int64 v107; // x7
  Il2CppObject *v108; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v111; // x20
  UserServantEntity_o *v112; // x1
  struct UserServantEntity_o *v113; // x8
  int32_t v114; // w8
  int32_t v115; // w8
  bool v116; // w20
  float v117; // s0 OVERLAPPED
  float v118; // s1
  float v119; // s2
  float v120; // s3
  const MethodInfo *v121; // x1
  __int64 v122; // [xsp+10h] [xbp-A0h]
  int32_t v123; // [xsp+18h] [xbp-98h]
  int32_t v124; // [xsp+1Ch] [xbp-94h]
  __int64 v125; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **v127; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4C31B21 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C32C20(&CombineSvtData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_25087/*"{0:N0}"*/);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    sub_1C32C20(&StringLiteral_7437/*"INCREMENT_SVTLEVEL"*/);
    sub_1C32C20(&StringLiteral_12477/*"SUM_INFO"*/);
    byte_4C31B21 = 1;
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
  sub_1C32BC4(&this->fields.selectMtSvtEqList, materialUsrSvtIdList);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  Instance = sub_1C32BC4(&this->fields.selectMtSvtEqTbl, svtEqMaterialList);
  v8 = v3->fields.materialUsrSvtIdList;
  if ( !v8 )
    goto LABEL_103;
  max_length = v8->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUM_INFO"*/, 0);
  increAmount = max_length;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v12, v13, v14, v15, v16, v17);
  v25 = BalanceConfig_TypeInfo;
  v26 = (Il2CppObject *)v18;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v25->static_fields->ServantCombineMax;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v19, v20, v21, v22, v23, v24);
  Instance = (__int64)System_String__Format_63559836(v11, v26, v27, 0);
  if ( !selectSumLb )
    goto LABEL_103;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  Instance = sub_1C32BC4(&this->fields.baseData, baseSvtData);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_103;
  v32 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v31 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v132.fields.currentCryptoKey = v32;
  *(_QWORD *)&v132.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v132, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)max_length < 1 )
    return;
  v35 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v36 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_103;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = v39;
  *(_QWORD *)&v133.fields.fakeValue = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v133, 0);
  if ( !v37 )
    goto LABEL_103;
  v124 = v33;
  v127 = &this->fields.baseData;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v37,
                        Instance,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_103;
  v125 = (unsigned int)max_length;
  v40 = 0;
  v122 = Instance;
  v123 = *(_DWORD *)(Instance + 88);
  do
  {
    v41 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_103;
    if ( v40 >= LODWORD(v41->max_length) )
      sub_1C32E84(Instance);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_103;
    v42 = (int32_t *)v3;
    v43 = v41->m_Items[v40];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v43,
                 (const MethodInfo_3428A8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_103;
    svtFaceInfo = this->fields.svtFaceInfo;
    v45 = Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Instance )
      goto LABEL_103;
    v47 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    v48 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4C313D1 )
    {
      Instance = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v48 )
      goto LABEL_103;
    UnityEngine_Transform__set_localPosition(v48, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v47, 0);
    if ( !Instance )
      goto LABEL_103;
    v140.fields.x = 0.5;
    v140.fields.y = 0.5;
    v140.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v140, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_103;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v43,
                          (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_103;
    v49 = Instance;
    v51 = *(_QWORD *)(Instance + 80);
    v50 = *(_QWORD *)(Instance + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v134.fields.currentCryptoKey = v51;
    *(_QWORD *)&v134.fields.fakeValue = v50;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v134, 0);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v49 + 96),
                 0);
    if ( !v35 )
      goto LABEL_103;
    Instance = (__int64)ServantLimitMaster__GetEntity(v35, v52, Instance, 0);
    if ( !Instance )
      goto LABEL_103;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v54 = *(_QWORD *)(v49 + 96);
    v53 = *(_QWORD *)(v49 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v135.fields.currentCryptoKey = v54;
    *(_QWORD *)&v135.fields.fakeValue = v53;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v135, 0);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v55 = *v127;
    if ( !*v127 )
      goto LABEL_103;
    v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
    v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v136.fields.currentCryptoKey = v57;
    *(_QWORD *)&v136.fields.fakeValue = v56;
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v136, 0);
    if ( v58 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v49 + 80),
                  0) )
    {
      v59 = v47;
      Instance = (__int64)*v127;
      if ( !*v127 )
        goto LABEL_103;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0) )
      {
        v60 = 0;
      }
      else
      {
        v62 = *(_QWORD *)(v49 + 96);
        v61 = *(_QWORD *)(v49 + 104);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v137.fields.currentCryptoKey = v62;
        *(_QWORD *)&v137.fields.fakeValue = v61;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v137, 0) < 1 )
        {
          v65 = 1;
        }
        else
        {
          v64 = *(_QWORD *)(v49 + 96);
          v63 = *(_QWORD *)(v49 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v138.fields.currentCryptoKey = v64;
          *(_QWORD *)&v138.fields.fakeValue = v63;
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v138, 0) + 1;
          this->fields.isLimitUpMaterial = 1;
        }
        v47 = v59;
        v124 += v65;
        v60 = v124 > v123;
      }
    }
    else
    {
      v60 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v47,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v67 = this->fields.baseData;
    v68 = (MaterialSvtInfo_o *)Component_object;
    v69 = (MaterialSvtInfo_ClickDelegate_o *)sub_1C32E6C(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(
      v69,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0);
    if ( !v68 )
      goto LABEL_103;
    MaterialSvtInfo__setMaterialSvtInfo_48802320(v68, v40++, v67, v43, 1, v60, v45 & 1, v69, 0);
    v3 = (SetCombineData_o *)v42;
  }
  while ( v125 != v40 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_103;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0);
  v70 = *v127;
  v71 = v124 >= v123 ? v123 : v124;
  if ( !v70 )
    goto LABEL_103;
  v73 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v139.fields.currentCryptoKey = v73;
  *(_QWORD *)&v139.fields.fakeValue = v72;
  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v139, 0);
  Instance = (__int64)ServantLimitMaster__GetEntity(v35, v74, v71, 0);
  if ( !Instance )
    goto LABEL_103;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v82 = v42[8];
  this->fields.getExpVal = v42[9] + v82;
  increAmount = v82;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v75, v76, v77, v78, v79, v80);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25087/*"{0:N0}"*/, v83, 0);
  if ( !basicExpLb )
    goto LABEL_103;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v42[9];
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v85, v86, v87, v88, v89, v90);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25087/*"{0:N0}"*/, v91, 0);
  if ( !addTotalExpLb )
    goto LABEL_103;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0);
  v93 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v122 + 132);
  if ( !v93 )
    goto LABEL_103;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v93->fields.exp + this->fields.getExpVal;
  lv = v93->fields.lv;
  this->fields.checkLv = lv;
  if ( lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v92) )
      lv = this->fields.checkLv;
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
  v96 = this->fields.baseData;
  if ( !v96 )
    goto LABEL_103;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v96 + 256, 0);
  if ( !currentLvLb )
    goto LABEL_103;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = (__int64)System_Int32__ToString((int)this + 488, 0);
  if ( !increLvLb )
    goto LABEL_103;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0);
  if ( !*v127 )
    goto LABEL_103;
  this->fields.increAmount = this->fields.increLv - (*v127)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_7437/*"INCREMENT_SVTLEVEL"*/, 0);
  increAmount = this->fields.increAmount;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v102, v103, v104, v105, v106, v107);
  Instance = (__int64)System_String__Format(v101, v108, 0);
  if ( !increValLb )
    goto LABEL_103;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *v127,
                        *p_increLv,
                        v71,
                        0);
  if ( !getSkillLb )
    goto LABEL_103;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v42[7];
  Instance = (__int64)System_Int32__ToString_65028652((int)this + 512, (System_String_o *)StringLiteral_9231/*"N0"*/, 0);
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
    *v127,
    *p_increLv,
    0);
  afterAtk[1] += v42[12];
  afterAtk[0] += v42[13];
  v111 = sub_1C32E6C(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v111, 0);
  if ( !v111 )
    goto LABEL_103;
  v112 = *v127;
  *(_QWORD *)(v111 + 16) = *v127;
  Instance = sub_1C32BC4(v111 + 16, v112);
  *(_DWORD *)(v111 + 24) = this->fields.increLv;
  *(_DWORD *)(v111 + 28) = v71;
  *(_DWORD *)(v111 + 32) = this->fields.afterMaxLv;
  v113 = this->fields.baseData;
  if ( !v113 )
    goto LABEL_103;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v113->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0);
  *(_DWORD *)(v111 + 36) = lateExp[1];
  v114 = afterAtk[1];
  *(_DWORD *)(v111 + 40) = lateExp[0];
  *(_DWORD *)(v111 + 44) = v114;
  v115 = afterAtk[0];
  *(_DWORD *)(v111 + 48) = v42[12];
  *(_DWORD *)(v111 + 52) = v115;
  *(_DWORD *)(v111 + 56) = v42[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_103;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v111, 0);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v117 = 1.0;
      v116 = 1;
      v118 = 1.0;
      goto LABEL_101;
    }
LABEL_103:
    sub_1C32E7C(Instance);
  }
  if ( !Instance )
    goto LABEL_103;
  v116 = 0;
  v117 = 1.0;
  v118 = 0.0;
LABEL_101:
  v119 = v118;
  v120 = v117;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v117, 0);
  this->fields.isExeCombine = v116;
  SvtEquipCombineControl__SetExeBtnState(this, v121);
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

  if ( (byte_4C31B23 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3774/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4C31B23 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3774/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
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
    sub_1C32E7C(SelfUserGame);
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

  if ( (byte_4C31B33 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_TryGetComponent_TweenAlpha___);
    byte_4C31B33 = 1;
  }
  component = 0;
  autoSetAnnounceCoroutine = this->fields.autoSetAnnounceCoroutine;
  if ( autoSetAnnounceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71209832((UnityEngine_MonoBehaviour_o *)this, autoSetAnnounceCoroutine, 0);
    this->fields.autoSetAnnounceCoroutine = 0;
    sub_1C32BC4(&this->fields.autoSetAnnounceCoroutine, 0);
  }
  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj )
    goto LABEL_12;
  if ( UnityEngine_Component__TryGetComponent_object_(
         autoSetAnnounceObj,
         &component,
         (const MethodInfo_30D4CBC *)Method_UnityEngine_Component_TryGetComponent_TweenAlpha___) )
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
    sub_1C32E7C(autoSetAnnounceObj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


void SvtEquipCombineControl__SvtEqCombineNullData(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CombineInfoComponent_o *combineInfoComp; // x0
  const MethodInfo *v5; // x2

  SvtEquipCombineControl__DestroyGrid(this, method);
  SvtEquipCombineControl__InitInfo(this, v3);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    sub_1C32E7C(0);
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v5);
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
    sub_1C32E7C(autoSetAnnounceObj);
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
  const MethodInfo *v10; // x2

  if ( (byte_4C31B36 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C32C20(&StringLiteral_2092/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C32C20(&StringLiteral_2091/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    byte_4C31B36 = 1;
  }
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v6 = &StringLiteral_2092/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v6 = &StringLiteral_2091/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
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
    SvtEquipCombineControl__SetRecommendedMaterial(this, 0, v10);
    return;
  }
  recommendedConfigDialog = (System_String_o *)this->fields.recommendedConfigDialog;
  if ( !recommendedConfigDialog )
LABEL_16:
    sub_1C32E7C(recommendedConfigDialog);
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
  if ( (byte_4C31B43 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_b__87_0__);
    this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C31B43 = 1;
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
    v14 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
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
                v9 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v9, autoSetAnnounceWaitTime, 0);
                v2->fields.__2__current = (Il2CppObject *)v9;
                p__2__current = &v2->fields.__2__current;
                sub_1C32BC4(p__2__current, v9);
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
    sub_1C32E7C(this);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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

  if ( (byte_4C31B37 & 1) == 0 )
  {
    sub_1C32C20(&SvtEquipCombineControl___c_TypeInfo);
    byte_4C31B37 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SvtEquipCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEquipCombineControl___c_TypeInfo->static_fields->__9 = (struct SvtEquipCombineControl___c_o *)v1;
  sub_1C32BC4(SvtEquipCombineControl___c_TypeInfo->static_fields, v1);
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
    sub_1C32E7C(this);
  return x->fields.equipTarget1;
}


UserServantEntity_o *SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_10(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C31B40 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C31B40 = 1;
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
    sub_1C32E7C(this);
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
  if ( (byte_4C31B39 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Value__);
    byte_4C31B39 = 1;
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
  if ( (byte_4C31B3A & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C31B3A = 1;
  }
  if ( !key )
    sub_1C32E7C(this);
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
  if ( (byte_4C31B3B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C31B3B = 1;
  }
  if ( !key )
    sub_1C32E7C(this);
  v5 = *(_QWORD *)&key->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&key->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_6(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C31B3C & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C31B3C = 1;
  }
  if ( !key )
    sub_1C32E7C(this);
  return UserServantEntity__getLimitCount(key, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_7(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C31B3D & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C31B3D = 1;
  }
  if ( !key )
    sub_1C32E7C(this);
  return key->fields.lv;
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_8(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C31B3E & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C31B3E = 1;
  }
  if ( !key )
    sub_1C32E7C(this);
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
  if ( (byte_4C31B3F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C31B3F = 1;
  }
  if ( !key )
    sub_1C32E7C(this);
  v4 = *(_OWORD *)&key->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&key->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
}


void SvtEquipCombineControl___c___SetRecommendedMaterial_b__81_1(
        SvtEquipCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C31B38 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31B38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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

  if ( (byte_4C31B41 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31B41 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C32E7C(Instance);
  }
}


void SvtEquipCombineControl___c__DisplayClass81_0___SetRecommendedMaterial_b__2(
        SvtEquipCombineControl___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  struct SvtEquipCombineControl_o *_4__this; // x8

  if ( (byte_4C31B42 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31B42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)Instance, v4);
}