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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ClassBoardResourceCatalogAssetBundle_o *v12; // x20
  System_String_o *IconAtlasPath; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  AtlasManagerUnit_o *v18; // x21
  __int64 v19; // x2
  System_Action_Action__array *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  ChainableActionParallel_o *v33; // x19

  if ( (byte_40F8A07 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_Action____TypeInfo, method);
    sub_B16FFC(&Method_System_Action_Action___ctor__, v6);
    sub_B16FFC(&System_Action_Action__TypeInfo, v7);
    sub_B16FFC(&AtlasManagerUnit_TypeInfo, v8);
    sub_B16FFC(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__, v9);
    sub_B16FFC(&ChainableActionParallel_TypeInfo, v10);
    sub_B16FFC(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v11);
    byte_40F8A07 = 1;
  }
  v12 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B170CC(
                                                    ClassBoardResourceCatalogAssetBundle_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  ClassBoardResourceCatalogAssetBundle___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v12, 0LL);
  v18 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v14, v15, v16, v17);
  AtlasManagerUnit___ctor(v18, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v18;
  sub_B16F98(&this->fields.atlasManagerUnit, v18);
  v20 = (System_Action_Action__array *)sub_B17014(System_Action_Action____TypeInfo, 1LL, v19);
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v21,
                                                                               v22,
                                                                               v23,
                                                                               v24);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( !v20 )
    goto LABEL_10;
  if ( v25 )
  {
    v26 = sub_B170BC(v25, v20->obj.klass->_1.element_class);
    if ( !v26 )
    {
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( !v20->max_length )
  {
    sub_B17100(v26, v27, v28);
    sub_B170A0();
  }
  v20->m_Items[0] = (System_Action_Action__o *)v25;
  sub_B16F98(v20->m_Items, v25);
  v33 = (ChainableActionParallel_o *)sub_B170CC(ChainableActionParallel_TypeInfo, v29, v30, v31, v32);
  ChainableActionParallel___ctor_30586412(v33, v20, 0LL);
  if ( !v33 )
LABEL_10:
    sub_B170D4();
  ChainableActionBase__Execute((ChainableActionBase_o *)v33, 0LL);
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
  UnityEngine_GameObject_o *skillListParent; // x0
  changeVColor_array *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int max_length; // w8
  changeVColor_array *v28; // x20
  unsigned int v29; // w22
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ClassBoardClassMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t npcSvtClassId; // w2
  struct ServantEntity_o *v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x22
  Il2CppObject *current; // x24
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x1
  il2cpp_array_size_t v44; // w23
  float v45; // s8
  il2cpp_array_size_t v46; // w8
  Il2CppObject *v47; // x28
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Transform_o *v54; // x0
  UnityEngine_Transform_o *v55; // x22
  int v56; // s0
  UnityEngine_Transform_o *v59; // x22
  int v60; // s0
  float v64; // s9
  Il2CppObject *v65; // x1
  System_String_o *v66; // x0
  _BOOL8 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  int v70; // w19
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+8h] [xbp-C8h] BYREF
  int v72[3]; // [xsp+20h] [xbp-B0h]
  int v73; // [xsp+2Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8A08 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, svtData);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v13);
    sub_B16FFC(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v19);
    sub_B16FFC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_22059/*"skill_{0:D5}"*/, v22);
    byte_40F8A08 = 1;
  }
  entityList = 0LL;
  memset(&v75, 0, sizeof(v75));
  memset(&v74, 0, sizeof(v74));
  v73 = 0;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_56;
  v24 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
          skillListParent,
          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !v24 )
    goto LABEL_56;
  max_length = v24->max_length;
  v28 = v24;
  if ( max_length >= 1 )
  {
    v29 = 0;
    do
    {
      if ( v29 >= max_length )
      {
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      v30 = (UnityEngine_Component_o *)v28->m_Items[v29];
      if ( !v30 )
        goto LABEL_56;
      gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( !gameObject )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      max_length = v28->max_length;
    }
    while ( (int)++v29 < max_length );
  }
  if ( svtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    npcSvtClassId = svtData->fields.npcSvtClassId;
    if ( !npcSvtClassId )
    {
      v34 = svtData->fields.svtdata;
      if ( !v34 )
        goto LABEL_56;
      npcSvtClassId = v34->fields.classId;
    }
    if ( !Master_WarQuestSelectionMaster )
LABEL_56:
      sub_B170D4();
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           Master_WarQuestSelectionMaster,
           &entityList,
           npcSvtClassId,
           0LL) )
    {
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo, v35, v36, v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v39,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      if ( !entityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v71,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v75 = v71;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v75,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v75.fields.current;
        if ( BasicHelper__IsNullOrEmpty(
               (System_Collections_ICollection_o *)svtData->fields._classBoardSquareIds_k__BackingField,
               0LL) )
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
            sub_B170D4();
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
        if ( !v39 )
          sub_B170D4();
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
          OpenSkillList,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      v72[0] = 181;
      v73 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v75,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      v73 = 0;
      if ( !v39 )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v71,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v39,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v44 = 0;
      v45 = 0.0;
      v74 = v71;
      while ( 1 )
      {
        v67 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v74,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v67 )
          break;
        v46 = v28->max_length;
        v47 = v74.fields.current;
        if ( (int)v44 >= (int)v46 )
        {
          v49 = this->fields.skillListParent;
          if ( !v49 )
            sub_B170D4();
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v49, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_B170D4();
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Object,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v44 >= v46 )
          {
            sub_B17100(v67, v68, v69);
            sub_B170A0();
          }
          Component_srcLineSprite = (UnityEngine_Object_o *)v28->m_Items[v44];
        }
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
          break;
        if ( !Component_srcLineSprite )
          sub_B170D4();
        v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !v53 )
          sub_B170D4();
        UnityEngine_GameObject__SetActive(v53, 1, 0LL);
        v54 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !v54 )
          sub_B170D4();
        v77.fields.x = 0.0;
        v77.fields.z = 0.0;
        v77.fields.y = v45;
        UnityEngine_Transform__set_localPosition(v54, v77, 0LL);
        v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_one(0LL);
        if ( !v55 )
          sub_B170D4();
        UnityEngine_Transform__set_localScale(v55, *(UnityEngine_Vector3_o *)&v56, 0LL);
        v59 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Quaternion_o *)&v60 = UnityEngine_Quaternion__get_identity(0LL);
        if ( !v59 )
          sub_B170D4();
        UnityEngine_Transform__set_localRotation(v59, *(UnityEngine_Quaternion_o *)&v60, 0LL);
        if ( !v47 )
          sub_B170D4();
        v64 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
                (System_String_o *)v47[1].klass,
                (System_String_o *)v47[1].monitor,
                (int32_t)v47[2].monitor,
                HIDWORD(v47[2].monitor),
                1,
                0LL);
        LODWORD(v71.fields.list) = v47[2].monitor;
        v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
        v66 = System_String__Format((System_String_o *)StringLiteral_22059/*"skill_{0:D5}"*/, v65, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
          this->fields.atlasManagerUnit,
          v66,
          0LL);
        v45 = v45 - v64;
        ++v44;
      }
      v72[0] = 451;
      v70 = ++v73;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v74,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
      if ( v70 && v72[v70 - 1] == 451 )
        v73 = v70 - 1;
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
    sub_B170D4();
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}