void ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_c *v1; // x8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x9

  if ( (byte_4C2ACD2 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_4C2ACD2 = 1;
  }
  v1 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->Extra1ClassBaseId = 0x900000008LL;
  static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_C09B30;
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
  if ( (byte_4C2ACCD & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4C2ACCD = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0)
    || (v8 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0)
    || !v8 )
  {
    sub_1C2D6EC(this, obj);
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

  if ( (byte_4C2ACCF & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1C2D490(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
    byte_4C2ACCF = 1;
  }
  v13 = sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_o *)v13,
    0);
  if ( !v13 )
    sub_1C2D6EC(v14, v15);
  *(_DWORD *)(v13 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Master_object, v17, v18);
  if ( (unsigned __int64)openedSquareIdArray | (unsigned __int64)battleServantSquareIdArray )
  {
    v21 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__ClassBoardSquareEntity__TypeInfo);
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
                                                           (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v25 = BasicHelper__ExcludeNull_object_(
            v24,
            (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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


// positive sp value has been detected, the output may be wrong!
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
  __int64 v12; // x2
  int32_t v13; // w20
  int max_length; // w8
  unsigned int v15; // w28
  ClassBoardSquareEntity_o *v16; // x29
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v19; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v21; // x19
  SkillLvEntity_o *v22; // x20
  System_Collections_Generic_List_object__o *v23; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v24; // x21
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
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v58; // w27
  int32_t v59; // w20
  int32_t v60; // w26
  int32_t v61; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v62; // x24
  __int64 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  System_Int32_array *v75; // x21
  const MethodInfo *v76; // x2
  System_String_o *Detail; // x19
  System_String_o *v78; // x19
  System_String_o *Name; // x0
  int32_t priority; // w20
  int32_t id; // w23
  int32_t iconId; // w24
  int32_t skillType; // w25
  System_String_o *v84; // x26
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v85; // x21
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  _BOOL8 v92; // x0
  __int64 v93; // x1
  Il2CppObject *value; // x23
  System_String_o *data; // x24
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  _DWORD *v100; // x8
  __int64 v101; // x1
  Il2CppObject *v102; // x0
  __int64 v103; // x1
  Il2CppObject *v104; // x0
  __int64 v105; // x1
  Il2CppClass *v106; // x8
  System_Int32_array *v107; // x26
  int32_t v108; // w25
  Il2CppObject *v109; // x19
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  _DWORD *v113; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v115; // x8
  il2cpp_array_size_t v116; // x10
  unsigned __int64 v117; // x9
  __int64 v118; // x10
  char *v119; // x12
  int v120; // w13
  _DWORD *v121; // x8
  int32_t v122; // w8
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  const MethodInfo *v125; // x2
  Il2CppClass *v126; // x8
  System_String_o *v127; // x19
  System_String_o *v128; // x26
  Il2CppObject *v129; // x0
  __int64 v130; // x1
  _DWORD *v131; // x8
  int32_t v132; // w27
  Il2CppObject *v133; // x0
  __int64 v134; // x1
  _DWORD *v135; // x8
  int32_t v136; // w28
  Il2CppObject *v137; // x0
  __int64 v138; // x1
  _DWORD *v139; // x8
  int32_t v140; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v141; // x21
  __int64 v142; // x0
  __int64 v143; // x1
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  Il2CppClass **v149; // x0
  ClassBoardSquareEntity_array *v152; // [xsp-158h] [xbp-2C8h]
  int32_t v153; // [xsp-14Ch] [xbp-2BCh]
  Il2CppObject *v154; // [xsp-148h] [xbp-2B8h]
  Il2CppObject *Master_object; // [xsp-140h] [xbp-2B0h]
  System_Collections_Generic_Dictionary_object__object__o *v156; // [xsp-138h] [xbp-2A8h]
  System_Collections_Generic_List_object__o *v157; // [xsp-130h] [xbp-2A0h]
  FuncDispMaster_o *v158; // [xsp-128h] [xbp-298h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v160; // [xsp-118h] [xbp-288h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v161; // [xsp-F0h] [xbp-260h] BYREF
  SkillEntity_o *v162; // [xsp-D8h] [xbp-248h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v163; // [xsp-D0h] [xbp-240h] BYREF
  FuncDispEntity_o *v164; // [xsp-A8h] [xbp-218h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v165; // [xsp-A0h] [xbp-210h] BYREF
  FuncDispEntity_o *v166; // [xsp-80h] [xbp-1F0h] BYREF
  System_Collections_Generic_List_object__o *v167; // [xsp-78h] [xbp-1E8h] BYREF
  Il2CppObject *v168; // [xsp-70h] [xbp-1E0h] BYREF
  SkillEntity_o *v169; // [xsp-68h] [xbp-1D8h] BYREF

  if ( (byte_4C2ACD0 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C2D490(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C2D490(&Method_System_String_Join_int___);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2ACD0 = 1;
  }
  v168 = 0;
  v169 = 0;
  v166 = 0;
  v167 = 0;
  memset(&v165, 0, sizeof(v165));
  v164 = 0;
  v162 = 0;
  memset(&v163, 0, sizeof(v163));
  memset(&v161, 0, sizeof(v161));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_149;
  if ( openedSquareArray->max_length )
  {
    v152 = openedSquareArray;
    v153 = dispType;
    v157 = v7;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
    v10 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
    v154 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    v11 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FuncDispMaster___);
    v156 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v156,
      (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    v13 = v153;
    max_length = openedSquareArray->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      v158 = (FuncDispMaster_o *)v11;
      while ( 1 )
      {
        if ( v15 >= max_length )
          sub_1C2D6F4(IsPassive, v9, v12);
        v16 = openedSquareArray->m_Items[v15];
        v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v17,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
        v167 = v17;
        if ( !v16 )
          goto LABEL_149;
        IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v16, 0);
        if ( ((unsigned __int8)IsPassive & 1) == 0 )
          break;
        if ( v13 == 2 )
          goto LABEL_62;
        IsPassive = (System_Int32_array *)Master_object;
        if ( !Master_object )
          goto LABEL_149;
        IsPassive = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            (Il2CppObject **)&v169,
                                            v16->fields.targetId,
                                            (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) == 0 )
          goto LABEL_62;
        if ( !v10 )
          goto LABEL_149;
        IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                            (SkillLvMaster_o *)v10,
                                            (SkillLvEntity_o **)&v168,
                                            v16->fields.targetId,
                                            v16->fields.upSkillLv,
                                            0);
        if ( ((unsigned __int8)IsPassive & 1) == 0 )
          goto LABEL_62;
        if ( ignoreTurnOrCountPassive )
        {
          IsPassive = (System_Int32_array *)v168;
          if ( !v168 )
            goto LABEL_149;
          IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff((SkillLvEntity_o *)v168, 0);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
            goto LABEL_62;
        }
        if ( !v168 )
          goto LABEL_149;
        if ( !v11 )
          goto LABEL_149;
        IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v11,
                                            &v166,
                                            (System_Int32_array *)v168[2].klass,
                                            v16->fields.classBoardBaseId,
                                            0);
        if ( !v168 )
          goto LABEL_149;
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (System_Int32_array *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_811/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v168[2].klass,
                                              (const MethodInfo_3179BD4 *)Method_System_String_Join_int___);
          if ( !v156 )
            goto LABEL_149;
          p_obj = &IsPassive->obj;
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v156,
                  &IsPassive->obj,
                  (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v19,
              (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v156,
              p_obj,
              (Il2CppObject *)v19,
              (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                   v156,
                   p_obj,
                   (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v21 = v166;
          v22 = (SkillLvEntity_o *)v168;
          v23 = (System_Collections_Generic_List_object__o *)Item;
          v24 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v24, v21, v22, 0, v16, 0);
          if ( !v23 )
            goto LABEL_149;
          items = v23->fields._items;
          v28 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_149;
          size = v23->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)v24,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v24;
            sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
          }
LABEL_61:
          v13 = v153;
          openedSquareArray = v152;
          goto LABEL_62;
        }
        IsPassive = SkillLvMaster__GetDispValFromSkill(
                      (SkillLvMaster_o *)v10,
                      (int32_t)v168[1].klass,
                      HIDWORD(v168[1].klass),
                      classStatisticsInfos,
                      0);
        if ( !v168 )
          goto LABEL_149;
        v75 = IsPassive;
        Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)v168, 0, 1, 0);
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        IsPassive = (System_Int32_array *)ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                                            Detail,
                                            v75,
                                            v76);
        if ( !v169 )
          goto LABEL_149;
        v78 = (System_String_o *)IsPassive;
        Name = SkillEntity__getName(v169, 0);
        priority = v16->fields.priority;
        id = v16->fields.id;
        iconId = v16->fields.iconId;
        skillType = v16->fields.skillType;
        v84 = Name;
        v85 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v85,
          v84,
          v78,
          id,
          priority,
          iconId,
          skillType,
          0);
        if ( !v157 )
          goto LABEL_149;
        v88 = v157->fields._items;
        v13 = v153;
        openedSquareArray = v152;
        v89 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v157->fields._version;
        if ( !v88 )
          goto LABEL_149;
        v90 = v157->fields._size;
        if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v157,
            (Il2CppObject *)v85,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v88->obj.klass + v90;
          v157->fields._size = v90 + 1;
          v91[4] = (Il2CppClass *)v85;
          sub_1C2D434((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v85, v86, v87);
        }
LABEL_62:
        max_length = openedSquareArray->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_83;
      }
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v16, 0);
      if ( v13 == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      IsPassive = (System_Int32_array *)v154;
      if ( !v154 )
        goto LABEL_149;
      IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                          (ClassBoardCommandSpellMaster_o *)v154,
                                          (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o **)&v167,
                                          v16->fields.targetId,
                                          v16->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      v31 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v31,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
      IsPassive = (System_Int32_array *)v167;
      if ( !v167 )
        goto LABEL_149;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v160,
        v167,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
      *(_OWORD *)&v165.fields._list = *(_OWORD *)&v160.fields._dictionary;
      v165.fields._current = v160.fields._current.fields.key;
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v165,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
        v11 = (Il2CppObject *)v158;
        if ( !v32 )
          break;
        current = v165.fields._current;
        if ( !v165.fields._current )
          sub_1C2D6EC(v32, v33);
        if ( !v158 )
          sub_1C2D6EC(v32, v33);
        if ( FuncDispMaster__IsContainFuncIds(
               v158,
               &v164,
               (System_Int32_array *)v165.fields._current[3].klass,
               v16->fields.classBoardBaseId,
               0) )
        {
          v35 = (Il2CppObject *)System_String__Join_int_(
                                  (System_String_o *)StringLiteral_811/*","*/,
                                  (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                  (const MethodInfo_3179BD4 *)Method_System_String_Join_int___);
          if ( !v31 )
            sub_1C2D6EC(v35, v36);
          v37 = v35;
          if ( !System_Collections_Generic_List_object___Contains(
                  v31,
                  v35,
                  (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__) )
          {
            if ( !v156 )
              sub_1C2D6EC(0, v38);
            if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                    v156,
                    v37,
                    (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
            {
              v39 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v39,
                (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v156,
                v37,
                (Il2CppObject *)v39,
                (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
            }
            v40 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    v156,
                    v37,
                    (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
            v41 = v164;
            v42 = (System_Collections_Generic_List_object__o *)v40;
            v43 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
            ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
              v43,
              v41,
              0,
              (ClassBoardCommandSpellEntity_o *)current,
              v16,
              0);
            if ( !v42 )
              sub_1C2D6EC(v44, v45);
            v48 = v42->fields._items;
            v49 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
            ++v42->fields._version;
            if ( !v48 )
              sub_1C2D6EC(v44, v45);
            v50 = v42->fields._size;
            if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v42,
                (Il2CppObject *)v43,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &v48->obj.klass + v50;
              v42->fields._size = v50 + 1;
              v51[4] = (Il2CppClass *)v43;
              sub_1C2D434((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v43, v46, v47);
            }
            v71 = v31->fields._items;
            v72 = Method_System_Collections_Generic_List_string__Add__;
            ++v31->fields._version;
            if ( !v71 )
              sub_1C2D6EC(v52, v53);
            v73 = v31->fields._size;
            if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v31,
                v37,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v74 = &v71->obj.klass + v73;
              v31->fields._size = v73 + 1;
              v74[4] = (Il2CppClass *)v37;
              sub_1C2D434((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v37, v54, v55);
            }
          }
        }
        else
        {
          klass = (System_String_o *)current[2].klass;
          monitor = (System_String_o *)current[2].monitor;
          v58 = v16->fields.priority;
          v59 = v16->fields.id;
          v60 = v16->fields.iconId;
          v61 = v16->fields.skillType;
          v62 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v62, klass, monitor, v59, v58, v60, v61, 0);
          if ( !v157 )
            sub_1C2D6EC(v63, v64);
          v67 = v157->fields._items;
          v68 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
          ++v157->fields._version;
          if ( !v67 )
            sub_1C2D6EC(v63, v64);
          v69 = v157->fields._size;
          if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v157,
              (Il2CppObject *)v62,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v70 = &v67->obj.klass + v69;
            v157->fields._size = v69 + 1;
            v70[4] = (Il2CppClass *)v62;
            sub_1C2D434((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v62, v65, v66);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v165,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      goto LABEL_61;
    }
LABEL_83:
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
    IsPassive = (System_Int32_array *)v156;
    if ( v156 )
    {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v160,
        v156,
        (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
      v163 = v160;
      while ( 1 )
      {
        do
        {
          v92 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v163,
                  (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
          if ( !v92 )
          {
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v163,
              (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
            JUMPOUT(0x2D7A214);
          }
          value = v163.fields._current.fields.value;
          if ( !v163.fields._current.fields.value )
            sub_1C2D6EC(v92, v93);
        }
        while ( SLODWORD(v163.fields._current.fields.value[1].monitor) < 1 );
        data = (System_String_o *)StringLiteral_1/*""*/;
        v96 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)v163.fields._current.fields.value,
                0,
                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v96 )
          sub_1C2D6EC(0, v97);
        if ( v96[1].monitor )
        {
          v98 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)value,
                  0,
                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v98 )
            sub_1C2D6EC(0, v99);
          v100 = v98[1].monitor;
          if ( !v100 )
            sub_1C2D6EC(v98, v99);
          if ( !Master_object )
            sub_1C2D6EC(0, v99);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)&v162,
                 v100[4],
                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
          {
            if ( !v162 )
              sub_1C2D6EC(0, v101);
            data = SkillEntity__getName(v162, 0);
          }
        }
        else
        {
          v102 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v102 )
            sub_1C2D6EC(0, v103);
          if ( v102[2].klass )
          {
            v104 = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)value,
                     0,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
            if ( !v104 )
              sub_1C2D6EC(0, v105);
            v106 = v104[2].klass;
            if ( !v106 )
              sub_1C2D6EC(v104, v105);
            data = (System_String_o *)v106->_1.byval_arg.data;
          }
        }
        v107 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v160,
          (System_Collections_Generic_List_object__o *)value,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
        v108 = 0;
        *(_OWORD *)&v161.fields._list = *(_OWORD *)&v160.fields._dictionary;
        v161.fields._current = v160.fields._current.fields.key;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v161,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
        {
          v109 = v161.fields._current;
          v110 = sub_1C2D538(int___TypeInfo, 0);
          if ( !v109 )
            sub_1C2D6EC(v110, v111);
          v113 = v109[1].monitor;
          if ( v113 )
          {
            if ( !v10 )
              sub_1C2D6EC(v110, v111);
            DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                                   (SkillLvMaster_o *)v10,
                                                                   v113[4],
                                                                   v113[5],
                                                                   classStatisticsInfos,
                                                                   0);
          }
          else
          {
            v115 = v110;
            DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v109[2].klass;
            if ( !DispValFromSkill )
              goto LABEL_112;
            DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                   DispValFromSkill,
                                                                   0,
                                                                   0);
          }
          v115 = (__int64)DispValFromSkill;
LABEL_112:
          if ( !v107 )
            sub_1C2D6EC(DispValFromSkill, v111);
          v116 = v107->max_length;
          if ( v116 )
          {
            if ( (int)v116 >= 1 )
            {
              v117 = 0;
              v118 = (unsigned int)v107->max_length;
              do
              {
                if ( !v115 )
                  sub_1C2D6EC(DispValFromSkill, v111);
                if ( v117 >= *(unsigned int *)(v115 + 24) )
                  sub_1C2D6F4(DispValFromSkill, v111, v112);
                v119 = (char *)v107 + 4 * v117;
                v120 = *(_DWORD *)(v115 + 32 + 4 * v117++);
                *((_DWORD *)v119 + 8) += v120;
              }
              while ( v118 != v117 );
            }
          }
          else
          {
            v107 = (System_Int32_array *)v115;
          }
          v121 = v109[2].monitor;
          if ( !v121 )
            sub_1C2D6EC(DispValFromSkill, v111);
          v122 = v121[20];
          if ( v122 > v108 )
            v108 = v122;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v161,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v123 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v123 )
          sub_1C2D6EC(0, v124);
        v126 = v123[1].klass;
        if ( !v126 )
          sub_1C2D6EC(v123, v124);
        v127 = *(System_String_o **)&v126->_1.byval_arg.bits;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v128 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(v127, v107, v125);
        v129 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v129 )
          sub_1C2D6EC(0, v130);
        v131 = v129[2].monitor;
        if ( !v131 )
          sub_1C2D6EC(v129, v130);
        v132 = v131[5];
        v133 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v133 )
          sub_1C2D6EC(0, v134);
        v135 = v133[2].monitor;
        if ( !v135 )
          sub_1C2D6EC(v133, v134);
        v136 = v135[6];
        v137 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v137 )
          sub_1C2D6EC(0, v138);
        v139 = v137[2].monitor;
        if ( !v139 )
          sub_1C2D6EC(v137, v138);
        v140 = v139[14];
        v141 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v141, data, v128, v132, v108, v136, v140, 0);
        if ( !v157 )
          sub_1C2D6EC(v142, v143);
        v146 = v157->fields._items;
        v147 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v157->fields._version;
        if ( !v146 )
          sub_1C2D6EC(v142, v143);
        v148 = v157->fields._size;
        if ( (unsigned int)v148 >= LODWORD(v146->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v157,
            (Il2CppObject *)v141,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
        }
        else
        {
          v149 = &v146->obj.klass + v148;
          v157->fields._size = v148 + 1;
          v149[4] = (Il2CppClass *)v141;
          sub_1C2D434((CGThumbnailListItem_o *)(v149 + 4), (int32_t)v141, v144, v145);
        }
      }
    }
