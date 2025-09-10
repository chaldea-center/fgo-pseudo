void BattleServantClassBoardSkillEffectListComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C2A8D5 & 1) == 0 )
  {
    sub_1C2D490(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    byte_4C2A8D5 = 1;
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
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  System_Action_object__o *v11; // x21
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  ChainableActionParallel_o *v14; // x19

  if ( (byte_4C2A8D3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Action____TypeInfo);
    sub_1C2D490(&System_Action_Action__TypeInfo);
    sub_1C2D490(&AtlasManagerUnit_TypeInfo);
    sub_1C2D490(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__);
    sub_1C2D490(&ChainableActionParallel_TypeInfo);
    sub_1C2D490(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    byte_4C2A8D3 = 1;
  }
  this->fields.skillOffset = 0.0;
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C2D6DC(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v3, 0);
  v7 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, IconAtlasPath, 0, 0);
  this->fields.atlasManagerUnit = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.atlasManagerUnit, (int32_t)v7, v8, v9);
  v10 = sub_1C2D538(System_Action_Action____TypeInfo, 1);
  v11 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__2_0__,
    0);
  if ( !v10 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1C2D6F4(v4, v5, v12);
  *(_QWORD *)(v10 + 32) = v11;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v11, v12, v13);
  v14 = (ChainableActionParallel_o *)sub_1C2D6DC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48939044(v14, (System_Action_Action__array *)v10, 0);
  if ( !v14 )
LABEL_8:
    sub_1C2D6EC(v4, v5);
  ChainableActionBase__Execute((ChainableActionBase_o *)v14, 0);
}


bool BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        BattleInfoData_o *battleInfoData,
        bool isGrandScore,
        const MethodInfo *method)
{
  void *skillListParent; // x0
  __int64 v9; // x2
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w19
  int32_t OriginalClassId; // w0
  int32_t v14; // w24
  System_Collections_Generic_List_object__o *v15; // x24
  __int64 v16; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x26
  System_Collections_ICollection_o *v20; // x25
  __int64 IsForceToApplyBoardSquareIds; // x0
  __int64 v22; // x1
  int32_t klass; // w26
  bool IsFollwerSupport; // w0
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x27
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  bool result; // w0
  unsigned int v28; // w25
  float v29; // s8
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned int v33; // w8
  Il2CppObject *v34; // x28
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v40; // x1
  _BOOL8 v41; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x0
  __int64 v46; // x1
  UnityEngine_Transform_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_Transform_o *v49; // x24
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x1
  UnityEngine_Transform_o *v52; // x24
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x1
  System_String_o *v59; // x2
  BattleServantClassBoardSkillEffectListComponent_c *v60; // x0
  float *p_DefaultSkillOffset; // x8
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+78h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A8D4 & 1) == 0 )
  {
    sub_1C2D490(&BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23503/*"skill_{0:D5}"*/);
    byte_4C2A8D4 = 1;
  }
  entityList = 0;
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  skillListParent = this->fields.skillListParent;
  this->fields.skillOffset = 0.0;
  if ( !skillListParent )
    goto LABEL_64;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_64;
  v10 = *((_DWORD *)skillListParent + 6);
  v11 = skillListParent;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1C2D6F4(skillListParent, svtData, v9);
      skillListParent = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !skillListParent )
        break;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0);
      if ( !skillListParent )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_11;
    }
LABEL_64:
    sub_1C2D6EC(skillListParent, svtData);
  }
