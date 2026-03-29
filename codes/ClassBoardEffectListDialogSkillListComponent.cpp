void ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_c *v1; // x8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x9

  if ( (byte_4D3462B & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_4D3462B = 1;
  }
  v1 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->Extra1ClassBaseId = 0x900000008LL;
  static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_D00F20;
  *(_QWORD *)&v1->static_fields->ExtraClassIconListObjHeight = 0x4282000042200000LL;
}


void ClassBoardEffectListDialogSkillListComponent___ctor(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.classIconSpaceOffsetY = 20.0;
  this->fields.grandSkillDataFirstIndex = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ClassBoardEffectListDialogSkillListComponent__ExecuteCallback(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.loadEndCallback, 0);
}


int32_t ClassBoardEffectListDialogSkillListComponent__GetBaseId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


float ClassBoardEffectListDialogSkillListComponent__GetListItemHeight(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  System_Collections_Generic_List_object__o *skillDispDataList; // x8
  ClassBoardEffectListDialogSkillDetailComponent_o *v8; // x20
  const MethodInfo *v9; // x2

  v6 = this;
  if ( (byte_4D34626 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4D34626 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0)
    || (v8 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0)
    || !v8 )
  {
    sub_1C93D2C(this, obj);
  }
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           v8,
           (System_String_o *)this->fields.m_CancellationTokenSource,
           v9);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
        int32_t baseId,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        System_Int32_array *openedSquareIdArray,
        ClassStatisticsInfo_array *classStatisticsInfos,
        System_Int32_array *battleServantSquareIdArray,
        const MethodInfo *method)
{
  __int64 v13; // x25
  __int64 v14; // x0
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v24; // x4
  System_Func_T__TResult__o *v25; // x0
  System_Func_TSource__TResult__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  ClassBoardSquareEntity_array *v30; // x22

  if ( (byte_4D34628 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1C93AD4(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
    byte_4D34628 = 1;
  }
  v13 = sub_1C93D20(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *)v13,
    0);
  if ( !v13 )
    sub_1C93D2C(v14, v15);
  *(_DWORD *)(v13 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)Master_object, v17, v18, v19, v20, v21, v22);
  if ( (unsigned __int64)openedSquareIdArray | (unsigned __int64)battleServantSquareIdArray )
  {
    v25 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    v26 = (System_Func_TSource__TResult__o *)v25;
    if ( openedSquareIdArray )
    {
      System_Func_int__object____ctor(
        v25,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__,
        0);
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray;
    }
    else
    {
      System_Func_int__object____ctor(
        v25,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__,
        0);
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)battleServantSquareIdArray;
    }
    v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           v27,
                                                           v26,
                                                           (const MethodInfo_31D7E14 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v29 = BasicHelper__ExcludeNull_object_(
            v28,
            (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v13 + 24), 0);
  }
  v30 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v30,
           dispType,
           ignoreTurnOrCountPassive,
           classStatisticsInfos,
           v24);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  System_Int32_array *IsPassive; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x27
  int32_t v12; // w20
  int max_length; // w8
  unsigned int v14; // w28
  ClassBoardSquareEntity_o *v15; // x29
  System_Collections_Generic_List_object__o *v16; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v20; // x19
  SkillLvEntity_o *v21; // x20
  System_Collections_Generic_List_object__o *v22; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_object__o *v34; // x23
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x27
  __int64 v41; // x1
  System_Collections_Generic_List_object__o *v42; // x19
  Il2CppObject *v43; // x0
  FuncDispEntity_o *v44; // x19
  System_Collections_Generic_List_object__o *v45; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v46; // x25
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v69; // w27
  int32_t v70; // w20
  int32_t v71; // w26
  int32_t v72; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v73; // x24
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  System_Int32_array *v90; // x21
  const MethodInfo *v91; // x2
  System_String_o *Detail; // x19
  System_String_o *v93; // x19
  System_String_o *Name; // x0
  int32_t priority; // w20
  int32_t id; // w23
  int32_t iconId; // w24
  int32_t skillType; // w25
  System_String_o *v99; // x26
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v100; // x21
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  _BOOL8 v111; // x0
  __int64 v112; // x1
  Il2CppObject *value; // x23
  System_String_o *data; // x24
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  Il2CppObject *v117; // x0
  __int64 v118; // x1
  _DWORD *v119; // x8
  __int64 v120; // x1
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  Il2CppClass *v125; // x8
  System_Int32_array *v126; // x26
  int32_t v127; // w25
  Il2CppObject *v128; // x19
  __int64 v129; // x0
  __int64 v130; // x1
  _DWORD *v131; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v133; // x8
  il2cpp_array_size_t v134; // x10
  unsigned __int64 v135; // x9
  __int64 v136; // x10
  char *v137; // x12
  int v138; // w13
  _DWORD *v139; // x8
  int32_t v140; // w8
  Il2CppObject *v141; // x0
  __int64 v142; // x1
  const MethodInfo *v143; // x2
  Il2CppClass *v144; // x8
  System_String_o *v145; // x19
  System_String_o *v146; // x26
  Il2CppObject *v147; // x0
  __int64 v148; // x1
  _DWORD *v149; // x8
  int32_t v150; // w27
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  _DWORD *v153; // x8
  int32_t v154; // w28
  Il2CppObject *v155; // x0
  __int64 v156; // x1
  _DWORD *v157; // x8
  int32_t v158; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v159; // x21
  __int64 v160; // x0
  __int64 v161; // x1
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v172; // x0
  System_Func_object__int__o *_9__42_0; // x20
  Il2CppObject *v174; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v182; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v183; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v184; // x19
  System_Func_object__int__o *_9__42_1; // x20
  Il2CppObject *v186; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v187; // x0
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x0
  ClassBoardSquareEntity_array *v197; // [xsp+18h] [xbp-158h]
  int32_t v198; // [xsp+24h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v199; // [xsp+28h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_Dictionary_object__object__o *v201; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_object__o *v202; // [xsp+40h] [xbp-130h]
  FuncDispMaster_o *v203; // [xsp+48h] [xbp-128h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v205; // [xsp+58h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v206; // [xsp+80h] [xbp-F0h] BYREF
  Il2CppObject *v207; // [xsp+98h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v208; // [xsp+A0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v209; // [xsp+C8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v210; // [xsp+D0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v211; // [xsp+F0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+F8h] [xbp-78h] BYREF
  SkillLvEntity_o *v213; // [xsp+100h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4D34629 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C93AD4(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C93AD4(&Method_System_String_Join_int___);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34629 = 1;
  }
  v213 = 0;
  entity = 0;
  v211 = 0;
  entitys = 0;
  memset(&v210, 0, sizeof(v210));
  v209 = 0;
  v207 = 0;
  memset(&v208, 0, sizeof(v208));
  memset(&v206, 0, sizeof(v206));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_160;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v7;
  v197 = openedSquareArray;
  v198 = dispType;
  v202 = v7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v199 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v201 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v201,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  v12 = v198;
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v203 = (FuncDispMaster_o *)v11;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C93D34(IsPassive);
      v15 = openedSquareArray->m_Items[v14];
      v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v16;
      if ( !v15 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v15, 0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        break;
      if ( v12 == 2 )
        goto LABEL_62;
      IsPassive = (System_Int32_array *)Master_object;
      if ( !Master_object )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                          Master_object,
                                          &entity,
                                          v15->fields.targetId,
                                          (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v10 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v10,
                                          &v213,
                                          v15->fields.targetId,
                                          v15->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v213;
        if ( !v213 )
          goto LABEL_160;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v213, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v213 )
        goto LABEL_160;
      if ( !v11 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v11,
                                          &v211,
                                          v213->fields.funcId,
                                          v15->fields.classBoardBaseId,
                                          0);
      if ( !v213 )
        goto LABEL_160;
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_809/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v213->fields.funcId,
                                            (const MethodInfo_324FFE8 *)Method_System_String_Join_int___);
        if ( !v201 )
          goto LABEL_160;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v201,
                &IsPassive->obj,
                (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v18 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v18,
            (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v201,
            p_obj,
            (Il2CppObject *)v18,
            (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v201,
                 p_obj,
                 (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v20 = v211;
        v21 = v213;
        v22 = (System_Collections_Generic_List_object__o *)Item;
        v23 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C93D20(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v23, v20, v21, 0, v15, 0);
        if ( !v22 )
          goto LABEL_160;
        items = v22->fields._items;
        v31 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_160;
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v23,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
        }
LABEL_61:
        v12 = v198;
        openedSquareArray = v197;
        goto LABEL_62;
      }
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v10,
                    v213->fields.skillId,
                    v213->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v213 )
        goto LABEL_160;
      v90 = IsPassive;
      Detail = SkillLvEntity__getDetail(v213, 0, 1, 0);
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      IsPassive = (System_Int32_array *)ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                                          Detail,
                                          v90,
                                          v91);
      if ( !entity )
        goto LABEL_160;
      v93 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v15->fields.priority;
      id = v15->fields.id;
      iconId = v15->fields.iconId;
      skillType = v15->fields.skillType;
      v99 = Name;
      v100 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C93D20(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v100,
        v99,
        v93,
        id,
        priority,
        iconId,
        skillType,
        0);
      if ( !v202 )
        goto LABEL_160;
      v107 = v202->fields._items;
      v12 = v198;
      openedSquareArray = v197;
      v108 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v202->fields._version;
      if ( !v107 )
        goto LABEL_160;
      v109 = v202->fields._size;
      if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v202,
          (Il2CppObject *)v100,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = &v107->obj.klass + v109;
        v202->fields._size = v109 + 1;
        v110[4] = (Il2CppClass *)v100;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v110 + 4), (int32_t)v100, v101, v102, v103, v104, v105, v106);
      }
