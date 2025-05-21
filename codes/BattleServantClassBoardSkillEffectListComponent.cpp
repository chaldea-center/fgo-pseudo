void __fastcall BattleServantClassBoardSkillEffectListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B47F04 & 1) == 0 )
  {
    sub_1BDB878(&BattleServantClassBoardSkillEffectListComponent_TypeInfo, v1);
    byte_4B47F04 = 1;
  }
  LODWORD(BattleServantClassBoardSkillEffectListComponent_TypeInfo->static_fields->DefaultSkillOffset) = (struct BattleServantClassBoardSkillEffectListComponent_StaticFields)-1037828096;
}


void __fastcall BattleServantClassBoardSkillEffectListComponent___ctor(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
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

  if ( (byte_4B47F02 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_Action____TypeInfo, method);
    sub_1BDB878(&System_Action_Action__TypeInfo, v3);
    sub_1BDB878(&AtlasManagerUnit_TypeInfo, v4);
    sub_1BDB878(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__, v5);
    sub_1BDB878(&ChainableActionParallel_TypeInfo, v6);
    sub_1BDB878(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v7);
    byte_4B47F02 = 1;
  }
  this->fields.skillOffset = 0.0;
  v8 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BDBAC4(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v8, 0LL);
  v12 = (AtlasManagerUnit_o *)sub_1BDBAC4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v12, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.atlasManagerUnit, (int32_t)v12, v13, v14);
  v15 = sub_1BDB920(System_Action_Action____TypeInfo, 1LL);
  v16 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__,
    0LL);
  if ( !v15 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1BDBADC(v9, v10, v17);
  *(_QWORD *)(v15 + 32) = v16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v16, v17, v18);
  v19 = (ChainableActionParallel_o *)sub_1BDBAC4(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48338324(v19, (System_Action_Action__array *)v15, 0LL);
  if ( !v19 )
LABEL_8:
    sub_1BDBAD4(v9, v10);
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
  int32_t v34; // w24
  System_Collections_Generic_List_object__o *v35; // x24
  __int64 v36; // x29
  _BOOL8 v37; // x0
  __int64 v38; // x1
  System_Int32_array *v39; // x23
  int32_t klass; // w25
  _BOOL8 IsFollwerSupport; // x0
  __int64 v42; // x1
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x26
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  bool result; // w0
  unsigned int v46; // w25
  float v47; // s8
  _BOOL8 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned int v51; // w8
  Il2CppObject *current; // x28
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v58; // x1
  _BOOL8 v59; // x0
  __int64 v60; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v62; // x1
  UnityEngine_Transform_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  UnityEngine_Transform_o *v67; // x24
  __int64 v68; // x0
  __int64 v69; // x1
  UnityEngine_Transform_o *v70; // x24
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x1
  System_String_o *v77; // x0
  BattleServantClassBoardSkillEffectListComponent_c *v78; // x0
  float *p_DefaultSkillOffset; // x8
  BattleServantClassBoardSkillEffectListComponent_o *v80; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B47F03 & 1) == 0 )
  {
    sub_1BDB878(&BattleServantClassBoardSkillEffectListComponent_TypeInfo, svtData);
    sub_1BDB878(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v12);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v14);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v16);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v17);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v18);
    sub_1BDB878(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v19);
    sub_1BDB878(&int_TypeInfo, v20);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v21);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v23);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v24);
    sub_1BDB878(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v25);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v26);
    sub_1BDB878(&StringLiteral_23554/*"skill_{0:D5}"*/, v27);
    byte_4B47F03 = 1;
  }
  entityList = 0LL;
  memset(&v83, 0, sizeof(v83));
  memset(&v82, 0, sizeof(v82));
  skillListParent = this->fields.skillListParent;
  this->fields.skillOffset = 0.0;
  if ( !skillListParent )
    goto LABEL_60;
  v80 = this;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__50893124(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_3089144 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_60;
  v30 = *((_DWORD *)skillListParent + 6);
  v31 = skillListParent;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v30 )
        sub_1BDBADC(skillListParent, svtData, v29);
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
LABEL_60:
    sub_1BDBAD4(skillListParent, svtData);
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
  skillListParent = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !skillListParent )
    goto LABEL_60;
  if ( !ClassBoardClassMaster__TryGetEntityListFromClassId(
          (ClassBoardClassMaster_o *)skillListParent,
          &entityList,
          v34,
          0LL) )
    return 0;
  v35 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  skillListParent = entityList;
  if ( !entityList )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v83 = v81;
  v36 = isGrandScore ? 952LL : 944LL;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v37 )
      break;
    if ( svtData->fields.followerType )
      v39 = *(System_Int32_array **)((char *)&svtData->klass + v36);
    else
      v39 = 0LL;
    if ( !v83.fields._current )
      sub_1BDBAD4(v37, v38);
    klass = (int32_t)v83.fields._current[1].klass;
    IsFollwerSupport = BattleServantData__IsFollwerSupport(svtData, 0LL);
    if ( !battleInfoData )
      sub_1BDBAD4(IsFollwerSupport, v42);
    ClassStatisticsInfos = BattleInfoData__GetClassStatisticsInfos(battleInfoData, IsFollwerSupport, 0LL);
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                     klass,
                                                                     1,
                                                                     1,
                                                                     v39,
                                                                     ClassStatisticsInfos,
                                                                     0LL);
    if ( !v35 )
      sub_1BDBAD4(OpenSkillList, OpenSkillList);
    System_Collections_Generic_List_object___AddRange(
      v35,
      OpenSkillList,
      (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  skillListParent = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v35, 0LL);
  if ( ((unsigned __int8)skillListParent & 1) != 0 )
    return 0;
  if ( !v35 )
    goto LABEL_60;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    v35,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v82 = v81;
  v46 = 0;
  v47 = 0.0;
  while ( 1 )
  {
    v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    if ( !v48 )
      break;
    v51 = *((_DWORD *)v31 + 6);
    current = v82.fields._current;
    if ( (int)v46 >= (int)v51 )
    {
      v54 = v80->fields.skillListParent;
      if ( !v54 )
        sub_1BDBAD4(0LL, v49);
      skillInfoPrefab = v80->fields.skillInfoPrefab;
      transform = UnityEngine_GameObject__get_transform(v54, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v80, skillInfoPrefab, transform, 0LL, 0LL);
      if ( !Object )
        sub_1BDBAD4(0LL, v58);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    }
    else
    {
      if ( v46 >= v51 )
        sub_1BDBADC(v48, v49, v50);
      Component_object = (Il2CppObject *)*((_QWORD *)v31 + (int)v46 + 4);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v59 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( !v59 )
    {
      if ( !Component_object )
        sub_1BDBAD4(v59, v60);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !gameObject )
        sub_1BDBAD4(0LL, v62);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v63 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      if ( !v63 )
        sub_1BDBAD4(0LL, v64);
      v85.fields.x = 0.0;
      v85.fields.z = 0.0;
      v85.fields.y = v47;
      UnityEngine_Transform__set_localPosition(v63, v85, 0LL);
      v65 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      v67 = (UnityEngine_Transform_o *)v65;
      if ( !byte_4B3E916 )
      {
        v65 = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v66);
        byte_4B3E916 = 1;
      }
      if ( !v67 )
        sub_1BDBAD4(v65, v66);
      UnityEngine_Transform__set_localScale(v67, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      v68 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      v70 = (UnityEngine_Transform_o *)v68;
      if ( !byte_4B3E917 )
      {
        v68 = sub_1BDB878(&UnityEngine_Quaternion_TypeInfo, v69);
        byte_4B3E917 = 1;
      }
      if ( !v70 )
        sub_1BDBAD4(v68, v69);
      UnityEngine_Transform__set_localRotation(
        v70,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0LL);
      if ( !current )
        sub_1BDBAD4(v71, v72);
      v47 = v47
          - ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
              (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
              (System_String_o *)current[1].klass,
              (System_String_o *)current[1].monitor,
              (int32_t)current[2].monitor,
              HIDWORD(current[2].monitor),
              1,
              0LL);
      LODWORD(v81.fields._list) = current[2].monitor;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v73, v74, v75);
      v77 = System_String__Format((System_String_o *)StringLiteral_23554/*"skill_{0:D5}"*/, v76, 0LL);
      ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
        v80->fields.atlasManagerUnit,
        v77,
        0LL);
      ++v46;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  v78 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  if ( !BattleServantClassBoardSkillEffectListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    v78 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  }
  p_DefaultSkillOffset = &v78->static_fields->DefaultSkillOffset;
  result = 1;
  v80->fields.skillOffset = v47 + *p_DefaultSkillOffset;
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
    sub_1BDBAD4(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}