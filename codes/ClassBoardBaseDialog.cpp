void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1965F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1965F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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

  if ( (byte_4B1965C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callback, method);
    byte_4B1965C = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1965E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__, closedAction, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B1965E = 1;
  }
  v6 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  System_Collections_Generic_List_object__o *v108; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v110; // x1
  Il2CppObject *v111; // x21
  Il2CppObject *v112; // x24
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x2
  __int64 v117; // x3
  signed int max_length; // w8
  signed int v119; // w27
  ClassBoardSquareEntity_o *v120; // x28
  System_Collections_Generic_List_object__o *v121; // x19
  Il2CppObject *v122; // x20
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  System_Collections_Generic_List_object__o *v126; // x19
  Il2CppObject *v127; // x0
  FuncDispEntity_o *v128; // x19
  SkillLvEntity_o *v129; // x23
  System_Collections_Generic_List_object__o *v130; // x22
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v134; // x20
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  System_Collections_Generic_List_object__o *v145; // x29
  _BOOL8 v146; // x0
  __int64 v147; // x1
  Il2CppObject *current; // x26
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  Il2CppObject *v154; // x22
  __int64 v155; // x1
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  System_Collections_Generic_List_object__o *v159; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v161; // x19
  System_Collections_Generic_List_object__o *v162; // x23
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x3
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v166; // x20
  __int64 v167; // x0
  __int64 v168; // x1
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  struct System_Object_array *items; // x8
  _QWORD *v176; // x9
  __int64 size; // x10
  Il2CppClass **v178; // x0
  __int64 v179; // x0
  __int64 v180; // x1
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v193; // x22
  __int64 v194; // x0
  __int64 v195; // x1
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  Il2CppClass **v205; // x0
  struct System_Object_array *v206; // x8
  _QWORD *v207; // x9
  __int64 v208; // x10
  Il2CppClass **v209; // x0
  System_String_o *v210; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v212; // w19
  int32_t v213; // w23
  int32_t v214; // w24
  int32_t v215; // w25
  System_String_o *v216; // x26
  __int64 v217; // x1
  __int64 v218; // x2
  __int64 v219; // x3
  struct System_Object_array *v220; // x8
  _QWORD *v221; // x9
  __int64 v222; // x10
  __int64 v223; // x8
  System_Collections_Generic_List_object__o *v224; // x0
  _BOOL8 v225; // x0
  __int64 v226; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v229; // x0
  __int64 v230; // x1
  Il2CppObject *v231; // x0
  __int64 v232; // x1
  _DWORD *v233; // x8
  __int64 v234; // x1
  Il2CppObject *v235; // x0
  __int64 v236; // x1
  Il2CppObject *v237; // x0
  __int64 v238; // x1
  Il2CppClass *v239; // x8
  __int64 v240; // x25
  int32_t v241; // w24
  Il2CppObject *v242; // x19
  __int64 v243; // x0
  __int64 v244; // x1
  _DWORD *v245; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v247; // x8
  __int64 v248; // x10
  unsigned __int64 v249; // x9
  __int64 v250; // x10
  unsigned __int64 v251; // x12
  int v252; // w13
  _DWORD *v253; // x8
  int32_t v254; // w8
  Il2CppObject *v255; // x0
  __int64 v256; // x1
  const MethodInfo *v257; // x2
  Il2CppClass *v258; // x8
  System_String_o *v259; // x25
  Il2CppObject *v260; // x0
  __int64 v261; // x1
  _DWORD *v262; // x8
  int32_t v263; // w26
  Il2CppObject *v264; // x0
  __int64 v265; // x1
  _DWORD *v266; // x8
  int32_t v267; // w20
  Il2CppObject *v268; // x0
  __int64 v269; // x1
  __int64 v270; // x2
  __int64 v271; // x3
  _DWORD *v272; // x8
  int32_t v273; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v274; // x22
  __int64 v275; // x0
  __int64 v276; // x1
  int64_t v277; // x2
  int32_t v278; // w3
  System_String_o *v279; // x4
  BattleSetupInfo_o *v280; // x5
  FollowerInfo_o *v281; // x6
  PartyListViewItem_o *v282; // x7
  struct System_Object_array *v283; // x8
  _QWORD *v284; // x9
  __int64 v285; // x10
  Il2CppClass **v286; // x0
  __int64 v287; // x1
  __int64 v288; // x2
  __int64 v289; // x3
  ClassBoardBaseDialog___c_c *v290; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v292; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int64_t v294; // x2
  int32_t v295; // w3
  System_String_o *v296; // x4
  BattleSetupInfo_o *v297; // x5
  FollowerInfo_o *v298; // x6
  PartyListViewItem_o *v299; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v300; // x0
  __int64 v301; // x1
  __int64 v302; // x2
  __int64 v303; // x3
  ClassBoardBaseDialog___c_c *v304; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v305; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v307; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v308; // x0
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v315; // x0
  int32_t v318; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v319; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v321; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v322; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v323; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v324; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v325; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v326; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v327; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v328; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v329; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v330; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v331; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v333; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4B19659 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___,
      *(_QWORD *)&dispType,
      ignoreTurnOrCountPassive);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FuncDispMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v26,
      v27);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v28,
      v29);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v30,
      v31);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v32,
      v33);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v34,
      v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v36,
      v37);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v38,
      v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v40, v41);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v42,
      v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v44, v45);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v46,
      v47);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v48,
      v49);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__,
      v50,
      v51);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v52,
      v53);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v54, v55);
    sub_1BCA7E0(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v56, v57);
    sub_1BCA7E0(&int___TypeInfo, v58, v59);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v60,
      v61);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v62,
      v63);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v64,
      v65);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v66, v67);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v68, v69);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v70, v71);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v72,
      v73);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v74,
      v75);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v76,
      v77);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v78, v79);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v80, v81);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v82,
      v83);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v84,
      v85);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v86,
      v87);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v88,
      v89);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v90, v91);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v92, v93);
    sub_1BCA7E0(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v94, v95);
    sub_1BCA7E0(&Method_System_String_Join_int___, v96, v97);
    sub_1BCA7E0(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v98, v99);
    sub_1BCA7E0(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v100, v101);
    sub_1BCA7E0(&ClassBoardBaseDialog___c_TypeInfo, v102, v103);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v104, v105);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v106, v107);
    byte_4B19659 = 1;
  }
  v333 = 0LL;
  entity = 0LL;
  v331 = 0LL;
  entitys = 0LL;
  memset(&v330, 0, sizeof(v330));
  v329 = 0LL;
  v327 = 0LL;
  memset(&v328, 0, sizeof(v328));
  memset(&v326, 0, sizeof(v326));
  v108 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                        *(_QWORD *)&dispType,
                                                        ignoreTurnOrCountPassive,
                                                        method);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v108;
  v323 = v108;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v110);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v111 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v319 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v112 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FuncDispMaster___);
  v322 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                      v113,
                                                                      v114,
                                                                      v115);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v322,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v119 = 0;
    v324 = (FuncDispMaster_o *)v112;
    v318 = v4;
    v321 = openedSquareArray;
    do
    {
      if ( v119 >= (unsigned int)max_length )
        sub_1BCAA44(IsPassive, v110);
      v120 = openedSquareArray->m_Items[v119];
      v121 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo,
                                                            v110,
                                                            v116,
                                                            v117);
      System_Collections_Generic_List_object____ctor(
        v121,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v121;
      if ( !v120 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v120, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v120, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v319;
          if ( !v319 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v319,
                                        &entitys,
                                        v120->fields.targetId,
                                        v120->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v145 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                  v110,
                                                                  v116,
                                                                  v117);
            System_Collections_Generic_List_object____ctor(
              v145,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v325,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v330.fields._list = *(_OWORD *)&v325.fields._dictionary;
            v330.fields._current = v325.fields._current.fields.key;
            while ( 1 )
            {
              v146 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v330,
                       (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v112 = (Il2CppObject *)v324;
              if ( !v146 )
                break;
              current = v330.fields._current;
              if ( !v330.fields._current )
                sub_1BCAA3C(v146, v147);
              if ( !v324 )
                sub_1BCAA3C(v146, v147);
              if ( FuncDispMaster__IsContainFuncIds(
                     v324,
                     &v329,
                     (System_Int32_array *)v330.fields._current[3].klass,
                     0LL) )
              {
                v152 = (Il2CppObject *)System_String__Join_int_(
                                         (System_String_o *)StringLiteral_863/*","*/,
                                         (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                         (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
                if ( !v145 )
                  sub_1BCAA3C(v152, v153);
                v154 = v152;
                if ( !System_Collections_Generic_List_object___Contains(
                        v145,
                        v152,
                        (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v322 )
                    sub_1BCAA3C(0LL, v155);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v322,
                          v154,
                          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v159 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                          System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                          v156,
                                                                          v157,
                                                                          v158);
                    System_Collections_Generic_List_object____ctor(
                      v159,
                      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v322,
                      v154,
                      (Il2CppObject *)v159,
                      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v322,
                           v154,
                           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v161 = v329;
                  v162 = (System_Collections_Generic_List_object__o *)Item;
                  v166 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCAA2C(
                                                                                                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                                v163,
                                                                                                v164,
                                                                                                v165);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v166,
                    v161,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v120,
                    0LL);
                  if ( !v162 )
                    sub_1BCAA3C(v167, v168);
                  items = v162->fields._items;
                  v176 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v162->fields._version;
                  if ( !items )
                    sub_1BCAA3C(v167, v168);
                  size = v162->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v162,
                      (Il2CppObject *)v166,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v178 = &items->obj.klass + size;
                    v162->fields._size = size + 1;
                    v178[4] = (Il2CppClass *)v166;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v178 + 4),
                      (int64_t)v166,
                      v169,
                      v170,
                      v171,
                      v172,
                      v173,
                      v174);
                  }
                  v206 = v145->fields._items;
                  v207 = Method_System_Collections_Generic_List_string__Add__;
                  ++v145->fields._version;
                  if ( !v206 )
                    sub_1BCAA3C(v179, v180);
                  v208 = v145->fields._size;
                  if ( (unsigned int)v208 >= v206->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v145,
                      v154,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v209 = &v206->obj.klass + v208;
                    v145->fields._size = v208 + 1;
                    v209[4] = (Il2CppClass *)v154;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v209 + 4),
                      (int64_t)v154,
                      v181,
                      v182,
                      v183,
                      v184,
                      v185,
                      v186);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v120->fields.priority;
                id = v120->fields.id;
                iconId = v120->fields.iconId;
                skillType = v120->fields.skillType;
                v193 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BCAA2C(
                                                                                         ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                         v149,
                                                                                         v150,
                                                                                         v151);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v193,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  0LL);
                if ( !v323 )
                  sub_1BCAA3C(v194, v195);
                v202 = v323->fields._items;
                v203 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v323->fields._version;
                if ( !v202 )
                  sub_1BCAA3C(v194, v195);
                v204 = v323->fields._size;
                if ( (unsigned int)v204 >= v202->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v323,
                    (Il2CppObject *)v193,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
                }
                else
                {
                  v205 = &v202->obj.klass + v204;
                  v323->fields._size = v204 + 1;
                  v205[4] = (Il2CppClass *)v193;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v205 + 4),
                    (int64_t)v193,
                    v196,
                    v197,
                    v198,
                    v199,
                    v200,
                    v201);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v330,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v318;
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
                                      v120->fields.targetId,
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v111 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v111,
                                        &v333,
                                        v120->fields.targetId,
                                        v120->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v333;
            if ( !v333 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v333, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v333 || !v112 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v112,
                                            &v331,
                                            v333->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v333 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_863/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v333->fields.funcId,
                                              (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
                if ( !v322 )
                  goto LABEL_157;
                v122 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v322,
                        IsPassive,
                        (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v126 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                        System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                        v123,
                                                                        v124,
                                                                        v125);
                  System_Collections_Generic_List_object____ctor(
                    v126,
                    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v322,
                    v122,
                    (Il2CppObject *)v126,
                    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v127 = System_Collections_Generic_Dictionary_object__object___get_Item(
                         v322,
                         v122,
                         (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v128 = v331;
                v129 = v333;
                v130 = (System_Collections_Generic_List_object__o *)v127;
                v134 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCAA2C(
                                                                                              ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                              v131,
                                                                                              v132,
                                                                                              v133);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v134, v128, v129, 0LL, v120, 0LL);
                if ( !v130 )
                  goto LABEL_157;
                v141 = v130->fields._items;
                v142 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v130->fields._version;
                if ( !v141 )
                  goto LABEL_157;
                v143 = v130->fields._size;
                if ( (unsigned int)v143 >= v141->max_length )
                {
                  v223 = v142[4];
                  v224 = v130;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v224,
                    (Il2CppObject *)v134,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v223 + 192) + 112LL));
                  goto LABEL_61;
                }
                v144 = &v141->obj.klass + v143;
                v130->fields._size = v143 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v210 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v212 = v120->fields.priority;
                v213 = v120->fields.id;
                v214 = v120->fields.iconId;
                v215 = v120->fields.skillType;
                v216 = EffectExplanation;
                v134 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCAA2C(
                                                                                              ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                              v217,
                                                                                              v218,
                                                                                              v219);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v134,
                  v210,
                  v216,
                  v213,
                  v212,
                  v214,
                  v215,
                  0LL);
                if ( !v323 )
                  goto LABEL_157;
                v220 = v323->fields._items;
                v221 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v323->fields._version;
                if ( !v220 )
                  goto LABEL_157;
                v222 = v323->fields._size;
                v112 = (Il2CppObject *)v324;
                if ( (unsigned int)v222 >= v220->max_length )
                {
                  v223 = v221[4];
                  v224 = v323;
                  goto LABEL_72;
                }
                v144 = &v220->obj.klass + v222;
                v323->fields._size = v222 + 1;
              }
              v144[4] = (Il2CppClass *)v134;
              sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 4), (int64_t)v134, v135, v136, v137, v138, v139, v140);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v321;
      ++v119;
      max_length = v321->max_length;
    }
    while ( v119 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v110);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v322;
  if ( !v322 )