LABEL_149:
    sub_1C2D6EC(IsPassive, v9);
  }
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v7;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 12);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C2D6EC(gameObject, v6);
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

  if ( (byte_4C2ACC9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&StringLiteral_6290/*"ExecuteCallback"*/);
    byte_4C2ACC9 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6290/*"ExecuteCallback"*/,
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  ChainableActionParallel_o *v15; // x20
  __int64 v16; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4C2ACC8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action___TypeInfo);
    sub_1C2D490(&System_Action_Action____TypeInfo);
    sub_1C2D490(&System_Action_Action__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManagerUnit_TypeInfo);
    sub_1C2D490(&ChainableActionParallel_TypeInfo);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__33_0__);
    sub_1C2D490(&StringLiteral_7144/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    byte_4C2ACC8 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  v6 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v6, (System_String_o *)StringLiteral_7144/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, 0, 0);
  this->fields.boardUiAtlasManagerUnit = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v6, v7, v8);
  v9 = sub_1C2D538(System_Action_Action____TypeInfo, 1);
  v10 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
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
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v10, v13, v14);
  v15 = (ChainableActionParallel_o *)sub_1C2D6DC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48939044(v15, (System_Action_Action__array *)v9, 0);
  v16 = sub_1C2D538(System_Action___TypeInfo, 1);
  v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__, 0);
  if ( !v16 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v16 + 24) )
