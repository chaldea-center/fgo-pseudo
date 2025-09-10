void SvtEquipCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C2B5F7 & 1) == 0 )
  {
    sub_1C2D490(&SvtEquipCombineControl_TypeInfo);
    byte_4C2B5F7 = 1;
  }
  SvtEquipCombineControl_TypeInfo->static_fields->MaxSelectNum = 20;
}


void SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C2B5F6 & 1) == 0 )
  {
    sub_1C2D490(&CombineMenuControl_TypeInfo);
    byte_4C2B5F6 = 1;
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

  if ( (byte_4C2B5E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B5E4 = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0)) == 0 )
    {
      sub_1C2D6EC(Instance, v7);
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
  const MethodInfo *v3; // x3
  struct UserServantEntity_o *baseUserServantEntity; // x8
  __int128 v7; // q1
  int64_t v8; // x0
  __int128 v9; // q1
  const MethodInfo *v10; // x1
  bool v11; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4C2B5E1 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2B5E1 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v13, 0);
      v9 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v12.fields.fakeValue = v9;
      if ( v8 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v12, 0) )
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v10);
    }
    v11 = 1;
  }
  else
  {
    SvtEquipCombineControl__InitMaterialSvtEqInfo(this, (const MethodInfo *)selectBase);
    v11 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseUserServantEntity, (int32_t)selectBase, (int32_t)method, v3);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int v7; // w22
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C2B5E9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B5E9 = 1;
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
    v7 = childCount + 1;
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
                                                v7 - 2,
                                                0);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
      if ( --v7 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C2D6EC(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqList, 0, v5, v6);
}


