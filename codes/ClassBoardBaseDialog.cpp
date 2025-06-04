void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B05809 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B05809 = 1;
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

  if ( (byte_4B05806 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callback);
    byte_4B05806 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
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

  if ( (byte_4B05808 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__, closedAction);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B05808 = 1;
  }
  v5 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BC3020(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v8);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, closedAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  int32_t v6; // w23
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
  __int64 v57; // x1
  __int64 v58; // x1
  System_Collections_Generic_List_object__o *v59; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v61; // x1
  Il2CppObject *v62; // x22
  Il2CppObject *v63; // x28
  __int64 v64; // x2
  signed int max_length; // w8
  unsigned int v66; // w21
  ClassBoardSquareEntity_o *v67; // x29
  System_Collections_Generic_List_object__o *v68; // x19
  Il2CppObject *v69; // x21
  System_Collections_Generic_List_object__o *v70; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v72; // x19
  SkillLvEntity_o *v73; // x24
  System_Collections_Generic_List_object__o *v74; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v75; // x21
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  System_Collections_Generic_List_object__o *v82; // x23
  _BOOL8 v83; // x0
  __int64 v84; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v86; // x0
  __int64 v87; // x1
  Il2CppObject *v88; // x27
  __int64 v89; // x1
  System_Collections_Generic_List_object__o *v90; // x19
  Il2CppObject *v91; // x0
  FuncDispEntity_o *v92; // x19
  System_Collections_Generic_List_object__o *v93; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v94; // x25
  __int64 v95; // x0
  __int64 v96; // x1
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  __int64 v103; // x0
  __int64 v104; // x1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v109; // w27
  int32_t v110; // w26
  int32_t v111; // w28
  int32_t v112; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v113; // x24
  __int64 v114; // x0
  __int64 v115; // x1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  System_String_o *v126; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w23
  int32_t id; // w24
  int32_t iconId; // w25
  int32_t skillType; // w26
  System_String_o *v132; // x27
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v133; // x21
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  _BOOL8 v140; // x0
  __int64 v141; // x1
  Il2CppObject *value; // x23
  System_String_o *Name; // x21
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  Il2CppObject *v146; // x0
  __int64 v147; // x1
  _DWORD *v148; // x8
  __int64 v149; // x1
  Il2CppObject *v150; // x0
  __int64 v151; // x1
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  Il2CppClass *v154; // x8
  __int64 v155; // x26
  int32_t v156; // w25
  Il2CppObject *v157; // x19
  __int64 v158; // x0
  __int64 v159; // x1
  __int64 v160; // x2
  _DWORD *v161; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v163; // x8
  __int64 v164; // x10
  unsigned __int64 v165; // x9
  __int64 v166; // x10
  unsigned __int64 v167; // x12
  int v168; // w13
  _DWORD *v169; // x8
  int32_t v170; // w8
  Il2CppObject *v171; // x0
  __int64 v172; // x1
  const MethodInfo *v173; // x2
  Il2CppClass *v174; // x8
  System_String_o *v175; // x26
  Il2CppObject *v176; // x0
  __int64 v177; // x1
  _DWORD *v178; // x8
  int32_t v179; // w27
  Il2CppObject *v180; // x0
  __int64 v181; // x1
  _DWORD *v182; // x8
  int32_t v183; // w28
  Il2CppObject *v184; // x0
  __int64 v185; // x1
  _DWORD *v186; // x8
  int32_t v187; // w19
  System_String_o *v188; // x23
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v189; // x21
  __int64 v190; // x0
  __int64 v191; // x1
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  Il2CppClass **v197; // x0
  ClassBoardBaseDialog___c_c *v198; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v200; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v204; // x0
  ClassBoardBaseDialog___c_c *v205; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v206; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v208; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v209; // x0
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v212; // x0
  int32_t v215; // [xsp+Ch] [xbp-154h]
  ClassBoardCommandSpellMaster_o *v216; // [xsp+10h] [xbp-150h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+18h] [xbp-148h]
  ClassBoardSquareEntity_array *v218; // [xsp+20h] [xbp-140h]
  unsigned int v219; // [xsp+2Ch] [xbp-134h]
  System_Collections_Generic_Dictionary_object__object__o *v220; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v221; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v222; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v223; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v224; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v225; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v226; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v227; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v228; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v229; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v231; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v6 = dispType;
  if ( (byte_4B05803 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_1BC3008(&Method_DataManager_GetMaster_FuncDispMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_FunctionMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v13);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v14);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v15);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v16);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v17);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v18);
    sub_1BC3008(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v19);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v21);
    sub_1BC3008(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v22);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v23);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v25);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v26);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v27);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v28);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v29);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v30);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v31);
    sub_1BC3008(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v32);
    sub_1BC3008(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v33);
    sub_1BC3008(&int___TypeInfo, v34);
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v35);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v36);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v38);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Contains__, v39);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v40);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v41);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v42);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v43);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v44);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v45);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v46);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v47);
    sub_1BC3008(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v48);
    sub_1BC3008(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v49);
    sub_1BC3008(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v50);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_1BC3008(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v52);
    sub_1BC3008(&Method_System_String_Join_int___, v53);
    sub_1BC3008(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v54);
    sub_1BC3008(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v55);
    sub_1BC3008(&ClassBoardBaseDialog___c_TypeInfo, v56);
    sub_1BC3008(&StringLiteral_806/*","*/, v57);
    sub_1BC3008(&StringLiteral_1/*""*/, v58);
    byte_4B05803 = 1;
  }
  v231 = 0LL;
  entity = 0LL;
  v229 = 0LL;
  entitys = 0LL;
  memset(&v228, 0, sizeof(v228));
  v227 = 0LL;
  v225 = 0LL;
  memset(&v226, 0, sizeof(v226));
  memset(&v224, 0, sizeof(v224));
  v59 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_156;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v59;
  v215 = v6;
  v221 = v59;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v216 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v63 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v220 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v220,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v66 = 0;
    v218 = openedSquareArray;
    v222 = (FuncDispMaster_o *)v63;
    while ( 1 )
    {
      if ( v66 >= max_length )
        sub_1BC326C(IsPassive, v61, v64);
      v67 = openedSquareArray->m_Items[v66];
      v68 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v68,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v68;
      if ( !v67 )
        goto LABEL_156;
      v219 = v66;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v67, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        break;
      if ( v6 == 2 )
        goto LABEL_62;
      IsPassive = (Il2CppObject *)Master_object;
      if ( !Master_object )
        goto LABEL_156;
      IsPassive = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    Master_object,
                                    &entity,
                                    v67->fields.targetId,
                                    (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v62 )
        goto LABEL_156;
      IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                    (SkillLvMaster_o *)v62,
                                    &v231,
                                    v67->fields.targetId,
                                    v67->fields.upSkillLv,
                                    0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (Il2CppObject *)v231;
        if ( !v231 )
          goto LABEL_156;
        IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v231, 0LL);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v231 || !v63 )
        goto LABEL_156;
      IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                    (FuncDispMaster_o *)v63,
                                    &v229,
                                    v231->fields.funcId,
                                    0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( !v231 )
          goto LABEL_156;
        IsPassive = (Il2CppObject *)System_String__Join_int_(
                                      (System_String_o *)StringLiteral_806/*","*/,
                                      (System_Collections_Generic_IEnumerable_T__o *)v231->fields.funcId,
                                      (const MethodInfo_30A9624 *)Method_System_String_Join_int___);
        if ( !v220 )
          goto LABEL_156;
        v69 = IsPassive;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v220,
                IsPassive,
                (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v70 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v70,
            (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v220,
            v69,
            (Il2CppObject *)v70,
            (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v220,
                 v69,
                 (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v72 = v229;
        v73 = v231;
        v74 = (System_Collections_Generic_List_object__o *)Item;
        v75 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BC3254(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v75, v72, v73, 0LL, v67, 0LL);
        if ( !v74 )
          goto LABEL_156;
        items = v74->fields._items;
        v79 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v74->fields._version;
        if ( !items )
          goto LABEL_156;
        size = v74->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            (Il2CppObject *)v75,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &items->obj.klass + size;
          v74->fields._size = size + 1;
          v81[4] = (Il2CppClass *)v75;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
        }
LABEL_61:
        v6 = v215;
        goto LABEL_62;
      }
      IsPassive = entity;
      if ( !entity )
        goto LABEL_156;
      IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_156;
      v126 = (System_String_o *)IsPassive;
      EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
      priority = v67->fields.priority;
      id = v67->fields.id;
      iconId = v67->fields.iconId;
      skillType = v67->fields.skillType;
      v132 = EffectExplanation;
      v133 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BC3254(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v133,
        v126,
        v132,
        id,
        priority,
        iconId,
        skillType,
        0LL);
      if ( !v221 )
        goto LABEL_156;
      v136 = v221->fields._items;
      v6 = v215;
      v137 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v221->fields._version;
      if ( !v136 )
        goto LABEL_156;
      v138 = v221->fields._size;
      if ( (unsigned int)v138 >= v136->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v221,
          (Il2CppObject *)v133,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
      }
      else
      {
        v139 = &v136->obj.klass + v138;
        v221->fields._size = v138 + 1;
        v139[4] = (Il2CppClass *)v133;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v139 + 4), (int32_t)v133, v134, v135);
      }
