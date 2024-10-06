void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A7324A & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A7324A = 1;
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

  if ( (byte_4A73247 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, callback);
    byte_4A73247 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1B9026C(0LL, v6);
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

  if ( (byte_4A73249 & 1) == 0 )
  {
    sub_1B90010(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__, closedAction);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A73249 = 1;
  }
  v5 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B90028(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v8);
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
  int32_t v73; // w2
  int32_t v74; // w3
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  System_Collections_Generic_List_object__o *v79; // x29
  _BOOL8 v80; // x0
  __int64 v81; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  Il2CppObject *v85; // x22
  __int64 v86; // x1
  System_Collections_Generic_List_object__o *v87; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v89; // x19
  System_Collections_Generic_List_object__o *v90; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v91; // x20
  __int64 v92; // x0
  __int64 v93; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v110; // x22
  __int64 v111; // x0
  __int64 v112; // x1
  int32_t v113; // w2
  int32_t v114; // w3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  System_String_o *v123; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v125; // w19
  int32_t v126; // w23
  int32_t v127; // w24
  int32_t v128; // w25
  System_String_o *v129; // x26
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  __int64 v133; // x8
  System_Collections_Generic_List_object__o *v134; // x0
  _BOOL8 v135; // x0
  __int64 v136; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v139; // x0
  __int64 v140; // x1
  Il2CppObject *v141; // x0
  __int64 v142; // x1
  _DWORD *v143; // x8
  __int64 v144; // x1
  Il2CppObject *v145; // x0
  __int64 v146; // x1
  Il2CppObject *v147; // x0
  __int64 v148; // x1
  Il2CppClass *v149; // x8
  __int64 v150; // x25
  int32_t v151; // w24
  Il2CppObject *v152; // x19
  __int64 v153; // x0
  __int64 v154; // x1
  _DWORD *v155; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v157; // x8
  __int64 v158; // x10
  unsigned __int64 v159; // x9
  __int64 v160; // x10
  unsigned __int64 v161; // x12
  int v162; // w13
  _DWORD *v163; // x8
  int32_t v164; // w8
  Il2CppObject *v165; // x0
  __int64 v166; // x1
  const MethodInfo *v167; // x2
  Il2CppClass *v168; // x8
  System_String_o *v169; // x25
  Il2CppObject *v170; // x0
  __int64 v171; // x1
  _DWORD *v172; // x8
  int32_t v173; // w26
  Il2CppObject *v174; // x0
  __int64 v175; // x1
  _DWORD *v176; // x8
  int32_t v177; // w20
  Il2CppObject *v178; // x0
  __int64 v179; // x1
  _DWORD *v180; // x8
  int32_t v181; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v182; // x22
  __int64 v183; // x0
  __int64 v184; // x1
  int32_t v185; // w2
  int32_t v186; // w3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  ClassBoardBaseDialog___c_c *v191; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v193; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v195; // w2
  int32_t v196; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v197; // x0
  ClassBoardBaseDialog___c_c *v198; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v199; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v201; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v202; // x0
  int32_t v203; // w2
  int32_t v204; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v205; // x0
  int32_t v208; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v209; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v211; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v212; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v213; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v214; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v215; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v216; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v217; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v218; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v219; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v220; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v221; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v223; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4A73244 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_1B90010(&Method_DataManager_GetMaster_FuncDispMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1B90010(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1B90010(&DataManager_TypeInfo, v10);
    sub_1B90010(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v11);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v12);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v13);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v14);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v15);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v16);
    sub_1B90010(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v17);
    sub_1B90010(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v18);
    sub_1B90010(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1B90010(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v20);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v21);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v22);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v23);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v24);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v25);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v27);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_1B90010(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v30);
    sub_1B90010(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v31);
    sub_1B90010(&int___TypeInfo, v32);
    sub_1B90010(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v33);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v34);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v35);
    sub_1B90010(&Method_System_Collections_Generic_List_string__Add__, v36);
    sub_1B90010(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v38);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v39);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v40);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v41);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v42);
    sub_1B90010(&Method_System_Collections_Generic_List_string___ctor__, v43);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v44);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v45);
    sub_1B90010(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v46);
    sub_1B90010(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v47);
    sub_1B90010(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v48);
    sub_1B90010(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1B90010(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v50);
    sub_1B90010(&Method_System_String_Join_int___, v51);
    sub_1B90010(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v52);
    sub_1B90010(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v53);
    sub_1B90010(&ClassBoardBaseDialog___c_TypeInfo, v54);
    sub_1B90010(&StringLiteral_868/*","*/, v55);
    sub_1B90010(&StringLiteral_1/*""*/, v56);
    byte_4A73244 = 1;
  }
  v223 = 0LL;
  entity = 0LL;
  v221 = 0LL;
  entitys = 0LL;
  memset(&v220, 0, sizeof(v220));
  v219 = 0LL;
  v217 = 0LL;
  memset(&v218, 0, sizeof(v218));
  memset(&v216, 0, sizeof(v216));
  v57 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v57;
  v213 = v57;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v209 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v212 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v212,
    (const MethodInfo_31D8404 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v63 = 0;
    v214 = (FuncDispMaster_o *)v61;
    v208 = v4;
    v211 = openedSquareArray;
    do
    {
      if ( v63 >= (unsigned int)max_length )
        sub_1B90274(IsPassive, v59);
      v64 = openedSquareArray->m_Items[v63];
      v65 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v65,
        (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v65;
      if ( !v64 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v64, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v64, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v209;
          if ( !v209 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v209,
                                        &entitys,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v79 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v79,
              (const MethodInfo_351018C *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v215,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v220.fields._list = *(_OWORD *)&v215.fields._dictionary;
            v220.fields._current = v215.fields._current.fields.key;
            while ( 1 )
            {
              v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v220,
                      (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v61 = (Il2CppObject *)v214;
              if ( !v80 )
                break;
              current = v220.fields._current;
              if ( !v220.fields._current )
                sub_1B9026C(v80, v81);
              if ( !v214 )
                sub_1B9026C(v80, v81);
              if ( FuncDispMaster__IsContainFuncIds(
                     v214,
                     &v219,
                     (System_Int32_array *)v220.fields._current[3].klass,
                     0LL) )
              {
                v83 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_868/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2F30388 *)Method_System_String_Join_int___);
                if ( !v79 )
                  sub_1B9026C(v83, v84);
                v85 = v83;
                if ( !System_Collections_Generic_List_object___Contains(
                        v79,
                        v83,
                        (const MethodInfo_3510D50 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v212 )
                    sub_1B9026C(0LL, v86);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v212,
                          v85,
                          (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v87 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v87,
                      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v212,
                      v85,
                      (Il2CppObject *)v87,
                      (const MethodInfo_31D8DA0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v212,
                           v85,
                           (const MethodInfo_31D8D34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v89 = v219;
                  v90 = (System_Collections_Generic_List_object__o *)Item;
                  v91 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B9025C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v91,
                    v89,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v64,
                    0LL);
                  if ( !v90 )
                    sub_1B9026C(v92, v93);
                  items = v90->fields._items;
                  v97 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v90->fields._version;
                  if ( !items )
                    sub_1B9026C(v92, v93);
                  size = v90->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v90,
                      (Il2CppObject *)v91,
                      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v99 = &items->obj.klass + size;
                    v90->fields._size = size + 1;
                    v99[4] = (Il2CppClass *)v91;
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)v91, v94, v95);
                  }
                  v119 = v79->fields._items;
                  v120 = Method_System_Collections_Generic_List_string__Add__;
                  ++v79->fields._version;
                  if ( !v119 )
                    sub_1B9026C(v100, v101);
                  v121 = v79->fields._size;
                  if ( (unsigned int)v121 >= v119->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v79,
                      v85,
                      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v122 = &v119->obj.klass + v121;
                    v79->fields._size = v121 + 1;
                    v122[4] = (Il2CppClass *)v85;
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v85, v102, v103);
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
                v110 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B9025C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v110,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  0LL);
                if ( !v213 )
                  sub_1B9026C(v111, v112);
                v115 = v213->fields._items;
                v116 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v213->fields._version;
                if ( !v115 )
                  sub_1B9026C(v111, v112);
                v117 = v213->fields._size;
                if ( (unsigned int)v117 >= v115->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v213,
                    (Il2CppObject *)v110,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
                }
                else
                {
                  v118 = &v115->obj.klass + v117;
                  v213->fields._size = v117 + 1;
                  v118[4] = (Il2CppClass *)v110;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)v110, v113, v114);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v220,
              (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v208;
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
                                      (const MethodInfo_312C5FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v60,
                                        &v223,
                                        v64->fields.targetId,
                                        v64->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v223;
            if ( !v223 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v223, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v223 || !v61 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v61,
                                            &v221,
                                            v223->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v223 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_868/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v223->fields.funcId,
                                              (const MethodInfo_2F30388 *)Method_System_String_Join_int___);
                if ( !v212 )
                  goto LABEL_157;
                v66 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v212,
                        IsPassive,
                        (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v67 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v67,
                    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v212,
                    v66,
                    (Il2CppObject *)v67,
                    (const MethodInfo_31D8DA0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v68 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v212,
                        v66,
                        (const MethodInfo_31D8D34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v69 = v221;
                v70 = v223;
                v71 = (System_Collections_Generic_List_object__o *)v68;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B9025C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v72, v69, v70, 0LL, v64, 0LL);
                if ( !v71 )
                  goto LABEL_157;
                v75 = v71->fields._items;
                v76 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v71->fields._version;
                if ( !v75 )
                  goto LABEL_157;
                v77 = v71->fields._size;
                if ( (unsigned int)v77 >= v75->max_length )
                {
                  v133 = v76[4];
                  v134 = v71;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v134,
                    (Il2CppObject *)v72,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v133 + 192) + 112LL));
                  goto LABEL_61;
                }
                v78 = &v75->obj.klass + v77;
                v71->fields._size = v77 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v123 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v125 = v64->fields.priority;
                v126 = v64->fields.id;
                v127 = v64->fields.iconId;
                v128 = v64->fields.skillType;
                v129 = EffectExplanation;
                v72 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B9025C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v72,
                  v123,
                  v129,
                  v126,
                  v125,
                  v127,
                  v128,
                  0LL);
                if ( !v213 )
                  goto LABEL_157;
                v130 = v213->fields._items;
                v131 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v213->fields._version;
                if ( !v130 )
                  goto LABEL_157;
                v132 = v213->fields._size;
                v61 = (Il2CppObject *)v214;
                if ( (unsigned int)v132 >= v130->max_length )
                {
                  v133 = v131[4];
                  v134 = v213;
                  goto LABEL_72;
                }
                v78 = &v130->obj.klass + v132;
                v213->fields._size = v132 + 1;
              }
              v78[4] = (Il2CppClass *)v72;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v72, v73, v74);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v211;
      ++v63;
      max_length = v211->max_length;
    }
    while ( v63 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v212;
  if ( !v212 )
LABEL_157:
    sub_1B9026C(IsPassive, v59);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v215,
    v212,
    (const MethodInfo_31D91E4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v218 = v215;
  while ( 1 )
  {
    v135 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v218,
             (const MethodInfo_32D664C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v135 )
      break;
    value = v218.fields._current.fields.value;
    if ( !v218.fields._current.fields.value )
      sub_1B9026C(v135, v136);
    if ( SLODWORD(v218.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v139 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v218.fields._current.fields.value,
               0,
               (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v139 )
        sub_1B9026C(0LL, v140);
      if ( v139[1].monitor )
      {
        v141 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v141 )
          sub_1B9026C(0LL, v142);
        v143 = v141[1].monitor;
        if ( !v143 )
          sub_1B9026C(v141, v142);
        if ( !Master_object )
          sub_1B9026C(0LL, v142);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v217,
               v143[4],
               (const MethodInfo_312C5FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v217 )
            sub_1B9026C(0LL, v144);
          Name = SkillEntity__getName((SkillEntity_o *)v217, 0LL);
        }
      }
      else
      {
        v145 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v145 )
          sub_1B9026C(0LL, v146);
        if ( v145[2].klass )
        {
          v147 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v147 )
            sub_1B9026C(0LL, v148);
          v149 = v147[2].klass;
          if ( !v149 )
            sub_1B9026C(v147, v148);
          Name = (System_String_o *)v149->_1.byval_arg.data;
        }
      }
      v150 = sub_1B900B8(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v215,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v151 = 0;
      *(_OWORD *)&v216.fields._list = *(_OWORD *)&v215.fields._dictionary;
      v216.fields._current = v215.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v216,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v216,
          (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v165 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v165 )
          sub_1B9026C(0LL, v166);
        v168 = v165[1].klass;
        if ( !v168 )
          sub_1B9026C(v165, v166);
        v169 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v168->_1.byval_arg.data,
                 (System_Int32_array *)v150,
                 v167);
        v170 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v170 )
          sub_1B9026C(0LL, v171);
        v172 = v170[2].monitor;
        if ( !v172 )
          sub_1B9026C(v170, v171);
        v173 = v172[5];
        v174 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v174 )
          sub_1B9026C(0LL, v175);
        v176 = v174[2].monitor;
        if ( !v176 )
          sub_1B9026C(v174, v175);
        v177 = v176[6];
        v178 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v178 )
          sub_1B9026C(0LL, v179);
        v180 = v178[2].monitor;
        if ( !v180 )
          sub_1B9026C(v178, v179);
        v181 = v180[14];
        v182 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B9025C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v182, Name, v169, v173, v151, v177, v181, 0LL);
        if ( !v213 )
          sub_1B9026C(v183, v184);
        v187 = v213->fields._items;
        v188 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v213->fields._version;
        if ( !v187 )
          sub_1B9026C(v183, v184);
        v189 = v213->fields._size;
        if ( (unsigned int)v189 >= v187->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v213,
            (Il2CppObject *)v182,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
        }
        else
        {
          v190 = &v187->obj.klass + v189;
          v213->fields._size = v189 + 1;
          v190[4] = (Il2CppClass *)v182;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v190 + 4), (int32_t)v182, v185, v186);
        }
        continue;
      }
      v152 = v216.fields._current;
      v153 = sub_1B900B8(int___TypeInfo, 0LL);
      if ( !v152 )
        sub_1B9026C(v153, v154);
      v155 = v152[1].monitor;
      if ( v155 )
      {
        if ( !v60 )
          sub_1B9026C(v153, v154);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v60,
                                                               v155[4],
                                                               v155[5],
                                                               0LL);
