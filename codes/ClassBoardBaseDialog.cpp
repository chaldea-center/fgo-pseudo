void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FF675 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FF675 = 1;
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
  ClassBoardSquare_o *v6; // x0

  if ( (byte_49FF672 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callback);
    byte_49FF672 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v6 = this->fields.classBoardSquare;
    if ( !v6 )
      sub_1B64324(0LL);
    ClassBoardSquare__SetSelectedEffectActive(v6, 0, 0LL);
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

  if ( (byte_49FF674 & 1) == 0 )
  {
    sub_1B640C8(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__, closedAction);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FF674 = 1;
  }
  v5 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  Il2CppObject *v59; // x21
  Il2CppObject *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  signed int max_length; // w8
  signed int v66; // w27
  ClassBoardSquareEntity_o *v67; // x28
  System_Collections_Generic_List_object__o *v68; // x19
  Il2CppObject *v69; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_List_object__o *v72; // x19
  Il2CppObject *v73; // x0
  FuncDispEntity_o *v74; // x19
  SkillLvEntity_o *v75; // x23
  System_Collections_Generic_List_object__o *v76; // x22
  __int64 v77; // x1
  __int64 v78; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  System_Collections_Generic_List_object__o *v86; // x29
  _BOOL8 v87; // x0
  Il2CppObject *current; // x26
  __int64 v89; // x1
  __int64 v90; // x2
  Il2CppObject *v91; // x0
  Il2CppObject *v92; // x22
  __int64 v93; // x1
  __int64 v94; // x2
  System_Collections_Generic_List_object__o *v95; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v97; // x19
  System_Collections_Generic_List_object__o *v98; // x23
  __int64 v99; // x1
  __int64 v100; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v101; // x20
  __int64 v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *items; // x8
  _QWORD *v106; // x9
  __int64 size; // x10
  Il2CppClass **v108; // x0
  __int64 v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v118; // x22
  __int64 v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  System_String_o *v130; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v132; // w19
  int32_t v133; // w23
  int32_t v134; // w24
  int32_t v135; // w25
  System_String_o *v136; // x26
  __int64 v137; // x1
  __int64 v138; // x2
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  __int64 v142; // x8
  System_Collections_Generic_List_object__o *v143; // x0
  _BOOL8 v144; // x0
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v147; // x0
  Il2CppObject *v148; // x0
  _DWORD *v149; // x8
  Il2CppObject *v150; // x0
  Il2CppObject *v151; // x0
  Il2CppClass *v152; // x8
  __int64 v153; // x25
  int32_t v154; // w24
  Il2CppObject *v155; // x19
  __int64 v156; // x0
  __int64 v157; // x1
  _DWORD *v158; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v160; // x8
  __int64 v161; // x10
  unsigned __int64 v162; // x9
  __int64 v163; // x10
  unsigned __int64 v164; // x12
  int v165; // w13
  _DWORD *v166; // x8
  int32_t v167; // w8
  Il2CppObject *v168; // x0
  const MethodInfo *v169; // x2
  Il2CppClass *v170; // x8
  System_String_o *v171; // x25
  Il2CppObject *v172; // x0
  _DWORD *v173; // x8
  int32_t v174; // w26
  Il2CppObject *v175; // x0
  _DWORD *v176; // x8
  int32_t v177; // w20
  Il2CppObject *v178; // x0
  __int64 v179; // x1
  __int64 v180; // x2
  _DWORD *v181; // x8
  int32_t v182; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v183; // x22
  __int64 v184; // x0
  int32_t v185; // w2
  int32_t v186; // w3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  __int64 v191; // x1
  __int64 v192; // x2
  ClassBoardBaseDialog___c_c *v193; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v195; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v197; // w2
  int32_t v198; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v199; // x0
  __int64 v200; // x1
  __int64 v201; // x2
  ClassBoardBaseDialog___c_c *v202; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v203; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v205; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v209; // x0
  int32_t v212; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v213; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v215; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v216; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v217; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v218; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v219; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v220; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v221; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v222; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v223; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v224; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v225; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v227; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_49FF66F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_1B640C8(&Method_DataManager_GetMaster_FuncDispMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v16);
    sub_1B640C8(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v17);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v18);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v20);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v21);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v23);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v25);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v30);
    sub_1B640C8(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v31);
    sub_1B640C8(&int___TypeInfo, v32);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v33);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v34);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v38);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v39);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v40);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v41);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v42);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v43);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v44);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v45);
    sub_1B640C8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v46);
    sub_1B640C8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v47);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v48);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v49);
    sub_1B640C8(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v50);
    sub_1B640C8(&Method_System_String_Join_int___, v51);
    sub_1B640C8(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v52);
    sub_1B640C8(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v53);
    sub_1B640C8(&ClassBoardBaseDialog___c_TypeInfo, v54);
    sub_1B640C8(&StringLiteral_869/*","*/, v55);
    sub_1B640C8(&StringLiteral_1/*""*/, v56);
    byte_49FF66F = 1;
  }
  v227 = 0LL;
  entity = 0LL;
  v225 = 0LL;
  entitys = 0LL;
  memset(&v224, 0, sizeof(v224));
  v223 = 0LL;
  v221 = 0LL;
  memset(&v222, 0, sizeof(v222));
  memset(&v220, 0, sizeof(v220));
  v57 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                       *(_QWORD *)&dispType,
                                                       ignoreTurnOrCountPassive);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v57;
  v217 = v57;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  v59 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v213 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v216 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                      System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                      v61,
                                                                      v62);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v216,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v66 = 0;
    v218 = (FuncDispMaster_o *)v60;
    v212 = v4;
    v215 = openedSquareArray;
    do
    {
      if ( v66 >= (unsigned int)max_length )
        sub_1B6432C(IsPassive, v63);
      v67 = openedSquareArray->m_Items[v66];
      v68 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo,
                                                           v63,
                                                           v64);
      System_Collections_Generic_List_object____ctor(
        v68,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v68;
      if ( !v67 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v67, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v67, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v213;
          if ( !v213 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v213,
                                        &entitys,
                                        v67->fields.targetId,
                                        v67->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v86 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                 v63,
                                                                 v64);
            System_Collections_Generic_List_object____ctor(
              v86,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v219,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v224.fields._list = *(_OWORD *)&v219.fields._dictionary;
            v224.fields._current = v219.fields._current.fields.key;
            while ( 1 )
            {
              v87 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v224,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v60 = (Il2CppObject *)v218;
              if ( !v87 )
                break;
              current = v224.fields._current;
              if ( !v224.fields._current )
                sub_1B64324(v87);
              if ( !v218 )
                sub_1B64324(v87);
              if ( FuncDispMaster__IsContainFuncIds(
                     v218,
                     &v223,
                     (System_Int32_array *)v224.fields._current[3].klass,
                     0LL) )
              {
                v91 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_869/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
                if ( !v86 )
                  sub_1B64324(v91);
                v92 = v91;
                if ( !System_Collections_Generic_List_object___Contains(
                        v86,
                        v91,
                        (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v216 )
                    sub_1B64324(0LL);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v216,
                          v92,
                          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v95 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                         System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                         v93,
                                                                         v94);
                    System_Collections_Generic_List_object____ctor(
                      v95,
                      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v216,
                      v92,
                      (Il2CppObject *)v95,
                      (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v216,
                           v92,
                           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v97 = v223;
                  v98 = (System_Collections_Generic_List_object__o *)Item;
                  v101 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B64314(
                                                                                                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                                v99,
                                                                                                v100);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v101,
                    v97,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v67,
                    0LL);
                  if ( !v98 )
                    sub_1B64324(v102);
                  items = v98->fields._items;
                  v106 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v98->fields._version;
                  if ( !items )
                    sub_1B64324(v102);
                  size = v98->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v98,
                      (Il2CppObject *)v101,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v108 = &items->obj.klass + size;
                    v98->fields._size = size + 1;
                    v108[4] = (Il2CppClass *)v101;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v108 + 4), (int32_t)v101, v103, v104);
                  }
                  v126 = v86->fields._items;
                  v127 = Method_System_Collections_Generic_List_string__Add__;
                  ++v86->fields._version;
                  if ( !v126 )
                    sub_1B64324(v109);
                  v128 = v86->fields._size;
                  if ( (unsigned int)v128 >= v126->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v86,
                      v92,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v129 = &v126->obj.klass + v128;
                    v86->fields._size = v128 + 1;
                    v129[4] = (Il2CppClass *)v92;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v129 + 4), (int32_t)v92, v110, v111);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v67->fields.priority;
                id = v67->fields.id;
                iconId = v67->fields.iconId;
                skillType = v67->fields.skillType;
                v118 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B64314(
                                                                                         ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                         v89,
                                                                                         v90);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v118,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  0LL);
                if ( !v217 )
                  sub_1B64324(v119);
                v122 = v217->fields._items;
                v123 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v217->fields._version;
                if ( !v122 )
                  sub_1B64324(v119);
                v124 = v217->fields._size;
                if ( (unsigned int)v124 >= v122->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v217,
                    (Il2CppObject *)v118,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
                }
                else
                {
                  v125 = &v122->obj.klass + v124;
                  v217->fields._size = v124 + 1;
                  v125[4] = (Il2CppClass *)v118;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v125 + 4), (int32_t)v118, v120, v121);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v224,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            v4 = v212;
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
                                      v67->fields.targetId,
                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v59 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v59,
                                        &v227,
                                        v67->fields.targetId,
                                        v67->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v227;
            if ( !v227 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v227, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v227 || !v60 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v60,
                                            &v225,
                                            v227->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v227 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_869/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v227->fields.funcId,
                                              (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
                if ( !v216 )
                  goto LABEL_157;
                v69 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v216,
                        IsPassive,
                        (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v72 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                       System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
                                                                       v70,
                                                                       v71);
                  System_Collections_Generic_List_object____ctor(
                    v72,
                    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v216,
                    v69,
                    (Il2CppObject *)v72,
                    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v73 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v216,
                        v69,
                        (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v74 = v225;
                v75 = v227;
                v76 = (System_Collections_Generic_List_object__o *)v73;
                v79 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B64314(
                                                                                             ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                             v77,
                                                                                             v78);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v79, v74, v75, 0LL, v67, 0LL);
                if ( !v76 )
                  goto LABEL_157;
                v82 = v76->fields._items;
                v83 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v76->fields._version;
                if ( !v82 )
                  goto LABEL_157;
                v84 = v76->fields._size;
                if ( (unsigned int)v84 >= v82->max_length )
                {
                  v142 = v83[4];
                  v143 = v76;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v143,
                    (Il2CppObject *)v79,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v142 + 192) + 112LL));
                  goto LABEL_61;
                }
                v85 = &v82->obj.klass + v84;
                v76->fields._size = v84 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v130 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v132 = v67->fields.priority;
                v133 = v67->fields.id;
                v134 = v67->fields.iconId;
                v135 = v67->fields.skillType;
                v136 = EffectExplanation;
                v79 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B64314(
                                                                                             ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                             v137,
                                                                                             v138);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v79,
                  v130,
                  v136,
                  v133,
                  v132,
                  v134,
                  v135,
                  0LL);
                if ( !v217 )
                  goto LABEL_157;
                v139 = v217->fields._items;
                v140 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v217->fields._version;
                if ( !v139 )
                  goto LABEL_157;
                v141 = v217->fields._size;
                v60 = (Il2CppObject *)v218;
                if ( (unsigned int)v141 >= v139->max_length )
                {
                  v142 = v140[4];
                  v143 = v217;
                  goto LABEL_72;
                }
                v85 = &v139->obj.klass + v141;
                v217->fields._size = v141 + 1;
              }
              v85[4] = (Il2CppClass *)v79;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v79, v80, v81);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v215;
      ++v66;
      max_length = v215->max_length;
    }
    while ( v66 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v216;
  if ( !v216 )
LABEL_157:
    sub_1B64324(IsPassive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v219,
    v216,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v222 = v219;
  while ( 1 )
  {
    v144 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v222,
             (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v144 )
      break;
    value = v222.fields._current.fields.value;
    if ( !v222.fields._current.fields.value )
      sub_1B64324(v144);
    if ( SLODWORD(v222.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v147 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v222.fields._current.fields.value,
               0,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v147 )
        sub_1B64324(0LL);
      if ( v147[1].monitor )
      {
        v148 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v148 )
          sub_1B64324(0LL);
        v149 = v148[1].monitor;
        if ( !v149 )
          sub_1B64324(v148);
        if ( !Master_object )
          sub_1B64324(0LL);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v221,
               v149[4],
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v221 )
            sub_1B64324(0LL);
          Name = SkillEntity__getName((SkillEntity_o *)v221, 0LL);
        }
      }
      else
      {
        v150 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v150 )
          sub_1B64324(0LL);
        if ( v150[2].klass )
        {
          v151 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v151 )
            sub_1B64324(0LL);
          v152 = v151[2].klass;
          if ( !v152 )
            sub_1B64324(v151);
          Name = (System_String_o *)v152->_1.byval_arg.data;
        }
      }
      v153 = sub_1B64170(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v219,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v154 = 0;
      *(_OWORD *)&v220.fields._list = *(_OWORD *)&v219.fields._dictionary;
      v220.fields._current = v219.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v220,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v220,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v168 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v168 )
          sub_1B64324(0LL);
        v170 = v168[1].klass;
        if ( !v170 )
          sub_1B64324(v168);
        v171 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v170->_1.byval_arg.data,
                 (System_Int32_array *)v153,
                 v169);
        v172 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v172 )
          sub_1B64324(0LL);
        v173 = v172[2].monitor;
        if ( !v173 )
          sub_1B64324(v172);
        v174 = v173[5];
        v175 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v175 )
          sub_1B64324(0LL);
        v176 = v175[2].monitor;
        if ( !v176 )
          sub_1B64324(v175);
        v177 = v176[6];
        v178 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v178 )
          sub_1B64324(0LL);
        v181 = v178[2].monitor;
        if ( !v181 )
          sub_1B64324(v178);
        v182 = v181[14];
        v183 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B64314(
                                                                                 ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                 v179,
                                                                                 v180);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v183, Name, v171, v174, v154, v177, v182, 0LL);
        if ( !v217 )
          sub_1B64324(v184);
        v187 = v217->fields._items;
        v188 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v217->fields._version;
        if ( !v187 )
          sub_1B64324(v184);
        v189 = v217->fields._size;
        if ( (unsigned int)v189 >= v187->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v217,
            (Il2CppObject *)v183,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
        }
        else
        {
          v190 = &v187->obj.klass + v189;
          v217->fields._size = v189 + 1;
          v190[4] = (Il2CppClass *)v183;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v190 + 4), (int32_t)v183, v185, v186);
        }
        continue;
      }
      v155 = v220.fields._current;
      v156 = sub_1B64170(int___TypeInfo, 0LL);
      if ( !v155 )
        sub_1B64324(v156);
      v158 = v155[1].monitor;
      if ( v158 )
      {
        if ( !v59 )
          sub_1B64324(v156);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v59,
                                                               v158[4],
                                                               v158[5],
                                                               0LL);
