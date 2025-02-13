void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDFAB4 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDFAB4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__Close(
        ClassBoardBaseDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSquare; // x21
  __int64 v6; // x1
  ClassBoardSquare_o *v7; // x0

  if ( (byte_4BDFAB1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFAB1 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    ClassBoardSquare__SetSelectedEffectActive(v7, 0, 0LL);
  }
  BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
}


void __fastcall ClassBoardBaseDialog__CloseItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BDFAB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDFAB3 = 1;
  }
  v4 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v7);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, closedAction, 0LL);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x24
  signed int max_length; // w8
  signed int v12; // w27
  ClassBoardSquareEntity_o *v13; // x28
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  Il2CppObject *v17; // x0
  FuncDispEntity_o *v18; // x19
  SkillLvEntity_o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x22
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_object__o *v32; // x29
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  Il2CppObject *v38; // x22
  __int64 v39; // x1
  System_Collections_Generic_List_object__o *v40; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v42; // x19
  System_Collections_Generic_List_object__o *v43; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v44; // x20
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  System_String_o *v88; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v90; // w19
  int32_t v91; // w23
  int32_t v92; // w24
  int32_t v93; // w25
  System_String_o *v94; // x26
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  System_Collections_Generic_List_object__o *v99; // x0
  _BOOL8 v100; // x0
  __int64 v101; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v104; // x0
  __int64 v105; // x1
  Il2CppObject *v106; // x0
  __int64 v107; // x1
  _DWORD *v108; // x8
  __int64 v109; // x1
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  Il2CppObject *v112; // x0
  __int64 v113; // x1
  Il2CppClass *v114; // x8
  __int64 v115; // x25
  int32_t v116; // w24
  Il2CppObject *v117; // x19
  __int64 v118; // x0
  __int64 v119; // x1
  _DWORD *v120; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v122; // x8
  __int64 v123; // x10
  unsigned __int64 v124; // x9
  __int64 v125; // x10
  unsigned __int64 v126; // x12
  int v127; // w13
  _DWORD *v128; // x8
  int32_t v129; // w8
  Il2CppObject *v130; // x0
  __int64 v131; // x1
  const MethodInfo *v132; // x2
  Il2CppClass *v133; // x8
  System_String_o *v134; // x25
  Il2CppObject *v135; // x0
  __int64 v136; // x1
  _DWORD *v137; // x8
  int32_t v138; // w26
  Il2CppObject *v139; // x0
  __int64 v140; // x1
  _DWORD *v141; // x8
  int32_t v142; // w20
  Il2CppObject *v143; // x0
  __int64 v144; // x1
  _DWORD *v145; // x8
  int32_t v146; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v147; // x22
  __int64 v148; // x0
  __int64 v149; // x1
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  Il2CppClass **v159; // x0
  ClassBoardBaseDialog___c_c *v160; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v162; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v170; // x0
  ClassBoardBaseDialog___c_c *v171; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v172; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v174; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v182; // x0
  int32_t v185; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v186; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v188; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v189; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v190; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v191; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v192; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v193; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v194; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v195; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v196; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v197; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v198; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v200; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_4BDFAAE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C21E38(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C21E38(&Method_System_String_Join_int___);
    sub_1C21E38(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__);
    sub_1C21E38(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__);
    sub_1C21E38(&ClassBoardBaseDialog___c_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFAAE = 1;
  }
  v200 = 0LL;
  entity = 0LL;
  v198 = 0LL;
  entitys = 0LL;
  memset(&v197, 0, sizeof(v197));
  v196 = 0LL;
  v194 = 0LL;
  memset(&v195, 0, sizeof(v195));
  memset(&v193, 0, sizeof(v193));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v6;
  v190 = v6;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v186 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v189 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v189,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v191 = (FuncDispMaster_o *)v10;
    v185 = dispType;
    v188 = openedSquareArray;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C2209C(IsPassive, v8);
      v13 = openedSquareArray->m_Items[v12];
      v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v14;
      if ( !v13 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v13, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v13, 0LL);
        if ( dispType != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v186;
          if ( !v186 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v186,
                                        &entitys,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v32 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v32,
              (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v192,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v197.fields._list = *(_OWORD *)&v192.fields._dictionary;
            v197.fields._current = v192.fields._current.fields.key;
            while ( 1 )
            {
              v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v197,
                      (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v10 = (Il2CppObject *)v191;
              if ( !v33 )
                break;
              current = v197.fields._current;
              if ( !v197.fields._current )
                sub_1C22094(v33, v34);
              if ( !v191 )
                sub_1C22094(v33, v34);
              if ( FuncDispMaster__IsContainFuncIds(
                     v191,
                     &v196,
                     (System_Int32_array *)v197.fields._current[3].klass,
                     0LL) )
              {
                v36 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_866/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_3054074 *)Method_System_String_Join_int___);
                if ( !v32 )
                  sub_1C22094(v36, v37);
                v38 = v36;
                if ( !System_Collections_Generic_List_object___Contains(
                        v32,
                        v36,
                        (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v189 )
                    sub_1C22094(0LL, v39);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v189,
                          v38,
                          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v40 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v40,
                      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v189,
                      v38,
                      (Il2CppObject *)v40,
                      (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v189,
                           v38,
                           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v42 = v196;
                  v43 = (System_Collections_Generic_List_object__o *)Item;
                  v44 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v44,
                    v42,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v13,
                    0LL);
                  if ( !v43 )
                    sub_1C22094(v45, v46);
                  items = v43->fields._items;
                  v54 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v43->fields._version;
                  if ( !items )
                    sub_1C22094(v45, v46);
                  size = v43->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v43,
                      (Il2CppObject *)v44,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v56 = &items->obj.klass + size;
                    v43->fields._size = size + 1;
                    v56[4] = (Il2CppClass *)v44;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)v44, v47, v48, v49, v50, v51, v52);
                  }
                  v84 = v32->fields._items;
                  v85 = Method_System_Collections_Generic_List_string__Add__;
                  ++v32->fields._version;
                  if ( !v84 )
                    sub_1C22094(v57, v58);
                  v86 = v32->fields._size;
                  if ( (unsigned int)v86 >= v84->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v32,
                      v38,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v87 = &v84->obj.klass + v86;
                    v32->fields._size = v86 + 1;
                    v87[4] = (Il2CppClass *)v38;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v87 + 4), (int64_t)v38, v59, v60, v61, v62, v63, v64);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v13->fields.priority;
                id = v13->fields.id;
                iconId = v13->fields.iconId;
                skillType = v13->fields.skillType;
                v71 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v71,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  0LL);
                if ( !v190 )
                  sub_1C22094(v72, v73);
                v80 = v190->fields._items;
                v81 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v190->fields._version;
                if ( !v80 )
                  sub_1C22094(v72, v73);
                v82 = v190->fields._size;
                if ( (unsigned int)v82 >= v80->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v190,
                    (Il2CppObject *)v71,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                }
                else
                {
                  v83 = &v80->obj.klass + v82;
                  v190->fields._size = v82 + 1;
                  v83[4] = (Il2CppClass *)v71;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)v71, v74, v75, v76, v77, v78, v79);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v197,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            dispType = v185;
          }
        }
        goto LABEL_61;
      }
      if ( dispType != 2 )
      {
        IsPassive = (Il2CppObject *)Master_object;
        if ( !Master_object )
          goto LABEL_157;
        IsPassive = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      Master_object,
                                      &entity,
                                      v13->fields.targetId,
                                      (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v9,
                                        &v200,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v200;
            if ( !v200 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v200, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v200 || !v10 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v10,
                                            &v198,
                                            v200->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v200 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_866/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v200->fields.funcId,
                                              (const MethodInfo_3054074 *)Method_System_String_Join_int___);
                if ( !v189 )
                  goto LABEL_157;
                v15 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v189,
                        IsPassive,
                        (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v16,
                    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v189,
                    v15,
                    (Il2CppObject *)v16,
                    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v189,
                        v15,
                        (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v18 = v198;
                v19 = v200;
                v20 = (System_Collections_Generic_List_object__o *)v17;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v21, v18, v19, 0LL, v13, 0LL);
                if ( !v20 )
                  goto LABEL_157;
                v28 = v20->fields._items;
                v29 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v20->fields._version;
                if ( !v28 )
                  goto LABEL_157;
                v30 = v20->fields._size;
                if ( (unsigned int)v30 >= v28->max_length )
                {
                  v98 = v29[4];
                  v99 = v20;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v99,
                    (Il2CppObject *)v21,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v98 + 192) + 112LL));
                  goto LABEL_61;
                }
                v31 = &v28->obj.klass + v30;
                v20->fields._size = v30 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v88 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v90 = v13->fields.priority;
                v91 = v13->fields.id;
                v92 = v13->fields.iconId;
                v93 = v13->fields.skillType;
                v94 = EffectExplanation;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v21,
                  v88,
                  v94,
                  v91,
                  v90,
                  v92,
                  v93,
                  0LL);
                if ( !v190 )
                  goto LABEL_157;
                v95 = v190->fields._items;
                v96 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v190->fields._version;
                if ( !v95 )
                  goto LABEL_157;
                v97 = v190->fields._size;
                v10 = (Il2CppObject *)v191;
                if ( (unsigned int)v97 >= v95->max_length )
                {
                  v98 = v96[4];
                  v99 = v190;
                  goto LABEL_72;
                }
                v31 = &v95->obj.klass + v97;
                v190->fields._size = v97 + 1;
              }
              v31[4] = (Il2CppClass *)v21;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v21, v22, v23, v24, v25, v26, v27);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v188;
      ++v12;
      max_length = v188->max_length;
    }
    while ( v12 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v189;
  if ( !v189 )
LABEL_157:
    sub_1C22094(IsPassive, v8);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v192,
    v189,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v195 = v192;
  while ( 1 )
  {
    v100 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v195,
             (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v100 )
      break;
    value = v195.fields._current.fields.value;
    if ( !v195.fields._current.fields.value )
      sub_1C22094(v100, v101);
    if ( SLODWORD(v195.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v104 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v195.fields._current.fields.value,
               0,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v104 )
        sub_1C22094(0LL, v105);
      if ( v104[1].monitor )
      {
        v106 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v106 )
          sub_1C22094(0LL, v107);
        v108 = v106[1].monitor;
        if ( !v108 )
          sub_1C22094(v106, v107);
        if ( !Master_object )
          sub_1C22094(0LL, v107);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v194,
               v108[4],
               (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v194 )
            sub_1C22094(0LL, v109);
          Name = SkillEntity__getName((SkillEntity_o *)v194, 0LL);
        }
      }
      else
      {
        v110 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v110 )
          sub_1C22094(0LL, v111);
        if ( v110[2].klass )
        {
          v112 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v112 )
            sub_1C22094(0LL, v113);
          v114 = v112[2].klass;
          if ( !v114 )
            sub_1C22094(v112, v113);
          Name = (System_String_o *)v114->_1.byval_arg.data;
        }
      }
      v115 = sub_1C21EE0(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v192,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v116 = 0;
      *(_OWORD *)&v193.fields._list = *(_OWORD *)&v192.fields._dictionary;
      v193.fields._current = v192.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v193,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v193,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v130 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v130 )
          sub_1C22094(0LL, v131);
        v133 = v130[1].klass;
        if ( !v133 )
          sub_1C22094(v130, v131);
        v134 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v133->_1.byval_arg.data,
                 (System_Int32_array *)v115,
                 v132);
        v135 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v135 )
          sub_1C22094(0LL, v136);
        v137 = v135[2].monitor;
        if ( !v137 )
          sub_1C22094(v135, v136);
        v138 = v137[5];
        v139 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v139 )
          sub_1C22094(0LL, v140);
        v141 = v139[2].monitor;
        if ( !v141 )
          sub_1C22094(v139, v140);
        v142 = v141[6];
        v143 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v143 )
          sub_1C22094(0LL, v144);
        v145 = v143[2].monitor;
        if ( !v145 )
          sub_1C22094(v143, v144);
        v146 = v145[14];
        v147 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v147, Name, v134, v138, v116, v142, v146, 0LL);
        if ( !v190 )
          sub_1C22094(v148, v149);
        v156 = v190->fields._items;
        v157 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v190->fields._version;
        if ( !v156 )
          sub_1C22094(v148, v149);
        v158 = v190->fields._size;
        if ( (unsigned int)v158 >= v156->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v190,
            (Il2CppObject *)v147,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
        }
        else
        {
          v159 = &v156->obj.klass + v158;
          v190->fields._size = v158 + 1;
          v159[4] = (Il2CppClass *)v147;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v159 + 4), (int64_t)v147, v150, v151, v152, v153, v154, v155);
        }
        continue;
      }
      v117 = v193.fields._current;
      v118 = sub_1C21EE0(int___TypeInfo, 0LL);
      if ( !v117 )
        sub_1C22094(v118, v119);
      v120 = v117[1].monitor;
      if ( v120 )
      {
        if ( !v9 )
          sub_1C22094(v118, v119);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v9,
                                                               v120[4],
                                                               v120[5],
                                                               0LL);
