void ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_c *v1; // x8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x9

  if ( (byte_4C3B3F1 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_4C3B3F1 = 1;
  }
  v1 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->Extra1ClassBaseId = 0x900000008LL;
  static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_C0CF10;
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
  if ( (byte_4C3B3EC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4C3B3EC = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0)
    || (v8 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0)
    || !v8 )
  {
    sub_1C32E7C(this);
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
  Il2CppObject *Master_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v19; // x4
  System_Func_T__TResult__o *v20; // x0
  System_Func_TSource__TResult__o *v21; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  ClassBoardSquareEntity_array *v25; // x22

  if ( (byte_4C3B3EE & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1C32C20(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
    byte_4C3B3EE = 1;
  }
  v13 = sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_1C32E7C(v14);
  *(_DWORD *)(v13 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v13 + 16) = Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Master_object, v16, v17);
  if ( (unsigned __int64)openedSquareIdArray | (unsigned __int64)battleServantSquareIdArray )
  {
    v20 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    v21 = (System_Func_TSource__TResult__o *)v20;
    if ( openedSquareIdArray )
    {
      System_Func_int__object____ctor(
        v20,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__0__,
        0);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray;
    }
    else
    {
      System_Func_int__object____ctor(
        v20,
        (Il2CppObject *)v13,
        Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass41_0__GetOpenSkillList_b__1__,
        0);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)battleServantSquareIdArray;
    }
    v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           v22,
                                                           v21,
                                                           (const MethodInfo_3110E00 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v24 = BasicHelper__ExcludeNull_object_(
            v23,
            (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                                (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v13 + 24), 0);
  }
  v25 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v25,
           dispType,
           ignoreTurnOrCountPassive,
           classStatisticsInfos,
           v19);
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
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x27
  int32_t v11; // w20
  int max_length; // w8
  unsigned int v13; // w28
  ClassBoardSquareEntity_o *v14; // x29
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v19; // x19
  SkillLvEntity_o *v20; // x20
  System_Collections_Generic_List_object__o *v21; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v22; // x21
  const MethodInfo *v23; // x5
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_object__o *v30; // x23
  _BOOL8 v31; // x0
  Il2CppObject *current; // x24
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x27
  System_Collections_Generic_List_object__o *v35; // x19
  Il2CppObject *v36; // x0
  FuncDispEntity_o *v37; // x19
  System_Collections_Generic_List_object__o *v38; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v39; // x25
  const MethodInfo *v40; // x5
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v53; // w27
  int32_t v54; // w20
  int32_t v55; // w26
  int32_t v56; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v57; // x24
  const MethodInfo *v58; // x7
  __int64 v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  System_Int32_array *v70; // x21
  const MethodInfo *v71; // x2
  System_String_o *Detail; // x19
  System_String_o *v73; // x19
  System_String_o *Name; // x0
  int32_t priority; // w20
  int32_t id; // w23
  int32_t iconId; // w24
  int32_t skillType; // w25
  System_String_o *v79; // x26
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v80; // x21
  const MethodInfo *v81; // x7
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  _BOOL8 v88; // x0
  Il2CppObject *value; // x23
  System_String_o *data; // x24
  Il2CppObject *v91; // x0
  Il2CppObject *v92; // x0
  _DWORD *v93; // x8
  Il2CppObject *v94; // x0
  Il2CppObject *v95; // x0
  Il2CppClass *v96; // x8
  System_Int32_array *v97; // x26
  int32_t v98; // w25
  Il2CppObject *v99; // x19
  __int64 v100; // x0
  _DWORD *v101; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v103; // x8
  il2cpp_array_size_t v104; // x10
  unsigned __int64 v105; // x9
  __int64 v106; // x10
  char *v107; // x12
  int v108; // w13
  _DWORD *v109; // x8
  int32_t v110; // w8
  Il2CppObject *v111; // x0
  const MethodInfo *v112; // x2
  Il2CppClass *v113; // x8
  System_String_o *v114; // x19
  System_String_o *v115; // x26
  Il2CppObject *v116; // x0
  _DWORD *v117; // x8
  int32_t v118; // w27
  Il2CppObject *v119; // x0
  _DWORD *v120; // x8
  int32_t v121; // w28
  Il2CppObject *v122; // x0
  _DWORD *v123; // x8
  int32_t v124; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v125; // x21
  const MethodInfo *v126; // x7
  __int64 v127; // x0
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v134; // x0
  System_Func_object__int__o *_9__42_0; // x20
  Il2CppObject *v136; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v140; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v141; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v142; // x19
  System_Func_object__int__o *_9__42_1; // x20
  Il2CppObject *v144; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v145; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x0
  ClassBoardSquareEntity_array *v151; // [xsp+18h] [xbp-158h]
  int32_t v152; // [xsp+24h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v153; // [xsp+28h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_Dictionary_object__object__o *v155; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_object__o *v156; // [xsp+40h] [xbp-130h]
  FuncDispMaster_o *v157; // [xsp+48h] [xbp-128h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v159; // [xsp+58h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v160; // [xsp+80h] [xbp-F0h] BYREF
  Il2CppObject *v161; // [xsp+98h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v162; // [xsp+A0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v163; // [xsp+C8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v164; // [xsp+D0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v165; // [xsp+F0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+F8h] [xbp-78h] BYREF
  SkillLvEntity_o *v167; // [xsp+100h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4C3B3EF & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C32C20(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B3EF = 1;
  }
  v167 = 0;
  entity = 0;
  v165 = 0;
  entitys = 0;
  memset(&v164, 0, sizeof(v164));
  v163 = 0;
  v161 = 0;
  memset(&v162, 0, sizeof(v162));
  memset(&v160, 0, sizeof(v160));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_160;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v7;
  v151 = openedSquareArray;
  v152 = dispType;
  v156 = v7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v153 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FuncDispMaster___);
  v155 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v155,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  v11 = v152;
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v157 = (FuncDispMaster_o *)v10;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C32E84(IsPassive);
      v14 = openedSquareArray->m_Items[v13];
      v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v15;
      if ( !v14 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v14, 0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        break;
      if ( v11 == 2 )
        goto LABEL_62;
      IsPassive = (System_Int32_array *)Master_object;
      if ( !Master_object )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                          Master_object,
                                          &entity,
                                          v14->fields.targetId,
                                          (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v9 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v9,
                                          &v167,
                                          v14->fields.targetId,
                                          v14->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v167;
        if ( !v167 )
          goto LABEL_160;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v167, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v167 )
        goto LABEL_160;
      if ( !v10 )
        goto LABEL_160;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v10,
                                          &v165,
                                          v167->fields.funcId,
                                          v14->fields.classBoardBaseId,
                                          0);
      if ( !v167 )
        goto LABEL_160;
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_811/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v167->fields.funcId,
                                            (const MethodInfo_3188674 *)Method_System_String_Join_int___);
        if ( !v155 )
          goto LABEL_160;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v155,
                &IsPassive->obj,
                (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v17,
            (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v155,
            p_obj,
            (Il2CppObject *)v17,
            (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v155,
                 p_obj,
                 (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v19 = v165;
        v20 = v167;
        v21 = (System_Collections_Generic_List_object__o *)Item;
        v22 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v22, v19, v20, 0, v14, v23);
        if ( !v21 )
          goto LABEL_160;
        items = v21->fields._items;
        v27 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_160;
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v22,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v22;
          sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
        }
LABEL_61:
        v11 = v152;
        openedSquareArray = v151;
        goto LABEL_62;
      }
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v9,
                    v167->fields.skillId,
                    v167->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v167 )
        goto LABEL_160;
      v70 = IsPassive;
      Detail = SkillLvEntity__getDetail(v167, 0, 1, 0);
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      IsPassive = (System_Int32_array *)ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                                          Detail,
                                          v70,
                                          v71);
      if ( !entity )
        goto LABEL_160;
      v73 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v14->fields.priority;
      id = v14->fields.id;
      iconId = v14->fields.iconId;
      skillType = v14->fields.skillType;
      v79 = Name;
      v80 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v80,
        v79,
        v73,
        id,
        priority,
        iconId,
        skillType,
        v81);
      if ( !v156 )
        goto LABEL_160;
      v84 = v156->fields._items;
      v11 = v152;
      openedSquareArray = v151;
      v85 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v156->fields._version;
      if ( !v84 )
        goto LABEL_160;
      v86 = v156->fields._size;
      if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v156,
          (Il2CppObject *)v80,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &v84->obj.klass + v86;
        v156->fields._size = v86 + 1;
        v87[4] = (Il2CppClass *)v80;
        sub_1C32BC4((CGThumbnailListItem_o *)(v87 + 4), (int32_t)v80, v82, v83);
      }