LABEL_157:
    sub_1BCAA3C(IsPassive, v110);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v325,
    v322,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v328 = v325;
  while ( 1 )
  {
    v225 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v328,
             (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v225 )
      break;
    value = v328.fields._current.fields.value;
    if ( !v328.fields._current.fields.value )
      sub_1BCAA3C(v225, v226);
    if ( SLODWORD(v328.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v229 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v328.fields._current.fields.value,
               0,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v229 )
        sub_1BCAA3C(0LL, v230);
      if ( v229[1].monitor )
      {
        v231 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v231 )
          sub_1BCAA3C(0LL, v232);
        v233 = v231[1].monitor;
        if ( !v233 )
          sub_1BCAA3C(v231, v232);
        if ( !Master_object )
          sub_1BCAA3C(0LL, v232);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v327,
               v233[4],
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v327 )
            sub_1BCAA3C(0LL, v234);
          Name = SkillEntity__getName((SkillEntity_o *)v327, 0LL);
        }
      }
      else
      {
        v235 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v235 )
          sub_1BCAA3C(0LL, v236);
        if ( v235[2].klass )
        {
          v237 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v237 )
            sub_1BCAA3C(0LL, v238);
          v239 = v237[2].klass;
          if ( !v239 )
            sub_1BCAA3C(v237, v238);
          Name = (System_String_o *)v239->_1.byval_arg.data;
        }
      }
      v240 = sub_1BCA888(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v325,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v241 = 0;
      *(_OWORD *)&v326.fields._list = *(_OWORD *)&v325.fields._dictionary;
      v326.fields._current = v325.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v326,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v326,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v255 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v255 )
          sub_1BCAA3C(0LL, v256);
        v258 = v255[1].klass;
        if ( !v258 )
          sub_1BCAA3C(v255, v256);
        v259 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v258->_1.byval_arg.data,
                 (System_Int32_array *)v240,
                 v257);
        v260 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v260 )
          sub_1BCAA3C(0LL, v261);
        v262 = v260[2].monitor;
        if ( !v262 )
          sub_1BCAA3C(v260, v261);
        v263 = v262[5];
        v264 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v264 )
          sub_1BCAA3C(0LL, v265);
        v266 = v264[2].monitor;
        if ( !v266 )
          sub_1BCAA3C(v264, v265);
        v267 = v266[6];
        v268 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v268 )
          sub_1BCAA3C(0LL, v269);
        v272 = v268[2].monitor;
        if ( !v272 )
          sub_1BCAA3C(v268, v269);
        v273 = v272[14];
        v274 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BCAA2C(
                                                                                 ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                 v269,
                                                                                 v270,
                                                                                 v271);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v274, Name, v259, v263, v241, v267, v273, 0LL);
        if ( !v323 )
          sub_1BCAA3C(v275, v276);
        v283 = v323->fields._items;
        v284 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v323->fields._version;
        if ( !v283 )
          sub_1BCAA3C(v275, v276);
        v285 = v323->fields._size;
        if ( (unsigned int)v285 >= v283->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v323,
            (Il2CppObject *)v274,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
        }
        else
        {
          v286 = &v283->obj.klass + v285;
          v323->fields._size = v285 + 1;
          v286[4] = (Il2CppClass *)v274;
          sub_1BCA784((PartyOrganizationUtility_o *)(v286 + 4), (int64_t)v274, v277, v278, v279, v280, v281, v282);
        }
        continue;
      }
      v242 = v326.fields._current;
      v243 = sub_1BCA888(int___TypeInfo, 0LL);
      if ( !v242 )
        sub_1BCAA3C(v243, v244);
      v245 = v242[1].monitor;
      if ( v245 )
      {
        if ( !v111 )
          sub_1BCAA3C(v243, v244);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v111,
                                                               v245[4],
                                                               v245[5],
                                                               0LL);
