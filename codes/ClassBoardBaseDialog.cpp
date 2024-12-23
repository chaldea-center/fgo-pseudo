void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A0DC & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6A0DC = 1;
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

  if ( (byte_4B6A0D9 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, callback);
    byte_4B6A0D9 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
    ClassBoardSquare__SetSelectedEffectActive(v7, 0, 0LL);
  }
  BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
}


void __fastcall ClassBoardBaseDialog__CloseItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B6A0DB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__, closedAction);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B6A0DB = 1;
  }
  v5 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v8);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, closedAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  int32_t v4; // w29
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  System_Collections_Generic_List_object__o *v57; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v59; // x1
  Il2CppObject *v60; // x21
  Il2CppObject *v61; // x24
  signed int max_length; // w8
  signed int v63; // w27
  ClassBoardSquareEntity_o *v64; // x28
  System_Collections_Generic_List_object__o *v65; // x19
  Il2CppObject *v66; // x20
  System_Collections_Generic_List_object__o *v67; // x19
  Il2CppObject *v68; // x0
  FuncDispEntity_o *v69; // x19
  SkillLvEntity_o *v70; // x23
  System_Collections_Generic_List_object__o *v71; // x22
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v72; // x20
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  System_Collections_Generic_List_object__o *v83; // x29
  _BOOL8 v84; // x0
  __int64 v85; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  Il2CppObject *v89; // x22
  __int64 v90; // x1
  System_Collections_Generic_List_object__o *v91; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v93; // x19
  System_Collections_Generic_List_object__o *v94; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v95; // x20
  __int64 v96; // x0
  __int64 v97; // x1
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  Il2CppClass **v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v122; // x22
  __int64 v123; // x0
  __int64 v124; // x1
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  Il2CppClass **v138; // x0
  System_String_o *v139; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v141; // w19
  int32_t v142; // w23
  int32_t v143; // w24
  int32_t v144; // w25
  System_String_o *v145; // x26
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  __int64 v149; // x8
  System_Collections_Generic_List_object__o *v150; // x0
  _BOOL8 v151; // x0
  __int64 v152; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v155; // x0
  __int64 v156; // x1
  Il2CppObject *v157; // x0
  __int64 v158; // x1
  _DWORD *v159; // x8
  __int64 v160; // x1
  Il2CppObject *v161; // x0
  __int64 v162; // x1
  Il2CppObject *v163; // x0
  __int64 v164; // x1
  Il2CppClass *v165; // x8
  __int64 v166; // x25
  int32_t v167; // w24
  Il2CppObject *v168; // x19
  __int64 v169; // x0
  __int64 v170; // x1
  _DWORD *v171; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v173; // x8
  __int64 v174; // x10
  unsigned __int64 v175; // x9
  __int64 v176; // x10
  unsigned __int64 v177; // x12
  int v178; // w13
  _DWORD *v179; // x8
  int32_t v180; // w8
  Il2CppObject *v181; // x0
  __int64 v182; // x1
  const MethodInfo *v183; // x2
  Il2CppClass *v184; // x8
  System_String_o *v185; // x25
  Il2CppObject *v186; // x0
  __int64 v187; // x1
  _DWORD *v188; // x8
  int32_t v189; // w26
  Il2CppObject *v190; // x0
  __int64 v191; // x1
  _DWORD *v192; // x8
  int32_t v193; // w20
  Il2CppObject *v194; // x0
  __int64 v195; // x1
  _DWORD *v196; // x8
  int32_t v197; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v198; // x22
  __int64 v199; // x0
  __int64 v200; // x1
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  struct System_Object_array *v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  Il2CppClass **v210; // x0
  ClassBoardBaseDialog___c_c *v211; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v213; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v221; // x0
  ClassBoardBaseDialog___c_c *v222; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v223; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v225; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v226; // x0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v233; // x0
  int32_t v236; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v237; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v239; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v240; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v241; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v242; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v243; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v244; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v245; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v246; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v247; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v248; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v249; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v251; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4B6A0D6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_1BE4ACC(&Method_DataManager_GetMaster_FuncDispMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v11);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v12);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v13);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v14);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v15);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v16);
    sub_1BE4ACC(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v17);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v18);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v20);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v21);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v23);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v24);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v25);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v27);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_1BE4ACC(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v30);
    sub_1BE4ACC(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v31);
    sub_1BE4ACC(&int___TypeInfo, v32);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v33);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v34);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v35);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v36);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v38);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v39);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v40);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v41);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v42);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v43);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v44);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v45);
    sub_1BE4ACC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v46);
    sub_1BE4ACC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v47);
    sub_1BE4ACC(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v48);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1BE4ACC(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v50);
    sub_1BE4ACC(&Method_System_String_Join_int___, v51);
    sub_1BE4ACC(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v52);
    sub_1BE4ACC(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v53);
    sub_1BE4ACC(&ClassBoardBaseDialog___c_TypeInfo, v54);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v55);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v56);
    byte_4B6A0D6 = 1;
  }
  v251 = 0LL;
  entity = 0LL;
  v249 = 0LL;
  entitys = 0LL;
  memset(&v248, 0, sizeof(v248));
  v247 = 0LL;
  v245 = 0LL;
  memset(&v246, 0, sizeof(v246));
  memset(&v244, 0, sizeof(v244));
  v57 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v57;
  v241 = v57;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v237 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_FuncDispMaster___);
  v240 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v240,
    (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v63 = 0;
    v242 = (FuncDispMaster_o *)v61;
    v236 = v4;
    v239 = openedSquareArray;
    do
    {
      if ( v63 >= (unsigned int)max_length )
        sub_1BE4D30(IsPassive, v59);
      v64 = openedSquareArray->m_Items[v63];
      v65 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v65,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v65;
      if ( !v64 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v64, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v64, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v237;
          if ( !v237 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v237,
                                        &entitys,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v83 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v83,
              (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v243,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v248.fields._list = *(_OWORD *)&v243.fields._dictionary;
            v248.fields._current = v243.fields._current.fields.key;
            while ( 1 )
            {
              v84 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v248,
                      (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v61 = (Il2CppObject *)v242;
              if ( !v84 )
                break;
              current = v248.fields._current;
              if ( !v248.fields._current )
                sub_1BE4D28(v84, v85);
              if ( !v242 )
                sub_1BE4D28(v84, v85);
              if ( FuncDispMaster__IsContainFuncIds(
                     v242,
                     &v247,
                     (System_Int32_array *)v248.fields._current[3].klass,
                     0LL) )
              {
                v87 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_863/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2FFD19C *)Method_System_String_Join_int___);
                if ( !v83 )
                  sub_1BE4D28(v87, v88);
                v89 = v87;
                if ( !System_Collections_Generic_List_object___Contains(
                        v83,
                        v87,
                        (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v240 )
                    sub_1BE4D28(0LL, v90);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v240,
                          v89,
                          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v91 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v91,
                      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v240,
                      v89,
                      (Il2CppObject *)v91,
                      (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v240,
                           v89,
                           (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v93 = v247;
                  v94 = (System_Collections_Generic_List_object__o *)Item;
                  v95 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BE4D18(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v95,
                    v93,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v64,
                    0LL);
                  if ( !v94 )
                    sub_1BE4D28(v96, v97);
                  items = v94->fields._items;
                  v105 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v94->fields._version;
                  if ( !items )
                    sub_1BE4D28(v96, v97);
                  size = v94->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v94,
                      (Il2CppObject *)v95,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v107 = &items->obj.klass + size;
                    v94->fields._size = size + 1;
                    v107[4] = (Il2CppClass *)v95;
                    sub_1BE4A70(
                      (PartyOrganizationUtility_o *)(v107 + 4),
                      (int64_t)v95,
                      v98,
                      v99,
                      v100,
                      v101,
                      v102,
                      v103);
                  }
                  v135 = v83->fields._items;
                  v136 = Method_System_Collections_Generic_List_string__Add__;
                  ++v83->fields._version;
                  if ( !v135 )
                    sub_1BE4D28(v108, v109);
                  v137 = v83->fields._size;
                  if ( (unsigned int)v137 >= v135->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v83,
                      v89,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v138 = &v135->obj.klass + v137;
                    v83->fields._size = v137 + 1;
                    v138[4] = (Il2CppClass *)v89;
                    sub_1BE4A70(
                      (PartyOrganizationUtility_o *)(v138 + 4),
                      (int64_t)v89,
                      v110,
                      v111,
                      v112,
                      v113,
                      v114,
                      v115);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v64->fields.priority;
                id = v64->fields.id;
                iconId = v64->fields.iconId;
                skillType = v64->fields.skillType;
                v122 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BE4D18(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v122,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  0LL);
                if ( !v241 )
                  sub_1BE4D28(v123, v124);
                v131 = v241->fields._items;
                v132 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v241->fields._version;
                if ( !v131 )
                  sub_1BE4D28(v123, v124);
                v133 = v241->fields._size;
                if ( (unsigned int)v133 >= v131->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v241,
                    (Il2CppObject *)v122,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                }
                else
                {
                  v134 = &v131->obj.klass + v133;
                  v241->fields._size = v133 + 1;
                  v134[4] = (Il2CppClass *)v122;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)(v134 + 4),
                    (int64_t)v122,
                    v125,
                    v126,
                    v127,
                    v128,
                    v129,
                    v130);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v248,
              (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v236;
          }
        }
        goto LABEL_61;
      }
      if ( v4 != 2 )
      {
        IsPassive = (Il2CppObject *)Master_object;
        if ( !Master_object )
          goto LABEL_157;
        IsPassive = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      Master_object,
                                      &entity,
                                      v64->fields.targetId,
                                      (const MethodInfo_31FD818 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v60,
                                        &v251,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v251;
            if ( !v251 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v251, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v251 || !v61 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v61,
                                            &v249,
                                            v251->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v251 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_863/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v251->fields.funcId,
                                              (const MethodInfo_2FFD19C *)Method_System_String_Join_int___);
                if ( !v240 )
                  goto LABEL_157;
                v66 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v240,
                        IsPassive,
                        (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v67 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v67,
                    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v240,
                    v66,
                    (Il2CppObject *)v67,
                    (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v68 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v240,
                        v66,
                        (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v69 = v249;
                v70 = v251;
                v71 = (System_Collections_Generic_List_object__o *)v68;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BE4D18(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v72, v69, v70, 0LL, v64, 0LL);
                if ( !v71 )
                  goto LABEL_157;
                v79 = v71->fields._items;
                v80 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v71->fields._version;
                if ( !v79 )
                  goto LABEL_157;
                v81 = v71->fields._size;
                if ( (unsigned int)v81 >= v79->max_length )
                {
                  v149 = v80[4];
                  v150 = v71;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v150,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v149 + 192) + 112LL));
                  goto LABEL_61;
                }
                v82 = &v79->obj.klass + v81;
                v71->fields._size = v81 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v139 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v141 = v64->fields.priority;
                v142 = v64->fields.id;
                v143 = v64->fields.iconId;
                v144 = v64->fields.skillType;
                v145 = EffectExplanation;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BE4D18(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v72,
                  v139,
                  v145,
                  v142,
                  v141,
                  v143,
                  v144,
                  0LL);
                if ( !v241 )
                  goto LABEL_157;
                v146 = v241->fields._items;
                v147 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v241->fields._version;
                if ( !v146 )
                  goto LABEL_157;
                v148 = v241->fields._size;
                v61 = (Il2CppObject *)v242;
                if ( (unsigned int)v148 >= v146->max_length )
                {
                  v149 = v147[4];
                  v150 = v241;
                  goto LABEL_72;
                }
                v82 = &v146->obj.klass + v148;
                v241->fields._size = v148 + 1;
              }
              v82[4] = (Il2CppClass *)v72;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v82 + 4), (int64_t)v72, v73, v74, v75, v76, v77, v78);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v239;
      ++v63;
      max_length = v239->max_length;
    }
    while ( v63 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v240;
  if ( !v240 )
LABEL_157:
    sub_1BE4D28(IsPassive, v59);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v243,
    v240,
    (const MethodInfo_32B0654 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v246 = v243;
  while ( 1 )
  {
    v151 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v246,
             (const MethodInfo_33AE940 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v151 )
      break;
    value = v246.fields._current.fields.value;
    if ( !v246.fields._current.fields.value )
      sub_1BE4D28(v151, v152);
    if ( SLODWORD(v246.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v155 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v246.fields._current.fields.value,
               0,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v155 )
        sub_1BE4D28(0LL, v156);
      if ( v155[1].monitor )
      {
        v157 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v157 )
          sub_1BE4D28(0LL, v158);
        v159 = v157[1].monitor;
        if ( !v159 )
          sub_1BE4D28(v157, v158);
        if ( !Master_object )
          sub_1BE4D28(0LL, v158);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v245,
               v159[4],
               (const MethodInfo_31FD818 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v245 )
            sub_1BE4D28(0LL, v160);
          Name = SkillEntity__getName((SkillEntity_o *)v245, 0LL);
        }
      }
      else
      {
        v161 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v161 )
          sub_1BE4D28(0LL, v162);
        if ( v161[2].klass )
        {
          v163 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v163 )
            sub_1BE4D28(0LL, v164);
          v165 = v163[2].klass;
          if ( !v165 )
            sub_1BE4D28(v163, v164);
          Name = (System_String_o *)v165->_1.byval_arg.data;
        }
      }
      v166 = sub_1BE4B74(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v243,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v167 = 0;
      *(_OWORD *)&v244.fields._list = *(_OWORD *)&v243.fields._dictionary;
      v244.fields._current = v243.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v244,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v244,
          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v181 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v181 )
          sub_1BE4D28(0LL, v182);
        v184 = v181[1].klass;
        if ( !v184 )
          sub_1BE4D28(v181, v182);
        v185 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v184->_1.byval_arg.data,
                 (System_Int32_array *)v166,
                 v183);
        v186 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v186 )
          sub_1BE4D28(0LL, v187);
        v188 = v186[2].monitor;
        if ( !v188 )
          sub_1BE4D28(v186, v187);
        v189 = v188[5];
        v190 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v190 )
          sub_1BE4D28(0LL, v191);
        v192 = v190[2].monitor;
        if ( !v192 )
          sub_1BE4D28(v190, v191);
        v193 = v192[6];
        v194 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v194 )
          sub_1BE4D28(0LL, v195);
        v196 = v194[2].monitor;
        if ( !v196 )
          sub_1BE4D28(v194, v195);
        v197 = v196[14];
        v198 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BE4D18(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v198, Name, v185, v189, v167, v193, v197, 0LL);
        if ( !v241 )
          sub_1BE4D28(v199, v200);
        v207 = v241->fields._items;
        v208 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v241->fields._version;
        if ( !v207 )
          sub_1BE4D28(v199, v200);
        v209 = v241->fields._size;
        if ( (unsigned int)v209 >= v207->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v241,
            (Il2CppObject *)v198,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
        }
        else
        {
          v210 = &v207->obj.klass + v209;
          v241->fields._size = v209 + 1;
          v210[4] = (Il2CppClass *)v198;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v210 + 4), (int64_t)v198, v201, v202, v203, v204, v205, v206);
        }
        continue;
      }
      v168 = v244.fields._current;
      v169 = sub_1BE4B74(int___TypeInfo, 0LL);
      if ( !v168 )
        sub_1BE4D28(v169, v170);
      v171 = v168[1].monitor;
      if ( v171 )
      {
        if ( !v60 )
          sub_1BE4D28(v169, v170);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v60,
                                                               v171[4],
                                                               v171[5],
                                                               0LL);
