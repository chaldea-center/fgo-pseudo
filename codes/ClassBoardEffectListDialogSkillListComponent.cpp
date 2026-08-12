void ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_c *v1; // x8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x10
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v3; // x8

  if ( (byte_597469D & 1) == 0 )
  {
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_597469D = 1;
  }
  v1 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_E9CFF0;
  v3 = v1->static_fields;
  *(_QWORD *)&static_fields->Extra1ClassBaseId = 0x900000008LL;
  *(_QWORD *)&v3->ExtraClassIconListObjHeight = 0x4282000042200000LL;
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
  if ( (byte_5974698 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_5974698 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0)
    || (v8 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0)
    || !v8 )
  {
    sub_2213CDC(this, obj);
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
  DataManager_c *v16; // x0
  int v17; // w8
  Il2CppObject *Master_object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  System_Func_T__TResult__o *v28; // x0
  System_Func_TSource__TResult__o *v29; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  ClassBoardSquareEntity_array *v33; // x22

  if ( (byte_597469A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_2213A60(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
    byte_597469A = 1;
  }
  v13 = sub_2213CCC(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_2213CDC(v14, v15);
  v16 = DataManager_TypeInfo;
  v17 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v13 + 24) = baseId;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(v16, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)Master_object, v19, v20, v21, v22, v23, v24);
  if ( (unsigned __int64)openedSquareIdArray | (unsigned __int64)battleServantSquareIdArray )
  {
    v28 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    v29 = (System_Func_TSource__TResult__o *)v28;
    if ( openedSquareIdArray )
    {
      System_Func_int__object____ctor(
        v28,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__,
        0);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray;
    }
    else
    {
      System_Func_int__object____ctor(
        v28,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__,
        0);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)battleServantSquareIdArray;
    }
    v31 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           v30,
                                                           v29,
                                                           (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v32 = BasicHelper__ExcludeNull_object_(
            v31,
            (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v13 + 24), 0);
  }
  v33 = OpenedSquareEntityArray;
  if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v26);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v33,
           dispType,
           ignoreTurnOrCountPassive,
           classStatisticsInfos,
           v27);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  System_Int32_array *IsPassive; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x27
  int32_t v12; // w20
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v14; // x28
  ClassBoardSquareEntity_o *v15; // x29
  System_Collections_Generic_List_object__o *v16; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v20; // x19
  SkillLvEntity_o *v21; // x20
  System_Collections_Generic_List_object__o *v22; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v23; // x21
  const MethodInfo *v24; // x5
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_object__o *v35; // x23
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x27
  __int64 v42; // x1
  System_Collections_Generic_List_object__o *v43; // x19
  Il2CppObject *v44; // x0
  FuncDispEntity_o *v45; // x19
  System_Collections_Generic_List_object__o *v46; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v47; // x25
  const MethodInfo *v48; // x5
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v71; // w27
  int32_t v72; // w19
  int32_t v73; // w20
  int32_t v74; // w26
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v75; // x24
  const MethodInfo *v76; // x7
  __int64 v77; // x0
  __int64 v78; // x1
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  System_Int32_array *v93; // x21
  __int64 v94; // x1
  const MethodInfo *v95; // x2
  System_String_o *Detail; // x19
  System_String_o *v97; // x23
  System_String_o *Name; // x0
  int32_t priority; // w19
  int32_t skillType; // w25
  int32_t id; // w20
  int32_t iconId; // w24
  System_String_o *v103; // x26
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v104; // x21
  const MethodInfo *v105; // x7
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  _BOOL8 v116; // x0
  __int64 v117; // x1
  Il2CppObject *value; // x23
  System_String_o *data; // x24
  Il2CppObject *v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  _DWORD *v124; // x8
  __int64 v125; // x1
  Il2CppObject *v126; // x0
  __int64 v127; // x1
  Il2CppObject *v128; // x0
  __int64 v129; // x1
  Il2CppClass *v130; // x8
  System_Int32_array *v131; // x27
  int32_t v132; // w25
  Il2CppObject *v133; // x19
  System_Int32_array *DispValFromSkill; // x0
  __int64 v135; // x1
  _DWORD *v136; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v138; // x8
  __int64 v139; // x9
  char *v140; // x11
  int32_t v141; // w13
  _DWORD *v142; // x8
  int32_t v143; // w8
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  const MethodInfo *v146; // x2
  Il2CppClass *v147; // x8
  System_String_o *v148; // x19
  System_String_o *v149; // x26
  Il2CppObject *v150; // x0
  __int64 v151; // x1
  _DWORD *v152; // x8
  int32_t v153; // w27
  Il2CppObject *v154; // x0
  __int64 v155; // x1
  _DWORD *v156; // x8
  int32_t v157; // w28
  Il2CppObject *v158; // x0
  __int64 v159; // x1
  _DWORD *v160; // x8
  int32_t v161; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v162; // x21
  const MethodInfo *v163; // x7
  __int64 v164; // x0
  __int64 v165; // x1
  System_String_o *v166; // x2
  System_String_o *v167; // x3
  int32_t v168; // w4
  int32_t v169; // w5
  bool v170; // w6
  bool v171; // w7
  struct System_Object_array *v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  Il2CppClass **v175; // x0
  __int64 v176; // x1
  ClassBoardEffectListDialogSkillListComponent___c_c *v177; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__42_0; // x20
  Il2CppObject *v180; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v181; // x0
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v188; // x0
  __int64 v189; // x1
  ClassBoardEffectListDialogSkillListComponent___c_c *v190; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v191; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v192; // x9
  System_Func_object__int__o *_9__42_1; // x20
  Il2CppObject *v194; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v195; // x0
  System_String_o *v196; // x2
  System_String_o *v197; // x3
  int32_t v198; // w4
  int32_t v199; // w5
  bool v200; // w6
  bool v201; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v202; // x0
  ClassBoardSquareEntity_array *v205; // [xsp+18h] [xbp-168h]
  int32_t v206; // [xsp+24h] [xbp-15Ch]
  ClassBoardCommandSpellMaster_o *v207; // [xsp+28h] [xbp-158h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+30h] [xbp-150h]
  System_Collections_Generic_Dictionary_object__object__o *v209; // [xsp+38h] [xbp-148h]
  System_Collections_Generic_List_object__o *v210; // [xsp+40h] [xbp-140h]
  FuncDispMaster_o *v211; // [xsp+48h] [xbp-138h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v213; // [xsp+68h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v214; // [xsp+90h] [xbp-F0h] BYREF
  Il2CppObject *v215; // [xsp+A8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v216; // [xsp+B0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v217; // [xsp+D8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v218; // [xsp+E0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v219; // [xsp+100h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+108h] [xbp-78h] BYREF
  SkillLvEntity_o *v221; // [xsp+110h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_597469B & 1) == 0 )
  {
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_2213A60(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_2213A60(&Method_System_String_Join_int___);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597469B = 1;
  }
  v221 = 0;
  entity = 0;
  v219 = 0;
  entitys = 0;
  memset(&v218, 0, sizeof(v218));
  v217 = 0;
  memset(&v216, 0, sizeof(v216));
  v215 = 0;
  memset(&v214, 0, sizeof(v214));
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_158;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v7;
  v205 = openedSquareArray;
  v206 = dispType;
  v210 = v7;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v207 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v209 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v209,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  v12 = v206;
  max_length_low = LODWORD(openedSquareArray->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v14 = 0;
    v211 = (FuncDispMaster_o *)v11;
    while ( 1 )
    {
      if ( v14 >= max_length_low )
        sub_2213CE4(IsPassive);
      v15 = openedSquareArray->m_Items[v14];
      v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v16;
      if ( !v15 )
        goto LABEL_158;
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v15, 0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        break;
      if ( v12 == 2 )
        goto LABEL_62;
      IsPassive = (System_Int32_array *)Master_object;
      if ( !Master_object )
        goto LABEL_158;
      IsPassive = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                          Master_object,
                                          &entity,
                                          v15->fields.targetId,
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v10 )
        goto LABEL_158;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v10,
                                          &v221,
                                          v15->fields.targetId,
                                          v15->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v221;
        if ( !v221 )
          goto LABEL_158;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v221, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v221 || !v11 )
        goto LABEL_158;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v11,
                                          &v219,
                                          v221->fields.funcId,
                                          v15->fields.classBoardBaseId,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( !v221 )
          goto LABEL_158;
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_869/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v221->fields.funcId,
                                            (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
        if ( !v209 )
          goto LABEL_158;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v209,
                &IsPassive->obj,
                (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v18,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v209,
            p_obj,
            (Il2CppObject *)v18,
            (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v209,
                 p_obj,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v20 = v219;
        v21 = v221;
        v22 = (System_Collections_Generic_List_object__o *)Item;
        v23 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_2213CCC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v23, v20, v21, 0, v15, v24);
        if ( !v22 )
          goto LABEL_158;
        items = v22->fields._items;
        v32 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_158;
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v23, v25, v26, v27, v28, v29, v30);
        }
LABEL_61:
        v12 = v206;
        openedSquareArray = v205;
        goto LABEL_62;
      }
      if ( !v221 )
        goto LABEL_158;
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v10,
                    v221->fields.skillId,
                    v221->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v221 )
        goto LABEL_158;
      v93 = IsPassive;
      Detail = SkillLvEntity__getDetail(v221, 0, 1, 0);
      if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v94);
      IsPassive = (System_Int32_array *)ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                                          Detail,
                                          v93,
                                          v95);
      if ( !entity )
        goto LABEL_158;
      v97 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v15->fields.priority;
      skillType = v15->fields.skillType;
      id = v15->fields.id;
      iconId = v15->fields.iconId;
      v103 = Name;
      v104 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_2213CCC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v104,
        v103,
        v97,
        id,
        priority,
        iconId,
        skillType,
        v105);
      if ( !v210 )
        goto LABEL_158;
      v112 = v210->fields._items;
      v12 = v206;
      openedSquareArray = v205;
      v113 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v210->fields._version;
      if ( !v112 )
        goto LABEL_158;
      v114 = v210->fields._size;
      if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v210,
          (Il2CppObject *)v104,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
      }
      else
      {
        v115 = &v112->obj.klass + v114;
        v210->fields._size = v114 + 1;
        v115[4] = (Il2CppClass *)v104;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v115 + 4), (int32_t)v104, v106, v107, v108, v109, v110, v111);
      }
