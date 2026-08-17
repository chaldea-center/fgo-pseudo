void SvtEquipCombineControl___cctor(const MethodInfo *method)
{
  if ( (byte_596A43D & 1) == 0 )
  {
    sub_2213A60(&SvtEquipCombineControl_TypeInfo);
    byte_596A43D = 1;
  }
  SvtEquipCombineControl_TypeInfo->static_fields->MaxSelectNum = 20;
}


void SvtEquipCombineControl___ctor(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A43C & 1) == 0 )
  {
    sub_2213A60(&CombineMenuControl_TypeInfo);
    byte_596A43C = 1;
  }
  if ( !*(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, method, v2);
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

  if ( (byte_596A42A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A42A = 1;
  }
  afterMaxLv = this->fields.afterMaxLv;
  if ( afterMaxLv > lv )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0
      || (Instance = ServantExpMaster__GetEntity((ServantExpMaster_o *)Instance, this->fields.expType, lv, 0)) == 0 )
    {
      sub_2213CDC(Instance, v7);
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
  bool v15; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  if ( (byte_596A427 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A427 = 1;
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
        SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v14);
    }
    v15 = 1;
  }
  else
  {
    SvtEquipCombineControl__InitMaterialSvtEqInfo(this, (const MethodInfo *)selectBase);
    v15 = 0;
  }
  this->fields.baseUserServantEntity = selectBase;
  this->fields.isSelectBase = v15;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_596A42F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A42F = 1;
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
    v11 = childCount + 1;
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
                                                v11 - 2,
                                                0);
      if ( !selectGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v11 <= 1 )
        goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(selectGrid, method);
  }