LABEL_110:
        v160 = (__int64)DispValFromSkill;
      }
      else
      {
        v160 = v156;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v155[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v153 )
        sub_1B64324(DispValFromSkill);
      v161 = *(_QWORD *)(v153 + 24);
      if ( v161 )
      {
        if ( (int)v161 >= 1 )
        {
          v162 = 0LL;
          v163 = (unsigned int)*(_QWORD *)(v153 + 24);
          do
          {
            if ( !v160 )
              sub_1B64324(DispValFromSkill);
            if ( v162 >= *(unsigned int *)(v160 + 24) )
              sub_1B6432C(DispValFromSkill, v157);
            v164 = v153 + 4 * v162;
            v165 = *(_DWORD *)(v160 + 32 + 4 * v162++);
            *(_DWORD *)(v164 + 32) += v165;
          }
          while ( v163 != v162 );
        }
      }
      else
      {
        v153 = v160;
      }
      v166 = v155[2].monitor;
      if ( !v166 )
        sub_1B64324(DispValFromSkill);
      v167 = v166[20];
      if ( v167 > v154 )
        v154 = v167;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v222,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v193 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v193 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v193->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v193->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v193);
      v193 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v195 = (Il2CppObject *)v193->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1B64314(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v191,
                                               v192);
    System_Func_object__int____ctor(
      _9__28_0,
      v195,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v197, v198);
  }
  v199 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v217,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v202 = ClassBoardBaseDialog___c_TypeInfo;
  v203 = v199;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v202 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v202->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v202->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v202);
      v202 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v205 = (Il2CppObject *)v202->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1B64314(
                                               System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                               v200,
                                               v201);
    System_Func_object__int____ctor(
      _9__28_1,
      v205,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v206 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v206->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v206->__9__28_1, (int32_t)_9__28_1, v207, v208);
  }
  v209 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v203,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v209, (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_49FF669 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF669 = 1;
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
    sub_1B64324(gameObject);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  System_Int32_array *v21; // x21
  System_Int32_array *v22; // x22
  unsigned __int64 v23; // x24
  __int64 v24; // x1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  ItemLinkInfoWindowComponent_CallbackFunc_o *v30; // x23

  if ( (byte_49FF673 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, closedAction);
    sub_1B640C8(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__, v11);
    sub_1B640C8(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, v12);
    byte_49FF673 = 1;
  }
  v13 = sub_1B64314(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo, closedAction, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 24) = closedAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)closedAction, v17, v18);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v21 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)size);
    v22 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v23,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v21 )
          break;
        if ( v23 >= v21->max_length )
          goto LABEL_23;
        v21->m_Items[v23 + 1] = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v23,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v22 )
          break;
        if ( v23 >= v22->max_length )