LABEL_62:
      max_length_low = LODWORD(openedSquareArray->max_length);
      if ( (int)++v14 >= (int)max_length_low )
        goto LABEL_82;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v15, 0);
    if ( v12 == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v207;
    if ( !v207 )
      goto LABEL_158;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v207,
                                        &entitys,
                                        v15->fields.targetId,
                                        v15->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v35 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_158;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v213,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    v218 = *(System_Collections_Generic_List_Enumerator_object__o *)&v213.fields._dictionary;
    v213.fields._dictionary = 0;
    *(_QWORD *)&v213.fields._version = &v218;
    while ( 1 )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v218,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v11 = (Il2CppObject *)v211;
      if ( !v36 )
        break;
      current = v218.fields._current;
      if ( !v218.fields._current )
        sub_2213CDC(v36, v37);
      if ( !v211 )
        sub_2213CDC(v36, v37);
      if ( FuncDispMaster__IsContainFuncIds(
             v211,
             &v217,
             (System_Int32_array *)v218.fields._current[3].klass,
             v15->fields.classBoardBaseId,
             0) )
      {
        v39 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_869/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
        if ( !v35 )
          sub_2213CDC(v39, v40);
        v41 = v39;
        if ( !System_Collections_Generic_List_object___Contains(
                v35,
                v39,
                (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v209 )
            sub_2213CDC(0, v42);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v209,
                  v41,
                  (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v43 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v43,
              (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v209,
              v41,
              (Il2CppObject *)v43,
              (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v44 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v209,
                  v41,
                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v45 = v217;
          v46 = (System_Collections_Generic_List_object__o *)v44;
          v47 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_2213CCC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v47,
            v45,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v15,
            v48);
          if ( !v46
            || (v57 = v46->fields._items,
                v58 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
                ++v46->fields._version,
                !v57) )
          {
            sub_2213CDC(v49, v50);
          }
          v59 = v46->fields._size;
          if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v46,
              (Il2CppObject *)v47,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &v57->obj.klass + v59;
            v46->fields._size = v59 + 1;
            v60[4] = (Il2CppClass *)v47;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v47, v51, v52, v53, v54, v55, v56);
          }
          v89 = v35->fields._items;
          v90 = Method_System_Collections_Generic_List_string__Add__;
          ++v35->fields._version;
          if ( !v89 )
            sub_2213CDC(v61, v62);
          v91 = v35->fields._size;
          if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v35,
              v41,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v92 = &v89->obj.klass + v91;
            v35->fields._size = v91 + 1;
            v92[4] = (Il2CppClass *)v41;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v92 + 4), (int32_t)v41, v63, v64, v65, v66, v67, v68);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v71 = v15->fields.priority;
        v72 = v15->fields.skillType;
        v73 = v15->fields.id;
        v74 = v15->fields.iconId;
        v75 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_2213CCC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v75, klass, monitor, v73, v71, v74, v72, v76);
        if ( !v210
          || (v85 = v210->fields._items,
              v86 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
              ++v210->fields._version,
              !v85) )
        {
          sub_2213CDC(v77, v78);
        }
        v87 = v210->fields._size;
        if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v210,
            (Il2CppObject *)v75,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = &v85->obj.klass + v87;
          v210->fields._size = v87 + 1;
          v88[4] = (Il2CppClass *)v75;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 4), (int32_t)v75, v79, v80, v81, v82, v83, v84);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v218,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_82:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v209;
  if ( !v209 )