LABEL_62:
      openedSquareArray = v218;
      max_length = v218->max_length;
      v66 = v219 + 1;
      if ( (int)(v219 + 1) >= max_length )
        goto LABEL_81;
    }
    IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v67, 0LL);
    if ( v6 == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (Il2CppObject *)v216;
    if ( !v216 )
      goto LABEL_156;
    IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                  v216,
                                  &entitys,
                                  v67->fields.targetId,
                                  v67->fields.upSkillLv,
                                  0LL);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v82 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v82,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (Il2CppObject *)entitys;
    if ( !entitys )
      goto LABEL_156;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v223,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    *(_OWORD *)&v228.fields._list = *(_OWORD *)&v223.fields._dictionary;
    v228.fields._current = v223.fields._current.fields.key;
    while ( 1 )
    {
      v83 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v228,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v63 = (Il2CppObject *)v222;
      if ( !v83 )
        break;
      current = v228.fields._current;
      if ( !v228.fields._current )
        sub_1BC3264(v83, v84);
      if ( !v222 )
        sub_1BC3264(v83, v84);
      if ( FuncDispMaster__IsContainFuncIds(v222, &v227, (System_Int32_array *)v228.fields._current[3].klass, 0LL) )
      {
        v86 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_806/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_30A9624 *)Method_System_String_Join_int___);
        if ( !v82 )
          sub_1BC3264(v86, v87);
        v88 = v86;
        if ( !System_Collections_Generic_List_object___Contains(
                v82,
                v86,
                (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v220 )
            sub_1BC3264(0LL, v89);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v220,
                  v88,
                  (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v90 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v90,
              (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v220,
              v88,
              (Il2CppObject *)v90,
              (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v91 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v220,
                  v88,
                  (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v92 = v227;
          v93 = (System_Collections_Generic_List_object__o *)v91;
          v94 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BC3254(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v94,
            v92,
            0LL,
            (ClassBoardCommandSpellEntity_o *)current,
            v67,
            0LL);
          if ( !v93 )
            sub_1BC3264(v95, v96);
          v99 = v93->fields._items;
          v100 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v93->fields._version;
          if ( !v99 )
            sub_1BC3264(v95, v96);
          v101 = v93->fields._size;
          if ( (unsigned int)v101 >= v99->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v93,
              (Il2CppObject *)v94,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v102 = &v99->obj.klass + v101;
            v93->fields._size = v101 + 1;
            v102[4] = (Il2CppClass *)v94;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v102 + 4), (int32_t)v94, v97, v98);
          }
          v122 = v82->fields._items;
          v123 = Method_System_Collections_Generic_List_string__Add__;
          ++v82->fields._version;
          if ( !v122 )
            sub_1BC3264(v103, v104);
          v124 = v82->fields._size;
          if ( (unsigned int)v124 >= v122->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v82,
              v88,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
          }
          else
          {
            v125 = &v122->obj.klass + v124;
            v82->fields._size = v124 + 1;
            v125[4] = (Il2CppClass *)v88;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v88, v105, v106);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v109 = v67->fields.priority;
        v111 = v67->fields.id;
        v110 = v67->fields.iconId;
        v112 = v67->fields.skillType;
        v113 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BC3254(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v113,
          klass,
          monitor,
          v111,
          v109,
          v110,
          v112,
          0LL);
        if ( !v221 )
          sub_1BC3264(v114, v115);
        v118 = v221->fields._items;
        v119 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v221->fields._version;
        if ( !v118 )
          sub_1BC3264(v114, v115);
        v120 = v221->fields._size;
        if ( (unsigned int)v120 >= v118->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v221,
            (Il2CppObject *)v113,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
        }
        else
        {
          v121 = &v118->obj.klass + v120;
          v221->fields._size = v120 + 1;
          v121[4] = (Il2CppClass *)v113;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v121 + 4), (int32_t)v113, v116, v117);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v228,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_81:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v220;
  if ( !v220 )
LABEL_156:
    sub_1BC3264(IsPassive, v61);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v223,
    v220,
    (const MethodInfo_336D418 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v226 = v223;
  while ( 1 )
  {
    v140 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v226,
             (const MethodInfo_346847C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v140 )
      break;
    value = v226.fields._current.fields.value;
    if ( !v226.fields._current.fields.value )
      sub_1BC3264(v140, v141);
    if ( SLODWORD(v226.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v144 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v226.fields._current.fields.value,
               0,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v144 )
        sub_1BC3264(0LL, v145);
      if ( v144[1].monitor )
      {
        v146 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v146 )
          sub_1BC3264(0LL, v147);
        v148 = v146[1].monitor;
        if ( !v148 )
          sub_1BC3264(v146, v147);
        if ( !Master_object )
          sub_1BC3264(0LL, v147);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v225,
               v148[4],
               (const MethodInfo_32AF0BC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v225 )
            sub_1BC3264(0LL, v149);
          Name = SkillEntity__getName((SkillEntity_o *)v225, 0LL);
        }
      }
      else
      {
        v150 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v150 )
          sub_1BC3264(0LL, v151);
        if ( v150[2].klass )
        {
          v152 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v152 )
            sub_1BC3264(0LL, v153);
          v154 = v152[2].klass;
          if ( !v154 )
            sub_1BC3264(v152, v153);
          Name = (System_String_o *)v154->_1.byval_arg.data;
        }
      }
      v155 = sub_1BC30B0(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v223,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v156 = 0;
      *(_OWORD *)&v224.fields._list = *(_OWORD *)&v223.fields._dictionary;
      v224.fields._current = v223.fields._current.fields.key;
LABEL_102:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v224,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v224,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v171 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v171 )
          sub_1BC3264(0LL, v172);
        v174 = v171[1].klass;
        if ( !v174 )
          sub_1BC3264(v171, v172);
        v175 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v174->_1.byval_arg.data,
                 (System_Int32_array *)v155,
                 v173);
        v176 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v176 )
          sub_1BC3264(0LL, v177);
        v178 = v176[2].monitor;
        if ( !v178 )
          sub_1BC3264(v176, v177);
        v179 = v178[5];
        v180 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v180 )
          sub_1BC3264(0LL, v181);
        v182 = v180[2].monitor;
        if ( !v182 )
          sub_1BC3264(v180, v181);
        v183 = v182[6];
        v184 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v184 )
          sub_1BC3264(0LL, v185);
        v186 = v184[2].monitor;
        if ( !v186 )
          sub_1BC3264(v184, v185);
        v187 = v186[14];
        v188 = Name;
        v189 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BC3254(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v189, v188, v175, v179, v156, v183, v187, 0LL);
        if ( !v221 )
          sub_1BC3264(v190, v191);
        v194 = v221->fields._items;
        v195 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v221->fields._version;
        if ( !v194 )
          sub_1BC3264(v190, v191);
        v196 = v221->fields._size;
        if ( (unsigned int)v196 >= v194->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v221,
            (Il2CppObject *)v189,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
        }
        else
        {
          v197 = &v194->obj.klass + v196;
          v221->fields._size = v196 + 1;
          v197[4] = (Il2CppClass *)v189;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v197 + 4), (int32_t)v189, v192, v193);
        }
        continue;
      }
      v157 = v224.fields._current;
      v158 = sub_1BC30B0(int___TypeInfo, 0LL);
      if ( !v157 )
        sub_1BC3264(v158, v159);
      v161 = v157[1].monitor;
      if ( v161 )
      {
        if ( !v62 )
          sub_1BC3264(v158, v159);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v62,
                                                               v161[4],
                                                               v161[5],
                                                               classStatisticsInfos,
                                                               0LL);
