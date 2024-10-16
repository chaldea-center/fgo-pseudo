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
  int32_t v14; // w3
  __int64 v15; // x20
  System_Action_object__o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  ChainableActionParallel_o *v19; // x19

  if ( (byte_4AB8D96 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_Action____TypeInfo, method);
    sub_1BAB41C(&System_Action_Action__TypeInfo, v3);
    sub_1BAB41C(&AtlasManagerUnit_TypeInfo, v4);
    sub_1BAB41C(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__, v5);
    sub_1BAB41C(&ChainableActionParallel_TypeInfo, v6);
    sub_1BAB41C(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v7);
    byte_4AB8D96 = 1;
  }
  v8 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BAB668(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v8, 0LL);
  v12 = (AtlasManagerUnit_o *)sub_1BAB668(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v12, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v12;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.atlasManagerUnit, (int32_t)v12, v13, v14);
  v15 = sub_1BAB4C4(System_Action_Action____TypeInfo, 1LL);
  v16 = (System_Action_object__o *)sub_1BAB668(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    0LL);
  if ( !v15 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1BAB680(v9, v10);
  *(_QWORD *)(v15 + 32) = v16;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v16, v17, v18);
  v19 = (ChainableActionParallel_o *)sub_1BAB668(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_46803740(v19, (System_Action_Action__array *)v15, 0LL);
  if ( !v19 )
LABEL_8:
    sub_1BAB678(v9, v10);
  ChainableActionBase__Execute((ChainableActionBase_o *)v19, 0LL);
}


void __fastcall BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  void *skillListParent; // x0
  int v24; // w8
  void *v25; // x20
  unsigned int v26; // w22
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v28; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v31; // x1
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v35; // w25
  float v36; // s8
  _BOOL8 v37; // x0
  __int64 v38; // x1
  unsigned int v39; // w8
  Il2CppObject *v40; // x27
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  UnityEngine_Transform_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x1
  UnityEngine_Transform_o *v55; // x24
  __int64 v56; // x0
  __int64 v57; // x1
  UnityEngine_Transform_o *v58; // x24
  __int64 v59; // x0
  __int64 v60; // x1
  float v61; // s9
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x1
  System_String_o *v66; // x0
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB8D97 & 1) == 0 )
  {
    sub_1BAB41C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, svtData);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v7);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v9);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v11);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v12);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v13);
    sub_1BAB41C(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v14);
    sub_1BAB41C(&int_TypeInfo, v15);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v16);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v18);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v19);
    sub_1BAB41C(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v20);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v21);
    sub_1BAB41C(&StringLiteral_23390/*"skill_{0:D5}"*/, v22);
    byte_4AB8D97 = 1;
  }
  entityList = 0LL;
  memset(&v69, 0, sizeof(v69));
  memset(&v68, 0, sizeof(v68));
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_52;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__49366420(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_2F14594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_52;
  v24 = *((_DWORD *)skillListParent + 6);
  v25 = skillListParent;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
        sub_1BAB680(skillListParent, svtData);
      skillListParent = (void *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !skillListParent )
        break;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_11;
    }
LABEL_52:
    sub_1BAB678(skillListParent, svtData);
  }
LABEL_11:
  if ( svtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    skillListParent = (void *)BattleServantData__GetOriginalClassId(svtData, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)Master_object,
           &entityList,
           (int32_t)skillListParent,
           0LL) )
    {
      v28 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v28,
        (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v67,
        (System_Collections_Generic_List_object__o *)entityList,
        (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v69 = v67;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v69,
                (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v69.fields._current;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                          (System_Collections_ICollection_o *)svtData->fields._classBoardSquareIds_k__BackingField,
                          0LL);
        if ( IsNullOrEmpty )
          classBoardSquareIds_k__BackingField = 0LL;
        else
          classBoardSquareIds_k__BackingField = svtData->fields._classBoardSquareIds_k__BackingField;
        if ( !current )
          sub_1BAB678(IsNullOrEmpty, v31);
        klass = (int32_t)current[1].klass;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                         klass,
                                                                         1,
                                                                         1,
                                                                         classBoardSquareIds_k__BackingField,
                                                                         0LL);
        if ( !v28 )
          sub_1BAB678(OpenSkillList, OpenSkillList);
        System_Collections_Generic_List_object___AddRange(
          v28,
          OpenSkillList,
          (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v69,
        (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      if ( !v28 )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v67,
        v28,
        (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v68 = v67;
      v35 = 0;
      v36 = 0.0;
      while ( 1 )
      {
        v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v68,
                (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v37 )
          break;
        v39 = *((_DWORD *)v25 + 6);
        v40 = v68.fields._current;
        if ( (int)v35 >= (int)v39 )
        {
          v42 = this->fields.skillListParent;
          if ( !v42 )
            sub_1BAB678(0LL, v38);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v42, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_1BAB678(0LL, v46);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               Object,
                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v35 >= v39 )
            sub_1BAB680(v37, v38);
          Component_object = (Il2CppObject *)*((_QWORD *)v25 + (int)v35 + 4);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v47 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( v47 )
          break;
        if ( !Component_object )
          sub_1BAB678(v47, v48);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !gameObject )
          sub_1BAB678(0LL, v50);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !v51 )
          sub_1BAB678(0LL, v52);
        v71.fields.x = 0.0;
        v71.fields.z = 0.0;
        v71.fields.y = v36;
        UnityEngine_Transform__set_localPosition(v51, v71, 0LL);
        v53 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v55 = (UnityEngine_Transform_o *)v53;
        if ( !byte_4AB0696 )
        {
          v53 = sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v54);
          byte_4AB0696 = 1;
        }
        if ( !v55 )
          sub_1BAB678(v53, v54);
        UnityEngine_Transform__set_localScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v56 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v58 = (UnityEngine_Transform_o *)v56;
        if ( !byte_4AB0697 )
        {
          v56 = sub_1BAB41C(&UnityEngine_Quaternion_TypeInfo, v57);
          byte_4AB0697 = 1;
        }
        if ( !v58 )
          sub_1BAB678(v56, v57);
        UnityEngine_Transform__set_localRotation(
          v58,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
        if ( !v40 )
          sub_1BAB678(v59, v60);
        v61 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
                (System_String_o *)v40[1].klass,
                (System_String_o *)v40[1].monitor,
                (int32_t)v40[2].monitor,
                HIDWORD(v40[2].monitor),
                1,
                0LL);
        LODWORD(v67.fields._list) = v40[2].monitor;
        v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v62, v63, v64);
        v66 = System_String__Format((System_String_o *)StringLiteral_23390/*"skill_{0:D5}"*/, v65, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
          this->fields.atlasManagerUnit,
          v66,
          0LL);
        v36 = v36 - v61;
        ++v35;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v68,
        (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    }
  }
}


void __fastcall BattleServantClassBoardSkillEffectListComponent___Init_b__1_0(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *atlasManagerUnit; // x0

  atlasManagerUnit = this->fields.atlasManagerUnit;
  if ( !atlasManagerUnit )
    sub_1BAB678(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}