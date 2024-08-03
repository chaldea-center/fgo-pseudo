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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardResourceCatalogAssetBundle_o *v9; // x20
  __int64 v10; // x0
  System_String_o *IconAtlasPath; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  AtlasManagerUnit_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_object__o *v20; // x21
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  ChainableActionParallel_o *v26; // x19

  if ( (byte_49FF390 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_Action____TypeInfo, method);
    sub_1B640C8(&System_Action_Action__TypeInfo, v4);
    sub_1B640C8(&AtlasManagerUnit_TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__, v6);
    sub_1B640C8(&ChainableActionParallel_TypeInfo, v7);
    sub_1B640C8(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v8);
    byte_49FF390 = 1;
  }
  v9 = (ClassBoardResourceCatalogAssetBundle_o *)sub_1B64314(ClassBoardResourceCatalogAssetBundle_TypeInfo, method, v2);
  ClassBoardResourceCatalogAssetBundle___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v9, 0LL);
  v14 = (AtlasManagerUnit_o *)sub_1B64314(AtlasManagerUnit_TypeInfo, v12, v13);
  AtlasManagerUnit___ctor(v14, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlasManagerUnit, (int32_t)v14, v15, v16);
  v17 = sub_1B64170(System_Action_Action____TypeInfo, 1LL);
  v20 = (System_Action_object__o *)sub_1B64314(System_Action_Action__TypeInfo, v18, v19);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    0LL);
  if ( !v17 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v17 + 24) )
    sub_1B6432C(v10, v21);
  *(_QWORD *)(v17 + 32) = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v20, v22, v23);
  v26 = (ChainableActionParallel_o *)sub_1B64314(ChainableActionParallel_TypeInfo, v24, v25);
  ChainableActionParallel___ctor_46279192(v26, (System_Action_Action__array *)v17, 0LL);
  if ( !v26 )
LABEL_8:
    sub_1B64324(v10);
  ChainableActionBase__Execute((ChainableActionBase_o *)v26, 0LL);
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
  __int64 v24; // x1
  int v25; // w8
  void *v26; // x20
  unsigned int v27; // w22
  Il2CppObject *Master_object; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v37; // w25
  float v38; // s8
  _BOOL8 v39; // x0
  __int64 v40; // x1
  unsigned int v41; // w8
  Il2CppObject *v42; // x27
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  _BOOL8 v48; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  UnityEngine_Transform_o *v53; // x24
  __int64 v54; // x0
  __int64 v55; // x1
  UnityEngine_Transform_o *v56; // x24
  __int64 v57; // x0
  float v58; // s9
  Il2CppObject *v59; // x1
  System_String_o *v60; // x0
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF391 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, svtData);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v13);
    sub_1B640C8(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v14);
    sub_1B640C8(&int_TypeInfo, v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v18);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v19);
    sub_1B640C8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_23253/*"skill_{0:D5}"*/, v22);
    byte_49FF391 = 1;
  }
  entityList = 0LL;
  memset(&v63, 0, sizeof(v63));
  memset(&v62, 0, sizeof(v62));
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_52;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_52;
  v25 = *((_DWORD *)skillListParent + 6);
  v26 = skillListParent;
  if ( v25 >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= v25 )
        sub_1B6432C(skillListParent, v24);
      skillListParent = (void *)*((_QWORD *)v26 + (int)v27 + 4);
      if ( !skillListParent )
        break;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v25 = *((_DWORD *)v26 + 6);
      if ( (int)++v27 >= v25 )
        goto LABEL_11;
    }
LABEL_52:
    sub_1B64324(skillListParent);
  }
LABEL_11:
  if ( svtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    skillListParent = (void *)BattleServantData__getClassId(svtData, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)Master_object,
           &entityList,
           (int32_t)skillListParent,
           0LL) )
    {
      v31 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                           v29,
                                                           v30);
      System_Collections_Generic_List_object____ctor(
        v31,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v61,
        (System_Collections_Generic_List_object__o *)entityList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v63 = v61;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v63,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v63.fields._current;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                          (System_Collections_ICollection_o *)svtData->fields._classBoardSquareIds_k__BackingField,
                          0LL);
        if ( IsNullOrEmpty )
          classBoardSquareIds_k__BackingField = 0LL;
        else
          classBoardSquareIds_k__BackingField = svtData->fields._classBoardSquareIds_k__BackingField;
        if ( !current )
          sub_1B64324(IsNullOrEmpty);
        klass = (int32_t)current[1].klass;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                         klass,
                                                                         1,
                                                                         1,
                                                                         classBoardSquareIds_k__BackingField,
                                                                         0LL);
        if ( !v31 )
          sub_1B64324(OpenSkillList);
        System_Collections_Generic_List_object___AddRange(
          v31,
          OpenSkillList,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v63,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      if ( !v31 )
        goto LABEL_52;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v61,
        v31,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v62 = v61;
      v37 = 0;
      v38 = 0.0;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v62,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v39 )
          break;
        v41 = *((_DWORD *)v26 + 6);
        v42 = v62.fields._current;
        if ( (int)v37 >= (int)v41 )
        {
          v44 = this->fields.skillListParent;
          if ( !v44 )
            sub_1B64324(0LL);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v44, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_1B64324(0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               Object,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v37 >= v41 )
            sub_1B6432C(v39, v40);
          Component_object = (Il2CppObject *)*((_QWORD *)v26 + (int)v37 + 4);
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v48 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( v48 )
          break;
        if ( !Component_object )
          sub_1B64324(v48);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !gameObject )
          sub_1B64324(0LL);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !v50 )
          sub_1B64324(0LL);
        v65.fields.x = 0.0;
        v65.fields.z = 0.0;
        v65.fields.y = v38;
        UnityEngine_Transform__set_localPosition(v50, v65, 0LL);
        v51 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v53 = (UnityEngine_Transform_o *)v51;
        if ( !byte_49F7116 )
        {
          v51 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v52);
          byte_49F7116 = 1;
        }
        if ( !v53 )
          sub_1B64324(v51);
        UnityEngine_Transform__set_localScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v54 = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        v56 = (UnityEngine_Transform_o *)v54;
        if ( !byte_49F7117 )
        {
          v54 = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v55);
          byte_49F7117 = 1;
        }
        if ( !v56 )
          sub_1B64324(v54);
        UnityEngine_Transform__set_localRotation(
          v56,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
        if ( !v42 )
          sub_1B64324(v57);
        v58 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
                (System_String_o *)v42[1].klass,
                (System_String_o *)v42[1].monitor,
                (int32_t)v42[2].monitor,
                HIDWORD(v42[2].monitor),
                1,
                0LL);
        LODWORD(v61.fields._list) = v42[2].monitor;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
        v60 = System_String__Format((System_String_o *)StringLiteral_23253/*"skill_{0:D5}"*/, v59, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
          this->fields.atlasManagerUnit,
          v60,
          0LL);
        v38 = v38 - v58;
        ++v37;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v62,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
    sub_1B64324(0LL);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}