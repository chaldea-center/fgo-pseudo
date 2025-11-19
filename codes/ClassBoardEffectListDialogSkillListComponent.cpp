void ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_c *v1; // x8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x9

  if ( (byte_4CB9E8A & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_4CB9E8A = 1;
  }
  v1 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->Extra1ClassBaseId = 0x900000008LL;
  static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_CEC7C0;
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
  if ( (byte_4CB9E85 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4CB9E85 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0)
    || (v8 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0)
    || !v8 )
  {
    sub_1C6BC60(this, obj);
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
  const MethodInfo *v18; // x3
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v20; // x4
  System_Func_T__TResult__o *v21; // x0
  System_Func_TSource__TResult__o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  ClassBoardSquareEntity_array *v26; // x22

  if ( (byte_4CB9E87 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1C6BA08(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
    byte_4CB9E87 = 1;
  }
  v13 = sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_1C6BC60(v14, v15);
  *(_DWORD *)(v13 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Master_object, v17, v18);
  if ( (unsigned __int64)openedSquareIdArray | (unsigned __int64)battleServantSquareIdArray )
  {
    v21 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    v22 = (System_Func_TSource__TResult__o *)v21;
    if ( openedSquareIdArray )
    {
      System_Func_int__object____ctor(
        v21,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__,
        0);
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray;
    }
    else
    {
      System_Func_int__object____ctor(
        v21,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__,
        0);
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)battleServantSquareIdArray;
    }
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           v23,
                                                           v22,
                                                           (const MethodInfo_316EE54 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v25 = BasicHelper__ExcludeNull_object_(
            v24,
            (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v13 + 24), 0);
  }
  v26 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v26,
           dispType,
           ignoreTurnOrCountPassive,
           classStatisticsInfos,
           v20);
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
  const MethodInfo *v24; // x5
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_object__o *v31; // x23
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x27
  __int64 v38; // x1
  System_Collections_Generic_List_object__o *v39; // x19
  Il2CppObject *v40; // x0
  FuncDispEntity_o *v41; // x19
  System_Collections_Generic_List_object__o *v42; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v43; // x25
  const MethodInfo *v44; // x5
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v59; // w27
  int32_t v60; // w20
  int32_t v61; // w26
  int32_t v62; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v63; // x24
  const MethodInfo *v64; // x7
  __int64 v65; // x0
  __int64 v66; // x1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  System_Int32_array *v77; // x21
  const MethodInfo *v78; // x2
  System_String_o *Detail; // x19
  System_String_o *v80; // x19
  System_String_o *Name; // x0
  int32_t priority; // w20
  int32_t id; // w23
  int32_t iconId; // w24
  int32_t skillType; // w25
  System_String_o *v86; // x26
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v87; // x21
  const MethodInfo *v88; // x7
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  _BOOL8 v95; // x0
  __int64 v96; // x1
  Il2CppObject *value; // x23
  System_String_o *data; // x24
  Il2CppObject *v99; // x0
  __int64 v100; // x1
  Il2CppObject *v101; // x0
  __int64 v102; // x1
  _DWORD *v103; // x8
  __int64 v104; // x1
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  Il2CppObject *v107; // x0
  __int64 v108; // x1
  Il2CppClass *v109; // x8
  System_Int32_array *v110; // x26
  int32_t v111; // w25
  Il2CppObject *v112; // x19
  __int64 v113; // x0
  __int64 v114; // x1
  _DWORD *v115; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v117; // x8
  il2cpp_array_size_t v118; // x10
  unsigned __int64 v119; // x9
  __int64 v120; // x10
  char *v121; // x12
  int v122; // w13
  _DWORD *v123; // x8
  int32_t v124; // w8
  Il2CppObject *v125; // x0
  __int64 v126; // x1
  const MethodInfo *v127; // x2
  Il2CppClass *v128; // x8
  System_String_o *v129; // x19
  System_String_o *v130; // x26
  Il2CppObject *v131; // x0
  __int64 v132; // x1
  _DWORD *v133; // x8
  int32_t v134; // w27
  Il2CppObject *v135; // x0
  __int64 v136; // x1
  _DWORD *v137; // x8
  int32_t v138; // w28
  Il2CppObject *v139; // x0
  __int64 v140; // x1
  _DWORD *v141; // x8
  int32_t v142; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v143; // x21
  const MethodInfo *v144; // x7
  __int64 v145; // x0
  __int64 v146; // x1
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v153; // x0
  System_Func_object__int__o *_9__42_0; // x20
  Il2CppObject *v155; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v159; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v160; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v161; // x19
  System_Func_object__int__o *_9__42_1; // x20
  Il2CppObject *v163; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v167; // x0
  ClassBoardSquareEntity_array *v170; // [xsp+18h] [xbp-158h]
  int32_t v171; // [xsp+24h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v172; // [xsp+28h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_Dictionary_object__object__o *v174; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_object__o *v175; // [xsp+40h] [xbp-130h]
  FuncDispMaster_o *v176; // [xsp+48h] [xbp-128h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v178; // [xsp+58h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v179; // [xsp+80h] [xbp-F0h] BYREF
  Il2CppObject *v180; // [xsp+98h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v181; // [xsp+A0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v182; // [xsp+C8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v183; // [xsp+D0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v184; // [xsp+F0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+F8h] [xbp-78h] BYREF
  SkillLvEntity_o *v186; // [xsp+100h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4CB9E88 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C6BA08(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C6BA08(&Method_System_String_Join_int___);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9E88 = 1;
  }
  v186 = 0;
  entity = 0;
  v184 = 0;
  entitys = 0;
  memset(&v183, 0, sizeof(v183));
  v182 = 0;
  v180 = 0;
  memset(&v181, 0, sizeof(v181));
  memset(&v179, 0, sizeof(v179));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_160;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v7;
  v170 = openedSquareArray;
  v171 = dispType;
  v175 = v7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v172 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v174 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v174,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  v12 = v171;
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v176 = (FuncDispMaster_o *)v11;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C6BC68(IsPassive);
      v15 = openedSquareArray->m_Items[v14];
      v16 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
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
                                          (const MethodInfo_33F9128 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v10 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v10,
                                          &v186,
                                          v15->fields.targetId,
                                          v15->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v186;
        if ( !v186 )
          goto LABEL_160;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v186, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v186 )
        goto LABEL_160;
      if ( !v11 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v11,
                                          &v184,
                                          v186->fields.funcId,
                                          v15->fields.classBoardBaseId,
                                          0);
      if ( !v186 )
        goto LABEL_160;
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_808/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v186->fields.funcId,
                                            (const MethodInfo_31E7090 *)Method_System_String_Join_int___);
        if ( !v174 )
          goto LABEL_160;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v174,
                &IsPassive->obj,
                (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v18 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v18,
            (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v174,
            p_obj,
            (Il2CppObject *)v18,
            (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v174,
                 p_obj,
                 (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v20 = v184;
        v21 = v186;
        v22 = (System_Collections_Generic_List_object__o *)Item;
        v23 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v23, v20, v21, 0, v15, v24);
        if ( !v22 )
          goto LABEL_160;
        items = v22->fields._items;
        v28 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_160;
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v23,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v23;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
        }
LABEL_61:
        v12 = v171;
        openedSquareArray = v170;
        goto LABEL_62;
      }
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v10,
                    v186->fields.skillId,
                    v186->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v186 )
        goto LABEL_160;
      v77 = IsPassive;
      Detail = SkillLvEntity__getDetail(v186, 0, 1, 0);
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      IsPassive = (System_Int32_array *)ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                                          Detail,
                                          v77,
                                          v78);
      if ( !entity )
        goto LABEL_160;
      v80 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v15->fields.priority;
      id = v15->fields.id;
      iconId = v15->fields.iconId;
      skillType = v15->fields.skillType;
      v86 = Name;
      v87 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v87,
        v86,
        v80,
        id,
        priority,
        iconId,
        skillType,
        v88);
      if ( !v175 )
        goto LABEL_160;
      v91 = v175->fields._items;
      v12 = v171;
      openedSquareArray = v170;
      v92 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v175->fields._version;
      if ( !v91 )
        goto LABEL_160;
      v93 = v175->fields._size;
      if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v175,
          (Il2CppObject *)v87,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
      }
      else
      {
        v94 = &v91->obj.klass + v93;
        v175->fields._size = v93 + 1;
        v94[4] = (Il2CppClass *)v87;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v94 + 4), (int32_t)v87, v89, v90);
      }