LABEL_62:
      max_length = openedSquareArray->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_83;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v14, 0);
    if ( v11 == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v153;
    if ( !v153 )
      goto LABEL_160;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v153,
                                        &entitys,
                                        v14->fields.targetId,
                                        v14->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v30 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_160;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v159,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    *(_OWORD *)&v164.fields._list = *(_OWORD *)&v159.fields._dictionary;
    v164.fields._current = v159.fields._current.fields.key;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v164,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v10 = (Il2CppObject *)v157;
      if ( !v31 )
        break;
      current = v164.fields._current;
      if ( !v164.fields._current )
        sub_1C32E7C(v31);
      if ( !v157 )
        sub_1C32E7C(v31);
      if ( FuncDispMaster__IsContainFuncIds(
             v157,
             &v163,
             (System_Int32_array *)v164.fields._current[3].klass,
             v14->fields.classBoardBaseId,
             0) )
      {
        v33 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_811/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_3188674 *)Method_System_String_Join_int___);
        if ( !v30 )
          sub_1C32E7C(v33);
        v34 = v33;
        if ( !System_Collections_Generic_List_object___Contains(
                v30,
                v33,
                (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v155 )
            sub_1C32E7C(0);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v155,
                  v34,
                  (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v35 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v35,
              (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v155,
              v34,
              (Il2CppObject *)v35,
              (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v36 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v155,
                  v34,
                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v37 = v163;
          v38 = (System_Collections_Generic_List_object__o *)v36;
          v39 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v39,
            v37,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v14,
            v40);
          if ( !v38 )
            sub_1C32E7C(v41);
          v44 = v38->fields._items;
          v45 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v38->fields._version;
          if ( !v44 )
            sub_1C32E7C(v41);
          v46 = v38->fields._size;
          if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v39,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &v44->obj.klass + v46;
            v38->fields._size = v46 + 1;
            v47[4] = (Il2CppClass *)v39;
            sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v39, v42, v43);
          }
          v66 = v30->fields._items;
          v67 = Method_System_Collections_Generic_List_string__Add__;
          ++v30->fields._version;
          if ( !v66 )
            sub_1C32E7C(v48);
          v68 = v30->fields._size;
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              v34,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v30->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)v34;
            sub_1C32BC4((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v34, v49, v50);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v53 = v14->fields.priority;
        v54 = v14->fields.id;
        v55 = v14->fields.iconId;
        v56 = v14->fields.skillType;
        v57 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v57, klass, monitor, v54, v53, v55, v56, v58);
        if ( !v156 )
          sub_1C32E7C(v59);
        v62 = v156->fields._items;
        v63 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v156->fields._version;
        if ( !v62 )
          sub_1C32E7C(v59);
        v64 = v156->fields._size;
        if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v156,
            (Il2CppObject *)v57,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v156->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v57;
          sub_1C32BC4((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v57, v60, v61);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v164,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_83:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v155;
  if ( !v155 )
LABEL_160:
    sub_1C32E7C(IsPassive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v159,
    v155,
    (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v162 = v159;
  while ( 1 )
  {
    v88 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v162,
            (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v88 )
      break;
    value = v162.fields._current.fields.value;
    if ( !v162.fields._current.fields.value )
      sub_1C32E7C(v88);
    if ( SLODWORD(v162.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v91 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)v162.fields._current.fields.value,
              0,
              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v91 )
        sub_1C32E7C(0);
      if ( v91[1].monitor )
      {
        v92 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v92 )
          sub_1C32E7C(0);
        v93 = v92[1].monitor;
        if ( !v93 )
          sub_1C32E7C(v92);
        if ( !Master_object )
          sub_1C32E7C(0);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v161,
               v93[4],
               (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v161 )
            sub_1C32E7C(0);
          data = SkillEntity__getName((SkillEntity_o *)v161, 0);
        }
      }
      else
      {
        v94 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v94 )
          sub_1C32E7C(0);
        if ( v94[2].klass )
        {
          v95 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)value,
                  0,
                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v95 )
            sub_1C32E7C(0);
          v96 = v95[2].klass;
          if ( !v96 )
            sub_1C32E7C(v95);
          data = (System_String_o *)v96->_1.byval_arg.data;
        }
      }
      v97 = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v159,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v98 = 0;
      *(_OWORD *)&v160.fields._list = *(_OWORD *)&v159.fields._dictionary;
      v160.fields._current = v159.fields._current.fields.key;