LABEL_62:
      max_length = openedSquareArray->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_83;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v15, 0);
    if ( v12 == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v199;
    if ( !v199 )
      goto LABEL_160;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v199,
                                        &entitys,
                                        v15->fields.targetId,
                                        v15->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v34 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_160;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v205,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    v210 = *(System_Collections_Generic_List_Enumerator_object__o *)&v205.fields._dictionary;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v210,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v11 = (Il2CppObject *)v203;
      if ( !v35 )
        break;
      current = v210.fields._current;
      if ( !v210.fields._current )
        sub_1C93D2C(v35, v36);
      if ( !v203 )
        sub_1C93D2C(v35, v36);
      if ( FuncDispMaster__IsContainFuncIds(
             v203,
             &v209,
             (System_Int32_array *)v210.fields._current[3].klass,
             v15->fields.classBoardBaseId,
             0) )
      {
        v38 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_809/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_324FFE8 *)Method_System_String_Join_int___);
        if ( !v34 )
          sub_1C93D2C(v38, v39);
        v40 = v38;
        if ( !System_Collections_Generic_List_object___Contains(
                v34,
                v38,
                (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v201 )
            sub_1C93D2C(0, v41);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v201,
                  v40,
                  (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v42 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v42,
              (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v201,
              v40,
              (Il2CppObject *)v42,
              (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v43 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v201,
                  v40,
                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v44 = v209;
          v45 = (System_Collections_Generic_List_object__o *)v43;
          v46 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C93D20(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v46,
            v44,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v15,
            0);
          if ( !v45 )
            sub_1C93D2C(v47, v48);
          v55 = v45->fields._items;
          v56 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v45->fields._version;
          if ( !v55 )
            sub_1C93D2C(v47, v48);
          v57 = v45->fields._size;
          if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v45,
              (Il2CppObject *)v46,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &v55->obj.klass + v57;
            v45->fields._size = v57 + 1;
            v58[4] = (Il2CppClass *)v46;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v46, v49, v50, v51, v52, v53, v54);
          }
          v86 = v34->fields._items;
          v87 = Method_System_Collections_Generic_List_string__Add__;
          ++v34->fields._version;
          if ( !v86 )
            sub_1C93D2C(v59, v60);
          v88 = v34->fields._size;
          if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              v40,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
          }
          else
          {
            v89 = &v86->obj.klass + v88;
            v34->fields._size = v88 + 1;
            v89[4] = (Il2CppClass *)v40;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v89 + 4), (int32_t)v40, v61, v62, v63, v64, v65, v66);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v69 = v15->fields.priority;
        v70 = v15->fields.id;
        v71 = v15->fields.iconId;
        v72 = v15->fields.skillType;
        v73 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C93D20(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v73, klass, monitor, v70, v69, v71, v72, 0);
        if ( !v202 )
          sub_1C93D2C(v74, v75);
        v82 = v202->fields._items;
        v83 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v202->fields._version;
        if ( !v82 )
          sub_1C93D2C(v74, v75);
        v84 = v202->fields._size;
        if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v202,
            (Il2CppObject *)v73,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v202->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v73;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v73, v76, v77, v78, v79, v80, v81);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v210,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_83:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v201;
  if ( !v201 )
