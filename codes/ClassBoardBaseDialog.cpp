void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49BE4C0 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49BE4C0 = 1;
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

  if ( (byte_49BE4BD & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, callback);
    byte_49BE4BD = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
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

  if ( (byte_49BE4BF & 1) == 0 )
  {
    sub_1B4CF90(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__, closedAction);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49BE4BF = 1;
  }
  v5 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v8);
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
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  System_Collections_Generic_List_object__o *v80; // x29
  _BOOL8 v81; // x0
  __int64 v82; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v84; // x0
  __int64 v85; // x1
  Il2CppObject *v86; // x22
  __int64 v87; // x1
  System_Collections_Generic_List_object__o *v88; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v90; // x19
  System_Collections_Generic_List_object__o *v91; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v92; // x20
  const MethodInfo *v93; // x5
  __int64 v94; // x0
  __int64 v95; // x1
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v112; // x22
  const MethodInfo *v113; // x7
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
  System_String_o *v126; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v128; // w19
  int32_t v129; // w23
  int32_t v130; // w24
  int32_t v131; // w25
  System_String_o *v132; // x26
  const MethodInfo *v133; // x7
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x8
  System_Collections_Generic_List_object__o *v138; // x0
  _BOOL8 v139; // x0
  __int64 v140; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v143; // x0
  __int64 v144; // x1
  Il2CppObject *v145; // x0
  __int64 v146; // x1
  _DWORD *v147; // x8
  __int64 v148; // x1
  Il2CppObject *v149; // x0
  __int64 v150; // x1
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  Il2CppClass *v153; // x8
  __int64 v154; // x25
  int32_t v155; // w24
  Il2CppObject *v156; // x19
  __int64 v157; // x0
  __int64 v158; // x1
  _DWORD *v159; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v161; // x8
  __int64 v162; // x10
  unsigned __int64 v163; // x9
  __int64 v164; // x10
  unsigned __int64 v165; // x12
  int v166; // w13
  _DWORD *v167; // x8
  int32_t v168; // w8
  Il2CppObject *v169; // x0
  __int64 v170; // x1
  const MethodInfo *v171; // x2
  Il2CppClass *v172; // x8
  System_String_o *v173; // x25
  Il2CppObject *v174; // x0
  __int64 v175; // x1
  _DWORD *v176; // x8
  int32_t v177; // w26
  Il2CppObject *v178; // x0
  __int64 v179; // x1
  _DWORD *v180; // x8
  int32_t v181; // w20
  Il2CppObject *v182; // x0
  __int64 v183; // x1
  _DWORD *v184; // x8
  int32_t v185; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v186; // x22
  const MethodInfo *v187; // x7
  __int64 v188; // x0
  __int64 v189; // x1
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  struct System_Object_array *v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x10
  Il2CppClass **v195; // x0
  ClassBoardBaseDialog___c_c *v196; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v198; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v202; // x0
  ClassBoardBaseDialog___c_c *v203; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v204; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v206; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v207; // x0
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v210; // x0
  int32_t v213; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v214; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v216; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v217; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v218; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v219; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v220; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v221; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v222; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v223; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v224; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v225; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v226; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v228; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_49BE4BA & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_1B4CF90(&Method_DataManager_GetMaster_FuncDispMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v14);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v16);
    sub_1B4CF90(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v17);
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v18);
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1B4CF90(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v20);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v21);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v23);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v25);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_1B4CF90(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v30);
    sub_1B4CF90(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v31);
    sub_1B4CF90(&int___TypeInfo, v32);
    sub_1B4CF90(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v33);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v34);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v38);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v39);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v40);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v41);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v42);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v43);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v44);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v45);
    sub_1B4CF90(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v46);
    sub_1B4CF90(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v47);
    sub_1B4CF90(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v48);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1B4CF90(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v50);
    sub_1B4CF90(&Method_System_String_Join_int___, v51);
    sub_1B4CF90(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v52);
    sub_1B4CF90(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v53);
    sub_1B4CF90(&ClassBoardBaseDialog___c_TypeInfo, v54);
    sub_1B4CF90(&StringLiteral_816/*","*/, v55);
    sub_1B4CF90(&StringLiteral_1/*""*/, v56);
    byte_49BE4BA = 1;
  }
  v228 = 0LL;
  entity = 0LL;
  v226 = 0LL;
  entitys = 0LL;
  memset(&v225, 0, sizeof(v225));
  v224 = 0LL;
  v222 = 0LL;
  memset(&v223, 0, sizeof(v223));
  memset(&v221, 0, sizeof(v221));
  v57 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v57;
  v218 = v57;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v214 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v217 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v217,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v63 = 0;
    v219 = (FuncDispMaster_o *)v61;
    v213 = v4;
    v216 = openedSquareArray;
    do
    {
      if ( v63 >= (unsigned int)max_length )
        sub_1B4D1F4(IsPassive, v59);
      v64 = openedSquareArray->m_Items[v63];
      v65 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v65,
        (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v65;
      if ( !v64 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v64, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v64, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v214;
          if ( !v214 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v214,
                                        &entitys,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v80 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v80,
              (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v220,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v225.fields._list = *(_OWORD *)&v220.fields._dictionary;
            v225.fields._current = v220.fields._current.fields.key;
            while ( 1 )
            {
              v81 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v225,
                      (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v61 = (Il2CppObject *)v219;
              if ( !v81 )
                break;
              current = v225.fields._current;
              if ( !v225.fields._current )
                sub_1B4D1EC(v81, v82);
              if ( !v219 )
                sub_1B4D1EC(v81, v82);
              if ( FuncDispMaster__IsContainFuncIds(
                     v219,
                     &v224,
                     (System_Int32_array *)v225.fields._current[3].klass,
                     0LL) )
              {
                v84 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_816/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2FA6008 *)Method_System_String_Join_int___);
                if ( !v80 )
                  sub_1B4D1EC(v84, v85);
                v86 = v84;
                if ( !System_Collections_Generic_List_object___Contains(
                        v80,
                        v84,
                        (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v217 )
                    sub_1B4D1EC(0LL, v87);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v217,
                          v86,
                          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v88 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v88,
                      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v217,
                      v86,
                      (Il2CppObject *)v88,
                      (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v217,
                           v86,
                           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v90 = v224;
                  v91 = (System_Collections_Generic_List_object__o *)Item;
                  v92 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B4D1DC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v92,
                    v90,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v64,
                    v93);
                  if ( !v91 )
                    sub_1B4D1EC(v94, v95);
                  items = v91->fields._items;
                  v99 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v91->fields._version;
                  if ( !items )
                    sub_1B4D1EC(v94, v95);
                  size = v91->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v91,
                      (Il2CppObject *)v92,
                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v101 = &items->obj.klass + size;
                    v91->fields._size = size + 1;
                    v101[4] = (Il2CppClass *)v92;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v92, v96, v97);
                  }
                  v122 = v80->fields._items;
                  v123 = Method_System_Collections_Generic_List_string__Add__;
                  ++v80->fields._version;
                  if ( !v122 )
                    sub_1B4D1EC(v102, v103);
                  v124 = v80->fields._size;
                  if ( (unsigned int)v124 >= v122->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v80,
                      v86,
                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v125 = &v122->obj.klass + v124;
                    v80->fields._size = v124 + 1;
                    v125[4] = (Il2CppClass *)v86;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v86, v104, v105);
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
                v112 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B4D1DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v112,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v113);
                if ( !v218 )
                  sub_1B4D1EC(v114, v115);
                v118 = v218->fields._items;
                v119 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v218->fields._version;
                if ( !v118 )
                  sub_1B4D1EC(v114, v115);
                v120 = v218->fields._size;
                if ( (unsigned int)v120 >= v118->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v218,
                    (Il2CppObject *)v112,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
                }
                else
                {
                  v121 = &v118->obj.klass + v120;
                  v218->fields._size = v120 + 1;
                  v121[4] = (Il2CppClass *)v112;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v121 + 4), (int32_t)v112, v116, v117);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v225,
              (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v213;
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
                                      (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v60,
                                        &v228,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v228;
            if ( !v228 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v228, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v228 || !v61 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v61,
                                            &v226,
                                            v228->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v228 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_816/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v228->fields.funcId,
                                              (const MethodInfo_2FA6008 *)Method_System_String_Join_int___);
                if ( !v217 )
                  goto LABEL_157;
                v66 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v217,
                        IsPassive,
                        (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v67 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v67,
                    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v217,
                    v66,
                    (Il2CppObject *)v67,
                    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v68 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v217,
                        v66,
                        (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v69 = v226;
                v70 = v228;
                v71 = (System_Collections_Generic_List_object__o *)v68;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B4D1DC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v72, v69, v70, 0LL, v64, v73);
                if ( !v71 )
                  goto LABEL_157;
                v76 = v71->fields._items;
                v77 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v71->fields._version;
                if ( !v76 )
                  goto LABEL_157;
                v78 = v71->fields._size;
                if ( (unsigned int)v78 >= v76->max_length )
                {
                  v137 = v77[4];
                  v138 = v71;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v138,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v137 + 192) + 112LL));
                  goto LABEL_61;
                }
                v79 = &v76->obj.klass + v78;
                v71->fields._size = v78 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v126 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v128 = v64->fields.priority;
                v129 = v64->fields.id;
                v130 = v64->fields.iconId;
                v131 = v64->fields.skillType;
                v132 = EffectExplanation;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B4D1DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v72,
                  v126,
                  v132,
                  v129,
                  v128,
                  v130,
                  v131,
                  v133);
                if ( !v218 )
                  goto LABEL_157;
                v134 = v218->fields._items;
                v135 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v218->fields._version;
                if ( !v134 )
                  goto LABEL_157;
                v136 = v218->fields._size;
                v61 = (Il2CppObject *)v219;
                if ( (unsigned int)v136 >= v134->max_length )
                {
                  v137 = v135[4];
                  v138 = v218;
                  goto LABEL_72;
                }
                v79 = &v134->obj.klass + v136;
                v218->fields._size = v136 + 1;
              }
              v79[4] = (Il2CppClass *)v72;
              sub_1B4CF34((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v72, v74, v75);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v216;
      ++v63;
      max_length = v216->max_length;
    }
    while ( v63 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v217;
  if ( !v217 )
LABEL_157:
    sub_1B4D1EC(IsPassive, v59);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v220,
    v217,
    (const MethodInfo_3257F48 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v223 = v220;
  while ( 1 )
  {
    v139 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v223,
             (const MethodInfo_3352894 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v139 )
      break;
    value = v223.fields._current.fields.value;
    if ( !v223.fields._current.fields.value )
      sub_1B4D1EC(v139, v140);
    if ( SLODWORD(v223.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v143 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v223.fields._current.fields.value,
               0,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v143 )
        sub_1B4D1EC(0LL, v144);
      if ( v143[1].monitor )
      {
        v145 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v145 )
          sub_1B4D1EC(0LL, v146);
        v147 = v145[1].monitor;
        if ( !v147 )
          sub_1B4D1EC(v145, v146);
        if ( !Master_object )
          sub_1B4D1EC(0LL, v146);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v222,
               v147[4],
               (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v222 )
            sub_1B4D1EC(0LL, v148);
          Name = SkillEntity__getName((SkillEntity_o *)v222, 0LL);
        }
      }
      else
      {
        v149 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v149 )
          sub_1B4D1EC(0LL, v150);
        if ( v149[2].klass )
        {
          v151 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v151 )
            sub_1B4D1EC(0LL, v152);
          v153 = v151[2].klass;
          if ( !v153 )
            sub_1B4D1EC(v151, v152);
          Name = (System_String_o *)v153->_1.byval_arg.data;
        }
      }
      v154 = sub_1B4D038(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v220,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v155 = 0;
      *(_OWORD *)&v221.fields._list = *(_OWORD *)&v220.fields._dictionary;
      v221.fields._current = v220.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v221,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v221,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v169 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v169 )
          sub_1B4D1EC(0LL, v170);
        v172 = v169[1].klass;
        if ( !v172 )
          sub_1B4D1EC(v169, v170);
        v173 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v172->_1.byval_arg.data,
                 (System_Int32_array *)v154,
                 v171);
        v174 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v174 )
          sub_1B4D1EC(0LL, v175);
        v176 = v174[2].monitor;
        if ( !v176 )
          sub_1B4D1EC(v174, v175);
        v177 = v176[5];
        v178 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v178 )
          sub_1B4D1EC(0LL, v179);
        v180 = v178[2].monitor;
        if ( !v180 )
          sub_1B4D1EC(v178, v179);
        v181 = v180[6];
        v182 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v182 )
          sub_1B4D1EC(0LL, v183);
        v184 = v182[2].monitor;
        if ( !v184 )
          sub_1B4D1EC(v182, v183);
        v185 = v184[14];
        v186 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B4D1DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v186,
          Name,
          v173,
          v177,
          v155,
          v181,
          v185,
          v187);
        if ( !v218 )
          sub_1B4D1EC(v188, v189);
        v192 = v218->fields._items;
        v193 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v218->fields._version;
        if ( !v192 )
          sub_1B4D1EC(v188, v189);
        v194 = v218->fields._size;
        if ( (unsigned int)v194 >= v192->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v218,
            (Il2CppObject *)v186,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
        }
        else
        {
          v195 = &v192->obj.klass + v194;
          v218->fields._size = v194 + 1;
          v195[4] = (Il2CppClass *)v186;
          sub_1B4CF34((CGThumbnailListItem_o *)(v195 + 4), (int32_t)v186, v190, v191);
        }
        continue;
      }
      v156 = v221.fields._current;
      v157 = sub_1B4D038(int___TypeInfo, 0LL);
      if ( !v156 )
        sub_1B4D1EC(v157, v158);
      v159 = v156[1].monitor;
      if ( v159 )
      {
        if ( !v60 )
          sub_1B4D1EC(v157, v158);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v60,
                                                               v159[4],
                                                               v159[5],
                                                               0LL);