LABEL_104:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v160,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v160,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v111 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v111 )
          sub_1C32E7C(0);
        v113 = v111[1].klass;
        if ( !v113 )
          sub_1C32E7C(v111);
        v114 = *(System_String_o **)&v113->_1.byval_arg.bits;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v115 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(v114, v97, v112);
        v116 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v116 )
          sub_1C32E7C(0);
        v117 = v116[2].monitor;
        if ( !v117 )
          sub_1C32E7C(v116);
        v118 = v117[5];
        v119 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v119 )
          sub_1C32E7C(0);
        v120 = v119[2].monitor;
        if ( !v120 )
          sub_1C32E7C(v119);
        v121 = v120[6];
        v122 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v122 )
          sub_1C32E7C(0);
        v123 = v122[2].monitor;
        if ( !v123 )
          sub_1C32E7C(v122);
        v124 = v123[14];
        v125 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v125, data, v115, v118, v98, v121, v124, v126);
        if ( !v156 )
          sub_1C32E7C(v127);
        v130 = v156->fields._items;
        v131 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v156->fields._version;
        if ( !v130 )
          sub_1C32E7C(v127);
        v132 = v156->fields._size;
        if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v156,
            (Il2CppObject *)v125,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
        }
        else
        {
          v133 = &v130->obj.klass + v132;
          v156->fields._size = v132 + 1;
          v133[4] = (Il2CppClass *)v125;
          sub_1C32BC4((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v125, v128, v129);
        }
        continue;
      }
      v99 = v160.fields._current;
      v100 = sub_1C32CC8(int___TypeInfo, 0);
      if ( !v99 )
        sub_1C32E7C(v100);
      v101 = v99[1].monitor;
      if ( v101 )
      {
        if ( !v9 )
          sub_1C32E7C(v100);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v9,
                                                               v101[4],
                                                               v101[5],
                                                               classStatisticsInfos,
                                                               0);
