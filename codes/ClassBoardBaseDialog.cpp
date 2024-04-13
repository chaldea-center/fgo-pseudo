void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9BD8 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BD8 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__Close(
        ClassBoardBaseDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *classBoardSquare; // x21
  __int64 v7; // x1
  ClassBoardSquare_o *v8; // x0

  if ( (byte_42E9BD7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E9BD7 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v8 = this->fields.classBoardSquare;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    ClassBoardSquare__SetSelectedEffectActive(v8, 0, 0LL);
  }
  BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  int32_t v4; // w21
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // w1
  char v55; // w2
  __int64 v56; // x3
  int v57; // w1
  char v58; // w2
  __int64 v59; // x3
  int v60; // w1
  char v61; // w2
  __int64 v62; // x3
  int v63; // w1
  char v64; // w2
  __int64 v65; // x3
  int v66; // w1
  char v67; // w2
  __int64 v68; // x3
  int v69; // w1
  char v70; // w2
  __int64 v71; // x3
  int v72; // w1
  char v73; // w2
  __int64 v74; // x3
  int v75; // w1
  char v76; // w2
  __int64 v77; // x3
  int v78; // w1
  char v79; // w2
  __int64 v80; // x3
  int v81; // w1
  char v82; // w2
  __int64 v83; // x3
  int v84; // w1
  char v85; // w2
  __int64 v86; // x3
  int v87; // w1
  char v88; // w2
  __int64 v89; // x3
  int v90; // w1
  char v91; // w2
  __int64 v92; // x3
  int v93; // w1
  char v94; // w2
  __int64 v95; // x3
  int v96; // w1
  char v97; // w2
  __int64 v98; // x3
  int v99; // w1
  char v100; // w2
  __int64 v101; // x3
  int v102; // w1
  char v103; // w2
  __int64 v104; // x3
  int v105; // w1
  char v106; // w2
  __int64 v107; // x3
  int v108; // w1
  char v109; // w2
  __int64 v110; // x3
  int v111; // w1
  char v112; // w2
  __int64 v113; // x3
  int v114; // w1
  char v115; // w2
  __int64 v116; // x3
  int v117; // w1
  char v118; // w2
  __int64 v119; // x3
  int v120; // w1
  char v121; // w2
  __int64 v122; // x3
  int v123; // w1
  char v124; // w2
  __int64 v125; // x3
  int v126; // w1
  char v127; // w2
  __int64 v128; // x3
  int v129; // w1
  char v130; // w2
  __int64 v131; // x3
  int v132; // w1
  char v133; // w2
  __int64 v134; // x3
  int v135; // w1
  char v136; // w2
  __int64 v137; // x3
  int v138; // w1
  char v139; // w2
  __int64 v140; // x3
  int v141; // w1
  char v142; // w2
  __int64 v143; // x3
  int v144; // w1
  char v145; // w2
  __int64 v146; // x3
  int v147; // w1
  char v148; // w2
  __int64 v149; // x3
  int v150; // w1
  char v151; // w2
  __int64 v152; // x3
  int v153; // w1
  char v154; // w2
  __int64 v155; // x3
  int v156; // w1
  char v157; // w2
  __int64 v158; // x3
  int v159; // w1
  char v160; // w2
  __int64 v161; // x3
  System_Xml_XmlQualifiedName_o *IsPassive; // x0
  __int64 v163; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v165; // x26
  signed int max_length; // w8
  int v167; // w25
  int v168; // w24
  unsigned int v169; // w27
  ClassBoardSquareEntity_o *v170; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v171; // x19
  System_Xml_XmlQualifiedName_o *v172; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v173; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v175; // x21
  SkillLvEntity_o *v176; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v177; // x19
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v178; // x20
  const MethodInfo *v179; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v180; // x22
  _BOOL8 v181; // x0
  __int64 v182; // x1
  Il2CppObject *current; // x20
  System_String_o *v184; // x0
  __int64 v185; // x1
  System_Xml_XmlQualifiedName_o *v186; // x26
  _BOOL8 v187; // x0
  __int64 v188; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v189; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v190; // x0
  FuncDispEntity_o *v191; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v192; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v193; // x21
  __int64 v194; // x0
  __int64 v195; // x1
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v198; // w26
  int32_t v199; // w24
  int32_t v200; // w25
  int32_t v201; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v202; // x20
  __int64 v203; // x1
  int v204; // w8
  System_String_o *v205; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t skillType; // w24
  System_String_o *v211; // x25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v212; // x20
  int v213; // w23
  _BOOL8 v214; // x0
  __int64 v215; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x19
  __int64 v219; // x8
  __int64 v220; // x1
  __int64 v221; // x8
  __int64 v222; // x25
  int32_t v223; // w24
  int32_t v224; // w8
  Il2CppObject *v225; // x19
  __int64 v226; // x0
  const MethodInfo *v227; // x1
  _DWORD *v228; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v230; // x8
  __int64 v231; // x10
  __int64 v232; // x11
  bool v233; // cc
  _DWORD *v234; // x8
  int v235; // w19
  __int64 v236; // x0
  __int64 v237; // x1
  const MethodInfo *v238; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v239; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v241; // x0
  __int64 v242; // x1
  System_String_o *v243; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v244; // x8
  _DWORD *v245; // x9
  int32_t v246; // w25
  _DWORD *v247; // x9
  int32_t v248; // w26
  _DWORD *v249; // x8
  int32_t v250; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v251; // x22
  __int64 v252; // x1
  __int64 v253; // x0
  __int64 v254; // x0
  int v255; // w20
  ClassBoardBaseDialog___c_c *v256; // x0
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x20
  Il2CppObject *v259; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v260; // x0
  System_String_array **v261; // x2
  System_String_array **v262; // x3
  System_Boolean_array **v263; // x4
  System_Int32_array **v264; // x5
  System_Int32_array *v265; // x6
  System_Int32_array *v266; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v267; // x0
  ClassBoardBaseDialog___c_c *v268; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v269; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v270; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x20
  Il2CppObject *v272; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v273; // x0
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v280; // x0
  __int64 v282; // x0
  ClassBoardCommandSpellMaster_o *v284; // [xsp+10h] [xbp-180h]
  int v285; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v286; // [xsp+20h] [xbp-170h]
  int32_t v287; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v288; // [xsp+30h] [xbp-160h]
  int v289; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v290; // [xsp+40h] [xbp-150h]
  int v291; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v292; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v293; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v294; // [xsp+60h] [xbp-130h]
  System_String_o *v295; // [xsp+60h] [xbp-130h]
  _WORD v296[26]; // [xsp+68h] [xbp-128h] BYREF
  int v297; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v298; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v299; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v300; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v301; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v302; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v303; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v305; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_42E9BD4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___,
      dispType,
      ignoreTurnOrCountPassive,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_FuncDispMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v21, v22, v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v33,
      v34,
      v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v36,
      v37,
      v38);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v39,
      v40,
      v41);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v42,
      v43,
      v44);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v45,
      v46,
      v47);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__,
      v51,
      v52,
      v53);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v54,
      v55,
      v56);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v57,
      v58,
      v59);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v60,
      v61,
      v62);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v63,
      v64,
      v65);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__,
      v66,
      v67,
      v68);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__,
      v69,
      v70,
      v71);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v72,
      v73,
      v74);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v75,
      v76,
      v77);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v78, v79, v80);
    sub_B5D5C4(
      &Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__,
      v81,
      v82,
      v83);
    sub_B5D5C4(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v84, v85, v86);
    sub_B5D5C4(&int___TypeInfo, v87, v88, v89);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v90,
      v91,
      v92);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v93,
      v94,
      v95);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v96, v97, v98);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v99,
      v100,
      v101);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v102, v103, v104);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v105, v106, v107);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v108,
      v109,
      v110);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v111, v112, v113);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v114, v115, v116);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v117,
      v118,
      v119);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v120,
      v121,
      v122);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v123,
      v124,
      v125);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v126,
      v127,
      v128);
    sub_B5D5C4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v129,
      v130,
      v131);
    sub_B5D5C4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v132,
      v133,
      v134);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v135, v136, v137);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v138, v139, v140);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v141, v142, v143);
    sub_B5D5C4(&Method_System_String_Join_int___, v144, v145, v146);
    sub_B5D5C4(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v147, v148, v149);
    sub_B5D5C4(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v150, v151, v152);
    sub_B5D5C4(&ClassBoardBaseDialog___c_TypeInfo, v153, v154, v155);
    sub_B5D5C4(&StringLiteral_707/*","*/, v156, v157, v158);
    sub_B5D5C4(&StringLiteral_1/*""*/, v159, v160, v161);
    byte_42E9BD4 = 1;
  }
  v305 = 0LL;
  entity = 0LL;
  v303 = 0LL;
  entitys = 0LL;
  v301 = 0LL;
  v299 = 0LL;
  memset(&v302, 0, sizeof(v302));
  memset(&v300, 0, sizeof(v300));
  memset(&v298, 0, sizeof(v298));
  v297 = 0;
  v293 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v293,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_154;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v293;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  v290 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v165 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v294 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FuncDispMaster___);
  v292 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v292,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v167 = 0;
  v288 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v168 = 0;
    v169 = 0;
    v291 = 0;
    v287 = v4;
    v286 = openedSquareArray;
    v284 = v165;
    while ( 1 )
    {
      if ( v169 >= max_length )
      {
        v282 = sub_B5D6C8(IsPassive);
        sub_B5D668(v282, 0LL);
      }
      v170 = openedSquareArray->m_Items[v169];
      v171 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v171,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v171;
      if ( !v170 )
        break;
      IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsPassive(v170, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( v4 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         Master_WarQuestSelectionMaster,
                                                         &entity,
                                                         v170->fields.targetId,
                                                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            IsPassive = (System_Xml_XmlQualifiedName_o *)v290;
            if ( !v290 )
              break;
            IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                           v290,
                                                           &v305,
                                                           v170->fields.targetId,
                                                           v170->fields.upSkillLv,
                                                           0LL);
            if ( ((unsigned __int8)IsPassive & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_171;
              IsPassive = (System_Xml_XmlQualifiedName_o *)v305;
              if ( !v305 )
                break;
              IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(v305, 0LL);
              if ( ((unsigned __int8)IsPassive & 1) == 0 )
              {
LABEL_171:
                if ( !v305 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)v294;
                if ( !v294 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                               v294,
                                                               &v303,
                                                               v305->fields.funcId,
                                                               0LL);
                if ( ((unsigned __int8)IsPassive & 1) != 0 )
                {
                  if ( !v305 )
                    break;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                 (System_String_o *)StringLiteral_707/*","*/,
                                                                 (System_Collections_Generic_IEnumerable_T__o *)v305->fields.funcId,
                                                                 (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
                  if ( !v292 )
                    break;
                  v172 = IsPassive;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v292,
                          IsPassive,
                          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v173 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v173,
                      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v292,
                      v172,
                      (System_Xml_Schema_XmlSchemaObject_o *)v173,
                      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v292,
                           (System_Type_o *)v172,
                           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v175 = v303;
                  v176 = v305;
                  v177 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v178 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v178,
                    v175,
                    v176,
                    0LL,
                    v170,
                    0LL);
                  if ( !v177 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v177,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v178,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v288;
                  v4 = v287;
                  openedSquareArray = v286;
                }
                else
                {
                  IsPassive = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v289 = v167;
                  v285 = v168;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v205 = (System_String_o *)IsPassive;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v170->fields.priority;
                  id = v170->fields.id;
                  iconId = v170->fields.iconId;
                  skillType = v170->fields.skillType;
                  v211 = EffectExplanation;
                  v212 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v212,
                    v205,
                    v211,
                    id,
                    priority,
                    iconId,
                    skillType,
                    0LL);
                  IsPassive = (System_Xml_XmlQualifiedName_o *)v293;
                  if ( !v293 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v293,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v212,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v288;
                  v4 = v287;
                  openedSquareArray = v286;
                  v168 = v285;
                  v167 = v289;
                }
              }
            }
          }
        }
      }
      else
      {
        IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsCommandSpell(v170, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v165 )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                         v165,
                                                         &entitys,
                                                         v170->fields.targetId,
                                                         v170->fields.upSkillLv,
                                                         v179);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v180 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v180,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (System_Xml_XmlQualifiedName_o *)entitys;
            if ( !entitys )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v296,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            v302 = *(System_Collections_Generic_List_Enumerator_T__o *)v296;
            while ( 1 )
            {
              v181 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v302,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              if ( !v181 )
                break;
              current = v302.fields.current;
              if ( !v302.fields.current )
                sub_B5D69C(v181, v182);
              if ( !v294 )
                sub_B5D69C(0LL, v182);
              if ( FuncDispMaster__IsContainFuncIds(
                     v294,
                     &v301,
                     (System_Int32_array *)v302.fields.current[3].klass,
                     0LL) )
              {
                v184 = System_String__Join_int_(
                         (System_String_o *)StringLiteral_707/*","*/,
                         (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                         (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
                if ( !v180 )
                  sub_B5D69C(v184, v185);
                v186 = (System_Xml_XmlQualifiedName_o *)v184;
                v187 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v180,
                         (WarBoardManager_TaskList_o *)v184,
                         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( !v187 )
                {
                  if ( !v292 )
                    sub_B5D69C(v187, v188);
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v292,
                          v186,
                          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v189 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v189,
                      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v292,
                      v186,
                      (System_Xml_Schema_XmlSchemaObject_o *)v189,
                      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  v190 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v292,
                           (System_Type_o *)v186,
                           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v191 = v301;
                  v192 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v190;
                  v193 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v193,
                    v191,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v170,
                    0LL);
                  if ( !v192 )
                    sub_B5D69C(v194, v195);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v192,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v193,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v180,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v186,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                v198 = v170->fields.priority;
                v200 = v170->fields.id;
                v199 = v170->fields.iconId;
                v201 = v170->fields.skillType;
                v202 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v202,
                  klass,
                  monitor,
                  v200,
                  v198,
                  v199,
                  v201,
                  0LL);
                if ( !v293 )
                  sub_B5D69C(0LL, v203);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v293,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v202,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
              }
            }
            *(_DWORD *)&v296[2 * v291 + 20] = 569;
            v168 = ++v297;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v302,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            Master_WarQuestSelectionMaster = v288;
            v4 = v287;
            openedSquareArray = v286;
            v165 = v284;
            v167 = v168;
            if ( v168 )
            {
              v204 = v168 - 1;
              v291 = v168;
              if ( *(_DWORD *)&v296[2 * v168 + 18] == 569 )
              {
                v167 = --v168;
                v297 = v204;
                v291 = v204;
              }
            }
            else
            {
              v291 = 0;
            }
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v169 >= max_length )
        goto LABEL_65;
    }
LABEL_154:
    sub_B5D69C(IsPassive, v163);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Xml_XmlQualifiedName_o *)v292;
  if ( !v292 )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v296,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v292,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v300 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v296;
  v213 = v167;
  while ( 1 )
  {
    v214 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v300,
             (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v214 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v300.fields.current.fields.value;
    if ( !v300.fields.current.fields.value )
      sub_B5D69C(v214, v215);
    if ( SLODWORD(v300.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v300.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B5D69C(v214, v215);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v219 = data[3];
        if ( !v219 )
          sub_B5D69C(v214, v215);
        if ( !v288 )
          sub_B5D69C(0LL, v215);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v288,
               &v299,
               *(_DWORD *)(v219 + 16),
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v299 )
            sub_B5D69C(0LL, v220);
          Name = SkillEntity__getName((SkillEntity_o *)v299, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v300.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v221 = data[4];
        if ( !v221 )
          sub_B5D69C(v214, v215);
        Name = *(System_String_o **)(v221 + 32);
      }
      v295 = Name;
      v222 = sub_B5D5DC(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v296,
        value,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v223 = 0;
      v298 = *(System_Collections_Generic_List_Enumerator_T__o *)v296;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v298,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v296[2 * v213 + 20] = 947;
        v235 = v297 + 1;
        v297 = v235;
        v213 = v235;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v298,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v235 && *(_DWORD *)&v296[2 * v235 + 18] == 947 )
        {
          v213 = v235 - 1;
          v297 = v235 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v239 = value->fields._items->m_Items[0];
        if ( !v239 )
          sub_B5D69C(v236, v237);
        buff = v239->fields.buff;
        if ( !buff )
          sub_B5D69C(v236, v237);
        v241 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 *(System_String_o **)&buff->fields.isUse,
                 (System_Int32_array *)v222,
                 v238);
        v243 = v241;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v244 = value->fields._items->m_Items[0];
        if ( !v244 )
          sub_B5D69C(v241, v242);
        v245 = v244[1].monitor;
        if ( !v245 )
          sub_B5D69C(v241, v242);
        v246 = v245[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v247 = v244[1].monitor;
        if ( !v247 )
          sub_B5D69C(v241, v242);
        v248 = v247[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v249 = v244[1].monitor;
        if ( !v249 )
          sub_B5D69C(v241, v242);
        v250 = v249[14];
        v251 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v251, v295, v243, v246, v223, v248, v250, 0LL);
        if ( !v293 )
          sub_B5D69C(0LL, v252);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v293,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v251,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v225 = v298.fields.current;
      v226 = sub_B5D5DC(int___TypeInfo, 0LL);
      if ( !v225 )
        sub_B5D69C(v226, v227);
      v228 = v225[1].monitor;
      if ( v228 )
      {
        if ( !v290 )
          sub_B5D69C(v226, v227);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v290,
                                                               v228[4],
                                                               v228[5],
                                                               0LL);
LABEL_95:
        v230 = (__int64)DispValFromSkill;
      }
      else
      {
        v230 = v226;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v225[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 v227);
          goto LABEL_95;
        }
      }
      if ( !v222 )
        sub_B5D69C(DispValFromSkill, v227);
      v231 = *(_QWORD *)(v222 + 24);
      if ( v231 )
      {
        if ( (int)v231 >= 1 )
        {
          v232 = 8LL;
          do
          {
            if ( v232 - 8 >= (unsigned __int64)(unsigned int)v231 )
            {
              v253 = sub_B5D6C8(DispValFromSkill);
              sub_B5D668(v253, 0LL);
            }
            if ( !v230 )
              sub_B5D69C(DispValFromSkill, v227);
            if ( v232 - 8 >= (unsigned __int64)*(unsigned int *)(v230 + 24) )
            {
              v254 = sub_B5D6C8(DispValFromSkill);
              sub_B5D668(v254, 0LL);
            }
            v233 = v232 - 7 < (int)v231;
            *(_DWORD *)(v222 + 4 * v232) += *(_DWORD *)(v230 + 4 * v232);
            ++v232;
          }
          while ( v233 );
        }
      }
      else
      {
        v222 = v230;
      }
      v234 = v225[2].monitor;
      if ( !v234 )
        sub_B5D69C(DispValFromSkill, v227);
      v224 = v234[20];
      if ( v224 > v223 )
        v223 = v224;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v296[2 * v213 + 20] = 1073;
  v255 = ++v297;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v300,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v255 && *(_DWORD *)&v296[2 * v255 + 18] == 1073 )
    v297 = v255 - 1;
  v256 = ClassBoardBaseDialog___c_TypeInfo;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v256 = ClassBoardBaseDialog___c_TypeInfo;
  }
  static_fields = v256->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v256->vtable._0_Equals.methodPtr) & 4) != 0 && !v256->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v256);
      static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v259 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v259,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v260 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v260->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v260->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v261,
      v262,
      v263,
      v264,
      v265,
      v266);
  }
  v267 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v293,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v268 = ClassBoardBaseDialog___c_TypeInfo;
  v269 = v267;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v268 = ClassBoardBaseDialog___c_TypeInfo;
  }
  v270 = v268->static_fields;
  _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v270->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( (BYTE3(v268->vtable._0_Equals.methodPtr) & 4) != 0 && !v268->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v268);
      v270 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v272 = (Il2CppObject *)v270->__9;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_1,
      v272,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v273 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v273->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v273->__9__28_1,
      (System_Int32_array **)_9__28_1,
      v274,
      v275,
      v276,
      v277,
      v278,
      v279);
  }
  v280 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v269,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v280, (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *effectObj; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_42E9BCE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BCE = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    gameObject = this->fields.effectObj;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.itemListObj;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(conditionListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.conditionListObj;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_23:
    sub_B5D69C(gameObject, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
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
  __int64 v33; // x8
  System_String_o *v34; // x0
  System_String_o *v35; // x20
  System_String_o *v36; // x0
  System_String_o *v37; // x28
  System_String_o *v38; // x0
  System_String_o *v39; // x27
  System_String_o *v40; // x0
  System_String_o *v41; // x26
  System_String_o *v42; // x0
  System_String_o *v43; // x25
  System_String_o *v44; // x0
  System_String_o *v45; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x23
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x21
  System_String_o *v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x20
  System_String_o *v55; // x20
  System_String_o *v56; // x20
  System_String_o *v57; // x20
  System_String_o *v58; // x20
  unsigned __int64 v59; // x8
  System_String_o *v60; // x20
  unsigned __int64 v61; // x8
  System_String_o *v62; // x20
  unsigned __int64 v63; // x8
  System_String_o *v64; // x20
  unsigned __int64 v65; // x8
  __int64 v67; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v69; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E9BD5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23987/*"{x"*/, (_DWORD)funcVals, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23782/*"{"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23717/*"xx}"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23716/*"xxx}"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_24008/*"}"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23990/*"{xxxx"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23988/*"{xx"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23715/*"xxxx}"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_23718/*"x}"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_23989/*"{xxx"*/, v30, v31, v32);
    byte_42E9BD5 = 1;
  }
  v69 = 0LL;
  if ( funcVals )
  {
    v33 = *(_QWORD *)&funcVals->max_length;
    if ( v33 )
    {
      HIDWORD(v69) = 0;
      if ( (int)v33 >= 1 )
      {
        do
        {
          v34 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v35 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v34,
                  (System_String_o *)StringLiteral_23715/*"xxxx}"*/,
                  0LL);
          v36 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v37 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v36,
                  (System_String_o *)StringLiteral_23716/*"xxx}"*/,
                  0LL);
          v38 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v39 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v38,
                  (System_String_o *)StringLiteral_23717/*"xx}"*/,
                  0LL);
          v40 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v41 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v40,
                  (System_String_o *)StringLiteral_23718/*"x}"*/,
                  0LL);
          v42 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v43 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v42,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          v44 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v45 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23987/*"{x"*/,
                  v44,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          v46 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v47 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23988/*"{xx"*/,
                  v46,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          v48 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          oldValue = System_String__Concat_44580072(
                       (System_String_o *)StringLiteral_23989/*"{xxx"*/,
                       v48,
                       (System_String_o *)StringLiteral_24008/*"}"*/,
                       0LL);
          v49 = System_Int32__ToString((int32_t)&v69 + 4, 0LL);
          v50 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23990/*"{xxxx"*/,
                  v49,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v51 = v50;
          LODWORD(v69) = 10000 * funcVals->m_Items[SHIDWORD(v69) + 1];
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !text )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(text, v35, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v54 = v50;
          LODWORD(v69) = 1000 * funcVals->m_Items[SHIDWORD(v69) + 1];
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !v54 )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(v54, v37, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v55 = v50;
          LODWORD(v69) = 100 * funcVals->m_Items[SHIDWORD(v69) + 1];
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !v55 )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(v55, v39, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v56 = v50;
          LODWORD(v69) = 10 * funcVals->m_Items[SHIDWORD(v69) + 1];
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !v56 )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(v56, v41, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v57 = v50;
          v52 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v69) + 32, 0LL);
          if ( !v57 )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(v57, v43, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v58 = v50;
          v59 = 1717986919LL * funcVals->m_Items[SHIDWORD(v69) + 1];
          LODWORD(v69) = (v59 >> 63) + (SHIDWORD(v59) >> 2);
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !v58 )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(v58, v45, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v60 = v50;
          v61 = 1374389535LL * funcVals->m_Items[SHIDWORD(v69) + 1];
          LODWORD(v69) = (v61 >> 63) + (SHIDWORD(v61) >> 5);
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !v60 )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(v60, v47, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
            goto LABEL_26;
          v62 = v50;
          v63 = 274877907LL * funcVals->m_Items[SHIDWORD(v69) + 1];
          LODWORD(v69) = (v63 >> 63) + (SHIDWORD(v63) >> 6);
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !v62 )
            goto LABEL_27;
          v50 = System_String__Replace_44585024(v62, oldValue, v52, 0LL);
          if ( HIDWORD(v69) >= funcVals->max_length )
          {
LABEL_26:
            v67 = sub_B5D6C8(v50);
            sub_B5D668(v67, 0LL);
          }
          v64 = v50;
          v65 = 1759218605LL * funcVals->m_Items[SHIDWORD(v69) + 1];
          LODWORD(v69) = (v65 >> 63) + (SHIDWORD(v65) >> 12);
          v52 = System_Int32__ToString((int32_t)&v69, 0LL);
          if ( !v64 )