LABEL_158:
    sub_2213CDC(IsPassive, v9);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v213,
    v209,
    (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v216 = v213;
  while ( 1 )
  {
    v116 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v216,
             (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v116 )
      break;
    value = v216.fields._current.fields.value;
    if ( !v216.fields._current.fields.value )
      sub_2213CDC(v116, v117);
    if ( SLODWORD(v216.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v120 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v216.fields._current.fields.value,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v120 )
        sub_2213CDC(0, v121);
      if ( v120[1].monitor )
      {
        v122 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v122 )
          sub_2213CDC(0, v123);
        v124 = v122[1].monitor;
        if ( !v124 )
          sub_2213CDC(v122, v123);
        if ( !Master_object )
          sub_2213CDC(0, v123);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v215,
               v124[4],
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v215 )
            sub_2213CDC(0, v125);
          data = SkillEntity__getName((SkillEntity_o *)v215, 0);
        }
      }
      else
      {
        v126 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v126 )
          sub_2213CDC(0, v127);
        if ( v126[2].klass )
        {
          v128 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v128 )
            sub_2213CDC(0, v129);
          v130 = v128[2].klass;
          if ( !v130 )
            sub_2213CDC(v128, v129);
          data = (System_String_o *)v130->_1.byval_arg.data;
        }
      }
      v131 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v213,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v132 = 0;
      v214 = *(System_Collections_Generic_List_Enumerator_object__o *)&v213.fields._dictionary;
      v213.fields._dictionary = 0;
      *(_QWORD *)&v213.fields._version = &v214;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v214,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        v133 = v214.fields._current;
        DispValFromSkill = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
        if ( !v133 )
          sub_2213CDC(DispValFromSkill, v135);
        v136 = v133[1].monitor;
        if ( v136 )
        {
          if ( !v10 )
            sub_2213CDC(DispValFromSkill, v135);
          DispValFromSkill = SkillLvMaster__GetDispValFromSkill(
                               (SkillLvMaster_o *)v10,
                               v136[4],
                               v136[5],
                               classStatisticsInfos,
                               0);
        }
        else if ( v133[2].klass )
        {
          DispValFromSkill = ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                               (ClassBoardCommandSpellEntity_o *)v133[2].klass,
                               0,
                               0);
        }
        if ( !v131 )
          sub_2213CDC(DispValFromSkill, v135);
        max_length = v131->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v138 = 0;
            v139 = (unsigned int)v131->max_length;
            do
            {
              if ( !DispValFromSkill )
                sub_2213CDC(0, v135);
              if ( v138 >= LODWORD(DispValFromSkill->max_length) )
                sub_2213CE4(DispValFromSkill);
              v140 = (char *)v131 + 4 * v138;
              v141 = DispValFromSkill->m_Items[v138++];
              *((_DWORD *)v140 + 8) += v141;
            }
            while ( v139 != v138 );
          }
        }
        else
        {
          v131 = DispValFromSkill;
        }
        v142 = v133[2].monitor;
        if ( !v142 )
          sub_2213CDC(DispValFromSkill, v135);
        v143 = v142[20];
        if ( v143 > v132 )
          v132 = v143;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v214,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
      v144 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v144 )
        sub_2213CDC(0, v145);
      v147 = v144[1].klass;
      if ( !v147 )
        sub_2213CDC(v144, v145);
      v148 = *(System_String_o **)&v147->_1.byval_arg.bits;
      if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v145);
      v149 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(v148, v131, v146);
      v150 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v150 )
        sub_2213CDC(0, v151);
      v152 = v150[2].monitor;
      if ( !v152 )
        sub_2213CDC(v150, v151);
      v153 = v152[5];
      v154 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v154 )
        sub_2213CDC(0, v155);
      v156 = v154[2].monitor;
      if ( !v156 )
        sub_2213CDC(v154, v155);
      v157 = v156[6];
      v158 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v158 )
        sub_2213CDC(0, v159);
      v160 = v158[2].monitor;
      if ( !v160 )
        sub_2213CDC(v158, v159);
      v161 = v160[14];
      v162 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_2213CCC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v162, data, v149, v153, v132, v157, v161, v163);
      if ( !v210
        || (v172 = v210->fields._items,
            v173 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
            ++v210->fields._version,
            !v172) )
      {
        sub_2213CDC(v164, v165);
      }
      v174 = v210->fields._size;
      if ( (unsigned int)v174 >= LODWORD(v172->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v210,
          (Il2CppObject *)v162,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
      }
      else
      {
        v175 = &v172->obj.klass + v174;
        v210->fields._size = v174 + 1;
        v175[4] = (Il2CppClass *)v162;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v175 + 4), (int32_t)v162, v166, v167, v168, v169, v170, v171);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v216,
    (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v177 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !*(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v176);
    v177 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  static_fields = v177->static_fields;
  _9__42_0 = (System_Func_object__int__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !*(&v177->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v177, v176);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v180 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_0,
      v180,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__,
      0);
    v181 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v181->__9__42_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v181->__9__42_0,
      (int32_t)_9__42_0,
      v182,
      v183,
      v184,
      v185,
      v186,
      v187);
  }
  v188 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v210,
           (System_Func_TSource__TKey__o *)_9__42_0,
           (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v190 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v191 = v188;
  if ( !*(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v189);
    v190 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  v192 = v190->static_fields;
  _9__42_1 = (System_Func_object__int__o *)v192->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !*(&v190->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v190, v189);
      v192 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v194 = (Il2CppObject *)v192->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v194,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__,
      0);
    v195 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v195->__9__42_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_1;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v195->__9__42_1,
      (int32_t)_9__42_1,
      v196,
      v197,
      v198,
      v199,
      v200,
      v201);
  }
  v202 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v191,
                                                                (System_Func_TSource__TKey__o *)_9__42_1,
                                                                (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v202, (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dialog,
    (int32_t)dialog,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 12);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_2213CDC(gameObject, v10);
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

  if ( (byte_5974694 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&StringLiteral_6570/*"ExecuteCallback"*/);
    byte_5974694 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6570/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0);
}


void ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AtlasManagerUnit_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x21
  System_Action_object__o *v18; // x20
  ChainableActionBase_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ChainableActionParallel_o *v27; // x20
  __int64 v28; // x21
  System_Action_o *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_5974693 & 1) == 0 )
  {
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManagerUnit_TypeInfo);
    sub_2213A60(&ChainableActionParallel_TypeInfo);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__33_0__);
    sub_2213A60(&StringLiteral_7447/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    byte_5974693 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v10, (System_String_o *)StringLiteral_7447/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, 0, 0);
  this->fields.boardUiAtlasManagerUnit = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = sub_2213B20(System_Action_Action____TypeInfo, 1);
  v18 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)v18, v21, v22, v23, v24, v25, v26);
  v27 = (ChainableActionParallel_o *)sub_2213CCC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_56108200(v27, (System_Action_Action__array *)v17, 0);
  v28 = sub_2213B20(System_Action___TypeInfo, 1);
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__, 0);
  if ( !v28 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v28 + 24) )
LABEL_11:
    sub_2213CE4(v19);
  *(_QWORD *)(v28 + 32) = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  if ( !v27 || (v19 = ChainableActionBase__Final((ChainableActionBase_o *)v27, (System_Action_array *)v28, 0)) == 0 )
LABEL_10:
    sub_2213CDC(v19, v20);
  ChainableActionBase__Execute(v19, 0);
}


System_String_o *ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x20

  if ( (byte_597469C & 1) == 0 )
  {
    sub_2213A60(&SkillDetailParamFormatResolver_TypeInfo);
    byte_597469C = 1;
  }
  v6 = FuncDispMaster__ReplaceFractionFormat(text, funcVals, 0);
  if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v5);
  return SkillDetailParamFormatResolver__ApplyGivenValues(v6, funcVals, 0);
}


void ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *classInfoObject; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_5974695 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974695 = 1;
  }
  classInfoObject = this->fields.classInfoObject;
  if ( !classInfoObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       classInfoObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
        0);
      return;
    }