LABEL_110:
        v247 = (__int64)DispValFromSkill;
      }
      else
      {
        v247 = v243;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v242[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v240 )
        sub_1BCAA3C(DispValFromSkill, v244);
      v248 = *(_QWORD *)(v240 + 24);
      if ( v248 )
      {
        if ( (int)v248 >= 1 )
        {
          v249 = 0LL;
          v250 = (unsigned int)*(_QWORD *)(v240 + 24);
          do
          {
            if ( !v247 )
              sub_1BCAA3C(DispValFromSkill, v244);
            if ( v249 >= *(unsigned int *)(v247 + 24) )
              sub_1BCAA44(DispValFromSkill, v244);
            v251 = v240 + 4 * v249;
            v252 = *(_DWORD *)(v247 + 32 + 4 * v249++);
            *(_DWORD *)(v251 + 32) += v252;
          }
          while ( v250 != v249 );
        }
      }
      else
      {
        v240 = v247;
      }
      v253 = v242[2].monitor;
      if ( !v253 )
        sub_1BCAA3C(DispValFromSkill, v244);
      v254 = v253[20];
      if ( v254 > v241 )
        v241 = v254;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v328,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v290 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo, v287);
    v290 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v290->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v290->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v290, v287);
      v290 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v292 = (Il2CppObject *)v290->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v287,
                                               v288,
                                               v289);
    System_Func_object__int____ctor(
      _9__28_0,
      v292,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__28_0,
      (int64_t)_9__28_0,
      v294,
      v295,
      v296,
      v297,
      v298,
      v299);
  }
  v300 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v323,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v304 = ClassBoardBaseDialog___c_TypeInfo;
  v305 = v300;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo, v301);
    v304 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v304->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v304->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v304, v301);
      v304 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v307 = (Il2CppObject *)v304->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v301,
                                               v302,
                                               v303);
    System_Func_object__int____ctor(
      _9__28_1,
      v307,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v308 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v308->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v308->__9__28_1, (int64_t)_9__28_1, v309, v310, v311, v312, v313, v314);
  }
  v315 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v305,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v315, (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *effectObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4B19653 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19653 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    gameObject = this->fields.effectObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.itemListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(gameObject, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__OpenItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  System_Int32_array *v39; // x21
  System_Int32_array *v40; // x22
  unsigned __int64 v41; // x24
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  Il2CppObject *Instance; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  ItemLinkInfoWindowComponent_CallbackFunc_o *v48; // x23

  if ( (byte_4B1965D & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, closedAction, method);
    sub_1BCA7E0(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__, v18, v19);
    sub_1BCA7E0(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, v20, v21);
    byte_4B1965D = 1;
  }
  v22 = sub_1BCAA2C(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, closedAction, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_22;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = closedAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)closedAction, v31, v32, v33, v34, v35, v36);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v39 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)size);
    v40 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v41 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v41,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v39 )
          break;
        if ( v41 >= v39->max_length )
          goto LABEL_23;
        v39->m_Items[v41 + 1] = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v41,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v40 )
          break;
        if ( v41 >= v40->max_length )