LABEL_11:
    sub_1C2D6F4(v11, v12, v13);
  *(_QWORD *)(v16 + 32) = v17;
  sub_1C2D434((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v17, v13, v18);
  if ( !v15 || (v11 = ChainableActionBase__Final((ChainableActionBase_o *)v15, (System_Action_array *)v16, 0)) == 0 )
LABEL_10:
    sub_1C2D6EC(v11, v12);
  ChainableActionBase__Execute(v11, 0);
}


System_String_o *ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *v5; // x20

  if ( (byte_4C2ACD1 & 1) == 0 )
  {
    sub_1C2D490(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4C2ACD1 = 1;
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

  if ( (byte_4C2ACCA & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2ACCA = 1;
  }
  classInfoObject = this->fields.classInfoObject;
  if ( !classInfoObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       classInfoObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
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
    sub_1C2D6EC(classInfoObject, classBoardBaseEntity);
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
    sub_1C2D6EC(0, v5);
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
    sub_1C2D6EC(0, sprite);
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
  __int64 v34; // x2
  unsigned int v35; // w8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v36; // x9
  int id; // w9
  int v38; // w9
  const MethodInfo *v39; // x6
  bool v40; // w24
  long double inited; // q0
  System_Int32_array *v42; // x26
  unsigned __int64 v43; // x29
  __int64 v44; // x26
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
  if ( (byte_4C2ACCE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&System_Action_GameObject__int__TypeInfo);
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C2D490(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_GameObject__int__float__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C2D490(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Predicate_ClassBoardClassEntity__TypeInfo);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__);
    sub_1C2D490(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_3386/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_1C2D490(&StringLiteral_3385/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    sub_1C2D490(&StringLiteral_3392/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/);
    sub_1C2D490(&StringLiteral_3393/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/);
    byte_4C2ACCE = 1;
  }
  entitys = 0;
  memset(&v123, 0, sizeof(v123));
  this->fields.supportGrandClassBoardInfo = supportGrandClassBoard;
  this->fields.baseId = baseId;
  sub_1C2D434(
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
           (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___) )
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
      _9__40_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__40_0,
        v26,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__,
        0);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__40_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v28, v29);
    }
    v30 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (System_Func_TSource__bool__o *)_9__40_0,
            (const MethodInfo_30D8E00 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
  }
  else
  {
    v30 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
  Master_object = sub_1C2D538(int___TypeInfo, 4);
  if ( !Master_object )
    goto LABEL_202;
  v35 = *(_DWORD *)(Master_object + 24);
  if ( !v35
    || (v36 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields,
        *(_DWORD *)(Master_object + 32) = v36->Extra1ClassBaseId,
        v35 == 1)
    || ((*(_DWORD *)(Master_object + 36) = v36->Extra2ClassBaseId, !GrandClassBoardBaseEntity)
      ? (id = -1)
      : (id = GrandClassBoardBaseEntity->fields.id),
        v35 <= 2 || ((*(_DWORD *)(Master_object + 40) = id, !v33) ? (v38 = -1) : (v38 = v33->fields.id), v35 <= 3)) )
  {
LABEL_203:
    sub_1C2D6F4(Master_object, v22, v34);
  }
  *(_DWORD *)(Master_object + 44) = v38;
  v40 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Master_object,
          value,
          (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( !v40 && v14 )
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
  v42 = 0;
  if ( !battleServantList || !entitys )
    goto LABEL_59;
  if ( SLODWORD(battleServantList->max_length) < 1 )
    goto LABEL_56;
  v120 = this;
  v43 = 0;
  do
  {
    v44 = sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0___ctor(
      (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_o *)v44,
      0);
    if ( v43 >= LODWORD(battleServantList->max_length) )
      goto LABEL_203;
    if ( !v44 )
      goto LABEL_202;
    v46 = battleServantList->m_Items[v43];
    *(_QWORD *)(v44 + 16) = v46;
    v47 = v44 + 16;
    sub_1C2D434((CGThumbnailListItem_o *)(v44 + 16), (int32_t)v46, v34, v45);
    v48 = (System_Collections_Generic_List_object__o *)entitys;
    v49 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ClassBoardClassEntity__TypeInfo);
    System_Predicate_object____ctor(
      v49,
      (Il2CppObject *)v44,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__,
      0);
    if ( !v48 )
      goto LABEL_202;
    Master_object = (__int64)System_Collections_Generic_List_object___Find(
                               v48,
                               (System_Predicate_T__o *)v49,
                               (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    if ( Master_object )
    {
      this = v120;
      if ( *(_QWORD *)v47 )
      {
        v42 = *(System_Int32_array **)(*(_QWORD *)v47 + 968LL);
        goto LABEL_59;
      }
      goto LABEL_202;
    }
    ++v43;
  }
  while ( (__int64)v43 < SLODWORD(battleServantList->max_length) );
  this = v120;
LABEL_56:
  v42 = 0;
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
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v52 = v51[7];
    }
    v53 = *(_QWORD *)(v52 + 16);
    if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
      v53 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v53 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v53);
    v54 = *(_QWORD *)(v51[7] + 16LL);
    if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
      v54 = sub_1C7DBA4(inited);
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
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v57 = v56[7];
    }
    v58 = *(_QWORD *)(v57 + 16);
    if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
      v58 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v58 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v58);
    v59 = *(_QWORD *)(v56[7] + 16LL);
    if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
      v59 = sub_1C7DBA4(inited);
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
                    v42,
                    v39);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v63, v64);
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
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
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
  v67 = v40;
  if ( (*p_skillDispDataList)->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3385/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0);
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
        v106 = System_String__Concat_63457864((System_String_o *)StringLiteral_3386/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v105, 0);
      }
      else
      {
        v106 = (System_String_o *)StringLiteral_3385/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
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
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
        v91 = 0.0;
        v123 = v122;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v123,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
        {
          current = v123.fields._current;
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v70, 0, 0, 0);
          v95 = Object;
          if ( !Object )
            sub_1C2D6EC(0, v94);
          v96 = UnityEngine_GameObject__GetComponent_object_(
                  Object,
                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          v100 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v96;
          if ( !v96 )
            sub_1C2D6EC(0, v97);
          v96[5].monitor = this;
          sub_1C2D434((CGThumbnailListItem_o *)&v96[5].monitor, (int32_t)this, v98, v99);
          if ( !current )
            sub_1C2D6EC(v101, v102);
          v104 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                   v100,
                   (System_String_o *)current[1].klass,
                   (System_String_o *)current[1].monitor,
                   (int32_t)current[2].monitor,
                   HIDWORD(current[2].monitor),
                   0,
                   v103);
          GameObjectExtensions__SetParent_35924212(v95, this->fields.skillListParent, 0);
          if ( !byte_4C20DA6 )
          {
            sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
            byte_4C20DA6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v95, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          GameObjectExtensions__SetLocalPosition_35918600(v95, 0.0, -v91, 0.0, 0);
          UnityEngine_GameObject__SetActive(v95, 1, 0);
          v91 = v91 + v104;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v123,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/, 0);
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
      v80 = (System_Func_T1__T2__TResult__o *)sub_1C2D6DC(System_Func_GameObject__int__float__TypeInfo);
      System_Func_object__int__float____ctor(
        v80,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
        0);
      v81 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1C2D6DC(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
      ScrollItemRecycler_HeightCalculatorVarious___ctor(v81, (System_Func_GameObject__int__float__o *)v80, 0);
      skillDispDataList = this->fields.skillDispDataList;
      if ( !skillDispDataList )
        goto LABEL_202;
      size = skillDispDataList->fields._size;
      v84 = this->fields.recycler;
      v85 = (System_Action_T1__T2__o *)sub_1C2D6DC(System_Action_GameObject__int__TypeInfo);
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
        v113 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(
          v113,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__,
          0);
        if ( !v110 )
LABEL_202:
          sub_1C2D6EC(Master_object, v22);
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3392/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/, 0);
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
  const MethodInfo *v6; // x5
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C2ACCC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2ACCC = 1;
  }
  entity = 0;
  if ( !obj )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( this )
    {
      this = (ClassBoardEffectListDialogSkillListComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 &entity,
                                                                 v4->fields.grandClassId,
                                                                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    sub_1C2D6EC(this, obj);
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
  if ( (byte_4C2ACCB & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_19562/*"formation_copy_bg2"*/);
    sub_1C2D490(&StringLiteral_21236/*"line_yellow"*/);
    sub_1C2D490(&StringLiteral_21226/*"line"*/);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C2D490(&StringLiteral_20535/*"img_score_list_grand_board"*/);
    byte_4C2ACCB = 1;
  }
  if ( !obj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
      sub_1C2D434((CGThumbnailListItem_o *)&Component_object[5].monitor, (int32_t)v6, v8, v9);
      this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList;
      if ( this )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 index,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
        this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        if ( this )
        {
          classInfoObject = (UISprite_o *)this->fields.classInfoObject;
          this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     obj,
                                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
                UISprite__set_spriteName(classInfoObject, (System_String_o *)StringLiteral_19562/*"formation_copy_bg2"*/, 0);
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
                  UISprite__set_spriteName((UISprite_o *)skillDetailObj, (System_String_o *)StringLiteral_21226/*"line"*/, 0);
                }
              }
              else
              {
                AtlasManagerUnit__SetUI(
                  (AtlasManagerUnit_o *)this,
                  classInfoObject,
                  (System_String_o *)StringLiteral_20535/*"img_score_list_grand_board"*/,
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
                                                                             (System_String_o *)StringLiteral_21236/*"line_yellow"*/,
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
    sub_1C2D6EC(this, obj);
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
    sub_1C2D6EC(0, f);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandSpellEntity, (int32_t)commandSpellEntity, v15, v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.classBoardSquareEntity, (int32_t)classBoardSquareEntity, v17, v18);
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
  sub_1C2D434((CGThumbnailListItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)v14, (int32_t)detail, v17, v18);
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

  if ( (byte_4C2ACD3 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_4C2ACD3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_1C2D434(
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
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__42_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.squareId;
}


bool ClassBoardEffectListDialogSkillListComponent___c___SetList_b__40_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, e);
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
    sub_1C2D6EC(0, id);
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
    sub_1C2D6EC(0, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0);
}