void BattleServantClassBoardSkillEffectListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D3414E & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    byte_4D3414E = 1;
  }
  LODWORD(BattleServantClassBoardSkillEffectListComponent_TypeInfo->static_fields->DefaultSkillOffset) = (struct BattleServantClassBoardSkillEffectListComponent_StaticFields)-1037828096;
}


void BattleServantClassBoardSkillEffectListComponent___ctor(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantClassBoardSkillEffectListComponent__Init(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        const MethodInfo *method)
{
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x20
  System_Action_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  ChainableActionParallel_o *v22; // x19

  if ( (byte_4D3414C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_Action____TypeInfo);
    sub_1C93AD4(&System_Action_Action__TypeInfo);
    sub_1C93AD4(&AtlasManagerUnit_TypeInfo);
    sub_1C93AD4(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__);
    sub_1C93AD4(&ChainableActionParallel_TypeInfo);
    sub_1C93AD4(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    byte_4D3414C = 1;
  }
  this->fields.skillOffset = 0.0;
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C93D20(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v3, 0);
  v7 = (AtlasManagerUnit_o *)sub_1C93D20(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, IconAtlasPath, 0, 0);
  this->fields.atlasManagerUnit = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.atlasManagerUnit, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = sub_1C93B7C(System_Action_Action____TypeInfo, 1);
  v15 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__,
    0);
  if ( !v14 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1C93D34(v4);
  *(_QWORD *)(v14 + 32) = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (ChainableActionParallel_o *)sub_1C93D20(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49765204(v22, (System_Action_Action__array *)v14, 0);
  if ( !v22 )
LABEL_8:
    sub_1C93D2C(v4, v5);
  ChainableActionBase__Execute((ChainableActionBase_o *)v22, 0);
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
  unsigned int v11; // w19
  int32_t OriginalClassId; // w0
  int32_t v13; // w24
  System_Collections_Generic_List_object__o *v14; // x24
  __int64 v15; // x19
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x26
  System_Collections_ICollection_o *v19; // x25
  __int64 IsForceToApplyBoardSquareIds; // x0
  __int64 v21; // x1
  int32_t klass; // w26
  bool IsFollwerSupport; // w0
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x27
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v27; // w25
  float v28; // s8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  unsigned int v31; // w8
  Il2CppObject *v32; // x28
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  UnityEngine_Transform_o *v47; // x24
  __int64 v48; // x0
  __int64 v49; // x1
  UnityEngine_Transform_o *v50; // x24
  __int64 v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x1
  System_String_o *v54; // x2
  BattleServantClassBoardSkillEffectListComponent_c *v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3414D & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_23814/*"skill_{0:D5}"*/);
    byte_4D3414D = 1;
  }
  entityList = 0;
  memset(&v59, 0, sizeof(v59));
  memset(&v58, 0, sizeof(v58));
  skillListParent = this->fields.skillListParent;
  this->fields.skillOffset = 0.0;
  if ( !skillListParent )
    goto LABEL_64;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_64;
  v9 = *((_DWORD *)skillListParent + 6);
  v10 = skillListParent;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1C93D34(skillListParent);
      skillListParent = (void *)*((_QWORD *)v10 + (int)v11 + 4);
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
    sub_1C93D2C(skillListParent, svtData);
  }
LABEL_11:
  if ( !svtData )
    return 0;
  OriginalClassId = BattleServantData__GetOriginalClassId(svtData, 0);
  if ( isGrandScore )
    OriginalClassId = BattleServantData__GetGrandClassId(svtData, 0);
  v13 = OriginalClassId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  skillListParent = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !skillListParent )
    goto LABEL_64;
  if ( !ClassBoardClassMaster__TryGetEntityListFromClassId(
          (ClassBoardClassMaster_o *)skillListParent,
          &entityList,
          v13,
          0) )
    return 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  skillListParent = entityList;
  if ( !entityList )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v59 = v57;
  v15 = isGrandScore ? 1016LL : 1008LL;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !battleInfoData )
      sub_1C93D2C(v16, v17);
    current = v59.fields._current;
    v19 = *(System_Collections_ICollection_o **)((char *)&svtData->klass + v15);
    IsForceToApplyBoardSquareIds = BattleInfoData__IsForceToApplyBoardSquareIds(battleInfoData, isGrandScore, 0);
    if ( (IsForceToApplyBoardSquareIds & 1) == 0 )
    {
      IsForceToApplyBoardSquareIds = (unsigned int)svtData->fields.followerType;
      if ( (_DWORD)IsForceToApplyBoardSquareIds )
      {
        IsForceToApplyBoardSquareIds = Follower__IsNpc(IsForceToApplyBoardSquareIds, 0);
        if ( (IsForceToApplyBoardSquareIds & 1) != 0 )
        {
          IsForceToApplyBoardSquareIds = BasicHelper__IsNullOrEmpty(v19, 0);
          if ( (IsForceToApplyBoardSquareIds & 1) != 0 )
            v19 = 0;
        }
      }
      else
      {
        v19 = 0;
      }
    }
    if ( !current )
      sub_1C93D2C(IsForceToApplyBoardSquareIds, v21);
    klass = (int32_t)current[1].klass;
    IsFollwerSupport = BattleServantData__IsFollwerSupport(svtData, 0);
    ClassStatisticsInfos = BattleInfoData__GetClassStatisticsInfos(battleInfoData, IsFollwerSupport, 0);
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                     klass,
                                                                     1,
                                                                     1,
                                                                     (System_Int32_array *)v19,
                                                                     ClassStatisticsInfos,
                                                                     0,
                                                                     0);
    if ( !v14 )
      sub_1C93D2C(OpenSkillList, OpenSkillList);
    System_Collections_Generic_List_object___AddRange(
      v14,
      OpenSkillList,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  skillListParent = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0);
  if ( ((unsigned __int8)skillListParent & 1) != 0 )
    return 0;
  if ( !v14 )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v14,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v58 = v57;
  v27 = 0;
  v28 = 0.0;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    if ( !v29 )
      break;
    v31 = *((_DWORD *)v10 + 6);
    v32 = v58.fields._current;
    if ( (int)v27 >= (int)v31 )
    {
      v34 = this->fields.skillListParent;
      if ( !v34 )
        sub_1C93D2C(0, v30);
      skillInfoPrefab = this->fields.skillInfoPrefab;
      transform = UnityEngine_GameObject__get_transform(v34, 0);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0, 0);
      if ( !Object )
        sub_1C93D2C(0, v38);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    }
    else
    {
      if ( v27 >= v31 )
        sub_1C93D34(v29);
      Component_object = (Il2CppObject *)*((_QWORD *)v10 + (int)v27 + 4);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v39 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !v39 )
    {
      if ( !Component_object )
        sub_1C93D2C(v39, v40);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !gameObject )
        sub_1C93D2C(0, v42);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !v43 )
        sub_1C93D2C(0, v44);
      v61.fields.x = 0.0;
      v61.fields.z = 0.0;
      v61.fields.y = v28;
      UnityEngine_Transform__set_localPosition(v43, v61, 0);
      v45 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v47 = (UnityEngine_Transform_o *)v45;
      if ( !byte_4D2A13E )
      {
        v45 = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( !v47 )
        sub_1C93D2C(v45, v46);
      UnityEngine_Transform__set_localScale(v47, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v48 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v50 = (UnityEngine_Transform_o *)v48;
      if ( !byte_4D2A13F )
      {
        v48 = sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
        byte_4D2A13F = 1;
      }
      if ( !v50 )
        sub_1C93D2C(v48, v49);
      UnityEngine_Transform__set_localRotation(
        v50,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      if ( !v32 )
        sub_1C93D2C(v51, v52);
      v28 = v28
          - ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
              (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
              (System_String_o *)v32[1].klass,
              (System_String_o *)v32[1].monitor,
              (int32_t)v32[2].monitor,
              HIDWORD(v32[2].monitor),
              1,
              0);
      LODWORD(v57.fields._list) = v32[2].monitor;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
      v54 = System_String__Format((System_String_o *)StringLiteral_23814/*"skill_{0:D5}"*/, v53, 0);
      ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
        this->fields.atlasManagerUnit,
        v54,
        0);
      ++v27;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  v55 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  if ( !BattleServantClassBoardSkillEffectListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    v55 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  }
  this->fields.skillOffset = v28 + v55->static_fields->DefaultSkillOffset;
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
    sub_1C93D2C(0, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0);
}