System_Collections_IEnumerator_o *SvtEquipCombineControl__FadeAutoSetAnnounceLabel(
        SvtEquipCombineControl_o *this,
        System_String_o *localizationKey,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C2B5F4 & 1) == 0 )
  {
    sub_1C2D490(&SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
    byte_4C2B5F4 = 1;
  }
  v5 = sub_1C2D6DC(SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
  SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87___ctor(
    (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = localizationKey;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)localizationKey, v10, v11);
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

  if ( (byte_4C2B5EB & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8281/*"LIMIT_UP_MATERIAL_INFO_MSG"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_8264/*"LIMIT_BOTH_MSG"*/);
    sub_1C2D490(&StringLiteral_8279/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/);
    byte_4C2B5EB = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8264/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_8279/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v4, 0);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_8281/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_T__o *v18; // x24
  Il2CppObject *v19; // x28
  int64_t v20; // x8
  SvtEquipCombineControl___c_c *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x23
  System_Func_object__object__o *_9__83_1; // x24
  Il2CppObject *v24; // x25
  struct SvtEquipCombineControl___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  SvtEquipCombineControl___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x23
  System_Func_T__TResult__o *_9__83_2; // x24
  Il2CppObject *v33; // x25
  struct SvtEquipCombineControl___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  il2cpp_array_size_t max_length; // x8
  int v39; // w24
  int v40; // w23
  UserServantEntity_o *v41; // x25
  __int64 v42; // x26
  __int64 v43; // x27
  Il2CppObject *Entity; // x0
  __int128 v45; // q0
  ServantEntity_o *v46; // x27
  int64_t v47; // x26
  __int64 v48; // x2
  struct UserServantEntity_o *v49; // x8
  __int128 v50; // q0
  const MethodInfo *v51; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // x0
  __int64 v53; // x26
  int32_t v54; // w26
  Il2CppObject *v55; // x1
  int32_t v56; // w2
  const MethodInfo_34415F8 *v57; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // x0
  __int64 v59; // x26
  int32_t v60; // w26
  SvtEquipCombineControl___c_c *v61; // x0
  System_Func_T__TResult__o *_9__83_3; // x21
  Il2CppObject *v63; // x22
  struct SvtEquipCombineControl___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x0
  SvtEquipCombineControl___c_c *v68; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v69; // x20
  System_Func_T__TResult__o *_9__83_4; // x21
  Il2CppObject *v71; // x22
  struct SvtEquipCombineControl___c_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v75; // x0
  SvtEquipCombineControl___c_c *v76; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v77; // x20
  System_Func_T__TResult__o *_9__83_5; // x21
  Il2CppObject *v79; // x22
  struct SvtEquipCombineControl___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v83; // x0
  SvtEquipCombineControl___c_c *v84; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v85; // x20
  System_Func_T__TResult__o *_9__83_6; // x21
  Il2CppObject *v87; // x22
  struct SvtEquipCombineControl___c_StaticFields *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v91; // x0
  SvtEquipCombineControl___c_c *v92; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v93; // x20
  System_Func_T__TResult__o *_9__83_7; // x21
  Il2CppObject *v95; // x22
  struct SvtEquipCombineControl___c_StaticFields *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v99; // x0
  SvtEquipCombineControl___c_c *v100; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v101; // x20
  System_Func_T__TResult__o *_9__83_8; // x21
  Il2CppObject *v103; // x22
  struct SvtEquipCombineControl___c_StaticFields *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v107; // x0
  SvtEquipCombineControl___c_c *v108; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v109; // x20
  System_Func_T__TResult__o *_9__83_9; // x21
  Il2CppObject *v111; // x22
  struct SvtEquipCombineControl___c_StaticFields *v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v115; // x0
  SvtEquipCombineControl___c_c *v116; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x20
  System_Func_T__TResult__o *_9__83_10; // x21
  Il2CppObject *v119; // x22
  struct SvtEquipCombineControl___c_StaticFields *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x0
  System_Collections_Generic_List_UserServantEntity__o *v124; // x0
  const MethodInfo *v125; // x2
  __int64 value; // [xsp+8h] [xbp-138h]
  __int64 valuea; // [xsp+8h] [xbp-138h]
  __int64 v129; // [xsp+10h] [xbp-130h]
  __int64 v130; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_int__o *v131; // [xsp+20h] [xbp-120h]
  System_Collections_ICollection_o *self; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_int__o *selectTypeList; // [xsp+30h] [xbp-110h]
  UserServantGrandMaster_o *v134; // [xsp+38h] [xbp-108h]
  UserRecommendSupportMaster_o *v135; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_T__o *v136; // [xsp+50h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+80h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+A0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+C0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16

  if ( (byte_4C2B5F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantLeaderMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_ObscuredLong___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C2D490(&System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    sub_1C2D490(&System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    sub_1C2D490(&System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    sub_1C2D490(&System_Func_int__Rarity_TYPE__TypeInfo);
    sub_1C2D490(&System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ObscuredLong__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor___77970864);
    sub_1C2D490(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__);
    sub_1C2D490(&SvtEquipCombineControl___c_TypeInfo);
    byte_4C2B5F0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_150;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)ConfigSaveData;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v7 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v7,
    (const MethodInfo_3440C44 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_150;
  v129 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v130 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
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
    _9__83_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__Rarity_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__83_0,
      v14,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__,
      0);
    static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_int__Rarity_TYPE__o *)_9__83_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                         v11,
                                                         (System_Func_TSource__TResult__o *)_9__83_0,
                                                         (const MethodInfo_3101FFC *)Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
  self = (System_Collections_ICollection_o *)sub_1C2D6DC(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58125408(
    (System_Collections_Generic_List_T__o *)self,
    v18,
    (const MethodInfo_376EC60 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor___77970864);
  v131 = *(System_Collections_Generic_List_int__o **)(v9 + 32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserDeckMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantLeaderMaster___);
  if ( !ConfigSaveData )
    goto LABEL_150;
  v20 = ConfigSaveData;
  v21 = SvtEquipCombineControl___c_TypeInfo;
  v22 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v20 + 40);
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v21 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_1 = (System_Func_object__object__o *)v21->static_fields->__9__83_1;
  if ( !_9__83_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = SvtEquipCombineControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__83_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    System_Func_object__object____ctor(
      _9__83_1,
      v24,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__,
      0);
    v25 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v25->__9__83_1 = (struct System_Func_UserServantLeaderEntity__EquipTargetInfo__o *)_9__83_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v25->__9__83_1, (int32_t)_9__83_1, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v22,
                                                         (System_Func_TSource__TResult__o *)_9__83_1,
                                                         (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
  v29 = BasicHelper__ExcludeNull_object_(
          v28,
          (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v30 = SvtEquipCombineControl___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v30 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_2 = (System_Func_T__TResult__o *)v30->static_fields->__9__83_2;
  if ( !_9__83_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = SvtEquipCombineControl___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__83_2 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    System_Func_object__ObscuredLong____ctor(
      _9__83_2,
      v33,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__,
      0);
    v34 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v34->__9__83_2 = (struct System_Func_EquipTargetInfo__ObscuredLong__o *)_9__83_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->__9__83_2, (int32_t)_9__83_2, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__ObscuredLong_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)_9__83_2,
                                                               (const MethodInfo_3105674 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
  v136 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_ObscuredLong_(
                                                   v37,
                                                   (const MethodInfo_3112D04 *)Method_System_Linq_Enumerable_ToList_ObscuredLong___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v135 = (UserRecommendSupportMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v134 = (UserServantGrandMaster_o *)ConfigSaveData;
  if ( !ServantEquipList )
    goto LABEL_150;
  max_length = ServantEquipList->max_length;
  v39 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      v41 = ServantEquipList->m_Items[v40];
      if ( !v41 )
        goto LABEL_150;
      v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v141.fields.currentCryptoKey = v43;
      *(_QWORD *)&v141.fields.fakeValue = v42;
      ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v141, 0);
      if ( !v5 )
        goto LABEL_150;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v5,
                 ConfigSaveData,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v45 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
      v46 = (ServantEntity_o *)Entity;
      *(_OWORD *)&v140.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v140.fields.fakeValue = v45;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v139 = v140;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v139, 0);
      ConfigSaveData = UserServantEntity__IsChoice(v41, 0);
      if ( (ConfigSaveData & 1) == 0 )
      {
        ConfigSaveData = UserServantEntity__IsLock(v41, 0);
        if ( (ConfigSaveData & 1) == 0 )
        {
          v49 = this->fields.baseData;
          if ( !v49 )
            goto LABEL_150;
          v50 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
          *(_OWORD *)&v140.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v140.fields.fakeValue = v50;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v138 = v140;
          ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v138, 0);
          if ( ConfigSaveData != v47 )
          {
            if ( !v19 )
              goto LABEL_150;
            ConfigSaveData = UserDeckMaster__IsEquip((UserDeckMaster_o *)v19, v47, 0);
            if ( (ConfigSaveData & 1) == 0 )
            {
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v140, v47, 0);
              ConfigSaveData = (int64_t)v136;
              if ( !v136 )
                goto LABEL_150;
              ConfigSaveData = System_Collections_Generic_List_ObscuredLong___Contains(
                                 v136,
                                 &v140,
                                 (const MethodInfo_378F178 *)Method_System_Collections_Generic_List_ObscuredLong__Contains__);
              if ( (ConfigSaveData & 1) == 0 )
              {
                ConfigSaveData = (int64_t)v135;
                if ( !v135 )
                  goto LABEL_150;
                ConfigSaveData = UserRecommendSupportMaster__IsSettingServant(v135, v47, 1, 0);
                if ( (ConfigSaveData & 1) == 0 )
                {
                  ConfigSaveData = (int64_t)v134;
                  if ( !v134 )
                    goto LABEL_150;
                  ConfigSaveData = UserServantGrandMaster__IsSettingEquip(v134, v47, 0);
                  if ( (ConfigSaveData & 1) == 0 )
                  {
                    ConfigSaveData = SvtEquipCombineControl__IsMatchServantEquipType(
                                       (SvtEquipCombineControl_o *)ConfigSaveData,
                                       v46,
                                       selectTypeList,
                                       v51);
                    if ( (ConfigSaveData & 1) != 0 )
                    {
                      ConfigSaveData = BasicHelper__IsNullOrEmpty(self, 0);
                      if ( (ConfigSaveData & 1) != 0 )
                        goto LABEL_62;
                      Rarity = (unsigned int)UserServantEntity__getRarity(v41, 0);
                      ConfigSaveData = (int64_t)self;
                      if ( !self )
                        goto LABEL_150;
                      ConfigSaveData = System_Collections_Generic_List_Int32Enum___Contains(
                                         (System_Collections_Generic_List_T__o *)self,
                                         Rarity,
                                         (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
                      if ( (ConfigSaveData & 1) != 0 )
                      {
LABEL_62:
                        if ( !v46 )
                          goto LABEL_150;
                        if ( ServantEntity__get_IsSvtEquipExp(v46, 0)
                          || !v41->fields.exp
                          && UserServantEntity__getLimitCntMax(v41, 0)
                          && !ServantEntity__get_IsChocolateSvtEquip(v46, 0) )
                        {
                          ConfigSaveData = (int64_t)v131;
                          if ( !v131 )
                            goto LABEL_150;
                          if ( !System_Collections_Generic_List_int___Contains(
                                  v131,
                                  1,
                                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
                            || (ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                                   v131,
                                                   0,
                                                   (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__),
                                (ConfigSaveData & 1) != 0) )
                          {
                            v53 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
                            *(_QWORD *)&v52.fields.fakeValue = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              value = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              *(_QWORD *)&v52.fields.fakeValue = value;
                            }
                            *(_QWORD *)&v52.fields.currentCryptoKey = v53;
                            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52, 0);
                            *(_QWORD *)&v142.fields.fakeValue = v129;
                            *(_QWORD *)&v142.fields.currentCryptoKey = v130;
                            if ( v54 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v142, 0) )
                            {
                              ConfigSaveData = (int64_t)v7;
                              if ( !v7 )
                                goto LABEL_150;
                              v55 = (Il2CppObject *)v41;
                              v56 = 0;
                              v57 = (const MethodInfo_34415F8 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                              goto LABEL_94;
                            }
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp(v46, 0);
                            if ( !v7 )
                              goto LABEL_150;
                            v57 = (const MethodInfo_34415F8 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                            if ( (ConfigSaveData & 1) != 0 )
                              v56 = 20;
                            else
                              v56 = 40;
LABEL_92:
                            ConfigSaveData = (int64_t)v7;
                            goto LABEL_93;
                          }
                        }
                        else
                        {
                          ConfigSaveData = (int64_t)v131;
                          if ( !v131 )
                            goto LABEL_150;
                          if ( System_Collections_Generic_List_int___Contains(
                                 v131,
                                 1,
                                 (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
                            || (ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                                   v131,
                                                   0,
                                                   (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__),
                                (ConfigSaveData & 1) == 0) )
                          {
                            v59 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
                            *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              valuea = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                              *(_QWORD *)&v58.fields.fakeValue = valuea;
                            }
                            *(_QWORD *)&v58.fields.currentCryptoKey = v59;
                            v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v58, 0);
                            *(_QWORD *)&v143.fields.fakeValue = v129;
                            *(_QWORD *)&v143.fields.currentCryptoKey = v130;
                            if ( v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v143, 0) )
                            {
                              ConfigSaveData = (int64_t)v7;
                              if ( !v7 )
                                goto LABEL_150;
                              v56 = 10;
                              v57 = (const MethodInfo_34415F8 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
LABEL_93:
                              v55 = (Il2CppObject *)v41;
LABEL_94:
                              System_Collections_Generic_Dictionary_object__int___Add(
                                (System_Collections_Generic_Dictionary_object__int__o *)ConfigSaveData,
                                v55,
                                v56,
                                v57);
                              goto LABEL_95;
                            }
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp(v46, 0);
                            if ( !v7 )
                              goto LABEL_150;
                            v57 = (const MethodInfo_34415F8 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__;
                            if ( (ConfigSaveData & 1) != 0 )
                              v56 = 30;
                            else
                              v56 = 50;
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
      if ( v39 == v40 )
        break;
      if ( (unsigned int)++v40 >= LODWORD(ServantEquipList->max_length) )
        sub_1C2D6F4(ConfigSaveData, Rarity, v48);
    }
  }
  if ( !v7 )
LABEL_150:
    sub_1C2D6EC(ConfigSaveData, Rarity);
  if ( !System_Collections_Generic_Dictionary_object__int___get_Count(
          v7,
          (const MethodInfo_34412C8 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__) )
    return 0;
  v61 = SvtEquipCombineControl___c_TypeInfo;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v61 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_3 = (System_Func_T__TResult__o *)v61->static_fields->__9__83_3;
  if ( !_9__83_3 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = SvtEquipCombineControl___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v61->static_fields->__9;
    _9__83_3 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_3,
      v63,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__,
      0);
    v64 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v64->__9__83_3 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v64->__9__83_3, (int32_t)_9__83_3, v65, v66);
  }
  v67 = System_Linq_Enumerable__OrderBy_KeyValuePair_object__int___int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (System_Func_TSource__TKey__o *)_9__83_3,
          (const MethodInfo_30FDDB0 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
  v68 = SvtEquipCombineControl___c_TypeInfo;
  v69 = v67;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v68 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_4 = (System_Func_T__TResult__o *)v68->static_fields->__9__83_4;
  if ( !_9__83_4 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = SvtEquipCombineControl___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__83_4 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_4,
      v71,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__,
      0);
    v72 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v72->__9__83_4 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_4;
    sub_1C2D434((CGThumbnailListItem_o *)&v72->__9__83_4, (int32_t)_9__83_4, v73, v74);
  }
  v75 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___int_(
          v69,
          (System_Func_TSource__TKey__o *)_9__83_4,
          (const MethodInfo_310CBBC *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
  v76 = SvtEquipCombineControl___c_TypeInfo;
  v77 = v75;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v76 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_5 = (System_Func_T__TResult__o *)v76->static_fields->__9__83_5;
  if ( !_9__83_5 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = SvtEquipCombineControl___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v76->static_fields->__9;
    _9__83_5 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_5,
      v79,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__,
      0);
    v80 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v80->__9__83_5 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_5;
    sub_1C2D434((CGThumbnailListItem_o *)&v80->__9__83_5, (int32_t)_9__83_5, v81, v82);
  }
  v83 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___int_(
          v77,
          (System_Func_TSource__TKey__o *)_9__83_5,
          (const MethodInfo_310D54C *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
  v84 = SvtEquipCombineControl___c_TypeInfo;
  v85 = v83;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v84 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_6 = (System_Func_T__TResult__o *)v84->static_fields->__9__83_6;
  if ( !_9__83_6 )
  {
    if ( !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v84 = SvtEquipCombineControl___c_TypeInfo;
    }
    v87 = (Il2CppObject *)v84->static_fields->__9;
    _9__83_6 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_6,
      v87,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__,
      0);
    v88 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v88->__9__83_6 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_6;
    sub_1C2D434((CGThumbnailListItem_o *)&v88->__9__83_6, (int32_t)_9__83_6, v89, v90);
  }
  v91 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___long_(
          v85,
          (System_Func_TSource__TKey__o *)_9__83_6,
          (const MethodInfo_310CC88 *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
  v92 = SvtEquipCombineControl___c_TypeInfo;
  v93 = v91;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v92 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_7 = (System_Func_T__TResult__o *)v92->static_fields->__9__83_7;
  if ( !_9__83_7 )
  {
    if ( !v92->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v92);
      v92 = SvtEquipCombineControl___c_TypeInfo;
    }
    v95 = (Il2CppObject *)v92->static_fields->__9;
    _9__83_7 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_7,
      v95,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__,
      0);
    v96 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v96->__9__83_7 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_7;
    sub_1C2D434((CGThumbnailListItem_o *)&v96->__9__83_7, (int32_t)_9__83_7, v97, v98);
  }
  v99 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
          v93,
          (System_Func_TSource__TKey__o *)_9__83_7,
          (const MethodInfo_310D618 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v100 = SvtEquipCombineControl___c_TypeInfo;
  v101 = v99;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v100 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_8 = (System_Func_T__TResult__o *)v100->static_fields->__9__83_8;
  if ( !_9__83_8 )
  {
    if ( !v100->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v100);
      v100 = SvtEquipCombineControl___c_TypeInfo;
    }
    v103 = (Il2CppObject *)v100->static_fields->__9;
    _9__83_8 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_8,
      v103,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__,
      0);
    v104 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v104->__9__83_8 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_8;
    sub_1C2D434((CGThumbnailListItem_o *)&v104->__9__83_8, (int32_t)_9__83_8, v105, v106);
  }
  v107 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
           v101,
           (System_Func_TSource__TKey__o *)_9__83_8,
           (const MethodInfo_310D618 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v108 = SvtEquipCombineControl___c_TypeInfo;
  v109 = v107;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v108 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_9 = (System_Func_T__TResult__o *)v108->static_fields->__9__83_9;
  if ( !_9__83_9 )
  {
    if ( !v108->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v108);
      v108 = SvtEquipCombineControl___c_TypeInfo;
    }
    v111 = (Il2CppObject *)v108->static_fields->__9;
    _9__83_9 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_9,
      v111,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__,
      0);
    v112 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v112->__9__83_9 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_9;
    sub_1C2D434((CGThumbnailListItem_o *)&v112->__9__83_9, (int32_t)_9__83_9, v113, v114);
  }
  v115 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
           v109,
           (System_Func_TSource__TKey__o *)_9__83_9,
           (const MethodInfo_310D618 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v116 = SvtEquipCombineControl___c_TypeInfo;
  v117 = (System_Collections_Generic_IEnumerable_TSource__o *)v115;
  if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
    v116 = SvtEquipCombineControl___c_TypeInfo;
  }
  _9__83_10 = (System_Func_T__TResult__o *)v116->static_fields->__9__83_10;
  if ( !_9__83_10 )
  {
    if ( !v116->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v116);
      v116 = SvtEquipCombineControl___c_TypeInfo;
    }
    v119 = (Il2CppObject *)v116->static_fields->__9;
    _9__83_10 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    System_Func_KeyValuePair_object__int___object____ctor(
      _9__83_10,
      v119,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__,
      0);
    v120 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v120->__9__83_10 = (struct System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__o *)_9__83_10;
    sub_1C2D434((CGThumbnailListItem_o *)&v120->__9__83_10, (int32_t)_9__83_10, v121, v122);
  }
  v123 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                                v117,
                                                                (System_Func_TSource__TResult__o *)_9__83_10,
                                                                (const MethodInfo_3100568 *)Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
  v124 = (System_Collections_Generic_List_UserServantEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v123,
                                                                   (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
  return SvtEquipCombineControl__GetRecommendedSvtEquipCombineData(this, v124, v125);
}


SetCombineData_o *SvtEquipCombineControl__GetRecommendedSvtEquipCombineData(
        SvtEquipCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  Il2CppObject *Master_object; // x19
  void *combineResStatus; // x0
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
  _DWORD *v34; // x29
  int v35; // s9
  float v36; // s9
  unsigned int v37; // w8
  unsigned int v38; // w21
  unsigned int v39; // w9
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int v42; // w29
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  const MethodInfo *v47; // x3
  struct UserServantEntity_o *v48; // x8
  SvtEquipCombineControl_c *v49; // x0
  System_Collections_Generic_Dictionary_long__bool__o *v50; // x21
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject v53; // q0
  int64_t v54; // x0
  __int64 v55; // x22
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct UserServantEntity_o *v58; // x1
  int32_t v59; // w8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int64_array *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int v67; // [xsp+Ch] [xbp-104h]
  System_Collections_Generic_List_object__o *v68; // [xsp+10h] [xbp-100h]
  int32_t v69; // [xsp+18h] [xbp-F8h]
  int32_t baseExpType; // [xsp+1Ch] [xbp-F4h]
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // [xsp+20h] [xbp-F0h]
  unsigned int v72; // [xsp+2Ch] [xbp-E4h]
  _QWORD *v73; // [xsp+30h] [xbp-E0h]
  CombineMaterialMaster_o *v74; // [xsp+38h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+80h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4C2B5F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CombineMaterialMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&SetCombineData_TypeInfo);
    sub_1C2D490(&SvtEquipCombineControl_TypeInfo);
    byte_4C2B5F1 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  combineResStatus = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CombineMaterialMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_76;
  v10 = (CombineMaterialMaster_o *)combineResStatus;
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  combineEventList = menuListCtr->fields.combineEventList;
  v12 = CheckCombineResStatus__GetSvtEquipExpCampaignValue(
          (CheckCombineResStatus_o *)combineResStatus,
          this->fields.baseData,
          combineEventList,
          0);
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  v13 = v12;
  v74 = v10;
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
  *(_QWORD *)&v78.fields.currentCryptoKey = v17;
  *(_QWORD *)&v78.fields.fakeValue = v16;
  combineResStatus = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v78, 0);
  if ( !Master_object )
    goto LABEL_76;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)combineResStatus,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  combineResStatus = UserGameMaster__getSelfUserGame(0);
  v20 = this->fields.baseData;
  v73 = combineResStatus;
  if ( !v20 )
    goto LABEL_76;
  combineResStatus = (void *)UserServantEntity__getCombineQpSvtEq(v20, 0);
  if ( !Entity || !targetMaterialList )
    goto LABEL_76;
  size = targetMaterialList->fields._size;
  v68 = v5;
  if ( size < 1 )
  {
    v26 = 0;
    v25 = 0;
    v24 = 0;
    goto LABEL_55;
  }
  v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v22 = v18 * (float)(int)combineResStatus;
  v69 = targetMaterialList->fields._size;
  baseExpType = HIDWORD(Entity[8].klass);
  v23 = vcvtps_s32_f32(v22);
  if ( ceilf(v22) == INFINITY )
    v23 = 0x80000000;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v72 = v23;
  v67 = v23 * size;
  while ( 1 )
  {
    v28 = this;
    v29 = targetMaterialList;
    combineResStatus = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)targetMaterialList,
                         v27,
                         (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    if ( !combineResStatus )
      goto LABEL_76;
    v30 = (UserServantEntity_o *)combineResStatus;
    v31 = *((_QWORD *)combineResStatus + 10);
    v32 = *((_QWORD *)combineResStatus + 11);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v79.fields.currentCryptoKey = v31;
    *(_QWORD *)&v79.fields.fakeValue = v32;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v79, 0);
    combineResStatus = DataMasterBase_object__object__int___GetEntity(
                         v71,
                         v33,
                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !combineResStatus )
      goto LABEL_76;
    v34 = combineResStatus;
    combineResStatus = v74;
    if ( !v74 )
      goto LABEL_76;
    combineResStatus = CombineMaterialMaster__GetEntity(v74, v34[34], v30->fields.lv, 0);
    if ( !combineResStatus )
      goto LABEL_76;
    v35 = *((_DWORD *)combineResStatus + 6);
    if ( !byte_4C21465 )
    {
      sub_1C2D490(&System_Math_TypeInfo);
      byte_4C21465 = 1;
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
      if ( !byte_4C21465 )
      {
        sub_1C2D490(&System_Math_TypeInfo);
        byte_4C21465 = 1;
      }
      v5 = v68;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    combineResStatus = (void *)UserServantEntity__getAddTotalExp(v30, v34[34], 0);
    if ( !v73 )
      goto LABEL_76;
    v25 += (int)combineResStatus;
    v42 = v26 + v72;
    if ( v73[12] < (int)(v26 + v72) )
    {
      this = v28;
      v28->fields.isQpCondClear = 0;
LABEL_55:
      v42 = v26;
      if ( v5 )
        goto LABEL_58;
      goto LABEL_76;
    }
    if ( !v5 )
      goto LABEL_76;
    items = v5->fields._items;
    v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_76;
    v45 = v5->fields._size;
    if ( (unsigned int)v45 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)v30,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &items->obj.klass + v45;
      v5->fields._size = v45 + 1;
      v46[4] = (Il2CppClass *)v30;
      sub_1C2D434((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v30, v40, v41);
    }
    v48 = v28->fields.baseData;
    if ( !v48 )
      goto LABEL_76;
    v24 += v38;
    this = v28;
    if ( SvtEquipCombineControl__IsLevelMax(v28, v25 + v24 + v48->fields.exp, baseExpType, v47) )
      break;
    v49 = SvtEquipCombineControl_TypeInfo;
    if ( !SvtEquipCombineControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEquipCombineControl_TypeInfo);
      v49 = SvtEquipCombineControl_TypeInfo;
    }
    if ( v27 == v49->static_fields->MaxSelectNum - 1 )
      goto LABEL_58;
    ++v27;
    v26 += v72;
    targetMaterialList = v29;
    if ( v69 == v27 )
    {
      v42 = v67;
      goto LABEL_58;
    }
  }
  v42 = v72 + v26;
LABEL_58:
  if ( !v5->fields._size )
    return 0;
  v50 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v50,
    (const MethodInfo_34196B8 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    v5,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v77.fields._list = *(_OWORD *)&v76.fields.currentCryptoKey;
  v77.fields._current = (Il2CppObject *)v76.fields.fakeValue;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v51 )
      break;
    if ( !v77.fields._current )
      sub_1C2D6EC(v51, v52);
    v53 = v77.fields._current[2];
    *(Il2CppObject *)&v76.fields.currentCryptoKey = v77.fields._current[1];
    *(Il2CppObject *)&v76.fields.fakeValue = v53;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v75 = v76;
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v75, 0);
    if ( !v50 )
      sub_1C2D6EC(v54, v54);
    System_Collections_Generic_Dictionary_long__bool___Add(
      v50,
      v54,
      0,
      (const MethodInfo_341A098 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  v55 = sub_1C2D6DC(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v55, 0);
  if ( !v55 )
    goto LABEL_76;
  v58 = this->fields.baseData;
  *(_QWORD *)(v55 + 16) = v58;
  sub_1C2D434((CGThumbnailListItem_o *)(v55 + 16), (int32_t)v58, v56, v57);
  v59 = v5->fields._size;
  *(_DWORD *)(v55 + 32) = v24;
  *(_DWORD *)(v55 + 36) = v25;
  *(_QWORD *)(v55 + 48) = 0;
  *(_DWORD *)(v55 + 24) = v59;
  *(_DWORD *)(v55 + 28) = v42;
  combineResStatus = this->fields.baseData;
  if ( !combineResStatus )
    goto LABEL_76;
  if ( UserServantEntity__isAdjustHpMax((UserServantEntity_o *)combineResStatus, 0) )
  {
    combineResStatus = this->fields.baseData;
    if ( combineResStatus )
    {
      combineResStatus = (void *)UserServantEntity__isAdjustAtkMax((UserServantEntity_o *)combineResStatus, 0);
      goto LABEL_73;
    }
    goto LABEL_76;
  }
  combineResStatus = 0;
LABEL_73:
  *(_BYTE *)(v55 + 44) = (unsigned __int8)combineResStatus & 1;
  if ( !v50 )
LABEL_76:
    sub_1C2D6EC(combineResStatus, v8);
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v50,
           (const MethodInfo_3419D4C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  v61 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v55 + 56) = v61;
  sub_1C2D434((CGThumbnailListItem_o *)(v55 + 56), (int32_t)v61, v62, v63);
  *(_QWORD *)(v55 + 64) = v50;
  sub_1C2D434((CGThumbnailListItem_o *)(v55 + 64), (int32_t)v50, v64, v65);
  return (SetCombineData_o *)v55;
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BalanceConfig_c *v14; // x8
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2B5DF & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C2B5DF = 1;
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
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  v25 = 0;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v25, v7, v8, v9);
  v14 = BalanceConfig_TypeInfo;
  v15 = (Il2CppObject *)v10;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v14->static_fields->ServantCombineMax;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v11, v12, v13);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_63499156(v6, v15, v16, 0);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0);
  SvtEquipCombineControl__SetHaveQpInfo(this, v17);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_64968716(
                                               (int)this + 512,
                                               (System_String_o *)StringLiteral_9225/*"N0"*/,
                                               0);
  if ( !needQpLb )
    goto LABEL_20;
  UILabel__set_text(needQpLb, (System_String_o *)currentLvObj, 0);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.needQpLb;
  if ( !currentLvObj )
    goto LABEL_20;
  v26.fields.r = 1.0;
  v26.fields.g = 1.0;
  v26.fields.b = 1.0;
  v26.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)currentLvObj, v26, 0);
  this->fields.getExpVal = 0;
  SvtEquipCombineControl__DestroyGrid(this, v19);
  this->fields.selectMtSvtEqTbl = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqTbl, 0, v20, v21);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v22);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_1C2D6EC(currentLvObj, v3);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 0, v23);
}


void SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_charaGraph; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2B5DE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B5DE = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0, 0) )
  {
    p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
    if ( !*p_charaGraph )
      sub_1C2D6EC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_charaGraph = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_charaGraph, 0, v7, v8);
  }
}


void SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_long__bool__o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  UILabel_o *preSelectBaseLb; // x20
  RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  __int64 *v15; // x8
  System_String_o *v16; // x21
  UILabel_o *autoRecommendedButtonLabel; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  MenuListControl_o *v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C2B5DD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C2D490(&StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C2D490(&StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    sub_1C2D490(&StringLiteral_9231/*"NEED_QP_INFO"*/);
    sub_1C2D490(&StringLiteral_8800/*"MSG_PRESELECT_BASE_SVTEQ"*/);
    sub_1C2D490(&StringLiteral_10809/*"QP_TAKE"*/);
    byte_4C2B5DD = 1;
  }
  memset(&v26, 0, sizeof(v26));
  EventTutorialMaster__CheckTutorial(0, 38, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10809/*"QP_TAKE"*/, 0);
  if ( !haveQpTitleLb )
    goto LABEL_47;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9231/*"NEED_QP_INFO"*/, 0);
  if ( !needQpTitleLb )
    goto LABEL_47;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqList, 0, v7, v8);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v9 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v9,
      (const MethodInfo_34196B8 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v9;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqTbl, (int32_t)v9, v10, v11);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_47;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_341A234 *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v12);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8800/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_47;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0);
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v15 = &StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v15 = &StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
  v16 = (System_String_o *)*v15;
  autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16, 0);
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
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoSetAnnounceCoroutine, 0, v18, v19),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_47:
    sub_1C2D6EC(helpBtn, v3);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      combineEventList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
      if ( !v22 )
        break;
      if ( !v26.fields._current )
        sub_1C2D6EC(v22, v23);
      switch ( HIDWORD(v26.fields._current[1].klass) )
      {
        case 0x10:
          v24 = this->fields.menuListCtr;
          if ( !v24 )
            sub_1C2D6EC(0, v23);
          goto LABEL_44;
        case 0x11:
          v24 = this->fields.menuListCtr;
          if ( !v24 )
            sub_1C2D6EC(0, v23);
          goto LABEL_44;
        case 0x12:
          v24 = this->fields.menuListCtr;
          if ( !v24 )
            sub_1C2D6EC(0, v23);
          goto LABEL_44;
        case 0x13:
          v24 = this->fields.menuListCtr;
          if ( !v24 )
            sub_1C2D6EC(0, v23);
LABEL_44:
          MenuListControl__setBannerIcon(
            v24,
            this->fields.eventNoticeImg,
            (EventEntity_o *)v26.fields._current[5].klass,
            0);
          break;
        default:
          continue;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
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

  if ( (byte_4C2B5F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2B5F3 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
LABEL_18:
    sub_1C2D6EC(baseData, *(_QWORD *)&combinedBaseTotalExp);
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
      baseData = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExpMaster___);
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
  if ( (byte_4C2B5F2 & 1) == 0 )
  {
    this = (SvtEquipCombineControl_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C2B5F2 = 1;
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
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               0,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
          && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               6,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               1,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               2,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               3,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               4,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0);
LABEL_29:
    sub_1C2D6EC(this, svtEntity);
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

  if ( (byte_4C2B5E7 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_SvtEquipCombineControl_OnClickBase__);
    byte_4C2B5E7 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  v6 = Method_SvtEquipCombineControl_OnClickBase__;
  v7 = exists;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_SvtEquipCombineControl_OnClickBase__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C2B5ED & 1) == 0 )
  {
    sub_1C2D490(&Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
    byte_4C2B5ED = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickClearMaterialButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickClearMaterialButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__SvtEqCombineNullData(this, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtEqListManager = combineRootComponent->fields.svtEqListManager) == 0 )
    sub_1C2D6EC(svtEqListManager, v7);
  SvtEqCombineListViewManager__ClearSelectedSvtList(svtEqListManager, v7);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v9);
  SvtEquipCombineControl__SetStateInfoMsg(this, 1, v10);
}


void SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  SetRarityDialogControl_o *exeCombineDlg; // x8

  if ( (byte_4C2B5E8 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3767/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4C2B5E8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_1C2D6EC(v3, v4);
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

  if ( (byte_4C2B5EC & 1) == 0 )
  {
    sub_1C2D490(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
    byte_4C2B5EC = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C2D6EC(0, v5);
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

  if ( (byte_4C2B5EE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__TypeInfo);
    sub_1C2D490(&Method_SvtEquipCombineControl_OnClickRecommendedButton__);
    sub_1C2D490(&Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__);
    byte_4C2B5EE = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SvtEquipCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v5);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v7 = (System_Action_bool__o *)sub_1C2D6DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__,
    0);
  if ( !recommendedConfigDialog )
    sub_1C2D6EC(v8, v9);
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
  struct UICharaGraphTexture_o *TexturePrefab_40438132; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_4C2B5E2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B5E2 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    TexturePrefab_40438132 = CharaGraphManager__CreateTexturePrefab_40438132(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0,
                               0);
    this->fields.charaGraph = TexturePrefab_40438132;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraph, (int32_t)TexturePrefab_40438132, v9, v10);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_11;
    UICharaGraphTexture__SetCharacter_43683896(combineInfoComp, usrSvtData, 0, 0);
  }
  this->fields.baseData = usrSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseData, (int32_t)usrSvtData, v11, v12);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_1C2D6EC(combineInfoComp, v7);
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

  if ( (byte_4C2B5E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C2B5E6 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_14;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              combineBtnBg,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_14;
  v4 = (UIWidget_o *)combineBtnBg;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
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
    sub_1C2D6EC(combineBtnBg, method);
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

  if ( (byte_4C2B5E0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    byte_4C2B5E0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (haveQpLb = this->fields.haveQpLb,
        this->fields.haveQpVal = *((_QWORD *)SelfUserGame + 12),
        SelfUserGame = System_Int64__ToString_64973892(
                         (int64_t)&this->fields.haveQpVal,
                         (System_String_o *)StringLiteral_9225/*"N0"*/,
                         0),
        !haveQpLb) )
  {
    sub_1C2D6EC(SelfUserGame, v4);
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
    sub_1C2D6EC(recommendedButton, isEnabled);
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
    sub_1C2D6EC(svtEqListManager, v7);
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
  __int64 v5; // x21
  SvtEquipRecommenededConfigDialog_o *recommendedConfigDialog; // x0
  SetCombineData_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  SetCombineData_o *RecommendedCombineData; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  __int64 *v16; // x8
  System_Collections_IEnumerator_o *v17; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x19
  System_String_o *v22; // x20
  SvtEquipCombineControl___c_c *v23; // x8
  System_Action_o *_9__81_1; // x22
  __int64 v25; // x21
  Il2CppObject *v26; // x23
  struct SvtEquipCombineControl___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w8
  float v31; // s0
  CommonUI_o *v32; // x0
  System_String_o *v33; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v35; // x20
  System_String_o *v36; // x22
  System_String_o *v37; // x23
  CommonConfirmDialog_ClickDelegate_o *v38; // x24
  Il2CppObject *v39; // x19

  if ( (byte_4C2B5EF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__);
    sub_1C2D490(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__);
    sub_1C2D490(&SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
    sub_1C2D490(&SvtEquipCombineControl___c_TypeInfo);
    sub_1C2D490(&StringLiteral_11003/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_1C2D490(&StringLiteral_10993/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C2D490(&StringLiteral_11012/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/);
    sub_1C2D490(&StringLiteral_11013/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_10991/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_10992/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/);
    byte_4C2B5EF = 1;
  }
  v5 = sub_1C2D6DC(SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
  SvtEquipCombineControl___c__DisplayClass81_0___ctor((SvtEquipCombineControl___c__DisplayClass81_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = SvtEquipCombineControl__GetRecommendedCombineData(this, v10);
  *(_QWORD *)(v5 + 24) = RecommendedCombineData;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)RecommendedCombineData, v12, v13);
  v7 = *(SetCombineData_o **)(v5 + 24);
  if ( v7 )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        SvtEquipRecommenededConfigDialog__Close(recommendedConfigDialog, 0);
        SvtEquipCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v5 + 24), v15);
        return;
      }
LABEL_35:
      sub_1C2D6EC(recommendedConfigDialog, v7);
    }
    if ( isAutoSet )
    {
      SvtEquipCombineControl__SetMaterialToCombineData(this, v7, v14);
      v16 = &StringLiteral_10993/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/;
      goto LABEL_15;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11013/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/, 0);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v38 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v38,
      (Il2CppObject *)v5,
      Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__,
      0);
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenConfirmDialog_31167304(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v35,
      v36,
      v37,
      v38,
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
        v16 = &StringLiteral_10991/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/;
LABEL_15:
        v17 = SvtEquipCombineControl__FadeAutoSetAnnounceLabel(this, (System_String_o *)*v16, v14);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v17, 0);
        this->fields.autoSetAnnounceCoroutine = started;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoSetAnnounceCoroutine, (int32_t)started, v19, v20);
        return;
      }
      v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      recommendedConfigDialog = (SvtEquipRecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_11012/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/,
                                                                        0);
      v22 = (System_String_o *)recommendedConfigDialog;
      v23 = SvtEquipCombineControl___c_TypeInfo;
      if ( !SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo);
        v23 = SvtEquipCombineControl___c_TypeInfo;
      }
      _9__81_1 = v23->static_fields->__9__81_1;
      v25 = StringLiteral_1/*""*/;
      if ( !_9__81_1 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = SvtEquipCombineControl___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v23->static_fields->__9;
        _9__81_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(_9__81_1, v26, Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__, 0);
        static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
        static_fields->__9__81_1 = _9__81_1;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__81_1, (int32_t)_9__81_1, v28, v29);
      }
      if ( !v21 )
        goto LABEL_35;
      v30 = 26;
      v31 = -2.0;
      v32 = (CommonUI_o *)v21;
      v33 = (System_String_o *)v25;
    }
    else
    {
      if ( isAutoSet )
      {
        v16 = &StringLiteral_10992/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/;
        goto LABEL_15;
      }
      v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11003/*"RECOMMENDED_NOT_HAVE_QP"*/, 0);
      _9__81_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__81_1,
        (Il2CppObject *)v5,
        Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__,
        0);
      if ( !v39 )
        goto LABEL_35;
      v31 = 0.0;
      v32 = (CommonUI_o *)v39;
      v33 = (System_String_o *)StringLiteral_1/*""*/;
      v30 = 28;
    }
    CommonUI__OpenNotificationDialog(v32, v33, v22, _9__81_1, -1, 0, 0, 0, 0, v30, 0, 0, 0, v31, 0, 0);
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
    sub_1C2D6EC(selectAddGridObj, method);
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
  if ( (byte_4C2B5EA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_7450/*"INFO_MSG_SVTEQ_MATERIAL"*/);
    sub_1C2D490(&StringLiteral_7449/*"INFO_MSG_SVTEQ_BASE"*/);
    sub_1C2D490(&StringLiteral_5781/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_1C2D490(&StringLiteral_12186/*"SHORT_QP_INFO_MSG"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B5EA = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb
    || (detailInfoLb = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    detailInfoLb,
                                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___)) == 0 )
  {
LABEL_25:
    sub_1C2D6EC(detailInfoLb, *(_QWORD *)&state);
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
      v7 = &StringLiteral_5781/*"EXE_SUMMON_COMBINE_TXT"*/;
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
      v7 = &StringLiteral_12186/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else if ( v3 == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = &StringLiteral_7450/*"INFO_MSG_SVTEQ_MATERIAL"*/;
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
    v7 = &StringLiteral_7449/*"INFO_MSG_SVTEQ_BASE"*/;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Int64_array *v13; // x8
  il2cpp_array_size_t max_length; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BalanceConfig_c *v24; // x8
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  struct UserServantEntity_o **p_baseData; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UserServantEntity_o *baseData; // x8
  __int64 v32; // x20
  __int64 v33; // x23
  int32_t v34; // w26
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v36; // x24
  struct UserServantEntity_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x20
  __int64 v39; // x23
  __int64 v40; // x25
  __int64 v41; // x2
  unsigned __int64 v42; // x26
  struct System_Int64_array *v43; // x8
  int32_t *v44; // x22
  int64_t v45; // x28
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  char v47; // w29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v49; // x23
  UnityEngine_Transform_o *v50; // x20
  __int64 v51; // x20
  __int64 v52; // x25
  __int64 v53; // x27
  int32_t v54; // w25
  __int64 v55; // x25
  __int64 v56; // x27
  UserServantEntity_o *v57; // x8
  __int64 v58; // x25
  __int64 v59; // x27
  int32_t v60; // w25
  UnityEngine_GameObject_o *v61; // x21
  bool v62; // w20
  __int64 v63; // x23
  __int64 v64; // x25
  __int64 v65; // x20
  __int64 v66; // x23
  int v67; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v69; // x23
  MaterialSvtInfo_o *v70; // x25
  MaterialSvtInfo_ClickDelegate_o *v71; // x27
  UserServantEntity_o *v72; // x8
  int32_t v73; // w26
  __int64 v74; // x20
  __int64 v75; // x23
  int32_t v76; // w0
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  UILabel_o *basicExpLb; // x20
  int32_t v81; // w8
  Il2CppObject *v82; // x0
  UILabel_o *addTotalExpLb; // x20
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  const MethodInfo *v88; // x2
  struct UserServantEntity_o *v89; // x8
  int32_t afterMaxLv; // w23
  struct UserServantEntity_o *v91; // x8
  UILabel_o *currentLvLb; // x20
  UILabel_o *increLvLb; // x24
  int32_t *p_increLv; // x20
  UILabel_o *increValLb; // x24
  System_String_o *v96; // x25
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  __int64 v103; // x20
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  UserServantEntity_o *v106; // x1
  struct UserServantEntity_o *v107; // x8
  int32_t v108; // w8
  int32_t v109; // w8
  bool v110; // w20
  float v111; // s0 OVERLAPPED
  float v112; // s1
  float v113; // s2
  float v114; // s3
  const MethodInfo *v115; // x1
  __int64 v116; // [xsp+10h] [xbp-A0h]
  int32_t v117; // [xsp+18h] [xbp-98h]
  int32_t v118; // [xsp+1Ch] [xbp-94h]
  __int64 v119; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **v121; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_4C2B5E3 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_CombineMenuControl_OnClickMaterial__);
    sub_1C2D490(&CombineSvtData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_25069/*"{0:N0}"*/);
    sub_1C2D490(&StringLiteral_9225/*"N0"*/);
    sub_1C2D490(&StringLiteral_7432/*"INCREMENT_SVTLEVEL"*/);
    sub_1C2D490(&StringLiteral_12474/*"SUM_INFO"*/);
    byte_4C2B5E3 = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqList, (int32_t)materialUsrSvtIdList, v7, v8);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectMtSvtEqTbl, (int32_t)svtEqMaterialList, v11, v12);
  v13 = v3->fields.materialUsrSvtIdList;
  if ( !v13 )
    goto LABEL_103;
  max_length = v13->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUM_INFO"*/, 0);
  increAmount = max_length;
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v17, v18, v19);
  v24 = BalanceConfig_TypeInfo;
  v25 = (Il2CppObject *)v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v24->static_fields->ServantCombineMax;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v21, v22, v23);
  Instance = (__int64)System_String__Format_63499156(v16, v25, v26, 0);
  if ( !selectSumLb )
    goto LABEL_103;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseData, (int32_t)baseSvtData, v29, v30);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_103;
  v33 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v32 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v126.fields.currentCryptoKey = v33;
  *(_QWORD *)&v126.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v126, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)max_length < 1 )
    return;
  v36 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_103;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v127.fields.currentCryptoKey = v40;
  *(_QWORD *)&v127.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v127, 0);
  if ( !v38 )
    goto LABEL_103;
  v118 = v34;
  v121 = &this->fields.baseData;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v38,
                        Instance,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_103;
  v119 = (unsigned int)max_length;
  v42 = 0;
  v116 = Instance;
  v117 = *(_DWORD *)(Instance + 88);
  do
  {
    v43 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_103;
    if ( v42 >= LODWORD(v43->max_length) )
      sub_1C2D6F4(Instance, lv, v41);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_103;
    v44 = (int32_t *)v3;
    v45 = v43->m_Items[v42];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v45,
                 (const MethodInfo_3419FEC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_103;
    svtFaceInfo = this->fields.svtFaceInfo;
    v47 = Instance;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Instance )
      goto LABEL_103;
    v49 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    v50 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_4C20DA1 )
    {
      Instance = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v50 )
      goto LABEL_103;
    UnityEngine_Transform__set_localPosition(v50, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v49, 0);
    if ( !Instance )
      goto LABEL_103;
    v134.fields.x = 0.5;
    v134.fields.y = 0.5;
    v134.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v134, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_103;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_103;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v45,
                          (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_103;
    v51 = Instance;
    v53 = *(_QWORD *)(Instance + 80);
    v52 = *(_QWORD *)(Instance + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v128.fields.currentCryptoKey = v53;
    *(_QWORD *)&v128.fields.fakeValue = v52;
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v128, 0);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v51 + 96),
                 0);
    if ( !v36 )
      goto LABEL_103;
    Instance = (__int64)ServantLimitMaster__GetEntity(v36, v54, Instance, 0);
    if ( !Instance )
      goto LABEL_103;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v56 = *(_QWORD *)(v51 + 96);
    v55 = *(_QWORD *)(v51 + 104);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v129.fields.currentCryptoKey = v56;
    *(_QWORD *)&v129.fields.fakeValue = v55;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v129, 0);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v57 = *v121;
    if ( !*v121 )
      goto LABEL_103;
    v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v130.fields.currentCryptoKey = v59;
    *(_QWORD *)&v130.fields.fakeValue = v58;
    v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v130, 0);
    if ( v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v51 + 80),
                  0) )
    {
      v61 = v49;
      Instance = (__int64)*v121;
      if ( !*v121 )
        goto LABEL_103;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0) )
      {
        v62 = 0;
      }
      else
      {
        v64 = *(_QWORD *)(v51 + 96);
        v63 = *(_QWORD *)(v51 + 104);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v131.fields.currentCryptoKey = v64;
        *(_QWORD *)&v131.fields.fakeValue = v63;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v131, 0) < 1 )
        {
          v67 = 1;
        }
        else
        {
          v66 = *(_QWORD *)(v51 + 96);
          v65 = *(_QWORD *)(v51 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v132.fields.currentCryptoKey = v66;
          *(_QWORD *)&v132.fields.fakeValue = v65;
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v132, 0) + 1;
          this->fields.isLimitUpMaterial = 1;
        }
        v49 = v61;
        v118 += v67;
        v62 = v118 > v117;
      }
    }
    else
    {
      v62 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v49,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v69 = this->fields.baseData;
    v70 = (MaterialSvtInfo_o *)Component_object;
    v71 = (MaterialSvtInfo_ClickDelegate_o *)sub_1C2D6DC(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(
      v71,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0);
    if ( !v70 )
      goto LABEL_103;
    MaterialSvtInfo__setMaterialSvtInfo_48653732(v70, v42++, v69, v45, 1, v62, v47 & 1, v71, 0);
    v3 = (SetCombineData_o *)v44;
  }
  while ( v119 != v42 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_103;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0);
  v72 = *v121;
  v73 = v118 >= v117 ? v117 : v118;
  if ( !v72 )
    goto LABEL_103;
  v75 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
  v74 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v133.fields.currentCryptoKey = v75;
  *(_QWORD *)&v133.fields.fakeValue = v74;
  v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v133, 0);
  Instance = (__int64)ServantLimitMaster__GetEntity(v36, v76, v73, 0);
  if ( !Instance )
    goto LABEL_103;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v81 = v44[8];
  this->fields.getExpVal = v44[9] + v81;
  increAmount = v81;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v77, v78, v79);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v82, 0);
  if ( !basicExpLb )
    goto LABEL_103;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v44[9];
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantCombineMax, v84, v85, v86);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v87, 0);
  if ( !addTotalExpLb )
    goto LABEL_103;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0);
  v89 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v116 + 132);
  if ( !v89 )
    goto LABEL_103;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v89->fields.exp + this->fields.getExpVal;
  lv = (unsigned int)v89->fields.lv;
  this->fields.checkLv = lv;
  if ( (_DWORD)lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, lv, v88) )
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
  v91 = this->fields.baseData;
  if ( !v91 )
    goto LABEL_103;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v91 + 256, 0);
  if ( !currentLvLb )
    goto LABEL_103;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0);
  increLvLb = this->fields.increLvLb;
  p_increLv = &this->fields.increLv;
  Instance = (__int64)System_Int32__ToString((int)this + 488, 0);
  if ( !increLvLb )
    goto LABEL_103;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0);
  if ( !*v121 )
    goto LABEL_103;
  this->fields.increAmount = this->fields.increLv - (*v121)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_7432/*"INCREMENT_SVTLEVEL"*/, 0);
  increAmount = this->fields.increAmount;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &increAmount, v97, v98, v99);
  Instance = (__int64)System_String__Format(v96, v100, 0);
  if ( !increValLb )
    goto LABEL_103;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *v121,
                        *p_increLv,
                        v73,
                        0);
  if ( !getSkillLb )
    goto LABEL_103;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v44[7];
  Instance = (__int64)System_Int32__ToString_64968716((int)this + 512, (System_String_o *)StringLiteral_9225/*"N0"*/, 0);
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
    *v121,
    *p_increLv,
    0);
  afterAtk[1] += v44[12];
  afterAtk[0] += v44[13];
  v103 = sub_1C2D6DC(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v103, 0);
  if ( !v103 )
    goto LABEL_103;
  v106 = *v121;
  *(_QWORD *)(v103 + 16) = *v121;
  sub_1C2D434((CGThumbnailListItem_o *)(v103 + 16), (int32_t)v106, v104, v105);
  *(_DWORD *)(v103 + 24) = this->fields.increLv;
  *(_DWORD *)(v103 + 28) = v73;
  *(_DWORD *)(v103 + 32) = this->fields.afterMaxLv;
  v107 = this->fields.baseData;
  if ( !v107 )
    goto LABEL_103;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_103;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v107->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0);
  *(_DWORD *)(v103 + 36) = lateExp[1];
  v108 = afterAtk[1];
  *(_DWORD *)(v103 + 40) = lateExp[0];
  *(_DWORD *)(v103 + 44) = v108;
  v109 = afterAtk[0];
  *(_DWORD *)(v103 + 48) = v44[12];
  *(_DWORD *)(v103 + 52) = v109;
  *(_DWORD *)(v103 + 56) = v44[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_103;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v103, 0);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v111 = 1.0;
      v110 = 1;
      v112 = 1.0;
      goto LABEL_101;
    }