LABEL_62:
      max_length = openedSquareArray->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_83;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v15, 0);
    if ( v12 == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v172;
    if ( !v172 )
      goto LABEL_160;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v172,
                                        &entitys,
                                        v15->fields.targetId,
                                        v15->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v31 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_160;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v178,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    *(_OWORD *)&v183.fields._list = *(_OWORD *)&v178.fields._dictionary;
    v183.fields._current = v178.fields._current.fields.key;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v183,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v11 = (Il2CppObject *)v176;
      if ( !v32 )
        break;
      current = v183.fields._current;
      if ( !v183.fields._current )
        sub_1C6BC60(v32, v33);
      if ( !v176 )
        sub_1C6BC60(v32, v33);
      if ( FuncDispMaster__IsContainFuncIds(
             v176,
             &v182,
             (System_Int32_array *)v183.fields._current[3].klass,
             v15->fields.classBoardBaseId,
             0) )
      {
        v35 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_808/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_31E7090 *)Method_System_String_Join_int___);
        if ( !v31 )
          sub_1C6BC60(v35, v36);
        v37 = v35;
        if ( !System_Collections_Generic_List_object___Contains(
                v31,
                v35,
                (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v174 )
            sub_1C6BC60(0, v38);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v174,
                  v37,
                  (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v39 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v39,
              (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v174,
              v37,
              (Il2CppObject *)v39,
              (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v40 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v174,
                  v37,
                  (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v41 = v182;
          v42 = (System_Collections_Generic_List_object__o *)v40;
          v43 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v43,
            v41,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v15,
            v44);
          if ( !v42 )
            sub_1C6BC60(v45, v46);
          v49 = v42->fields._items;
          v50 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v42->fields._version;
          if ( !v49 )
            sub_1C6BC60(v45, v46);
          v51 = v42->fields._size;
          if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)v43,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            v42->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v43;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v43, v47, v48);
          }
          v73 = v31->fields._items;
          v74 = Method_System_Collections_Generic_List_string__Add__;
          ++v31->fields._version;
          if ( !v73 )
            sub_1C6BC60(v53, v54);
          v75 = v31->fields._size;
          if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              v37,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &v73->obj.klass + v75;
            v31->fields._size = v75 + 1;
            v76[4] = (Il2CppClass *)v37;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v76 + 4), (int32_t)v37, v55, v56);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v59 = v15->fields.priority;
        v60 = v15->fields.id;
        v61 = v15->fields.iconId;
        v62 = v15->fields.skillType;
        v63 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v63, klass, monitor, v60, v59, v61, v62, v64);
        if ( !v175 )
          sub_1C6BC60(v65, v66);
        v69 = v175->fields._items;
        v70 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v175->fields._version;
        if ( !v69 )
          sub_1C6BC60(v65, v66);
        v71 = v175->fields._size;
        if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v175,
            (Il2CppObject *)v63,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &v69->obj.klass + v71;
          v175->fields._size = v71 + 1;
          v72[4] = (Il2CppClass *)v63;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v63, v67, v68);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v183,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_83:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v174;
  if ( !v174 )