LABEL_23:
          sub_1BCAA44(Item, v24);
        v40->m_Items[++v41] = Item[2].fields._version;
        if ( size == v41 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1BCAA3C(Item, v24);
    }
LABEL_17:
    v42 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v43 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v42, v42[4]);
    OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v48 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                          v45,
                                                          v46,
                                                          v47);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v48,
      (Il2CppObject *)v22,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v39, v40, v48, 0, 0LL);
  }
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
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
  __int64 v23; // x8
  System_String_o *v24; // x0
  System_String_o *v25; // x29
  System_String_o *v26; // x0
  System_String_o *v27; // x28
  System_String_o *v28; // x0
  System_String_o *v29; // x27
  System_String_o *v30; // x0
  System_String_o *v31; // x26
  System_String_o *v32; // x0
  System_String_o *v33; // x25
  System_String_o *v34; // x0
  System_String_o *v35; // x24
  System_String_o *v36; // x0
  System_String_o *v37; // x23
  System_String_o *v38; // x0
  System_String_o *v39; // x21
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x20
  System_String_o *v44; // x0
  __int64 v45; // x1
  System_String_o *v46; // x22
  System_String_o *v47; // x22
  System_String_o *v48; // x22
  System_String_o *v49; // x22
  System_String_o *v50; // x22
  unsigned __int64 v51; // x8
  System_String_o *v52; // x22
  unsigned __int64 v53; // x8
  System_String_o *v54; // x22
  unsigned __int64 v55; // x8
  System_String_o *v56; // x21
  unsigned __int64 v57; // x8
  int v59; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1965A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_25384/*"{x"*/, funcVals, method);
    sub_1BCA7E0(&StringLiteral_25169/*"{"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_25099/*"xx}"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_25098/*"xxx}"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_25409/*"}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_25387/*"{xxxx"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25385/*"{xx"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_25097/*"xxxx}"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25100/*"x}"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_25386/*"{xxx"*/, v21, v22);
    byte_4B1965A = 1;
  }
  v59 = 0;
  if ( funcVals )
  {
    v23 = *(_QWORD *)&funcVals->max_length;
    if ( v23 )
    {
      v60 = 0;
      if ( (int)v23 >= 1 )
      {
        do
        {
          v24 = System_Int32__ToString((int32_t)&v60, 0LL);
          v25 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v24,
                  (System_String_o *)StringLiteral_25097/*"xxxx}"*/,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v60, 0LL);
          v27 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v26,
                  (System_String_o *)StringLiteral_25098/*"xxx}"*/,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v60, 0LL);
          v29 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v28,
                  (System_String_o *)StringLiteral_25099/*"xx}"*/,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v60, 0LL);
          v31 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v30,
                  (System_String_o *)StringLiteral_25100/*"x}"*/,
                  0LL);
          v32 = System_Int32__ToString((int32_t)&v60, 0LL);
          v33 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25169/*"{"*/,
                  v32,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v34 = System_Int32__ToString((int32_t)&v60, 0LL);
          v35 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25384/*"{x"*/,
                  v34,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v36 = System_Int32__ToString((int32_t)&v60, 0LL);
          v37 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25385/*"{xx"*/,
                  v36,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v38 = System_Int32__ToString((int32_t)&v60, 0LL);
          v39 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25386/*"{xxx"*/,
                  v38,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          v40 = System_Int32__ToString((int32_t)&v60, 0LL);
          v41 = System_String__Concat_62412480(
                  (System_String_o *)StringLiteral_25387/*"{xxxx"*/,
                  v40,
                  (System_String_o *)StringLiteral_25409/*"}"*/,
                  0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v43 = v41;
          v59 = 10000 * funcVals->m_Items[v60 + 1];
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !text )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(text, v25, v44, 0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v46 = v41;
          v59 = 1000 * funcVals->m_Items[v60 + 1];
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v46 )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(v46, v27, v44, 0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v47 = v41;
          v59 = 100 * funcVals->m_Items[v60 + 1];
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v47 )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(v47, v29, v44, 0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v48 = v41;
          v59 = 10 * funcVals->m_Items[v60 + 1];
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v48 )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(v48, v31, v44, 0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v49 = v41;
          v44 = System_Int32__ToString((unsigned int)funcVals + 4 * v60 + 32, 0LL);
          if ( !v49 )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(v49, v33, v44, 0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v50 = v41;
          v51 = 1717986919LL * funcVals->m_Items[v60 + 1];
          v59 = (v51 >> 63) + (SHIDWORD(v51) >> 2);
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v50 )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(v50, v35, v44, 0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v52 = v41;
          v53 = 1374389535LL * funcVals->m_Items[v60 + 1];
          v59 = (v53 >> 63) + (SHIDWORD(v53) >> 5);
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v52 )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(v52, v37, v44, 0LL);
          if ( v60 >= funcVals->max_length )
            goto LABEL_26;
          v54 = v41;
          v55 = 274877907LL * funcVals->m_Items[v60 + 1];
          v59 = (v55 >> 63) + (SHIDWORD(v55) >> 6);
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v54 )
            goto LABEL_27;
          v41 = System_String__Replace_62420848(v54, v39, v44, 0LL);
          if ( v60 >= funcVals->max_length )