LABEL_10:
    sub_2213CDC(classInfoObject, classBoardBaseEntity);
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
    sub_2213CDC(0, v5);
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
    sub_2213CDC(0, sprite);
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
  __int64 v17; // x1
  int32_t v18; // w8
  int32_t classBoardBaseId; // w8
  __int64 Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_ClassBoardClassEntity__o *v23; // x24
  ClassBoardEffectListDialogSkillListComponent___c_c *v24; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__40_0; // x26
  Il2CppObject *v27; // x27
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  char v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  ClassBoardBaseMaster_o *v35; // x24
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x27
  ClassBoardBaseEntity_o *v37; // x24
  __int64 v38; // x8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v39; // x9
  int id; // w9
  int v41; // w9
  bool v42; // w24
  const MethodInfo *v43; // x6
  _BOOL4 v44; // w19
  long double v45; // q0
  System_Int32_array *v46; // x28
  unsigned __int64 v47; // x20
  __int64 v48; // x28
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  char v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  BattleServantData_o *v55; // x1
  __int64 v56; // x27
  System_Collections_Generic_List_object__o *v57; // x29
  System_Predicate_object__o *v58; // x26
  int32_t v59; // w19
  System_Int32_array *squareIds; // x25
  _QWORD *v61; // x25
  __int64 v62; // x8
  __int64 v63; // x0
  __int64 v64; // x0
  int32_t v65; // w20
  System_Int32_array *v66; // x23
  _QWORD *v67; // x23
  __int64 v68; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  char v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  const MethodInfo *v79; // x6
  int grandClassId; // w25
  ClassBoardEffectListDialogSkillListComponent_c *v81; // x0
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x19
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o *v84; // x21
  __int64 v85; // x1
  Il2CppObject *Component_object; // x23
  __int64 v87; // x1
  UnityEngine_Object_o *recycler; // x23
  float v89; // s8
  UnityEngine_Object_o *normalScoreTitleLabel; // x22
  __int64 v91; // x1
  UILabel_o *v92; // x22
  ScrollItemRecycler_o *v93; // x22
  struct ScrollItemRecycler_o *v94; // x8
  bool v95; // w26
  struct ScrollItemRecycler_o *v96; // x8
  System_Func_T1__T2__TResult__o *v97; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v98; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  ScrollItemRecycler_o *v100; // x22
  int32_t size; // w23
  System_Action_T1__T2__o *v102; // x24
  int32_t grandSkillDataFirstIndex; // w19
  _BOOL4 v104; // w23
  float v105; // s8
  UILabel_o *allClosedLabel; // x21
  __int64 v107; // x1
  UnityEngine_Object_o *classInfoObject; // x21
  float v109; // s9
  Il2CppObject *current; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v112; // x1
  UnityEngine_GameObject_o *v113; // x22
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  char v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  ClassBoardEffectListDialogSkillDetailComponent_o *v122; // x23
  __int64 v123; // x0
  __int64 v124; // x1
  const MethodInfo *v125; // x6
  float v126; // s8
  System_String_o *v127; // x0
  System_String_o *v128; // x22
  float v129; // s8
  ClassBoardEffectListDialogSkillListComponent_c *v130; // x0
  ScrollItemRecycler_o *v131; // x21
  UnityEngine_GameObject_o *grandClassInfoPrefab; // x20
  float ExtraClassIconListObjHeight; // s9
  System_Action_object__o *v134; // x22
  UnityEngine_Object_o *grandScoreTitleLabel; // x20
  UnityEngine_Object_o *grandScoreTitleTopLine; // x20
  __int64 v137; // x1
  UILabel_o *v138; // x20
  ScrollItemRecycler_o *v139; // x20
  int32_t v140; // w19
  UnityEngine_GameObject_o *v141; // x21
  _BOOL4 v142; // [xsp+18h] [xbp-D8h]
  _BOOL4 v143; // [xsp+1Ch] [xbp-D4h]
  ClassBoardInfo_o *v144; // [xsp+20h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+70h] [xbp-80h] BYREF
  int32_t v150; // [xsp+7Ch] [xbp-74h] BYREF

  v150 = baseId;
  if ( (byte_5974699 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&System_Action_GameObject__int__TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_2213A60(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_GameObject__int__float__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_2213A60(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_ClassBoardClassEntity__TypeInfo);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__);
    sub_2213A60(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_3528/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_2213A60(&StringLiteral_3527/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    sub_2213A60(&StringLiteral_3534/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/);
    sub_2213A60(&StringLiteral_3535/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/);
    byte_5974699 = 1;
  }
  entitys = 0;
  memset(&v148, 0, sizeof(v148));
  this->fields.supportGrandClassBoardInfo = supportGrandClassBoard;
  this->fields.baseId = baseId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.supportGrandClassBoardInfo,
    (int32_t)supportGrandClassBoard,
    *(System_String_o **)&inputGrandClassId,
    *(System_String_o **)&dispType,
    isAll,
    (int32_t)supportClassBoard,
    (bool)supportGrandClassBoard,
    isDispGrandScore);
  if ( isDispGrandScore )
    v18 = inputGrandClassId;
  else
    v18 = -1;
  this->fields.grandClassId = v18;
  this->fields.isSupport = supportClassBoard != 0;
  if ( supportGrandClassBoard && supportClassBoard && isDispGrandScore )
  {
    if ( System_Linq_Enumerable__Any_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)supportGrandClassBoard->fields.squareIds,
           (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___) )
    {
      classBoardBaseId = supportGrandClassBoard->fields.classBoardBaseId;
    }
    else
    {
      classBoardBaseId = -1;
    }
    this->fields.grandClassId = classBoardBaseId;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_202;
  v144 = supportGrandClassBoard;
  if ( ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0) )
  {
    v23 = entitys;
    v24 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !*(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v22);
      v24 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__40_0 = (System_Func_object__bool__o *)static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v22);
        static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__40_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__40_0,
        v27,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__,
        0);
      v28 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      v28->__9__40_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__40_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__40_0, (int32_t)_9__40_0, v29, v30, v31, v32, v33, v34);
    }
    v142 = System_Linq_Enumerable__All_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v23,
             (System_Func_TSource__bool__o *)_9__40_0,
             (const MethodInfo_3864CD0 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
  }
  else
  {
    v142 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v35 = (ClassBoardBaseMaster_o *)Master_object;
  if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v21);
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
  Master_object = sub_2213B20(int___TypeInfo, 4);
  if ( !Master_object )
    goto LABEL_202;
  v38 = *(_QWORD *)(Master_object + 24);
  if ( !(_DWORD)v38
    || (v39 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields,
        *(_DWORD *)(Master_object + 32) = v39->Extra1ClassBaseId,
        (_DWORD)v38 == 1)
    || ((*(_DWORD *)(Master_object + 36) = v39->Extra2ClassBaseId, !GrandClassBoardBaseEntity)
      ? (id = -1)
      : (id = GrandClassBoardBaseEntity->fields.id),
        (unsigned int)v38 <= 2
     || ((*(_DWORD *)(Master_object + 40) = id, !v37) ? (v41 = -1) : (v41 = v37->fields.id),
         v42 = isAll,
         (v38 & 0xFFFFFFFC) == 0)) )
  {
LABEL_203:
    sub_2213CE4(Master_object);
  }
  *(_DWORD *)(Master_object + 44) = v41;
  v44 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Master_object,
          baseId,
          (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( !v44 && isAll )
  {
    Master_object = (__int64)this->fields.classInfoObject;
    if ( !Master_object )
      goto LABEL_202;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_202;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  v46 = 0;
  v143 = v44;
  if ( battleServantList && entitys )
  {
    if ( SLODWORD(battleServantList->max_length) < 1 )
    {
      v46 = 0;
    }
    else
    {
      v47 = 0;
      while ( 1 )
      {
        v48 = sub_2213CCC(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v48, 0);
        if ( v47 >= LODWORD(battleServantList->max_length) )
          goto LABEL_203;
        if ( !v48 )
          goto LABEL_202;
        v55 = battleServantList->m_Items[v47];
        *(_QWORD *)(v48 + 16) = v55;
        v56 = v48 + 16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 16), (int32_t)v55, v49, v50, v51, v52, v53, v54);
        v57 = (System_Collections_Generic_List_object__o *)entitys;
        v58 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ClassBoardClassEntity__TypeInfo);
        System_Predicate_object____ctor(
          v58,
          (Il2CppObject *)v48,
          Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__,
          0);
        if ( !v57 )
          goto LABEL_202;
        Master_object = (__int64)System_Collections_Generic_List_object___Find(
                                   v57,
                                   (System_Predicate_T__o *)v58,
                                   (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
        if ( Master_object )
          break;
        if ( (__int64)++v47 >= SLODWORD(battleServantList->max_length) )
        {
          v42 = isAll;
          v46 = 0;
          goto LABEL_59;
        }
      }
      v42 = isAll;
      if ( !*(_QWORD *)v56 )
        goto LABEL_202;
      v46 = *(System_Int32_array **)(*(_QWORD *)v56 + 1008LL);
    }
  }
LABEL_59:
  if ( !this->fields.isSupport )
  {
    v59 = dispType;
    v65 = baseId;
    squareIds = 0;
LABEL_84:
    v66 = 0;
    goto LABEL_85;
  }
  v59 = dispType;
  if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0 )
  {
    v61 = Method_System_Array_Empty_int___;
    v62 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v62 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v62 = v61[7];
    }
    v63 = *(_QWORD *)(v62 + 16);
    if ( (*(_WORD *)(v63 + 309) & 1) == 0 )
      v63 = sub_224B908(v45);
    if ( !*(_DWORD *)(v63 + 228) )
      *(__n128 *)&v45 = j_il2cpp_runtime_class_init_0(v63, v21);
    v64 = *(_QWORD *)(v61[7] + 16LL);
    if ( (*(_WORD *)(v64 + 309) & 1) == 0 )
      v64 = sub_224B908(v45);
    squareIds = **(System_Int32_array ***)(v64 + 184);
    if ( !this->fields.isSupport )
    {
      v65 = baseId;
      goto LABEL_84;
    }
  }
  v65 = baseId;
  if ( !v144 || (v66 = v144->fields.squareIds) == 0 )
  {
    v67 = Method_System_Array_Empty_int___;
    v68 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v68 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v68 = v67[7];
    }
    v69 = *(_QWORD *)(v68 + 16);
    if ( (*(_WORD *)(v69 + 309) & 1) == 0 )
      v69 = sub_224B908(v45);
    if ( !*(_DWORD *)(v69 + 228) )
      *(__n128 *)&v45 = j_il2cpp_runtime_class_init_0(v69, v21);
    v70 = *(_QWORD *)(v67[7] + 16LL);
    if ( (*(_WORD *)(v70 + 309) & 1) == 0 )
      v70 = sub_224B908(v45);
    v66 = **(System_Int32_array ***)(v70 + 184);
  }