LABEL_110:
        v173 = (__int64)DispValFromSkill;
      }
      else
      {
        v173 = v169;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v168[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v166 )
        sub_1BE4D28(DispValFromSkill, v170);
      v174 = *(_QWORD *)(v166 + 24);
      if ( v174 )
      {
        if ( (int)v174 >= 1 )
        {
          v175 = 0LL;
          v176 = (unsigned int)*(_QWORD *)(v166 + 24);
          do
          {
            if ( !v173 )
              sub_1BE4D28(DispValFromSkill, v170);
            if ( v175 >= *(unsigned int *)(v173 + 24) )
              sub_1BE4D30(DispValFromSkill, v170);
            v177 = v166 + 4 * v175;
            v178 = *(_DWORD *)(v173 + 32 + 4 * v175++);
            *(_DWORD *)(v177 + 32) += v178;
          }
          while ( v176 != v175 );
        }
      }
      else
      {
        v166 = v173;
      }
      v179 = v168[2].monitor;
      if ( !v179 )
        sub_1BE4D28(DispValFromSkill, v170);
      v180 = v179[20];
      if ( v180 > v167 )
        v167 = v180;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v246,
    (const MethodInfo_33AEA60 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v211 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v211 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v211->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v211->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v211);
      v211 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v213 = (Il2CppObject *)v211->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v213,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v215,
      v216,
      v217,
      v218,
      v219,
      v220);
  }
  v221 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v241,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_2F826FC *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v222 = ClassBoardBaseDialog___c_TypeInfo;
  v223 = v221;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v222 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v222->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v222->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v222);
      v222 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v225 = (Il2CppObject *)v222->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_1,
      v225,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v226 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v226->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v226->__9__28_1, (int64_t)_9__28_1, v227, v228, v229, v230, v231, v232);
  }
  v233 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v223,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_2F91F68 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v233, (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4B6A0D0 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A0D0 = 1;
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
    sub_1BE4D28(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__OpenItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
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
  __int64 v13; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  System_Int32_array *v30; // x21
  System_Int32_array *v31; // x22
  unsigned __int64 v32; // x24
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v36; // x23

  if ( (byte_4B6A0DA & 1) == 0 )
  {
    sub_1BE4ACC(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, closedAction);
    sub_1BE4ACC(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___, v6);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BE4ACC(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__, v11);
    sub_1BE4ACC(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, v12);
    byte_4B6A0DA = 1;
  }
  v13 = sub_1BE4D18(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = closedAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)closedAction, v22, v23, v24, v25, v26, v27);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v30 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)size);
    v31 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v32,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v30 )
          break;
        if ( v32 >= v30->max_length )
          goto LABEL_23;
        v30->m_Items[v32 + 1] = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v32,
                                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v31 )
          break;
        if ( v32 >= v31->max_length )