LABEL_111:
        v103 = (__int64)DispValFromSkill;
      }
      else
      {
        v103 = v100;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v99[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0,
                                                                 0);
          goto LABEL_111;
        }
      }
      if ( !v97 )
        sub_1C32E7C(DispValFromSkill);
      v104 = v97->max_length;
      if ( v104 )
      {
        if ( (int)v104 >= 1 )
        {
          v105 = 0;
          v106 = (unsigned int)v97->max_length;
          do
          {
            if ( !v103 )
              sub_1C32E7C(DispValFromSkill);
            if ( v105 >= *(unsigned int *)(v103 + 24) )
              sub_1C32E84(DispValFromSkill);
            v107 = (char *)v97 + 4 * v105;
            v108 = *(_DWORD *)(v103 + 32 + 4 * v105++);
            *((_DWORD *)v107 + 8) += v108;
          }
          while ( v106 != v105 );
        }
      }
      else
      {
        v97 = (System_Int32_array *)v103;
      }
      v109 = v99[2].monitor;
      if ( !v109 )
        sub_1C32E7C(DispValFromSkill);
      v110 = v109[20];
      if ( v110 > v98 )
        v98 = v110;
      goto LABEL_104;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v162,
    (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v134 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v134 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__int__o *)v134->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v134->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v134);
      v134 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v136 = (Il2CppObject *)v134->static_fields->__9;
    _9__42_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_0,
      v136,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_0__,
      0);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v138, v139);
  }
  v140 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v156,
           (System_Func_TSource__TKey__o *)_9__42_0,
           (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v141 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v142 = v140;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v141 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v141->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v141->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v141);
      v141 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v144 = (Il2CppObject *)v141->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v144,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__42_1__,
      0);
    v145 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v145->__9__42_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__42_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v145->__9__42_1, (int32_t)_9__42_1, v146, v147);
  }
  v148 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v142,
                                                                (System_Func_TSource__TKey__o *)_9__42_1,
                                                                (const MethodInfo_311BBF0 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v148, (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 12);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C32E7C(gameObject);
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

  if ( (byte_4C3B3E8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&StringLiteral_6298/*"ExecuteCallback"*/);
    byte_4C3B3E8 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6298/*"ExecuteCallback"*/,
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ChainableActionParallel_o *v14; // x20
  __int64 v15; // x21
  System_Action_o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C3B3E7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action___TypeInfo);
    sub_1C32C20(&System_Action_Action____TypeInfo);
    sub_1C32C20(&System_Action_Action__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManagerUnit_TypeInfo);
    sub_1C32C20(&ChainableActionParallel_TypeInfo);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__33_0__);
    sub_1C32C20(&StringLiteral_7149/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    byte_4C3B3E7 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  v6 = (AtlasManagerUnit_o *)sub_1C32E6C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v6, (System_String_o *)StringLiteral_7149/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, 0, 0);
  this->fields.boardUiAtlasManagerUnit = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v6, v7, v8);
  v9 = sub_1C32CC8(System_Action_Action____TypeInfo, 1);
  v10 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
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
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v10, v12, v13);
  v14 = (ChainableActionParallel_o *)sub_1C32E6C(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48998960(v14, (System_Action_Action__array *)v9, 0);
  v15 = sub_1C32CC8(System_Action___TypeInfo, 1);
  v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__, 0);
  if ( !v15 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v15 + 24) )