LABEL_26:
            sub_1BCAA44(v41, v42);
          v56 = v41;
          v57 = 1759218605LL * funcVals->m_Items[v60 + 1];
          v59 = (v57 >> 63) + (SHIDWORD(v57) >> 12);
          v44 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v56 )
LABEL_27:
            sub_1BCAA3C(v44, v45);
          text = System_String__Replace_62420848(v56, v43, v44, 0LL);
          ++v60;
        }
        while ( (signed int)v60 < (signed int)funcVals->max_length );
      }
    }
  }
  return text;
}


void __fastcall ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *itemIconComponentList; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19658 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v10, v11);
    byte_4B19658 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      itemIconComponentList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(0LL, v13);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v14.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1BCAA3C(this, method);
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
  System_String_o *SelfUserGame; // x0
  __int64 v18; // x1
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v22; // x22
  System_Int32_c *v23; // x0
  int32_t *v24; // x1
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v29; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v32; // [xsp+18h] [xbp-48h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B19656 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&needNum, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3511/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3513/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3510/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3512/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3508/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v15, v16);
    byte_4B19656 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_19;
  klass = (int32_t)SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  if ( klass >= needNum )
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3510/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3512/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
    v23 = int_TypeInfo;
    v32 = needNum;
    v24 = &v32;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3511/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3513/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
    v23 = int_TypeInfo;
    v24 = &v33;
    v33 = needNum;
  }
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(v23, v24);
  SelfUserGame = System_String__Format(v22, v25, 0LL);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3508/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3512/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v31 = klass;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  SelfUserGame = System_String__Format(v29, v30, 0LL);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0LL)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(SelfUserGame, v18);
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
  UnityEngine_GameObject_o *effectObj; // x0
  __int64 v30; // x1
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v32; // x21
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v36; // w0
  IClassBoardSquareModel_c *v37; // x8
  int32_t v38; // w22
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  ClassBoardSquareEntity_o *v48; // x22
  UnityEngine_GameObject_o *v49; // x21
  const MethodInfo *v50; // x3
  float v51; // s11
  __int64 v52; // x1
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  UnityEngine_GameObject_o *v57; // x22
  Il2CppObject *Component_object; // x0
  __int64 v59; // x1
  IClassBoardSquareModel_c *v60; // x8
  System_String_o *monitor; // x25
  System_String_o *v62; // x26
  int32_t v63; // w24
  __int64 v64; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v65; // x23
  int32_t *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  float v70; // s10
  __int64 v71; // x1
  __int64 v72; // x2
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v75; // x0
  __int64 v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4B19654 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSquareEntity___TypeInfo, squareModel, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v17,
      v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v19, v20);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v21, v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v23,
      v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    byte_4B19654 = 1;
  }
  entity = 0LL;
  memset(&v78, 0, sizeof(v78));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_54;
  klass = squareModel->klass;
  v32 = (ClassBoardSquareMaster_o *)effectObj;
  v33 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v36 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v37 = squareModel->klass;
  v38 = v36;
  v39 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v40 = &v37->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v40 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_17;
    }
    v41 = (__int64)&v37->vtable[*v40].method;
  }
  else
  {
LABEL_17:
    v41 = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v41)(
                                            squareModel,
                                            *(_QWORD *)(v41 + 8));
  if ( !v32 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v32, &entity, v38, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1BCA888(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v48 = entity;
  v49 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1BCA91C(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v76 = sub_1BCAA60(0LL);
      sub_1BCA908(v76, 0LL);
    }
  }
  if ( !LODWORD(v49[1].klass) )
    sub_1BCAA44(effectObj, squareModel);
  v49[1].monitor = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49[1].monitor, (int64_t)v48, v42, v43, v44, v45, v46, v47);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v49,
                                            0,
                                            0,
                                            v50);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v51 = 0.0;
  v78 = v77;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v78.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
    v55 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v57 = (UnityEngine_GameObject_o *)v55;
    if ( !v55 )
      sub_1BCAA3C(0LL, v56);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v55,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1BCAA3C(Component_object, v59);
    v60 = squareModel->klass;
    v62 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v63 = (int32_t)current[2].monitor;
    v64 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
    v65 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
    {
      v66 = &v60->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v66 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v64;
        v66 += 4;
        if ( !v64 )
          goto LABEL_35;
      }
      v67 = (__int64)&v60->vtable[*v66 + 7].method;
    }
    else
    {
LABEL_35:
      v67 = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v68 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v67)(squareModel, *(_QWORD *)(v67 + 8));
    if ( !v65 )
      sub_1BCAA3C(v68, v69);
    v70 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v65, v62, monitor, v63, v68, 0LL);
    GameObjectExtensions__SetParent_34336872(v57, this->fields.effectDetailParent, 0LL);
    if ( !byte_4B109C6 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v71, v72);
      byte_4B109C6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v57, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_34331148(v57, 0.0, -v51, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v57, 1, 0LL);
    v51 = v51 + v70;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v51 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( effectObj )
      {
        v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v75, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1BCAA3C(effectObj, squareModel);
  }
}