LABEL_160:
    sub_1C93D2C(IsPassive, v9);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v205,
    v201,
    (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v208 = v205;
  while ( 1 )
  {
    v111 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v208,
             (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v111 )
      break;
    value = v208.fields._current.fields.value;
    if ( !v208.fields._current.fields.value )
      sub_1C93D2C(v111, v112);
    if ( SLODWORD(v208.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v115 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v208.fields._current.fields.value,
               0,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v115 )
        sub_1C93D2C(0, v116);
      if ( v115[1].monitor )
      {
        v117 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v117 )
          sub_1C93D2C(0, v118);
        v119 = v117[1].monitor;
        if ( !v119 )
          sub_1C93D2C(v117, v118);
        if ( !Master_object )
          sub_1C93D2C(0, v118);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v207,
               v119[4],
               (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v207 )
            sub_1C93D2C(0, v120);
          data = SkillEntity__getName((SkillEntity_o *)v207, 0);
        }
      }
      else
      {
        v121 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v121 )
          sub_1C93D2C(0, v122);
        if ( v121[2].klass )
        {
          v123 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v123 )
            sub_1C93D2C(0, v124);
          v125 = v123[2].klass;
          if ( !v125 )
            sub_1C93D2C(v123, v124);
          data = (System_String_o *)v125->_1.byval_arg.data;
        }
      }
      v126 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v205,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v127 = 0;
      v206 = *(System_Collections_Generic_List_Enumerator_object__o *)&v205.fields._dictionary;
LABEL_104:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v206,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v206,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v141 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v141 )
          sub_1C93D2C(0, v142);
        v144 = v141[1].klass;
        if ( !v144 )
          sub_1C93D2C(v141, v142);
        v145 = *(System_String_o **)&v144->_1.byval_arg.bits;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v146 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(v145, v126, v143);
        v147 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v147 )
          sub_1C93D2C(0, v148);
        v149 = v147[2].monitor;
        if ( !v149 )
          sub_1C93D2C(v147, v148);
        v150 = v149[5];
        v151 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v151 )
          sub_1C93D2C(0, v152);
        v153 = v151[2].monitor;
        if ( !v153 )
          sub_1C93D2C(v151, v152);
        v154 = v153[6];
        v155 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v155 )
          sub_1C93D2C(0, v156);
        v157 = v155[2].monitor;
        if ( !v157 )
          sub_1C93D2C(v155, v156);
        v158 = v157[14];
        v159 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C93D20(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v159, data, v146, v150, v127, v154, v158, 0);
        if ( !v202 )
          sub_1C93D2C(v160, v161);
        v168 = v202->fields._items;
        v169 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v202->fields._version;
        if ( !v168 )
          sub_1C93D2C(v160, v161);
        v170 = v202->fields._size;
        if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v202,
            (Il2CppObject *)v159,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
        }
        else
        {
          v171 = &v168->obj.klass + v170;
          v202->fields._size = v170 + 1;
          v171[4] = (Il2CppClass *)v159;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v171 + 4), (int32_t)v159, v162, v163, v164, v165, v166, v167);
        }
        continue;
      }
      v128 = v206.fields._current;
      v129 = sub_1C93B7C(int___TypeInfo, 0);
      if ( !v128 )
        sub_1C93D2C(v129, v130);
      v131 = v128[1].monitor;
      if ( v131 )
      {
        if ( !v10 )
          sub_1C93D2C(v129, v130);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v10,
                                                               v131[4],
                                                               v131[5],
                                                               classStatisticsInfos,
                                                               0);
LABEL_111:
        v133 = (__int64)DispValFromSkill;
      }
      else
      {
        v133 = v129;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v128[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0,
                                                                 0);
          goto LABEL_111;
        }
      }
      if ( !v126 )
        sub_1C93D2C(DispValFromSkill, v130);
      v134 = v126->max_length;
      if ( v134 )
      {
        if ( (int)v134 >= 1 )
        {
          v135 = 0;
          v136 = (unsigned int)v126->max_length;
          do
          {
            if ( !v133 )
              sub_1C93D2C(DispValFromSkill, v130);
            if ( v135 >= *(unsigned int *)(v133 + 24) )
              sub_1C93D34(DispValFromSkill);
            v137 = (char *)v126 + 4 * v135;
            v138 = *(_DWORD *)(v133 + 32 + 4 * v135++);
            *((_DWORD *)v137 + 8) += v138;
          }
          while ( v136 != v135 );
        }
      }
      else
      {
        v126 = (System_Int32_array *)v133;
      }
      v139 = v128[2].monitor;
      if ( !v139 )
        sub_1C93D2C(DispValFromSkill, v130);
      v140 = v139[20];
      if ( v140 > v127 )
        v127 = v140;
      goto LABEL_104;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v208,
    (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v172 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v172 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__int__o *)v172->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v172->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v172);
      v172 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v174 = (Il2CppObject *)v172->static_fields->__9;
    _9__42_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_0,
      v174,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__,
      0);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_0,
      (int32_t)_9__42_0,
      v176,
      v177,
      v178,
      v179,
      v180,
      v181);
  }
  v182 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v202,
           (System_Func_TSource__TKey__o *)_9__42_0,
           (const MethodInfo_31D3DE4 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v183 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v184 = v182;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v183 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v183->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v183->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v183);
      v183 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v186 = (Il2CppObject *)v183->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v186,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__,
      0);
    v187 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v187->__9__42_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v187->__9__42_1, (int32_t)_9__42_1, v188, v189, v190, v191, v192, v193);
  }
  v194 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v184,
                                                                (System_Func_TSource__TKey__o *)_9__42_1,
                                                                (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v194, (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3, v4, v5, v6, v7);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 12);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C93D2C(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
}