LABEL_27:
            sub_B5D69C(v52, v53);
          text = System_String__Replace_44585024(v64, v51, v52, 0LL);
          ++HIDWORD(v69);
        }
        while ( SHIDWORD(v69) < (signed int)funcVals->max_length );
      }
    }
  }
  return text;
}


void __fastcall ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemIconComponentList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9BD3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v14, v15, v16);
    byte_42E9BD3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemIconComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      itemIconComponentList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v19.fields.current )
        sub_B5D69C(0LL, v18);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v19.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
  }
}


void __fastcall ClassBoardBaseDialog__SetEffectScrollInitPos(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *effectScrollView; // x8
  ClassBoardBaseDialog_o *v3; // x19
  float v4; // s0

  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView
    || (v3 = this, (this = *(ClassBoardBaseDialog_o **)&effectScrollView->fields.showScrollBars) == 0LL)
    || (HIDWORD(effectScrollView->fields.onDragStarted) != 4 ? (v4 = 0.0) : (v4 = 0.5),
        (UIProgressBar__set_value((UIProgressBar_o *)this, v4, 0LL),
         (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0LL)
     || (UIScrollView__UpdatePosition((UIScrollView_o *)this, 0LL),
         (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0LL)) )
  {
    sub_B5D69C(this, method);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetQpLabel(
        ClassBoardBaseDialog_o *this,
        int32_t needNum,
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
  System_String_o *SelfUserGame; // x0
  __int64 v25; // x1
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v29; // x22
  int32_t *v30; // x1
  Il2CppObject *v31; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v34; // x21
  Il2CppObject *v35; // x0
  int32_t v36; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9BD1 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, needNum, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3060/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3062/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3059/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3061/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3057/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v21, v22, v23);
    byte_42E9BD1 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  klass = (int32_t)SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  if ( klass >= needNum )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3059/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( itemQpLabel )
    {
      UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
      itemQpNum = this->fields.itemQpNum;
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3061/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
      v37 = needNum;
      v30 = &v37;
      goto LABEL_15;
    }
LABEL_24:
    sub_B5D69C(SelfUserGame, v25);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3060/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
  if ( !itemQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
  itemQpNum = this->fields.itemQpNum;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3062/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
  v30 = &v38;
  v38 = needNum;
LABEL_15:
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v30);
  SelfUserGame = System_String__Format(v29, v31, 0LL);
  if ( !itemQpNum )
    goto LABEL_24;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3057/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3061/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v36 = klass;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  SelfUserGame = System_String__Format(v34, v35, 0LL);
  if ( !itemHaveQpNum )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)this->fields.itemQpObj;
  if ( !SelfUserGame )
    goto LABEL_24;
  SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                      (UnityEngine_GameObject_o *)SelfUserGame,
                                      0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetUpEffectDetail(
        ClassBoardBaseDialog_o *this,
        IClassBoardSquareModel_o *squareModel,
        float disableScrollViewSize,
        float disableScrollViewPosY,
        const MethodInfo *method)
{
  __int64 v5; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  UnityEngine_GameObject_o *effectObj; // x0
  __int64 v41; // x3
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v43; // x21
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v47; // w0
  __int64 v48; // x3
  IClassBoardSquareModel_c *v49; // x8
  int32_t v50; // w22
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x22
  UnityEngine_GameObject_o *v61; // x21
  const MethodInfo *v62; // x3
  float v63; // s11
  Il2CppObject *current; // x23
  struct UnityEngine_GameObject_o *effectDetailObj; // x21
  UnityEngine_GameObject_o *v66; // x0
  __int64 v67; // x1
  UnityEngine_GameObject_o *v68; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v70; // x1
  __int64 v71; // x3
  IClassBoardSquareModel_c *v72; // x8
  System_String_o *monitor; // x24
  System_String_o *v74; // x25
  int32_t v75; // w23
  ClassBoardDialogSkillDetailPartsComponent_o *v76; // x22
  unsigned __int64 v77; // x10
  int32_t *v78; // x11
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x5
  float v83; // s10
  struct UIScrollView_o *effectScrollView; // x8
  struct UIScrollView_o *v85; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v87; // x0
  __int64 v88; // x0
  __int64 v89; // x0
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+20h] [xbp-90h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9BCF & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSquareEntity___TypeInfo, (_DWORD)squareModel, (_DWORD)method, v5);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v22,
      v23,
      v24);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v25, v26, v27);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v28, v29, v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v31,
      v32,
      v33);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    byte_42E9BCF = 1;
  }
  entity = 0LL;
  memset(&v91, 0, sizeof(v91));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_55;
  klass = squareModel->klass;
  v43 = (ClassBoardSquareMaster_o *)effectObj;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v44;
      p_offset += 4;
      if ( v44 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL, v41);
  }
  v47 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v49 = squareModel->klass;
  v50 = v47;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v49->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v52 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v53 = (__int64)&v49->vtable[*v52].method;
  }
  else
  {
LABEL_18:
    v53 = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL, v48);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v53)(
                                            squareModel,
                                            *(_QWORD *)(v53 + 8));
  if ( !v43 )
    goto LABEL_55;
  ClassBoardSquareMaster__TryGetEntity(v43, &entity, v50, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_B5D5DC(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_55;
  v60 = (System_Int32_array **)entity;
  v61 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_B5D684(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v89 = sub_B5D6BC(0LL);
      sub_B5D668(v89, 0LL);
    }
  }
  if ( !LODWORD(v61[1].klass) )
  {
    v88 = sub_B5D6C8(effectObj);
    sub_B5D668(v88, 0LL);
  }
  v61[1].monitor = v60;
  sub_B5D560((BattleServantConfConponent_o *)&v61[1].monitor, v60, v54, v55, v56, v57, v58, v59);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v61,
                                            0,
                                            0,
                                            v62);
  if ( !effectObj )
    goto LABEL_55;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v90,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)effectObj,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v91 = v90;
  v63 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v91,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v91.fields.current;
    effectDetailObj = this->fields.effectDetailObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v66 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)effectDetailObj,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v68 = v66;
    if ( !v66 )
      sub_B5D69C(0LL, v67);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v66,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_B5D69C(Component_srcLineSprite, v70);
    v72 = squareModel->klass;
    v74 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v75 = (int32_t)current[2].monitor;
    v76 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_srcLineSprite;
    if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
    {
      v77 = 0LL;
      v78 = &v72->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v78 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v77;
        v78 += 4;
        if ( v77 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v79 = (__int64)&v72->vtable[*v78 + 7].method;
    }
    else
    {
LABEL_36:
      v79 = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 7LL, v71);
    }
    v80 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v79)(squareModel, *(_QWORD *)(v79 + 8));
    if ( !v76 )
      sub_B5D69C(v80, v81);
    v83 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v76, v74, monitor, v75, v80, v82);
    GameObjectExtensions__SetParent_32436388(v68, this->fields.effectDetailParent, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v68, one, 0LL);
    GameObjectExtensions__SetLocalPosition_32430604(v68, 0.0, -v63, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v68, 1, 0LL);
    v63 = v63 + v83;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v91,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_55;
  effectObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))effectObj->klass[1]._1.parent)(
                                            effectObj,
                                            0LL,
                                            effectObj->klass[1]._1.generic_class,
                                            0.0,
                                            0.0);
  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_55;
  effectObj = *(UnityEngine_GameObject_o **)&effectScrollView->fields.showScrollBars;
  if ( !effectObj )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)effectObj, 0.0, 0LL);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_55;
  UIScrollView__UpdatePosition((UIScrollView_o *)effectObj, 0LL);
  if ( disableScrollViewSize > 0.0 && v63 <= disableScrollViewSize )
  {
    v85 = this->fields.effectScrollView;
    if ( v85 )
    {
      HIDWORD(v85->fields.onDragStarted) = 4;
      effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
      if ( effectObj )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( effectObj )
        {
          v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
          GameObjectExtensions__SetLocalPositionY(v87, disableScrollViewPosY, 0LL);
          return;
        }
      }
    }
