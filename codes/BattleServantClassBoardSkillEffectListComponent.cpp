void BattleServantClassBoardSkillEffectListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C46606 & 1) == 0 )
  {
    sub_1C37058(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    byte_4C46606 = 1;
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
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x20
  System_Action_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ChainableActionParallel_o *v13; // x19

  if ( (byte_4C46604 & 1) == 0 )
  {
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&AtlasManagerUnit_TypeInfo);
    sub_1C37058(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__);
    sub_1C37058(&ChainableActionParallel_TypeInfo);
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    byte_4C46604 = 1;
  }
  this->fields.skillOffset = 0.0;
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C372A4(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v3, 0);
  v6 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v6, IconAtlasPath, 0, 0);
  this->fields.atlasManagerUnit = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.atlasManagerUnit, (int32_t)v6, v7, v8);
  v9 = sub_1C37100(System_Action_Action____TypeInfo, 1);
  v10 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__,
    0);
  if ( !v9 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C372BC(v4);
  *(_QWORD *)(v9 + 32) = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v10, v11, v12);
  v13 = (ChainableActionParallel_o *)sub_1C372A4(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49042072(v13, (System_Action_Action__array *)v9, 0);
  if ( !v13 )
LABEL_8:
    sub_1C372B4(v4);
  ChainableActionBase__Execute((ChainableActionBase_o *)v13, 0);
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
  Il2CppObject *current; // x26
  System_Collections_ICollection_o *v18; // x25
  __int64 IsForceToApplyBoardSquareIds; // x0
  int32_t klass; // w26
  bool IsFollwerSupport; // w0
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x27
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  bool result; // w0
  unsigned int v25; // w25
  float v26; // s8
  _BOOL8 v27; // x0
  unsigned int v28; // w8
  Il2CppObject *v29; // x28
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  _BOOL8 v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Transform_o *v38; // x0
  UnityEngine_Transform_o *v39; // x24
  UnityEngine_Transform_o *v40; // x0
  UnityEngine_Transform_o *v41; // x24
  __int64 v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  Il2CppObject *v49; // x1
  System_String_o *v50; // x2
  BattleServantClassBoardSkillEffectListComponent_c *v51; // x0
  float *p_DefaultSkillOffset; // x8
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46605 & 1) == 0 )
  {
    sub_1C37058(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    sub_1C37058(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_23525/*"skill_{0:D5}"*/);
    byte_4C46605 = 1;
  }
  entityList = 0;
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  skillListParent = this->fields.skillListParent;
  this->fields.skillOffset = 0.0;
  if ( !skillListParent )
    goto LABEL_64;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
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
        sub_1C372BC(skillListParent);
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
    sub_1C372B4(skillListParent);
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
  skillListParent = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !skillListParent )
    goto LABEL_64;
  if ( !ClassBoardClassMaster__TryGetEntityListFromClassId(
          (ClassBoardClassMaster_o *)skillListParent,
          &entityList,
          v13,
          0) )
    return 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  skillListParent = entityList;
  if ( !entityList )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v56 = v54;
  v15 = isGrandScore ? 984LL : 976LL;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !battleInfoData )
      sub_1C372B4(v16);
    current = v56.fields._current;
    v18 = *(System_Collections_ICollection_o **)((char *)&svtData->klass + v15);
    IsForceToApplyBoardSquareIds = BattleInfoData__IsForceToApplyBoardSquareIds(battleInfoData, isGrandScore, 0);
    if ( (IsForceToApplyBoardSquareIds & 1) == 0 )
    {
      IsForceToApplyBoardSquareIds = (unsigned int)svtData->fields.followerType;
      if ( (_DWORD)IsForceToApplyBoardSquareIds )
      {
        IsForceToApplyBoardSquareIds = Follower__IsNpc(IsForceToApplyBoardSquareIds, 0);
        if ( (IsForceToApplyBoardSquareIds & 1) != 0 )
        {
          IsForceToApplyBoardSquareIds = BasicHelper__IsNullOrEmpty(v18, 0);
          if ( (IsForceToApplyBoardSquareIds & 1) != 0 )
            v18 = 0;
        }
      }
      else
      {
        v18 = 0;
      }
    }
    if ( !current )
      sub_1C372B4(IsForceToApplyBoardSquareIds);
    klass = (int32_t)current[1].klass;
    IsFollwerSupport = BattleServantData__IsFollwerSupport(svtData, 0);
    ClassStatisticsInfos = BattleInfoData__GetClassStatisticsInfos(battleInfoData, IsFollwerSupport, 0);
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                     klass,
                                                                     1,
                                                                     1,
                                                                     (System_Int32_array *)v18,
                                                                     ClassStatisticsInfos,
                                                                     0,
                                                                     0);
    if ( !v14 )
      sub_1C372B4(OpenSkillList);
    System_Collections_Generic_List_object___AddRange(
      v14,
      OpenSkillList,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  skillListParent = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0);
  if ( ((unsigned __int8)skillListParent & 1) != 0 )
    return 0;
  if ( !v14 )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v14,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v55 = v54;
  v25 = 0;
  v26 = 0.0;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    if ( !v27 )
      break;
    v28 = *((_DWORD *)v10 + 6);
    v29 = v55.fields._current;
    if ( (int)v25 >= (int)v28 )
    {
      v31 = this->fields.skillListParent;
      if ( !v31 )
        sub_1C372B4(0);
      skillInfoPrefab = this->fields.skillInfoPrefab;
      transform = UnityEngine_GameObject__get_transform(v31, 0);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0, 0);
      if ( !Object )
        sub_1C372B4(0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    }
    else
    {
      if ( v25 >= v28 )
        sub_1C372BC(v27);
      Component_object = (Il2CppObject *)*((_QWORD *)v10 + (int)v25 + 4);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v35 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !v35 )
    {
      if ( !Component_object )
        sub_1C372B4(v35);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !gameObject )
        sub_1C372B4(0);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !v37 )
        sub_1C372B4(0);
      v58.fields.x = 0.0;
      v58.fields.z = 0.0;
      v58.fields.y = v26;
      UnityEngine_Transform__set_localPosition(v37, v58, 0);
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v39 = v38;
      if ( !byte_4C3C926 )
      {
        v38 = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v39 )
        sub_1C372B4(v38);
      UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v41 = v40;
      if ( !byte_4C3C927 )
      {
        v40 = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
        byte_4C3C927 = 1;
      }
      if ( !v41 )
        sub_1C372B4(v40);
      UnityEngine_Transform__set_localRotation(
        v41,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      if ( !v29 )
        sub_1C372B4(v42);
      v26 = v26
          - ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
              (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
              (System_String_o *)v29[1].klass,
              (System_String_o *)v29[1].monitor,
              (int32_t)v29[2].monitor,
              HIDWORD(v29[2].monitor),
              1,
              0);
      LODWORD(v54.fields._list) = v29[2].monitor;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v43, v44, v45, v46, v47, v48);
      v50 = System_String__Format((System_String_o *)StringLiteral_23525/*"skill_{0:D5}"*/, v49, 0);
      ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
        this->fields.atlasManagerUnit,
        v50,
        0);
      ++v25;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  v51 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  if ( !BattleServantClassBoardSkillEffectListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    v51 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  }
  p_DefaultSkillOffset = &v51->static_fields->DefaultSkillOffset;
  result = 1;
  this->fields.skillOffset = v26 + *p_DefaultSkillOffset;
  return result;
}


void BattleServantClassBoardSkillEffectListComponent___Init_b__2_0(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *atlasManagerUnit; // x0

  atlasManagerUnit = this->fields.atlasManagerUnit;
  if ( !atlasManagerUnit )
    sub_1C372B4(0);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0);
}