bool ClassBoardEffectListDialogSkillListComponent__IsSupport(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isSupport;
}


void ClassBoardEffectListDialogSkillListComponent__LoadEnd(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  float targetFrameRate; // s0

  if ( (byte_4D34622 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&StringLiteral_6332/*"ExecuteCallback"*/);
    byte_4D34622 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6332/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0);
}


void ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AtlasManagerUnit_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x21
  System_Action_object__o *v18; // x20
  ChainableActionBase_o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  ChainableActionParallel_o *v27; // x20
  __int64 v28; // x21
  System_Action_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4D34621 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action___TypeInfo);
    sub_1C93AD4(&System_Action_Action____TypeInfo);
    sub_1C93AD4(&System_Action_Action__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManagerUnit_TypeInfo);
    sub_1C93AD4(&ChainableActionParallel_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__33_0__);
    sub_1C93AD4(&StringLiteral_7187/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    byte_4D34621 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (AtlasManagerUnit_o *)sub_1C93D20(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v10, (System_String_o *)StringLiteral_7187/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, 0, 0);
  this->fields.boardUiAtlasManagerUnit = v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = sub_1C93B7C(System_Action_Action____TypeInfo, 1);
  v18 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__33_0__,
    0);
  if ( !v17 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)v18, v21, v22, v23, v24, v25, v26);
  v27 = (ChainableActionParallel_o *)sub_1C93D20(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49765204(v27, (System_Action_Action__array *)v17, 0);
  v28 = sub_1C93B7C(System_Action___TypeInfo, 1);
  v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__, 0);
  if ( !v28 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v28 + 24) )
LABEL_11:
    sub_1C93D34(v19);
  *(_QWORD *)(v28 + 32) = v29;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  if ( !v27 || (v19 = ChainableActionBase__Final((ChainableActionBase_o *)v27, (System_Action_array *)v28, 0)) == 0 )
LABEL_10:
    sub_1C93D2C(v19, v20);
  ChainableActionBase__Execute(v19, 0);
}


System_String_o *ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *v5; // x20

  if ( (byte_4D3462A & 1) == 0 )
  {
    sub_1C93AD4(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4D3462A = 1;
  }
  v5 = FuncDispMaster__ReplaceFractionFormat(text, funcVals, 0);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__ApplyGivenValues(v5, funcVals, 0);
}


void ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *classInfoObject; // x0
  Il2CppObject *Component_object; // x22
  const MethodInfo *v11; // x5

  if ( (byte_4D34623 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34623 = 1;
  }
  classInfoObject = this->fields.classInfoObject;
  if ( !classInfoObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       classInfoObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  classInfoObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)classInfoObject & 1) == 0 )
  {
    if ( classBoardBaseEntity && Component_object )
    {
      ClassBoardClassIconListComponent__SetClassIconList(
        (ClassBoardClassIconListComponent_o *)Component_object,
        classBoardBaseEntity,
        isAll,
        supportClassBoard,
        classBoardBaseEntity->fields.parentClassBoardBaseId > 0,
        v11);
      return;
    }
LABEL_10:
    sub_1C93D2C(classInfoObject, classBoardBaseEntity);
  }
}


void ClassBoardEffectListDialogSkillListComponent__SetDisp(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0);
}