LABEL_13:
  this->fields.selectMtSvtEqList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectMtSvtEqList, 0, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *SvtEquipCombineControl__FadeAutoSetAnnounceLabel(
        SvtEquipCombineControl_o *this,
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

  if ( (byte_596A43A & 1) == 0 )
  {
    sub_2213A60(&SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
    byte_596A43A = 1;
  }
  v5 = sub_2213CCC(SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = localizationKey;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)localizationKey, v12, v13, v14, v15, v16, v17);
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
  __int64 v2; // x2
  int v4; // w8
  __int64 *v5; // x8

  if ( (byte_596A431 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8636/*"LIMIT_UP_MATERIAL_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_8619/*"LIMIT_BOTH_MSG"*/);
    sub_2213A60(&StringLiteral_8634/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/);
    byte_596A431 = 1;
  }
  if ( this->fields.isLimitOverMaterial )
  {
    v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( this->fields.isLimitUpMaterial )
    {
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      v5 = &StringLiteral_8619/*"LIMIT_BOTH_MSG"*/;
    }
    else
    {
      if ( !v4 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
      v5 = &StringLiteral_8634/*"LIMIT_OVER_MATERIAL_INFO_MSG"*/;
    }
    return LocalizationManager__Get((System_String_o *)*v5, 0);
  }
  if ( this->fields.isLimitUpMaterial )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v5 = &StringLiteral_8636/*"LIMIT_UP_MATERIAL_INFO_MSG"*/;
    return LocalizationManager__Get((System_String_o *)*v5, 0);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


SetCombineData_o *SvtEquipCombineControl__GetRecommendedCombineData(
        SvtEquipCombineControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x20
  int64_t ConfigSaveData; // x0
  __int64 Rarity; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  UserServantEntity_array *ServantEquipList; // x22
  System_Collections_Generic_Dictionary_object__int__o *v8; // x19
  __int64 v9; // x2
  struct UserServantEntity_o *baseData; // x8
  __int64 v11; // x2
  int64_t v12; // x23
  System_Collections_Generic_List_int__o *v13; // x9
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x24
  SvtEquipCombineControl___c_c *v15; // x0
  struct SvtEquipCombineControl___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__83_0; // x25
  Il2CppObject *v18; // x26
  struct SvtEquipCombineControl___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_T__o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x23
  SvtEquipCombineControl___c_c *v31; // x0
  struct SvtEquipCombineControl___c_StaticFields *v32; // x8
  System_Func_object__object__o *_9__83_1; // x24
  Il2CppObject *v34; // x25
  struct SvtEquipCombineControl___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  SvtEquipCombineControl___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x23
  struct SvtEquipCombineControl___c_StaticFields *v48; // x9
  System_Func_T__TResult__o *_9__83_2; // x24
  Il2CppObject *v50; // x25
  struct SvtEquipCombineControl___c_StaticFields *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x2
  il2cpp_array_size_t max_length; // x24
  __int64 v63; // x23
  UserServantEntity_o *v64; // x25
  __int64 v65; // x26
  __int64 v66; // x27
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *Entity; // x27
  __int128 v70; // q1
  int v71; // w8
  int64_t v72; // x26
  struct UserServantEntity_o *v73; // x8
  __int128 v74; // q0
  __int128 v75; // q1
  int v76; // w8
  const MethodInfo *v77; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // x0
  __int64 v79; // x26
  int32_t v80; // w26
  int32_t v81; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // x0
  __int64 v83; // x26
  int32_t v84; // w26
  __int64 v85; // x1
  __int64 v86; // x2
  SvtEquipCombineControl___c_c *v87; // x0
  struct SvtEquipCombineControl___c_StaticFields *v88; // x8
  System_Func_T__TResult__o *_9__83_3; // x21
  Il2CppObject *v90; // x22
  struct SvtEquipCombineControl___c_StaticFields *v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  SvtEquipCombineControl___c_c *v101; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v102; // x20
  struct SvtEquipCombineControl___c_StaticFields *v103; // x9
  System_Func_T__TResult__o *_9__83_4; // x21
  Il2CppObject *v105; // x22
  struct SvtEquipCombineControl___c_StaticFields *v106; // x0
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  SvtEquipCombineControl___c_c *v116; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v117; // x20
  struct SvtEquipCombineControl___c_StaticFields *v118; // x9
  System_Func_T__TResult__o *_9__83_5; // x21
  Il2CppObject *v120; // x22
  struct SvtEquipCombineControl___c_StaticFields *v121; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v128; // x0
  __int64 v129; // x1
  __int64 v130; // x2
  SvtEquipCombineControl___c_c *v131; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v132; // x20
  struct SvtEquipCombineControl___c_StaticFields *v133; // x9
  System_Func_T__TResult__o *_9__83_6; // x21
  Il2CppObject *v135; // x22
  struct SvtEquipCombineControl___c_StaticFields *v136; // x0
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v143; // x0
  __int64 v144; // x1
  __int64 v145; // x2
  SvtEquipCombineControl___c_c *v146; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v147; // x20
  struct SvtEquipCombineControl___c_StaticFields *v148; // x9
  System_Func_T__TResult__o *_9__83_7; // x21
  Il2CppObject *v150; // x22
  struct SvtEquipCombineControl___c_StaticFields *v151; // x0
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v158; // x0
  __int64 v159; // x1
  __int64 v160; // x2
  SvtEquipCombineControl___c_c *v161; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v162; // x20
  struct SvtEquipCombineControl___c_StaticFields *v163; // x9
  System_Func_T__TResult__o *_9__83_8; // x21
  Il2CppObject *v165; // x22
  struct SvtEquipCombineControl___c_StaticFields *v166; // x0
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v173; // x0
  __int64 v174; // x1
  __int64 v175; // x2
  SvtEquipCombineControl___c_c *v176; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v177; // x20
  struct SvtEquipCombineControl___c_StaticFields *v178; // x9
  System_Func_T__TResult__o *_9__83_9; // x21
  Il2CppObject *v180; // x22
  struct SvtEquipCombineControl___c_StaticFields *v181; // x0
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v188; // x0
  __int64 v189; // x1
  __int64 v190; // x2
  SvtEquipCombineControl___c_c *v191; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v192; // x20
  struct SvtEquipCombineControl___c_StaticFields *v193; // x9
  System_Func_T__TResult__o *_9__83_10; // x21
  Il2CppObject *v195; // x22
  struct SvtEquipCombineControl___c_StaticFields *v196; // x0
  System_String_o *v197; // x2
  System_String_o *v198; // x3
  int32_t v199; // w4
  int32_t v200; // w5
  bool v201; // w6
  bool v202; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v203; // x0
  System_Collections_Generic_List_UserServantEntity__o *v204; // x0
  const MethodInfo *v205; // x2
  __int64 value; // [xsp+10h] [xbp-140h]
  __int64 valuea; // [xsp+10h] [xbp-140h]
  __int64 v209; // [xsp+18h] [xbp-138h]
  __int64 v210; // [xsp+20h] [xbp-130h]
  System_Collections_Generic_List_int__o *v211; // [xsp+28h] [xbp-128h]
  System_Collections_ICollection_o *self; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_List_int__o *selectTypeList; // [xsp+38h] [xbp-118h]
  UserServantGrandMaster_o *v214; // [xsp+40h] [xbp-110h]
  UserRecommendSupportMaster_o *v215; // [xsp+48h] [xbp-108h]
  System_Collections_Generic_List_T__o *v216; // [xsp+58h] [xbp-F8h]
  UserDeckMaster_o *v217; // [xsp+60h] [xbp-F0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+70h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v220; // [xsp+90h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v221; // [xsp+B0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v222; // [xsp+D0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v224; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v225; // 0:x0.16

  if ( (byte_596A436 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserRecommendSupportMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantLeaderMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__);
    sub_2213A60(&System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_ObscuredLong___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_2213A60(&System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    sub_2213A60(&System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    sub_2213A60(&System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    sub_2213A60(&System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    sub_2213A60(&System_Func_int__Rarity_TYPE__TypeInfo);
    sub_2213A60(&System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ObscuredLong__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_Rarity_TYPE___ctor___91681120);
    sub_2213A60(&System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__);
    sub_2213A60(&SvtEquipCombineControl___c_TypeInfo);
    byte_596A436 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_150;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)ConfigSaveData;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v8 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_UserServantEntity__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v8,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int___ctor__);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_150;
  v209 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v210 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  if ( !*(&RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo, Rarity, v9);
  ConfigSaveData = (int64_t)RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( !ConfigSaveData )
    goto LABEL_150;
  v12 = ConfigSaveData;
  v13 = *(System_Collections_Generic_List_int__o **)(ConfigSaveData + 16);
  v14 = *(System_Collections_Generic_IEnumerable_TSource__o **)(ConfigSaveData + 24);
  v15 = SvtEquipCombineControl___c_TypeInfo;
  selectTypeList = v13;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, Rarity, v11);
    v15 = SvtEquipCombineControl___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__83_0 = (System_Func_T__TResult__o *)static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, Rarity, v11);
      static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__83_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__Rarity_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__83_0,
      v18,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_0__,
      0);
    v19 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v19->__9__83_0 = (struct System_Func_int__Rarity_TYPE__o *)_9__83_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__83_0, (int32_t)_9__83_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                         v14,
                                                         (System_Func_TSource__TResult__o *)_9__83_0,
                                                         (const MethodInfo_388DB14 *)Method_System_Linq_Enumerable_Select_int__Rarity_TYPE___);
  self = (System_Collections_ICollection_o *)sub_2213CCC(System_Collections_Generic_List_Rarity_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_71734068(
    (System_Collections_Generic_List_T__o *)self,
    v26,
    (const MethodInfo_4469334 *)Method_System_Collections_Generic_List_Rarity_TYPE___ctor___91681120);
  v211 = *(System_Collections_Generic_List_int__o **)(v12 + 32);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27, v28);
  v217 = (UserDeckMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserDeckMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantLeaderMaster___);
  if ( !ConfigSaveData )
    goto LABEL_150;
  v30 = *(System_Collections_Generic_IEnumerable_TSource__o **)(ConfigSaveData + 40);
  v31 = SvtEquipCombineControl___c_TypeInfo;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, Rarity, v29);
    v31 = SvtEquipCombineControl___c_TypeInfo;
  }
  v32 = v31->static_fields;
  _9__83_1 = (System_Func_object__object__o *)v32->__9__83_1;
  if ( !_9__83_1 )
  {
    if ( !*(&v31->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v31, Rarity, v29);
      v32 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__83_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UserServantLeaderEntity__EquipTargetInfo__TypeInfo);
    System_Func_object__object____ctor(
      _9__83_1,
      v34,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_1__,
      0);
    v35 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v35->__9__83_1 = (struct System_Func_UserServantLeaderEntity__EquipTargetInfo__o *)_9__83_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__83_1, (int32_t)_9__83_1, v36, v37, v38, v39, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v30,
                                                         (System_Func_TSource__TResult__o *)_9__83_1,
                                                         (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UserServantLeaderEntity__EquipTargetInfo___);
  v43 = BasicHelper__ExcludeNull_object_(
          v42,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v46 = SvtEquipCombineControl___c_TypeInfo;
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v44, v45);
    v46 = SvtEquipCombineControl___c_TypeInfo;
  }
  v48 = v46->static_fields;
  _9__83_2 = (System_Func_T__TResult__o *)v48->__9__83_2;
  if ( !_9__83_2 )
  {
    if ( !*(&v46->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v46, v44, v45);
      v48 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__83_2 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_EquipTargetInfo__ObscuredLong__TypeInfo);
    System_Func_object__ObscuredLong____ctor(
      _9__83_2,
      v50,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_2__,
      0);
    v51 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v51->__9__83_2 = (struct System_Func_EquipTargetInfo__ObscuredLong__o *)_9__83_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v51->__9__83_2, (int32_t)_9__83_2, v52, v53, v54, v55, v56, v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__ObscuredLong_(
                                                               v47,
                                                               (System_Func_TSource__TResult__o *)_9__83_2,
                                                               (const MethodInfo_389155C *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__ObscuredLong___);
  v216 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_ObscuredLong_(
                                                   v58,
                                                   (const MethodInfo_38A0E70 *)Method_System_Linq_Enumerable_ToList_ObscuredLong___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59, v60);
  v215 = (UserRecommendSupportMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserRecommendSupportMaster___);
  ConfigSaveData = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v214 = (UserServantGrandMaster_o *)ConfigSaveData;
  if ( !ServantEquipList )
    goto LABEL_150;
  max_length = ServantEquipList->max_length;
  if ( (int)max_length >= 1 )
  {
    v63 = 0;
    do
    {
      if ( (unsigned int)v63 >= LODWORD(ServantEquipList->max_length) )
        sub_2213CE4(ConfigSaveData);
      v64 = ServantEquipList->m_Items[v63];
      if ( !v64 )
        goto LABEL_150;
      v65 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
      v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, Rarity, v61);
      *(_QWORD *)&v223.fields.currentCryptoKey = v65;
      *(_QWORD *)&v223.fields.fakeValue = v66;
      ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v223, 0);
      if ( !v6 )
        goto LABEL_150;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v6,
                 ConfigSaveData,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v70 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
      v71 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v222.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v222.fields.fakeValue = v70;
      if ( !v71 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v67, v68);
      v221 = v222;
      v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v221, 0);
      ConfigSaveData = UserServantEntity__IsChoice(v64, 0);
      if ( (ConfigSaveData & 1) == 0 )
      {
        ConfigSaveData = UserServantEntity__IsLock(v64, 0);
        if ( (ConfigSaveData & 1) == 0 )
        {
          v73 = this->fields.baseData;
          if ( !v73 )
            goto LABEL_150;
          v74 = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
          v75 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
          v76 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v222.fields.currentCryptoKey = v74;
          *(_OWORD *)&v222.fields.fakeValue = v75;
          if ( !v76 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, Rarity, v61);
          v220 = v222;
          ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v220, 0);
          if ( ConfigSaveData != v72 )
          {
            ConfigSaveData = (int64_t)v217;
            if ( !v217 )
              goto LABEL_150;
            ConfigSaveData = UserDeckMaster__IsEquip(v217, v72, 0);
            if ( (ConfigSaveData & 1) == 0 )
            {
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, Rarity, v61);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v219, v72, 0);
              ConfigSaveData = (int64_t)v216;
              if ( !v216 )
                goto LABEL_150;
              v222 = v219;
              ConfigSaveData = System_Collections_Generic_List_ObscuredLong___Contains(
                                 v216,
                                 &v222,
                                 (const MethodInfo_4486944 *)Method_System_Collections_Generic_List_ObscuredLong__Contains__);
              if ( (ConfigSaveData & 1) == 0 )
              {
                ConfigSaveData = (int64_t)v215;
                if ( !v215 )
                  goto LABEL_150;
                ConfigSaveData = UserRecommendSupportMaster__IsSettingServant(v215, v72, 1, 0);
                if ( (ConfigSaveData & 1) == 0 )
                {
                  ConfigSaveData = (int64_t)v214;
                  if ( !v214 )
                    goto LABEL_150;
                  ConfigSaveData = UserServantGrandMaster__IsSettingEquip(v214, v72, 0);
                  if ( (ConfigSaveData & 1) == 0 )
                  {
                    ConfigSaveData = SvtEquipCombineControl__IsMatchServantEquipType(
                                       (SvtEquipCombineControl_o *)ConfigSaveData,
                                       (ServantEntity_o *)Entity,
                                       selectTypeList,
                                       v77);
                    if ( (ConfigSaveData & 1) != 0 )
                    {
                      ConfigSaveData = BasicHelper__IsNullOrEmpty(self, 0);
                      if ( (ConfigSaveData & 1) != 0 )
                        goto LABEL_63;
                      Rarity = (unsigned int)UserServantEntity__getRarity(v64, 0);
                      ConfigSaveData = (int64_t)self;
                      if ( !self )
                        goto LABEL_150;
                      ConfigSaveData = System_Collections_Generic_List_Int32Enum___Contains(
                                         (System_Collections_Generic_List_T__o *)self,
                                         Rarity,
                                         (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_Rarity_TYPE__Contains__);
                      if ( (ConfigSaveData & 1) != 0 )
                      {
LABEL_63:
                        if ( !Entity )
                          goto LABEL_150;
                        if ( ServantEntity__get_IsSvtEquipExp((ServantEntity_o *)Entity, 0)
                          || !v64->fields.exp
                          && UserServantEntity__getLimitCntMax(v64, 0)
                          && !ServantEntity__get_IsChocolateSvtEquip((ServantEntity_o *)Entity, 0) )
                        {
                          ConfigSaveData = (int64_t)v211;
                          if ( !v211 )
                            goto LABEL_150;
                          if ( System_Collections_Generic_List_int___Contains(
                                 v211,
                                 1,
                                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
                          {
                            ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                               v211,
                                               0,
                                               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
                            if ( (ConfigSaveData & 1) == 0 )
                              continue;
                          }
                          v79 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
                          *(_QWORD *)&v78.fields.fakeValue = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                          {
                            value = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                              *(_QWORD *)&v78.fields.fakeValue,
                              v61);
                            *(_QWORD *)&v78.fields.fakeValue = value;
                          }
                          *(_QWORD *)&v78.fields.currentCryptoKey = v79;
                          v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v78, 0);
                          *(_QWORD *)&v224.fields.fakeValue = v209;
                          *(_QWORD *)&v224.fields.currentCryptoKey = v210;
                          ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v224, 0);
                          if ( v80 == (_DWORD)ConfigSaveData )
                          {
                            if ( !v8 )
                              goto LABEL_150;
                            v81 = 0;
                          }
                          else
                          {
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp((ServantEntity_o *)Entity, 0);
                            if ( (ConfigSaveData & 1) != 0 )
                            {
                              if ( !v8 )
                                goto LABEL_150;
                              v81 = 20;
                            }
                            else
                            {
                              if ( !v8 )
                                goto LABEL_150;
                              v81 = 40;
                            }
                          }
                        }
                        else
                        {
                          ConfigSaveData = (int64_t)v211;
                          if ( !v211 )
                            goto LABEL_150;
                          if ( !System_Collections_Generic_List_int___Contains(
                                  v211,
                                  1,
                                  (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
                          {
                            ConfigSaveData = System_Collections_Generic_List_int___Contains(
                                               v211,
                                               0,
                                               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
                            if ( (ConfigSaveData & 1) != 0 )
                              continue;
                          }
                          v83 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
                          *(_QWORD *)&v82.fields.fakeValue = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                          {
                            valuea = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                              *(_QWORD *)&v82.fields.fakeValue,
                              v61);
                            *(_QWORD *)&v82.fields.fakeValue = valuea;
                          }
                          *(_QWORD *)&v82.fields.currentCryptoKey = v83;
                          v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v82, 0);
                          *(_QWORD *)&v225.fields.fakeValue = v209;
                          *(_QWORD *)&v225.fields.currentCryptoKey = v210;
                          ConfigSaveData = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v225, 0);
                          if ( v84 == (_DWORD)ConfigSaveData )
                          {
                            if ( !v8 )
                              goto LABEL_150;
                            v81 = 10;
                          }
                          else
                          {
                            ConfigSaveData = ServantEntity__get_IsSvtEquipExp((ServantEntity_o *)Entity, 0);
                            if ( (ConfigSaveData & 1) != 0 )
                            {
                              if ( !v8 )
                                goto LABEL_150;
                              v81 = 30;
                            }
                            else
                            {
                              if ( !v8 )
                                goto LABEL_150;
                              v81 = 50;
                            }
                          }
                        }
                        System_Collections_Generic_Dictionary_object__int___Add(
                          v8,
                          (Il2CppObject *)v64,
                          v81,
                          (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__Add__);
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
    while ( (_DWORD)max_length != (_DWORD)++v63 );
  }
  if ( !v8 )
LABEL_150:
    sub_2213CDC(ConfigSaveData, Rarity);
  if ( !System_Collections_Generic_Dictionary_object__int___get_Count(
          v8,
          (const MethodInfo_3FF3D54 *)Method_System_Collections_Generic_Dictionary_UserServantEntity__int__get_Count__) )
    return 0;
  v87 = SvtEquipCombineControl___c_TypeInfo;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v85, v86);
    v87 = SvtEquipCombineControl___c_TypeInfo;
  }
  v88 = v87->static_fields;
  _9__83_3 = (System_Func_T__TResult__o *)v88->__9__83_3;
  if ( !_9__83_3 )
  {
    if ( !*(&v87->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v87, v85, v86);
      v88 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v90 = (Il2CppObject *)v88->__9;
    _9__83_3 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_3,
      v90,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_3__,
      0);
    v91 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v91->__9__83_3 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v91->__9__83_3, (int32_t)_9__83_3, v92, v93, v94, v95, v96, v97);
  }
  v98 = System_Linq_Enumerable__OrderBy_KeyValuePair_object__int___int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__TKey__o *)_9__83_3,
          (const MethodInfo_38887B0 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_UserServantEntity__int___int___);
  v101 = SvtEquipCombineControl___c_TypeInfo;
  v102 = v98;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v99, v100);
    v101 = SvtEquipCombineControl___c_TypeInfo;
  }
  v103 = v101->static_fields;
  _9__83_4 = (System_Func_T__TResult__o *)v103->__9__83_4;
  if ( !_9__83_4 )
  {
    if ( !*(&v101->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v101, v99, v100);
      v103 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v105 = (Il2CppObject *)v103->__9;
    _9__83_4 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_4,
      v105,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_4__,
      0);
    v106 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v106->__9__83_4 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_4;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v106->__9__83_4,
      (int32_t)_9__83_4,
      v107,
      v108,
      v109,
      v110,
      v111,
      v112);
  }
  v113 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___int_(
           v102,
           (System_Func_TSource__TKey__o *)_9__83_4,
           (const MethodInfo_389A564 *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___int___);
  v116 = SvtEquipCombineControl___c_TypeInfo;
  v117 = v113;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v114, v115);
    v116 = SvtEquipCombineControl___c_TypeInfo;
  }
  v118 = v116->static_fields;
  _9__83_5 = (System_Func_T__TResult__o *)v118->__9__83_5;
  if ( !_9__83_5 )
  {
    if ( !*(&v116->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v116, v114, v115);
      v118 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v120 = (Il2CppObject *)v118->__9;
    _9__83_5 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___int__TypeInfo);
    System_Func_KeyValuePair_object__int___int____ctor(
      _9__83_5,
      v120,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_5__,
      0);
    v121 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v121->__9__83_5 = (struct System_Func_KeyValuePair_UserServantEntity__int___int__o *)_9__83_5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v121->__9__83_5,
      (int32_t)_9__83_5,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
  }
  v128 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___int_(
           v117,
           (System_Func_TSource__TKey__o *)_9__83_5,
           (const MethodInfo_389AEF4 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___int___);
  v131 = SvtEquipCombineControl___c_TypeInfo;
  v132 = v128;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v129, v130);
    v131 = SvtEquipCombineControl___c_TypeInfo;
  }
  v133 = v131->static_fields;
  _9__83_6 = (System_Func_T__TResult__o *)v133->__9__83_6;
  if ( !_9__83_6 )
  {
    if ( !*(&v131->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v131, v129, v130);
      v133 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v135 = (Il2CppObject *)v133->__9;
    _9__83_6 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_6,
      v135,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_6__,
      0);
    v136 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v136->__9__83_6 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v136->__9__83_6,
      (int32_t)_9__83_6,
      v137,
      v138,
      v139,
      v140,
      v141,
      v142);
  }
  v143 = System_Linq_Enumerable__ThenBy_KeyValuePair_object__int___long_(
           v132,
           (System_Func_TSource__TKey__o *)_9__83_6,
           (const MethodInfo_389A630 *)Method_System_Linq_Enumerable_ThenBy_KeyValuePair_UserServantEntity__int___long___);
  v146 = SvtEquipCombineControl___c_TypeInfo;
  v147 = v143;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v144, v145);
    v146 = SvtEquipCombineControl___c_TypeInfo;
  }
  v148 = v146->static_fields;
  _9__83_7 = (System_Func_T__TResult__o *)v148->__9__83_7;
  if ( !_9__83_7 )
  {
    if ( !*(&v146->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v146, v144, v145);
      v148 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v150 = (Il2CppObject *)v148->__9;
    _9__83_7 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_7,
      v150,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_7__,
      0);
    v151 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v151->__9__83_7 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v151->__9__83_7,
      (int32_t)_9__83_7,
      v152,
      v153,
      v154,
      v155,
      v156,
      v157);
  }
  v158 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
           v147,
           (System_Func_TSource__TKey__o *)_9__83_7,
           (const MethodInfo_389AFC0 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v161 = SvtEquipCombineControl___c_TypeInfo;
  v162 = v158;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v159, v160);
    v161 = SvtEquipCombineControl___c_TypeInfo;
  }
  v163 = v161->static_fields;
  _9__83_8 = (System_Func_T__TResult__o *)v163->__9__83_8;
  if ( !_9__83_8 )
  {
    if ( !*(&v161->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v161, v159, v160);
      v163 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v165 = (Il2CppObject *)v163->__9;
    _9__83_8 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_8,
      v165,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_8__,
      0);
    v166 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v166->__9__83_8 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v166->__9__83_8,
      (int32_t)_9__83_8,
      v167,
      v168,
      v169,
      v170,
      v171,
      v172);
  }
  v173 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
           v162,
           (System_Func_TSource__TKey__o *)_9__83_8,
           (const MethodInfo_389AFC0 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v176 = SvtEquipCombineControl___c_TypeInfo;
  v177 = v173;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v174, v175);
    v176 = SvtEquipCombineControl___c_TypeInfo;
  }
  v178 = v176->static_fields;
  _9__83_9 = (System_Func_T__TResult__o *)v178->__9__83_9;
  if ( !_9__83_9 )
  {
    if ( !*(&v176->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v176, v174, v175);
      v178 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v180 = (Il2CppObject *)v178->__9;
    _9__83_9 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___long__TypeInfo);
    System_Func_KeyValuePair_object__int___long____ctor(
      _9__83_9,
      v180,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_9__,
      0);
    v181 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v181->__9__83_9 = (struct System_Func_KeyValuePair_UserServantEntity__int___long__o *)_9__83_9;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v181->__9__83_9,
      (int32_t)_9__83_9,
      v182,
      v183,
      v184,
      v185,
      v186,
      v187);
  }
  v188 = System_Linq_Enumerable__ThenByDescending_KeyValuePair_object__int___long_(
           v177,
           (System_Func_TSource__TKey__o *)_9__83_9,
           (const MethodInfo_389AFC0 *)Method_System_Linq_Enumerable_ThenByDescending_KeyValuePair_UserServantEntity__int___long___);
  v191 = SvtEquipCombineControl___c_TypeInfo;
  v192 = (System_Collections_Generic_IEnumerable_TSource__o *)v188;
  if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v189, v190);
    v191 = SvtEquipCombineControl___c_TypeInfo;
  }
  v193 = v191->static_fields;
  _9__83_10 = (System_Func_T__TResult__o *)v193->__9__83_10;
  if ( !_9__83_10 )
  {
    if ( !*(&v191->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v191, v189, v190);
      v193 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    }
    v195 = (Il2CppObject *)v193->__9;
    _9__83_10 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__TypeInfo);
    System_Func_KeyValuePair_object__int___object____ctor(
      _9__83_10,
      v195,
      Method_SvtEquipCombineControl___c__GetRecommendedCombineData_b__83_10__,
      0);
    v196 = SvtEquipCombineControl___c_TypeInfo->static_fields;
    v196->__9__83_10 = (struct System_Func_KeyValuePair_UserServantEntity__int___UserServantEntity__o *)_9__83_10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v196->__9__83_10,
      (int32_t)_9__83_10,
      v197,
      v198,
      v199,
      v200,
      v201,
      v202);
  }
  v203 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___object_(
                                                                v192,
                                                                (System_Func_TSource__TResult__o *)_9__83_10,
                                                                (const MethodInfo_388BBAC *)Method_System_Linq_Enumerable_Select_KeyValuePair_UserServantEntity__int___UserServantEntity___);
  v204 = (System_Collections_Generic_List_UserServantEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v203,
                                                                   (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
  return SvtEquipCombineControl__GetRecommendedSvtEquipCombineData(this, v204, v205);
}


SetCombineData_o *SvtEquipCombineControl__GetRecommendedSvtEquipCombineData(
        SvtEquipCombineControl_o *this,
        System_Collections_Generic_List_UserServantEntity__o *targetMaterialList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x19
  void *combineResStatus; // x0
  __int64 v9; // x1
  struct MenuListControl_o *menuListCtr; // x8
  CombineMaterialMaster_o *v11; // x21
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x24
  float v13; // s0
  float v14; // s8
  __int64 v15; // x2
  float v16; // s0
  struct UserServantEntity_o *baseData; // x8
  float v18; // s9
  __int64 v19; // x21
  __int64 v20; // x24
  Il2CppObject *Entity; // x26
  UserServantEntity_o *v22; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t size; // w10
  int v25; // w27
  int v26; // w22
  int32_t v27; // w25
  float v28; // s0
  unsigned int v29; // w9
  unsigned int v30; // w8
  SvtEquipCombineControl_o *v31; // x26
  System_Collections_Generic_List_UserServantEntity__o *v32; // x23
  __int64 v33; // x2
  UserServantEntity_o *v34; // x28
  __int64 v35; // x21
  __int64 v36; // x29
  int32_t v37; // w0
  _DWORD *v38; // x29
  __int64 v39; // x2
  int v40; // s10
  float v41; // s10
  unsigned int v42; // w8
  unsigned int v43; // w19
  unsigned int v44; // w8
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x8
  int v52; // w29
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  const MethodInfo *v57; // x3
  struct UserServantEntity_o *v58; // x8
  __int64 v59; // x1
  __int64 v60; // x2
  SvtEquipCombineControl_c *v61; // x0
  System_Collections_Generic_List_object__o *v62; // x19
  System_Collections_Generic_Dictionary_long__bool__o *v63; // x21
  _BOOL8 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  Il2CppObject v67; // q1
  int v68; // w8
  int64_t v69; // x0
  __int64 v70; // x22
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct UserServantEntity_o *v77; // x1
  int32_t v78; // w8
  int v79; // w8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int64_array *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int v95; // [xsp+14h] [xbp-11Ch]
  int32_t v96; // [xsp+18h] [xbp-118h]
  int32_t baseExpType; // [xsp+1Ch] [xbp-114h]
  DataMasterBase_TMaster__TEntity__PKType__o *v98; // [xsp+20h] [xbp-110h]
  _QWORD *v99; // [xsp+28h] [xbp-108h]
  CombineMaterialMaster_o *v100; // [xsp+30h] [xbp-100h]
  System_Collections_Generic_List_object__o *v101; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+60h] [xbp-D0h] BYREF
  __int64 v104; // [xsp+80h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o *v105; // [xsp+88h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+90h] [xbp-A0h] BYREF
  unsigned int v107; // [xsp+B8h] [xbp-78h]
  int v108; // [xsp+BCh] [xbp-74h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_596A437 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CombineMaterialMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__bool__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&SetCombineData_TypeInfo);
    sub_2213A60(&SvtEquipCombineControl_TypeInfo);
    byte_596A437 = 1;
  }
  memset(&v106, 0, sizeof(v106));
  v101 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  combineResStatus = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CombineMaterialMaster___);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_76;
  v11 = (CombineMaterialMaster_o *)combineResStatus;
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  combineEventList = menuListCtr->fields.combineEventList;
  v13 = CheckCombineResStatus__GetSvtEquipExpCampaignValue(
          (CheckCombineResStatus_o *)combineResStatus,
          this->fields.baseData,
          combineEventList,
          0);
  combineResStatus = this->fields.combineResStatus;
  if ( !combineResStatus )
    goto LABEL_76;
  v14 = v13;
  v100 = v11;
  v16 = CheckCombineResStatus__GetSvtEquipQpCampaignValue(
          (CheckCombineResStatus_o *)combineResStatus,
          this->fields.baseData,
          combineEventList,
          0);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_76;
  v18 = v16;
  v19 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v15);
  *(_QWORD *)&v109.fields.currentCryptoKey = v19;
  *(_QWORD *)&v109.fields.fakeValue = v20;
  combineResStatus = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v109, 0);
  if ( !Master_object )
    goto LABEL_76;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)combineResStatus,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  combineResStatus = UserGameMaster__getSelfUserGame(0);
  v22 = this->fields.baseData;
  v23 = v101;
  v99 = combineResStatus;
  if ( !v22 )
    goto LABEL_76;
  combineResStatus = (void *)UserServantEntity__getCombineQpSvtEq(v22, 0);
  if ( !Entity || !targetMaterialList )
    goto LABEL_76;
  size = targetMaterialList->fields._size;
  if ( size < 1 )
  {
    v26 = 0;
    v25 = 0;
    v108 = 0;
    goto LABEL_55;
  }
  v98 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v108 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = v18 * (float)(int)combineResStatus;
  v29 = vcvtps_s32_f32(v28);
  if ( ceilf(v28) == INFINITY )
    v30 = 0x80000000;
  else
    v30 = v29;
  v107 = v30;
  v95 = v30 * size;
  v96 = size;
  baseExpType = HIDWORD(Entity[8].klass);
  while ( 1 )
  {
    v31 = this;
    v32 = targetMaterialList;
    combineResStatus = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)targetMaterialList,
                         v27,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    if ( !combineResStatus )
      goto LABEL_76;
    v34 = (UserServantEntity_o *)combineResStatus;
    v36 = *((_QWORD *)combineResStatus + 10);
    v35 = *((_QWORD *)combineResStatus + 11);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v33);
    *(_QWORD *)&v110.fields.currentCryptoKey = v36;
    *(_QWORD *)&v110.fields.fakeValue = v35;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v110, 0);
    combineResStatus = DataMasterBase_object__object__int___GetEntity(
                         v98,
                         v37,
                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !combineResStatus )
      goto LABEL_76;
    v38 = combineResStatus;
    combineResStatus = v100;
    if ( !v100 )
      goto LABEL_76;
    combineResStatus = CombineMaterialMaster__GetEntity(v100, v38[34], v34->fields.lv, 0);
    if ( !combineResStatus )
      goto LABEL_76;
    v40 = *((_DWORD *)combineResStatus + 6);
    if ( !byte_596A15B )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A15B = 1;
    }
    v41 = v14 * (float)v40;
    if ( *(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    {
      v42 = vcvtps_s32_f32(v41);
      v43 = ceilf(v41) == INFINITY ? 0x80000000 : v42;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9, v39);
      v44 = vcvtps_s32_f32(v41);
      if ( ceilf(v41) == INFINITY )
        v43 = 0x80000000;
      else
        v43 = v44;
      if ( !byte_596A15B )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A15B = 1;
      }
    }
    v23 = v101;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9, v39);
    combineResStatus = (void *)UserServantEntity__getAddTotalExp(v34, v38[34], 0);
    if ( !v99 )
      goto LABEL_76;
    v51 = v99[12];
    v52 = v26 + v107;
    v108 += (int)combineResStatus;
    if ( v51 < (int)(v26 + v107) )
    {
      this = v31;
      v31->fields.isQpCondClear = 0;
LABEL_55:
      v52 = v26;
      if ( v23 )
        goto LABEL_58;
      goto LABEL_76;
    }
    if ( !v101 )
      goto LABEL_76;
    items = v101->fields._items;
    v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v101->fields._version;
    if ( !items )
      goto LABEL_76;
    v55 = v101->fields._size;
    if ( (unsigned int)v55 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v101,
        (Il2CppObject *)v34,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &items->obj.klass + v55;
      v101->fields._size = v55 + 1;
      v56[4] = (Il2CppClass *)v34;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v56 + 4), (int32_t)v34, v45, v46, v47, v48, v49, v50);
    }
    v58 = v31->fields.baseData;
    if ( !v58 )
      goto LABEL_76;
    v25 += v43;
    this = v31;
    if ( SvtEquipCombineControl__IsLevelMax(v31, v108 + v25 + v58->fields.exp, baseExpType, v57) )
      goto LABEL_58;
    v61 = SvtEquipCombineControl_TypeInfo;
    if ( !*(&SvtEquipCombineControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtEquipCombineControl_TypeInfo, v59, v60);
      v61 = SvtEquipCombineControl_TypeInfo;
    }
    if ( v27 == v61->static_fields->MaxSelectNum - 1 )
      break;
    ++v27;
    v26 = v52;
    targetMaterialList = v32;
    if ( v96 == v27 )
    {
      v52 = v95;
      goto LABEL_58;
    }
  }
  v52 = v107 + v26;
