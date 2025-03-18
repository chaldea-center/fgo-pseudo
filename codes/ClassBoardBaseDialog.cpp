void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C25583 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C25583 = 1;
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

  if ( (byte_4C25580 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, callback);
    byte_4C25580 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
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

  if ( (byte_4C25582 & 1) == 0 )
  {
    sub_1C3B764(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__, closedAction);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4C25582 = 1;
  }
  v5 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v8);
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
  const MethodInfo *v73; // x5
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
  System_Collections_Generic_List_object__o *v84; // x29
  _BOOL8 v85; // x0
  __int64 v86; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v88; // x0
  __int64 v89; // x1
  Il2CppObject *v90; // x22
  __int64 v91; // x1
  System_Collections_Generic_List_object__o *v92; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v94; // x19
  System_Collections_Generic_List_object__o *v95; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v96; // x20
  const MethodInfo *v97; // x5
  __int64 v98; // x0
  __int64 v99; // x1
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Object_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  Il2CppClass **v109; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v124; // x22
  const MethodInfo *v125; // x7
  __int64 v126; // x0
  __int64 v127; // x1
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  Il2CppClass **v137; // x0
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass **v141; // x0
  System_String_o *v142; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v144; // w19
  int32_t v145; // w23
  int32_t v146; // w24
  int32_t v147; // w25
  System_String_o *v148; // x26
  const MethodInfo *v149; // x7
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  __int64 v153; // x8
  System_Collections_Generic_List_object__o *v154; // x0
  _BOOL8 v155; // x0
  __int64 v156; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v159; // x0
  __int64 v160; // x1
  Il2CppObject *v161; // x0
  __int64 v162; // x1
  _DWORD *v163; // x8
  __int64 v164; // x1
  Il2CppObject *v165; // x0
  __int64 v166; // x1
  Il2CppObject *v167; // x0
  __int64 v168; // x1
  Il2CppClass *v169; // x8
  __int64 v170; // x25
  int32_t v171; // w24
  Il2CppObject *v172; // x19
  __int64 v173; // x0
  __int64 v174; // x1
  _DWORD *v175; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v177; // x8
  __int64 v178; // x10
  unsigned __int64 v179; // x9
  __int64 v180; // x10
  unsigned __int64 v181; // x12
  int v182; // w13
  _DWORD *v183; // x8
  int32_t v184; // w8
  Il2CppObject *v185; // x0
  __int64 v186; // x1
  const MethodInfo *v187; // x2
  Il2CppClass *v188; // x8
  System_String_o *v189; // x25
  Il2CppObject *v190; // x0
  __int64 v191; // x1
  _DWORD *v192; // x8
  int32_t v193; // w26
  Il2CppObject *v194; // x0
  __int64 v195; // x1
  _DWORD *v196; // x8
  int32_t v197; // w20
  Il2CppObject *v198; // x0
  __int64 v199; // x1
  _DWORD *v200; // x8
  int32_t v201; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v202; // x22
  const MethodInfo *v203; // x7
  __int64 v204; // x0
  __int64 v205; // x1
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  Il2CppClass **v215; // x0
  ClassBoardBaseDialog___c_c *v216; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v218; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v226; // x0
  ClassBoardBaseDialog___c_c *v227; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v228; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v230; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v231; // x0
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v238; // x0
  int32_t v241; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v242; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v244; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v245; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v246; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v247; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v248; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v249; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v250; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v251; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v252; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v253; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v254; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v256; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4C2557D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_1C3B764(&Method_DataManager_GetMaster_FuncDispMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v11);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v12);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v13);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v14);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v15);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v16);
    sub_1C3B764(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v17);
    sub_1C3B764(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v18);
    sub_1C3B764(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1C3B764(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v20);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v21);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v23);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v25);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v30);
    sub_1C3B764(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v31);
    sub_1C3B764(&int___TypeInfo, v32);
    sub_1C3B764(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v33);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v34);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v35);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v36);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v38);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v39);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v40);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v41);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v42);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v43);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v44);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v45);
    sub_1C3B764(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v46);
    sub_1C3B764(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v47);
    sub_1C3B764(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v48);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1C3B764(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v50);
    sub_1C3B764(&Method_System_String_Join_int___, v51);
    sub_1C3B764(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v52);
    sub_1C3B764(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v53);
    sub_1C3B764(&ClassBoardBaseDialog___c_TypeInfo, v54);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v55);
    sub_1C3B764(&StringLiteral_1/*""*/, v56);
    byte_4C2557D = 1;
  }
  v256 = 0LL;
  entity = 0LL;
  v254 = 0LL;
  entitys = 0LL;
  memset(&v253, 0, sizeof(v253));
  v252 = 0LL;
  v250 = 0LL;
  memset(&v251, 0, sizeof(v251));
  memset(&v249, 0, sizeof(v249));
  v57 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v57;
  v246 = v57;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v242 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v245 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v245,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v63 = 0;
    v247 = (FuncDispMaster_o *)v61;
    v241 = v4;
    v244 = openedSquareArray;
    do
    {
      if ( v63 >= (unsigned int)max_length )
        sub_1C3B9C8(IsPassive, v59);
      v64 = openedSquareArray->m_Items[v63];
      v65 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v65,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v65;
      if ( !v64 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v64, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v64, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v242;
          if ( !v242 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v242,
                                        &entitys,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v84 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v84,
              (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v248,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v253.fields._list = *(_OWORD *)&v248.fields._dictionary;
            v253.fields._current = v248.fields._current.fields.key;
            while ( 1 )
            {
              v85 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v253,
                      (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v61 = (Il2CppObject *)v247;
              if ( !v85 )
                break;
              current = v253.fields._current;
              if ( !v253.fields._current )
                sub_1C3B9C0(v85, v86);
              if ( !v247 )
                sub_1C3B9C0(v85, v86);
              if ( FuncDispMaster__IsContainFuncIds(
                     v247,
                     &v252,
                     (System_Int32_array *)v253.fields._current[3].klass,
                     0LL) )
              {
                v88 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_3095570 *)Method_System_String_Join_int___);
                if ( !v84 )
                  sub_1C3B9C0(v88, v89);
                v90 = v88;
                if ( !System_Collections_Generic_List_object___Contains(
                        v84,
                        v88,
                        (const MethodInfo_368BFFC *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v245 )
                    sub_1C3B9C0(0LL, v91);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v245,
                          v90,
                          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v92 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v92,
                      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v245,
                      v90,
                      (Il2CppObject *)v92,
                      (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v245,
                           v90,
                           (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v94 = v252;
                  v95 = (System_Collections_Generic_List_object__o *)Item;
                  v96 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v96,
                    v94,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v64,
                    v97);
                  if ( !v95 )
                    sub_1C3B9C0(v98, v99);
                  items = v95->fields._items;
                  v107 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v95->fields._version;
                  if ( !items )
                    sub_1C3B9C0(v98, v99);
                  size = v95->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v95,
                      (Il2CppObject *)v96,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v109 = &items->obj.klass + size;
                    v95->fields._size = size + 1;
                    v109[4] = (Il2CppClass *)v96;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v109 + 4),
                      (int64_t)v96,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105);
                  }
                  v138 = v84->fields._items;
                  v139 = Method_System_Collections_Generic_List_string__Add__;
                  ++v84->fields._version;
                  if ( !v138 )
                    sub_1C3B9C0(v110, v111);
                  v140 = v84->fields._size;
                  if ( (unsigned int)v140 >= v138->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v84,
                      v90,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v141 = &v138->obj.klass + v140;
                    v84->fields._size = v140 + 1;
                    v141[4] = (Il2CppClass *)v90;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v141 + 4),
                      (int64_t)v90,
                      v112,
                      v113,
                      v114,
                      v115,
                      v116,
                      v117);
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
                v124 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v124,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v125);
                if ( !v246 )
                  sub_1C3B9C0(v126, v127);
                v134 = v246->fields._items;
                v135 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v246->fields._version;
                if ( !v134 )
                  sub_1C3B9C0(v126, v127);
                v136 = v246->fields._size;
                if ( (unsigned int)v136 >= v134->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v246,
                    (Il2CppObject *)v124,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
                }
                else
                {
                  v137 = &v134->obj.klass + v136;
                  v246->fields._size = v136 + 1;
                  v137[4] = (Il2CppClass *)v124;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)(v137 + 4),
                    (int64_t)v124,
                    v128,
                    v129,
                    v130,
                    v131,
                    v132,
                    v133);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v253,
              (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v241;
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
                                      (const MethodInfo_329AE94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v60,
                                        &v256,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v256;
            if ( !v256 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v256, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v256 || !v61 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v61,
                                            &v254,
                                            v256->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v256 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v256->fields.funcId,
                                              (const MethodInfo_3095570 *)Method_System_String_Join_int___);
                if ( !v245 )
                  goto LABEL_157;
                v66 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v245,
                        IsPassive,
                        (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v67 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v67,
                    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v245,
                    v66,
                    (Il2CppObject *)v67,
                    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v68 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v245,
                        v66,
                        (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v69 = v254;
                v70 = v256;
                v71 = (System_Collections_Generic_List_object__o *)v68;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v72, v69, v70, 0LL, v64, v73);
                if ( !v71 )
                  goto LABEL_157;
                v80 = v71->fields._items;
                v81 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v71->fields._version;
                if ( !v80 )
                  goto LABEL_157;
                v82 = v71->fields._size;
                if ( (unsigned int)v82 >= v80->max_length )
                {
                  v153 = v81[4];
                  v154 = v71;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v154,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v153 + 192) + 112LL));
                  goto LABEL_61;
                }
                v83 = &v80->obj.klass + v82;
                v71->fields._size = v82 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v142 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v144 = v64->fields.priority;
                v145 = v64->fields.id;
                v146 = v64->fields.iconId;
                v147 = v64->fields.skillType;
                v148 = EffectExplanation;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v72,
                  v142,
                  v148,
                  v145,
                  v144,
                  v146,
                  v147,
                  v149);
                if ( !v246 )
                  goto LABEL_157;
                v150 = v246->fields._items;
                v151 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v246->fields._version;
                if ( !v150 )
                  goto LABEL_157;
                v152 = v246->fields._size;
                v61 = (Il2CppObject *)v247;
                if ( (unsigned int)v152 >= v150->max_length )
                {
                  v153 = v151[4];
                  v154 = v246;
                  goto LABEL_72;
                }
                v83 = &v150->obj.klass + v152;
                v246->fields._size = v152 + 1;
              }
              v83[4] = (Il2CppClass *)v72;
              sub_1C3B708((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)v72, v74, v75, v76, v77, v78, v79);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v244;
      ++v63;
      max_length = v244->max_length;
    }
    while ( v63 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v245;
  if ( !v245 )
LABEL_157:
    sub_1C3B9C0(IsPassive, v59);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v248,
    v245,
    (const MethodInfo_3355B98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v251 = v248;
  while ( 1 )
  {
    v155 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v251,
             (const MethodInfo_34515CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v155 )
      break;
    value = v251.fields._current.fields.value;
    if ( !v251.fields._current.fields.value )
      sub_1C3B9C0(v155, v156);
    if ( SLODWORD(v251.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v159 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v251.fields._current.fields.value,
               0,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v159 )
        sub_1C3B9C0(0LL, v160);
      if ( v159[1].monitor )
      {
        v161 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v161 )
          sub_1C3B9C0(0LL, v162);
        v163 = v161[1].monitor;
        if ( !v163 )
          sub_1C3B9C0(v161, v162);
        if ( !Master_object )
          sub_1C3B9C0(0LL, v162);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v250,
               v163[4],
               (const MethodInfo_329AE94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v250 )
            sub_1C3B9C0(0LL, v164);
          Name = SkillEntity__getName((SkillEntity_o *)v250, 0LL);
        }
      }
      else
      {
        v165 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v165 )
          sub_1C3B9C0(0LL, v166);
        if ( v165[2].klass )
        {
          v167 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v167 )
            sub_1C3B9C0(0LL, v168);
          v169 = v167[2].klass;
          if ( !v169 )
            sub_1C3B9C0(v167, v168);
          Name = (System_String_o *)v169->_1.byval_arg.data;
        }
      }
      v170 = sub_1C3B80C(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v248,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v171 = 0;
      *(_OWORD *)&v249.fields._list = *(_OWORD *)&v248.fields._dictionary;
      v249.fields._current = v248.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v249,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v249,
          (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v185 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v185 )
          sub_1C3B9C0(0LL, v186);
        v188 = v185[1].klass;
        if ( !v188 )
          sub_1C3B9C0(v185, v186);
        v189 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v188->_1.byval_arg.data,
                 (System_Int32_array *)v170,
                 v187);
        v190 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v190 )
          sub_1C3B9C0(0LL, v191);
        v192 = v190[2].monitor;
        if ( !v192 )
          sub_1C3B9C0(v190, v191);
        v193 = v192[5];
        v194 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v194 )
          sub_1C3B9C0(0LL, v195);
        v196 = v194[2].monitor;
        if ( !v196 )
          sub_1C3B9C0(v194, v195);
        v197 = v196[6];
        v198 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v198 )
          sub_1C3B9C0(0LL, v199);
        v200 = v198[2].monitor;
        if ( !v200 )
          sub_1C3B9C0(v198, v199);
        v201 = v200[14];
        v202 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C3B9B0(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v202,
          Name,
          v189,
          v193,
          v171,
          v197,
          v201,
          v203);
        if ( !v246 )
          sub_1C3B9C0(v204, v205);
        v212 = v246->fields._items;
        v213 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v246->fields._version;
        if ( !v212 )
          sub_1C3B9C0(v204, v205);
        v214 = v246->fields._size;
        if ( (unsigned int)v214 >= v212->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v246,
            (Il2CppObject *)v202,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
        }
        else
        {
          v215 = &v212->obj.klass + v214;
          v246->fields._size = v214 + 1;
          v215[4] = (Il2CppClass *)v202;
          sub_1C3B708((PartyOrganizationUtility_o *)(v215 + 4), (int64_t)v202, v206, v207, v208, v209, v210, v211);
        }
        continue;
      }
      v172 = v249.fields._current;
      v173 = sub_1C3B80C(int___TypeInfo, 0LL);
      if ( !v172 )
        sub_1C3B9C0(v173, v174);
      v175 = v172[1].monitor;
      if ( v175 )
      {
        if ( !v60 )
          sub_1C3B9C0(v173, v174);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v60,
                                                               v175[4],
                                                               v175[5],
                                                               0LL);