LABEL_23:
          sub_1B6432C(Item, v24);
        v22->m_Items[++v23] = Item[2].fields._version;
        if ( size == v23 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1B64324(Item);
    }
LABEL_17:
    v25 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B640E0(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B640AC(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B64314(
                                                          ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                          v28,
                                                          v29);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)v13,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v21, v22, v30, 0, 0LL);
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
  System_String_o *v36; // x22
  System_String_o *v37; // x22
  System_String_o *v38; // x22
  System_String_o *v39; // x22
  System_String_o *v40; // x22
  unsigned __int64 v41; // x8
  System_String_o *v42; // x22
  unsigned __int64 v43; // x8
  System_String_o *v44; // x22
  unsigned __int64 v45; // x8
  System_String_o *v46; // x21
  unsigned __int64 v47; // x8
  int v49; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v50; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FF670 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_25028/*"{x"*/, funcVals);
    sub_1B640C8(&StringLiteral_24815/*"{"*/, v5);
    sub_1B640C8(&StringLiteral_24746/*"xx}"*/, v6);
    sub_1B640C8(&StringLiteral_24745/*"xxx}"*/, v7);
    sub_1B640C8(&StringLiteral_25052/*"}"*/, v8);
    sub_1B640C8(&StringLiteral_25031/*"{xxxx"*/, v9);
    sub_1B640C8(&StringLiteral_25029/*"{xx"*/, v10);
    sub_1B640C8(&StringLiteral_24744/*"xxxx}"*/, v11);
    sub_1B640C8(&StringLiteral_24747/*"x}"*/, v12);
    sub_1B640C8(&StringLiteral_25030/*"{xxx"*/, v13);
    byte_49FF670 = 1;
  }
  v49 = 0;
  if ( funcVals )
  {
    v14 = *(_QWORD *)&funcVals->max_length;
    if ( v14 )
    {
      v50 = 0;
      if ( (int)v14 >= 1 )
      {
        do
        {
          v15 = System_Int32__ToString((int32_t)&v50, 0LL);
          v16 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v15,
                  (System_String_o *)StringLiteral_24744/*"xxxx}"*/,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v50, 0LL);
          v18 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v17,
                  (System_String_o *)StringLiteral_24745/*"xxx}"*/,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v50, 0LL);
          v20 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v19,
                  (System_String_o *)StringLiteral_24746/*"xx}"*/,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v50, 0LL);
          v22 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v21,
                  (System_String_o *)StringLiteral_24747/*"x}"*/,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v50, 0LL);
          v24 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_24815/*"{"*/,
                  v23,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v50, 0LL);
          v26 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25028/*"{x"*/,
                  v25,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v50, 0LL);
          v28 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25029/*"{xx"*/,
                  v27,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v50, 0LL);
          v30 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25030/*"{xxx"*/,
                  v29,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          v31 = System_Int32__ToString((int32_t)&v50, 0LL);
          v32 = System_String__Concat_61386656(
                  (System_String_o *)StringLiteral_25031/*"{xxxx"*/,
                  v31,
                  (System_String_o *)StringLiteral_25052/*"}"*/,
                  0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v34 = v32;
          v49 = 10000 * funcVals->m_Items[v50 + 1];
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !text )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(text, v16, v35, 0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v36 = v32;
          v49 = 1000 * funcVals->m_Items[v50 + 1];
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v36 )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(v36, v18, v35, 0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v37 = v32;
          v49 = 100 * funcVals->m_Items[v50 + 1];
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v37 )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(v37, v20, v35, 0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v38 = v32;
          v49 = 10 * funcVals->m_Items[v50 + 1];
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(v38, v22, v35, 0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v39 = v32;
          v35 = System_Int32__ToString((unsigned int)funcVals + 4 * v50 + 32, 0LL);
          if ( !v39 )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(v39, v24, v35, 0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v40 = v32;
          v41 = 1717986919LL * funcVals->m_Items[v50 + 1];
          v49 = (v41 >> 63) + (SHIDWORD(v41) >> 2);
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v40 )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(v40, v26, v35, 0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v42 = v32;
          v43 = 1374389535LL * funcVals->m_Items[v50 + 1];
          v49 = (v43 >> 63) + (SHIDWORD(v43) >> 5);
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v42 )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(v42, v28, v35, 0LL);
          if ( v50 >= funcVals->max_length )
            goto LABEL_26;
          v44 = v32;
          v45 = 274877907LL * funcVals->m_Items[v50 + 1];
          v49 = (v45 >> 63) + (SHIDWORD(v45) >> 6);
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v44 )
            goto LABEL_27;
          v32 = System_String__Replace_61395016(v44, v30, v35, 0LL);
          if ( v50 >= funcVals->max_length )
LABEL_26:
            sub_1B6432C(v32, v33);
          v46 = v32;
          v47 = 1759218605LL * funcVals->m_Items[v50 + 1];
          v49 = (v47 >> 63) + (SHIDWORD(v47) >> 12);
          v35 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v46 )