LABEL_58:
  if ( !v23->fields._size )
    return 0;
  v62 = v23;
  v63 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
  System_Collections_Generic_Dictionary_long__bool____ctor(
    v63,
    (const MethodInfo_3FC2008 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v103,
    v62,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v106.fields._current = (Il2CppObject *)v103.fields.fakeValue;
  *(_OWORD *)&v106.fields._list = *(_OWORD *)&v103.fields.currentCryptoKey;
  v104 = 0;
  v105 = &v106;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v106,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v64 )
      break;
    if ( !v106.fields._current )
      sub_2213CDC(v64, v65);
    v67 = v106.fields._current[2];
    v68 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(Il2CppObject *)&v103.fields.currentCryptoKey = v106.fields._current[1];
    *(Il2CppObject *)&v103.fields.fakeValue = v67;
    if ( !v68 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v65, v66);
    v102 = v103;
    v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v102, 0);
    if ( !v63 )
      sub_2213CDC(v69, v69);
    System_Collections_Generic_Dictionary_long__bool___Add(
      v63,
      v69,
      0,
      (const MethodInfo_3FC29C4 *)Method_System_Collections_Generic_Dictionary_long__bool__Add__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v106,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  v70 = sub_2213CCC(SetCombineData_TypeInfo);
  SetCombineData___ctor((SetCombineData_o *)v70, 0);
  if ( !v70 )
    goto LABEL_76;
  v77 = this->fields.baseData;
  *(_QWORD *)(v70 + 16) = v77;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 16), (int32_t)v77, v71, v72, v73, v74, v75, v76);
  v78 = v101->fields._size;
  *(_QWORD *)(v70 + 48) = 0;
  *(_DWORD *)(v70 + 24) = v78;
  *(_DWORD *)(v70 + 28) = v52;
  v79 = v108;
  *(_DWORD *)(v70 + 32) = v25;
  *(_DWORD *)(v70 + 36) = v79;
  combineResStatus = this->fields.baseData;
  if ( !combineResStatus )
    goto LABEL_76;
  if ( UserServantEntity__IsAdjustHpMax((UserServantEntity_o *)combineResStatus, 0) )
  {
    combineResStatus = this->fields.baseData;
    if ( combineResStatus )
    {
      combineResStatus = (void *)UserServantEntity__IsAdjustAtkMax((UserServantEntity_o *)combineResStatus, 0);
      goto LABEL_73;
    }
    goto LABEL_76;
  }
  combineResStatus = 0;