void ClassBoardEffectListDialogSkillListComponent__SetIcon(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  ClassBoardEffectListDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_1C93D2C(0, sprite);
  ClassBoardEffectListDialog__SetIcon(dialog, sprite, name, method);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardEffectListDialogSkillListComponent__SetList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t baseId,
        int32_t inputGrandClassId,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        ClassBoardInfo_o *supportGrandClassBoard,
        bool isDispGrandScore,
        ClassStatisticsInfo_array *classStatisticsInfos,
        BattleServantData_array *battleServantList,
        const MethodInfo *method)
{
  _BOOL4 v14; // w20
  int32_t v19; // w8
  int32_t classBoardBaseId; // w8
  __int64 Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x1
  System_Collections_Generic_List_ClassBoardClassEntity__o *v23; // x24
  ClassBoardEffectListDialogSkillListComponent___c_c *v24; // x0
  System_Func_object__bool__o *_9__40_0; // x25
  Il2CppObject *v26; // x26
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  _BOOL4 v34; // w26
  ClassBoardBaseMaster_o *v35; // x24
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x25
  ClassBoardBaseEntity_o *v37; // x24
  unsigned int v38; // w8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v39; // x9
  int id; // w9
  int v41; // w9
  const MethodInfo *v42; // x6
  bool v43; // w24
  long double inited; // q0
  System_Int32_array *v45; // x26
  unsigned __int64 v46; // x29
  __int64 v47; // x26
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  BattleServantData_o *v54; // x1
  __int64 v55; // x25
  System_Collections_Generic_List_object__o *v56; // x27
  System_Predicate_object__o *v57; // x28
  System_Int32_array *squareIds; // x23
  _QWORD *v59; // x23
  __int64 v60; // x8
  __int64 v61; // x0
  __int64 v62; // x0
  System_Int32_array *v63; // x27
  _QWORD *v64; // x22
  __int64 v65; // x8
  __int64 v66; // x0
  __int64 v67; // x0
  int32_t v68; // w22
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  const MethodInfo *v77; // x6
  int grandClassId; // w23
  int v79; // w26
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x19
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o *v82; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Object_o *recycler; // x23
  float v85; // s8
  UnityEngine_Object_o *normalScoreTitleLabel; // x22
  UILabel_o *v87; // x22
  ScrollItemRecycler_o *v88; // x22
  struct ScrollItemRecycler_o *v89; // x8
  int v90; // w26
  struct ScrollItemRecycler_o *v91; // x8
  System_Func_T1__T2__TResult__o *v92; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v93; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v96; // x22
  System_Action_T1__T2__o *v97; // x24
  int32_t grandSkillDataFirstIndex; // w23
  float v99; // s8
  int32_t v100; // w19
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *classInfoObject; // x21
  float v103; // s9
  Il2CppObject *current; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v106; // x1
  UnityEngine_GameObject_o *v107; // x22
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v116; // x23
  __int64 v117; // x0
  __int64 v118; // x1
  const MethodInfo *v119; // x6
  float v120; // s8
  System_String_o *v121; // x0
  System_String_o *v122; // x22
  float v123; // s8
  float v124; // s9
  ClassBoardEffectListDialogSkillListComponent_c *v125; // x0
  ScrollItemRecycler_o *v126; // x21
  UnityEngine_GameObject_o *grandClassInfoPrefab; // x20
  float ExtraClassIconListObjHeight; // s9
  System_Action_object__o *v129; // x22
  UnityEngine_Object_o *grandScoreTitleLabel; // x20
  UnityEngine_Object_o *grandScoreTitleTopLine; // x20
  UILabel_o *v132; // x20
  ScrollItemRecycler_o *v133; // x20
  int32_t v134; // w19
  UnityEngine_GameObject_o *v135; // x21
  ClassBoardEffectListDialogSkillListComponent_o *v136; // [xsp+28h] [xbp-C8h]
  _BOOL4 v137; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+70h] [xbp-80h] BYREF
  int32_t value; // [xsp+7Ch] [xbp-74h] BYREF

  v14 = isAll;
  value = baseId;
  if ( (byte_4D34627 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&System_Action_GameObject__int__TypeInfo);
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C93AD4(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_GameObject__int__float__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C93AD4(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_ClassBoardClassEntity__TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__);
    sub_1C93AD4(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_3409/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_1C93AD4(&StringLiteral_3408/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    sub_1C93AD4(&StringLiteral_3415/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/);
    sub_1C93AD4(&StringLiteral_3416/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/);
    byte_4D34627 = 1;
  }
  entitys = 0;
  memset(&v139, 0, sizeof(v139));
  this->fields.supportGrandClassBoardInfo = supportGrandClassBoard;
  this->fields.baseId = baseId;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportGrandClassBoardInfo,
    (int32_t)supportGrandClassBoard,
    inputGrandClassId,
    dispType,
    (System_String_o *)isAll,
    (int32_t)supportClassBoard,
    (int64_t)supportGrandClassBoard,
    (System_String_o *)isDispGrandScore);
  if ( isDispGrandScore )
    v19 = inputGrandClassId;
  else
    v19 = -1;
  this->fields.grandClassId = v19;
  this->fields.isSupport = supportClassBoard != 0;
  if ( supportGrandClassBoard && supportClassBoard && isDispGrandScore )
  {
    if ( System_Linq_Enumerable__Any_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)supportGrandClassBoard->fields.squareIds,
           (const MethodInfo_31B01E4 *)Method_System_Linq_Enumerable_Any_int___) )
    {
      classBoardBaseId = supportGrandClassBoard->fields.classBoardBaseId;
    }
    else
    {
      classBoardBaseId = -1;
    }
    this->fields.grandClassId = classBoardBaseId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_202;
  if ( ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0) )
  {
    v23 = entitys;
    v24 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v24 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__40_0 = (System_Func_object__bool__o *)v24->static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__40_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__40_0,
        v26,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__,
        0);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__40_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_0,
        (int32_t)_9__40_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (System_Func_TSource__bool__o *)_9__40_0,
            (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
  }
  else
  {
    v34 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v35 = (ClassBoardBaseMaster_o *)Master_object;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  if ( !v35 )
    goto LABEL_202;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                v35,
                                ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->Extra1ClassBaseId,
                                0);
  v37 = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
          v35,
          ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->Extra2ClassBaseId,
          0);
  Master_object = sub_1C93B7C(int___TypeInfo, 4);
  if ( !Master_object )
    goto LABEL_202;
  v38 = *(_DWORD *)(Master_object + 24);
  if ( !v38
    || (v39 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields,
        *(_DWORD *)(Master_object + 32) = v39->Extra1ClassBaseId,
        v38 == 1)
    || ((*(_DWORD *)(Master_object + 36) = v39->Extra2ClassBaseId, !GrandClassBoardBaseEntity)
      ? (id = -1)
      : (id = GrandClassBoardBaseEntity->fields.id),
        v38 <= 2 || ((*(_DWORD *)(Master_object + 40) = id, !v37) ? (v41 = -1) : (v41 = v37->fields.id), v38 <= 3)) )
  {
LABEL_203:
    sub_1C93D34(Master_object);
  }
  *(_DWORD *)(Master_object + 44) = v41;
  v43 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Master_object,
          value,
          (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
  if ( !v43 && v14 )
  {
    Master_object = (__int64)this->fields.classInfoObject;
    if ( !Master_object )
      goto LABEL_202;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_202;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  v137 = v34;
  v45 = 0;
  if ( !battleServantList || !entitys )
    goto LABEL_59;
  if ( SLODWORD(battleServantList->max_length) < 1 )
    goto LABEL_56;
  v136 = this;
  v46 = 0;
  do
  {
    v47 = sub_1C93D20(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0___ctor(
      (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_o *)v47,
      0);
    if ( v46 >= LODWORD(battleServantList->max_length) )
      goto LABEL_203;
    if ( !v47 )
      goto LABEL_202;
    v54 = battleServantList->m_Items[v46];
    *(_QWORD *)(v47 + 16) = v54;
    v55 = v47 + 16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 16), (int32_t)v54, v48, v49, v50, v51, v52, v53);
    v56 = (System_Collections_Generic_List_object__o *)entitys;
    v57 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ClassBoardClassEntity__TypeInfo);
    System_Predicate_object____ctor(
      v57,
      (Il2CppObject *)v47,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__,
      0);
    if ( !v56 )
      goto LABEL_202;
    Master_object = (__int64)System_Collections_Generic_List_object___Find(
                               v56,
                               (System_Predicate_T__o *)v57,
                               (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    if ( Master_object )
    {
      this = v136;
      if ( *(_QWORD *)v55 )
      {
        v45 = *(System_Int32_array **)(*(_QWORD *)v55 + 1008LL);
        goto LABEL_59;
      }
      goto LABEL_202;
    }
    ++v46;
  }
  while ( (__int64)v46 < SLODWORD(battleServantList->max_length) );
  this = v136;
LABEL_56:
  v45 = 0;
LABEL_59:
  if ( !this->fields.isSupport )
  {
    squareIds = 0;
LABEL_83:
    v63 = 0;
    goto LABEL_84;
  }
  if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0 )
  {
    v59 = Method_System_Array_Empty_int___;
    v60 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v60 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v60 = v59[7];
    }
    v61 = *(_QWORD *)(v60 + 16);
    if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
      v61 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v61 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v61);
    v62 = *(_QWORD *)(v59[7] + 16LL);
    if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
      v62 = sub_1C69B68(inited);
    squareIds = **(System_Int32_array ***)(v62 + 184);
    if ( !this->fields.isSupport )
      goto LABEL_83;
  }
  if ( !supportGrandClassBoard || (v63 = supportGrandClassBoard->fields.squareIds) == 0 )
  {
    v64 = Method_System_Array_Empty_int___;
    v65 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v65 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v65 = v64[7];
    }
    v66 = *(_QWORD *)(v65 + 16);
    if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
      v66 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v66 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v66);
    v67 = *(_QWORD *)(v64[7] + 16LL);
    if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
      v67 = sub_1C69B68(inited);
    v63 = **(System_Int32_array ***)(v67 + 184);
  }