LABEL_11:
    sub_1C32E84(v11);
  *(_QWORD *)(v15 + 32) = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v16, v17, v18);
  if ( !v14 || (v11 = ChainableActionBase__Final((ChainableActionBase_o *)v14, (System_Action_array *)v15, 0)) == 0 )
LABEL_10:
    sub_1C32E7C(v11);
  ChainableActionBase__Execute(v11, 0);
}


System_String_o *ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *v5; // x20

  if ( (byte_4C3B3F0 & 1) == 0 )
  {
    sub_1C32C20(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4C3B3F0 = 1;
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

  if ( (byte_4C3B3E9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B3E9 = 1;
  }
  classInfoObject = this->fields.classInfoObject;
  if ( !classInfoObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       classInfoObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
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
    sub_1C32E7C(classInfoObject);
  }
}


void ClassBoardEffectListDialogSkillListComponent__SetDisp(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
  System_Collections_Generic_List_ClassBoardClassEntity__o *v22; // x24
  ClassBoardEffectListDialogSkillListComponent___c_c *v23; // x0
  System_Func_object__bool__o *_9__40_0; // x25
  Il2CppObject *v25; // x26
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL4 v29; // w26
  ClassBoardBaseMaster_o *v30; // x24
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x25
  ClassBoardBaseEntity_o *v32; // x24
  unsigned int v33; // w8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v34; // x9
  int id; // w9
  int v36; // w9
  const MethodInfo *v37; // x6
  bool v38; // w24
  long double inited; // q0
  System_Int32_array *v40; // x26
  unsigned __int64 v41; // x29
  __int64 v42; // x26
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  BattleServantData_o *v45; // x1
  __int64 v46; // x25
  System_Collections_Generic_List_object__o *v47; // x27
  System_Predicate_object__o *v48; // x28
  System_Int32_array *squareIds; // x23
  _QWORD *v50; // x23
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  System_Int32_array *v54; // x27
  _QWORD *v55; // x22
  __int64 v56; // x8
  __int64 v57; // x0
  __int64 v58; // x0
  int32_t v59; // w22
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x6
  int grandClassId; // w23
  System_Collections_Generic_IEnumerable_T__o *v66; // x1
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
  UnityEngine_GameObject_o *v94; // x22
  Il2CppObject *v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  ClassBoardEffectListDialogSkillDetailComponent_o *v98; // x23
  __int64 v99; // x0
  const MethodInfo *v100; // x6
  float v101; // s8
  System_String_o *v102; // x0
  System_String_o *v103; // x22
  float v104; // s8
  float v105; // s9
  ClassBoardEffectListDialogSkillListComponent_c *v106; // x0
  ScrollItemRecycler_o *v107; // x21
  UnityEngine_GameObject_o *grandClassInfoPrefab; // x20
  float ExtraClassIconListObjHeight; // s9
  System_Action_object__o *v110; // x22
  UnityEngine_Object_o *grandScoreTitleLabel; // x20
  UnityEngine_Object_o *grandScoreTitleTopLine; // x20
  UILabel_o *v113; // x20
  ScrollItemRecycler_o *v114; // x20
  int32_t v115; // w19
  UnityEngine_GameObject_o *v116; // x21
  ClassBoardEffectListDialogSkillListComponent_o *v117; // [xsp+28h] [xbp-C8h]
  _BOOL4 v118; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+50h] [xbp-A0h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+70h] [xbp-80h] BYREF
  int32_t value; // [xsp+7Ch] [xbp-74h] BYREF

  v14 = isAll;
  value = baseId;
  if ( (byte_4C3B3ED & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&System_Action_GameObject__int__TypeInfo);
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C32C20(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_GameObject__int__float__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C32C20(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Predicate_ClassBoardClassEntity__TypeInfo);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__);
    sub_1C32C20(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_3389/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_1C32C20(&StringLiteral_3388/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    sub_1C32C20(&StringLiteral_3395/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/);
    sub_1C32C20(&StringLiteral_3396/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/);
    byte_4C3B3ED = 1;
  }
  entitys = 0;
  memset(&v120, 0, sizeof(v120));
  this->fields.supportGrandClassBoardInfo = supportGrandClassBoard;
  this->fields.baseId = baseId;
  sub_1C32BC4(
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
           (const MethodInfo_30E8A38 *)Method_System_Linq_Enumerable_Any_int___) )
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_202;
  if ( ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0) )
  {
    v22 = entitys;
    v23 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v23 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__40_0 = (System_Func_object__bool__o *)v23->static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__40_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__40_0,
        v25,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__40_0__,
        0);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__40_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v27, v28);
    }
    v29 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (System_Func_TSource__bool__o *)_9__40_0,
            (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
  }
  else
  {
    v29 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  v30 = (ClassBoardBaseMaster_o *)Master_object;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  if ( !v30 )
    goto LABEL_202;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                v30,
                                ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->Extra1ClassBaseId,
                                0);
  v32 = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
          v30,
          ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->Extra2ClassBaseId,
          0);
  Master_object = sub_1C32CC8(int___TypeInfo, 4);
  if ( !Master_object )
    goto LABEL_202;
  v33 = *(_DWORD *)(Master_object + 24);
  if ( !v33
    || (v34 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields,
        *(_DWORD *)(Master_object + 32) = v34->Extra1ClassBaseId,
        v33 == 1)
    || ((*(_DWORD *)(Master_object + 36) = v34->Extra2ClassBaseId, !GrandClassBoardBaseEntity)
      ? (id = -1)
      : (id = GrandClassBoardBaseEntity->fields.id),
        v33 <= 2 || ((*(_DWORD *)(Master_object + 40) = id, !v32) ? (v36 = -1) : (v36 = v32->fields.id), v33 <= 3)) )
  {
LABEL_203:
    sub_1C32E84(Master_object);
  }
  *(_DWORD *)(Master_object + 44) = v36;
  v38 = System_Linq_Enumerable__Contains_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Master_object,
          value,
          (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( !v38 && v14 )
  {
    Master_object = (__int64)this->fields.classInfoObject;
    if ( !Master_object )
      goto LABEL_202;
    Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_202;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  v118 = v29;
  v40 = 0;
  if ( !battleServantList || !entitys )
    goto LABEL_59;
  if ( SLODWORD(battleServantList->max_length) < 1 )
    goto LABEL_56;
  v117 = this;
  v41 = 0;
  do
  {
    v42 = sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    if ( v41 >= LODWORD(battleServantList->max_length) )
      goto LABEL_203;
    if ( !v42 )
      goto LABEL_202;
    v45 = battleServantList->m_Items[v41];
    *(_QWORD *)(v42 + 16) = v45;
    v46 = v42 + 16;
    sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 16), (int32_t)v45, v43, v44);
    v47 = (System_Collections_Generic_List_object__o *)entitys;
    v48 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_ClassBoardClassEntity__TypeInfo);
    System_Predicate_object____ctor(
      v48,
      (Il2CppObject *)v42,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass40_0__SetList_b__1__,
      0);
    if ( !v47 )
      goto LABEL_202;
    Master_object = (__int64)System_Collections_Generic_List_object___Find(
                               v47,
                               (System_Predicate_T__o *)v48,
                               (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Find__);
    if ( Master_object )
    {
      this = v117;
      if ( *(_QWORD *)v46 )
      {
        v40 = *(System_Int32_array **)(*(_QWORD *)v46 + 968LL);
        goto LABEL_59;
      }
      goto LABEL_202;
    }
    ++v41;
  }
  while ( (__int64)v41 < SLODWORD(battleServantList->max_length) );
  this = v117;