LABEL_73:
  *(_BYTE *)(v70 + 44) = (unsigned __int8)combineResStatus & 1;
  if ( !v63 )
LABEL_76:
    sub_2213CDC(combineResStatus, v9);
  Keys = System_Collections_Generic_Dictionary_long__bool___get_Keys(
           v63,
           (const MethodInfo_3FC2664 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Keys__);
  v81 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
  *(_QWORD *)(v70 + 56) = v81;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 56), (int32_t)v81, v82, v83, v84, v85, v86, v87);
  *(_QWORD *)(v70 + 64) = v63;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 64), (int32_t)v63, v88, v89, v90, v91, v92, v93);
  return (SetCombineData_o *)v70;
}


int32_t SvtEquipCombineControl__GetTutorialOpenType(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  return 38;
}


void SvtEquipCombineControl__InitInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *currentLvObj; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *selectSumLb; // x20
  System_String_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  BalanceConfig_c *v12; // x8
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x1
  System_String_o *v16; // x1
  UILabel_o *needQpLb; // x20
  const MethodInfo *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t ServantCombineMax; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A425 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596A425 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  v28 = 0;
  v9 = j_il2cpp_value_box_0(qword_5984348, &v28);
  v12 = BalanceConfig_TypeInfo;
  v13 = (Il2CppObject *)v9;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v11);
    v12 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v12->static_fields->ServantCombineMax;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &ServantCombineMax);
  currentLvObj = (UnityEngine_GameObject_o *)System_String__Format_75697880(v8, v13, v14, 0);
  if ( !selectSumLb )
    goto LABEL_20;
  UILabel__set_text(selectSumLb, (System_String_o *)currentLvObj, 0);
  SvtEquipCombineControl__SetHaveQpInfo(this, v15);
  v16 = (System_String_o *)StringLiteral_9617/*"N0"*/;
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = 0;
  currentLvObj = (UnityEngine_GameObject_o *)System_Int32__ToString_77138656((int)this + 584, v16, 0);
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
  SvtEquipCombineControl__DestroyGrid(this, v18);
  this->fields.selectMtSvtEqTbl = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectMtSvtEqTbl, 0, v19, v20, v21, v22, v23, v24);
  this->fields.isExeCombine = 0;
  SvtEquipCombineControl__SetExeBtnState(this, v25);
  currentLvObj = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
  if ( !currentLvObj )
LABEL_20:
    sub_2213CDC(currentLvObj, v3);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)currentLvObj, 2, 0);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 0, v26);
}


