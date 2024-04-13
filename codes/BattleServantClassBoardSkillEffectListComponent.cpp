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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ClassBoardResourceCatalogAssetBundle_o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *IconAtlasPath; // x20
  AtlasManagerUnit_o *v27; // x21
  System_Action_Action__array *v28; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x21
  ChainableActionParallel_o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_42E666F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_Action____TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&AtlasManagerUnit_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__, v14, v15, v16);
    sub_B5D5C4(&ChainableActionParallel_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ClassBoardResourceCatalogAssetBundle_TypeInfo, v20, v21, v22);
    byte_42E666F = 1;
  }
  v23 = (ClassBoardResourceCatalogAssetBundle_o *)sub_B5D694(ClassBoardResourceCatalogAssetBundle_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_10;
  IconAtlasPath = ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(v23, 0LL);
  v27 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v27, IconAtlasPath, 0LL, 0LL);
  this->fields.atlasManagerUnit = v27;
  sub_B5D560(&this->fields.atlasManagerUnit);
  v28 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 1LL);
  v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattleServantClassBoardSkillEffectListComponent__Init_b__1_0__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( !v28 )
    goto LABEL_10;
  if ( v29 )
  {
    v24 = sub_B5D684(v29, v28->obj.klass->_1.element_class);
    if ( !v24 )
    {
      v32 = sub_B5D6BC();
      sub_B5D668(v32, 0LL);
    }
  }
  if ( !v28->max_length )
  {
    v31 = sub_B5D6C8(v24);
    sub_B5D668(v31, 0LL);
  }
  v28->m_Items[0] = (System_Action_Action__o *)v29;
  sub_B5D560(v28->m_Items);
  v30 = (ChainableActionParallel_o *)sub_B5D694(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_30552664(v30, v28, 0LL);
  if ( !v30 )
LABEL_10:
    sub_B5D69C(v24, v25);
  ChainableActionBase__Execute((ChainableActionBase_o *)v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
        BattleServantClassBoardSkillEffectListComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  void *skillListParent; // x0
  int v61; // w8
  void *v62; // x20
  unsigned int v63; // w22
  int32_t npcSvtClassId; // w2
  struct ServantEntity_o *v65; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x22
  Il2CppObject *current; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v69; // x1
  System_Int32_array *classBoardSquareIds_k__BackingField; // x23
  int32_t klass; // w24
  System_Collections_Generic_IEnumerable_T__o *OpenSkillList; // x0
  unsigned int v73; // w23
  float v74; // s8
  unsigned int v75; // w8
  Il2CppObject *v76; // x28
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_GameObject_o *skillInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v82; // x1
  _BOOL8 v83; // x0
  __int64 v84; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v86; // x1
  UnityEngine_Transform_o *v87; // x0
  __int64 v88; // x1
  UnityEngine_Transform_o *v89; // x22
  __int64 v90; // x0
  __int64 v91; // x1
  int v92; // s0
  UnityEngine_Transform_o *v95; // x22
  __int64 v96; // x0
  __int64 v97; // x1
  int v98; // s0
  __int64 v102; // x0
  __int64 v103; // x1
  float v104; // s9
  Il2CppObject *v105; // x1
  System_String_o *v106; // x0
  _BOOL8 v107; // x0
  __int64 v108; // x1
  int v109; // w19
  __int64 v110; // x0
  __int64 v111; // x0
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+8h] [xbp-C8h] BYREF
  int v113[3]; // [xsp+20h] [xbp-B0h]
  int v114; // [xsp+2Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v115; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v116; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6670 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___,
      v33,
      v34,
      v35);
    sub_B5D5C4(&int_TypeInfo, v36, v37, v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v39,
      v40,
      v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v45, v46, v47);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v51,
      v52,
      v53);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_22453/*"skill_{0:D5}"*/, v57, v58, v59);
    byte_42E6670 = 1;
  }
  entityList = 0LL;
  memset(&v116, 0, sizeof(v116));
  memset(&v115, 0, sizeof(v115));
  v114 = 0;
  skillListParent = this->fields.skillListParent;
  if ( !skillListParent )
    goto LABEL_56;
  skillListParent = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                      (UnityEngine_GameObject_o *)skillListParent,
                      (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !skillListParent )
    goto LABEL_56;
  v61 = *((_DWORD *)skillListParent + 6);
  v62 = skillListParent;
  if ( v61 >= 1 )
  {
    v63 = 0;
    do
    {
      if ( v63 >= v61 )
      {
        v110 = sub_B5D6C8(skillListParent);
        sub_B5D668(v110, 0LL);
      }
      skillListParent = (void *)*((_QWORD *)v62 + (int)v63 + 4);
      if ( !skillListParent )
        goto LABEL_56;
      skillListParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillListParent, 0LL);
      if ( !skillListParent )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillListParent, 0, 0LL);
      v61 = *((_DWORD *)v62 + 6);
    }
    while ( (int)++v63 < v61 );
  }
  if ( svtData )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skillListParent = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    npcSvtClassId = svtData->fields.npcSvtClassId;
    if ( !npcSvtClassId )
    {
      v65 = svtData->fields.svtdata;
      if ( !v65 )
        goto LABEL_56;
      npcSvtClassId = v65->fields.classId;
    }
    if ( !skillListParent )