LABEL_110:
        v122 = (__int64)DispValFromSkill;
      }
      else
      {
        v122 = v118;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v117[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v115 )
        sub_1C22094(DispValFromSkill, v119);
      v123 = *(_QWORD *)(v115 + 24);
      if ( v123 )
      {
        if ( (int)v123 >= 1 )
        {
          v124 = 0LL;
          v125 = (unsigned int)*(_QWORD *)(v115 + 24);
          do
          {
            if ( !v122 )
              sub_1C22094(DispValFromSkill, v119);
            if ( v124 >= *(unsigned int *)(v122 + 24) )
              sub_1C2209C(DispValFromSkill, v119);
            v126 = v115 + 4 * v124;
            v127 = *(_DWORD *)(v122 + 32 + 4 * v124++);
            *(_DWORD *)(v126 + 32) += v127;
          }
          while ( v125 != v124 );
        }
      }
      else
      {
        v115 = v122;
      }
      v128 = v117[2].monitor;
      if ( !v128 )
        sub_1C22094(DispValFromSkill, v119);
      v129 = v128[20];
      if ( v129 > v116 )
        v116 = v129;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v195,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v160 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v160 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v160->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v160->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v160);
      v160 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v162 = (Il2CppObject *)v160->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v162,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v164,
      v165,
      v166,
      v167,
      v168,
      v169);
  }
  v170 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v190,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v171 = ClassBoardBaseDialog___c_TypeInfo;
  v172 = v170;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v171 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v171->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v171->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v171);
      v171 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v174 = (Il2CppObject *)v171->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_1,
      v174,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v175 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v175->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v175->__9__28_1, (int64_t)_9__28_1, v176, v177, v178, v179, v180, v181);
  }
  v182 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v172,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_2FE8C78 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v182, (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4BDFAA8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFAA8 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    gameObject = this->fields.effectObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.itemListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.conditionListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_1C22094(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__OpenItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  System_Int32_array *v22; // x21
  System_Int32_array *v23; // x22
  unsigned __int64 v24; // x24
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v28; // x23

  if ( (byte_4BDFAB2 & 1) == 0 )
  {
    sub_1C21E38(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__);
    sub_1C21E38(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
    byte_4BDFAB2 = 1;
  }
  v5 = sub_1C22084(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = closedAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)closedAction, v14, v15, v16, v17, v18, v19);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v22 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)size);
    v23 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v24,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v22 )
          break;
        if ( v24 >= v22->max_length )
          goto LABEL_23;
        v22->m_Items[v24 + 1] = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v24,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v23 )
          break;
        if ( v24 >= v23->max_length )
