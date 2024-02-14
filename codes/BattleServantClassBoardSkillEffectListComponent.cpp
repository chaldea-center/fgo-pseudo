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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ClassBoardResourceCatalogAssetBundle_o *v10; // x20
  __int64 v11; // x0
  System_String_o *IconAtlasPath; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  AtlasManagerUnit_o *v15; // x21
  System_Action_Action__array *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  ChainableActionParallel_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_421278F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_Action____TypeInfo, method);
    sub_B0D8A4(&Method_System_Action_Action___ctor__, v4);
    sub_B0D8A4(&System_Action_Action__TypeInfo, v5);
    sub_B0D8A4(&AtlasManagerUnit_TypeInfo, v6);
    sub_B0D8A4(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__, v7);
    sub_B0D8A4(&ChainableActionParallel_TypeInfo, v8);
    sub_B0D8A4(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v9);
    byte_421278F = 1;
  }
  v10 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B0D974(ClassBoardResourceCatalogAssetBundle_TypeInfo, method, v2);
  ClassBoardResourceCatalogAssetBundle___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v10, 0LL);
  v15 = (AtlasManagerUnit_o *)sub_B0D974(AtlasManagerUnit_TypeInfo, v13, v14);
  AtlasManagerUnit___ctor(v15, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v15;
  sub_B0D840(&this->fields.atlasManagerUnit, v15);
  v16 = (System_Action_Action__array *)sub_B0D8BC(System_Action_Action____TypeInfo, 1LL);
  v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v17,
                                                                               v18);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( !v16 )
    goto LABEL_10;
  if ( v19 )
  {
    v11 = sub_B0D964(v19, v16->obj.klass->_1.element_class);
    if ( !v11 )
    {
      v24 = sub_B0D99C();
      sub_B0D948(v24, 0LL);
    }
  }
  if ( !v16->max_length )
  {
    v23 = sub_B0D9A8(v11);
    sub_B0D948(v23, 0LL);
  }
  v16->m_Items[0] = (System_Action_Action__o *)v19;
  sub_B0D840(v16->m_Items, v19);
  v22 = (ChainableActionParallel_o *)sub_B0D974(ChainableActionParallel_TypeInfo, v20, v21);
  ChainableActionParallel___ctor_26942624(v22, v16, 0LL);
  if ( !v22 )
LABEL_10:
    sub_B0D97C(v11);
  ChainableActionBase__Execute((ChainableActionBase_o *)v22, 0LL);
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
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v37; // w23
  float v38; // s8
  unsigned int v39; // w8
  Il2CppObject *v40; // x28
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  _BOOL8 v46; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v48; // x0
  UnityEngine_Transform_o *v49; // x22
  __int64 v50; // x0
  int v51; // s0
  UnityEngine_Transform_o *v54; // x22
  __int64 v55; // x0
  int v56; // s0
  __int64 v60; // x0
  float v61; // s9
  Il2CppObject *v62; // x1
  System_String_o *v63; // x0
  _BOOL8 v64; // x0
  int v65; // w19
  __int64 v66; // x0
  __int64 v67; // x0
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-C8h] BYREF
  int v69[3]; // [xsp+20h] [xbp-B0h]
  int v70; // [xsp+2Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212790 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, svtData);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v13);
    sub_B0D8A4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v16);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v19);
    sub_B0D8A4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_22226/*"skill_{0:D5}"*/, v22);
    byte_4212790 = 1;
  }
  entityList = 0LL;
  memset(&v72, 0, sizeof(v72));
  memset(&v71, 0, sizeof(v71));
  v70 = 0;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_56;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
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
        v66 = sub_B0D9A8(skillListParent);
        sub_B0D948(v66, 0LL);
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
    skillListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      sub_B0D97C(skillListParent);
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)skillListParent,
           &entityList,
           npcSvtClassId,
           0LL) )
    {
      v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo, v29, v30);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v31,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v68,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v72 = v68;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v72,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v72.fields.current;
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
            sub_B0D97C(IsNullOrEmpty);
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
        if ( !v31 )
          sub_B0D97C(OpenSkillList);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v31,
          OpenSkillList,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      v69[0] = 181;
      v70 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v72,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      v70 = 0;
      if ( !v31 )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v68,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v37 = 0;
      v38 = 0.0;
      v71 = v68;
      while ( 1 )
      {
        v64 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v71,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v64 )
          break;
        v39 = *((_DWORD *)v25 + 6);
        v40 = v71.fields.current;
        if ( (int)v37 >= (int)v39 )
        {
          v42 = this->fields.skillListParent;
          if ( !v42 )
            sub_B0D97C(0LL);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v42, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_B0D97C(0LL);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Object,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v37 >= v39 )
          {
            v67 = sub_B0D9A8(v64);
            sub_B0D948(v67, 0LL);
          }
          Component_srcLineSprite = (UnityEngine_Object_o *)*((_QWORD *)v25 + (int)v37 + 4);
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
          sub_B0D97C(v46);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !gameObject )
          sub_B0D97C(0LL);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !v48 )
          sub_B0D97C(0LL);
        v74.fields.x = 0.0;
        v74.fields.z = 0.0;
        v74.fields.y = v38;
        UnityEngine_Transform__set_localPosition(v48, v74, 0LL);
        v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_one(0LL);
        if ( !v49 )
          sub_B0D97C(v50);
        UnityEngine_Transform__set_localScale(v49, *(UnityEngine_Vector3_o *)&v51, 0LL);
        v54 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Quaternion_o *)&v56 = UnityEngine_Quaternion__get_identity(0LL);
        if ( !v54 )
          sub_B0D97C(v55);
        UnityEngine_Transform__set_localRotation(v54, *(UnityEngine_Quaternion_o *)&v56, 0LL);
        if ( !v40 )
          sub_B0D97C(v60);
        v61 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
                (System_String_o *)v40[1].klass,
                (System_String_o *)v40[1].monitor,
                (int32_t)v40[2].monitor,
                HIDWORD(v40[2].monitor),
                1,
                0LL);
        LODWORD(v68.fields.list) = v40[2].monitor;
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
        v63 = System_String__Format((System_String_o *)StringLiteral_22226/*"skill_{0:D5}"*/, v62, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
          this->fields.atlasManagerUnit,
          v63,
          0LL);
        v38 = v38 - v61;
        ++v37;
      }
      v69[0] = 451;
      v65 = ++v70;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v71,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
      if ( v65 && v69[v65 - 1] == 451 )
        v70 = v65 - 1;
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
    sub_B0D97C(0LL);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}