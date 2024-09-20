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
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x20
  System_Action_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  ChainableActionParallel_o *v14; // x19

  if ( (byte_4A5E157 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&AtlasManagerUnit_TypeInfo);
    sub_1B885B0(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__);
    sub_1B885B0(&ChainableActionParallel_TypeInfo);
    sub_1B885B0(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    byte_4A5E157 = 1;
  }
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1B887FC(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v3, 0LL);
  v7 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.atlasManagerUnit, (int32_t)v7, v8, v9);
  v10 = sub_1B88658(System_Action_Action____TypeInfo, 1LL);
  v11 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    0LL);
  if ( !v10 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1B88814(v4, v5);
  *(_QWORD *)(v10 + 32) = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)v11, v12, v13);
  v14 = (ChainableActionParallel_o *)sub_1B887FC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_46557384(v14, (System_Action_Action__array *)v10, 0LL);
  if ( !v14 )
LABEL_8:
    sub_1B8880C(v4, v5);
  ChainableActionBase__Execute((ChainableActionBase_o *)v14, 0LL);
}


void __fastcall BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  void *skillListParent; // x0
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w22
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v10; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v17; // w25
  float v18; // s8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  unsigned int v21; // w8
  Il2CppObject *v22; // x27
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_Transform_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Transform_o *v37; // x24
  UnityEngine_Transform_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_Transform_o *v40; // x24
  __int64 v41; // x0
  __int64 v42; // x1
  float v43; // s9
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x1
  System_String_o *v48; // x0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E158 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_23351/*"skill_{0:D5}"*/);
    byte_4A5E158 = 1;
  }
  entityList = 0LL;
  memset(&v51, 0, sizeof(v51));
  memset(&v50, 0, sizeof(v50));
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_52;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_52;
  v6 = *((_DWORD *)skillListParent + 6);
  v7 = skillListParent;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1B88814(skillListParent, svtData);
      skillListParent = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !skillListParent )
        break;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        goto LABEL_11;
    }
LABEL_52:
    sub_1B8880C(skillListParent, svtData);
  }
LABEL_11:
  if ( svtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    skillListParent = (void *)BattleServantData__getClassId(svtData, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)Master_object,
           &entityList,
           (int32_t)skillListParent,
           0LL) )
    {
      v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        (System_Collections_Generic_List_object__o *)entityList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v51 = v49;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v51,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v51.fields._current;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                          (System_Collections_ICollection_o *)svtData->fields._classBoardSquareIds_k__BackingField,
                          0LL);
        if ( IsNullOrEmpty )
          classBoardSquareIds_k__BackingField = 0LL;
        else
          classBoardSquareIds_k__BackingField = svtData->fields._classBoardSquareIds_k__BackingField;
        if ( !current )
          sub_1B8880C(IsNullOrEmpty, v13);
        klass = (int32_t)current[1].klass;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                         klass,
                                                                         1,
                                                                         1,
                                                                         classBoardSquareIds_k__BackingField,
                                                                         0LL);
        if ( !v10 )
          sub_1B8880C(OpenSkillList, OpenSkillList);
        System_Collections_Generic_List_object___AddRange(
          v10,
          OpenSkillList,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v51,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      if ( !v10 )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        v10,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v50 = v49;
      v17 = 0;
      v18 = 0.0;
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v50,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v19 )
          break;
        v21 = *((_DWORD *)v7 + 6);
        v22 = v50.fields._current;
        if ( (int)v17 >= (int)v21 )
        {
          v24 = this->fields.skillListParent;
          if ( !v24 )
            sub_1B8880C(0LL, v20);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v24, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_1B8880C(0LL, v28);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               Object,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v17 >= v21 )
            sub_1B88814(v19, v20);
          Component_object = (Il2CppObject *)*((_QWORD *)v7 + (int)v17 + 4);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( v29 )
          break;
        if ( !Component_object )
          sub_1B8880C(v29, v30);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !gameObject )
          sub_1B8880C(0LL, v32);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !v33 )
          sub_1B8880C(0LL, v34);
        v53.fields.x = 0.0;
        v53.fields.z = 0.0;
        v53.fields.y = v18;
        UnityEngine_Transform__set_localPosition(v33, v53, 0LL);
        v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v37 = v35;
        if ( !byte_4A55CE6 )
        {
          v35 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        if ( !v37 )
          sub_1B8880C(v35, v36);
        UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v40 = v38;
        if ( !byte_4A55CE7 )
        {
          v38 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
          byte_4A55CE7 = 1;
        }
        if ( !v40 )
          sub_1B8880C(v38, v39);
        UnityEngine_Transform__set_localRotation(
          v40,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
        if ( !v22 )
          sub_1B8880C(v41, v42);
        v43 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
                (System_String_o *)v22[1].klass,
                (System_String_o *)v22[1].monitor,
                (int32_t)v22[2].monitor,
                HIDWORD(v22[2].monitor),
                1,
                0LL);
        LODWORD(v49.fields._list) = v22[2].monitor;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v44, v45, v46);
        v48 = System_String__Format((System_String_o *)StringLiteral_23351/*"skill_{0:D5}"*/, v47, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
          this->fields.atlasManagerUnit,
          v48,
          0LL);
        v18 = v18 - v43;
        ++v17;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v50,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
    sub_1B8880C(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}