LABEL_110:
        v161 = (__int64)DispValFromSkill;
      }
      else
      {
        v161 = v157;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v156[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v154 )
        sub_1B4D1EC(DispValFromSkill, v158);
      v162 = *(_QWORD *)(v154 + 24);
      if ( v162 )
      {
        if ( (int)v162 >= 1 )
        {
          v163 = 0LL;
          v164 = (unsigned int)*(_QWORD *)(v154 + 24);
          do
          {
            if ( !v161 )
              sub_1B4D1EC(DispValFromSkill, v158);
            if ( v163 >= *(unsigned int *)(v161 + 24) )
              sub_1B4D1F4(DispValFromSkill, v158);
            v165 = v154 + 4 * v163;
            v166 = *(_DWORD *)(v161 + 32 + 4 * v163++);
            *(_DWORD *)(v165 + 32) += v166;
          }
          while ( v164 != v163 );
        }
      }
      else
      {
        v154 = v161;
      }
      v167 = v156[2].monitor;
      if ( !v167 )
        sub_1B4D1EC(DispValFromSkill, v158);
      v168 = v167[20];
      if ( v168 > v155 )
        v155 = v168;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v223,
    (const MethodInfo_33529B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v196 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v196 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v196->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v196->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v196);
      v196 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v198 = (Il2CppObject *)v196->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v198,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v200, v201);
  }
  v202 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v218,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_2F2E09C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v203 = ClassBoardBaseDialog___c_TypeInfo;
  v204 = v202;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v203 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v203->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v203->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v203);
      v203 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v206 = (Il2CppObject *)v203->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_1,
      v206,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v207 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v207->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v207->__9__28_1, (int32_t)_9__28_1, v208, v209);
  }
  v210 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v204,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_2F3B878 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v210, (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_49BE4B4 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE4B4 = 1;
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
    sub_1B4D1EC(gameObject, v4);
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
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v28; // x23

  if ( (byte_49BE4BE & 1) == 0 )
  {
    sub_1B4CF90(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, closedAction);
    sub_1B4CF90(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___, v6);
    sub_1B4CF90(&int___TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B4CF90(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__, v11);
    sub_1B4CF90(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, v12);
    byte_49BE4BE = 1;
  }
  v13 = sub_1B4D1DC(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = closedAction;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 24), (int32_t)closedAction, v18, v19);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v22 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, (unsigned int)size);
    v23 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, (unsigned int)size);
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
                                                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
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
                                                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v23 )
          break;
        if ( v24 >= v23->max_length )