LABEL_23:
          sub_1C2209C(Item, v7);
        v23->m_Items[++v24] = Item[2].fields._version;
        if ( size == v24 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C22094(Item, v7);
    }
LABEL_17:
    v25 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C21E50(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C22084(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)v5,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v22, v23, v28, 0, 0LL);
  }
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x29
  System_String_o *v8; // x0
  System_String_o *v9; // x28
  System_String_o *v10; // x0
  System_String_o *v11; // x27
  System_String_o *v12; // x0
  System_String_o *v13; // x26
  System_String_o *v14; // x0
  System_String_o *v15; // x25
  System_String_o *v16; // x0
  System_String_o *v17; // x24
  System_String_o *v18; // x0
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x22
  System_String_o *v29; // x22
  System_String_o *v30; // x22
  System_String_o *v31; // x22
  System_String_o *v32; // x22
  unsigned __int64 v33; // x8
  System_String_o *v34; // x22
  unsigned __int64 v35; // x8
  System_String_o *v36; // x22
  unsigned __int64 v37; // x8
  System_String_o *v38; // x21
  unsigned __int64 v39; // x8
  int v41; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v42; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDFAAF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_25576/*"{x"*/);
    sub_1C21E38(&StringLiteral_25357/*"{"*/);
    sub_1C21E38(&StringLiteral_25287/*"xx}"*/);
    sub_1C21E38(&StringLiteral_25286/*"xxx}"*/);
    sub_1C21E38(&StringLiteral_25603/*"}"*/);
    sub_1C21E38(&StringLiteral_25579/*"{xxxx"*/);
    sub_1C21E38(&StringLiteral_25577/*"{xx"*/);
    sub_1C21E38(&StringLiteral_25285/*"xxxx}"*/);
    sub_1C21E38(&StringLiteral_25288/*"x}"*/);
    sub_1C21E38(&StringLiteral_25578/*"{xxx"*/);
    byte_4BDFAAF = 1;
  }
  v41 = 0;
  if ( funcVals )
  {
    v5 = *(_QWORD *)&funcVals->max_length;
    if ( v5 )
    {
      v42 = 0;
      if ( (int)v5 >= 1 )
      {
        do
        {
          v6 = System_Int32__ToString((int32_t)&v42, 0LL);
          v7 = System_String__Concat_63126736(
                 (System_String_o *)StringLiteral_25357/*"{"*/,
                 v6,
                 (System_String_o *)StringLiteral_25285/*"xxxx}"*/,
                 0LL);
          v8 = System_Int32__ToString((int32_t)&v42, 0LL);
          v9 = System_String__Concat_63126736(
                 (System_String_o *)StringLiteral_25357/*"{"*/,
                 v8,
                 (System_String_o *)StringLiteral_25286/*"xxx}"*/,
                 0LL);
          v10 = System_Int32__ToString((int32_t)&v42, 0LL);
          v11 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25357/*"{"*/,
                  v10,
                  (System_String_o *)StringLiteral_25287/*"xx}"*/,
                  0LL);
          v12 = System_Int32__ToString((int32_t)&v42, 0LL);
          v13 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25357/*"{"*/,
                  v12,
                  (System_String_o *)StringLiteral_25288/*"x}"*/,
                  0LL);
          v14 = System_Int32__ToString((int32_t)&v42, 0LL);
          v15 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25357/*"{"*/,
                  v14,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v16 = System_Int32__ToString((int32_t)&v42, 0LL);
          v17 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25576/*"{x"*/,
                  v16,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v42, 0LL);
          v19 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25577/*"{xx"*/,
                  v18,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v42, 0LL);
          v21 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25578/*"{xxx"*/,
                  v20,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v42, 0LL);
          v23 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25579/*"{xxxx"*/,
                  v22,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v25 = v23;
          v41 = 10000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !text )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(text, v7, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v28 = v23;
          v41 = 1000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v28 )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(v28, v9, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v29 = v23;
          v41 = 100 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v29 )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(v29, v11, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v30 = v23;
          v41 = 10 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v30 )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(v30, v13, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v31 = v23;
          v26 = System_Int32__ToString((unsigned int)funcVals + 4 * v42 + 32, 0LL);
          if ( !v31 )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(v31, v15, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v32 = v23;
          v33 = 1717986919LL * funcVals->m_Items[v42 + 1];
          v41 = (v33 >> 63) + (SHIDWORD(v33) >> 2);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v32 )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(v32, v17, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v34 = v23;
          v35 = 1374389535LL * funcVals->m_Items[v42 + 1];
          v41 = (v35 >> 63) + (SHIDWORD(v35) >> 5);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v34 )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(v34, v19, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v36 = v23;
          v37 = 274877907LL * funcVals->m_Items[v42 + 1];
          v41 = (v37 >> 63) + (SHIDWORD(v37) >> 6);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v36 )
            goto LABEL_27;
          v23 = System_String__Replace_63135104(v36, v21, v26, 0LL);
          if ( v42 >= funcVals->max_length )
LABEL_26:
            sub_1C2209C(v23, v24);
          v38 = v23;
          v39 = 1759218605LL * funcVals->m_Items[v42 + 1];
          v41 = (v39 >> 63) + (SHIDWORD(v39) >> 12);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v38 )