LABEL_11:
  if ( !svtData )
    return 0;
  OriginalClassId = BattleServantData__GetOriginalClassId(svtData, 0);
  if ( isGrandScore )
    OriginalClassId = BattleServantData__GetGrandClassId(svtData, 0);
  v14 = OriginalClassId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  skillListParent = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !skillListParent )
    goto LABEL_64;
  if ( !ClassBoardClassMaster__TryGetEntityListFromClassId(
          (ClassBoardClassMaster_o *)skillListParent,
          &entityList,
          v14,
          0) )
    return 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  skillListParent = entityList;
  if ( !entityList )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v65 = v63;
  v16 = isGrandScore ? 976LL : 968LL;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v17 )
      break;
    if ( !battleInfoData )
      sub_1C2D6EC(v17, v18);
    current = v65.fields._current;
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
      sub_1C2D6EC(IsForceToApplyBoardSquareIds, v22);
    klass = (int32_t)current[1].klass;
    IsFollwerSupport = BattleServantData__IsFollwerSupport(svtData, 0);
    ClassStatisticsInfos = BattleInfoData__GetClassStatisticsInfos(battleInfoData, IsFollwerSupport, 0);
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                     klass,
                                                                     1,
                                                                     1,
                                                                     (System_Int32_array *)v20,
                                                                     ClassStatisticsInfos,
                                                                     0,
                                                                     0);
    if ( !v15 )
      sub_1C2D6EC(OpenSkillList, OpenSkillList);
    System_Collections_Generic_List_object___AddRange(
      v15,
      OpenSkillList,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  skillListParent = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0);
  if ( ((unsigned __int8)skillListParent & 1) != 0 )
    return 0;
  if ( !v15 )
    goto LABEL_64;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    v15,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v64 = v63;
  v28 = 0;
  v29 = 0.0;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    if ( !v30 )
      break;
    v33 = *((_DWORD *)v11 + 6);
    v34 = v64.fields._current;
    if ( (int)v28 >= (int)v33 )
    {
      v36 = this->fields.skillListParent;
      if ( !v36 )
        sub_1C2D6EC(0, v31);
      skillInfoPrefab = this->fields.skillInfoPrefab;
      transform = UnityEngine_GameObject__get_transform(v36, 0);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0, 0);
      if ( !Object )
        sub_1C2D6EC(0, v40);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    }
    else
    {
      if ( v28 >= v33 )
        sub_1C2D6F4(v30, v31, v32);
      Component_object = (Il2CppObject *)*((_QWORD *)v11 + (int)v28 + 4);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v41 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !v41 )
    {
      if ( !Component_object )
        sub_1C2D6EC(v41, v42);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !gameObject )
        sub_1C2D6EC(0, v44);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !v45 )
        sub_1C2D6EC(0, v46);
      v67.fields.x = 0.0;
      v67.fields.z = 0.0;
      v67.fields.y = v29;
      UnityEngine_Transform__set_localPosition(v45, v67, 0);
      v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v49 = v47;
      if ( !byte_4C20DA6 )
      {
        v47 = (UnityEngine_Transform_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v49 )
        sub_1C2D6EC(v47, v48);
      UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      v52 = v50;
      if ( !byte_4C20DA7 )
      {
        v50 = (UnityEngine_Transform_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
        byte_4C20DA7 = 1;
      }
      if ( !v52 )
        sub_1C2D6EC(v50, v51);
      UnityEngine_Transform__set_localRotation(
        v52,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      if ( !v34 )
        sub_1C2D6EC(v53, v54);
      v29 = v29
          - ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
              (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
              (System_String_o *)v34[1].klass,
              (System_String_o *)v34[1].monitor,
              (int32_t)v34[2].monitor,
              HIDWORD(v34[2].monitor),
              1,
              0);
      LODWORD(v63.fields._list) = v34[2].monitor;
      v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v55, v56, v57);
      v59 = System_String__Format((System_String_o *)StringLiteral_23503/*"skill_{0:D5}"*/, v58, 0);
      ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
        (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
        this->fields.atlasManagerUnit,
        v59,
        0);
      ++v28;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  v60 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  if ( !BattleServantClassBoardSkillEffectListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantClassBoardSkillEffectListComponent_TypeInfo);
    v60 = BattleServantClassBoardSkillEffectListComponent_TypeInfo;
  }
  p_DefaultSkillOffset = &v60->static_fields->DefaultSkillOffset;
  result = 1;
  this->fields.skillOffset = v29 + *p_DefaultSkillOffset;
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
    sub_1C2D6EC(0, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0);
}