void SvtEquipCombineControl__InitMaterialSvtEqInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
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

  if ( (byte_596A424 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A424 = 1;
  }
  SvtEquipCombineControl__InitInfo(this, method);
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


void SvtEquipCombineControl__InitSvtEqCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *haveQpTitleLb; // x20
  UILabel_o *needQpTitleLb; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_Dictionary_long__bool__o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  UILabel_o *preSelectBaseLb; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 *v31; // x8
  System_String_o *v32; // x21
  UILabel_o *autoRecommendedButtonLabel; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_object__o *combineEventList; // x0
  _BOOL8 v42; // x0
  __int64 v43; // x1
  int klass_high; // w9
  MenuListControl_o *v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596A423 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoData__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_2213A60(&StringLiteral_2190/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_2189/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_9623/*"NEED_QP_INFO"*/);
    sub_2213A60(&StringLiteral_9172/*"MSG_PRESELECT_BASE_SVTEQ"*/);
    sub_2213A60(&StringLiteral_11288/*"QP_TAKE"*/);
    byte_596A423 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  EventTutorialMaster__CheckTutorial(0, 38, 0, 0, 0, 0, 0, 0);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  haveQpTitleLb = this->fields.haveQpTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11288/*"QP_TAKE"*/, 0);
  if ( !haveQpTitleLb )
    goto LABEL_51;
  UILabel__set_text(haveQpTitleLb, (System_String_o *)helpBtn, 0);
  needQpTitleLb = this->fields.needQpTitleLb;
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9623/*"NEED_QP_INFO"*/, 0);
  if ( !needQpTitleLb )
    goto LABEL_51;
  UILabel__set_text(needQpTitleLb, (System_String_o *)helpBtn, 0);
  this->fields.isSelectBase = 0;
  this->fields.selectMtSvtEqList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectMtSvtEqList, 0, v9, v10, v11, v12, v13, v14);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
  if ( !helpBtn )
  {
    v15 = (System_Collections_Generic_Dictionary_long__bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__bool__TypeInfo);
    System_Collections_Generic_Dictionary_long__bool____ctor(
      v15,
      (const MethodInfo_3FC2008 *)Method_System_Collections_Generic_Dictionary_long__bool___ctor__);
    this->fields.selectMtSvtEqTbl = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectMtSvtEqTbl,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMtSvtEqTbl;
    if ( !helpBtn )
      goto LABEL_51;
  }
  System_Collections_Generic_Dictionary_long__bool___Clear(
    (System_Collections_Generic_Dictionary_long__bool__o *)helpBtn,
    (const MethodInfo_3FC2B5C *)Method_System_Collections_Generic_Dictionary_long__bool__Clear__);
  SvtEquipCombineControl__InitMaterialSvtEqInfo(this, v22);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.selectMaterialSvtBtn;
  if ( !helpBtn )
    goto LABEL_51;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)helpBtn, 0, 0);
  helpBtn = this->fields.materialBgObj;
  if ( !helpBtn )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  helpBtn = this->fields.baseSelectInfoLb;
  if ( !helpBtn )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0);
  helpBtn = (UnityEngine_GameObject_o *)this->fields.eventNoticeImg;
  this->fields._targetType_k__BackingField = 0;
  if ( !helpBtn )
    goto LABEL_51;
  helpBtn = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)helpBtn, 0);
  if ( !helpBtn )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9172/*"MSG_PRESELECT_BASE_SVTEQ"*/, 0);
  if ( !preSelectBaseLb )
    goto LABEL_51;
  UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0);
  if ( !*(&RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo, v26, v27);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
    v31 = &StringLiteral_2190/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/;
  else
    v31 = &StringLiteral_2189/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/;
  v32 = (System_String_o *)*v31;
  autoRecommendedButtonLabel = this->fields.autoRecommendedButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0);
  if ( !autoRecommendedButtonLabel )
    goto LABEL_51;
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.autoSetAnnounceCoroutine,
          0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39),
        (menuListCtr = this->fields.menuListCtr) == 0) )
  {
LABEL_51:
    sub_2213CDC(helpBtn, v3);
  }
  combineEventList = (System_Collections_Generic_List_object__o *)menuListCtr->fields.combineEventList;
  if ( combineEventList && combineEventList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      combineEventList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoData__GetEnumerator__);
    v47 = v46;
    v46.fields._list = 0;
    *(_QWORD *)&v46.fields._index = &v47;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v47,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__MoveNext__);
          if ( !v42 )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v47,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoData__Dispose__);
            return;
          }
          if ( !v47.fields._current )
            sub_2213CDC(v42, v43);
          klass_high = HIDWORD(v47.fields._current[1].klass);
          if ( klass_high > 17 )
            break;
          if ( klass_high == 16 )
          {
            v45 = this->fields.menuListCtr;
            if ( !v45 )
              sub_2213CDC(0, v43);
            goto LABEL_48;
          }
          if ( klass_high == 17 )
          {
            v45 = this->fields.menuListCtr;
            if ( !v45 )
              sub_2213CDC(0, v43);
            goto LABEL_48;
          }
        }
        if ( klass_high != 18 )
          break;
        v45 = this->fields.menuListCtr;
        if ( !v45 )
          sub_2213CDC(0, v43);
LABEL_48:
        MenuListControl__setBannerIcon(
          v45,
          this->fields.eventNoticeImg,
          (EventEntity_o *)v47.fields._current[5].klass,
          0);
      }
      if ( klass_high == 19 )
      {
        v45 = this->fields.menuListCtr;
        if ( !v45 )
          sub_2213CDC(0, v43);
        goto LABEL_48;
      }
    }
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
  __int64 v10; // x2
  int32_t v11; // w21
  int v12; // w8
  int32_t v13; // w8

  if ( (byte_596A439 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantExpMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596A439 = 1;
  }
  baseData = this->fields.baseData;
  if ( !baseData )
LABEL_18:
    sub_2213CDC(baseData, *(_QWORD *)&combinedBaseTotalExp);
  v8 = *((_DWORD *)baseData + 100);
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseData, 0);
  v11 = LevelMax;
  if ( v8 == LevelMax )
  {
    v12 = 0;
  }
  else if ( v8 >= LevelMax )
  {
LABEL_14:
    v12 = v11;
  }
  else
  {
    while ( 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&combinedBaseTotalExp, v10);
      baseData = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExpMaster___);
      if ( !baseData )
        goto LABEL_18;
      baseData = ServantExpMaster__GetEntity((ServantExpMaster_o *)baseData, baseExpType, v8, 0);
      if ( !baseData )
        goto LABEL_18;
      v13 = *((_DWORD *)baseData + 6);
      if ( v13 > combinedBaseTotalExp )
      {
        v12 = *((_DWORD *)baseData + 5);
        return v12 >= v11;
      }
      if ( v13 == combinedBaseTotalExp )
        break;
      if ( v11 == ++v8 )
        goto LABEL_14;
    }
    v12 = *((_DWORD *)baseData + 5) + 1;
  }
  return v12 >= v11;
}