LABEL_56:
  v40 = 0;
LABEL_59:
  if ( !this->fields.isSupport )
  {
    squareIds = 0;
LABEL_83:
    v54 = 0;
    goto LABEL_84;
  }
  if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0 )
  {
    v50 = Method_System_Array_Empty_int___;
    v51 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v51 )
    {
      sub_1C83390(Method_System_Array_Empty_int___);
      v51 = v50[7];
    }
    v52 = *(_QWORD *)(v51 + 16);
    if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
      v52 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v52 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v52);
    v53 = *(_QWORD *)(v50[7] + 16LL);
    if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
      v53 = sub_1C83334(inited);
    squareIds = **(System_Int32_array ***)(v53 + 184);
    if ( !this->fields.isSupport )
      goto LABEL_83;
  }
  if ( !supportGrandClassBoard || (v54 = supportGrandClassBoard->fields.squareIds) == 0 )
  {
    v55 = Method_System_Array_Empty_int___;
    v56 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v56 )
    {
      sub_1C83390(Method_System_Array_Empty_int___);
      v56 = v55[7];
    }
    v57 = *(_QWORD *)(v56 + 16);
    if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
      v57 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v57 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v57);
    v58 = *(_QWORD *)(v55[7] + 16LL);
    if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
      v58 = sub_1C83334(inited);
    v54 = **(System_Int32_array ***)(v58 + 184);
  }