LABEL_109:
        v163 = (__int64)DispValFromSkill;
      }
      else
      {
        v163 = v158;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v157[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 classStatisticsInfos,
                                                                 0LL);
          goto LABEL_109;
        }
      }
      if ( !v155 )
        sub_1BC3264(DispValFromSkill, v159);
      v164 = *(_QWORD *)(v155 + 24);
      if ( v164 )
      {
        if ( (int)v164 >= 1 )
        {
          v165 = 0LL;
          v166 = (unsigned int)*(_QWORD *)(v155 + 24);
          do
          {
            if ( !v163 )
              sub_1BC3264(DispValFromSkill, v159);
            if ( v165 >= *(unsigned int *)(v163 + 24) )
              sub_1BC326C(DispValFromSkill, v159, v160);
            v167 = v155 + 4 * v165;
            v168 = *(_DWORD *)(v163 + 32 + 4 * v165++);
            *(_DWORD *)(v167 + 32) += v168;
          }
          while ( v166 != v165 );
        }
      }
      else
      {
        v155 = v163;
      }
      v169 = v157[2].monitor;
      if ( !v169 )
        sub_1BC3264(DispValFromSkill, v159);
      v170 = v169[20];
      if ( v170 > v156 )
        v156 = v170;
      goto LABEL_102;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v226,
    (const MethodInfo_346859C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v198 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v198 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v198->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v198->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v198);
      v198 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v200 = (Il2CppObject *)v198->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v200,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v202, v203);
  }
  v204 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v221,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v205 = ClassBoardBaseDialog___c_TypeInfo;
  v206 = v204;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v205 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v205->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v205->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v205);
      v205 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v208 = (Il2CppObject *)v205->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_1,
      v208,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v209 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v209->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v209->__9__28_1, (int32_t)_9__28_1, v210, v211);
  }
  v212 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v206,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_303D9E0 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v212, (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4B057FD & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B057FD = 1;
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
    sub_1BC3264(gameObject, v4);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  System_Int32_array *v22; // x21
  System_Int32_array *v23; // x22
  unsigned __int64 v24; // x24
  __int64 v25; // x2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v29; // x23

  if ( (byte_4B05807 & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, closedAction);
    sub_1BC3008(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___, v6);
    sub_1BC3008(&int___TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BC3008(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__, v11);
    sub_1BC3008(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, v12);
    byte_4B05807 = 1;
  }
  v13 = sub_1BC3254(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = closedAction;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)closedAction, v18, v19);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v22 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)size);
    v23 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)size);
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
                                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
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
                                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v23 )
          break;
        if ( v24 >= v23->max_length )