LABEL_27:
            sub_1C22094(v26, v27);
          text = System_String__Replace_63135104(v38, v25, v26, 0LL);
          ++v42;
        }
        while ( (signed int)v42 < (signed int)funcVals->max_length );
      }
    }
  }
  return text;
}


void __fastcall ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemIconComponentList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDFAAD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    byte_4BDFAAD = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      itemIconComponentList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C22094(0LL, v4);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v5.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
  }
}


void __fastcall ClassBoardBaseDialog__SetEffectScrollInitPos(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *effectScrollView; // x8
  ClassBoardBaseDialog_o *v3; // x19
  float v4; // s0

  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_8;
  v3 = this;
  this = (ClassBoardBaseDialog_o *)effectScrollView->fields.verticalScrollBar;
  if ( !this )
    goto LABEL_8;
  v4 = 0.0;
  if ( effectScrollView->fields.contentPivot == 4 )
    v4 = 0.5;
  UIProgressBar__set_value((UIProgressBar_o *)this, v4, 0LL);
  this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView;
  if ( !this
    || (UIScrollView__UpdatePosition((UIScrollView_o *)this, 0LL),
        (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0LL) )
  {
LABEL_8:
    sub_1C22094(this, method);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetQpLabel(
        ClassBoardBaseDialog_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x22
  System_Int32_c *v14; // x0
  int32_t *v15; // x1
  Il2CppObject *v16; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v25; // [xsp+18h] [xbp-48h] BYREF
  int32_t v26; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BDFAAB & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3535/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/);
    sub_1C21E38(&StringLiteral_3537/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/);
    sub_1C21E38(&StringLiteral_3534/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/);
    sub_1C21E38(&StringLiteral_3536/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/);
    sub_1C21E38(&StringLiteral_3532/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/);
    byte_4BDFAAB = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_19;
  klass = (int32_t)SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( klass >= needNum )
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3534/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3536/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
    v14 = int_TypeInfo;
    v25 = needNum;
    v15 = &v25;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3535/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3537/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
    v14 = int_TypeInfo;
    v15 = &v26;
    v26 = needNum;
  }
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(v14, v15, v10, v11, v12);
  SelfUserGame = System_String__Format(v13, v16, 0LL);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3532/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3536/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v24 = klass;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
  SelfUserGame = System_String__Format(v19, v23, 0LL);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0LL)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_1C22094(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetUpEffectDetail(
        ClassBoardBaseDialog_o *this,
        IClassBoardSquareModel_o *squareModel,
        float disableScrollViewSize,
        float disableScrollViewPosY,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effectObj; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v15; // w0
  IClassBoardSquareModel_c *v16; // x8
  int32_t v17; // w22
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  ClassBoardSquareEntity_o *v27; // x22
  UnityEngine_GameObject_o *v28; // x21
  const MethodInfo *v29; // x3
  float v30; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x22
  Il2CppObject *Component_object; // x0
  __int64 v37; // x1
  IClassBoardSquareModel_c *v38; // x8
  System_String_o *monitor; // x25
  System_String_o *v40; // x26
  int32_t v41; // w24
  __int64 v42; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v43; // x23
  int32_t *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  float v48; // s10
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v51; // x0
  __int64 v52; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4BDFAA9 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardSquareEntity___TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    sub_1C21E38(&IClassBoardSquareModel_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFAA9 = 1;
  }
  entity = 0LL;
  memset(&v54, 0, sizeof(v54));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_54;
  klass = squareModel->klass;
  v11 = (ClassBoardSquareMaster_o *)effectObj;
  v12 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C73E18(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v15 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v16 = squareModel->klass;
  v17 = v15;
  v18 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_17;
    }
    v20 = (__int64)&v16->vtable[*v19].method;
  }
  else
  {
LABEL_17:
    v20 = sub_1C73E18(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v20)(
                                            squareModel,
                                            *(_QWORD *)(v20 + 8));
  if ( !v11 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v11, &entity, v17, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1C21EE0(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v27 = entity;
  v28 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1C21F74(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v52 = sub_1C220B8(0LL);
      sub_1C21F60(v52, 0LL);
    }
  }
  if ( !LODWORD(v28[1].klass) )
    sub_1C2209C(effectObj, squareModel);
  v28[1].monitor = v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v28[1].monitor, (int64_t)v27, v21, v22, v23, v24, v25, v26);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v28,
                                            0,
                                            0,
                                            v29);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v30 = 0.0;
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v54.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v33 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v35 = (UnityEngine_GameObject_o *)v33;
    if ( !v33 )
      sub_1C22094(0LL, v34);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v33,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1C22094(Component_object, v37);
    v38 = squareModel->klass;
    v40 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v41 = (int32_t)current[2].monitor;
    v42 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
    v43 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
    {
      v44 = &v38->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v44 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v42;
        v44 += 4;
        if ( !v42 )
          goto LABEL_35;
      }
      v45 = (__int64)&v38->vtable[*v44 + 7].method;
    }
    else
    {
LABEL_35:
      v45 = sub_1C73E18(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v46 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v45)(squareModel, *(_QWORD *)(v45 + 8));
    if ( !v43 )
      sub_1C22094(v46, v47);
    v48 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v43, v40, monitor, v41, v46, 0LL);
    GameObjectExtensions__SetParent_34803496(v35, this->fields.effectDetailParent, 0LL);
    if ( !byte_4BD6BB6 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_34797772(v35, 0.0, -v30, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    v30 = v30 + v48;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_54;
  effectObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))effectObj->klass[1]._1.parent)(
                                            effectObj,
                                            0LL,
                                            effectObj->klass[1]._1.generic_class,
                                            0.0,
                                            0.0);
  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_54;
  effectObj = (UnityEngine_GameObject_o *)effectScrollView->fields.verticalScrollBar;
  if ( !effectObj )
    goto LABEL_54;
  UIProgressBar__set_value((UIProgressBar_o *)effectObj, 0.0, 0LL);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_54;
  UIScrollView__UpdatePosition((UIScrollView_o *)effectObj, 0LL);
  if ( disableScrollViewSize > 0.0 && v30 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( effectObj )
      {
        v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v51, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1C22094(effectObj, squareModel);
  }
}