bool __fastcall ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
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
  UnityEngine_Object_o *itemInfoLabel; // x21
  __int64 v34; // x1
  UILabel_o *v35; // x21
  System_String_o *itemListObj; // x0
  __int64 v37; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x20
  _BOOL4 v55; // w27
  char v56; // w26
  _BOOL4 i; // w23
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x24
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  int32_t v73; // w0
  __int64 v74; // x8
  int32_t v75; // w23
  __int64 v76; // x9
  IClassBoardItemModel_c **v77; // x10
  __int64 v78; // x0
  int32_t v79; // w24
  Il2CppObject *Instance; // x0
  __int64 v81; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v83; // x1
  _BOOL8 isQP; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v88; // x0
  __int64 v89; // x1
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  Il2CppObject *Component_object; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x25
  __int64 v99; // x1
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  System_Collections_Generic_List_object__o *v106; // x0
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x8
  __int64 v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4B19655 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, itemList, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5, v6);
    sub_1BCA7E0(&IClassBoardItemModel_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&StringLiteral_3506/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v31, v32);
    byte_4B19655 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemList);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v35 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3506/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v35 )
      goto LABEL_86;
    UILabel__set_text(v35, itemListObj, 0LL);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0LL, 0LL) )
  {
    itemListObj = (System_String_o *)this->fields.itemQpObj;
    if ( !itemListObj )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 0, 0LL);
  }
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo,
                                                       v37,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v41;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemIconComponentList,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v49 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v49;
      p_offset += 4;
      if ( !v49 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C1C7C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v54 = v52;
  v55 = 0;
  v56 = 1;
LABEL_24:
  for ( i = v55; ; i = 1 )
  {
    if ( !v54 )
      sub_1BCAA3C(v52, v53);
    v58 = *(_QWORD *)v54;
    v55 = i;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_30;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_30:
      v61 = sub_1C1C7C0(v54, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v54, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v54;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v64 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_37;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_37:
      v65 = sub_1C1C7C0(v54, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v54, *(_QWORD *)(v65 + 8));
    v68 = v66;
    if ( !v66 )
      sub_1BCAA3C(0LL, v67);
    v69 = *(_QWORD *)v66;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
    {
      v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v71 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_44;
      }
      v72 = v69 + 16LL * *v71 + 312;
    }
    else
    {
LABEL_44:
      v72 = sub_1C1C7C0(v66, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
    v74 = *(_QWORD *)v68;
    v75 = v73;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v77 = (IClassBoardItemModel_c **)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *(v77 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v76;
        v77 += 2;
        if ( !v76 )
          goto LABEL_50;
      }
      v78 = v74 + 16LL * (*(_DWORD *)v77 + 1) + 312;
    }
    else
    {
LABEL_50:
      v78 = sub_1C1C7C0(v68, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v79 = (*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v68, *(_QWORD *)(v78 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v81);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1BCAA3C(0LL, v83);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v75, 0LL);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v56 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v85);
        v88 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v88;
        if ( !v88 )
          sub_1BCAA3C(0LL, v89);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v88, 0LL);
        if ( !itemIconListGrid )
          sub_1BCAA3C(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1BCAA3C(isQP, v85);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v92, v93);
        byte_4B109C1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_4B109C6 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v94, v95);
        byte_4B109C6 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v98 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v97);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v75, v79, 0LL);
      v106 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1BCAA3C(0LL, v99);
      items = v106->fields._items;
      v108 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v106->fields._version;
      if ( !items )
        sub_1BCAA3C(v106, v99);
      size = v106->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v106,
          v98,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = &items->obj.klass + size;
        v106->fields._size = size + 1;
        v110[4] = (Il2CppClass *)v98;
        sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 4), (int64_t)v98, v100, v101, v102, v103, v104, v105);
      }
      v56 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v79, v86);
  }
  v111 = *(_QWORD *)v54;
  v112 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
  {
    v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
    {
      --v112;
      v113 += 4;
      if ( !v112 )
        goto LABEL_78;
    }
    v114 = v111 + 16LL * *v113 + 312;
  }
  else
  {
LABEL_78:
    v114 = sub_1C1C7C0(v54, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v114)(v54, *(_QWORD *)(v114 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1BCAA3C(itemListObj, v37);
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))itemListObj->klass->vtable._8_Equals.method)(
    itemListObj,
    itemListObj->klass->vtable._9_GetTypeCode.methodPtr);
  return i;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBaseDialog__SetUpLockReleaseCondition(
        ClassBoardBaseDialog_o *this,
        ClassBoardCondData_o condData,
        const MethodInfo *method)
{
  __int64 v3; // x20
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
  UnityEngine_GameObject_o *conditionListObj; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_int__o *v37; // x21
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v42; // x20
  __int64 v43; // x22
  __int64 v44; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x20
  char v49; // w23
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  Il2CppObject *v55; // x22
  MasterMissionListViewItem_o *v56; // x21
  __int64 v57; // x0
  __int64 v58; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  __int64 v60; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v63; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  __int64 v66; // x1
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  UIGrid_o *v70; // x21
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_Transform_o *v72; // x0
  System_Collections_Generic_List_Enumerator_int__o v73; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v74; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4B19657 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type,
      *(_QWORD *)&condData.fields.Num);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v25, v26);
    sub_1BCA7E0(&MasterMissionListViewItem_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_Transform___, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    byte_4B19657 = 1;
  }
  entity = 0LL;
  memset(&v74, 0, sizeof(v74));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v34,
                                                    v35,
                                                    v36);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condData.fields.Type);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v42 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v43 = 0LL;
        do
        {
          if ( (unsigned int)v43 >= (unsigned int)klass )
            sub_1BCAA44(conditionListObj, *(_QWORD *)&condData.fields.Type);
          v44 = *((_QWORD *)&v42[1].monitor + v43);
          if ( !v44 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v44 + 28) - 23) <= 1 )
          {
            if ( !v37 )
              goto LABEL_58;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v44 + 32);
            items = v37->fields._items;
            v46 = Method_System_Collections_Generic_List_int__Add__;
            ++v37->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v37->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v37,
                condData.fields.Type,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              klass = v42[1].klass;
            }
            else
            {
              v37->fields._size = size + 1;
              items->m_Items[size + 1] = condData.fields.Type;
            }
          }
        }
        while ( (int)++v43 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v37 )
      goto LABEL_58;
    v38 = v37->fields._items;
    v39 = Method_System_Collections_Generic_List_int__Add__;
    ++v37->fields._version;
    if ( !v38 )
      goto LABEL_58;
    v40 = v37->fields._size;
    if ( (unsigned int)v40 >= v38->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v37,
        SHIDWORD(v3),
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v37->fields._size = v40 + 1;
      v38->m_Items[v40 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condData.fields.Type);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v37 )
    goto LABEL_58;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    v37,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v49 = 1;
  v74 = v73;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v74,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v50 )
      break;
    if ( !v48 )
      sub_1BCAA3C(v50, v51);
    DataMasterBase_object__object__int___TryGetEntity(
      v48,
      &entity,
      v74.fields._current,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v55 = entity;
    if ( entity )
    {
      v56 = (MasterMissionListViewItem_o *)sub_1BCAA2C(MasterMissionListViewItem_TypeInfo, v52, v53, v54);
      MasterMissionListViewItem___ctor(v56, (EventMissionEntity_o *)v55, 2, 0LL);
      if ( !v56 )
        sub_1BCAA3C(v57, v58);
      ComponentInChildren_object__49322392 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v56->klass->vtable._6_CheckMissionCond.method)(
                                                               v56,
                                                               v56->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v49 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1BCAA3C(ComponentInChildren_object__49322392, v60);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1BCAA3C(0LL, v63);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
        v68 = UnityEngine_Object__Instantiate_object__49903816(
                Parent,
                transform,
                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v68 )
          sub_1BCAA3C(0LL, v69);
        ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                 (UnityEngine_Component_o *)v68,
                                                 (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__49322392;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1BCAA3C(ComponentInChildren_object__49322392, v60);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v56,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v70 = this->fields.conditionGrid;
      v71 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v72 = GameObjectExtensions__GetParent(v71, 0LL);
      if ( !v70 )
        sub_1BCAA3C(v72, v72);
      UIGrid__AddChild(v70, v72, 0LL);
      v49 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v74,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1BCAA3C(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0

  if ( (byte_4B1965B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1965B = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v6 = this->fields.effectScrollView;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    UIScrollView__UpdateScrollbars(v6, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19660 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBaseDialog___c_TypeInfo, v1, v2);
    byte_4B19660 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardBaseDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.squareId;
}


void __fastcall ClassBoardBaseDialog___c__DisplayClass32_0___ctor(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBaseDialog___c__DisplayClass32_0___OpenItemInfoListWindow_b__0(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}