LABEL_160:
    sub_1C6BC60(IsPassive, v9);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v178,
    v174,
    (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v181 = v178;
  while ( 1 )
  {
    v95 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v181,
            (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v95 )
      break;
    value = v181.fields._current.fields.value;
    if ( !v181.fields._current.fields.value )
      sub_1C6BC60(v95, v96);
    if ( SLODWORD(v181.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v99 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)v181.fields._current.fields.value,
              0,
              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v99 )
        sub_1C6BC60(0, v100);
      if ( v99[1].monitor )
      {
        v101 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v101 )
          sub_1C6BC60(0, v102);
        v103 = v101[1].monitor;
        if ( !v103 )
          sub_1C6BC60(v101, v102);
        if ( !Master_object )
          sub_1C6BC60(0, v102);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v180,
               v103[4],
               (const MethodInfo_33F9128 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v180 )
            sub_1C6BC60(0, v104);
          data = SkillEntity__getName((SkillEntity_o *)v180, 0);
        }
      }
      else
      {
        v105 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v105 )
          sub_1C6BC60(0, v106);
        if ( v105[2].klass )
        {
          v107 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v107 )
            sub_1C6BC60(0, v108);
          v109 = v107[2].klass;
          if ( !v109 )
            sub_1C6BC60(v107, v108);
          data = (System_String_o *)v109->_1.byval_arg.data;
        }
      }
      v110 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v178,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v111 = 0;
      *(_OWORD *)&v179.fields._list = *(_OWORD *)&v178.fields._dictionary;
      v179.fields._current = v178.fields._current.fields.key;