LABEL_84:
  v68 = value;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                    v68,
                    dispType,
                    0,
                    squareIds,
                    classStatisticsInfos,
                    v45,
                    v42);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillDispDataList,
    (int32_t)OpenSkillList,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  if ( v14 )
  {
    grandClassId = this->fields.grandClassId;
    if ( grandClassId >= 1 )
    {
      if ( !*p_skillDispDataList )
        goto LABEL_202;
      this->fields.grandSkillDataFirstIndex = (*p_skillDispDataList)->fields._size;
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      Master_object = (__int64)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                 grandClassId,
                                 dispType,
                                 0,
                                 v63,
                                 classStatisticsInfos,
                                 0,
                                 v77);
      if ( !Master_object )
        goto LABEL_202;
      v22 = (System_Collections_Generic_IEnumerable_T__o *)Master_object;
      if ( *(int *)(Master_object + 24) >= 1 )
      {
        Master_object = (__int64)*p_skillDispDataList;
        if ( *p_skillDispDataList )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)Master_object,
            v22,
            (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
          goto LABEL_96;
        }
        goto LABEL_202;
      }
      this->fields.grandSkillDataFirstIndex = -1;
    }
  }
LABEL_96:
  if ( !*p_skillDispDataList )
    goto LABEL_202;
  v79 = v43;
  if ( (*p_skillDispDataList)->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3408/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0);
      if ( !allClosedLabel )
        goto LABEL_202;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0);
      classInfoObject = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(classInfoObject, 0, 0) )
      {
        Master_object = (__int64)this->fields.classInfoObject;
        if ( !Master_object )
          goto LABEL_202;
        Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_202;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      }
    }
    else
    {
      if ( (v137 & v79) != 0 )
      {
        v121 = System_Int32__ToString((int32_t)&value, 0);
        v122 = System_String__Concat_64425724((System_String_o *)StringLiteral_3409/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v121, 0);
      }
      else
      {
        v122 = (System_String_o *)StringLiteral_3408/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get(v122, 0);
      if ( !allClosedLabel )
        goto LABEL_202;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0);
    }
    Master_object = (__int64)this->fields.allClosedLabel;
    if ( !Master_object )
      goto LABEL_202;
    Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_202;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    if ( !v14 )
    {
      Master_object = (__int64)this->fields.scrollView;
      if ( !Master_object )
        goto LABEL_202;
      UIScrollView__UpdatePosition((UIScrollView_o *)Master_object, 0);
    }
  }
  else
  {
    if ( !v14 )
      goto LABEL_102;
    p_skillDetailObjForAll = &this->fields.skillDetailObjForAll;
    skillDetailObjForAll = (UnityEngine_Object_o *)this->fields.skillDetailObjForAll;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = UnityEngine_Object__op_Inequality(skillDetailObjForAll, 0, 0);
    if ( (Master_object & 1) == 0 )
LABEL_102:
      p_skillDetailObjForAll = &this->fields.skillDetailObj;
    v82 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_202;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      recycler = (UnityEngine_Object_o *)this->fields.recycler;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = UnityEngine_Object__op_Inequality(recycler, 0, 0);
      if ( (Master_object & 1) == 0 )
      {
        Master_object = (__int64)*p_skillDispDataList;
        if ( !*p_skillDispDataList )
          goto LABEL_202;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v138,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
        v103 = 0.0;
        v139 = v138;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v139,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
        {
          current = v139.fields._current;
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v82, 0, 0, 0);
          v107 = Object;
          if ( !Object )
            sub_1C93D2C(0, v106);
          v108 = UnityEngine_GameObject__GetComponent_object_(
                   Object,
                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          v116 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v108;
          if ( !v108 )
            sub_1C93D2C(0, v109);
          v108[5].monitor = this;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v108[5].monitor,
            (int32_t)this,
            v110,
            v111,
            v112,
            v113,
            v114,
            v115);
          if ( !current )
            sub_1C93D2C(v117, v118);
          v120 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                   v116,
                   (System_String_o *)current[1].klass,
                   (System_String_o *)current[1].monitor,
                   (int32_t)current[2].monitor,
                   HIDWORD(current[2].monitor),
                   0,
                   v119);
          GameObjectExtensions__SetParent_36750884(v107, this->fields.skillListParent, 0);
          if ( !byte_4D2A13E )
          {
            sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A13E = 1;
          }
          GameObjectExtensions__SetLocalScale(v107, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          GameObjectExtensions__SetLocalPosition_36745272(v107, 0.0, -v103, 0.0, 0);
          UnityEngine_GameObject__SetActive(v107, 1, 0);
          v103 = v103 + v120;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v139,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
        return;
      }
      v85 = 0.0;
      if ( this->fields.grandSkillDataFirstIndex >= 1 )
      {
        normalScoreTitleLabel = (UnityEngine_Object_o *)this->fields.normalScoreTitleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = UnityEngine_Object__op_Inequality(normalScoreTitleLabel, 0, 0);
        if ( (Master_object & 1) != 0 )
        {
          Master_object = (__int64)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_202;
          Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          if ( !Master_object )
            goto LABEL_202;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          v87 = this->fields.normalScoreTitleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3416/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/, 0);
          if ( !v87 )
            goto LABEL_202;
          UILabel__set_text(v87, (System_String_o *)Master_object, 0);
          Master_object = (__int64)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_202;
          v88 = this->fields.recycler;
          Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          if ( !v88 )
            goto LABEL_202;
          ScrollItemRecycler__AddListDifferentObject(
            v88,
            0,
            (UnityEngine_GameObject_o *)Master_object,
            0,
            0.0,
            0.0,
            0,
            0);
          v89 = this->fields.recycler;
          if ( !v89 )
            goto LABEL_202;
          v85 = 20.0;
          v89->fields.paddingTop = 20.0;
        }
      }
      v90 = v79 & v14;
      if ( v90 == 1 )
      {
        if ( (this->fields.grandSkillDataFirstIndex & 0x80000000) == 0 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.classInfoObject, -40.0, 0);
          v85 = v85 + 20.0;
        }
        v91 = this->fields.recycler;
        if ( !v91 )
          goto LABEL_202;
        v91->fields.paddingTop = v85 + this->fields.classIconSpaceOffsetY;
      }
      v92 = (System_Func_T1__T2__TResult__o *)sub_1C93D20(System_Func_GameObject__int__float__TypeInfo);
      System_Func_object__int__float____ctor(
        v92,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
        0);
      v93 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1C93D20(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
      ScrollItemRecycler_HeightCalculatorVarious___ctor(v93, (System_Func_GameObject__int__float__o *)v92, 0);
      skillDispDataList = this->fields.skillDispDataList;
      if ( !skillDispDataList )
        goto LABEL_202;
      size = skillDispDataList->fields._size;
      v96 = this->fields.recycler;
      v97 = (System_Action_T1__T2__o *)sub_1C93D20(System_Action_GameObject__int__TypeInfo);
      System_Action_object__int____ctor(
        v97,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
        0);
      if ( !v96 )
        goto LABEL_202;
      ScrollItemRecycler__Init(
        v96,
        size,
        v82,
        (System_Action_GameObject__int__o *)v97,
        (ScrollItemRecycler_HeightCalculatorBase_o *)v93,
        0);
      if ( v90 )
      {
        grandSkillDataFirstIndex = this->fields.grandSkillDataFirstIndex;
        if ( grandSkillDataFirstIndex < 0 )
          goto LABEL_198;
        if ( grandSkillDataFirstIndex )
        {
          v99 = -40.0;
          v100 = this->fields.grandSkillDataFirstIndex;
        }
        else
        {
          Master_object = (__int64)this->fields.classInfoObject;
          if ( !Master_object )
            goto LABEL_202;
          Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
          if ( !Master_object )
            goto LABEL_202;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
          Master_object = (__int64)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_202;
          Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          if ( !Master_object )
            goto LABEL_202;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
          v100 = this->fields.grandSkillDataFirstIndex;
          v99 = 20.0;
        }
        v125 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v126 = this->fields.recycler;
        grandClassInfoPrefab = this->fields.grandClassInfoPrefab;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v125 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ExtraClassIconListObjHeight = v125->static_fields->ExtraClassIconListObjHeight;
        v129 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(
          v129,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__,
          0);
        if ( !v126 )
LABEL_202:
          sub_1C93D2C(Master_object, v22);
        ScrollItemRecycler__AddListDifferentObject(
          v126,
          v100 - 1,
          0,
          grandClassInfoPrefab,
          ExtraClassIconListObjHeight,
          v99,
          (System_Action_GameObject__o *)v129,
          0);
        v123 = 60.0;
        if ( grandSkillDataFirstIndex )
          v124 = 20.0;
        else
          v124 = 60.0;
      }
      else
      {
        v123 = 21.0;
        v124 = 20.0;
      }
      if ( this->fields.grandSkillDataFirstIndex < 0 )
        goto LABEL_198;
      grandScoreTitleLabel = (UnityEngine_Object_o *)this->fields.grandScoreTitleLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(grandScoreTitleLabel, 0, 0) )
        goto LABEL_198;
      if ( !this->fields.grandSkillDataFirstIndex )
      {
        grandScoreTitleTopLine = (UnityEngine_Object_o *)this->fields.grandScoreTitleTopLine;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(grandScoreTitleTopLine, 0, 0) )
        {
          Master_object = (__int64)this->fields.grandScoreTitleTopLine;
          if ( !Master_object )
            goto LABEL_202;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
          v123 = v124;
        }
      }
      Master_object = (__int64)this->fields.grandScoreTitleLabel;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          v132 = this->fields.grandScoreTitleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3415/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/, 0);
          if ( v132 )
          {
            UILabel__set_text(v132, (System_String_o *)Master_object, 0);
            Master_object = (__int64)this->fields.grandScoreTitleLabel;
            if ( Master_object )
            {
              v133 = this->fields.recycler;
              v134 = this->fields.grandSkillDataFirstIndex;
              Master_object = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
              v135 = (UnityEngine_GameObject_o *)Master_object;
              if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
              if ( v133 )
              {
                ScrollItemRecycler__AddListDifferentObject(
                  v133,
                  v134 - 1,
                  v135,
                  0,
                  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->ExtraClassTabGrandScoreTitleHeight,
                  v123,
                  0,
                  0);
LABEL_198:
                Master_object = (__int64)this->fields.recycler;
                if ( !Master_object )
                  goto LABEL_202;
                ScrollItemRecycler__UpdateDisplay((ScrollItemRecycler_o *)Master_object, 0);
                Master_object = (__int64)this->fields.recycler;
                if ( !Master_object )
                  goto LABEL_202;
                ScrollItemRecycler__ResetScrollPos((ScrollItemRecycler_o *)Master_object, 0);
                return;
              }
            }
          }
        }
      }
      goto LABEL_202;
    }
  }
}