bool SvtEquipCombineControl__IsMatchServantEquipType(
        SvtEquipCombineControl_o *this,
        ServantEntity_o *svtEntity,
        System_Collections_Generic_List_int__o *selectTypeList,
        const MethodInfo *method)
{
  if ( (byte_596A438 & 1) == 0 )
  {
    this = (SvtEquipCombineControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596A438 = 1;
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
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               0,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
          && !ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0)
          && !ServantEntity__get_IsSvtEquipExp(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               6,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsChocolateSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               1,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsManaExchangeSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               2,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsCampaignSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               3,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventSvtEquip(svtEntity, 0)
          || System_Collections_Generic_List_int___Contains(
               selectTypeList,
               4,
               (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
          && ServantEntity__get_IsEventRewardSvtEquip(svtEntity, 0);
LABEL_29:
    sub_2213CDC(this, svtEntity);
  }
  return 1;
}


void SvtEquipCombineControl__OnClickBase(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  bool exists; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_596A42D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_SvtEquipCombineControl_OnClickBase__);
    byte_596A42D = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  v6 = Method_SvtEquipCombineControl_OnClickBase__;
  if ( !exists )
  {
    if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_SvtEquipCombineControl_OnClickBase__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
    if ( Instance )
    {
      CombineRootComponent__ShowBaseSvtEqList((CombineRootComponent_o *)Instance, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v4);
  }
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SvtEquipCombineControl_OnClickBase__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
}


void SvtEquipCombineControl__OnClickClearMaterialButton(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  SvtEqCombineListViewManager_o *svtEqListManager; // x0
  __int64 v7; // x1
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_596A433 & 1) == 0 )
  {
    sub_2213A60(&Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
    byte_596A433 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickClearMaterialButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickClearMaterialButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SvtEquipCombineControl_OnClickClearMaterialButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__SvtEqCombineNullData(this, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtEqListManager = combineRootComponent->fields.svtEqListManager) == 0 )
    sub_2213CDC(svtEqListManager, v7);
  SvtEqCombineListViewManager__ClearSelectedSvtList(svtEqListManager, 0);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v9);
  SvtEquipCombineControl__SetStateInfoMsg(this, 1, v10);
}


void SvtEquipCombineControl__OnClickExeCombine(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_596A42E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3918/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_596A42E = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3918/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
  if ( !this->fields.exeCombineDlg )
    sub_2213CDC(v4, v5);
  SetRarityDialogControl__SetConfirmSvtEqCombine(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v4,
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

  if ( (byte_596A432 & 1) == 0 )
  {
    sub_2213A60(&Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
    byte_596A432 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickMaterialSelectList__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickMaterialSelectList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SvtEquipCombineControl_OnClickMaterialSelectList__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_2213CDC(0, v5);
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
  const MethodInfo *v10; // x2

  if ( (byte_596A434 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_SvtEquipCombineControl_OnClickRecommendedButton__);
    sub_2213A60(&Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__);
    byte_596A434 = 1;
  }
  v3 = Method_SvtEquipCombineControl_OnClickRecommendedButton__;
  if ( (*((_BYTE *)Method_SvtEquipCombineControl_OnClickRecommendedButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SvtEquipCombineControl_OnClickRecommendedButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SvtEquipCombineControl__StopAutoSetAnnounceLabelCoroutine(this, v5);
  recommendedConfigDialog = this->fields.recommendedConfigDialog;
  v7 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_SvtEquipCombineControl__OnClickRecommendedButton_b__80_0__,
    0);
  if ( !recommendedConfigDialog )
    sub_2213CDC(v8, v9);
  SvtEquipRecommenededConfigDialog__OpenRecommendedConfig(recommendedConfigDialog, v7, v10);
}


void SvtEquipCombineControl__SetBaseSvtEqCardImg(
        SvtEquipCombineControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraph; // x22
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  __int64 v7; // x1
  struct UICharaGraphTexture_o *TexturePrefab_47624988; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UICharaGraphTexture_o *combineInfoComp; // x0

  if ( (byte_596A428 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A428 = 1;
  }
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, usrSvtData, method);
  p_charaGraph = &this->fields.charaGraph;
  if ( UnityEngine_Object__op_Equality(charaGraph, 0, 0) )
  {
    TexturePrefab_47624988 = CharaGraphManager__CreateTexturePrefab_47624988(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               10,
                               0,
                               0);
    this->fields.charaGraph = TexturePrefab_47624988;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.charaGraph,
      (int32_t)TexturePrefab_47624988,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  else
  {
    combineInfoComp = *p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_11;
    UICharaGraphTexture__SetCharacter_50938032(combineInfoComp, usrSvtData, 0, 0);
  }
  this->fields.baseData = usrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseData,
    (int32_t)usrSvtData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  combineInfoComp = (UICharaGraphTexture_o *)this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_11:
    sub_2213CDC(combineInfoComp, v7);
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

  if ( (byte_596A42C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_596A42C = 1;
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


void SvtEquipCombineControl__SetHaveQpInfo(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *haveQpLb; // x20
  System_String_o *v6; // x1

  if ( (byte_596A426 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_596A426 = 1;
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
void SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(
        SvtEquipCombineControl_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UICommonButton_o *recommendedButton; // x21
  SvtEquipCombineControl_o *v4; // x19
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
  this = (SvtEquipCombineControl_o *)this->fields.baseData;
  if ( this )
  {
    this = (SvtEquipCombineControl_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0);
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
    this = (SvtEquipCombineControl_o *)BasicHelper__IsNullOrEmpty(
                                         (System_Collections_ICollection_o *)v4->fields.selectMtSvtEqList,
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


void SvtEquipCombineControl__SetMaterialToCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *recommendedCombineData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  SvtEqCombineListViewManager_o *svtEqListManager; // x0
  __int64 v7; // x1
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v9; // x2

  SvtEquipCombineControl__SetSvtEqCombineData(this, recommendedCombineData, method);
  SvtEquipCombineControl__SetStateInfoMsg(this, 2, v5);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtEqListManager = combineRootComponent->fields.svtEqListManager) == 0 )
    sub_2213CDC(svtEqListManager, v7);
  SvtEqCombineListViewManager__SetRecommendedSelectedMaterialList(
    svtEqListManager,
    this->fields.selectMtSvtEqList,
    recommendedCombineData,
    0);
  SvtEquipCombineControl__SetIsRecommendedAndClearButtonEnabled(this, 1, v9);
}


void SvtEquipCombineControl__SetRecommendedMaterial(
        SvtEquipCombineControl_o *this,
        bool isAutoSet,
        const MethodInfo *method)
{
  __int64 v5; // x20
  SvtEquipRecommenededConfigDialog_o *recommendedConfigDialog; // x0
  MethodInfo *v7; // x1
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
  SvtEquipRecommenededConfigDialog_o *v37; // x20
  SvtEquipCombineControl___c_c *v38; // x8
  struct SvtEquipCombineControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__81_1; // x22
  System_String_o *v41; // x21
  Il2CppObject *v42; // x23
  struct SvtEquipCombineControl___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  float v50; // s0
  int32_t v51; // w8
  CommonUI_o *v52; // x0
  System_String_o *v53; // x1
  System_String_o *v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  System_String_o *v60; // x23
  CommonConfirmDialog_ClickDelegate_o *v61; // x24
  __int64 v62; // x1
  __int64 v63; // x2
  Il2CppObject *v64; // x19
  System_String_o *v65; // x21

  if ( (byte_596A435 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__);
    sub_2213A60(&Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__);
    sub_2213A60(&SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
    sub_2213A60(&SvtEquipCombineControl___c_TypeInfo);
    sub_2213A60(&StringLiteral_11487/*"RECOMMENDED_NOT_HAVE_QP"*/);
    sub_2213A60(&StringLiteral_11477/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/);
    sub_2213A60(&StringLiteral_11496/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/);
    sub_2213A60(&StringLiteral_11497/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_11475/*"RECOMMENDED_AUTO_SET_NOT_EXIST_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_11476/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/);
    byte_596A435 = 1;
  }
  v5 = sub_2213CCC(SvtEquipCombineControl___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.isQpCondClear = 1;
  RecommendedCombineData = SvtEquipCombineControl__GetRecommendedCombineData(this, v14);
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
  v7 = *(MethodInfo **)(v5 + 24);
  if ( v7 )
  {
    if ( this->fields.isQpCondClear )
    {
      recommendedConfigDialog = this->fields.recommendedConfigDialog;
      if ( recommendedConfigDialog )
      {
        SvtEquipRecommenededConfigDialog__Close(recommendedConfigDialog, v7);
        SvtEquipCombineControl__SetMaterialToCombineData(this, *(SetCombineData_o **)(v5 + 24), v23);
        return;
      }
LABEL_35:
      sub_2213CDC(recommendedConfigDialog, v7);
    }
    if ( isAutoSet )
    {
      SvtEquipCombineControl__SetMaterialToCombineData(this, (SetCombineData_o *)v7, v22);
      v24 = &StringLiteral_11477/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP_CONFIRM"*/;
      goto LABEL_15;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11497/*"RECOMMENDED_SVT_EQUIP_NOT_HAVE_QP_CONFIRM"*/, 0);
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v61 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v61,
      (Il2CppObject *)v5,
      Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__0__,
      0);
    if ( !Instance )
      goto LABEL_35;
    CommonUI__OpenConfirmDialog_37373144(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v58,
      v59,
      v60,
      v61,
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
        v25 = SvtEquipCombineControl__FadeAutoSetAnnounceLabel(this, (System_String_o *)*v24, v22);
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
      recommendedConfigDialog = (SvtEquipRecommenededConfigDialog_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_11496/*"RECOMMENDED_SVT_EQUIP_NOT_EXIST_MSG"*/,
                                                                        0);
      v37 = recommendedConfigDialog;
      v38 = SvtEquipCombineControl___c_TypeInfo;
      if ( !*(&SvtEquipCombineControl___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SvtEquipCombineControl___c_TypeInfo, v7, v36);
        v38 = SvtEquipCombineControl___c_TypeInfo;
      }
      static_fields = v38->static_fields;
      _9__81_1 = static_fields->__9__81_1;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__81_1 )
      {
        if ( !*(&v38->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v38, v7, v36);
          static_fields = SvtEquipCombineControl___c_TypeInfo->static_fields;
        }
        v42 = (Il2CppObject *)static_fields->__9;
        _9__81_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__81_1, v42, Method_SvtEquipCombineControl___c__SetRecommendedMaterial_b__81_1__, 0);
        v43 = SvtEquipCombineControl___c_TypeInfo->static_fields;
        v43->__9__81_1 = _9__81_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v43->__9__81_1,
          (int32_t)_9__81_1,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      if ( !v35 )
        goto LABEL_35;
      v50 = -2.0;
      v51 = 26;
      v52 = (CommonUI_o *)v35;
      v53 = v41;
      v54 = (System_String_o *)v37;
    }
    else
    {
      if ( isAutoSet )
      {
        v24 = &StringLiteral_11476/*"RECOMMENDED_AUTO_SET_NOT_HAVE_QP"*/;
        goto LABEL_15;
      }
      v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11487/*"RECOMMENDED_NOT_HAVE_QP"*/, 0);
      _9__81_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__81_1,
        (Il2CppObject *)v5,
        Method_SvtEquipCombineControl___c__DisplayClass81_0__SetRecommendedMaterial_b__2__,
        0);
      if ( !v64 )
        goto LABEL_35;
      v50 = 0.0;
      v52 = (CommonUI_o *)v64;
      v54 = v65;
      v53 = (System_String_o *)StringLiteral_1/*""*/;
      v51 = 28;
    }
    CommonUI__OpenNotificationDialog(v52, v53, v54, _9__81_1, -1, 0, 0, 0, 0, v51, 0, 0, 0, v50, 0, 0);
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
    sub_2213CDC(selectAddGridObj, method);
  }
  UnityEngine_GameObject__SetActive(selectAddGridObj, !this->fields.isSelectBase, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEquipCombineControl__SetStateInfoMsg(SvtEquipCombineControl_o *this, int32_t state, const MethodInfo *method)
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
  if ( (byte_596A430 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7777/*"INFO_MSG_SVTEQ_MATERIAL"*/);
    sub_2213A60(&StringLiteral_7776/*"INFO_MSG_SVTEQ_BASE"*/);
    sub_2213A60(&StringLiteral_6021/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_2213A60(&StringLiteral_12706/*"SHORT_QP_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A430 = 1;
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
      if ( this->fields.isExeCombine )
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
      v10 = &StringLiteral_7777/*"INFO_MSG_SVTEQ_MATERIAL"*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_11:
        j_il2cpp_runtime_class_init_0(v9, v7, v8);
LABEL_12:
      *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v10, 0);
      goto LABEL_17;
    case 0:
      v9 = LocalizationManager_TypeInfo;
      v10 = &StringLiteral_7776/*"INFO_MSG_SVTEQ_BASE"*/;
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


// local variable allocation has failed, the output may be wrong!
void SvtEquipCombineControl__SetSvtEqCombineData(
        SvtEquipCombineControl_o *this,
        SetCombineData_o *data,
        const MethodInfo *method)
{
  SetCombineData_o *v3; // x28
  __int64 Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Int64_array *materialUsrSvtIdList; // x1
  struct System_Collections_Generic_Dictionary_long__bool__o *svtEqMaterialList; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x2
  struct System_Int64_array *v22; // x8
  il2cpp_array_size_t max_length; // x27
  UILabel_o *selectSumLb; // x20
  System_String_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  BalanceConfig_c *v29; // x8
  Il2CppObject *v30; // x23
  Il2CppObject *v31; // x0
  struct UserServantEntity_o *baseSvtData; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x2
  struct UserServantEntity_o *baseData; // x8
  __int64 v41; // x20
  __int64 v42; // x23
  Il2CppObject *MasterData_object; // x0
  ServantLimitMaster_o *v44; // x24
  __int64 v45; // x2
  UserServantEntity_o *v46; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x20
  __int64 v48; // x23
  __int64 v49; // x25
  unsigned __int64 v50; // x26
  struct System_Int64_array *v51; // x8
  int32_t *v52; // x21
  int64_t v53; // x28
  char v54; // w29
  UnityEngine_GameObject_o *svtFaceInfo; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v57; // x23
  UnityEngine_Transform_o *v58; // x20
  __int64 v59; // x2
  __int64 v60; // x20
  __int64 v61; // x25
  __int64 v62; // x27
  int32_t v63; // w25
  __int64 v64; // x2
  __int64 v65; // x25
  __int64 v66; // x27
  __int64 v67; // x2
  UserServantEntity_o *v68; // x8
  __int64 v69; // x25
  __int64 v70; // x27
  int32_t v71; // w25
  __int64 v72; // x1
  __int64 v73; // x2
  bool v74; // w20
  __int64 v75; // x25
  __int64 v76; // x27
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x20
  __int64 v80; // x25
  int32_t v81; // w0
  int32_t v82; // w8
  Il2CppObject *Component_object; // x0
  UserServantEntity_o *v84; // x23
  MaterialSvtInfo_o *v85; // x25
  MaterialSvtInfo_ClickDelegate_o *v86; // x27
  __int64 v87; // x2
  UserServantEntity_o *v88; // x8
  int32_t v89; // w26
  __int64 v90; // x20
  __int64 v91; // x23
  int32_t v92; // w0
  UILabel_o *basicExpLb; // x20
  __int64 v94; // x0
  int32_t v95; // w9
  Il2CppObject *v96; // x0
  UILabel_o *addTotalExpLb; // x20
  Il2CppObject *v98; // x0
  const MethodInfo *v99; // x2
  struct UserServantEntity_o *v100; // x8
  int32_t afterMaxLv; // w23
  int32_t lv; // w8
  struct UserServantEntity_o *v103; // x8
  UILabel_o *currentLvLb; // x20
  int32_t *p_increLv; // x20
  UILabel_o *increLvLb; // x24
  __int64 v107; // x2
  UILabel_o *increValLb; // x24
  System_String_o *v109; // x25
  Il2CppObject *v110; // x0
  UILabel_o *getSkillLb; // x24
  UILabel_o *needQpLb; // x24
  int v113; // w8
  __int64 v114; // x20
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  struct UserServantEntity_o *v121; // x1
  struct UserServantEntity_o *v122; // x8
  int32_t v123; // w9
  int32_t v124; // w10
  int32_t v125; // w8
  float v126; // s1
  float v127; // s0 OVERLAPPED
  bool v128; // w20
  float v129; // s2
  float v130; // s3
  const MethodInfo *v131; // x1
  __int64 v132; // [xsp+10h] [xbp-A0h]
  int32_t v133; // [xsp+18h] [xbp-98h]
  int32_t v134; // [xsp+1Ch] [xbp-94h]
  __int64 v135; // [xsp+20h] [xbp-90h]
  struct System_Int64_array **p_selectMtSvtEqList; // [xsp+28h] [xbp-88h]
  UserServantEntity_o **p_baseData; // [xsp+30h] [xbp-80h]
  int32_t ServantCombineMax; // [xsp+38h] [xbp-78h] BYREF
  int32_t increAmount; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t lateExp[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t afterAtk[2]; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4

  v3 = data;
  if ( (byte_596A429 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&MaterialSvtInfo_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_CombineMenuControl_OnClickMaterial__);
    sub_2213A60(&CombineSvtData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    sub_2213A60(&StringLiteral_7758/*"INCREMENT_SVTLEVEL"*/);
    sub_2213A60(&StringLiteral_13005/*"SUM_INFO"*/);
    byte_596A429 = 1;
  }
  *(_QWORD *)lateExp = 0;
  *(_QWORD *)afterAtk = 0;
  SvtEquipCombineControl__DestroyGrid(this, (const MethodInfo *)data);
  *(_WORD *)&this->fields.isContainedRare = 0;
  this->fields.isLimitUpMaterial = 0;
  if ( !v3 )
    goto LABEL_101;
  materialUsrSvtIdList = v3->fields.materialUsrSvtIdList;
  p_selectMtSvtEqList = &this->fields.selectMtSvtEqList;
  this->fields.selectMtSvtEqList = materialUsrSvtIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectMtSvtEqList,
    (int32_t)materialUsrSvtIdList,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  svtEqMaterialList = v3->fields.svtEqMaterialList;
  this->fields.selectMtSvtEqTbl = svtEqMaterialList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectMtSvtEqTbl,
    (int32_t)svtEqMaterialList,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v22 = v3->fields.materialUsrSvtIdList;
  if ( !v22 )
    goto LABEL_101;
  max_length = v22->max_length;
  selectSumLb = this->fields.selectSumLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v21);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13005/*"SUM_INFO"*/, 0);
  increAmount = max_length;
  v26 = j_il2cpp_value_box_0(qword_5984348, &increAmount);
  v29 = BalanceConfig_TypeInfo;
  v30 = (Il2CppObject *)v26;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27, v28);
    v29 = BalanceConfig_TypeInfo;
  }
  ServantCombineMax = v29->static_fields->ServantCombineMax;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &ServantCombineMax);
  Instance = (__int64)System_String__Format_75697880(v25, v30, v31, 0);
  if ( !selectSumLb )
    goto LABEL_101;
  UILabel__set_text(selectSumLb, (System_String_o *)Instance, 0);
  baseSvtData = v3->fields.baseSvtData;
  p_baseData = &this->fields.baseData;
  this->fields.baseData = baseSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseData,
    (int32_t)baseSvtData,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_101;
  v41 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v42 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v39);
  *(_QWORD *)&v142.fields.currentCryptoKey = v41;
  *(_QWORD *)&v142.fields.fakeValue = v42;
  v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v142, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( (int)max_length < 1 )
    return;
  v44 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_101;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = *p_baseData;
  if ( !*p_baseData )
    goto LABEL_101;
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v45);
  *(_QWORD *)&v143.fields.currentCryptoKey = v48;
  *(_QWORD *)&v143.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v143, 0);
  if ( !v47 )
    goto LABEL_101;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v47,
                        Instance,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_101;
  v50 = 0;
  v132 = Instance;
  v133 = *(_DWORD *)(Instance + 88);
  v135 = (unsigned int)max_length;
  do
  {
    v51 = *p_selectMtSvtEqList;
    if ( !*p_selectMtSvtEqList )
      goto LABEL_101;
    if ( v50 >= LODWORD(v51->max_length) )
      sub_2213CE4(Instance);
    Instance = (__int64)v3->fields.svtEqMaterialList;
    if ( !Instance )
      goto LABEL_101;
    v52 = (int32_t *)v3;
    v53 = v51->m_Items[v50];
    Instance = System_Collections_Generic_Dictionary_long__bool___get_Item(
                 (System_Collections_Generic_Dictionary_long__bool__o *)Instance,
                 v53,
                 (const MethodInfo_3FC291C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Item__);
    if ( !this->fields.selectGrid )
      goto LABEL_101;
    v54 = Instance;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.selectGrid, 0);
    Instance = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Instance )
      goto LABEL_101;
    v57 = (UnityEngine_GameObject_o *)Instance;
    Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
    v58 = (UnityEngine_Transform_o *)Instance;
    if ( !byte_5969AE0 )
    {
      Instance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v58 )
      goto LABEL_101;
    UnityEngine_Transform__set_localPosition(v58, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    Instance = (__int64)UnityEngine_GameObject__get_transform(v57, 0);
    if ( !Instance )
      goto LABEL_101;
    v150.fields.x = 0.5;
    v150.fields.y = 0.5;
    v150.fields.z = 0.5;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v150, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_101;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_101;
    Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                          v53,
                          (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_101;
    v60 = Instance;
    v61 = *(_QWORD *)(Instance + 80);
    v62 = *(_QWORD *)(Instance + 88);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v59);
    *(_QWORD *)&v144.fields.currentCryptoKey = v61;
    *(_QWORD *)&v144.fields.fakeValue = v62;
    v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v144, 0);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v60 + 96),
                 0);
    if ( !v44 )
      goto LABEL_101;
    Instance = (__int64)ServantLimitMaster__GetEntity(v44, v63, Instance, 0);
    if ( !Instance )
      goto LABEL_101;
    if ( *(int *)(Instance + 24) >= 4 )
      this->fields.isContainedRare = 1;
    v65 = *(_QWORD *)(v60 + 96);
    v66 = *(_QWORD *)(v60 + 104);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v64);
    *(_QWORD *)&v145.fields.currentCryptoKey = v65;
    *(_QWORD *)&v145.fields.fakeValue = v66;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v145, 0);
    if ( (int)Instance >= 1 )
      this->fields.isLimitOverMaterial = 1;
    v68 = *p_baseData;
    if ( !*p_baseData )
      goto LABEL_101;
    v69 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
    v70 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v67);
    *(_QWORD *)&v146.fields.currentCryptoKey = v69;
    *(_QWORD *)&v146.fields.fakeValue = v70;
    v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v146, 0);
    if ( v71 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v60 + 80),
                  0) )
      goto LABEL_50;
    Instance = (__int64)*p_baseData;
    if ( !*p_baseData )
      goto LABEL_101;
    if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)Instance, 0) )
    {
      v75 = *(_QWORD *)(v60 + 96);
      v76 = *(_QWORD *)(v60 + 104);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v72, v73);
      *(_QWORD *)&v147.fields.currentCryptoKey = v75;
      *(_QWORD *)&v147.fields.fakeValue = v76;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v147, 0) < 1 )
      {
        v82 = v134;
      }
      else
      {
        v80 = *(_QWORD *)(v60 + 96);
        v79 = *(_QWORD *)(v60 + 104);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v77, v78);
        *(_QWORD *)&v148.fields.currentCryptoKey = v80;
        *(_QWORD *)&v148.fields.fakeValue = v79;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v148, 0);
        this->fields.isLimitUpMaterial = 1;
        v82 = v134 + v81;
      }
      v134 = v82 + 1;
      v74 = v82 + 1 > v133;
    }
    else
    {
LABEL_50:
      v74 = 0;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v57,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    v84 = this->fields.baseData;
    v85 = (MaterialSvtInfo_o *)Component_object;
    v86 = (MaterialSvtInfo_ClickDelegate_o *)sub_2213CCC(MaterialSvtInfo_ClickDelegate_TypeInfo);
    MaterialSvtInfo_ClickDelegate___ctor(
      v86,
      (Il2CppObject *)this,
      (intptr_t)Method_CombineMenuControl_OnClickMaterial__,
      0);
    if ( !v85 )
      goto LABEL_101;
    MaterialSvtInfo__setMaterialSvtInfo_37859096(v85, v50++, v84, v53, 1, v74, v54 & 1, v86, 0);
    v3 = (SetCombineData_o *)v52;
  }
  while ( v135 != v50 );
  Instance = (__int64)this->fields.selectGrid;
  if ( !Instance )
    goto LABEL_101;
  UIGrid__set_repositionNow((UIGrid_o *)Instance, 1, 0);
  v88 = *p_baseData;
  v89 = v134 >= v133 ? v133 : v134;
  if ( !v88 )
    goto LABEL_101;
  v90 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
  v91 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v87);
  *(_QWORD *)&v149.fields.currentCryptoKey = v90;
  *(_QWORD *)&v149.fields.fakeValue = v91;
  v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v149, 0);
  Instance = (__int64)ServantLimitMaster__GetEntity(v44, v92, v89, 0);
  if ( !Instance )
    goto LABEL_101;
  basicExpLb = this->fields.basicExpLb;
  this->fields.afterMaxLv = *(_DWORD *)(Instance + 28);
  v94 = qword_5984348;
  v95 = v52[9] + v52[8];
  increAmount = v52[8];
  this->fields.getExpVal = v95;
  v96 = (Il2CppObject *)j_il2cpp_value_box_0(v94, &increAmount);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v96, 0);
  if ( !basicExpLb )
    goto LABEL_101;
  UILabel__set_text(basicExpLb, (System_String_o *)Instance, 0);
  addTotalExpLb = this->fields.addTotalExpLb;
  ServantCombineMax = v52[9];
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &ServantCombineMax);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v98, 0);
  if ( !addTotalExpLb )
    goto LABEL_101;
  UILabel__set_text(addTotalExpLb, (System_String_o *)Instance, 0);
  v100 = this->fields.baseData;
  this->fields.expType = *(_DWORD *)(v132 + 132);
  if ( !v100 )
    goto LABEL_101;
  afterMaxLv = this->fields.afterMaxLv;
  this->fields.totalExp = v100->fields.exp + this->fields.getExpVal;
  lv = v100->fields.lv;
  this->fields.checkLv = lv;
  if ( lv == afterMaxLv )
  {
    this->fields.increLv = lv;
  }
  else
  {
    while ( !SvtEquipCombineControl__CheckIncrementLv(this, this->fields.checkLv, v99) )
      ;
  }
  Instance = (__int64)this->fields.currentLvObj;
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.increLvObj;
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.increValObj;
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v103 = this->fields.baseData;
  if ( !v103 )
    goto LABEL_101;
  currentLvLb = this->fields.currentLvLb;
  Instance = (__int64)System_Int32__ToString((int)v103 + 400, 0);
  if ( !currentLvLb )
    goto LABEL_101;
  UILabel__set_text(currentLvLb, (System_String_o *)Instance, 0);
  p_increLv = &this->fields.increLv;
  increLvLb = this->fields.increLvLb;
  Instance = (__int64)System_Int32__ToString((int)this + 560, 0);
  if ( !increLvLb )
    goto LABEL_101;
  UILabel__set_text(increLvLb, (System_String_o *)Instance, 0);
  if ( !*p_baseData )
    goto LABEL_101;
  this->fields.increAmount = this->fields.increLv - (*p_baseData)->fields.lv;
  increValLb = this->fields.increValLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v107);
  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_7758/*"INCREMENT_SVTLEVEL"*/, 0);
  increAmount = this->fields.increAmount;
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &increAmount);
  Instance = (__int64)System_String__Format(v109, v110, 0);
  if ( !increValLb )
    goto LABEL_101;
  UILabel__set_text(increValLb, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  getSkillLb = this->fields.getSkillLb;
  Instance = (__int64)CheckCombineResStatus__getSvtEqSkillByCombine(
                        (CheckCombineResStatus_o *)Instance,
                        *p_baseData,
                        *p_increLv,
                        v89,
                        0);
  if ( !getSkillLb )
    goto LABEL_101;
  UILabel__set_text(getSkillLb, (System_String_o *)Instance, 0);
  needQpLb = this->fields.needQpLb;
  this->fields.spendQpVal = v52[7];
  Instance = (__int64)System_Int32__ToString_77138656((int)this + 584, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !needQpLb )
    goto LABEL_101;
  UILabel__set_text(needQpLb, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  CheckCombineResStatus__getCombineResStatus(
    (CheckCombineResStatus_o *)Instance,
    &afterAtk[1],
    afterAtk,
    *p_baseData,
    *p_increLv,
    0);
  v113 = v52[12] + afterAtk[1];
  afterAtk[0] += v52[13];
  afterAtk[1] = v113;
  v114 = sub_2213CCC(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v114, 0);
  if ( !v114 )
    goto LABEL_101;
  v121 = this->fields.baseData;
  *(_QWORD *)(v114 + 16) = v121;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v114 + 16), (int32_t)v121, v115, v116, v117, v118, v119, v120);
  *(_DWORD *)(v114 + 24) = this->fields.increLv;
  *(_DWORD *)(v114 + 28) = v89;
  *(_DWORD *)(v114 + 32) = this->fields.afterMaxLv;
  v122 = this->fields.baseData;
  if ( !v122 )
    goto LABEL_101;
  Instance = (__int64)this->fields.combineResStatus;
  if ( !Instance )
    goto LABEL_101;
  CheckCombineResStatus__setSvtExp(
    (CheckCombineResStatus_o *)Instance,
    (float *)&lateExp[1],
    lateExp,
    this->fields.totalExp,
    v122->fields.lv,
    afterMaxLv,
    this->fields.expType,
    0);
  v123 = afterAtk[0];
  v124 = afterAtk[1];
  v125 = lateExp[0];
  *(_DWORD *)(v114 + 36) = lateExp[1];
  *(_DWORD *)(v114 + 40) = v125;
  *(_DWORD *)(v114 + 44) = v124;
  *(_DWORD *)(v114 + 48) = v52[12];
  *(_DWORD *)(v114 + 52) = v123;
  *(_DWORD *)(v114 + 56) = v52[13];
  Instance = (__int64)this->fields.combineInfoComp;
  if ( !Instance )
    goto LABEL_101;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)Instance, (CombineSvtData_o *)v114, 0);
  Instance = (__int64)this->fields.getExpInfo;
  if ( !Instance )
    goto LABEL_101;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (__int64)this->fields.needQpLb;
  if ( this->fields.haveQpVal >= this->fields.spendQpVal )
  {
    if ( Instance )
    {
      v127 = 1.0;
      v126 = 1.0;
      v128 = 1;
      goto LABEL_99;
    }
LABEL_101:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_101;
  v126 = 0.0;
  v127 = 1.0;
  v128 = 0;
LABEL_99:
  v129 = v126;
  v130 = v127;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v127, 0);
  this->fields.isExeCombine = v128;
  SvtEquipCombineControl__SetExeBtnState(this, v131);
}


