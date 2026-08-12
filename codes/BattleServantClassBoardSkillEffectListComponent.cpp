void BattleServantClassBoardSkillEffectListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_59741A0 & 1) == 0 )
  {
    sub_2213A60(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    byte_59741A0 = 1;
  }
  LODWORD(BattleServantClassBoardSkillEffectListComponent_TypeInfo->static_fields->DefaultSkillOffset) = (struct BattleServantClassBoardSkillEffectListComponent_StaticFields)-1037828096;
}


void BattleServantClassBoardSkillEffectListComponent___ctor(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfWindowPassiveSkillListComponent___ctor((BattleServantConfWindowPassiveSkillListComponent_o *)this, 0);
}


void BattleServantClassBoardSkillEffectListComponent__Init(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        const MethodInfo *method)
{
  ClassBoardResourceCatalogAssetBundle_c *v3; // x0
  ClassBoardResourceCatalogAssetBundle_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x20
  System_Action_object__o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  ChainableActionParallel_o *v23; // x19

  if ( (byte_597419E & 1) == 0 )
  {
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&AtlasManagerUnit_TypeInfo);
    sub_2213A60(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__);
    sub_2213A60(&ChainableActionParallel_TypeInfo);
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    byte_597419E = 1;
  }
  v3 = ClassBoardResourceCatalogAssetBundle_TypeInfo;
  this->fields.skillOffset = 0.0;
  v4 = (ClassBoardResourceCatalogAssetBundle_o *)sub_2213CCC(v3);
  ClassBoardResourceCatalogAssetBundle___ctor(v4, 0);
  if ( !v4 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v4, 0);
  v8 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v8, IconAtlasPath, 0, 0);
  this->fields.atlasManagerUnit = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.atlasManagerUnit,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = sub_2213B20(System_Action_Action____TypeInfo, 1);
  v16 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__,
    0);
  if ( !v15 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v15 + 24) )
    sub_2213CE4(v5);
  *(_QWORD *)(v15 + 32) = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (ChainableActionParallel_o *)sub_2213CCC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_56108200(v23, (System_Action_Action__array *)v15, 0);
  if ( !v23 )
LABEL_8:
    sub_2213CDC(v5, v6);
  ChainableActionBase__Execute((ChainableActionBase_o *)v23, 0);
}


bool BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        BattleInfoData_o *battleInfoData,
        bool isGrandScore,
        const MethodInfo *method)
{
  void *skillListParent; // x0
  int v9; // w8
  void *v10; // x20
  __int64 v11; // x19
  int32_t OriginalClassId; // w0
  __int64 v13; // x1
  int32_t v14; // w24
  System_Collections_Generic_List_object__o *v15; // x24
  __int64 v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x26
  System_Collections_ICollection_o *v20; // x25
  __int64 IsForceToApplyBoardSquareIds; // x0
  __int64 v22; // x1
  int32_t klass; // w26
  bool IsFollwerSupport; // w0
  __int64 v25; // x1
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x27
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v29; // w25
  float v30; // s8
  _BOOL8 v31; // x0
  __int64 v32; // x1
  unsigned int v33; // w8
  Il2CppObject *v34; // x22
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v40; // x1
  _BOOL8 v41; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x1
  UnityEngine_Transform_o *v49; // x24
  __int64 v50; // x0
  __int64 v51; // x1
  UnityEngine_Transform_o *v52; // x24
  __int64 v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x1
  System_String_o *v56; // x2
  __int64 v57; // x1
  BattleServantClassBoardSkillEffectListComponent_c *v58; // x0
  BattleServantClassBoardSkillEffectListComponent_o *v59; // [xsp+8h] [xbp-D8h]
  int monitor; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597419F & 1) == 0 )
  {
    sub_2213A60(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24767/*"skill_{0:D5}"*/);
    byte_597419F = 1;
  }
  skillListParent = this->fields.skillListParent;
  entityList = 0;
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  this->fields.skillOffset = 0.0;
  if ( !skillListParent )
    goto LABEL_64;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_64;
  v9 = *((_DWORD *)skillListParent + 6);
  v10 = skillListParent;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= v9 )
        sub_2213CE4(skillListParent);
      skillListParent = (void *)*((_QWORD *)v10 + v11 + 4);
      if ( !skillListParent )
        break;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0);
      if ( !skillListParent )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_11;
    }
LABEL_64:
    sub_2213CDC(skillListParent, svtData);
  }