LABEL_23:
          sub_1BE4D30(Item, v15);
        v31->m_Items[++v32] = Item[2].fields._version;
        if ( size == v32 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1BE4D28(Item, v15);
    }
LABEL_17:
    v33 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1BE4AE4(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v34 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BE4D18(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v36,
      (Il2CppObject *)v13,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v30, v31, v36, 0, 0LL);
  }
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
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
  __int64 v14; // x8
  System_String_o *v15; // x0
  System_String_o *v16; // x29
  System_String_o *v17; // x0
  System_String_o *v18; // x28
  System_String_o *v19; // x0
  System_String_o *v20; // x27
  System_String_o *v21; // x0
  System_String_o *v22; // x26
  System_String_o *v23; // x0
  System_String_o *v24; // x25
  System_String_o *v25; // x0
  System_String_o *v26; // x24
  System_String_o *v27; // x0
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x20
  System_String_o *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x22
  System_String_o *v38; // x22
  System_String_o *v39; // x22
  System_String_o *v40; // x22
  System_String_o *v41; // x22
  unsigned __int64 v42; // x8
  System_String_o *v43; // x22
  unsigned __int64 v44; // x8
  System_String_o *v45; // x22
  unsigned __int64 v46; // x8
  System_String_o *v47; // x21
  unsigned __int64 v48; // x8
  int v50; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v51; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B6A0D7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_25475/*"{x"*/, funcVals);
    sub_1BE4ACC(&StringLiteral_25257/*"{"*/, v5);
    sub_1BE4ACC(&StringLiteral_25187/*"xx}"*/, v6);
    sub_1BE4ACC(&StringLiteral_25186/*"xxx}"*/, v7);
    sub_1BE4ACC(&StringLiteral_25501/*"}"*/, v8);
    sub_1BE4ACC(&StringLiteral_25478/*"{xxxx"*/, v9);
    sub_1BE4ACC(&StringLiteral_25476/*"{xx"*/, v10);
    sub_1BE4ACC(&StringLiteral_25185/*"xxxx}"*/, v11);
    sub_1BE4ACC(&StringLiteral_25188/*"x}"*/, v12);
    sub_1BE4ACC(&StringLiteral_25477/*"{xxx"*/, v13);
    byte_4B6A0D7 = 1;
  }
  v50 = 0;
  if ( funcVals )
  {
    v14 = *(_QWORD *)&funcVals->max_length;
    if ( v14 )
    {
      v51 = 0;
      if ( (int)v14 >= 1 )
      {
        do
        {
          v15 = System_Int32__ToString((int32_t)&v51, 0LL);
          v16 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25257/*"{"*/,
                  v15,
                  (System_String_o *)StringLiteral_25185/*"xxxx}"*/,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v51, 0LL);
          v18 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25257/*"{"*/,
                  v17,
                  (System_String_o *)StringLiteral_25186/*"xxx}"*/,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v51, 0LL);
          v20 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25257/*"{"*/,
                  v19,
                  (System_String_o *)StringLiteral_25187/*"xx}"*/,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v51, 0LL);
          v22 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25257/*"{"*/,
                  v21,
                  (System_String_o *)StringLiteral_25188/*"x}"*/,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v51, 0LL);
          v24 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25257/*"{"*/,
                  v23,
                  (System_String_o *)StringLiteral_25501/*"}"*/,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v51, 0LL);
          v26 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25475/*"{x"*/,
                  v25,
                  (System_String_o *)StringLiteral_25501/*"}"*/,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v51, 0LL);
          v28 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25476/*"{xx"*/,
                  v27,
                  (System_String_o *)StringLiteral_25501/*"}"*/,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v51, 0LL);
          v30 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25477/*"{xxx"*/,
                  v29,
                  (System_String_o *)StringLiteral_25501/*"}"*/,
                  0LL);
          v31 = System_Int32__ToString((int32_t)&v51, 0LL);
          v32 = System_String__Concat_62710068(
                  (System_String_o *)StringLiteral_25478/*"{xxxx"*/,
                  v31,
                  (System_String_o *)StringLiteral_25501/*"}"*/,
                  0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v34 = v32;
          v50 = 10000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !text )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(text, v16, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v37 = v32;
          v50 = 1000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v37 )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(v37, v18, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v38 = v32;
          v50 = 100 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(v38, v20, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v39 = v32;
          v50 = 10 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v39 )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(v39, v22, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v40 = v32;
          v35 = System_Int32__ToString((unsigned int)funcVals + 4 * v51 + 32, 0LL);
          if ( !v40 )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(v40, v24, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v41 = v32;
          v42 = 1717986919LL * funcVals->m_Items[v51 + 1];
          v50 = (v42 >> 63) + (SHIDWORD(v42) >> 2);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v41 )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(v41, v26, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v43 = v32;
          v44 = 1374389535LL * funcVals->m_Items[v51 + 1];
          v50 = (v44 >> 63) + (SHIDWORD(v44) >> 5);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v43 )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(v43, v28, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v45 = v32;
          v46 = 274877907LL * funcVals->m_Items[v51 + 1];
          v50 = (v46 >> 63) + (SHIDWORD(v46) >> 6);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v45 )
            goto LABEL_27;
          v32 = System_String__Replace_62718436(v45, v30, v35, 0LL);
          if ( v51 >= funcVals->max_length )
LABEL_26:
            sub_1BE4D30(v32, v33);
          v47 = v32;
          v48 = 1759218605LL * funcVals->m_Items[v51 + 1];
          v50 = (v48 >> 63) + (SHIDWORD(v48) >> 12);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v47 )
LABEL_27:
            sub_1BE4D28(v35, v36);
          text = System_String__Replace_62718436(v47, v34, v35, 0LL);
          ++v51;
        }
        while ( (signed int)v51 < (signed int)funcVals->max_length );
      }
    }
  }
  return text;
}