LABEL_110:
        v177 = (__int64)DispValFromSkill;
      }
      else
      {
        v177 = v173;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v172[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v170 )
        sub_1C3B9C0(DispValFromSkill, v174);
      v178 = *(_QWORD *)(v170 + 24);
      if ( v178 )
      {
        if ( (int)v178 >= 1 )
        {
          v179 = 0LL;
          v180 = (unsigned int)*(_QWORD *)(v170 + 24);
          do
          {
            if ( !v177 )
              sub_1C3B9C0(DispValFromSkill, v174);
            if ( v179 >= *(unsigned int *)(v177 + 24) )
              sub_1C3B9C8(DispValFromSkill, v174);
            v181 = v170 + 4 * v179;
            v182 = *(_DWORD *)(v177 + 32 + 4 * v179++);
            *(_DWORD *)(v181 + 32) += v182;
          }
          while ( v180 != v179 );
        }
      }
      else
      {
        v170 = v177;
      }
      v183 = v172[2].monitor;
      if ( !v183 )
        sub_1C3B9C0(DispValFromSkill, v174);
      v184 = v183[20];
      if ( v184 > v171 )
        v171 = v184;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v251,
    (const MethodInfo_34516EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v216 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v216 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v216->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v216->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v216);
      v216 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v218 = (Il2CppObject *)v216->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v218,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v220,
      v221,
      v222,
      v223,
      v224,
      v225);
  }
  v226 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v246,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v227 = ClassBoardBaseDialog___c_TypeInfo;
  v228 = v226;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v227 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v227->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v227->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v227);
      v227 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v230 = (Il2CppObject *)v227->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_1,
      v230,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v231 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v231->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v231->__9__28_1, (int64_t)_9__28_1, v232, v233, v234, v235, v236, v237);
  }
  v238 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v228,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_302A15C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v238, (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4C25577 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25577 = 1;
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
    sub_1C3B9C0(gameObject, v4);
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

  if ( (byte_4C25581 & 1) == 0 )
  {
    sub_1C3B764(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, closedAction);
    sub_1C3B764(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___, v6);
    sub_1C3B764(&int___TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__, v11);
    sub_1C3B764(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, v12);
    byte_4C25581 = 1;
  }
  v13 = sub_1C3B9B0(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = closedAction;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)closedAction, v22, v23, v24, v25, v26, v27);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v30 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, (unsigned int)size);
    v31 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, (unsigned int)size);
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
                                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
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
                                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v31 )
          break;
        if ( v32 >= v31->max_length )