LABEL_11:
  if ( !svtData )
    return 0;
  OriginalClassId = BattleServantData__GetOriginalClassId(svtData, 0);
  if ( isGrandScore )
    OriginalClassId = BattleServantData__GetGrandClassId(svtData, 0);
  v14 = OriginalClassId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  skillListParent = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !skillListParent )
    goto LABEL_64;
  if ( !ClassBoardClassMaster__TryGetEntityListFromClassId(
          (ClassBoardClassMaster_o *)skillListParent,
          &entityList,
          v14,
          0) )
    return 0;
  v59 = this;
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  skillListParent = entityList;
  if ( !entityList )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v64 = v62;
  v62.fields._list = 0;
  *(_QWORD *)&v62.fields._index = &v64;
  v16 = isGrandScore ? 1016LL : 1008LL;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v17 )
      break;
    if ( !battleInfoData )
      sub_2213CDC(v17, v18);
    current = v64.fields._current;
    v20 = *(System_Collections_ICollection_o **)((char *)&svtData->klass + v16);
    IsForceToApplyBoardSquareIds = BattleInfoData__IsForceToApplyBoardSquareIds(battleInfoData, isGrandScore, 0);
    if ( (IsForceToApplyBoardSquareIds & 1) == 0 )
    {
      IsForceToApplyBoardSquareIds = (unsigned int)svtData->fields.followerType;
      if ( (_DWORD)IsForceToApplyBoardSquareIds )
      {
        IsForceToApplyBoardSquareIds = Follower__IsNpc(IsForceToApplyBoardSquareIds, 0);
        if ( (IsForceToApplyBoardSquareIds & 1) != 0 )
        {
          IsForceToApplyBoardSquareIds = BasicHelper__IsNullOrEmpty(v20, 0);
          if ( (IsForceToApplyBoardSquareIds & 1) != 0 )
            v20 = 0;
        }
      }
      else
      {
        v20 = 0;
      }
    }
    if ( !current )
      sub_2213CDC(IsForceToApplyBoardSquareIds, v22);
    klass = (int32_t)current[1].klass;
    IsFollwerSupport = BattleServantData__IsFollwerSupport(svtData, 0);
    ClassStatisticsInfos = BattleInfoData__GetClassStatisticsInfos(battleInfoData, IsFollwerSupport, 0);
    if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v25);
    OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                     klass,
                                                                     1,
                                                                     1,
                                                                     (System_Int32_array *)v20,
                                                                     ClassStatisticsInfos,
                                                                     0,
                                                                     0);
    if ( !v15 )
      sub_2213CDC(OpenSkillList, OpenSkillList);
    System_Collections_Generic_List_object___AddRange(
      v15,
      OpenSkillList,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  skillListParent = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0);
  if ( ((unsigned __int8)skillListParent & 1) != 0 )
    return 0;
  if ( !v15 )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    v15,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v63 = v62;
  v29 = 0;
  v30 = 0.0;
  v62.fields._list = 0;
  *(_QWORD *)&v62.fields._index = &v63;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    if ( !v31 )
      break;
    v33 = *((_DWORD *)v10 + 6);
    v34 = v63.fields._current;
    if ( (int)v29 >= (int)v33 )
    {
      v36 = v59->fields.skillListParent;
      if ( !v36 )
        sub_2213CDC(0, v32);
      skillInfoPrefab = v59->fields.skillInfoPrefab;
      transform = UnityEngine_GameObject__get_transform(v36, 0);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v59, skillInfoPrefab, transform, 0, 0);
      if ( !Object )
        sub_2213CDC(0, v40);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    }
    else
    {
      if ( v29 >= v33 )
        sub_2213CE4(v31);
      Component_object = (Il2CppObject *)*((_QWORD *)v10 + (int)v29 + 4);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    v41 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !v41 )
    {
      if ( !Component_object )
        sub_2213CDC(v41, v42);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !gameObject )
        sub_2213CDC(0, v44);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !v45 )
        sub_2213CDC(0, v46);
      v66.fields.x = 0.0;
      v66.fields.z = 0.0;
      v66.fields.y = v30;
      UnityEngine_Transform__set_localPosition(v45, v66, 0);
      v47 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v49 = (UnityEngine_Transform_o *)v47;
      if ( !byte_5969AE5 )
      {
        v47 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v49 )
        sub_2213CDC(v47, v48);
      UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v50 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v52 = (UnityEngine_Transform_o *)v50;
      if ( !byte_5969AE6 )
      {
        v50 = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
        byte_5969AE6 = 1;
      }
      if ( !v52 )
        sub_2213CDC(v50, v51);
      UnityEngine_Transform__set_localRotation(
        v52,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      if ( !v34 )
        sub_2213CDC(v53, v54);
      v30 = v30
          - ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
              (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
              (System_String_o *)v34[1].klass,
              (System_String_o *)v34[1].monitor,
              (int32_t)v34[2].monitor,
              HIDWORD(v34[2].monitor),
              1,
              0);
      monitor = (int)v34[2].monitor;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &monitor);
      v56 = System_String__Format((System_String_o *)StringLiteral_24767/*"skill_{0:D5}"*/, v55, 0);
      ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
        v59->fields.atlasManagerUnit,
        v56,
        0);
      ++v29;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  v58 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  if ( !*(&BattleServantClassBoardSkillEffectListComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantClassBoardSkillEffectListComponent_TypeInfo, v57);
    v58 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  }
  v59->fields.skillOffset = v30 + v58->static_fields->DefaultSkillOffset;
  return 1;
}


void BattleServantClassBoardSkillEffectListComponent___Init_b__2_0(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *atlasManagerUnit; // x0

  atlasManagerUnit = this->fields.atlasManagerUnit;
  if ( !atlasManagerUnit )
    sub_2213CDC(0, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0);
}