LABEL_110:
        v157 = (__int64)DispValFromSkill;
      }
      else
      {
        v157 = v153;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v152[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v150 )
        sub_1B9026C(DispValFromSkill, v154);
      v158 = *(_QWORD *)(v150 + 24);
      if ( v158 )
      {
        if ( (int)v158 >= 1 )
        {
          v159 = 0LL;
          v160 = (unsigned int)*(_QWORD *)(v150 + 24);
          do
          {
            if ( !v157 )
              sub_1B9026C(DispValFromSkill, v154);
            if ( v159 >= *(unsigned int *)(v157 + 24) )
              sub_1B90274(DispValFromSkill, v154);
            v161 = v150 + 4 * v159;
            v162 = *(_DWORD *)(v157 + 32 + 4 * v159++);
            *(_DWORD *)(v161 + 32) += v162;
          }
          while ( v160 != v159 );
        }
      }
      else
      {
        v150 = v157;
      }
      v163 = v152[2].monitor;
      if ( !v163 )
        sub_1B9026C(DispValFromSkill, v154);
      v164 = v163[20];
      if ( v164 > v151 )
        v151 = v164;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v218,
    (const MethodInfo_32D676C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v191 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v191 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v191->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v191->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v191);
      v191 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v193 = (Il2CppObject *)v191->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1B9025C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v193,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v195, v196);
  }
  v197 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v213,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_2EB8C70 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v198 = ClassBoardBaseDialog___c_TypeInfo;
  v199 = v197;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v198 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v198->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v198->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v198);
      v198 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v201 = (Il2CppObject *)v198->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_1,
      v201,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v202 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v202->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v202->__9__28_1, (int32_t)_9__28_1, v203, v204);
  }
  v205 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v199,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_2EC6428 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v205, (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4A7323E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A7323E = 1;
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
    sub_1B9026C(gameObject, v4);
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
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  System_Int32_array *v22; // x21
  System_Int32_array *v23; // x22
  unsigned __int64 v24; // x24
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v28; // x23

  if ( (byte_4A73248 & 1) == 0 )
  {
    sub_1B90010(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, closedAction);
    sub_1B90010(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___, v6);
    sub_1B90010(&int___TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B90010(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__, v11);
    sub_1B90010(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, v12);
    byte_4A73248 = 1;
  }
  v13 = sub_1B9025C(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = closedAction;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)closedAction, v18, v19);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v22 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, (unsigned int)size);
    v23 = (System_Int32_array *)sub_1B900B8(int___TypeInfo, (unsigned int)size);
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
                                                              (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
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
                                                              (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v23 )
          break;
        if ( v24 >= v23->max_length )
LABEL_23:
          sub_1B90274(Item, v15);
        v23->m_Items[++v24] = Item[2].fields._version;
        if ( size == v24 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1B9026C(Item, v15);
    }
LABEL_17:
    v25 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B90028(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B9025C(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
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

  if ( (byte_4A73245 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_25169/*"{x"*/, funcVals);
    sub_1B90010(&StringLiteral_24954/*"{"*/, v5);
    sub_1B90010(&StringLiteral_24884/*"xx}"*/, v6);
    sub_1B90010(&StringLiteral_24883/*"xxx}"*/, v7);
    sub_1B90010(&StringLiteral_25194/*"}"*/, v8);
    sub_1B90010(&StringLiteral_25172/*"{xxxx"*/, v9);
    sub_1B90010(&StringLiteral_25170/*"{xx"*/, v10);
    sub_1B90010(&StringLiteral_24882/*"xxxx}"*/, v11);
    sub_1B90010(&StringLiteral_24885/*"x}"*/, v12);
    sub_1B90010(&StringLiteral_25171/*"{xxx"*/, v13);
    byte_4A73245 = 1;
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
          v16 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_24954/*"{"*/,
                  v15,
                  (System_String_o *)StringLiteral_24882/*"xxxx}"*/,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v51, 0LL);
          v18 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_24954/*"{"*/,
                  v17,
                  (System_String_o *)StringLiteral_24883/*"xxx}"*/,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v51, 0LL);
          v20 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_24954/*"{"*/,
                  v19,
                  (System_String_o *)StringLiteral_24884/*"xx}"*/,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v51, 0LL);
          v22 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_24954/*"{"*/,
                  v21,
                  (System_String_o *)StringLiteral_24885/*"x}"*/,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v51, 0LL);
          v24 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_24954/*"{"*/,
                  v23,
                  (System_String_o *)StringLiteral_25194/*"}"*/,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v51, 0LL);
          v26 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_25169/*"{x"*/,
                  v25,
                  (System_String_o *)StringLiteral_25194/*"}"*/,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v51, 0LL);
          v28 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_25170/*"{xx"*/,
                  v27,
                  (System_String_o *)StringLiteral_25194/*"}"*/,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v51, 0LL);
          v30 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_25171/*"{xxx"*/,
                  v29,
                  (System_String_o *)StringLiteral_25194/*"}"*/,
                  0LL);
          v31 = System_Int32__ToString((int32_t)&v51, 0LL);
          v32 = System_String__Concat_61798352(
                  (System_String_o *)StringLiteral_25172/*"{xxxx"*/,
                  v31,
                  (System_String_o *)StringLiteral_25194/*"}"*/,
                  0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v34 = v32;
          v50 = 10000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !text )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(text, v16, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v37 = v32;
          v50 = 1000 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v37 )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(v37, v18, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v38 = v32;
          v50 = 100 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(v38, v20, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v39 = v32;
          v50 = 10 * funcVals->m_Items[v51 + 1];
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v39 )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(v39, v22, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v40 = v32;
          v35 = System_Int32__ToString((unsigned int)funcVals + 4 * v51 + 32, 0LL);
          if ( !v40 )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(v40, v24, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v41 = v32;
          v42 = 1717986919LL * funcVals->m_Items[v51 + 1];
          v50 = (v42 >> 63) + (SHIDWORD(v42) >> 2);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v41 )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(v41, v26, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v43 = v32;
          v44 = 1374389535LL * funcVals->m_Items[v51 + 1];
          v50 = (v44 >> 63) + (SHIDWORD(v44) >> 5);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v43 )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(v43, v28, v35, 0LL);
          if ( v51 >= funcVals->max_length )
            goto LABEL_26;
          v45 = v32;
          v46 = 274877907LL * funcVals->m_Items[v51 + 1];
          v50 = (v46 >> 63) + (SHIDWORD(v46) >> 6);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v45 )
            goto LABEL_27;
          v32 = System_String__Replace_61806720(v45, v30, v35, 0LL);
          if ( v51 >= funcVals->max_length )
LABEL_26:
            sub_1B90274(v32, v33);
          v47 = v32;
          v48 = 1759218605LL * funcVals->m_Items[v51 + 1];
          v50 = (v48 >> 63) + (SHIDWORD(v48) >> 12);
          v35 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v47 )