LABEL_55:
    sub_B5D69C(effectObj, squareModel);
  }
}


bool __fastcall ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
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
  UnityEngine_Object_o *itemInfoLabel; // x21
  UILabel_o *v49; // x21
  System_String_o *itemListObj; // x0
  __int64 v51; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v62; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x3
  __int64 v68; // x20
  int v69; // w26
  char v70; // w25
  int i; // w22
  __int64 v72; // x8
  unsigned __int64 v73; // x10
  int *v74; // x11
  __int64 v75; // x0
  __int64 v76; // x3
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x3
  __int64 v84; // x23
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  int32_t v89; // w0
  __int64 v90; // x3
  __int64 v91; // x8
  int32_t v92; // w22
  unsigned __int64 v93; // x10
  IClassBoardItemModel_c **v94; // x11
  __int64 v95; // x0
  int32_t v96; // w23
  WebViewManager_o *Instance; // x0
  __int64 v98; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v100; // x1
  _BOOL8 isQP; // x0
  __int64 v102; // x1
  const MethodInfo *v103; // x2
  struct UnityEngine_GameObject_o *itemIcon; // x24
  UnityEngine_GameObject_o *v105; // x0
  __int64 v106; // x1
  UIGrid_o *itemIconListGrid; // x25
  UnityEngine_Transform_o *transform; // x0
  ClassBoardItemIconComponent_o *Component_srcLineSprite; // x0
  __int64 v110; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v111; // x24
  __int64 v112; // x1
  __int64 v113; // x8
  unsigned __int64 v114; // x10
  int *v115; // x11
  __int64 v116; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemIconComponentList; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9BD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)itemList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v6, v7, v8);
    sub_B5D5C4(&IClassBoardItemModel_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_3055/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v45, v46, v47);
    byte_42E9BD0 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v49 = this->fields.itemInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3055/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v49 )
      goto LABEL_82;
    UILabel__set_text(v49, itemListObj, 0LL);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0LL, 0LL) )
  {
    itemListObj = (System_String_o *)this->fields.itemQpObj;
    if ( !itemListObj )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 0, 0LL);
  }
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemIconComponentList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_82;
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v62;
      p_offset += 4;
      if ( v62 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_AF54C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v60);
  }
  v65 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v68 = v65;
  v69 = 0;
  v70 = 1;