void ClassBoardEffectListDialogSkillListComponent__SetupGrandExtraClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v4; // x19
  Il2CppObject *Component_object; // x20
  const MethodInfo *v6; // x5
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D34625 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34625 = 1;
  }
  entity = 0;
  if ( !obj )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( this )
    {
      this = (ClassBoardEffectListDialogSkillListComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 &entity,
                                                                 v4->fields.grandClassId,
                                                                 (const MethodInfo_34632C0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( Component_object )
      {
        ClassBoardClassIconListComponent__SetClassIconList(
          (ClassBoardClassIconListComponent_o *)Component_object,
          (ClassBoardBaseEntity_o *)entity,
          1,
          v4->fields.supportGrandClassBoardInfo,
          1,
          v6);
        return;
      }
    }
LABEL_13:
    sub_1C93D2C(this, obj);
  }
}


void ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x19
  Il2CppObject *Component_object; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Item; // x21
  UISprite_o *classInfoObject; // x24
  const MethodInfo *v16; // x6
  ClassBoardEffectListDialogSkillListComponent_o *v17; // x8
  int32_t grandSkillDataFirstIndex; // w9
  UnityEngine_Object_o *skillDetailObj; // x23

  v6 = this;
  if ( (byte_4D34624 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_19787/*"formation_copy_bg2"*/);
    sub_1C93AD4(&StringLiteral_21512/*"line_yellow"*/);
    sub_1C93AD4(&StringLiteral_21502/*"line"*/);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C93AD4(&StringLiteral_20783/*"img_score_list_grand_board"*/);
    byte_4D34624 = 1;
  }
  if ( !obj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Component_object )
    {
      Component_object[5].monitor = v6;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[5].monitor, (int32_t)v6, v8, v9, v10, v11, v12, v13);
      this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList;
      if ( this )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 index,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
        this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        if ( this )
        {
          classInfoObject = (UISprite_o *)this->fields.classInfoObject;
          this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     obj,
                                                                     (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          if ( this )
          {
            v17 = this;
            this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.boardUiAtlasManagerUnit;
            if ( this )
            {
              grandSkillDataFirstIndex = v6->fields.grandSkillDataFirstIndex;
              skillDetailObj = (UnityEngine_Object_o *)v17->fields.skillDetailObj;
              if ( grandSkillDataFirstIndex < 0 || grandSkillDataFirstIndex > index )
              {
                if ( !classInfoObject )
                  goto LABEL_27;
                UISprite__set_atlas(classInfoObject, v6->fields.defaultAtlas, 0);
                UISprite__set_spriteName(classInfoObject, (System_String_o *)StringLiteral_19787/*"formation_copy_bg2"*/, 0);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Inequality(
                                                                           skillDetailObj,
                                                                           0,
                                                                           0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !skillDetailObj )
                    goto LABEL_27;
                  UISprite__set_atlas((UISprite_o *)skillDetailObj, v6->fields.defaultAtlas, 0);
                  UISprite__set_spriteName((UISprite_o *)skillDetailObj, (System_String_o *)StringLiteral_21502/*"line"*/, 0);
                }
              }
              else
              {
                AtlasManagerUnit__SetUI(
                  (AtlasManagerUnit_o *)this,
                  classInfoObject,
                  (System_String_o *)StringLiteral_20783/*"img_score_list_grand_board"*/,
                  0);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Inequality(
                                                                           skillDetailObj,
                                                                           0,
                                                                           0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.boardUiAtlasManagerUnit;
                  if ( !this )
                    goto LABEL_27;
                  this = (ClassBoardEffectListDialogSkillListComponent_o *)AtlasManagerUnit__SetUI(
                                                                             (AtlasManagerUnit_o *)this,
                                                                             (UISprite_o *)skillDetailObj,
                                                                             (System_String_o *)StringLiteral_21512/*"line_yellow"*/,
                                                                             0);
                }
              }
            }
            if ( Item )
            {
              ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
                (System_String_o *)Item[1].klass,
                (System_String_o *)Item[1].monitor,
                (int32_t)Item[2].monitor,
                HIDWORD(Item[2].monitor),
                0,
                v16);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C93D2C(this, obj);
  }
}