LABEL_27:
            sub_1B9026C(v35, v36);
          text = System_String__Replace_61806720(v47, v34, v35, 0LL);
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

  if ( (byte_4A73243 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_4A73243 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      itemIconComponentList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v9.fields._current )
        sub_1B9026C(0LL, v8);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v9.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1B9026C(this, method);
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

  if ( (byte_4A73241 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_1B90010(&LocalizationManager_TypeInfo, v5);
    sub_1B90010(&StringLiteral_3486/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v6);
    sub_1B90010(&StringLiteral_3488/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v7);
    sub_1B90010(&StringLiteral_3485/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v8);
    sub_1B90010(&StringLiteral_3487/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_1B90010(&StringLiteral_3483/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v10);
    byte_4A73241 = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3485/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3487/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
    v20 = int_TypeInfo;
    v31 = needNum;
    v21 = &v31;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3486/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3488/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
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
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3483/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3487/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
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
    sub_1B9026C(SelfUserGame, v12);
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
  int32_t v32; // w3
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
  float v54; // s10
  __int64 v55; // x1
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v58; // x0
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4A7323F & 1) == 0 )
  {
    sub_1B90010(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_1B90010(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_1B90010(&DataManager_TypeInfo, v10);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_1B90010(&IClassBoardSquareModel_TypeInfo, v15);
    sub_1B90010(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v18);
    byte_4A7323F = 1;
  }
  entity = 0LL;
  memset(&v61, 0, sizeof(v61));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
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
    p_method = sub_1BE1FF0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
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
    v30 = sub_1BE1FF0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(
                                            squareModel,
                                            *(_QWORD *)(v30 + 8));
  if ( !v21 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v21, &entity, v27, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1B900B8(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v33 = entity;
  v34 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1B9014C(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v59 = sub_1B90290(0LL);
      sub_1B90138(v59, 0LL);
    }
  }
  if ( !LODWORD(v34[1].klass) )
    sub_1B90274(effectObj, squareModel);
  v34[1].monitor = v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v34[1].monitor, (int32_t)v33, v31, v32);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v34,
                                            0,
                                            0,
                                            v35);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v36 = 0.0;
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v61.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v39 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v41 = (UnityEngine_GameObject_o *)v39;
    if ( !v39 )
      sub_1B9026C(0LL, v40);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v39,
                         (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1B9026C(Component_object, v43);
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
      v51 = sub_1BE1FF0(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v52 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v51)(squareModel, *(_QWORD *)(v51 + 8));
    if ( !v49 )
      sub_1B9026C(v52, v53);
    v54 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v49, v46, monitor, v47, v52, 0LL);
    GameObjectExtensions__SetParent_33776568(v41, this->fields.effectDetailParent, 0LL);
    if ( !byte_4A6A9C6 )
    {
      sub_1B90010(&UnityEngine_Vector3_TypeInfo, v55);
      byte_4A6A9C6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_33770844(v41, 0.0, -v36, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v41, 1, 0LL);
    v36 = v36 + v54;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
        v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v58, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1B9026C(effectObj, squareModel);
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
  int32_t v26; // w3
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
  int32_t v78; // w3
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

  if ( (byte_4A73240 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_1B90010(&IClassBoardItemModel_TypeInfo, v6);
    sub_1B90010(&System_IDisposable_TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_1B90010(&LocalizationManager_TypeInfo, v14);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v16);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B90010(&StringLiteral_3481/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_4A73240 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v20 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3481/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.itemIconComponentList, (int32_t)v24, v25, v26);
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
    p_method = sub_1BE1FF0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
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
      sub_1B9026C(v31, v32);
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
      v40 = sub_1BE1FF0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v44 = sub_1BE1FF0(v33, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v33, *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45 )
      sub_1B9026C(0LL, v46);
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
      v51 = sub_1BE1FF0(v45, IClassBoardItemModel_TypeInfo, 0LL);
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
      v57 = sub_1BE1FF0(v47, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v47, *(_QWORD *)(v57 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B9026C(0LL, v60);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1B9026C(0LL, v62);
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
                (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v67;
        if ( !v67 )
          sub_1B9026C(0LL, v68);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0LL);
        if ( !itemIconListGrid )
          sub_1B9026C(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1B9026C(isQP, v64);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_4A6A9C1 )
      {
        sub_1B90010(&UnityEngine_Vector3_TypeInfo, v71);
        byte_4A6A9C1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_4A6A9C6 )
      {
        sub_1B90010(&UnityEngine_Vector3_TypeInfo, v72);
        byte_4A6A9C6 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v75 = Component_object;
      if ( !Component_object )
        sub_1B9026C(0LL, v74);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v54, v58, 0LL);
      v79 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1B9026C(0LL, v76);
      items = v79->fields._items;
      v81 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v79->fields._version;
      if ( !items )
        sub_1B9026C(v79, v76);
      size = v79->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v79,
          v75,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = &items->obj.klass + size;
        v79->fields._size = size + 1;
        v83[4] = (Il2CppClass *)v75;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v83 + 4), (int32_t)v75, v77, v78);
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
    v87 = sub_1BE1FF0(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v33, *(_QWORD *)(v87 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1B9026C(itemListObj, v22);
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
  Il2CppObject *ComponentInChildren_object__48779044; // x0
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
  if ( (byte_4A73242 & 1) == 0 )
  {
    sub_1B90010(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_1B90010(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1B90010(&MasterMissionListViewItem_TypeInfo, v16);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v18);
    byte_4A73242 = 1;
  }
  entity = 0LL;
  memset(&v53, 0, sizeof(v53));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
            sub_1B90274(conditionListObj, *(_QWORD *)&condData.fields.Type);
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
                *(const MethodInfo_34F399C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
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
        *(const MethodInfo_34F399C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = v23 + 1;
      v21->m_Items[v23 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v20 )
    goto LABEL_58;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v20,
    (const MethodInfo_34F4470 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = 1;
  v53 = v52;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v53,
            (const MethodInfo_3286084 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    if ( !v31 )
      sub_1B9026C(v33, v34);
    DataMasterBase_object__object__int___TryGetEntity(
      v31,
      &entity,
      v53.fields._current,
      (const MethodInfo_312C5FC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v35 = entity;
    if ( entity )
    {
      v36 = (MasterMissionListViewItem_o *)sub_1B9025C(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v36, (EventMissionEntity_o *)v35, 2, 0LL);
      if ( !v36 )
        sub_1B9026C(v37, v38);
      ComponentInChildren_object__48779044 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v36->klass->vtable._6_CheckMissionCond.method)(
                                                               v36,
                                                               v36->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v32 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1B9026C(ComponentInChildren_object__48779044, v40);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1B9026C(0LL, v43);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v47 = UnityEngine_Object__Instantiate_object__49357576(
                Parent,
                transform,
                (const MethodInfo_2F12308 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v47 )
          sub_1B9026C(0LL, v48);
        ComponentInChildren_object__48779044 = UnityEngine_Component__GetComponentInChildren_object__48779044(
                                                 (UnityEngine_Component_o *)v47,
                                                 (const MethodInfo_2E84F24 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__48779044;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1B9026C(ComponentInChildren_object__48779044, v40);
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
        sub_1B9026C(v51, v51);
      UIGrid__AddChild(v49, v51, 0LL);
      v32 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v53,
    (const MethodInfo_3286080 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1B9026C(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4A73246 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A73246 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1B9026C(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A7324B & 1) == 0 )
  {
    sub_1B90010(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_4A7324B = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B9026C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}