LABEL_104:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v179,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v179,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v125 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v125 )
          sub_1C6BC60(0, v126);
        v128 = v125[1].klass;
        if ( !v128 )
          sub_1C6BC60(v125, v126);
        v129 = *(System_String_o **)&v128->_1.byval_arg.bits;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v130 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(v129, v110, v127);
        v131 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v131 )
          sub_1C6BC60(0, v132);
        v133 = v131[2].monitor;
        if ( !v133 )
          sub_1C6BC60(v131, v132);
        v134 = v133[5];
        v135 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v135 )
          sub_1C6BC60(0, v136);
        v137 = v135[2].monitor;
        if ( !v137 )
          sub_1C6BC60(v135, v136);
        v138 = v137[6];
        v139 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v139 )
          sub_1C6BC60(0, v140);
        v141 = v139[2].monitor;
        if ( !v141 )
          sub_1C6BC60(v139, v140);
        v142 = v141[14];
        v143 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v143,
          data,
          v130,
          v134,
          v111,
          v138,
          v142,
          v144);
        if ( !v175 )
          sub_1C6BC60(v145, v146);
        v149 = v175->fields._items;
        v150 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v175->fields._version;
        if ( !v149 )
          sub_1C6BC60(v145, v146);
        v151 = v175->fields._size;
        if ( (unsigned int)v151 >= LODWORD(v149->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v175,
            (Il2CppObject *)v143,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
        }
        else
        {
          v152 = &v149->obj.klass + v151;
          v175->fields._size = v151 + 1;
          v152[4] = (Il2CppClass *)v143;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v152 + 4), (int32_t)v143, v147, v148);
        }
        continue;
      }
      v112 = v179.fields._current;
      v113 = sub_1C6BAB0(int___TypeInfo, 0);
      if ( !v112 )
        sub_1C6BC60(v113, v114);
      v115 = v112[1].monitor;
      if ( v115 )
      {
        if ( !v10 )
          sub_1C6BC60(v113, v114);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v10,
                                                               v115[4],
                                                               v115[5],
                                                               classStatisticsInfos,
                                                               0);
LABEL_111:
        v117 = (__int64)DispValFromSkill;
      }
      else
      {
        v117 = v113;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v112[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0,
                                                                 0);
          goto LABEL_111;
        }
      }
      if ( !v110 )
        sub_1C6BC60(DispValFromSkill, v114);
      v118 = v110->max_length;
      if ( v118 )
      {
        if ( (int)v118 >= 1 )
        {
          v119 = 0;
          v120 = (unsigned int)v110->max_length;
          do
          {
            if ( !v117 )
              sub_1C6BC60(DispValFromSkill, v114);
            if ( v119 >= *(unsigned int *)(v117 + 24) )
              sub_1C6BC68(DispValFromSkill);
            v121 = (char *)v110 + 4 * v119;
            v122 = *(_DWORD *)(v117 + 32 + 4 * v119++);
            *((_DWORD *)v121 + 8) += v122;
          }
          while ( v120 != v119 );
        }
      }
      else
      {
        v110 = (System_Int32_array *)v117;
      }
      v123 = v112[2].monitor;
      if ( !v123 )
        sub_1C6BC60(DispValFromSkill, v114);
      v124 = v123[20];
      if ( v124 > v111 )
        v111 = v124;
      goto LABEL_104;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v181,
    (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v153 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v153 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__int__o *)v153->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      v153 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v155 = (Il2CppObject *)v153->static_fields->__9;
    _9__42_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_0,
      v155,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__,
      0);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v157, v158);
  }
  v159 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v175,
           (System_Func_TSource__TKey__o *)_9__42_0,
           (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v160 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v161 = v159;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v160 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v160->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v160->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v160);
      v160 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v163 = (Il2CppObject *)v160->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v163,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__,
      0);
    v164 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v164->__9__42_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v164->__9__42_1, (int32_t)_9__42_1, v165, v166);
  }
  v167 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v161,
                                                                (System_Func_TSource__TKey__o *)_9__42_1,
                                                                (const MethodInfo_317A3AC *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v167, (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 12);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C6BC60(gameObject, v6);
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

  if ( (byte_4CB9E81 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&StringLiteral_6291/*"ExecuteCallback"*/);
    byte_4CB9E81 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6291/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0);
}


void ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AtlasManagerUnit_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  System_Action_object__o *v10; // x20
  ChainableActionBase_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ChainableActionParallel_o *v15; // x20
  __int64 v16; // x21
  System_Action_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4CB9E80 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action___TypeInfo);
    sub_1C6BA08(&System_Action_Action____TypeInfo);
    sub_1C6BA08(&System_Action_Action__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManagerUnit_TypeInfo);
    sub_1C6BA08(&ChainableActionParallel_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__33_0__);
    sub_1C6BA08(&StringLiteral_7143/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    byte_4CB9E80 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  v6 = (AtlasManagerUnit_o *)sub_1C6BC54(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v6, (System_String_o *)StringLiteral_7143/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, 0, 0);
  this->fields.boardUiAtlasManagerUnit = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v6, v7, v8);
  v9 = sub_1C6BAB0(System_Action_Action____TypeInfo, 1);
  v10 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__33_0__,
    0);
  if ( !v9 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v9 + 32) = v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v10, v13, v14);
  v15 = (ChainableActionParallel_o *)sub_1C6BC54(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49344196(v15, (System_Action_Action__array *)v9, 0);
  v16 = sub_1C6BAB0(System_Action___TypeInfo, 1);
  v17 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__, 0);
  if ( !v16 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v16 + 24) )