LABEL_23:
          sub_1C3B9C8(Item, v15);
        v31->m_Items[++v32] = Item[2].fields._version;
        if ( size == v32 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C3B9C0(Item, v15);
    }
LABEL_17:
    v33 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1C3B77C(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v34 = (System_Reflection_MethodBase_o *)sub_1C3B748(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C3B9B0(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
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

  if ( (byte_4C2557E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_25646, funcVals);
    sub_1C3B764(&StringLiteral_25427, v5);
    sub_1C3B764(&StringLiteral_25357, v6);
    sub_1C3B764(&StringLiteral_25356, v7);
    sub_1C3B764(&StringLiteral_25673, v8);
    sub_1C3B764(&StringLiteral_25649, v9);
    sub_1C3B764(&StringLiteral_25647, v10);
    sub_1C3B764(&StringLiteral_25355, v11);
    sub_1C3B764(&StringLiteral_25358, v12);
    sub_1C3B764(&StringLiteral_25648, v13);
    byte_4C2557E = 1;
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
          v16 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v15,
                  (System_String_o *)StringLiteral_25355,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v51, 0LL);
          v18 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v17,
                  (System_String_o *)StringLiteral_25356,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v51, 0LL);
          v20 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v19,
                  (System_String_o *)StringLiteral_25357,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v51, 0LL);
          v22 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v21,
                  (System_String_o *)StringLiteral_25358,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v51, 0LL);
          v24 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25427,
                  v23,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v51, 0LL);
          v26 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25646,
                  v25,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v51, 0LL);
          v28 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25647,
                  v27,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v51, 0LL);
          v30 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25648,
                  v29,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          v31 = System_Int32__ToString((int32_t)&v51, 0LL);
          v32 = System_String__Concat_63379872(
                  (System_String_o *)StringLiteral_25649,
                  v31,
                  (System_String_o *)StringLiteral_25673,
                  0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v34 = v32;
          v50 = 10000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !text )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(text, v16, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v37 = v32;
          v50 = 1000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v37 )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(v37, v18, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v38 = v32;
          v50 = 100 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(v38, v20, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v39 = v32;
          v50 = 10 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v39 )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(v39, v22, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v40 = v32;
          v35 = System_Int32__ToString((unsigned int)funcVals + 4 * v51 + 32, 0LL);
          if ( !v40 )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(v40, v24, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v41 = v32;
          v42 = 1717986919LL * funcVals->m_Items[v51 + 1];
          v50 = (v42 >> 63) + (SHIDWORD(v42) >> 2);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v41 )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(v41, v26, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v43 = v32;
          v44 = 1374389535LL * funcVals->m_Items[v51 + 1];
          v50 = (v44 >> 63) + (SHIDWORD(v44) >> 5);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v43 )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(v43, v28, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v45 = v32;
          v46 = 274877907LL * funcVals->m_Items[v51 + 1];
          v50 = (v46 >> 63) + (SHIDWORD(v46) >> 6);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v45 )
            goto LABEL_27;
          v32 = System_String__Replace_63388240(v45, v30, v35, 0LL);
          if ( v51 >= funcVals->max_length )
LABEL_26:
            sub_1C3B9C8(v32, v33);
          v47 = v32;
          v48 = 1759218605LL * funcVals->m_Items[v51 + 1];
          v50 = (v48 >> 63) + (SHIDWORD(v48) >> 12);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v47 )
LABEL_27:
            sub_1C3B9C0(v35, v36);
          text = System_String__Replace_63388240(v47, v34, v35, 0LL);
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
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2557C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_4C2557C = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      itemIconComponentList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1C3B9C0(v8, v9);
      LOBYTE(v10.fields._current[6].klass) = 1;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C2557A & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_3523/*"COIN_ROOM_MAX_NUM"*/, v6);
    sub_1C3B764(&StringLiteral_3525/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, v7);
    sub_1C3B764(&StringLiteral_3522/*"COIN_ROOM_MAX"*/, v8);
    sub_1C3B764(&StringLiteral_3524/*"COIN_ROOM_RELEASE_QUEST_ID"*/, v9);
    sub_1C3B764(&StringLiteral_3520/*"COIN_ROOM_LOBBY_INFO"*/, v10);
    byte_4C2557A = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3522/*"COIN_ROOM_MAX"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3524/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
    v20 = int_TypeInfo;
    v31 = needNum;
    v21 = &v31;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"COIN_ROOM_MAX_NUM"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"COIN_ROOM_SELECTED_TARGET_NUM"*/, 0LL);
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
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3520/*"COIN_ROOM_LOBBY_INFO"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3524/*"COIN_ROOM_RELEASE_QUEST_ID"*/, 0LL);
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
    sub_1C3B9C0(SelfUserGame, v12);
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
  const MethodInfo *v58; // x5
  float v59; // s10
  __int64 v60; // x1
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v63; // x0
  __int64 v64; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4C25578 & 1) == 0 )
  {
    sub_1C3B764(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_1C3B764(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_1C3B764(&IClassBoardSquareModel_TypeInfo, v15);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    byte_4C25578 = 1;
  }
  entity = 0LL;
  memset(&v66, 0, sizeof(v66));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
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
    p_method = sub_1C8D744(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
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
    v30 = sub_1C8D744(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(
                                            squareModel,
                                            *(_QWORD *)(v30 + 8));
  if ( !v21 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v21, &entity, v27, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1C3B80C(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v37 = entity;
  v38 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1C3B8A0(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v64 = sub_1C3B9E4(0LL);
      sub_1C3B88C(v64, 0LL);
    }
  }
  if ( !LODWORD(v38[1].klass) )
    sub_1C3B9C8(effectObj, squareModel);
  v38[1].monitor = v37;
  sub_1C3B708((PartyOrganizationUtility_o *)&v38[1].monitor, (int64_t)v37, v31, v32, v33, v34, v35, v36);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v38,
                                            0,
                                            0,
                                            v39);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v40 = 0.0;
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v66.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v43 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v45 = (UnityEngine_GameObject_o *)v43;
    if ( !v43 )
      sub_1C3B9C0(0LL, v44);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v43,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1C3B9C0(Component_object, v47);
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
      v55 = sub_1C8D744(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v56 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v55)(squareModel, *(_QWORD *)(v55 + 8));
    if ( !v53 )
      sub_1C3B9C0(v56, v57);
    v59 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v53, v50, monitor, v51, v56, v58);
    GameObjectExtensions__SetParent_34969220(v45, this->fields.effectDetailParent, 0LL);
    if ( !byte_4C1C516 )
    {
      sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v60);
      byte_4C1C516 = 1;
    }
    GameObjectExtensions__SetLocalScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_34963496(v45, 0.0, -v40, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v45, 1, 0LL);
    v40 = v40 + v59;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
        v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v63, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1C3B9C0(effectObj, squareModel);
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
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x25
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_List_object__o *v88; // x0
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x8
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4C25579 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_1C3B764(&IClassBoardItemModel_TypeInfo, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C3B764(&StringLiteral_3518/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, v18);
    byte_4C25579 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v20 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3518/*"COIN_ROOM_CONFIRM_DIALOG_TITLE"*/, 0LL);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v24;
  sub_1C3B708(
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
    p_method = sub_1C8D744(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
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
      sub_1C3B9C0(v35, v36);
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
      v44 = sub_1C8D744(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v48 = sub_1C8D744(v37, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v37, *(_QWORD *)(v48 + 8));
    v51 = v49;
    if ( !v49 )
      sub_1C3B9C0(0LL, v50);
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
      v55 = sub_1C8D744(v49, IClassBoardItemModel_TypeInfo, 0LL);
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
      v61 = sub_1C8D744(v51, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v51, *(_QWORD *)(v61 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C3B9C0(0LL, v64);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1C3B9C0(0LL, v66);
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
                (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v71;
        if ( !v71 )
          sub_1C3B9C0(0LL, v72);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v71, 0LL);
        if ( !itemIconListGrid )
          sub_1C3B9C0(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1C3B9C0(isQP, v68);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_4C1C511 )
      {
        sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v75);
        byte_4C1C511 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_4C1C516 )
      {
        sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v76);
        byte_4C1C516 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v80 = Component_object;
      if ( !Component_object )
        sub_1C3B9C0(0LL, v78);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v58, v62, v79);
      v88 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1C3B9C0(0LL, v81);
      items = v88->fields._items;
      v90 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v88->fields._version;
      if ( !items )
        sub_1C3B9C0(v88, v81);
      size = v88->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v88,
          v80,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v92 = &items->obj.klass + size;
        v88->fields._size = size + 1;
        v92[4] = (Il2CppClass *)v80;
        sub_1C3B708((PartyOrganizationUtility_o *)(v92 + 4), (int64_t)v80, v82, v83, v84, v85, v86, v87);
      }
      v39 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v62, v69);
  }
  v93 = *(_QWORD *)v37;
  v94 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
    {
      --v94;
      v95 += 4;
      if ( !v94 )
        goto LABEL_78;
    }
    v96 = v93 + 16LL * *v95 + 312;
  }
  else
  {
LABEL_78:
    v96 = sub_1C8D744(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v96)(v37, *(_QWORD *)(v96 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1C3B9C0(itemListObj, v22);
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
  Il2CppObject *ComponentInChildren_object__50228848; // x0
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
  if ( (byte_4C2557B & 1) == 0 )
  {
    sub_1C3B764(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_1C3B764(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1C3B764(&MasterMissionListViewItem_TypeInfo, v16);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    byte_4C2557B = 1;
  }
  entity = 0LL;
  memset(&v53, 0, sizeof(v53));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
            sub_1C3B9C8(conditionListObj, *(_QWORD *)&condData.fields.Type);
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
                *(const MethodInfo_366EC48 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
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
        *(const MethodInfo_366EC48 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = v23 + 1;
      v21->m_Items[v23 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v20 )
    goto LABEL_58;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v20,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = 1;
  v53 = v52;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v53,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    if ( !v31 )
      sub_1C3B9C0(v33, v34);
    DataMasterBase_object__object__int___TryGetEntity(
      v31,
      &entity,
      v53.fields._current,
      (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v35 = entity;
    if ( entity )
    {
      v36 = (MasterMissionListViewItem_o *)sub_1C3B9B0(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v36, (EventMissionEntity_o *)v35, 2, 0LL);
      if ( !v36 )
        sub_1C3B9C0(v37, v38);
      ComponentInChildren_object__50228848 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._6_CheckMissionCond.method)(
                                                               v36,
                                                               v36->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v32 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1C3B9C0(ComponentInChildren_object__50228848, v40);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1C3B9C0(0LL, v43);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v47 = UnityEngine_Object__Instantiate_object__50818788(
                Parent,
                transform,
                (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v47 )
          sub_1C3B9C0(0LL, v48);
        ComponentInChildren_object__50228848 = UnityEngine_Component__GetComponentInChildren_object__50228848(
                                                 (UnityEngine_Component_o *)v47,
                                                 (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__50228848;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1C3B9C0(ComponentInChildren_object__50228848, v40);
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
        sub_1C3B9C0(v51, v51);
      UIGrid__AddChild(v49, v51, 0LL);
      v32 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v53,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1C3B9C0(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4C2557F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C2557F = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C25584 & 1) == 0 )
  {
    sub_1C3B764(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_4C25584 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v2;
  sub_1C3B708(
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}