void ClassBoardEffectListDialogSkillListComponent___LoadSystemAsset_b__33_0(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C93D2C(0, f);
  AtlasManagerUnit__Load(boardUiAtlasManagerUnit, f, 3, 0);
}


void ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *this,
        FuncDispEntity_o *funcDispEntity,
        SkillLvEntity_o *skillLvEntity,
        ClassBoardCommandSpellEntity_o *commandSpellEntity,
        ClassBoardSquareEntity_o *classBoardSquareEntity,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.funcDispEntity = funcDispEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12, v13, v14, v15, v16);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillLvEntity,
    (int32_t)skillLvEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandSpellEntity,
    (int32_t)commandSpellEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.classBoardSquareEntity,
    (int32_t)classBoardSquareEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *this,
        System_String_o *name,
        System_String_o *detail,
        int32_t squareId,
        int32_t priority,
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v14->fields.name = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->fields, (int32_t)name, v15, v16, v17, v18, v19, v20);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v14, (int32_t)detail, v21, v22, v23, v24, v25, v26);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3462C & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_4D3462C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardEffectListDialogSkillListComponent___c___ctor(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__42_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.priority;
}


int32_t ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__42_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.squareId;
}


bool ClassBoardEffectListDialogSkillListComponent___c___SetList_b__40_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return !ClassBoardClassEntity__IsOpen(entity, 0);
}


void ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0___SetList_b__1(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_o *this,
        ClassBoardClassEntity_o *e,
        const MethodInfo *method)
{
  int32_t classId; // w19

  if ( !e || (this = (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_o *)this->fields.svt) == 0 )
    sub_1C93D2C(this, e);
  classId = e->fields.classId;
  return classId == BattleServantData__GetOriginalClassId((BattleServantData_o *)this, 0);
}


void ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ClassBoardSquareEntity_o *ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___GetOpenSkillList_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_1C93D2C(0, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0);
}


ClassBoardSquareEntity_o *ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___GetOpenSkillList_b__1(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_1C93D2C(0, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0);
}