LABEL_11:
    sub_1C6BC68(v11);
  *(_QWORD *)(v16 + 32) = v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v17, v18, v19);
  if ( !v15 || (v11 = ChainableActionBase__Final((ChainableActionBase_o *)v15, (System_Action_array *)v16, 0)) == 0 )
LABEL_10:
    sub_1C6BC60(v11, v12);
  ChainableActionBase__Execute(v11, 0);
}


System_String_o *ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *v5; // x20

  if ( (byte_4CB9E89 & 1) == 0 )
  {
    sub_1C6BA08(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4CB9E89 = 1;
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

  if ( (byte_4CB9E82 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9E82 = 1;
  }
  classInfoObject = this->fields.classInfoObject;
  if ( !classInfoObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       classInfoObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
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
        0);
      return;
    }
LABEL_10:
    sub_1C6BC60(classInfoObject, classBoardBaseEntity);
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
    sub_1C6BC60(0, v5);
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
    sub_1C6BC60(0, sprite);
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
  const MethodInfo *v29; // x3
  _BOOL4 v30; // w26
  ClassBoardBaseMaster_o *v31; // x24
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x25
  ClassBoardBaseEntity_o *v33; // x24
  unsigned int v34; // w8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v35; // x9
  int id; // w9
  int v37; // w9
  const MethodInfo *v38; // x6
  bool v39; // w24
  long double inited; // q0
  System_Int32_array *v41; // x26
  unsigned __int64 v42; // x29
  __int64 v43; // x26
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  BattleServantData_o *v46; // x1
  __int64 v47; // x25
  System_Collections_Generic_List_object__o *v48; // x27
  System_Predicate_object__o *v49; // x28
  System_Int32_array *squareIds; // x23
  _QWORD *v51; // x23
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  System_Int32_array *v55; // x27
  _QWORD *v56; // x22
  __int64 v57; // x8
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t v60; // w22
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x6
  int grandClassId; // w23
  int v67; // w26
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x19
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o *v70; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Object_o *recycler; // x23
  float v73; // s8
  UnityEngine_Object_o *normalScoreTitleLabel; // x22
  UILabel_o *v75; // x22
  ScrollItemRecycler_o *v76; // x22
  struct ScrollItemRecycler_o *v77; // x8
  int v78; // w26
  struct ScrollItemRecycler_o *v79; // x8
  System_Func_T1__T2__TResult__o *v80; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v81; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v84; // x22
  System_Action_T1__T2__o *v85; // x24
  int32_t grandSkillDataFirstIndex; // w23
  float v87; // s8
  int32_t v88; // w19
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *classInfoObject; // x21
  float v91; // s9
  Il2CppObject *current; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v94; // x1
  UnityEngine_GameObject_o *v95; // x22
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  ClassBoardEffectListDialogSkillDetailComponent_o *v100; // x23
  __int64 v101; // x0
  __int64 v102; // x1
  const MethodInfo *v103; // x6
  float v104; // s8
  System_String_o *v105; // x0
  System_String_o *v106; // x22
  float v107; // s8
  float v108; // s9
  ClassBoardEffectListDialogSkillListComponent_c *v109; // x0
  ScrollItemRecycler_o *v110; // x21
  UnityEngine_GameObject_o *grandClassInfoPrefab; // x20
  float ExtraClassIconListObjHeight; // s9
  System_Action_object__o *v113; // x22
  UnityEngine_Object_o *grandScoreTitleLabel; // x20
  UnityEngine_Object_o *grandScoreTitleTopLine; // x20
  UILabel_o *v116; // x20
  ScrollItemRecycler_o *v117; // x20
  int32_t v118; // w19
  UnityEngine_GameObject_o *v119; // x21
  ClassBoardEffectListDialogSkillListComponent_o *v120; // [xsp+28h] [xbp-C8h]
  _BOOL4 v121; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+70h] [xbp-80h] BYREF
  int32_t value; // [xsp+7Ch] [xbp-74h] BYREF

  v14 = isAll;
  value = baseId;
  if ( (byte_4CB9E86 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_GameObject__TypeInfo);
    sub_1C6BA08(&System_Action_GameObject__int__TypeInfo);
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C6BA08(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_GameObject__int__float__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C6BA08(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Predicate_ClassBoardClassEntity__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__);
    sub_1C6BA08(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3381/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_1C6BA08(&StringLiteral_3380/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    sub_1C6BA08(&StringLiteral_3387/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/);
    sub_1C6BA08(&StringLiteral_3388/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/);
    byte_4CB9E86 = 1;
  }
  entitys = 0;
  memset(&v123, 0, sizeof(v123));
  this->fields.supportGrandClassBoardInfo = supportGrandClassBoard;
  this->fields.baseId = baseId;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.supportGrandClassBoardInfo,
    (int32_t)supportGrandClassBoard,
    inputGrandClassId,
    *(const MethodInfo **)&dispType);
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
           (const MethodInfo_31469B0 *)Method_System_Linq_Enumerable_Any_int___) )
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      _9__40_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__40_0,
        v26,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__,
        0);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__40_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v28, v29);
    }
    v30 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (System_Func_TSource__bool__o *)_9__40_0,
            (const MethodInfo_3145818 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
  }
  else
  {
    v30 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v31 = (ClassBoardBaseMaster_o *)Master_object;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  if ( !v31 )
    goto LABEL_202;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                v31,
                                ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->Extra1ClassBaseId,
                                0);
  v33 = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
          v31,
          ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->Extra2ClassBaseId,
          0);
  Master_object = sub_1C6BAB0(int___TypeInfo, 4);
  if ( !Master_object )
    goto LABEL_202;
  v34 = *(_DWORD *)(Master_object + 24);
  if ( !v34
    || (v35 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields,
        *(_DWORD *)(Master_object + 32) = v35->Extra1ClassBaseId,
        v34 == 1)
    || ((*(_DWORD *)(Master_object + 36) = v35->Extra2ClassBaseId, !GrandClassBoardBaseEntity)
      ? (id = -1)
      : (id = GrandClassBoardBaseEntity->fields.id),
        v34 <= 2 || ((*(_DWORD *)(Master_object + 40) = id, !v33) ? (v37 = -1) : (v37 = v33->fields.id), v34 <= 3)) )
  {
LABEL_203:
    sub_1C6BC68(Master_object);
  }
  *(_DWORD *)(Master_object + 44) = v37;
  v39 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Master_object,
          value,
          (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( !v39 && v14 )
  {
    Master_object = (__int64)this->fields.classInfoObject;
    if ( !Master_object )
      goto LABEL_202;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_202;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  v121 = v30;
  v41 = 0;
  if ( !battleServantList || !entitys )
    goto LABEL_59;
  if ( SLODWORD(battleServantList->max_length) < 1 )
    goto LABEL_56;
  v120 = this;
  v42 = 0;
  do
  {
    v43 = sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v43, 0);
    if ( v42 >= LODWORD(battleServantList->max_length) )
      goto LABEL_203;
    if ( !v43 )
      goto LABEL_202;
    v46 = battleServantList->m_Items[v42];
    *(_QWORD *)(v43 + 16) = v46;
    v47 = v43 + 16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v43 + 16), (int32_t)v46, v44, v45);
    v48 = (System_Collections_Generic_List_object__o *)entitys;
    v49 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ClassBoardClassEntity__TypeInfo);
    System_Predicate_object____ctor(
      v49,
      (Il2CppObject *)v43,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__,
      0);
    if ( !v48 )
      goto LABEL_202;
    Master_object = (__int64)System_Collections_Generic_List_object___Find(
                               v48,
                               (System_Predicate_T__o *)v49,
                               (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    if ( Master_object )
    {
      this = v120;
      if ( *(_QWORD *)v47 )
      {
        v41 = *(System_Int32_array **)(*(_QWORD *)v47 + 976LL);
        goto LABEL_59;
      }
      goto LABEL_202;
    }
    ++v42;
  }
  while ( (__int64)v42 < SLODWORD(battleServantList->max_length) );
  this = v120;
LABEL_56:
  v41 = 0;
LABEL_59:
  if ( !this->fields.isSupport )
  {
    squareIds = 0;
LABEL_83:
    v55 = 0;
    goto LABEL_84;
  }
  if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0 )
  {
    v51 = Method_System_Array_Empty_int___;
    v52 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v52 )
    {
      sub_1C41AF8(Method_System_Array_Empty_int___);
      v52 = v51[7];
    }
    v53 = *(_QWORD *)(v52 + 16);
    if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
      v53 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v53 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v53);
    v54 = *(_QWORD *)(v51[7] + 16LL);
    if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
      v54 = sub_1C41A9C(inited);
    squareIds = **(System_Int32_array ***)(v54 + 184);
    if ( !this->fields.isSupport )
      goto LABEL_83;
  }
  if ( !supportGrandClassBoard || (v55 = supportGrandClassBoard->fields.squareIds) == 0 )
  {
    v56 = Method_System_Array_Empty_int___;
    v57 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v57 )
    {
      sub_1C41AF8(Method_System_Array_Empty_int___);
      v57 = v56[7];
    }
    v58 = *(_QWORD *)(v57 + 16);
    if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
      v58 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v58 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v58);
    v59 = *(_QWORD *)(v56[7] + 16LL);
    if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
      v59 = sub_1C41A9C(inited);
    v55 = **(System_Int32_array ***)(v59 + 184);
  }