LABEL_103:
    sub_1C2D6EC(Instance, lv);
  }
  if ( !Instance )
    goto LABEL_103;
  v110 = 0;
  v111 = 1.0;
  v112 = 0.0;
LABEL_101:
  v113 = v112;
  v114 = v111;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v111, 0);
  this->fields.isExeCombine = v110;
  SvtEquipCombineControl__SetExeBtnState(this, v115);
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

  if ( (byte_4C2B5E5 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3767/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_4C2B5E5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
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
    sub_1C2D6EC(SelfUserGame, v5);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *autoSetAnnounceObj; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C2B5F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_TryGetComponent_TweenAlpha___);
    byte_4C2B5F5 = 1;
  }
  component = 0;
  autoSetAnnounceCoroutine = this->fields.autoSetAnnounceCoroutine;
  if ( autoSetAnnounceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_71149896((UnityEngine_MonoBehaviour_o *)this, autoSetAnnounceCoroutine, 0);
    this->fields.autoSetAnnounceCoroutine = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoSetAnnounceCoroutine, 0, v4, v5);
  }
  autoSetAnnounceObj = (UnityEngine_Component_o *)this->fields.autoSetAnnounceObj;
  if ( !autoSetAnnounceObj )
    goto LABEL_12;
  if ( UnityEngine_Component__TryGetComponent_object_(
         autoSetAnnounceObj,
         &component,
         (const MethodInfo_30C621C *)Method_UnityEngine_Component_TryGetComponent_TweenAlpha___) )
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
    sub_1C2D6EC(autoSetAnnounceObj, autoSetAnnounceCoroutine);
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
    sub_1C2D6EC(0, v4);
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
    sub_1C2D6EC(autoSetAnnounceObj, method);
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

  if ( (byte_4C2B5F8 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C2D490(&StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_1C2D490(&StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    byte_4C2B5F8 = 1;
  }
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v6 = &StringLiteral_2089/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v6 = &StringLiteral_2088/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
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
    sub_1C2D6EC(recommendedConfigDialog, v10);
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
  if ( (byte_4C21474 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_b__87_0__);
    this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C21474 = 1;
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
    v14 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
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
                v9 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v9, autoSetAnnounceWaitTime, 0);
                v2->fields.__2__current = (Il2CppObject *)v9;
                p__2__current = &v2->fields.__2__current;
                sub_1C2D434(p__2__current);
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
    sub_1C2D6EC(this, method);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C21468 & 1) == 0 )
  {
    sub_1C2D490(&SvtEquipCombineControl___c_TypeInfo);
    byte_4C21468 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SvtEquipCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEquipCombineControl___c_TypeInfo->static_fields->__9 = (struct SvtEquipCombineControl___c_o *)v1;
  sub_1C2D434(SvtEquipCombineControl___c_TypeInfo->static_fields);
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
    sub_1C2D6EC(this, 0);
  return x->fields.equipTarget1;
}


UserServantEntity_o *SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_10(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C21471 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C21471 = 1;
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C2146A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Value__);
    byte_4C2146A = 1;
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
  if ( (byte_4C2146B & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C2146B = 1;
  }
  if ( !key )
    sub_1C2D6EC(this, x.fields.key);
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
  if ( (byte_4C2146C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2146C = 1;
  }
  if ( !key )
    sub_1C2D6EC(this, x.fields.key);
  v5 = *(_QWORD *)&key->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&key->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_6(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C2146D & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C2146D = 1;
  }
  if ( !key )
    sub_1C2D6EC(this, x.fields.key);
  return UserServantEntity__getLimitCount(key, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_7(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C2146E & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C2146E = 1;
  }
  if ( !key )
    sub_1C2D6EC(this, x.fields.key);
  return key->fields.lv;
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_8(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_4C2146F & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_4C2146F = 1;
  }
  if ( !key )
    sub_1C2D6EC(this, x.fields.key);
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
  if ( (byte_4C21470 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C21470 = 1;
  }
  if ( !key )
    sub_1C2D6EC(this, x.fields.key);
  v4 = *(_OWORD *)&key->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&key->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v6, 0);
}


void SvtEquipCombineControl___c___SetRecommendedMaterial_b__81_1(
        SvtEquipCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C21469 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21469 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C21472 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21472 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C2D6EC(Instance, v6);
  }
}


void SvtEquipCombineControl___c__DisplayClass81_0___SetRecommendedMaterial_b__2(
        SvtEquipCombineControl___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  struct SvtEquipCombineControl_o *_4__this; // x8

  if ( (byte_4C21473 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21473 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)Instance, v4);
}