void SvtEquipCombineControl__ShowRareSvtDlg(SvtEquipCombineControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v6; // x1
  int64_t klass; // x21
  SetRarityDialogControl_o *exeCombineDlg; // x23
  UserServantEntity_o *baseData; // x24
  System_Collections_Generic_Dictionary_long__bool__o *selectMtSvtEqTbl; // x25
  int32_t spendQpVal; // w22
  _BOOL4 isContainedRare; // w26

  if ( (byte_596A42B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3918/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/);
    byte_596A42B = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3918/*"CONFIRM_TITLE_SVTEQ_COMBINE"*/, 0);
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (klass = (int64_t)SelfUserGame[4].klass,
        exeCombineDlg = this->fields.exeCombineDlg,
        baseData = this->fields.baseData,
        selectMtSvtEqTbl = this->fields.selectMtSvtEqTbl,
        spendQpVal = this->fields.spendQpVal,
        isContainedRare = this->fields.isContainedRare,
        SelfUserGame = SvtEquipCombineControl__GetMaterialStatusInfoMsg(this, v6),
        !exeCombineDlg) )
  {
    sub_2213CDC(SelfUserGame, v6);
  }
  SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
    exeCombineDlg,
    baseData,
    selectMtSvtEqTbl,
    v4,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_Component_o *autoSetAnnounceObj; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596A43B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_TweenAlpha___);
    byte_596A43B = 1;
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
    sub_2213CDC(0, v4);
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
    sub_2213CDC(autoSetAnnounceObj, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSetAnnounceObj, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SvtEquipCombineControl___OnClickRecommendedButton_b__80_0(
        SvtEquipCombineControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 *v8; // x8
  System_String_o *v9; // x22
  UILabel_o *autoRecommendedButtonLabel; // x21
  System_String_o *recommendedConfigDialog; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A43E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_2213A60(&StringLiteral_2190/*"AUTO_RECOMMENDED_ON_BUTTON_LABEL"*/);
    sub_2213A60(&StringLiteral_2189/*"AUTO_RECOMMENDED_OFF_BUTTON_LABEL"*/);
    byte_596A43E = 1;
  }
  if ( !*(&RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo, isDecide, method);
  ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
  if ( ConfigSaveData && RecommendedSvtEquipConfigSaveData__IsAutoSetOn(ConfigSaveData, 0) )
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
    SvtEquipCombineControl__SetRecommendedMaterial(this, 0, v13);
    return;
  }
  recommendedConfigDialog = (System_String_o *)this->fields.recommendedConfigDialog;
  if ( !recommendedConfigDialog )
LABEL_16:
    sub_2213CDC(recommendedConfigDialog, v12);
  SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)recommendedConfigDialog, v12);
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
  __int64 v2; // x2
  SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *v3; // x19
  int32_t _1__state; // w23
  struct SvtEquipCombineControl_o *_4__this; // x20
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
  if ( (byte_596A44B & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_b__87_0__);
    this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_596A44B = 1;
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
      this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)_4__this->fields.autoSetAnnounceObj;
      if ( this )
      {
        this = (SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_o *)UnityEngine_Component__get_gameObject(
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
            Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_b__87_0__,
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SvtEquipCombineControl__FadeAutoSetAnnounceLabel_d__87_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A43F & 1) == 0 )
  {
    sub_2213A60(&SvtEquipCombineControl___c_TypeInfo);
    byte_596A43F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SvtEquipCombineControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEquipCombineControl___c_TypeInfo->static_fields->__9 = (struct SvtEquipCombineControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SvtEquipCombineControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields.equipTarget1;
}


UserServantEntity_o *SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_10(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_596A448 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_596A448 = 1;
  }
  return key;
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_2(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__return_ptr retstr,
        SvtEquipCombineControl___c_o *this,
        EquipTargetInfo_o *y,
        const MethodInfo *method)
{
  __int128 v4; // q1

  if ( !y )
    sub_2213CDC(this, 0);
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
  if ( (byte_596A441 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Value__);
    byte_596A441 = 1;
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
  if ( (byte_596A442 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_596A442 = 1;
  }
  if ( !key )
    sub_2213CDC(this, x.fields.key);
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
  if ( (byte_596A443 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596A443 = 1;
  }
  if ( !key )
    sub_2213CDC(this, x.fields.key);
  v5 = *(_QWORD *)&key->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&key->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      x.fields.key,
      *(_QWORD *)&x.fields.value);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_6(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_596A444 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_596A444 = 1;
  }
  if ( !key )
    sub_2213CDC(this, x.fields.key);
  return UserServantEntity__getLimitCount(key, 0);
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_7(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_596A445 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_596A445 = 1;
  }
  if ( !key )
    sub_2213CDC(this, x.fields.key);
  return key->fields.lv;
}


int64_t SvtEquipCombineControl___c___GetRecommendedCombineData_b__83_8(
        SvtEquipCombineControl___c_o *this,
        System_Collections_Generic_KeyValuePair_UserServantEntity__int__o x,
        const MethodInfo *method)
{
  struct UserServantEntity_o *key; // x19

  key = x.fields.key;
  if ( (byte_596A446 & 1) == 0 )
  {
    this = (SvtEquipCombineControl___c_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    byte_596A446 = 1;
  }
  if ( !key )
    sub_2213CDC(this, x.fields.key);
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
  if ( (byte_596A447 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_UserServantEntity__int__get_Key__);
    this = (SvtEquipCombineControl___c_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596A447 = 1;
  }
  if ( !key )
    sub_2213CDC(this, x.fields.key);
  v4 = *(_OWORD *)&key->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&key->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      x.fields.key,
      *(_QWORD *)&x.fields.value);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
}


void SvtEquipCombineControl___c___SetRecommendedMaterial_b__81_1(
        SvtEquipCombineControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A440 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A440 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  const MethodInfo *v8; // x2

  if ( (byte_596A449 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A449 = 1;
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
        SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)Instance, v6);
        Instance = (CommonUI_o *)this->fields.__4__this;
        if ( Instance )
        {
          SvtEquipCombineControl__SetMaterialToCombineData(
            (SvtEquipCombineControl_o *)Instance,
            this->fields.recommendedCombineData,
            v8);
          return;
        }
      }
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
}


void SvtEquipCombineControl___c__DisplayClass81_0___SetRecommendedMaterial_b__2(
        SvtEquipCombineControl___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  struct SvtEquipCombineControl_o *_4__this; // x8

  if ( (byte_596A44A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A44A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.recommendedConfigDialog) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  SvtEquipRecommenededConfigDialog__Close((SvtEquipRecommenededConfigDialog_o *)Instance, v4);
}