LABEL_84:
  v60 = value;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                    v60,
                    dispType,
                    0,
                    squareIds,
                    classStatisticsInfos,
                    v41,
                    v38);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v63, v64);
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
                                 v55,
                                 classStatisticsInfos,
                                 0,
                                 v65);
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
            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
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
  v67 = v39;
  if ( (*p_skillDispDataList)->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0);
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
      if ( (v121 & v67) != 0 )
      {
        v105 = System_Int32__ToString((int32_t)&value, 0);
        v106 = System_String__Concat_63966792((System_String_o *)StringLiteral_3381/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v105, 0);
      }
      else
      {
        v106 = (System_String_o *)StringLiteral_3380/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get(v106, 0);
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
    v70 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_202;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v122,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
        v91 = 0.0;
        v123 = v122;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v123,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
        {
          current = v123.fields._current;
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v70, 0, 0, 0);
          v95 = Object;
          if ( !Object )
            sub_1C6BC60(0, v94);
          v96 = UnityEngine_GameObject__GetComponent_object_(
                  Object,
                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          v100 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v96;
          if ( !v96 )
            sub_1C6BC60(0, v97);
          v96[5].monitor = this;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v96[5].monitor, (int32_t)this, v98, v99);
          if ( !current )
            sub_1C6BC60(v101, v102);
          v104 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                   v100,
                   (System_String_o *)current[1].klass,
                   (System_String_o *)current[1].monitor,
                   (int32_t)current[2].monitor,
                   HIDWORD(current[2].monitor),
                   0,
                   v103);
          GameObjectExtensions__SetParent_36361856(v95, this->fields.skillListParent, 0);
          if ( !byte_4CAFC0E )
          {
            sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
            byte_4CAFC0E = 1;
          }
          GameObjectExtensions__SetLocalScale(v95, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          GameObjectExtensions__SetLocalPosition_36356244(v95, 0.0, -v91, 0.0, 0);
          UnityEngine_GameObject__SetActive(v95, 1, 0);
          v91 = v91 + v104;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v123,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
        return;
      }
      v73 = 0.0;
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
          v75 = this->fields.normalScoreTitleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/, 0);
          if ( !v75 )
            goto LABEL_202;
          UILabel__set_text(v75, (System_String_o *)Master_object, 0);
          Master_object = (__int64)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_202;
          v76 = this->fields.recycler;
          Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
          if ( !v76 )
            goto LABEL_202;
          ScrollItemRecycler__AddListDifferentObject(
            v76,
            0,
            (UnityEngine_GameObject_o *)Master_object,
            0,
            0.0,
            0.0,
            0,
            0);
          v77 = this->fields.recycler;
          if ( !v77 )
            goto LABEL_202;
          v73 = 20.0;
          v77->fields.paddingTop = 20.0;
        }
      }
      v78 = v67 & v14;
      if ( v78 == 1 )
      {
        if ( (this->fields.grandSkillDataFirstIndex & 0x80000000) == 0 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.classInfoObject, -40.0, 0);
          v73 = v73 + 20.0;
        }
        v79 = this->fields.recycler;
        if ( !v79 )
          goto LABEL_202;
        v79->fields.paddingTop = v73 + this->fields.classIconSpaceOffsetY;
      }
      v80 = (System_Func_T1__T2__TResult__o *)sub_1C6BC54(System_Func_GameObject__int__float__TypeInfo);
      System_Func_object__int__float____ctor(
        v80,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
        0);
      v81 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1C6BC54(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
      ScrollItemRecycler_HeightCalculatorVarious___ctor(v81, (System_Func_GameObject__int__float__o *)v80, 0);
      skillDispDataList = this->fields.skillDispDataList;
      if ( !skillDispDataList )
        goto LABEL_202;
      size = skillDispDataList->fields._size;
      v84 = this->fields.recycler;
      v85 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_GameObject__int__TypeInfo);
      System_Action_object__int____ctor(
        v85,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
        0);
      if ( !v84 )
        goto LABEL_202;
      ScrollItemRecycler__Init(
        v84,
        size,
        v70,
        (System_Action_GameObject__int__o *)v85,
        (ScrollItemRecycler_HeightCalculatorBase_o *)v81,
        0);
      if ( v78 )
      {
        grandSkillDataFirstIndex = this->fields.grandSkillDataFirstIndex;
        if ( grandSkillDataFirstIndex < 0 )
          goto LABEL_198;
        if ( grandSkillDataFirstIndex )
        {
          v87 = -40.0;
          v88 = this->fields.grandSkillDataFirstIndex;
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
          v88 = this->fields.grandSkillDataFirstIndex;
          v87 = 20.0;
        }
        v109 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v110 = this->fields.recycler;
        grandClassInfoPrefab = this->fields.grandClassInfoPrefab;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v109 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ExtraClassIconListObjHeight = v109->static_fields->ExtraClassIconListObjHeight;
        v113 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(
          v113,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__,
          0);
        if ( !v110 )
LABEL_202:
          sub_1C6BC60(Master_object, v22);
        ScrollItemRecycler__AddListDifferentObject(
          v110,
          v88 - 1,
          0,
          grandClassInfoPrefab,
          ExtraClassIconListObjHeight,
          v87,
          (System_Action_GameObject__o *)v113,
          0);
        v107 = 60.0;
        if ( grandSkillDataFirstIndex )
          v108 = 20.0;
        else
          v108 = 60.0;
      }
      else
      {
        v107 = 21.0;
        v108 = 20.0;
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
          v107 = v108;
        }
      }
      Master_object = (__int64)this->fields.grandScoreTitleLabel;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          v116 = this->fields.grandScoreTitleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/, 0);
          if ( v116 )
          {
            UILabel__set_text(v116, (System_String_o *)Master_object, 0);
            Master_object = (__int64)this->fields.grandScoreTitleLabel;
            if ( Master_object )
            {
              v117 = this->fields.recycler;
              v118 = this->fields.grandSkillDataFirstIndex;
              Master_object = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
              v119 = (UnityEngine_GameObject_o *)Master_object;
              if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
              if ( v117 )
              {
                ScrollItemRecycler__AddListDifferentObject(
                  v117,
                  v118 - 1,
                  v119,
                  0,
                  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->ExtraClassTabGrandScoreTitleHeight,
                  v107,
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CB9E84 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9E84 = 1;
  }
  entity = 0;
  if ( !obj )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( this )
    {
      this = (ClassBoardEffectListDialogSkillListComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 &entity,
                                                                 v4->fields.grandClassId,
                                                                 (const MethodInfo_33F9128 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    sub_1C6BC60(this, obj);
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
  const MethodInfo *v9; // x3
  Il2CppObject *Item; // x21
  UISprite_o *classInfoObject; // x24
  const MethodInfo *v12; // x6
  ClassBoardEffectListDialogSkillListComponent_o *v13; // x8
  int32_t grandSkillDataFirstIndex; // w9
  UnityEngine_Object_o *skillDetailObj; // x23

  v6 = this;
  if ( (byte_4CB9E83 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_19640/*"formation_copy_bg2"*/);
    sub_1C6BA08(&StringLiteral_21333/*"line_yellow"*/);
    sub_1C6BA08(&StringLiteral_21323/*"line"*/);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C6BA08(&StringLiteral_20615/*"img_score_list_grand_board"*/);
    byte_4CB9E83 = 1;
  }
  if ( !obj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&Component_object[5].monitor, (int32_t)v6, v8, v9);
      this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList;
      if ( this )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 index,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
        this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        if ( this )
        {
          classInfoObject = (UISprite_o *)this->fields.classInfoObject;
          this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     obj,
                                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          if ( this )
          {
            v13 = this;
            this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.boardUiAtlasManagerUnit;
            if ( this )
            {
              grandSkillDataFirstIndex = v6->fields.grandSkillDataFirstIndex;
              skillDetailObj = (UnityEngine_Object_o *)v13->fields.skillDetailObj;
              if ( grandSkillDataFirstIndex < 0 || grandSkillDataFirstIndex > index )
              {
                if ( !classInfoObject )
                  goto LABEL_27;
                UISprite__set_atlas(classInfoObject, v6->fields.defaultAtlas, 0);
                UISprite__set_spriteName(classInfoObject, (System_String_o *)StringLiteral_19640/*"formation_copy_bg2"*/, 0);
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
                  UISprite__set_spriteName((UISprite_o *)skillDetailObj, (System_String_o *)StringLiteral_21323/*"line"*/, 0);
                }
              }
              else
              {
                AtlasManagerUnit__SetUI(
                  (AtlasManagerUnit_o *)this,
                  classInfoObject,
                  (System_String_o *)StringLiteral_20615/*"img_score_list_grand_board"*/,
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
                                                                             (System_String_o *)StringLiteral_21333/*"line_yellow"*/,
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
                v12);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C6BC60(this, obj);
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
    sub_1C6BC60(0, f);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.funcDispEntity = funcDispEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandSpellEntity, (int32_t)commandSpellEntity, v15, v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.classBoardSquareEntity, (int32_t)classBoardSquareEntity, v17, v18);
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v14->fields.name = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)v14, (int32_t)detail, v17, v18);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB9E8B & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_4CB9E8B = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C6BC60(this, 0);
  return x->fields.priority;
}


int32_t ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__42_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.squareId;
}


bool ClassBoardEffectListDialogSkillListComponent___c___SetList_b__40_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, e);
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
    sub_1C6BC60(0, id);
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
    sub_1C6BC60(0, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0);
}