bool __fastcall ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemInfoLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *itemListObj; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_object__o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  _BOOL4 v24; // w27
  char v25; // w26
  _BOOL4 i; // w23
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x24
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  int32_t v42; // w0
  __int64 v43; // x8
  int32_t v44; // w23
  __int64 v45; // x9
  IClassBoardItemModel_c **v46; // x10
  __int64 v47; // x0
  int32_t v48; // w24
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v52; // x1
  _BOOL8 isQP; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x25
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_List_object__o *v71; // x0
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDFAAA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
    sub_1C21E38(&IClassBoardItemModel_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3530/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/);
    byte_4BDFAAA = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v6 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3530/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v6 )
      goto LABEL_86;
    UILabel__set_text(v6, itemListObj, 0LL);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0LL, 0LL) )
  {
    itemListObj = (System_String_o *)this->fields.itemQpObj;
    if ( !itemListObj )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 0, 0LL);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.itemIconComponentList,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v18 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C73E18(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v23 = v21;
  v24 = 0;
  v25 = 1;
LABEL_24:
  for ( i = v24; ; i = 1 )
  {
    if ( !v23 )
      sub_1C22094(v21, v22);
    v27 = *(_QWORD *)v23;
    v24 = i;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_30;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_30:
      v30 = sub_1C73E18(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v23, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v23;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v33 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_37;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_37:
      v34 = sub_1C73E18(v23, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v23, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_1C22094(0LL, v36);
    v38 = *(_QWORD *)v35;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v40 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_44;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_44:
      v41 = sub_1C73E18(v35, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
    v43 = *(_QWORD *)v37;
    v44 = v42;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v46 = (IClassBoardItemModel_c **)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *(v46 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v45;
        v46 += 2;
        if ( !v45 )
          goto LABEL_50;
      }
      v47 = v43 + 16LL * (*(_DWORD *)v46 + 1) + 312;
    }
    else
    {
LABEL_50:
      v47 = sub_1C73E18(v37, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v50);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1C22094(0LL, v52);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v44, 0LL);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v25 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v57 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v57;
        if ( !v57 )
          sub_1C22094(0LL, v58);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v57, 0LL);
        if ( !itemIconListGrid )
          sub_1C22094(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1C22094(isQP, v54);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_4BD6BB1 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_4BD6BB6 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v63 = Component_object;
      if ( !Component_object )
        sub_1C22094(0LL, v62);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v44, v48, 0LL);
      v71 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1C22094(0LL, v64);
      items = v71->fields._items;
      v73 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v71->fields._version;
      if ( !items )
        sub_1C22094(v71, v64);
      size = v71->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          v63,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v71->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v63;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v63, v65, v66, v67, v68, v69, v70);
      }
      v25 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v48, v55);
  }
  v76 = *(_QWORD *)v23;
  v77 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_78;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_78:
    v79 = sub_1C73E18(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v23, *(_QWORD *)(v79 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1C22094(itemListObj, v8);
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))itemListObj->klass->vtable._8_Equals.method)(
    itemListObj,
    itemListObj->klass->vtable._9_GetTypeCode.methodPtr);
  return i;
}


