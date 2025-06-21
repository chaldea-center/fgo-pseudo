void __fastcall BattleServantClassBoardSkillEffectListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1FA1E & 1) == 0 )
  {
    sub_1BCAFF8(&BattleServantClassBoardSkillEffectListComponent_TypeInfo, v1);
    byte_4B1FA1E = 1;
  }
  LODWORD(BattleServantClassBoardSkillEffectListComponent_TypeInfo->static_fields->DefaultSkillOffset) = (struct BattleServantClassBoardSkillEffectListComponent_StaticFields)-1037828096;
}


void __fastcall BattleServantClassBoardSkillEffectListComponent___ctor(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfWindowPassiveSkillListComponent___ctor(
    (BattleServantConfWindowPassiveSkillListComponent_o *)this,
    0LL);
}


void __fastcall BattleServantClassBoardSkillEffectListComponent__Init(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ClassBoardResourceCatalogAssetBundle_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x20
  System_Action_object__o *v16; // x21
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  ChainableActionParallel_o *v19; // x19

  if ( (byte_4B1FA1C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_Action____TypeInfo, method);
    sub_1BCAFF8(&System_Action_Action__TypeInfo, v3);
    sub_1BCAFF8(&AtlasManagerUnit_TypeInfo, v4);
    sub_1BCAFF8(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__, v5);
    sub_1BCAFF8(&ChainableActionParallel_TypeInfo, v6);
    sub_1BCAFF8(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v7);
    byte_4B1FA1C = 1;
  }
  this->fields.skillOffset = 0.0;
  v8 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BCB244(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v8, 0LL);
  v12 = (AtlasManagerUnit_o *)sub_1BCB244(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v12, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.atlasManagerUnit, (int32_t)v12, v13, v14);
  v15 = sub_1BCB0A0(System_Action_Action____TypeInfo, 1LL);
  v16 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__,
    0LL);
  if ( !v15 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1BCB25C(v9, v10, v17);
  *(_QWORD *)(v15 + 32) = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v16, v17, v18);
  v19 = (ChainableActionParallel_o *)sub_1BCB244(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48236352(v19, (System_Action_Action__array *)v15, 0LL);
  if ( !v19 )
LABEL_8:
    sub_1BCB254(v9, v10);
  ChainableActionBase__Execute((ChainableActionBase_o *)v19, 0LL);
}


bool __fastcall BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        BattleInfoData_o *battleInfoData,
        bool isGrandScore,
        const MethodInfo *method)
{
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
  void *skillListParent; // x0
  __int64 v29; // x2
  int v30; // w8
  void *v31; // x20
  unsigned int v32; // w19
  int32_t OriginalClassId; // w0
  int32_t v34; // w23
  System_Collections_Generic_List_object__o *v35; // x23
  __int64 v36; // x29
  __int64 v37; // x1
  __int64 followerType; // x0
  Il2CppObject *current; // x25
  System_Collections_ICollection_o *v40; // x24
  int32_t klass; // w25
  _BOOL8 IsFollwerSupport; // x0
  __int64 v43; // x1
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x26
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  bool result; // w0
  unsigned int v47; // w25
  float v48; // s8
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  unsigned int v52; // w8
  Il2CppObject *v53; // x28
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v59; // x1
  _BOOL8 v60; // x0
  __int64 v61; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v63; // x1
  UnityEngine_Transform_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x0
  __int64 v67; // x1
  UnityEngine_Transform_o *v68; // x24
  __int64 v69; // x0
  __int64 v70; // x1
  UnityEngine_Transform_o *v71; // x24
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x1
  System_String_o *v78; // x2
  BattleServantClassBoardSkillEffectListComponent_c *v79; // x0
  float *p_DefaultSkillOffset; // x8
  BattleServantClassBoardSkillEffectListComponent_o *v81; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1FA1D & 1) == 0 )
  {
    sub_1BCAFF8(&BattleServantClassBoardSkillEffectListComponent_TypeInfo, svtData);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v12);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v14);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v16);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v17);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v18);
    sub_1BCAFF8(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v19);
    sub_1BCAFF8(&int_TypeInfo, v20);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v21);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v23);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v24);
    sub_1BCAFF8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v25);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v26);
    sub_1BCAFF8(&StringLiteral_23315/*"skill_{0:D5}"*/, v27);
    byte_4B1FA1D = 1;
  }
  entityList = 0LL;
  memset(&v84, 0, sizeof(v84));
  memset(&v83, 0, sizeof(v83));
  skillListParent = this->fields.skillListParent;
  this->fields.skillOffset = 0.0;
  if ( !skillListParent )
    goto LABEL_63;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_63;
  v30 = *((_DWORD *)skillListParent + 6);
  v31 = skillListParent;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v30 )
        sub_1BCB25C(skillListParent, svtData, v29);
      skillListParent = (void *)*((_QWORD *)v31 + (int)v32 + 4);
      if ( !skillListParent )
        break;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        goto LABEL_11;
    }
LABEL_63:
    sub_1BCB254(skillListParent, svtData);
  }
