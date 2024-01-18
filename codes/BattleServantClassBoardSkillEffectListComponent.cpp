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
  __int64 v8; // x1
  ClassBoardResourceCatalogAssetBundle_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v13; // x21
  System_Action_Action__array *v14; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21
  ChainableActionParallel_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_4185ACC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_Action____TypeInfo, method);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v3);
    sub_B2C35C(&System_Action_Action__TypeInfo, v4);
    sub_B2C35C(&AtlasManagerUnit_TypeInfo, v5);
    sub_B2C35C(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__, v6);
    sub_B2C35C(&ChainableActionParallel_TypeInfo, v7);
    sub_B2C35C(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v8);
    byte_4185ACC = 1;
  }
  v9 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B2C42C(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v9, 0LL);
  v13 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v13, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v13;
  sub_B2C2F8(&this->fields.atlasManagerUnit, v13);
  v14 = (System_Action_Action__array *)sub_B2C374(System_Action_Action____TypeInfo, 1LL);
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( !v14 )
    goto LABEL_10;
  if ( v15 )
  {
    v10 = sub_B2C41C(v15, v14->obj.klass->_1.element_class);
    if ( !v10 )
    {
      v18 = sub_B2C454();
      sub_B2C400(v18, 0LL);
    }
  }
  if ( !v14->max_length )
  {
    v17 = sub_B2C460(v10);
    sub_B2C400(v17, 0LL);
  }
  v14->m_Items[0] = (System_Action_Action__o *)v15;
  sub_B2C2F8(v14->m_Items, v15);
  v16 = (ChainableActionParallel_o *)sub_B2C42C(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_29458636(v16, v14, 0LL);
  if ( !v16 )
LABEL_10:
    sub_B2C434(v10, v11);
  ChainableActionBase__Execute((ChainableActionBase_o *)v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t npcSvtClassId; // w2
  struct ServantEntity_o *v28; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v32; // x1
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v36; // w23
  float v37; // s8
  unsigned int v38; // w8
  Il2CppObject *v39; // x28
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v45; // x1
  _BOOL8 v46; // x0
  __int64 v47; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v49; // x1
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x1
  UnityEngine_Transform_o *v52; // x22
  __int64 v53; // x0
  __int64 v54; // x1
  int v55; // s0
  UnityEngine_Transform_o *v58; // x22
  __int64 v59; // x0
  __int64 v60; // x1
  int v61; // s0
  __int64 v65; // x0
  __int64 v66; // x1
  float v67; // s9
  Il2CppObject *v68; // x1
  System_String_o *v69; // x0
  _BOOL8 v70; // x0
  __int64 v71; // x1
  int v72; // w19
  __int64 v73; // x0
  __int64 v74; // x0
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-C8h] BYREF
  int v76[3]; // [xsp+20h] [xbp-B0h]
  int v77; // [xsp+2Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185ACD & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, svtData);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v13);
    sub_B2C35C(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v19);
    sub_B2C35C(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_22151/*"skill_{0:D5}"*/, v22);
    byte_4185ACD = 1;
  }
  entityList = 0LL;
  memset(&v79, 0, sizeof(v79));
  memset(&v78, 0, sizeof(v78));
  v77 = 0;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_56;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_56;
  v24 = *((_DWORD *)skillListParent + 6);
  v25 = skillListParent;
  if ( v24 >= 1 )
  {
    v26 = 0;
    do
    {
      if ( v26 >= v24 )
      {
        v73 = sub_B2C460(skillListParent);
        sub_B2C400(v73, 0LL);
      }
      skillListParent = (void *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !skillListParent )
        goto LABEL_56;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v24 = *((_DWORD *)v25 + 6);
    }
    while ( (int)++v26 < v24 );
  }
  if ( svtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skillListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    npcSvtClassId = svtData->fields.npcSvtClassId;
    if ( !npcSvtClassId )
    {
      v28 = svtData->fields.svtdata;
      if ( !v28 )
        goto LABEL_56;
      npcSvtClassId = v28->fields.classId;
    }
    if ( !skillListParent )
LABEL_56:
      sub_B2C434(skillListParent, svtData);
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)skillListParent,
           &entityList,
           npcSvtClassId,
           0LL) )
    {
      v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v29,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v75,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v79 = v75;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v79,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v79.fields.current;
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
            sub_B2C434(IsNullOrEmpty, v32);
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
        if ( !v29 )
          sub_B2C434(OpenSkillList, OpenSkillList);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
          OpenSkillList,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      v76[0] = 181;
      v77 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v79,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      v77 = 0;
      if ( !v29 )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v75,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v29,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v36 = 0;
      v37 = 0.0;
      v78 = v75;
      while ( 1 )
      {
        v70 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v78,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v70 )
          break;
        v38 = *((_DWORD *)v25 + 6);
        v39 = v78.fields.current;
        if ( (int)v36 >= (int)v38 )
        {
          v41 = this->fields.skillListParent;
          if ( !v41 )
            sub_B2C434(0LL, v71);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v41, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_B2C434(0LL, v45);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Object,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v36 >= v38 )
          {
            v74 = sub_B2C460(v70);
            sub_B2C400(v74, 0LL);
          }
          Component_srcLineSprite = (UnityEngine_Object_o *)*((_QWORD *)v25 + (int)v36 + 4);
        }
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v46 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
        if ( v46 )
          break;
        if ( !Component_srcLineSprite )
          sub_B2C434(v46, v47);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !gameObject )
          sub_B2C434(0LL, v49);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !v50 )
          sub_B2C434(0LL, v51);
        v81.fields.x = 0.0;
        v81.fields.z = 0.0;
        v81.fields.y = v37;
        UnityEngine_Transform__set_localPosition(v50, v81, 0LL);
        v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL);
        if ( !v52 )
          sub_B2C434(v53, v54);
        UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v55, 0LL);
        v58 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Quaternion_o *)&v61 = UnityEngine_Quaternion__get_identity(0LL);
        if ( !v58 )
          sub_B2C434(v59, v60);
        UnityEngine_Transform__set_localRotation(v58, *(UnityEngine_Quaternion_o *)&v61, 0LL);
        if ( !v39 )
          sub_B2C434(v65, v66);
        v67 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
                (System_String_o *)v39[1].klass,
                (System_String_o *)v39[1].monitor,
                (int32_t)v39[2].monitor,
                HIDWORD(v39[2].monitor),
                1,
                0LL);
        LODWORD(v75.fields.list) = v39[2].monitor;
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
        v69 = System_String__Format((System_String_o *)StringLiteral_22151/*"skill_{0:D5}"*/, v68, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
          this->fields.atlasManagerUnit,
          v69,
          0LL);
        v37 = v37 - v67;
        ++v36;
      }
      v76[0] = 451;
      v72 = ++v77;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v78,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
      if ( v72 && v76[v72 - 1] == 451 )
        v77 = v72 - 1;
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
    sub_B2C434(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}