LABEL_27:
            sub_1B64324(v35);
          text = System_String__Replace_61395016(v46, v34, v35, 0LL);
          ++v50;
        }
        while ( (signed int)v50 < (signed int)funcVals->max_length );
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF66E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_49FF66E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      itemIconComponentList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1B64324(0LL);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v8.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1B64324(this);
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
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v15; // x22
  System_Int32_c *v16; // x0
  int32_t *v17; // x1
  Il2CppObject *v18; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v24; // [xsp+18h] [xbp-48h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49FF66C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_3463/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v6);
    sub_1B640C8(&StringLiteral_3465/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v7);
    sub_1B640C8(&StringLiteral_3462/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v8);
    sub_1B640C8(&StringLiteral_3464/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_1B640C8(&StringLiteral_3460/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v10);
    byte_49FF66C = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3462/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3464/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
    v16 = int_TypeInfo;
    v24 = needNum;
    v17 = &v24;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3463/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3465/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
    v16 = int_TypeInfo;
    v17 = &v25;
    v25 = needNum;
  }
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(v16, v17);
  SelfUserGame = System_String__Format(v15, v18, 0LL);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3460/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3464/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v23 = klass;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  SelfUserGame = System_String__Format(v21, v22, 0LL);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0LL)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_1B64324(SelfUserGame);
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
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  ClassBoardSquareEntity_o *v34; // x22
  UnityEngine_GameObject_o *v35; // x21
  const MethodInfo *v36; // x3
  float v37; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v40; // x0
  UnityEngine_GameObject_o *v41; // x22
  Il2CppObject *Component_object; // x0
  IClassBoardSquareModel_c *v43; // x8
  System_String_o *monitor; // x25
  System_String_o *v45; // x26
  int32_t v46; // w24
  __int64 v47; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v48; // x23
  int32_t *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  const MethodInfo *v52; // x5
  float v53; // s10
  __int64 v54; // x1
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_49FF66A & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    byte_49FF66A = 1;
  }
  entity = 0LL;
  memset(&v60, 0, sizeof(v60));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
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
    p_method = sub_1BB60A8(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
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
    v30 = sub_1BB60A8(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(
                                            squareModel,
                                            *(_QWORD *)(v30 + 8));
  if ( !v21 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v21, &entity, v27, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1B64170(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v34 = entity;
  v35 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1B64204(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v58 = sub_1B64348(0LL);
      sub_1B641F0(v58, 0LL);
    }
  }
  if ( !LODWORD(v35[1].klass) )
    sub_1B6432C(effectObj, v31);
  v35[1].monitor = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35[1].monitor, (int32_t)v34, v32, v33);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v35,
                                            0,
                                            0,
                                            v36);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v37 = 0.0;
  v60 = v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v60.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v40 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v41 = (UnityEngine_GameObject_o *)v40;
    if ( !v40 )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v40,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1B64324(Component_object);
    v43 = squareModel->klass;
    v45 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v46 = (int32_t)current[2].monitor;
    v47 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
    v48 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
    {
      v49 = &v43->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v49 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v47;
        v49 += 4;
        if ( !v47 )
          goto LABEL_35;
      }
      v50 = (__int64)&v43->vtable[*v49 + 7].method;
    }
    else
    {
LABEL_35:
      v50 = sub_1BB60A8(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v51 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v50)(squareModel, *(_QWORD *)(v50 + 8));
    if ( !v48 )
      sub_1B64324(v51);
    v53 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v48, v45, monitor, v46, v51, v52);
    GameObjectExtensions__SetParent_33381176(v41, this->fields.effectDetailParent, 0LL);
    if ( !byte_49F7116 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v54);
      byte_49F7116 = 1;
    }
    GameObjectExtensions__SetLocalScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_33375564(v41, 0.0, -v37, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v41, 1, 0LL);
    v37 = v37 + v53;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v37 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( effectObj )
      {
        v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v57, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1B64324(effectObj);
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
  UnityEngine_Object_o *itemQpObj; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x0
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
  __int64 v46; // x24
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t v51; // w0
  __int64 v52; // x8
  int32_t v53; // w23
  __int64 v54; // x9
  IClassBoardItemModel_c **v55; // x10
  __int64 v56; // x0
  int32_t v57; // w24
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  _BOOL8 isQP; // x0
  const MethodInfo *v61; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v63; // x0
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v69; // x25
  int32_t v70; // w2
  int32_t v71; // w3
  System_Collections_Generic_List_object__o *v72; // x0
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x8
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_49FF66B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_1B640C8(&IClassBoardItemModel_TypeInfo, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&StringLiteral_3458/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_49FF66B = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v20 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3458/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
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
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemIconComponentList, (int32_t)v25, v26, v27);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v29 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1BB60A8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v33 = v32;
  v34 = 0;
  v35 = 1;
LABEL_24:
  for ( i = v34; ; i = 1 )
  {
    if ( !v33 )
      sub_1B64324(v32);
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
      v40 = sub_1BB60A8(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v44 = sub_1BB60A8(v33, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v33, *(_QWORD *)(v44 + 8));
    v46 = v45;
    if ( !v45 )
      sub_1B64324(0LL);
    v47 = *(_QWORD *)v45;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v49 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_44;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_44:
      v50 = sub_1BB60A8(v45, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8));
    v52 = *(_QWORD *)v46;
    v53 = v51;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v55 = (IClassBoardItemModel_c **)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *(v55 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v54;
        v55 += 2;
        if ( !v54 )
          goto LABEL_50;
      }
      v56 = v52 + 16LL * (*(_DWORD *)v55 + 1) + 312;
    }
    else
    {
LABEL_50:
      v56 = sub_1BB60A8(v46, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v46, *(_QWORD *)(v56 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v53, 0LL);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v35 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v63 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v63;
        if ( !v63 )
          sub_1B64324(0LL);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v63, 0LL);
        if ( !itemIconListGrid )
          sub_1B64324(transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1B64324(isQP);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v66);
        byte_49F7111 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_49F7116 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v67);
        byte_49F7116 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v69 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v53, v57, 0LL);
      v72 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1B64324(0LL);
      items = v72->fields._items;
      v74 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v72->fields._version;
      if ( !items )
        sub_1B64324(v72);
      size = v72->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v72,
          v69,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &items->obj.klass + size;
        v72->fields._size = size + 1;
        v76[4] = (Il2CppClass *)v69;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v69, v70, v71);
      }
      v35 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v57, v61);
  }
  v77 = *(_QWORD *)v33;
  v78 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      --v78;
      v79 += 4;
      if ( !v78 )
        goto LABEL_78;
    }
    v80 = v77 + 16LL * *v79 + 312;
  }
  else
  {
LABEL_78:
    v80 = sub_1BB60A8(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v80)(v33, *(_QWORD *)(v80 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1B64324(itemListObj);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x21
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v28; // x20
  __int64 v29; // x22
  __int64 v30; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x20
  char v35; // w23
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x22
  MasterMissionListViewItem_o *v40; // x21
  __int64 v41; // x0
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v48; // x0
  UIGrid_o *v49; // x21
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Transform_o *v51; // x0
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_49FF66D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v16);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    byte_49FF66D = 1;
  }
  entity = 0LL;
  memset(&v53, 0, sizeof(v53));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v28 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v29 = 0LL;
        do
        {
          if ( (unsigned int)v29 >= (unsigned int)klass )
            sub_1B6432C(conditionListObj, v26);
          v30 = *((_QWORD *)&v28[1].monitor + v29);
          if ( !v30 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v30 + 28) - 23) <= 1 )
          {
            if ( !v22 )
              goto LABEL_58;
            v26 = *(unsigned int *)(v30 + 32);
            items = v22->fields._items;
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++v22->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v22,
                v26,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              klass = v28[1].klass;
            }
            else
            {
              v22->fields._size = size + 1;
              items->m_Items[size + 1] = v26;
            }
          }
        }
        while ( (int)++v29 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v22 )
      goto LABEL_58;
    v23 = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_int__Add__;
    ++v22->fields._version;
    if ( !v23 )
      goto LABEL_58;
    v25 = v22->fields._size;
    if ( (unsigned int)v25 >= v23->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v22,
        SHIDWORD(v3),
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v22->fields._size = v25 + 1;
      v23->m_Items[v25 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v22 )
    goto LABEL_58;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v22,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v35 = 1;
  v53 = v52;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v53,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v36 )
      break;
    if ( !v34 )
      sub_1B64324(v36);
    DataMasterBase_object__object__int___TryGetEntity(
      v34,
      &entity,
      v53.fields._current,
      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v39 = entity;
    if ( entity )
    {
      v40 = (MasterMissionListViewItem_o *)sub_1B64314(MasterMissionListViewItem_TypeInfo, v37, v38);
      MasterMissionListViewItem___ctor(v40, (EventMissionEntity_o *)v39, 2, 0LL);
      if ( !v40 )
        sub_1B64324(v41);
      ComponentInChildren_object__48431348 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v40->klass->vtable._6_CheckMissionCond.method)(
                                                               v40,
                                                               v40->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v35 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1B64324(ComponentInChildren_object__48431348);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1B64324(0LL);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v48 = UnityEngine_Object__Instantiate_object__49003980(
                Parent,
                transform,
                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v48 )
          sub_1B64324(0LL);
        ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                 (UnityEngine_Component_o *)v48,
                                                 (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__48431348;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1B64324(ComponentInChildren_object__48431348);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v40,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v49 = this->fields.conditionGrid;
      v50 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v51 = GameObjectExtensions__GetParent(v50, 0LL);
      if ( !v49 )
        sub_1B64324(v51);
      UIGrid__AddChild(v49, v51, 0LL);
      v35 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v53,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1B64324(conditionListObj);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_49FF671 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF671 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v4 = this->fields.effectScrollView;
    if ( !v4 )
      sub_1B64324(0LL);
    UIScrollView__UpdateScrollbars(v4, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF676 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_49FF676 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardBaseDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}