LABEL_84:
  v59 = value;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                    v59,
                    dispType,
                    0,
                    squareIds,
                    classStatisticsInfos,
                    v40,
                    v37);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v62, v63);
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
                                 v54,
                                 classStatisticsInfos,
                                 0,
                                 v64);
      if ( !Master_object )
        goto LABEL_202;
      v66 = (System_Collections_Generic_IEnumerable_T__o *)Master_object;
      if ( *(int *)(Master_object + 24) >= 1 )
      {
        Master_object = (__int64)*p_skillDispDataList;
        if ( *p_skillDispDataList )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)Master_object,
            v66,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
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
  v67 = v38;
  if ( (*p_skillDispDataList)->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0);
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
      if ( (v118 & v67) != 0 )
      {
        v102 = System_Int32__ToString((int32_t)&value, 0);
        v103 = System_String__Concat_63518544((System_String_o *)StringLiteral_3389/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v102, 0);
      }
      else
      {
        v103 = (System_String_o *)StringLiteral_3388/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (__int64)LocalizationManager__Get(v103, 0);
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
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v119,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
        v91 = 0.0;
        v120 = v119;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v120,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
        {
          current = v120.fields._current;
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v70, 0, 0, 0);
          v94 = Object;
          if ( !Object )
            sub_1C32E7C(0);
          v95 = UnityEngine_GameObject__GetComponent_object_(
                  Object,
                  (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          v98 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v95;
          if ( !v95 )
            sub_1C32E7C(0);
          v95[5].monitor = this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v95[5].monitor, (int32_t)this, v96, v97);
          if ( !current )
            sub_1C32E7C(v99);
          v101 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                   v98,
                   (System_String_o *)current[1].klass,
                   (System_String_o *)current[1].monitor,
                   (int32_t)current[2].monitor,
                   HIDWORD(current[2].monitor),
                   0,
                   v100);
          GameObjectExtensions__SetParent_36042476(v94, this->fields.skillListParent, 0);
          if ( !byte_4C313D6 )
          {
            sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
            byte_4C313D6 = 1;
          }
          GameObjectExtensions__SetLocalScale(v94, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          GameObjectExtensions__SetLocalPosition_36036864(v94, 0.0, -v91, 0.0, 0);
          UnityEngine_GameObject__SetActive(v94, 1, 0);
          v91 = v91 + v101;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v120,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3396/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/, 0);
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
      v80 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_GameObject__int__float__TypeInfo);
      System_Func_object__int__float____ctor(
        v80,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
        0);
      v81 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1C32E6C(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
      ScrollItemRecycler_HeightCalculatorVarious___ctor(v81, (System_Func_GameObject__int__float__o *)v80, 0);
      skillDispDataList = this->fields.skillDispDataList;
      if ( !skillDispDataList )
        goto LABEL_202;
      size = skillDispDataList->fields._size;
      v84 = this->fields.recycler;
      v85 = (System_Action_T1__T2__o *)sub_1C32E6C(System_Action_GameObject__int__TypeInfo);
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
        v106 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v107 = this->fields.recycler;
        grandClassInfoPrefab = this->fields.grandClassInfoPrefab;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v106 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ExtraClassIconListObjHeight = v106->static_fields->ExtraClassIconListObjHeight;
        v110 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(
          v110,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_SetupGrandExtraClassIconList__,
          0);
        if ( !v107 )
LABEL_202:
          sub_1C32E7C(Master_object);
        ScrollItemRecycler__AddListDifferentObject(
          v107,
          v88 - 1,
          0,
          grandClassInfoPrefab,
          ExtraClassIconListObjHeight,
          v87,
          (System_Action_GameObject__o *)v110,
          0);
        v104 = 60.0;
        if ( grandSkillDataFirstIndex )
          v105 = 20.0;
        else
          v105 = 60.0;
      }
      else
      {
        v104 = 21.0;
        v105 = 20.0;
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
          v104 = v105;
        }
      }
      Master_object = (__int64)this->fields.grandScoreTitleLabel;
      if ( Master_object )
      {
        Master_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        if ( Master_object )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
          v113 = this->fields.grandScoreTitleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3395/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/, 0);
          if ( v113 )
          {
            UILabel__set_text(v113, (System_String_o *)Master_object, 0);
            Master_object = (__int64)this->fields.grandScoreTitleLabel;
            if ( Master_object )
            {
              v114 = this->fields.recycler;
              v115 = this->fields.grandSkillDataFirstIndex;
              Master_object = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
              v116 = (UnityEngine_GameObject_o *)Master_object;
              if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
              if ( v114 )
              {
                ScrollItemRecycler__AddListDifferentObject(
                  v114,
                  v115 - 1,
                  v116,
                  0,
                  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->ExtraClassTabGrandScoreTitleHeight,
                  v104,
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
  if ( (byte_4C3B3EB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B3EB = 1;
  }
  entity = 0;
  if ( !obj )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( this )
    {
      this = (ClassBoardEffectListDialogSkillListComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 &entity,
                                                                 v4->fields.grandClassId,
                                                                 (const MethodInfo_3396884 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C3B3EA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_19574/*"formation_copy_bg2"*/);
    sub_1C32C20(&StringLiteral_21248/*"line_yellow"*/);
    sub_1C32C20(&StringLiteral_21238/*"line"*/);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C32C20(&StringLiteral_20547/*"img_score_list_grand_board"*/);
    byte_4C3B3EA = 1;
  }
  if ( !obj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
      sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[5].monitor, (int32_t)v6, v8, v9);
      this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList;
      if ( this )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 index,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
        this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        if ( this )
        {
          classInfoObject = (UISprite_o *)this->fields.classInfoObject;
          this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     obj,
                                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
                UISprite__set_spriteName(classInfoObject, (System_String_o *)StringLiteral_19574/*"formation_copy_bg2"*/, 0);
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
                  UISprite__set_spriteName((UISprite_o *)skillDetailObj, (System_String_o *)StringLiteral_21238/*"line"*/, 0);
                }
              }
              else
              {
                AtlasManagerUnit__SetUI(
                  (AtlasManagerUnit_o *)this,
                  classInfoObject,
                  (System_String_o *)StringLiteral_20547/*"img_score_list_grand_board"*/,
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
                                                                             (System_String_o *)StringLiteral_21248/*"line_yellow"*/,
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandSpellEntity, (int32_t)commandSpellEntity, v15, v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.classBoardSquareEntity, (int32_t)classBoardSquareEntity, v17, v18);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)v14, (int32_t)detail, v17, v18);
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

  if ( (byte_4C3B3F2 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_4C3B3F2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_1C32BC4(
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
    sub_1C32E7C(this);
  return x->fields.priority;
}


int32_t ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__42_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.squareId;
}


bool ClassBoardEffectListDialogSkillListComponent___c___SetList_b__40_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0);
}