LABEL_27:
  for ( i = v69; ; i = 1 )
  {
    if ( !v68 )
      sub_B5D69C(v65, v66);
    v72 = *(_QWORD *)v68;
    v69 = i;
    if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
    {
      v73 = 0LL;
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v74 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v73;
        v74 += 4;
        if ( v73 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
          goto LABEL_33;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_33:
      v75 = sub_AF54C0(v68, System_Collections_IEnumerator_TypeInfo, 0LL, v67);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v68, *(_QWORD *)(v75 + 8)) & 1) == 0 )
      break;
    v77 = *(_QWORD *)v68;
    if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
    {
      v78 = 0LL;
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v79 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v78;
        v79 += 4;
        if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
          goto LABEL_40;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_40:
      v80 = sub_AF54C0(v68, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v76);
    }
    v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v68, *(_QWORD *)(v80 + 8));
    v84 = v81;
    if ( !v81 )
      sub_B5D69C(0LL, v82);
    v85 = *(_QWORD *)v81;
    if ( *(_WORD *)(*(_QWORD *)v81 + 298LL) )
    {
      v86 = 0LL;
      v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v87 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v86;
        v87 += 4;
        if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v81 + 298LL) )
          goto LABEL_47;
      }
      v88 = v85 + 16LL * *v87 + 312;
    }
    else
    {
LABEL_47:
      v88 = sub_AF54C0(v81, IClassBoardItemModel_TypeInfo, 0LL, v83);
    }
    v89 = (*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
    v91 = *(_QWORD *)v84;
    v92 = v89;
    if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
    {
      v93 = 0LL;
      v94 = (IClassBoardItemModel_c **)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *(v94 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v93;
        v94 += 2;
        if ( v93 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
          goto LABEL_53;
      }
      v95 = v91 + 16LL * (*(_DWORD *)v94 + 1) + 312;
    }
    else
    {
LABEL_53:
      v95 = sub_AF54C0(v84, IClassBoardItemModel_TypeInfo, 1LL, v90);
    }
    v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v84, *(_QWORD *)(v95 + 8));
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v98);
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v100);
    isQP = ItemMaster__isQP(MasterData_WarQuestSelectionMaster, v92, 0LL);
    if ( !isQP )
    {
      itemIcon = this->fields.itemIcon;
      if ( (v70 & 1) == 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v105 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v105;
        if ( !v105 )
          sub_B5D69C(0LL, v106);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform(v105, 0LL);
        if ( !itemIconListGrid )
          sub_B5D69C(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_B5D69C(isQP, v102);
      UnityEngine_GameObject__SetActive(itemIcon, 1, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(itemIcon, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(itemIcon, one, 0LL);
      Component_srcLineSprite = (ClassBoardItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   itemIcon,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v111 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v110);
      ClassBoardItemIconComponent__setItemInfo(Component_srcLineSprite, v92, v96, 0LL);
      if ( !*p_itemIconComponentList )
        sub_B5D69C(0LL, v112);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_itemIconComponentList,
        v111,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
      v70 = 0;
      goto LABEL_27;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v96, v103);
  }
  v113 = *(_QWORD *)v68;
  if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
  {
    v114 = 0LL;
    v115 = (int *)(*(_QWORD *)(v113 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v115 - 1) != System_IDisposable_TypeInfo )
    {
      ++v114;
      v115 += 4;
      if ( v114 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
        goto LABEL_74;
    }
    v116 = v113 + 16LL * *v115 + 312;
  }
  else
  {
LABEL_74:
    v116 = sub_AF54C0(v68, System_IDisposable_TypeInfo, 0LL, v76);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v116)(v68, *(_QWORD *)(v116 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_82:
    sub_B5D69C(itemListObj, v51);
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))itemListObj->klass->vtable._8_System_IConvertible_ToChar.method)(
    itemListObj,
    itemListObj->klass->vtable._9_System_IConvertible_ToSByte.methodPtr);
  return i & 1;
}


void __fastcall ClassBoardBaseDialog__SetUpLockReleaseCondition(
        ClassBoardBaseDialog_o *this,
        ClassBoardCondData_o condData,
        const MethodInfo *method)
{
  __int64 v3; // x20
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  UnityEngine_GameObject_o *conditionListObj; // x0
  System_Collections_Generic_List_int__o *v48; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v50; // x20
  __int64 v51; // x22
  __int64 v52; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x20
  char v54; // w23
  _BOOL8 v55; // x0
  __int64 v56; // x1
  EventMissionEntity_o *v57; // x22
  MasterMissionListViewItem_o *v58; // x21
  __int64 v59; // x0
  __int64 v60; // x1
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  __int64 v62; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v65; // x1
  UnityEngine_Transform_o *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v69; // x0
  __int64 v70; // x1
  UIGrid_o *v71; // x21
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Transform_o *v73; // x0
  __int64 v74; // x0
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_42E9BD2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      condData.fields.Type,
      condData.fields.Num,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_Transform___, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v44, v45, v46);
    byte_42E9BD2 = 1;
  }
  entity = 0LL;
  memset(&v76, 0, sizeof(v76));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v48 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_54;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_54;
      klass = conditionListObj[1].klass;
      v50 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v51 = 0LL;
        do
        {
          if ( (unsigned int)v51 >= (unsigned int)klass )
          {
            v74 = sub_B5D6C8(conditionListObj);
            sub_B5D668(v74, 0LL);
          }
          v52 = *((_QWORD *)&v50[1].monitor + v51);
          if ( !v52 )
            goto LABEL_54;
          if ( (unsigned int)(*(_DWORD *)(v52 + 28) - 23) <= 1 )
          {
            if ( !v48 )
              goto LABEL_54;
            System_Collections_Generic_List_int___Add(
              v48,
              *(_DWORD *)(v52 + 32),
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            klass = v50[1].klass;
          }
        }
        while ( (int)++v51 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v48 )
      goto LABEL_54;
    System_Collections_Generic_List_int___Add(
      v48,
      SHIDWORD(v3),
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v48 )
    goto LABEL_54;
  v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    v48,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v76 = v75;
  v54 = 1;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v76,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v55 )
      break;
    if ( !v53 )
      sub_B5D69C(v55, v56);
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      v53,
      &entity,
      v76.fields.current,
      (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v57 = (EventMissionEntity_o *)entity;
    if ( entity )
    {
      v58 = (MasterMissionListViewItem_o *)sub_B5D694(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v58, v57, 2, 0LL);
      if ( !v58 )
        sub_B5D69C(v59, v60);
      ComponentInChildren_UIWidget = (UIWidget_o *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v58->klass->vtable._6_CheckMissionCond.method)(
                                                     v58,
                                                     v58->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v54 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_B5D69C(ComponentInChildren_UIWidget, v62);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_B5D69C(0LL, v65);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v69 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                           (UILabel_o *)Parent,
                                           transform,
                                           (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v69 )
          sub_B5D69C(0LL, v70);
        ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                         v69,
                                         (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_UIWidget;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_B5D69C(ComponentInChildren_UIWidget, v62);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v58,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v71 = this->fields.conditionGrid;
      v72 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v73 = GameObjectExtensions__GetParent(v72, 0LL);
      if ( !v71 )
        sub_B5D69C(v73, v73);
      UIGrid__AddChild(v71, v73, 0LL);
      v54 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v76,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_54;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_54;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))conditionListObj->klass[1]._1.parent)(
    conditionListObj,
    0LL,
    conditionListObj->klass[1]._1.generic_class,
    0.0,
    0.0);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_54;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    1LL,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_54;
  UIScrollView__UpdatePosition((UIScrollView_o *)conditionListObj, 0LL);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_54;
  conditionListObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)conditionListObj,
                                                   0LL);
  if ( !conditionListObj )
    goto LABEL_54;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)conditionListObj, 0LL) != 1 )
    return;
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)conditionListObj, 0, 0LL),
        (conditionListObj = this->fields.missionScrollBar) == 0LL) )
  {
LABEL_54:
    sub_B5D69C(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_42E9BD6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9BD6 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v7 = this->fields.effectScrollView;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    UIScrollView__UpdateScrollbars(v7, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E6A & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardBaseDialog___c_TypeInfo, v1, v2, v3);
    byte_42E5E6A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.squareId;
}