LABEL_23:
          sub_1B4D1F4(Item, v15);
        v23->m_Items[++v24] = Item[2].fields._version;
        if ( size == v24 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1B4D1EC(Item, v15);
    }
LABEL_17:
    v25 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B4CFA8(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B4D1DC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)v13,
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

  if ( (byte_49BE4BB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24832/*"{x"*/, funcVals);
    sub_1B4CF90(&StringLiteral_24625/*"{"*/, v5);
    sub_1B4CF90(&StringLiteral_24556/*"xx}"*/, v6);
    sub_1B4CF90(&StringLiteral_24555/*"xxx}"*/, v7);
    sub_1B4CF90(&StringLiteral_24859/*"}"*/, v8);
    sub_1B4CF90(&StringLiteral_24835/*"{xxxx"*/, v9);
    sub_1B4CF90(&StringLiteral_24833/*"{xx"*/, v10);
    sub_1B4CF90(&StringLiteral_24554/*"xxxx}"*/, v11);
    sub_1B4CF90(&StringLiteral_24557/*"x}"*/, v12);
    sub_1B4CF90(&StringLiteral_24834/*"{xxx"*/, v13);
    byte_49BE4BB = 1;
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
          v16 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24625/*"{"*/,
                  v15,
                  (System_String_o *)StringLiteral_24554/*"xxxx}"*/,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v51, 0LL);
          v18 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24625/*"{"*/,
                  v17,
                  (System_String_o *)StringLiteral_24555/*"xxx}"*/,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v51, 0LL);
          v20 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24625/*"{"*/,
                  v19,
                  (System_String_o *)StringLiteral_24556/*"xx}"*/,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v51, 0LL);
          v22 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24625/*"{"*/,
                  v21,
                  (System_String_o *)StringLiteral_24557/*"x}"*/,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v51, 0LL);
          v24 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24625/*"{"*/,
                  v23,
                  (System_String_o *)StringLiteral_24859/*"}"*/,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v51, 0LL);
          v26 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24832/*"{x"*/,
                  v25,
                  (System_String_o *)StringLiteral_24859/*"}"*/,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v51, 0LL);
          v28 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24833/*"{xx"*/,
                  v27,
                  (System_String_o *)StringLiteral_24859/*"}"*/,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v51, 0LL);
          v30 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24834/*"{xxx"*/,
                  v29,
                  (System_String_o *)StringLiteral_24859/*"}"*/,
                  0LL);
          v31 = System_Int32__ToString((int32_t)&v51, 0LL);
          v32 = System_String__Concat_61131716(
                  (System_String_o *)StringLiteral_24835/*"{xxxx"*/,
                  v31,
                  (System_String_o *)StringLiteral_24859/*"}"*/,
                  0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v34 = v32;
          v50 = 10000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !text )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(text, v16, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v37 = v32;
          v50 = 1000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v37 )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(v37, v18, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v38 = v32;
          v50 = 100 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(v38, v20, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v39 = v32;
          v50 = 10 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v39 )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(v39, v22, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v40 = v32;
          v35 = System_Int32__ToString((unsigned int)funcVals + 4 * v51 + 32, 0LL);
          if ( !v40 )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(v40, v24, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v41 = v32;
          v42 = 1717986919LL * funcVals->m_Items[v51 + 1];
          v50 = (v42 >> 63) + (SHIDWORD(v42) >> 2);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v41 )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(v41, v26, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v43 = v32;
          v44 = 1374389535LL * funcVals->m_Items[v51 + 1];
          v50 = (v44 >> 63) + (SHIDWORD(v44) >> 5);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v43 )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(v43, v28, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v45 = v32;
          v46 = 274877907LL * funcVals->m_Items[v51 + 1];
          v50 = (v46 >> 63) + (SHIDWORD(v46) >> 6);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v45 )
            goto LABEL_27;
          v32 = System_String__Replace_61140016(v45, v30, v35, 0LL);
          if ( v51 >= funcVals->max_length )
LABEL_26:
            sub_1B4D1F4(v32, v33);
          v47 = v32;
          v48 = 1759218605LL * funcVals->m_Items[v51 + 1];
          v50 = (v48 >> 63) + (SHIDWORD(v48) >> 12);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v47 )
LABEL_27:
            sub_1B4D1EC(v35, v36);
          text = System_String__Replace_61140016(v47, v34, v35, 0LL);
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

  if ( (byte_49BE4B9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_49BE4B9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      itemIconComponentList,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1B4D1EC(v8, v9);
      LOBYTE(v10.fields._current[6].klass) = 1;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1B4D1EC(this, method);
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

  if ( (byte_49BE4B7 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v6);
    sub_1B4CF90(&StringLiteral_3380/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v7);
    sub_1B4CF90(&StringLiteral_3377/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v8);
    sub_1B4CF90(&StringLiteral_3379/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_1B4CF90(&StringLiteral_3375/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v10);
    byte_49BE4B7 = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3377/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
    v20 = int_TypeInfo;
    v31 = needNum;
    v21 = &v31;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
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
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3375/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
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
    sub_1B4D1EC(SelfUserGame, v12);
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
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  ClassBoardSquareEntity_o *v33; // x22
  UnityEngine_GameObject_o *v34; // x21
  const MethodInfo *v35; // x3
  float v36; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  UnityEngine_GameObject_o *v41; // x22
  Il2CppObject *Component_object; // x0
  __int64 v43; // x1
  IClassBoardSquareModel_c *v44; // x8
  System_String_o *monitor; // x25
  System_String_o *v46; // x26
  int32_t v47; // w24
  __int64 v48; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v49; // x23
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x5
  float v55; // s10
  __int64 v56; // x1
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x0
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_49BE4B5 & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_1B4CF90(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_1B4CF90(&IClassBoardSquareModel_TypeInfo, v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v18);
    byte_49BE4B5 = 1;
  }
  entity = 0LL;
  memset(&v62, 0, sizeof(v62));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
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
    p_method = sub_1B9D724(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
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
    v30 = sub_1B9D724(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(
                                            squareModel,
                                            *(_QWORD *)(v30 + 8));
  if ( !v21 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v21, &entity, v27, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1B4D038(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v33 = entity;
  v34 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1B4D0CC(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v60 = sub_1B4D210(0LL);
      sub_1B4D0B8(v60, 0LL);
    }
  }
  if ( !LODWORD(v34[1].klass) )
    sub_1B4D1F4(effectObj, squareModel);
  v34[1].monitor = v33;
  sub_1B4CF34((CGThumbnailListItem_o *)&v34[1].monitor, (int32_t)v33, v31, v32);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v34,
                                            0,
                                            0,
                                            v35);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v61,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v36 = 0.0;
  v62 = v61;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v62.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v39 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v41 = (UnityEngine_GameObject_o *)v39;
    if ( !v39 )
      sub_1B4D1EC(0LL, v40);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v39,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1B4D1EC(Component_object, v43);
    v44 = squareModel->klass;
    v46 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v47 = (int32_t)current[2].monitor;
    v48 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
    v49 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
    {
      v50 = &v44->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v50 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v48;
        v50 += 4;
        if ( !v48 )
          goto LABEL_35;
      }
      v51 = (__int64)&v44->vtable[*v50 + 7].method;
    }
    else
    {
LABEL_35:
      v51 = sub_1B9D724(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v52 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v51)(squareModel, *(_QWORD *)(v51 + 8));
    if ( !v49 )
      sub_1B4D1EC(v52, v53);
    v55 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v49, v46, monitor, v47, v52, v54);
    GameObjectExtensions__SetParent_34075384(v41, this->fields.effectDetailParent, 0LL);
    if ( !byte_49B5366 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v56);
      byte_49B5366 = 1;
    }
    GameObjectExtensions__SetLocalScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_34069660(v41, 0.0, -v36, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v41, 1, 0LL);
    v36 = v36 + v55;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v36 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( effectObj )
      {
        v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v59, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1B4D1EC(effectObj, squareModel);
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
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x25
  __int64 v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_List_object__o *v80; // x0
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x8
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_49BE4B6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_1B4CF90(&IClassBoardItemModel_TypeInfo, v6);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v14);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v16);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B4CF90(&StringLiteral_3373/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_49BE4B6 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v20 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3373/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemIconComponentList, (int32_t)v24, v25, v26);
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
    p_method = sub_1B9D724(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
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
      sub_1B4D1EC(v31, v32);
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
      v40 = sub_1B9D724(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v44 = sub_1B9D724(v33, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v33, *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_1B4D1EC(0LL, v46);
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
      v51 = sub_1B9D724(v45, IClassBoardItemModel_TypeInfo, 0LL);
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
      v57 = sub_1B9D724(v47, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v47, *(_QWORD *)(v57 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B4D1EC(0LL, v60);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1B4D1EC(0LL, v62);
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
                (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v67;
        if ( !v67 )
          sub_1B4D1EC(0LL, v68);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0LL);
        if ( !itemIconListGrid )
          sub_1B4D1EC(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1B4D1EC(isQP, v64);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_49B5361 )
      {
        sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v71);
        byte_49B5361 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_49B5366 )
      {
        sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v72);
        byte_49B5366 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v76 = Component_object;
      if ( !Component_object )
        sub_1B4D1EC(0LL, v74);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v54, v58, v75);
      v80 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1B4D1EC(0LL, v77);
      items = v80->fields._items;
      v82 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v80->fields._version;
      if ( !items )
        sub_1B4D1EC(v80, v77);
      size = v80->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v80,
          v76,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = &items->obj.klass + size;
        v80->fields._size = size + 1;
        v84[4] = (Il2CppClass *)v76;
        sub_1B4CF34((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v76, v78, v79);
      }
      v35 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v58, v65);
  }
  v85 = *(_QWORD *)v33;
  v86 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_78;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_78:
    v88 = sub_1B9D724(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v33, *(_QWORD *)(v88 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1B4D1EC(itemListObj, v22);
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
  Il2CppObject *ComponentInChildren_object__49252240; // x0
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
  if ( (byte_49BE4B8 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1B4CF90(&MasterMissionListViewItem_TypeInfo, v16);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v18);
    byte_49BE4B8 = 1;
  }
  entity = 0LL;
  memset(&v53, 0, sizeof(v53));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
            sub_1B4D1F4(conditionListObj, *(_QWORD *)&condData.fields.Type);
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
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
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
        *(const MethodInfo_35631B8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = v23 + 1;
      v21->m_Items[v23 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v20 )
    goto LABEL_58;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v20,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = 1;
  v53 = v52;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v53,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    if ( !v31 )
      sub_1B4D1EC(v33, v34);
    DataMasterBase_object__object__int___TryGetEntity(
      v31,
      &entity,
      v53.fields._current,
      (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v35 = entity;
    if ( entity )
    {
      v36 = (MasterMissionListViewItem_o *)sub_1B4D1DC(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v36, (EventMissionEntity_o *)v35, 2, 0LL);
      if ( !v36 )
        sub_1B4D1EC(v37, v38);
      ComponentInChildren_object__49252240 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._6_CheckMissionCond.method)(
                                                               v36,
                                                               v36->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v32 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1B4D1EC(ComponentInChildren_object__49252240, v40);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1B4D1EC(0LL, v43);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v47 = UnityEngine_Object__Instantiate_object__49839864(
                Parent,
                transform,
                (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v47 )
          sub_1B4D1EC(0LL, v48);
        ComponentInChildren_object__49252240 = UnityEngine_Component__GetComponentInChildren_object__49252240(
                                                 (UnityEngine_Component_o *)v47,
                                                 (const MethodInfo_2EF8790 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__49252240;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1B4D1EC(ComponentInChildren_object__49252240, v40);
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
        sub_1B4D1EC(v51, v51);
      UIGrid__AddChild(v49, v51, 0LL);
      v32 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v53,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1B4D1EC(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_49BE4BC & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE4BC = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1B4D1EC(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BE4C1 & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_49BE4C1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}