void __fastcall ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *itemIconComponentList; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6A0D5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_4B6A0D5 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      itemIconComponentList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v9.fields._current )
        sub_1BE4D28(0LL, v8);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v9.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1BE4D28(this, method);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBaseDialog__SetQpLabel(
        ClassBoardBaseDialog_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *SelfUserGame; // x0
  __int64 v12; // x1
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_String_o *v19; // x22
  System_Int32_c *v20; // x0
  int32_t *v21; // x1
  Il2CppObject *v22; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v31; // [xsp+18h] [xbp-48h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B6A0D3 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_3520/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v6);
    sub_1BE4ACC(&StringLiteral_3522/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v7);
    sub_1BE4ACC(&StringLiteral_3519/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v8);
    sub_1BE4ACC(&StringLiteral_3521/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_1BE4ACC(&StringLiteral_3517/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v10);
    byte_4B6A0D3 = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3519/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
    v20 = int_TypeInfo;
    v31 = needNum;
    v21 = &v31;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3520/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3522/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
    v20 = int_TypeInfo;
    v21 = &v32;
    v32 = needNum;
  }
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(v20, v21, v16, v17, v18);
  SelfUserGame = System_String__Format(v19, v22, 0LL);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3517/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v30 = klass;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v26, v27, v28);
  SelfUserGame = System_String__Format(v25, v29, 0LL);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0LL)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_1BE4D28(SelfUserGame, v12);
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
  UnityEngine_GameObject_o *effectObj; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v21; // x21
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v25; // w0
  IClassBoardSquareModel_c *v26; // x8
  int32_t v27; // w22
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  ClassBoardSquareEntity_o *v37; // x22
  UnityEngine_GameObject_o *v38; // x21
  const MethodInfo *v39; // x3
  float v40; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  UnityEngine_GameObject_o *v45; // x22
  Il2CppObject *Component_object; // x0
  __int64 v47; // x1
  IClassBoardSquareModel_c *v48; // x8
  System_String_o *monitor; // x25
  System_String_o *v50; // x26
  int32_t v51; // w24
  __int64 v52; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v53; // x23
  int32_t *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  float v58; // s10
  __int64 v59; // x1
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v62; // x0
  __int64 v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4B6A0D1 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v15);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    byte_4B6A0D1 = 1;
  }
  entity = 0LL;
  memset(&v65, 0, sizeof(v65));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_54;
  klass = squareModel->klass;
  v21 = (ClassBoardSquareMaster_o *)effectObj;
  v22 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C36AAC(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v25 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v26 = squareModel->klass;
  v27 = v25;
  v28 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_17;
    }
    v30 = (__int64)&v26->vtable[*v29].method;
  }
  else
  {
LABEL_17:
    v30 = sub_1C36AAC(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(
                                            squareModel,
                                            *(_QWORD *)(v30 + 8));
  if ( !v21 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v21, &entity, v27, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1BE4B74(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v37 = entity;
  v38 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1BE4C08(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v63 = sub_1BE4D4C(0LL);
      sub_1BE4BF4(v63, 0LL);
    }
  }
  if ( !LODWORD(v38[1].klass) )
    sub_1BE4D30(effectObj, squareModel);
  v38[1].monitor = v37;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v38[1].monitor, (int64_t)v37, v31, v32, v33, v34, v35, v36);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v38,
                                            0,
                                            0,
                                            v39);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v40 = 0.0;
  v65 = v64;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v65.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v43 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v45 = (UnityEngine_GameObject_o *)v43;
    if ( !v43 )
      sub_1BE4D28(0LL, v44);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v43,
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1BE4D28(Component_object, v47);
    v48 = squareModel->klass;
    v50 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v51 = (int32_t)current[2].monitor;
    v52 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
    v53 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
    {
      v54 = &v48->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v54 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v52;
        v54 += 4;
        if ( !v52 )
          goto LABEL_35;
      }
      v55 = (__int64)&v48->vtable[*v54 + 7].method;
    }
    else
    {
LABEL_35:
      v55 = sub_1C36AAC(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v56 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v55)(squareModel, *(_QWORD *)(v55 + 8));
    if ( !v53 )
      sub_1BE4D28(v56, v57);
    v58 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v53, v50, monitor, v51, v56, 0LL);
    GameObjectExtensions__SetParent_34492620(v45, this->fields.effectDetailParent, 0LL);
    if ( !byte_4B612E6 )
    {
      sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v59);
      byte_4B612E6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_34486896(v45, 0.0, -v40, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v45, 1, 0LL);
    v40 = v40 + v58;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v40 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( effectObj )
      {
        v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v62, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1BE4D28(effectObj, squareModel);
  }
}