LABEL_11:
  if ( !svtData )
    return 0;
  OriginalClassId = BattleServantData__GetOriginalClassId(svtData, 0LL);
  if ( isGrandScore )
    OriginalClassId = BattleServantData__GetClassIdOfGrandClassScore(svtData, battleInfoData, 0LL);
  v34 = OriginalClassId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  skillListParent = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !skillListParent )
    goto LABEL_63;
  if ( !ClassBoardClassMaster__TryGetEntityListFromClassId(
          (ClassBoardClassMaster_o *)skillListParent,
          &entityList,
          v34,
          0LL) )
    return 0;
  v81 = this;
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  skillListParent = entityList;
  if ( !entityList )
    goto LABEL_63;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v84 = v82;
  v36 = isGrandScore ? 960LL : 952LL;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v84,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    followerType = (unsigned int)svtData->fields.followerType;
    current = v84.fields._current;
    if ( (_DWORD)followerType )
    {
      v40 = *(System_Collections_ICollection_o **)((char *)&svtData->klass + v36);
      followerType = Follower__IsNpc(followerType, 0LL);
      if ( (followerType & 1) != 0 )
      {
        followerType = BasicHelper__IsNullOrEmpty(v40, 0LL);
        if ( (followerType & 1) != 0 )
          v40 = 0LL;
      }
    }
    else
    {
      v40 = 0LL;
    }
    if ( !current )
      sub_1BCB254(followerType, v37);
    klass = (int32_t)current[1].klass;
    IsFollwerSupport = BattleServantData__IsFollwerSupport(svtData, 0LL);
    if ( !battleInfoData )
      sub_1BCB254(IsFollwerSupport, v43);
    ClassStatisticsInfos = BattleInfoData__GetClassStatisticsInfos(battleInfoData, IsFollwerSupport, 0LL);
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                     klass,
                                                                     1,
                                                                     1,
                                                                     (System_Int32_array *)v40,
                                                                     ClassStatisticsInfos,
                                                                     0LL);
    if ( !v35 )
      sub_1BCB254(OpenSkillList, OpenSkillList);
    System_Collections_Generic_List_object___AddRange(
      v35,
      OpenSkillList,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v84,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  skillListParent = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v35, 0LL);
  if ( ((unsigned __int8)skillListParent & 1) != 0 )
    return 0;
  if ( !v35 )
    goto LABEL_63;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    v35,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v83 = v82;
  v47 = 0;
  v48 = 0.0;
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    if ( !v49 )
      break;
    v52 = *((_DWORD *)v31 + 6);
    v53 = v83.fields._current;
    if ( (int)v47 >= (int)v52 )
    {
      v55 = v81->fields.skillListParent;
      if ( !v55 )
        sub_1BCB254(0LL, v50);
      skillInfoPrefab = v81->fields.skillInfoPrefab;
      transform = UnityEngine_GameObject__get_transform(v55, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v81, skillInfoPrefab, transform, 0LL, 0LL);
      if ( !Object )
        sub_1BCB254(0LL, v59);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    }
    else
    {
      if ( v47 >= v52 )
        sub_1BCB25C(v49, v50, v51);
      Component_object = (Il2CppObject *)*((_QWORD *)v31 + (int)v47 + 4);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v60 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( !v60 )
    {
      if ( !Component_object )
        sub_1BCB254(v60, v61);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !gameObject )
        sub_1BCB254(0LL, v63);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v64 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !v64 )
        sub_1BCB254(0LL, v65);
      v86.fields.x = 0.0;
      v86.fields.z = 0.0;
      v86.fields.y = v48;
      UnityEngine_Transform__set_localPosition(v64, v86, 0LL);
      v66 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      v68 = (UnityEngine_Transform_o *)v66;
      if ( !byte_4B16196 )
      {
        v66 = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v67);
        byte_4B16196 = 1;
      }
      if ( !v68 )
        sub_1BCB254(v66, v67);
      UnityEngine_Transform__set_localScale(v68, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      v69 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      v71 = (UnityEngine_Transform_o *)v69;
      if ( !byte_4B16197 )
      {
        v69 = sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v70);
        byte_4B16197 = 1;
      }
      if ( !v71 )
        sub_1BCB254(v69, v70);
      UnityEngine_Transform__set_localRotation(
        v71,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      if ( !v53 )
        sub_1BCB254(v72, v73);
      v48 = v48
          - ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
              (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
              (System_String_o *)v53[1].klass,
              (System_String_o *)v53[1].monitor,
              (int32_t)v53[2].monitor,
              HIDWORD(v53[2].monitor),
              1,
              0LL);
      LODWORD(v82.fields._list) = v53[2].monitor;
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v74, v75, v76);
      v78 = System_String__Format((System_String_o *)StringLiteral_23315/*"skill_{0:D5}"*/, v77, 0LL);
      ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
        v81->fields.atlasManagerUnit,
        v78,
        0LL);
      ++v47;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  v79 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  if ( !BattleServantClassBoardSkillEffectListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    v79 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  }
  p_DefaultSkillOffset = &v79->static_fields->DefaultSkillOffset;
  result = 1;
  v81->fields.skillOffset = v48 + *p_DefaultSkillOffset;
  return result;
}


void __fastcall BattleServantClassBoardSkillEffectListComponent___Init_b__2_0(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *atlasManagerUnit; // x0

  atlasManagerUnit = this->fields.atlasManagerUnit;
  if ( !atlasManagerUnit )
    sub_1BCB254(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}