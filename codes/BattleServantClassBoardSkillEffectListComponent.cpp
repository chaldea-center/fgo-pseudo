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
  ClassBoardResourceCatalogAssetBundle_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v7; // x21
  System_Action_Action__array *v8; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  ChainableActionParallel_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_434F5EF & 1) == 0 )
  {
    sub_B70694(&System_Action_Action____TypeInfo);
    sub_B70694(&Method_System_Action_Action___ctor__);
    sub_B70694(&System_Action_Action__TypeInfo);
    sub_B70694(&AtlasManagerUnit_TypeInfo);
    sub_B70694(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__);
    sub_B70694(&ChainableActionParallel_TypeInfo);
    sub_B70694(&ClassBoardResourceCatalogAssetBundle_TypeInfo);
    byte_434F5EF = 1;
  }
  v3 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B70764(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_10;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v3, 0LL);
  v7 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v7;
  sub_B70630(&this->fields.atlasManagerUnit);
  v8 = (System_Action_Action__array *)sub_B706AC(System_Action_Action____TypeInfo, 1LL);
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( !v8 )
    goto LABEL_10;
  if ( v9 )
  {
    v4 = sub_B70754(v9, v8->obj.klass->_1.element_class);
    if ( !v4 )
    {
      v12 = sub_B7078C();
      sub_B70738(v12, 0LL);
    }
  }
  if ( !v8->max_length )
  {
    v11 = sub_B70798(v4);
    sub_B70738(v11, 0LL);
  }
  v8->m_Items[0] = (System_Action_Action__o *)v9;
  sub_B70630(v8->m_Items);
  v10 = (ChainableActionParallel_o *)sub_B70764(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_30691392(v10, v8, 0LL);
  if ( !v10 )
LABEL_10:
    sub_B7076C(v4, v5);
  ChainableActionBase__Execute((ChainableActionBase_o *)v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  void *skillListParent; // x0
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w22
  int32_t npcSvtClassId; // w2
  struct ServantEntity_o *v10; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v18; // w23
  float v19; // s8
  unsigned int v20; // w8
  Il2CppObject *v21; // x28
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  UnityEngine_Transform_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_Transform_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int v37; // s0
  UnityEngine_Transform_o *v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  int v43; // s0
  __int64 v47; // x0
  __int64 v48; // x1
  float v49; // s9
  __int64 v50; // x2
  Il2CppObject *v51; // x1
  System_String_o *v52; // x0
  _BOOL8 v53; // x0
  __int64 v54; // x1
  int v55; // w19
  __int64 v56; // x0
  __int64 v57; // x0
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-C8h] BYREF
  int v59[3]; // [xsp+20h] [xbp-B0h]
  int v60; // [xsp+2Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434F5F0 & 1) == 0 )
  {
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_B70694(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22523/*"skill_{0:D5}"*/);
    byte_434F5F0 = 1;
  }
  entityList = 0LL;
  memset(&v62, 0, sizeof(v62));
  memset(&v61, 0, sizeof(v61));
  v60 = 0;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_56;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_56;
  v6 = *((_DWORD *)skillListParent + 6);
  v7 = skillListParent;
  if ( v6 >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= v6 )
      {
        v56 = sub_B70798(skillListParent);
        sub_B70738(v56, 0LL);
      }
      skillListParent = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !skillListParent )
        goto LABEL_56;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v6 = *((_DWORD *)v7 + 6);
    }
    while ( (int)++v8 < v6 );
  }
  if ( svtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skillListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    npcSvtClassId = svtData->fields.npcSvtClassId;
    if ( !npcSvtClassId )
    {
      v10 = svtData->fields.svtdata;
      if ( !v10 )
        goto LABEL_56;
      npcSvtClassId = v10->fields.classId;
    }
    if ( !skillListParent )
LABEL_56:
      sub_B7076C(skillListParent, svtData);
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)skillListParent,
           &entityList,
           npcSvtClassId,
           0LL) )
    {
      v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v11,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v58,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v62 = v58;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v62,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v62.fields.current;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                          (System_Collections_ICollection_o *)svtData->fields._classBoardSquareIds_k__BackingField,
                          0LL);
        if ( IsNullOrEmpty )
        {
          classBoardSquareIds_k__BackingField = 0LL;
          if ( !current )
            goto LABEL_58;
        }
        else
        {
          classBoardSquareIds_k__BackingField = svtData->fields._classBoardSquareIds_k__BackingField;
          if ( !current )
LABEL_58:
            sub_B7076C(IsNullOrEmpty, v14);
        }
        klass = (int32_t)current[1].klass;
        if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        }
        OpenSkillList = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                                         klass,
                                                                         1,
                                                                         1,
                                                                         classBoardSquareIds_k__BackingField,
                                                                         0LL);
        if ( !v11 )
          sub_B7076C(OpenSkillList, OpenSkillList);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
          OpenSkillList,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      v59[0] = 181;
      v60 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v62,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      v60 = 0;
      if ( !v11 )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v58,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v11,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v18 = 0;
      v19 = 0.0;
      v61 = v58;
      while ( 1 )
      {
        v53 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v61,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v53 )
          break;
        v20 = *((_DWORD *)v7 + 6);
        v21 = v61.fields.current;
        if ( (int)v18 >= (int)v20 )
        {
          v23 = this->fields.skillListParent;
          if ( !v23 )
            sub_B7076C(0LL, v54);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v23, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_B7076C(0LL, v27);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Object,
                                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v18 >= v20 )
          {
            v57 = sub_B70798(v53);
            sub_B70738(v57, 0LL);
          }
          Component_srcLineSprite = (UnityEngine_Object_o *)*((_QWORD *)v7 + (int)v18 + 4);
        }
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v28 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
        if ( v28 )
          break;
        if ( !Component_srcLineSprite )
          sub_B7076C(v28, v29);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !gameObject )
          sub_B7076C(0LL, v31);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !v32 )
          sub_B7076C(0LL, v33);
        v64.fields.x = 0.0;
        v64.fields.z = 0.0;
        v64.fields.y = v19;
        UnityEngine_Transform__set_localPosition(v32, v64, 0LL);
        v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
        if ( !v34 )
          sub_B7076C(v35, v36);
        UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v37, 0LL);
        v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Quaternion_o *)&v43 = UnityEngine_Quaternion__get_identity(0LL);
        if ( !v40 )
          sub_B7076C(v41, v42);
        UnityEngine_Transform__set_localRotation(v40, *(UnityEngine_Quaternion_o *)&v43, 0LL);
        if ( !v21 )
          sub_B7076C(v47, v48);
        v49 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
                (System_String_o *)v21[1].klass,
                (System_String_o *)v21[1].monitor,
                (int32_t)v21[2].monitor,
                HIDWORD(v21[2].monitor),
                1,
                0LL);
        LODWORD(v58.fields.list) = v21[2].monitor;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v50);
        v52 = System_String__Format((System_String_o *)StringLiteral_22523/*"skill_{0:D5}"*/, v51, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
          this->fields.atlasManagerUnit,
          v52,
          0LL);
        v19 = v19 - v49;
        ++v18;
      }
      v59[0] = 451;
      v55 = ++v60;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v61,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
      if ( v55 && v59[v55 - 1] == 451 )
        v60 = v55 - 1;
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
    sub_B7076C(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}