void __fastcall ClassBoardBaseDialog__SetUpLockReleaseCondition(
        ClassBoardBaseDialog_o *this,
        ClassBoardCondData_o condData,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *conditionListObj; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *v7; // x8
  _QWORD *v8; // x9
  __int64 v9; // x10
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  char v18; // w23
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x22
  MasterMissionListViewItem_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object__49965836; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  UIGrid_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4BDFAAC & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&MasterMissionListViewItem_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_Transform___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFAAC = 1;
  }
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v11 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v12 = 0LL;
        do
        {
          if ( (unsigned int)v12 >= (unsigned int)klass )
            sub_1C2209C(conditionListObj, *(_QWORD *)&condData.fields.Type);
          v13 = *((_QWORD *)&v11[1].monitor + v12);
          if ( !v13 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v13 + 28) - 23) <= 1 )
          {
            if ( !v6 )
              goto LABEL_58;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v13 + 32);
            items = v6->fields._items;
            v15 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                condData.fields.Type,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
              klass = v11[1].klass;
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size + 1] = condData.fields.Type;
            }
          }
        }
        while ( (int)++v12 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v6 )
      goto LABEL_58;
    v7 = v6->fields._items;
    v8 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !v7 )
      goto LABEL_58;
    v9 = v6->fields._size;
    if ( (unsigned int)v9 >= v7->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v6,
        SHIDWORD(v3),
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = v9 + 1;
      v7->m_Items[v9 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v6 )
    goto LABEL_58;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v6,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v18 = 1;
  v39 = v38;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v39,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v17 )
      sub_1C22094(v19, v20);
    DataMasterBase_object__object__int___TryGetEntity(
      v17,
      &entity,
      v39.fields._current,
      (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v21 = entity;
    if ( entity )
    {
      v22 = (MasterMissionListViewItem_o *)sub_1C22084(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v22, (EventMissionEntity_o *)v21, 2, 0LL);
      if ( !v22 )
        sub_1C22094(v23, v24);
      ComponentInChildren_object__49965836 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v22->klass->vtable._6_CheckMissionCond.method)(
                                                               v22,
                                                               v22->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v18 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1C22094(ComponentInChildren_object__49965836, v26);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1C22094(0LL, v29);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v33 = UnityEngine_Object__Instantiate_object__50551272(
                Parent,
                transform,
                (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v33 )
          sub_1C22094(0LL, v34);
        ComponentInChildren_object__49965836 = UnityEngine_Component__GetComponentInChildren_object__49965836(
                                                 (UnityEngine_Component_o *)v33,
                                                 (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__49965836;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1C22094(ComponentInChildren_object__49965836, v26);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v22,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v35 = this->fields.conditionGrid;
      v36 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v37 = GameObjectExtensions__GetParent(v36, 0LL);
      if ( !v35 )
        sub_1C22094(v37, v37);
      UIGrid__AddChild(v35, v37, 0LL);
      v18 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v39,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))conditionListObj->klass[1]._1.parent)(
    conditionListObj,
    0LL,
    conditionListObj->klass[1]._1.generic_class,
    0.0,
    0.0);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    1LL,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  UIScrollView__UpdatePosition((UIScrollView_o *)conditionListObj, 0LL);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_58;
  conditionListObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)conditionListObj,
                                                   0LL);
  if ( !conditionListObj )
    goto LABEL_58;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)conditionListObj, 0LL) != 1 )
    return;
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)conditionListObj, 0, 0LL),
        (conditionListObj = this->fields.missionScrollBar) == 0LL) )
  {
LABEL_58:
    sub_1C22094(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4BDFAB0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFAB0 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDFAB5 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardBaseDialog___c_TypeInfo);
    byte_4BDFAB5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardBaseDialog___c___ctor(ClassBoardBaseDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_0(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.squareId;
}


void __fastcall ClassBoardBaseDialog___c__DisplayClass32_0___ctor(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog___c__DisplayClass32_0___OpenItemInfoListWindow_b__0(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1C22094(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}