LABEL_85:
  if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v21);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                    v65,
                    v59,
                    0,
                    squareIds,
                    classStatisticsInfos,
                    v46,
                    v43);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillDispDataList,
    (int32_t)OpenSkillList,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  if ( v42 )
  {
    grandClassId = this->fields.grandClassId;
    if ( grandClassId >= 1 )
    {
      if ( !*p_skillDispDataList )
        goto LABEL_202;
      v81 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
      this->fields.grandSkillDataFirstIndex = (*p_skillDispDataList)->fields._size;
      if ( !*(&v81->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v81, v21);
      Master_object = (__int64)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                 grandClassId,
                                 v59,
                                 0,
                                 v66,
                                 classStatisticsInfos,
                                 0,
                                 v79);
      if ( !Master_object )
        goto LABEL_202;
      v21 = (System_Collections_Generic_IEnumerable_T__o *)Master_object;
      if ( *(int *)(Master_object + 24) < 1 )
      {
        this->fields.grandSkillDataFirstIndex = -1;
      }
      else
      {
        Master_object = (__int64)*p_skillDispDataList;
        if ( !*p_skillDispDataList )
          goto LABEL_202;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)Master_object,
          v21,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
    }
  }
  if ( !*p_skillDispDataList )
    goto LABEL_202;
  if ( (*p_skillDispDataList)->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3527/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0);
      if ( !allClosedLabel )
        goto LABEL_202;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0);
      classInfoObject = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v107);
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
      if ( v142 && v143 )
      {
        v127 = System_Int32__ToString((int32_t)&v150, 0);
        v128 = System_String__Concat_75651716((System_String_o *)StringLiteral_3528/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v127, 0);
      }
      else
      {
        v128 = (System_String_o *)StringLiteral_3527/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
      Master_object = (__int64)LocalizationManager__Get(v128, 0);
      if ( !allClosedLabel )
        goto LABEL_202;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0);
    }
    Master_object = (__int64)this->fields.allClosedLabel;
    if ( Master_object )
    {
      Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        if ( v42 )
          return;
        Master_object = (__int64)this->fields.scrollView;
        if ( Master_object )
        {
          UIScrollView__UpdatePosition((UIScrollView_o *)Master_object, 0);
          return;
        }
      }
    }
    goto LABEL_202;
  }
  if ( !v42 )
    goto LABEL_103;
  p_skillDetailObjForAll = &this->fields.skillDetailObjForAll;
  skillDetailObjForAll = (UnityEngine_Object_o *)this->fields.skillDetailObjForAll;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  Master_object = UnityEngine_Object__op_Inequality(skillDetailObjForAll, 0, 0);
  if ( (Master_object & 1) == 0 )
