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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ClassBoardResourceCatalogAssetBundle_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_o *IconAtlasPath; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  AtlasManagerUnit_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_object__o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  ChainableActionParallel_o *v43; // x19

  if ( (byte_4B1927B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Action____TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v5, v6);
    sub_1BCA7E0(&AtlasManagerUnit_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__, v9, v10);
    sub_1BCA7E0(&ChainableActionParallel_TypeInfo, v11, v12);
    sub_1BCA7E0(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v13, v14);
    byte_4B1927B = 1;
  }
  v15 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BCAA2C(
                                                    ClassBoardResourceCatalogAssetBundle_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  ClassBoardResourceCatalogAssetBundle___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v15, 0LL);
  v22 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v19, v20, v21);
  AtlasManagerUnit___ctor(v22, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasManagerUnit, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = sub_1BCA888(System_Action_Action____TypeInfo, 1LL);
  v33 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v30, v31, v32);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    0LL);
  if ( !v29 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v29 + 24) )
    sub_1BCAA44(v16, v17);
  *(_QWORD *)(v29 + 32) = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v43 = (ChainableActionParallel_o *)sub_1BCAA2C(ChainableActionParallel_TypeInfo, v40, v41, v42);
  ChainableActionParallel___ctor_47119316(v43, (System_Action_Action__array *)v29, 0LL);
  if ( !v43 )
LABEL_8:
    sub_1BCAA3C(v16, v17);
  ChainableActionBase__Execute((ChainableActionBase_o *)v43, 0LL);
}


void __fastcall BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  void *skillListParent; // x0
  int v42; // w8
  void *v43; // x20
  unsigned int v44; // w22
  Il2CppObject *Master_object; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_object__o *v49; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v52; // x1
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v56; // w25
  float v57; // s8
  _BOOL8 v58; // x0
  __int64 v59; // x1
  unsigned int v60; // w8
  Il2CppObject *v61; // x27
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v67; // x1
  _BOOL8 v68; // x0
  __int64 v69; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v71; // x1
  UnityEngine_Transform_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  UnityEngine_Transform_o *v77; // x24
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  UnityEngine_Transform_o *v81; // x24
  __int64 v82; // x0
  __int64 v83; // x1
  float v84; // s9
  Il2CppObject *v85; // x1
  System_String_o *v86; // x0
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1927C & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, svtData, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v19,
      v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v21, v22);
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v23,
      v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v27,
      v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v29,
      v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v33,
      v34);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v35,
      v36);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_23599/*"skill_{0:D5}"*/, v39, v40);
    byte_4B1927C = 1;
  }
  entityList = 0LL;
  memset(&v89, 0, sizeof(v89));
  memset(&v88, 0, sizeof(v88));
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_52;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_52;
  v42 = *((_DWORD *)skillListParent + 6);
  v43 = skillListParent;
  if ( v42 >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= v42 )
        sub_1BCAA44(skillListParent, svtData);
      skillListParent = (void *)*((_QWORD *)v43 + (int)v44 + 4);
      if ( !skillListParent )
        break;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v42 = *((_DWORD *)v43 + 6);
      if ( (int)++v44 >= v42 )
        goto LABEL_11;
    }
LABEL_52:
    sub_1BCAA3C(skillListParent, svtData);
  }
LABEL_11:
  if ( svtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtData);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    skillListParent = (void *)BattleServantData__GetOriginalClassId(svtData, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)Master_object,
           &entityList,
           (int32_t)skillListParent,
           0LL) )
    {
      v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                           v46,
                                                           v47,
                                                           v48);
      System_Collections_Generic_List_object____ctor(
        v49,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v87,
        (System_Collections_Generic_List_object__o *)entityList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v89 = v87;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v89,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v89.fields._current;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                          (System_Collections_ICollection_o *)svtData->fields._classBoardSquareIds_k__BackingField,
                          0LL);
        if ( IsNullOrEmpty )
          classBoardSquareIds_k__BackingField = 0LL;
        else
          classBoardSquareIds_k__BackingField = svtData->fields._classBoardSquareIds_k__BackingField;
        if ( !current )
          sub_1BCAA3C(IsNullOrEmpty, v52);
        klass = (int32_t)current[1].klass;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v52);
        OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                         klass,
                                                                         1,
                                                                         1,
                                                                         classBoardSquareIds_k__BackingField,
                                                                         0LL);
        if ( !v49 )
          sub_1BCAA3C(OpenSkillList, OpenSkillList);
        System_Collections_Generic_List_object___AddRange(
          v49,
          OpenSkillList,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v89,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      if ( !v49 )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v87,
        v49,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v88 = v87;
      v56 = 0;
      v57 = 0.0;
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v88,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v58 )
          break;
        v60 = *((_DWORD *)v43 + 6);
        v61 = v88.fields._current;
        if ( (int)v56 >= (int)v60 )
        {
          v63 = this->fields.skillListParent;
          if ( !v63 )
            sub_1BCAA3C(0LL, v59);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v63, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_1BCAA3C(0LL, v67);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               Object,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v56 >= v60 )
            sub_1BCAA44(v58, v59);
          Component_object = (Il2CppObject *)*((_QWORD *)v43 + (int)v56 + 4);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
        v68 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( v68 )
          break;
        if ( !Component_object )
          sub_1BCAA3C(v68, v69);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !gameObject )
          sub_1BCAA3C(0LL, v71);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v72 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !v72 )
          sub_1BCAA3C(0LL, v73);
        v91.fields.x = 0.0;
        v91.fields.z = 0.0;
        v91.fields.y = v57;
        UnityEngine_Transform__set_localPosition(v72, v91, 0LL);
        v74 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v77 = (UnityEngine_Transform_o *)v74;
        if ( !byte_4B109C6 )
        {
          v74 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v75, v76);
          byte_4B109C6 = 1;
        }
        if ( !v77 )
          sub_1BCAA3C(v74, v75);
        UnityEngine_Transform__set_localScale(v77, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v78 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v81 = (UnityEngine_Transform_o *)v78;
        if ( !byte_4B109C7 )
        {
          v78 = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v79, v80);
          byte_4B109C7 = 1;
        }
        if ( !v81 )
          sub_1BCAA3C(v78, v79);
        UnityEngine_Transform__set_localRotation(
          v81,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
        if ( !v61 )
          sub_1BCAA3C(v82, v83);
        v84 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
                (System_String_o *)v61[1].klass,
                (System_String_o *)v61[1].monitor,
                (int32_t)v61[2].monitor,
                HIDWORD(v61[2].monitor),
                1,
                0LL);
        LODWORD(v87.fields._list) = v61[2].monitor;
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
        v86 = System_String__Format((System_String_o *)StringLiteral_23599/*"skill_{0:D5}"*/, v85, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
          this->fields.atlasManagerUnit,
          v86,
          0LL);
        v57 = v57 - v84;
        ++v56;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v88,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
    sub_1BCAA3C(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}