LABEL_56:
      sub_B5D69C(skillListParent, svtData);
    if ( ClassBoardClassMaster__TryGetEntityListFromClassId(
           (ClassBoardClassMaster_o *)skillListParent,
           &entityList,
           npcSvtClassId,
           0LL) )
    {
      v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v66,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
      skillListParent = entityList;
      if ( !entityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v112,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
      v116 = v112;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v116,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
      {
        current = v116.fields.current;
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
            sub_B5D69C(IsNullOrEmpty, v69);
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
        if ( !v66 )
          sub_B5D69C(OpenSkillList, OpenSkillList);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v66,
          OpenSkillList,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
      v113[0] = 181;
      v114 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v116,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      v114 = 0;
      if ( !v66 )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v112,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v66,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v73 = 0;
      v74 = 0.0;
      v115 = v112;
      while ( 1 )
      {
        v107 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v115,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
        if ( !v107 )
          break;
        v75 = *((_DWORD *)v62 + 6);
        v76 = v115.fields.current;
        if ( (int)v73 >= (int)v75 )
        {
          v78 = this->fields.skillListParent;
          if ( !v78 )
            sub_B5D69C(0LL, v108);
          skillInfoPrefab = this->fields.skillInfoPrefab;
          transform = UnityEngine_GameObject__get_transform(v78, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillInfoPrefab, transform, 0LL, 0LL);
          if ( !Object )
            sub_B5D69C(0LL, v82);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Object,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        }
        else
        {
          if ( v73 >= v75 )
          {
            v111 = sub_B5D6C8(v107);
            sub_B5D668(v111, 0LL);
          }
          Component_srcLineSprite = (UnityEngine_Object_o *)*((_QWORD *)v62 + (int)v73 + 4);
        }
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v83 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
        if ( v83 )
          break;
        if ( !Component_srcLineSprite )
          sub_B5D69C(v83, v84);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !gameObject )
          sub_B5D69C(0LL, v86);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v87 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( !v87 )
          sub_B5D69C(0LL, v88);
        v118.fields.x = 0.0;
        v118.fields.z = 0.0;
        v118.fields.y = v74;
        UnityEngine_Transform__set_localPosition(v87, v118, 0LL);
        v89 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Vector3_o *)&v92 = UnityEngine_Vector3__get_one(0LL);
        if ( !v89 )
          sub_B5D69C(v90, v91);
        UnityEngine_Transform__set_localScale(v89, *(UnityEngine_Vector3_o *)&v92, 0LL);
        v95 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        *(UnityEngine_Quaternion_o *)&v98 = UnityEngine_Quaternion__get_identity(0LL);
        if ( !v95 )
          sub_B5D69C(v96, v97);
        UnityEngine_Transform__set_localRotation(v95, *(UnityEngine_Quaternion_o *)&v98, 0LL);
        if ( !v76 )
          sub_B5D69C(v102, v103);
        v104 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                 (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
                 (System_String_o *)v76[1].klass,
                 (System_String_o *)v76[1].monitor,
                 (int32_t)v76[2].monitor,
                 HIDWORD(v76[2].monitor),
                 1,
                 0LL);
        LODWORD(v112.fields.list) = v76[2].monitor;
        v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
        v106 = System_String__Format((System_String_o *)StringLiteral_22453/*"skill_{0:D5}"*/, v105, 0LL);
        ClassBoardEffectListDialogSkillDetailComponent__SetIconFromBattleServantWindow(
          (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite,
          this->fields.atlasManagerUnit,
          v106,
          0LL);
        v74 = v74 - v104;
        ++v73;
      }
      v113[0] = 451;
      v109 = ++v114;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v115,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
      if ( v109 && v113[v109 - 1] == 451 )
        v114 = v109 - 1;
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
    sub_B5D69C(0LL, f);
  AtlasManagerUnit__Load(atlasManagerUnit, f, 1, 0LL);
}