bool __fastcall ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
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
  UnityEngine_Object_o *itemInfoLabel; // x21
  UILabel_o *v20; // x21
  System_String_o *itemListObj; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_object__o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x20
  _BOOL4 v38; // w27
  char v39; // w26
  _BOOL4 i; // w23
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x24
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t v58; // w23
  __int64 v59; // x9
  IClassBoardItemModel_c **v60; // x10
  __int64 v61; // x0
  int32_t v62; // w24
  Il2CppObject *Instance; // x0
  __int64 v64; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v66; // x1
  _BOOL8 isQP; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v75; // x1
  __int64 v76; // x1
  Il2CppObject *Component_object; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x25
  __int64 v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Collections_Generic_List_object__o *v87; // x0
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  Il2CppClass **v91; // x8
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4B6A0D2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_1BE4ACC(&IClassBoardItemModel_TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BE4ACC(&StringLiteral_3515/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_4B6A0D2 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v20 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3515/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v20 )
      goto LABEL_86;
    UILabel__set_text(v20, itemListObj, 0LL);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v24;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.itemIconComponentList,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v32 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C36AAC(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v37 = v35;
  v38 = 0;
  v39 = 1;
LABEL_24:
  for ( i = v38; ; i = 1 )
  {
    if ( !v37 )
      sub_1BE4D28(v35, v36);
    v41 = *(_QWORD *)v37;
    v38 = i;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_30;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_30:
      v44 = sub_1C36AAC(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v37, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v37;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v47 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_37;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_37:
      v48 = sub_1C36AAC(v37, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v37, *(_QWORD *)(v48 + 8));
    v51 = v49;
    if ( !v49 )
      sub_1BE4D28(0LL, v50);
    v52 = *(_QWORD *)v49;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v54 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_44;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_44:
      v55 = sub_1C36AAC(v49, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
    v57 = *(_QWORD *)v51;
    v58 = v56;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v60 = (IClassBoardItemModel_c **)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *(v60 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v59;
        v60 += 2;
        if ( !v59 )
          goto LABEL_50;
      }
      v61 = v57 + 16LL * (*(_DWORD *)v60 + 1) + 312;
    }
    else
    {
LABEL_50:
      v61 = sub_1C36AAC(v51, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v51, *(_QWORD *)(v61 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BE4D28(0LL, v64);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1BE4D28(0LL, v66);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v58, 0LL);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v39 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v71 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v71;
        if ( !v71 )
          sub_1BE4D28(0LL, v72);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v71, 0LL);
        if ( !itemIconListGrid )
          sub_1BE4D28(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1BE4D28(isQP, v68);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_4B612E1 )
      {
        sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v75);
        byte_4B612E1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_4B612E6 )
      {
        sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v76);
        byte_4B612E6 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v79 = Component_object;
      if ( !Component_object )
        sub_1BE4D28(0LL, v78);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v58, v62, 0LL);
      v87 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1BE4D28(0LL, v80);
      items = v87->fields._items;
      v89 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v87->fields._version;
      if ( !items )
        sub_1BE4D28(v87, v80);
      size = v87->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v87,
          v79,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &items->obj.klass + size;
        v87->fields._size = size + 1;
        v91[4] = (Il2CppClass *)v79;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v79, v81, v82, v83, v84, v85, v86);
      }
      v39 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v62, v69);
  }
  v92 = *(_QWORD *)v37;
  v93 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_78;
    }
    v95 = v92 + 16LL * *v94 + 312;
  }
  else
  {
LABEL_78:
    v95 = sub_1C36AAC(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v95)(v37, *(_QWORD *)(v95 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1BE4D28(itemListObj, v22);
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
  UnityEngine_GameObject_o *conditionListObj; // x0
  System_Collections_Generic_List_int__o *v20; // x21
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v25; // x20
  __int64 v26; // x22
  __int64 v27; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x20
  char v32; // w23
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  MasterMissionListViewItem_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  Il2CppObject *ComponentInChildren_object__49610264; // x0
  __int64 v40; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  UIGrid_o *v49; // x21
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Transform_o *v51; // x0
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4B6A0D4 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BE4ACC(&MasterMissionListViewItem_TypeInfo, v16);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    byte_4B6A0D4 = 1;
  }
  entity = 0LL;
  memset(&v53, 0, sizeof(v53));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v25 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v26 = 0LL;
        do
        {
          if ( (unsigned int)v26 >= (unsigned int)klass )
            sub_1BE4D30(conditionListObj, *(_QWORD *)&condData.fields.Type);
          v27 = *((_QWORD *)&v25[1].monitor + v26);
          if ( !v27 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v27 + 28) - 23) <= 1 )
          {
            if ( !v20 )
              goto LABEL_58;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v27 + 32);
            items = v20->fields._items;
            v29 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                condData.fields.Type,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              klass = v25[1].klass;
            }
            else
            {
              v20->fields._size = size + 1;
              items->m_Items[size + 1] = condData.fields.Type;
            }
          }
        }
        while ( (int)++v26 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v20 )
      goto LABEL_58;
    v21 = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_int__Add__;
    ++v20->fields._version;
    if ( !v21 )
      goto LABEL_58;
    v23 = v20->fields._size;
    if ( (unsigned int)v23 >= v21->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v20,
        SHIDWORD(v3),
        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = v23 + 1;
      v21->m_Items[v23 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v20 )
    goto LABEL_58;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v20,
    (const MethodInfo_35CFCD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = 1;
  v53 = v52;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v53,
            (const MethodInfo_335DC14 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    if ( !v31 )
      sub_1BE4D28(v33, v34);
    DataMasterBase_object__object__int___TryGetEntity(
      v31,
      &entity,
      v53.fields._current,
      (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v35 = entity;
    if ( entity )
    {
      v36 = (MasterMissionListViewItem_o *)sub_1BE4D18(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v36, (EventMissionEntity_o *)v35, 2, 0LL);
      if ( !v36 )
        sub_1BE4D28(v37, v38);
      ComponentInChildren_object__49610264 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._6_CheckMissionCond.method)(
                                                               v36,
                                                               v36->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v32 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1BE4D28(ComponentInChildren_object__49610264, v40);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1BE4D28(0LL, v43);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v47 = UnityEngine_Object__Instantiate_object__50195216(
                Parent,
                transform,
                (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v47 )
          sub_1BE4D28(0LL, v48);
        ComponentInChildren_object__49610264 = UnityEngine_Component__GetComponentInChildren_object__49610264(
                                                 (UnityEngine_Component_o *)v47,
                                                 (const MethodInfo_2F4FE18 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__49610264;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1BE4D28(ComponentInChildren_object__49610264, v40);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v36,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v49 = this->fields.conditionGrid;
      v50 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v51 = GameObjectExtensions__GetParent(v50, 0LL);
      if ( !v49 )
        sub_1BE4D28(v51, v51);
      UIGrid__AddChild(v49, v51, 0LL);
      v32 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v53,
    (const MethodInfo_335DC10 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1BE4D28(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4B6A0D8 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A0D8 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A0DD & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_4B6A0DD = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}