LABEL_103:
    p_skillDetailObjForAll = &this->fields.skillDetailObj;
  v84 = *p_skillDetailObjForAll;
  if ( !*p_skillDetailObjForAll )
    goto LABEL_202;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       *p_skillDetailObjForAll,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v85);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    recycler = (UnityEngine_Object_o *)this->fields.recycler;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87);
    Master_object = UnityEngine_Object__op_Inequality(recycler, 0, 0);
    if ( (Master_object & 1) != 0 )
    {
      v89 = 0.0;
      if ( this->fields.grandSkillDataFirstIndex >= 1 )
      {
        normalScoreTitleLabel = (UnityEngine_Object_o *)this->fields.normalScoreTitleLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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
          v92 = this->fields.normalScoreTitleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3535/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/, 0);
          if ( !v92 )
            goto LABEL_202;
          UILabel__set_text(v92, (System_String_o *)Master_object, 0);
          Master_object = (__int64)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_202;
          v93 = this->fields.recycler;
          Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          if ( !v93 )
            goto LABEL_202;
          ScrollItemRecycler__AddListDifferentObject(
            v93,
            0,
            (UnityEngine_GameObject_o *)Master_object,
            0,
            0.0,
            0.0,
            0,
            0);
          v94 = this->fields.recycler;
          if ( !v94 )
            goto LABEL_202;
          v89 = 20.0;
          v94->fields.paddingTop = 20.0;
        }
      }
      v95 = v143 && v42;
      if ( v143 && v42 )
      {
        if ( (this->fields.grandSkillDataFirstIndex & 0x80000000) == 0 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.classInfoObject, -40.0, 0);
          v89 = v89 + 20.0;
        }
        v96 = this->fields.recycler;
        if ( !v96 )
          goto LABEL_202;
        v96->fields.paddingTop = v89 + this->fields.classIconSpaceOffsetY;
      }
      v97 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_GameObject__int__float__TypeInfo);
      System_Func_object__int__float____ctor(
        v97,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
        0);
      v98 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_2213CCC(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
      ScrollItemRecycler_HeightCalculatorVarious___ctor(v98, (System_Func_GameObject__int__float__o *)v97, 0);
      skillDispDataList = this->fields.skillDispDataList;
      if ( !skillDispDataList )
        goto LABEL_202;
      v100 = this->fields.recycler;
      size = skillDispDataList->fields._size;
      v102 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_GameObject__int__TypeInfo);
      System_Action_object__int____ctor(
        v102,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
        0);
      if ( !v100 )
        goto LABEL_202;
      ScrollItemRecycler__Init(
        v100,
        size,
        v84,
        (System_Action_GameObject__int__o *)v102,
        (ScrollItemRecycler_HeightCalculatorBase_o *)v98,
        0);
      if ( v95 )
      {
        grandSkillDataFirstIndex = this->fields.grandSkillDataFirstIndex;
        if ( grandSkillDataFirstIndex < 0 )
          goto LABEL_198;
        v104 = grandSkillDataFirstIndex == 0;
        if ( grandSkillDataFirstIndex )
        {
          v105 = -40.0;
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
          v105 = 20.0;
          grandSkillDataFirstIndex = this->fields.grandSkillDataFirstIndex;
        }
        v130 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v131 = this->fields.recycler;
        grandClassInfoPrefab = this->fields.grandClassInfoPrefab;
        if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v21);
          v130 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ExtraClassIconListObjHeight = v130->static_fields->ExtraClassIconListObjHeight;
        v134 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(
          v134,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__,
          0);
        if ( !v131 )
          goto LABEL_202;
        ScrollItemRecycler__AddListDifferentObject(
          v131,
          grandSkillDataFirstIndex - 1,
          0,
          grandClassInfoPrefab,
          ExtraClassIconListObjHeight,
          v105,
          (System_Action_GameObject__o *)v134,
          0);
        v129 = 60.0;
      }
      else
      {
        v129 = 21.0;
        v104 = 0;
      }
      if ( (this->fields.grandSkillDataFirstIndex & 0x80000000) == 0 )
      {
        grandScoreTitleLabel = (UnityEngine_Object_o *)this->fields.grandScoreTitleLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        if ( UnityEngine_Object__op_Inequality(grandScoreTitleLabel, 0, 0) )
        {
          if ( !this->fields.grandSkillDataFirstIndex )
          {
            grandScoreTitleTopLine = (UnityEngine_Object_o *)this->fields.grandScoreTitleTopLine;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
            if ( UnityEngine_Object__op_Inequality(grandScoreTitleTopLine, 0, 0) )
            {
              Master_object = (__int64)this->fields.grandScoreTitleTopLine;
              if ( !Master_object )
                goto LABEL_202;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
              if ( !v104 )
                v129 = 20.0;
            }
          }
          Master_object = (__int64)this->fields.grandScoreTitleLabel;
          if ( Master_object )
          {
            Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
            if ( Master_object )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
              v138 = this->fields.grandScoreTitleLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v137);
              Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3534/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/, 0);
              if ( v138 )
              {
                UILabel__set_text(v138, (System_String_o *)Master_object, 0);
                Master_object = (__int64)this->fields.grandScoreTitleLabel;
                if ( Master_object )
                {
                  v139 = this->fields.recycler;
                  v140 = this->fields.grandSkillDataFirstIndex;
                  Master_object = (__int64)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Master_object,
                                             0);
                  v141 = (UnityEngine_GameObject_o *)Master_object;
                  if ( !*(&ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo, v21);
                  if ( v139 )
                  {
                    ScrollItemRecycler__AddListDifferentObject(
                      v139,
                      v140 - 1,
                      v141,
                      0,
                      ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->ExtraClassTabGrandScoreTitleHeight,
                      v129,
                      0,
                      0);
                    goto LABEL_198;
                  }
                }
              }
            }
          }
LABEL_202:
          sub_2213CDC(Master_object, v21);
        }
      }