LABEL_23:
          sub_1BC326C(Item, v15, v25);
        v23->m_Items[++v24] = (int32_t)Item[2].fields._syncRoot;
        if ( size == v24 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1BC3264(Item, v15);
    }
LABEL_17:
    v26 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1BC3020(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v27 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BC3254(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v29,
      (Il2CppObject *)v13,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v22, v23, v29, 0, 0LL);
  }
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *v5; // x20

  if ( (byte_4B05804 & 1) == 0 )
  {
    sub_1BC3008(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    byte_4B05804 = 1;
  }
  v5 = FuncDispMaster__ReplaceFractionFormat(text, funcVals, 0LL);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__ApplyGivenValues(v5, funcVals, 0LL);
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

  if ( (byte_4B05802 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_4B05802 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      itemIconComponentList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v9.fields._current )
        sub_1BC3264(0LL, v8);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v9.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1BC3264(this, method);
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
  __int64 v11; // x1
  System_String_o *SelfUserGame; // x0
  __int64 v13; // x1
  __int64 klass; // x23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  __int64 v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B05800 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_1BC3008(&long_TypeInfo, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_3348/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v7);
    sub_1BC3008(&StringLiteral_3350/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v8);
    sub_1BC3008(&StringLiteral_3347/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v9);
    sub_1BC3008(&StringLiteral_3349/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v10);
    sub_1BC3008(&StringLiteral_3345/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v11);
    byte_4B05800 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_19;
  klass = (__int64)SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( klass >= needNum )
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3347/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v17 = (System_String_o *)StringLiteral_3349/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3348/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v17 = (System_String_o *)StringLiteral_3350/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/;
  }
  v18 = LocalizationManager__Get(v17, 0LL);
  LODWORD(v30) = needNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v19, v20, v21);
  SelfUserGame = System_String__Format(v18, v22, 0LL);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3345/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3349/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v30 = klass;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v30, v26, v27, v28);
  SelfUserGame = System_String__Format(v25, v29, 0LL);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0LL)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_1BC3264(SelfUserGame, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetUpEffectDetail(
        ClassBoardBaseDialog_o *this,
        IClassBoardSquareModel_o *squareModel,
        float disableScrollViewSize,
        float disableScrollViewPosY,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *effectObj; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v23; // x22
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v27; // w0
  IClassBoardSquareModel_c *v28; // x8
  int32_t v29; // w23
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  ClassBoardSquareEntity_o *v35; // x23
  UnityEngine_GameObject_o *v36; // x22
  const MethodInfo *v37; // x4
  float v38; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *v43; // x22
  Il2CppObject *Component_object; // x0
  __int64 v45; // x1
  IClassBoardSquareModel_c *v46; // x8
  System_String_o *monitor; // x25
  System_String_o *v48; // x26
  int32_t v49; // w24
  __int64 v50; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v51; // x23
  int32_t *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  float v56; // s10
  __int64 v57; // x1
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v60; // x0
  __int64 v61; // x0
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4B057FE & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v13);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v14);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v15);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v16);
    sub_1BC3008(&IClassBoardSquareModel_TypeInfo, v17);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v18);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v19);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v20);
    byte_4B057FE = 1;
  }
  entity = 0LL;
  memset(&v63, 0, sizeof(v63));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_54;
  klass = squareModel->klass;
  v23 = (ClassBoardSquareMaster_o *)effectObj;
  v24 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C13570(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v27 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v28 = squareModel->klass;
  v29 = v27;
  v30 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_17;
    }
    v32 = (__int64)&v28->vtable[*v31].method;
  }
  else
  {
LABEL_17:
    v32 = sub_1C13570(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v32)(
                                            squareModel,
                                            *(_QWORD *)(v32 + 8));
  if ( !v23 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v23, &entity, v29, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1BC30B0(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v35 = entity;
  v36 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1BC3144(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v61 = sub_1BC3288(0LL);
      sub_1BC3130(v61, 0LL);
    }
  }
  if ( !LODWORD(v36[1].klass) )
    sub_1BC326C(effectObj, squareModel, v33);
  v36[1].monitor = v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v36[1].monitor, (int32_t)v35, v33, v34);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v36,
                                            0,
                                            0,
                                            classStatisticsInfos,
                                            v37);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v38 = 0.0;
  v63 = v62;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v63.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v41 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v43 = (UnityEngine_GameObject_o *)v41;
    if ( !v41 )
      sub_1BC3264(0LL, v42);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v41,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1BC3264(Component_object, v45);
    v46 = squareModel->klass;
    v48 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v49 = (int32_t)current[2].monitor;
    v50 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
    v51 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
    {
      v52 = &v46->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v52 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v50;
        v52 += 4;
        if ( !v50 )
          goto LABEL_35;
      }
      v53 = (__int64)&v46->vtable[*v52 + 7].method;
    }
    else
    {
LABEL_35:
      v53 = sub_1C13570(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v54 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v53)(squareModel, *(_QWORD *)(v53 + 8));
    if ( !v51 )
      sub_1BC3264(v54, v55);
    v56 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v51, v48, monitor, v49, v54, 0LL);
    GameObjectExtensions__SetParent_35217636(v43, this->fields.effectDetailParent, 0LL);
    if ( !byte_4AFBDB6 )
    {
      sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v57);
      byte_4AFBDB6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_35212024(v43, 0.0, -v38, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v43, 1, 0LL);
    v38 = v38 + v56;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v38 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( effectObj )
      {
        v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v60, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1BC3264(effectObj, squareModel);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x20
  _BOOL4 v34; // w27
  char v35; // w26
  _BOOL4 i; // w23
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x24
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  int32_t v52; // w0
  __int64 v53; // x8
  int32_t v54; // w23
  __int64 v55; // x9
  IClassBoardItemModel_c **v56; // x10
  __int64 v57; // x0
  int32_t v58; // w24
  Il2CppObject *Instance; // x0
  __int64 v60; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v62; // x1
  _BOOL8 isQP; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v71; // x1
  __int64 v72; // x1
  Il2CppObject *Component_object; // x0
  __int64 v74; // x1
  Il2CppObject *v75; // x25
  __int64 v76; // x1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Collections_Generic_List_object__o *v79; // x0
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x8
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4B057FF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_1BC3008(&IClassBoardItemModel_TypeInfo, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BC3008(&StringLiteral_3343/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_4B057FF = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v20 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemIconComponentList, (int32_t)v24, v25, v26);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v28 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C13570(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v33 = v31;
  v34 = 0;
  v35 = 1;
LABEL_24:
  for ( i = v34; ; i = 1 )
  {
    if ( !v33 )
      sub_1BC3264(v31, v32);
    v37 = *(_QWORD *)v33;
    v34 = i;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_30;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_30:
      v40 = sub_1C13570(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v33, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v33;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v43 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_37;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_37:
      v44 = sub_1C13570(v33, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v33, *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_1BC3264(0LL, v46);
    v48 = *(_QWORD *)v45;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v50 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_44;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_44:
      v51 = sub_1C13570(v45, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
    v53 = *(_QWORD *)v47;
    v54 = v52;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v56 = (IClassBoardItemModel_c **)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *(v56 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v55;
        v56 += 2;
        if ( !v55 )
          goto LABEL_50;
      }
      v57 = v53 + 16LL * (*(_DWORD *)v56 + 1) + 312;
    }
    else
    {
LABEL_50:
      v57 = sub_1C13570(v47, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v47, *(_QWORD *)(v57 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v60);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1BC3264(0LL, v62);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v54, 0LL);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v35 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v67 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v67;
        if ( !v67 )
          sub_1BC3264(0LL, v68);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0LL);
        if ( !itemIconListGrid )
          sub_1BC3264(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1BC3264(isQP, v64);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_4AFBDB1 )
      {
        sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v71);
        byte_4AFBDB1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_4AFBDB6 )
      {
        sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v72);
        byte_4AFBDB6 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v75 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v74);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v54, v58, 0LL);
      v79 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1BC3264(0LL, v76);
      items = v79->fields._items;
      v81 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v79->fields._version;
      if ( !items )
        sub_1BC3264(v79, v76);
      size = v79->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v79,
          v75,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = &items->obj.klass + size;
        v79->fields._size = size + 1;
        v83[4] = (Il2CppClass *)v75;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v75, v77, v78);
      }
      v35 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v58, v65);
  }
  v84 = *(_QWORD *)v33;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_78;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_78:
    v87 = sub_1C13570(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v33, *(_QWORD *)(v87 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1BC3264(itemListObj, v22);
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
  UnityEngine_GameObject_o *v26; // x20
  __int64 v27; // x22
  __int64 v28; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x20
  char v33; // w23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x22
  MasterMissionListViewItem_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  Il2CppObject *ComponentInChildren_object__50301080; // x0
  __int64 v41; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  UIGrid_o *v50; // x21
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Transform_o *v52; // x0
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4B05801 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BC3008(&MasterMissionListViewItem_TypeInfo, v16);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v18);
    byte_4B05801 = 1;
  }
  entity = 0LL;
  memset(&v54, 0, sizeof(v54));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v26 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v27 = 0LL;
        do
        {
          if ( (unsigned int)v27 >= (unsigned int)klass )
            sub_1BC326C(conditionListObj, *(_QWORD *)&condData.fields.Type, *(_QWORD *)&condData.fields.Num);
          v28 = *((_QWORD *)&v26[1].monitor + v27);
          if ( !v28 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v28 + 28) - 23) <= 1 )
          {
            if ( !v20 )
              goto LABEL_58;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v28 + 32);
            items = v20->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                condData.fields.Type,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              klass = v26[1].klass;
            }
            else
            {
              v20->fields._size = size + 1;
              items->m_Items[size + 1] = condData.fields.Type;
            }
          }
        }
        while ( (int)++v27 < (int)klass );
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
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = v23 + 1;
      v21->m_Items[v23 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v20 )
    goto LABEL_58;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    v20,
    (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v33 = 1;
  v54 = v53;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v54,
            (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v34 )
      break;
    if ( !v32 )
      sub_1BC3264(v34, v35);
    DataMasterBase_object__object__int___TryGetEntity(
      v32,
      &entity,
      v54.fields._current,
      (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v36 = entity;
    if ( entity )
    {
      v37 = (MasterMissionListViewItem_o *)sub_1BC3254(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v37, (EventMissionEntity_o *)v36, 2, 0LL);
      if ( !v37 )
        sub_1BC3264(v38, v39);
      ComponentInChildren_object__50301080 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v37->klass->vtable._6_CheckMissionCond.method)(
                                                               v37,
                                                               v37->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v33 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1BC3264(ComponentInChildren_object__50301080, v41);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1BC3264(0LL, v44);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v48 = UnityEngine_Object__Instantiate_object__50900816(
                Parent,
                transform,
                (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v48 )
          sub_1BC3264(0LL, v49);
        ComponentInChildren_object__50301080 = UnityEngine_Component__GetComponentInChildren_object__50301080(
                                                 (UnityEngine_Component_o *)v48,
                                                 (const MethodInfo_2FF8898 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__50301080;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1BC3264(ComponentInChildren_object__50301080, v41);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v37,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v50 = this->fields.conditionGrid;
      v51 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v52 = GameObjectExtensions__GetParent(v51, 0LL);
      if ( !v50 )
        sub_1BC3264(v52, v52);
      UIGrid__AddChild(v50, v52, 0LL);
      v33 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v54,
    (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1BC3264(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4B05805 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05805 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B0580A & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_4B0580A = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}