LABEL_198:
      Master_object = (__int64)this->fields.recycler;
      if ( Master_object )
      {
        ScrollItemRecycler__UpdateDisplay((ScrollItemRecycler_o *)Master_object, 0);
        Master_object = (__int64)this->fields.recycler;
        if ( Master_object )
        {
          ScrollItemRecycler__ResetScrollPos((ScrollItemRecycler_o *)Master_object, 0);
          return;
        }
      }
      goto LABEL_202;
    }
    Master_object = (__int64)*p_skillDispDataList;
    if ( !*p_skillDispDataList )
      goto LABEL_202;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v147,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    v109 = 0.0;
    v148 = v147;
    v147.fields._list = 0;
    *(_QWORD *)&v147.fields._index = &v148;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v148,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
    {
      current = v148.fields._current;
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v84, 0, 0, 0);
      v113 = Object;
      if ( !Object )
        sub_2213CDC(0, v112);
      v114 = UnityEngine_GameObject__GetComponent_object_(
               Object,
               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
      v122 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v114;
      if ( !v114 )
        sub_2213CDC(0, v115);
      v114[5].monitor = this;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v114[5].monitor,
        (int32_t)this,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      if ( !current )
        sub_2213CDC(v123, v124);
      v126 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
               v122,
               (System_String_o *)current[1].klass,
               (System_String_o *)current[1].monitor,
               (int32_t)current[2].monitor,
               HIDWORD(current[2].monitor),
               0,
               v125);
      GameObjectExtensions__SetParent_42897232(v113, this->fields.skillListParent, 0);
      if ( !byte_5969AE5 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      GameObjectExtensions__SetLocalScale(v113, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      GameObjectExtensions__SetLocalPosition_42891620(v113, 0.0, -v109, 0.0, 0);
      UnityEngine_GameObject__SetActive(v113, 1, 0);
      v109 = v109 + v126;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v148,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  }
}


void ClassBoardEffectListDialogSkillListComponent__SetupGrandExtraClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v4; // x19
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_5974697 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974697 = 1;
  }
  entity = 0;
  if ( !obj )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( this )
    {
      this = (ClassBoardEffectListDialogSkillListComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 &entity,
                                                                 v4->fields.grandClassId,
                                                                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( Component_object )
      {
        ClassBoardClassIconListComponent__SetClassIconList(
          (ClassBoardClassIconListComponent_o *)Component_object,
          (ClassBoardBaseEntity_o *)entity,
          1,
          v4->fields.supportGrandClassBoardInfo,
          1,
          0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(this, obj);
  }
}


void ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x19
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Item; // x21
  UISprite_o *classInfoObject; // x24
  const MethodInfo *v17; // x6
  ClassBoardEffectListDialogSkillListComponent_o *v18; // x8
  int32_t grandSkillDataFirstIndex; // w9
  UnityEngine_Object_o *skillDetailObj; // x23
  __int64 v21; // x1
  __int64 v22; // x1

  v6 = this;
  if ( (byte_5974696 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20505/*"formation_copy_bg2"*/);
    sub_2213A60(&StringLiteral_22324/*"line_yellow"*/);
    sub_2213A60(&StringLiteral_22314/*"line"*/);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_2213A60(&StringLiteral_21544/*"img_score_list_grand_board"*/);
    byte_5974696 = 1;
  }
  if ( !obj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0,
                                                             0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Component_object )
    {
      Component_object[5].monitor = v6;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&Component_object[5].monitor,
        (int32_t)v6,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList;
      if ( this )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 index,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
        this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        if ( this )
        {
          classInfoObject = (UISprite_o *)this->fields.classInfoObject;
          this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     obj,
                                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          if ( this )
          {
            v18 = this;
            this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.boardUiAtlasManagerUnit;
            if ( this )
            {
              grandSkillDataFirstIndex = v6->fields.grandSkillDataFirstIndex;
              skillDetailObj = (UnityEngine_Object_o *)v18->fields.skillDetailObj;
              if ( grandSkillDataFirstIndex < 0 || grandSkillDataFirstIndex > index )
              {
                if ( !classInfoObject )
                  goto LABEL_27;
                UISprite__set_atlas(classInfoObject, v6->fields.defaultAtlas, 0);
                UISprite__set_spriteName(classInfoObject, (System_String_o *)StringLiteral_20505/*"formation_copy_bg2"*/, 0);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
                this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Inequality(
                                                                           skillDetailObj,
                                                                           0,
                                                                           0);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !skillDetailObj )
                    goto LABEL_27;
                  UISprite__set_atlas((UISprite_o *)skillDetailObj, v6->fields.defaultAtlas, 0);
                  UISprite__set_spriteName((UISprite_o *)skillDetailObj, (System_String_o *)StringLiteral_22314/*"line"*/, 0);
                }
              }
              else
              {
                AtlasManagerUnit__SetUI(
                  (AtlasManagerUnit_o *)this,
                  classInfoObject,
                  (System_String_o *)StringLiteral_21544/*"img_score_list_grand_board"*/,
                  0);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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
                                                                             (System_String_o *)StringLiteral_22324/*"line_yellow"*/,
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
                v17);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(this, obj);
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
    sub_2213CDC(0, f);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.funcDispEntity = funcDispEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12, v13, v14, v15, v16);
  this->fields.skillLvEntity = skillLvEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillLvEntity,
    (int32_t)skillLvEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandSpellEntity,
    (int32_t)commandSpellEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardSquareEntity,
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v14->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->fields, (int32_t)name, v15, v16, v17, v18, v19, v20);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v14, (int32_t)detail, v21, v22, v23, v24, v25, v26);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597469E & 1) == 0 )
  {
    sub_2213A60(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_597469E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__42_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.squareId;
}


bool ClassBoardEffectListDialogSkillListComponent___c___SetList_b__40_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, e);
  classId = e->fields.classId;
  return classId == BattleServantData__GetOriginalClassId((BattleServantData_o *)this, 0);
}


void ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___GetOpenSkillList_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_2213CDC(0, *(_QWORD *)&id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___GetOpenSkillList_b__1(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_2213CDC(0, *(_QWORD *)&id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0);
}