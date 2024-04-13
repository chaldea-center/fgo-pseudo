// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  ClassBoardEffectListDialogSkillListComponent_c *v8; // x8
  int v9; // s0
  int v10; // s1
  int v11; // s2
  struct UnityEngine_Color_o v12; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_42E9C37 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1, v2, v3);
    byte_42E9C37 = 1;
  }
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->DEFAULT_SKILL_LV = 1;
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->EXTRA1_CLASS_BASE_ID = 8;
  v8 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->EXTRA2_CLASS_BASE_ID = 9;
  v8->static_fields->classIconOneDispFixPosY = -1.0;
  v9 = 1050319515;
  v12 = (struct UnityEngine_Color_o)0LL;
  v10 = 1050319515;
  v11 = 1050319515;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v12);
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->DISABLED_COLOR = v12;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___ctor(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.classIconSpaceOffsetY = 20.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent__CompareClassId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  struct System_Int32_array *arrayForSort; // x13
  unsigned __int64 max_length; // x9
  int v6; // w10
  int v7; // w8
  unsigned __int64 v8; // x11
  int32_t *v9; // x13
  int32_t v10; // w14
  __int64 v12; // x0

  arrayForSort = this->fields.arrayForSort;
  if ( !arrayForSort )
    goto LABEL_15;
  max_length = arrayForSort->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    v9 = &arrayForSort->m_Items[1];
    while ( a )
    {
      if ( v8 >= max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      if ( !b )
        break;
      v10 = v9[v8];
      if ( a->fields.classId == v10 )
        v7 = v8;
      if ( b->fields.classId == v10 )
        v6 = v8;
      if ( (__int64)++v8 >= (int)max_length )
        return v7 - v6;
    }
LABEL_15:
    sub_B5D69C(this, a);
  }
  v7 = 0;
  v6 = 0;
  return v7 - v6;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
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
  System_Collections_Generic_List_int__o *v40; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v41; // x0
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  struct System_Int32_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E9C30 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, id, (_DWORD)entityList, method);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Union_int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v37, v38, v39);
    byte_42E9C30 = 1;
  }
  memset(&i, 0, sizeof(i));
  v40 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v57,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  for ( i = v57;
        ;
        System_Collections_Generic_List_int___Add(
          v40,
          HIDWORD(i.fields.current[1].klass),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__) )
  {
    v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v43 )
      break;
    if ( !i.fields.current )
      sub_B5D69C(v43, v44);
    if ( !v40 )
      sub_B5D69C(v43, v44);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v41 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v41 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v41->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( static_fields->EXTRA2_CLASS_BASE_ID == id )
    {
      v48 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v48 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v48->static_fields->Extra2SortOrderClassIds;
      goto LABEL_25;
    }
    if ( v40 )
    {
      v50 = System_Collections_Generic_List_int___ToArray(
              v40,
              (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_28;
    }
LABEL_31:
    sub_B5D69C(v41, v42);
  }
  v46 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v46->static_fields->Extra1SortOrderClassIds;
LABEL_25:
  v49 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v40,
          (const MethodInfo_1CBAA28 *)Method_System_Linq_Enumerable_Union_int___);
  v50 = System_Linq_Enumerable__ToArray_int_(
          v49,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_28:
  this->fields.arrayForSort = v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.arrayForSort,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent__GetBaseId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


float __fastcall ClassBoardEffectListDialogSkillListComponent__GetListItemHeight(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v12; // x8

  v6 = this;
  if ( (byte_42E9C32 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___,
      (_DWORD)obj,
      index,
      method);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B5D5C4(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7,
                                                               v8,
                                                               v9);
    byte_42E9C32 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  skillDispDataList = v6->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v12 = skillDispDataList->fields._items->m_Items[index];
  if ( !v12 || !this )
LABEL_10:
    sub_B5D69C(this, obj);
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
           v12->fields.detail,
           v10);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
        int32_t baseId,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        System_Int32_array *openedSquareIdArray,
        const MethodInfo *method)
{
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
  __int64 v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v46; // x22
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v50; // x3
  ClassBoardSquareEntity_array *v51; // x21

  if ( (byte_42E9C34 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___,
      dispType,
      ignoreTurnOrCountPassive,
      openedSquareIdArray);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_int__ClassBoardSquareEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo, v33, v34, v35);
    byte_42E9C34 = 1;
  }
  v36 = sub_B5D694(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_o *)v36,
    0LL);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  *(_DWORD *)(v36 + 24) = baseId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v36 + 16) = Master_WarQuestSelectionMaster;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), Master_WarQuestSelectionMaster, v40, v41, v42, v43, v44, v45);
  if ( openedSquareIdArray )
  {
    v46 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v46,
      (Il2CppObject *)v36,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__ClassBoardSquareEntity___ctor__);
    v47 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v46,
                                                           (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v48 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v47,
            (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                                (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v36 + 24), 0LL);
  }
  v51 = OpenedSquareEntityArray;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v51,
           dispType,
           ignoreTurnOrCountPassive,
           v50);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
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
  int v162; // w1
  char v163; // w2
  __int64 v164; // x3
  System_Xml_XmlQualifiedName_o *IsPassive; // x0
  __int64 v166; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v168; // x26
  signed int max_length; // w8
  int v170; // w25
  int v171; // w24
  unsigned int v172; // w27
  ClassBoardSquareEntity_o *v173; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v174; // x19
  System_Xml_XmlQualifiedName_o *v175; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v176; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v178; // x21
  SkillLvEntity_o *v179; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v180; // x19
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v181; // x20
  const MethodInfo *v182; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v183; // x22
  _BOOL8 v184; // x0
  __int64 v185; // x1
  Il2CppObject *current; // x20
  System_String_o *v187; // x0
  __int64 v188; // x1
  System_Xml_XmlQualifiedName_o *v189; // x26
  _BOOL8 v190; // x0
  __int64 v191; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v192; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v193; // x0
  FuncDispEntity_o *v194; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v195; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v196; // x21
  __int64 v197; // x0
  __int64 v198; // x1
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v201; // w26
  int32_t v202; // w24
  int32_t v203; // w25
  int32_t v204; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v205; // x20
  __int64 v206; // x1
  int v207; // w8
  System_String_o *v208; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t skillType; // w24
  System_String_o *v214; // x25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v215; // x20
  int v216; // w23
  _BOOL8 v217; // x0
  __int64 v218; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x26
  __int64 v222; // x8
  __int64 v223; // x1
  __int64 v224; // x8
  __int64 v225; // x25
  int32_t v226; // w24
  int32_t v227; // w8
  Il2CppObject *v228; // x19
  __int64 v229; // x0
  const MethodInfo *v230; // x1
  _DWORD *v231; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v233; // x8
  __int64 v234; // x10
  __int64 v235; // x11
  bool v236; // cc
  _DWORD *v237; // x8
  int v238; // w26
  __int64 v239; // x0
  __int64 v240; // x1
  const MethodInfo *v241; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v242; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v244; // x19
  System_String_o *v245; // x0
  __int64 v246; // x1
  System_String_o *v247; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v248; // x8
  _DWORD *v249; // x9
  int32_t v250; // w25
  _DWORD *v251; // x9
  int32_t v252; // w26
  _DWORD *v253; // x8
  int32_t v254; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v255; // x22
  __int64 v256; // x1
  __int64 v257; // x0
  __int64 v258; // x0
  int v259; // w20
  ClassBoardEffectListDialogSkillListComponent___c_c *v260; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_0; // x20
  Il2CppObject *v263; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v264; // x0
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v271; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v272; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v273; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v274; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_1; // x20
  Il2CppObject *v276; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v277; // x0
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v284; // x0
  __int64 v286; // x0
  ClassBoardCommandSpellMaster_o *v288; // [xsp+10h] [xbp-180h]
  int v289; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v290; // [xsp+20h] [xbp-170h]
  int32_t v291; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v292; // [xsp+30h] [xbp-160h]
  int v293; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v294; // [xsp+40h] [xbp-150h]
  int v295; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v296; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v297; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v298; // [xsp+60h] [xbp-130h]
  System_String_o *v299; // [xsp+60h] [xbp-130h]
  _WORD v300[26]; // [xsp+68h] [xbp-128h] BYREF
  int v301; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v302; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v303; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v304; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v305; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v306; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v307; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v309; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_42E9C35 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, dispType, ignoreTurnOrCountPassive, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_FuncDispMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v33,
      v34,
      v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v36,
      v37,
      v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v39,
      v40,
      v41);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v42,
      v43,
      v44);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v45,
      v46,
      v47);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v51,
      v52,
      v53);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__,
      v54,
      v55,
      v56);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v57,
      v58,
      v59);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v60,
      v61,
      v62);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v63,
      v64,
      v65);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v66,
      v67,
      v68);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__,
      v69,
      v70,
      v71);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__,
      v72,
      v73,
      v74);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v75,
      v76,
      v77);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v78,
      v79,
      v80);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v81, v82, v83);
    sub_B5D5C4(
      &Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__,
      v84,
      v85,
      v86);
    sub_B5D5C4(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v87, v88, v89);
    sub_B5D5C4(&int___TypeInfo, v90, v91, v92);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v93,
      v94,
      v95);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v96,
      v97,
      v98);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v99, v100, v101);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v102,
      v103,
      v104);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v105, v106, v107);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v108, v109, v110);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v111,
      v112,
      v113);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v114, v115, v116);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v117, v118, v119);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v120,
      v121,
      v122);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v123,
      v124,
      v125);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v126,
      v127,
      v128);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v129,
      v130,
      v131);
    sub_B5D5C4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v132,
      v133,
      v134);
    sub_B5D5C4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v135,
      v136,
      v137);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v138, v139, v140);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v141, v142, v143);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v144, v145, v146);
    sub_B5D5C4(&Method_System_String_Join_int___, v147, v148, v149);
    sub_B5D5C4(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__,
      v150,
      v151,
      v152);
    sub_B5D5C4(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__,
      v153,
      v154,
      v155);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v156, v157, v158);
    sub_B5D5C4(&StringLiteral_707/*","*/, v159, v160, v161);
    sub_B5D5C4(&StringLiteral_1/*""*/, v162, v163, v164);
    byte_42E9C35 = 1;
  }
  v309 = 0LL;
  entity = 0LL;
  v307 = 0LL;
  entitys = 0LL;
  v305 = 0LL;
  v303 = 0LL;
  memset(&v306, 0, sizeof(v306));
  memset(&v304, 0, sizeof(v304));
  memset(&v302, 0, sizeof(v302));
  v301 = 0;
  v297 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v297,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v297;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  v294 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v168 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v298 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FuncDispMaster___);
  v296 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v296,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v170 = 0;
  v292 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v171 = 0;
    v172 = 0;
    v295 = 0;
    v291 = v4;
    v290 = openedSquareArray;
    v288 = v168;
    while ( 1 )
    {
      if ( v172 >= max_length )
      {
        v286 = sub_B5D6C8(IsPassive);
        sub_B5D668(v286, 0LL);
      }
      v173 = openedSquareArray->m_Items[v172];
      v174 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v174,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v174;
      if ( !v173 )
        break;
      IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsPassive(v173, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( v4 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         Master_WarQuestSelectionMaster,
                                                         &entity,
                                                         v173->fields.targetId,
                                                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            IsPassive = (System_Xml_XmlQualifiedName_o *)v294;
            if ( !v294 )
              break;
            IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                           v294,
                                                           &v309,
                                                           v173->fields.targetId,
                                                           v173->fields.upSkillLv,
                                                           0LL);
            if ( ((unsigned __int8)IsPassive & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_174;
              IsPassive = (System_Xml_XmlQualifiedName_o *)v309;
              if ( !v309 )
                break;
              IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(v309, 0LL);
              if ( ((unsigned __int8)IsPassive & 1) == 0 )
              {
LABEL_174:
                if ( !v309 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)v298;
                if ( !v298 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                               v298,
                                                               &v307,
                                                               v309->fields.funcId,
                                                               0LL);
                if ( ((unsigned __int8)IsPassive & 1) != 0 )
                {
                  if ( !v309 )
                    break;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                 (System_String_o *)StringLiteral_707/*","*/,
                                                                 (System_Collections_Generic_IEnumerable_T__o *)v309->fields.funcId,
                                                                 (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
                  if ( !v296 )
                    break;
                  v175 = IsPassive;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v296,
                          IsPassive,
                          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v176 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v176,
                      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v296,
                      v175,
                      (System_Xml_Schema_XmlSchemaObject_o *)v176,
                      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v296,
                           (System_Type_o *)v175,
                           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v178 = v307;
                  v179 = v309;
                  v180 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v181 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v181,
                    v178,
                    v179,
                    0LL,
                    v173,
                    0LL);
                  if ( !v180 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v180,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v181,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v292;
                  v4 = v291;
                  openedSquareArray = v290;
                }
                else
                {
                  IsPassive = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v293 = v170;
                  v289 = v171;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v208 = (System_String_o *)IsPassive;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v173->fields.priority;
                  id = v173->fields.id;
                  iconId = v173->fields.iconId;
                  skillType = v173->fields.skillType;
                  v214 = EffectExplanation;
                  v215 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v215,
                    v208,
                    v214,
                    id,
                    priority,
                    iconId,
                    skillType,
                    0LL);
                  IsPassive = (System_Xml_XmlQualifiedName_o *)v297;
                  if ( !v297 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v297,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v215,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v292;
                  v4 = v291;
                  openedSquareArray = v290;
                  v171 = v289;
                  v170 = v293;
                }
              }
            }
          }
        }
      }
      else
      {
        IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsCommandSpell(v173, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v168 )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                         v168,
                                                         &entitys,
                                                         v173->fields.targetId,
                                                         v173->fields.upSkillLv,
                                                         v182);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v183 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v183,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (System_Xml_XmlQualifiedName_o *)entitys;
            if ( !entitys )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v300,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            v306 = *(System_Collections_Generic_List_Enumerator_T__o *)v300;
            while ( 1 )
            {
              v184 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                       &v306,
                       (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              if ( !v184 )
                break;
              current = v306.fields.current;
              if ( !v306.fields.current )
                sub_B5D69C(v184, v185);
              if ( !v298 )
                sub_B5D69C(0LL, v185);
              if ( FuncDispMaster__IsContainFuncIds(
                     v298,
                     &v305,
                     (System_Int32_array *)v306.fields.current[3].klass,
                     0LL) )
              {
                v187 = System_String__Join_int_(
                         (System_String_o *)StringLiteral_707/*","*/,
                         (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                         (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
                if ( !v183 )
                  sub_B5D69C(v187, v188);
                v189 = (System_Xml_XmlQualifiedName_o *)v187;
                v190 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v183,
                         (WarBoardManager_TaskList_o *)v187,
                         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( !v190 )
                {
                  if ( !v296 )
                    sub_B5D69C(v190, v191);
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v296,
                          v189,
                          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v192 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v192,
                      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v296,
                      v189,
                      (System_Xml_Schema_XmlSchemaObject_o *)v192,
                      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  v193 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v296,
                           (System_Type_o *)v189,
                           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v194 = v305;
                  v195 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v193;
                  v196 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v196,
                    v194,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v173,
                    0LL);
                  if ( !v195 )
                    sub_B5D69C(v197, v198);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v195,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v196,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v183,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v189,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                v201 = v173->fields.priority;
                v203 = v173->fields.id;
                v202 = v173->fields.iconId;
                v204 = v173->fields.skillType;
                v205 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v205,
                  klass,
                  monitor,
                  v203,
                  v201,
                  v202,
                  v204,
                  0LL);
                if ( !v297 )
                  sub_B5D69C(0LL, v206);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v297,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v205,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
              }
            }
            *(_DWORD *)&v300[2 * v295 + 20] = 569;
            v171 = ++v301;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v306,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            Master_WarQuestSelectionMaster = v292;
            v4 = v291;
            openedSquareArray = v290;
            v168 = v288;
            v170 = v171;
            if ( v171 )
            {
              v207 = v171 - 1;
              v295 = v171;
              if ( *(_DWORD *)&v300[2 * v171 + 18] == 569 )
              {
                v170 = --v171;
                v301 = v207;
                v295 = v207;
              }
            }
            else
            {
              v295 = 0;
            }
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v172 >= max_length )
        goto LABEL_65;
    }
LABEL_157:
    sub_B5D69C(IsPassive, v166);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Xml_XmlQualifiedName_o *)v296;
  if ( !v296 )
    goto LABEL_157;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v300,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v296,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v304 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v300;
  v216 = v170;
  while ( 1 )
  {
    v217 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v304,
             (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v217 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v304.fields.current.fields.value;
    if ( !v304.fields.current.fields.value )
      sub_B5D69C(v217, v218);
    if ( SLODWORD(v304.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v304.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B5D69C(v217, v218);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v222 = data[3];
        if ( !v222 )
          sub_B5D69C(v217, v218);
        if ( !v292 )
          sub_B5D69C(0LL, v218);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v292,
               &v303,
               *(_DWORD *)(v222 + 16),
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v303 )
            sub_B5D69C(0LL, v223);
          Name = SkillEntity__getName((SkillEntity_o *)v303, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v304.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v224 = data[4];
        if ( !v224 )
          sub_B5D69C(v217, v218);
        Name = *(System_String_o **)(v224 + 32);
      }
      v225 = sub_B5D5DC(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v300,
        value,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v226 = 0;
      v299 = Name;
      v302 = *(System_Collections_Generic_List_Enumerator_T__o *)v300;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v302,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v300[2 * v216 + 20] = 947;
        v238 = v301 + 1;
        v301 = v238;
        v216 = v238;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v302,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v238 && *(_DWORD *)&v300[2 * v238 + 18] == 947 )
        {
          v216 = v238 - 1;
          v301 = v238 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v242 = value->fields._items->m_Items[0];
        if ( !v242 )
          sub_B5D69C(v239, v240);
        buff = v242->fields.buff;
        if ( !buff )
          sub_B5D69C(v239, v240);
        v244 = *(System_String_o **)&buff->fields.isUse;
        if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        }
        v245 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 v244,
                 (System_Int32_array *)v225,
                 v241);
        v247 = v245;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v248 = value->fields._items->m_Items[0];
        if ( !v248 )
          sub_B5D69C(v245, v246);
        v249 = v248[1].monitor;
        if ( !v249 )
          sub_B5D69C(v245, v246);
        v250 = v249[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v251 = v248[1].monitor;
        if ( !v251 )
          sub_B5D69C(v245, v246);
        v252 = v251[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v253 = v248[1].monitor;
        if ( !v253 )
          sub_B5D69C(v245, v246);
        v254 = v253[14];
        v255 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v255, v299, v247, v250, v226, v252, v254, 0LL);
        if ( !v297 )
          sub_B5D69C(0LL, v256);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v297,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v255,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v228 = v302.fields.current;
      v229 = sub_B5D5DC(int___TypeInfo, 0LL);
      if ( !v228 )
        sub_B5D69C(v229, v230);
      v231 = v228[1].monitor;
      if ( v231 )
      {
        if ( !v294 )
          sub_B5D69C(v229, v230);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v294,
                                                               v231[4],
                                                               v231[5],
                                                               0LL);
LABEL_95:
        v233 = (__int64)DispValFromSkill;
      }
      else
      {
        v233 = v229;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v228[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 v230);
          goto LABEL_95;
        }
      }
      if ( !v225 )
        sub_B5D69C(DispValFromSkill, v230);
      v234 = *(_QWORD *)(v225 + 24);
      if ( v234 )
      {
        if ( (int)v234 >= 1 )
        {
          v235 = 8LL;
          do
          {
            if ( v235 - 8 >= (unsigned __int64)(unsigned int)v234 )
            {
              v257 = sub_B5D6C8(DispValFromSkill);
              sub_B5D668(v257, 0LL);
            }
            if ( !v233 )
              sub_B5D69C(DispValFromSkill, v230);
            if ( v235 - 8 >= (unsigned __int64)*(unsigned int *)(v233 + 24) )
            {
              v258 = sub_B5D6C8(DispValFromSkill);
              sub_B5D668(v258, 0LL);
            }
            v236 = v235 - 7 < (int)v234;
            *(_DWORD *)(v225 + 4 * v235) += *(_DWORD *)(v233 + 4 * v235);
            ++v235;
          }
          while ( v236 );
        }
      }
      else
      {
        v225 = v233;
      }
      v237 = v228[2].monitor;
      if ( !v237 )
        sub_B5D69C(DispValFromSkill, v230);
      v227 = v237[20];
      if ( v227 > v226 )
        v226 = v227;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v300[2 * v216 + 20] = 1073;
  v259 = ++v301;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v304,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v259 && *(_DWORD *)&v300[2 * v259 + 18] == 1073 )
    v301 = v259 - 1;
  v260 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v260 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  static_fields = v260->static_fields;
  _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v260->vtable._0_Equals.methodPtr) & 4) != 0 && !v260->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v260);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v263 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_0,
      v263,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v264 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v264->__9__33_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v264->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v265,
      v266,
      v267,
      v268,
      v269,
      v270);
  }
  v271 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v297,
           (System_Func_TSource__TKey__o *)_9__33_0,
           (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v272 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v273 = v271;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v272 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  v274 = v272->static_fields;
  _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v274->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( (BYTE3(v272->vtable._0_Equals.methodPtr) & 4) != 0 && !v272->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v272);
      v274 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v276 = (Il2CppObject *)v274->__9;
    _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_1,
      v276,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v277 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v277->__9__33_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v277->__9__33_1,
      (System_Int32_array **)_9__33_1,
      v278,
      v279,
      v280,
      v281,
      v282,
      v283);
  }
  v284 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v273,
                                                                (System_Func_TSource__TKey__o *)_9__33_1,
                                                                (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v284, (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dialog,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_B5D69C(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent__IsSupport(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isSupport;
}


System_String_o *__fastcall ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x8
  System_String_o *v37; // x0
  System_String_o *v38; // x21
  System_String_o *v39; // x0
  System_String_o *v40; // x28
  System_String_o *v41; // x0
  System_String_o *v42; // x27
  System_String_o *v43; // x0
  System_String_o *v44; // x26
  System_String_o *v45; // x0
  System_String_o *v46; // x25
  System_String_o *v47; // x0
  System_String_o *v48; // x24
  System_String_o *v49; // x0
  System_String_o *v50; // x23
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x22
  System_String_o *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x20
  System_String_o *v58; // x20
  System_String_o *v59; // x20
  System_String_o *v60; // x20
  System_String_o *v61; // x20
  unsigned __int64 v62; // x8
  System_String_o *v63; // x20
  unsigned __int64 v64; // x8
  System_String_o *v65; // x20
  unsigned __int64 v66; // x8
  System_String_o *v67; // x20
  unsigned __int64 v68; // x8
  __int64 v70; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v72; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E9C36 & 1) == 0 )
  {
    sub_B5D5C4(&SkillDetailParamFormatResolver_TypeInfo, (_DWORD)funcVals, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23987/*"{x"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23782/*"{"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23717/*"xx}"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23716/*"xxx}"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_24008/*"}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23990/*"{xxxx"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23988/*"{xx"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_23715/*"xxxx}"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_23718/*"x}"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23989/*"{xxx"*/, v33, v34, v35);
    byte_42E9C36 = 1;
  }
  v72 = 0LL;
  if ( funcVals )
  {
    v36 = *(_QWORD *)&funcVals->max_length;
    if ( v36 )
    {
      HIDWORD(v72) = 0;
      if ( (int)v36 >= 1 )
      {
        do
        {
          v37 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v38 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v37,
                  (System_String_o *)StringLiteral_23715/*"xxxx}"*/,
                  0LL);
          v39 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v40 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v39,
                  (System_String_o *)StringLiteral_23716/*"xxx}"*/,
                  0LL);
          v41 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v42 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v41,
                  (System_String_o *)StringLiteral_23717/*"xx}"*/,
                  0LL);
          v43 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v44 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v43,
                  (System_String_o *)StringLiteral_23718/*"x}"*/,
                  0LL);
          v45 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v46 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23782/*"{"*/,
                  v45,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          v47 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v48 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23987/*"{x"*/,
                  v47,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          v49 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v50 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23988/*"{xx"*/,
                  v49,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          v51 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          oldValue = System_String__Concat_44580072(
                       (System_String_o *)StringLiteral_23989/*"{xxx"*/,
                       v51,
                       (System_String_o *)StringLiteral_24008/*"}"*/,
                       0LL);
          v52 = System_Int32__ToString((int32_t)&v72 + 4, 0LL);
          v53 = System_String__Concat_44580072(
                  (System_String_o *)StringLiteral_23990/*"{xxxx"*/,
                  v52,
                  (System_String_o *)StringLiteral_24008/*"}"*/,
                  0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v54 = v53;
          LODWORD(v72) = 10000 * funcVals->m_Items[SHIDWORD(v72) + 1];
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !text )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(text, v38, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v57 = v53;
          LODWORD(v72) = 1000 * funcVals->m_Items[SHIDWORD(v72) + 1];
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !v57 )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(v57, v40, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v58 = v53;
          LODWORD(v72) = 100 * funcVals->m_Items[SHIDWORD(v72) + 1];
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !v58 )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(v58, v42, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v59 = v53;
          LODWORD(v72) = 10 * funcVals->m_Items[SHIDWORD(v72) + 1];
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !v59 )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(v59, v44, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v60 = v53;
          v55 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v72) + 32, 0LL);
          if ( !v60 )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(v60, v46, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v61 = v53;
          v62 = 1717986919LL * funcVals->m_Items[SHIDWORD(v72) + 1];
          LODWORD(v72) = (v62 >> 63) + (SHIDWORD(v62) >> 2);
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !v61 )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(v61, v48, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v63 = v53;
          v64 = 1374389535LL * funcVals->m_Items[SHIDWORD(v72) + 1];
          LODWORD(v72) = (v64 >> 63) + (SHIDWORD(v64) >> 5);
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !v63 )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(v63, v50, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
            goto LABEL_30;
          v65 = v53;
          v66 = 274877907LL * funcVals->m_Items[SHIDWORD(v72) + 1];
          LODWORD(v72) = (v66 >> 63) + (SHIDWORD(v66) >> 6);
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !v65 )
            goto LABEL_31;
          v53 = System_String__Replace_44585024(v65, oldValue, v55, 0LL);
          if ( HIDWORD(v72) >= funcVals->max_length )
          {
LABEL_30:
            v70 = sub_B5D6C8(v53);
            sub_B5D668(v70, 0LL);
          }
          v67 = v53;
          v68 = 1759218605LL * funcVals->m_Items[SHIDWORD(v72) + 1];
          LODWORD(v72) = (v68 >> 63) + (SHIDWORD(v68) >> 12);
          v55 = System_Int32__ToString((int32_t)&v72, 0LL);
          if ( !v67 )
LABEL_31:
            sub_B5D69C(v55, v56);
          text = System_String__Replace_44585024(v67, v54, v55, 0LL);
          ++HIDWORD(v72);
        }
        while ( SHIDWORD(v72) < (signed int)funcVals->max_length );
      }
      if ( (BYTE3(SkillDetailParamFormatResolver_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      }
      return SkillDetailParamFormatResolver__ApplyGivenValues(text, funcVals, 0LL);
    }
  }
  return text;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
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
  ClassBoardClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  int32_t id; // w20
  ClassBoardEffectListDialogSkillListComponent_c *v62; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v64; // w20
  System_Collections_Generic_List_ClassBoardClassEntity__o *v65; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v66; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v68; // x22
  float v69; // s8
  ClassBoardClassEntity_o *current; // x24
  UnityEngine_GameObject_o *Object; // x0
  __int64 v72; // x1
  UnityEngine_GameObject_o *v73; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  _BOOL8 v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x1
  bool IsOpen; // w0
  ClassBoardEffectListDialogSkillListComponent_c *v79; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  struct UIGrid_o *v84; // x8
  int v85; // w20
  UnityEngine_Object_o *v86; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v88; // s8
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v91; // x8
  UnityEngine_GameObject_o *v92; // x20
  UnityEngine_GameObject_o *v93; // x0
  bool v94; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9C2F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      (_DWORD)classBoardBaseEntity,
      isAll,
      supportClassBoard);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_ClassBoardClassEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_ClassBoardClassEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v45, v46, v47);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_3070/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v54, v55, v56);
    byte_42E9C2F = 1;
  }
  entitys = 0LL;
  memset(&v96, 0, sizeof(v96));
  if ( !classBoardBaseEntity
    || !supportClassBoard
    && isAll
    && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, (const MethodInfo *)classBoardBaseEntity) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_78;
  if ( !ClassBoardClassMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &entitys,
          classBoardBaseEntity->fields.id,
          v59) )
    return;
  id = classBoardBaseEntity->fields.id;
  v62 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v62 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v62->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_20;
  v64 = classBoardBaseEntity->fields.id;
  if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v62);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v64 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_20:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v60);
    v65 = entitys;
    v66 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v66,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ClassBoardClassEntity___ctor__);
    if ( !v65 )
      goto LABEL_78;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v65,
      (System_Comparison_T__o *)v66,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v68 = this->fields.subjectClassLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3070/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/,
                                                                  0LL);
    if ( !v68 )
      goto LABEL_78;
    UILabel__set_text(v68, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  }
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)entitys;
  v94 = isAll;
  if ( !entitys )
    goto LABEL_78;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v95,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v69 = 0.0;
  v96 = v95;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v96,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
    {
      v85 = 114;
      goto LABEL_55;
    }
    current = (ClassBoardClassEntity_o *)v96.fields.current;
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v73 = Object;
    if ( !Object )
      sub_B5D69C(0LL, v72);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        Object,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v75 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    if ( v75 )
      break;
    if ( !current )
      sub_B5D69C(v75, v76);
    if ( !Component_srcLineSprite )
      sub_B5D69C(v75, v76);
    ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_srcLineSprite, current->fields.classId, 0LL);
    if ( !supportClassBoard )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(current, v77);
LABEL_44:
      if ( IsOpen )
        goto LABEL_49;
      goto LABEL_45;
    }
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
            0LL) )
    {
      IsOpen = System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)supportClassBoard->fields.releasedClassIds,
                 current->fields.classId,
                 (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_44;
    }
LABEL_45:
    v79 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v79 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_srcLineSprite,
      v79->static_fields->DISABLED_COLOR,
      0LL);
LABEL_49:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v73, 0LL);
    if ( !classIconGrid )
      sub_B5D69C(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v73, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v73, 1, 0LL);
    v84 = this->fields.classIconGrid;
    if ( !v84 )
      sub_B5D69C(v82, v83);
    v69 = v69 + (float)(v84->fields.cellHeight * 0.5);
  }
  v85 = 229;
LABEL_55:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v96,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  if ( v85 != 229 )
  {
    v86 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
      v88 = -v69;
      GameObjectExtensions__AddLocalPositionX(gameObject, v88, 0LL);
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_78;
      v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__AddLocalPositionX(v89, v88, 0LL);
      if ( !v94
        && System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
             (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
             (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
      {
        Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
        if ( Master_WarQuestSelectionMaster )
        {
          v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
          v91 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          v92 = v90;
          if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
            v91 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPositionX(v92, v91->static_fields->classIconOneDispFixPosY, 0LL);
          Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
          if ( Master_WarQuestSelectionMaster )
          {
            v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
            GameObjectExtensions__AddLocalPositionX(
              v93,
              ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
              0LL);
            goto LABEL_70;
          }
        }
LABEL_78:
        sub_B5D69C(Master_WarQuestSelectionMaster, v58);
      }
    }
LABEL_70:
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_78;
    ((void (__fastcall *)(ClassBoardClassMaster_o *, void *))Master_WarQuestSelectionMaster->klass->vtable._8_OnListChangedImplementation.method)(
      Master_WarQuestSelectionMaster,
      Master_WarQuestSelectionMaster->klass[1]._1.image);
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetDisp(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetIcon(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  ClassBoardEffectListDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_B5D69C(0LL, sprite);
  ClassBoardEffectListDialog__SetIcon(dialog, sprite, name, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__SetList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t baseId,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  _BOOL4 v7; // w20
  int32_t v9; // w23
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
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  ClassBoardClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x4
  System_Collections_Generic_List_ClassBoardClassEntity__o *v90; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v91; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x24
  Il2CppObject *v94; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  bool v102; // w0
  int v103; // w24
  ClassBoardEffectListDialogSkillListComponent_c *v104; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v105; // x8
  int32_t v106; // w23
  int v107; // w25
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD **v110; // x23
  __int64 v111; // x22
  __int16 v112; // w8
  __int64 v113; // x22
  __int64 v114; // x22
  __int64 v115; // x22
  int32_t v116; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v127; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *recycler; // x23
  struct ScrollItemRecycler_o *v130; // x8
  System_Func_T1__T2__TResult__o *v131; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v132; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v135; // x22
  System_Action_T1__T2__o *v136; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v138; // x21
  float v139; // s9
  Il2CppObject *current; // x25
  UnityEngine_GameObject_o *Object; // x0
  __int64 v142; // x1
  UnityEngine_GameObject_o *v143; // x20
  srcLineSprite_o *v144; // x0
  __int64 v145; // x1
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v152; // x22
  __int64 v153; // x0
  __int64 v154; // x1
  const MethodInfo *v155; // x6
  float v156; // s8
  System_String_o *v157; // x0
  System_String_o *v158; // x22
  System_Collections_Generic_List_Enumerator_T__o v159; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v160; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+40h] [xbp-60h] BYREF
  int32_t baseIda; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v7 = isAll;
  v9 = baseId;
  baseIda = baseId;
  if ( (byte_42E9C33 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject__int___ctor__, baseId, dispType, isAll);
    sub_B5D5C4(&System_Action_GameObject__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Array_Empty_int___, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v17, v18, v19);
    sub_B5D5C4(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v20, v21, v22);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v26, v27, v28);
    sub_B5D5C4(&DataManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_System_Func_ClassBoardClassEntity__bool___ctor__, v44, v45, v46);
    sub_B5D5C4(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_System_Func_GameObject__int__float___ctor__, v50, v51, v52);
    sub_B5D5C4(&System_Func_GameObject__int__float__TypeInfo, v53, v54, v55);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___,
      v56,
      v57,
      v58);
    sub_B5D5C4(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v59, v60, v61);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v62,
      v63,
      v64);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v65,
      v66,
      v67);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__, v74, v75, v76);
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_3069/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_3068/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v83, v84, v85);
    byte_42E9C33 = 1;
  }
  entitys = 0LL;
  memset(&v160, 0, sizeof(v160));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_112;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entitys, v9, v88) )
  {
    v90 = entitys;
    v91 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v91 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    static_fields = v91->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 && !v91->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v91);
        static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      }
      v94 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v94,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardClassEntity__bool___ctor__);
      v95 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      v95->__9__31_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__31_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v95->__9__31_0,
        (System_Int32_array **)_9__31_0,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
    }
    v102 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v90,
             (System_Func_TSource__bool__o *)_9__31_0,
             (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v103 = v102;
  }
  else
  {
    v103 = 1;
  }
  v104 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v104 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v105 = v104->static_fields;
  if ( v9 == v105->EXTRA1_CLASS_BASE_ID )
    goto LABEL_26;
  v106 = baseIda;
  if ( (BYTE3(v104->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v104);
    v105 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v106 == v105->EXTRA2_CLASS_BASE_ID )
  {
LABEL_26:
    v107 = 1;
  }
  else
  {
    classInfoObject = (UnityEngine_Object_o *)this->fields.classInfoObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(classInfoObject, 0LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_112;
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                                    (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                    0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    }
    v107 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v110 = (_QWORD **)Method_System_Array_Empty_int___;
      v111 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v112 = *(_WORD *)(v111 + 306);
      if ( (v112 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v112 = *(_WORD *)(v111 + 306);
      }
      if ( (v112 & 0x400) != 0 )
      {
        v113 = *v110[6];
        if ( (*(_BYTE *)(v113 + 306) & 1) == 0 )
          sub_AF52C4(*v110[6]);
        if ( !*(_DWORD *)(v113 + 224) )
        {
          v114 = *v110[6];
          if ( (*(_BYTE *)(v114 + 306) & 1) == 0 )
            sub_AF52C4(*v110[6]);
          j_il2cpp_runtime_class_init_0(v114);
        }
      }
      v115 = *v110[6];
      if ( (*(_BYTE *)(v115 + 306) & 1) == 0 )
        sub_AF52C4(*v110[6]);
      squareIds = **(System_Int32_array ***)(v115 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v116 = baseIda;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v116, dispType, 0, squareIds, v89);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillDispDataList,
    (System_Int32_array **)OpenSkillList,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  if ( !this->fields.skillDispDataList )
LABEL_112:
    sub_B5D69C(Master_WarQuestSelectionMaster, v87);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3068/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/,
                                                                    0LL);
      if ( !allClosedLabel )
        goto LABEL_112;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      v138 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v138, 0LL, 0LL) )
      {
        Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_112;
        Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                                      (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                      0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_112;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
      }
    }
    else
    {
      if ( (v107 & v103) != 0 )
      {
        v157 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v158 = System_String__Concat_44577788((System_String_o *)StringLiteral_3069/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v157, 0LL);
      }
      else
      {
        v158 = (System_String_o *)StringLiteral_3068/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(v158, 0LL);
      if ( !allClosedLabel )
        goto LABEL_112;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    }
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.allClosedLabel;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_112;
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                  0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    if ( !v7 )
    {
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.scrollView;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_112;
      UIScrollView__UpdatePosition((UIScrollView_o *)Master_WarQuestSelectionMaster, 0LL);
    }
  }
  else
  {
    if ( !v7 )
      goto LABEL_61;
    p_skillDetailObjForAll = &this->fields.skillDetailObjForAll;
    skillDetailObjForAll = (UnityEngine_Object_o *)this->fields.skillDetailObjForAll;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(
                                                                  skillDetailObjForAll,
                                                                  0LL,
                                                                  0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
LABEL_61:
      p_skillDetailObjForAll = &this->fields.skillDetailObj;
    v127 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_112;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *p_skillDetailObjForAll,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    {
      recycler = (UnityEngine_Object_o *)this->fields.recycler;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(recycler, 0LL, 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( (v107 & v7) != 0 )
        {
          v130 = this->fields.recycler;
          if ( !v130 )
            goto LABEL_112;
          v130->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v131 = (System_Func_T1__T2__TResult__o *)sub_B5D694(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v131,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          (const MethodInfo_2C38D44 *)Method_System_Func_GameObject__int__float___ctor__);
        v132 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_B5D694(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v132, (System_Func_GameObject__int__float__o *)v131, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v135 = this->fields.recycler;
          v136 = (System_Action_T1__T2__o *)sub_B5D694(System_Action_GameObject__int__TypeInfo);
          System_Action_object__int____ctor(
            v136,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            (const MethodInfo_2598D54 *)Method_System_Action_GameObject__int___ctor__);
          if ( v135 )
          {
            ScrollItemRecycler__Init(
              v135,
              size,
              v127,
              (System_Action_GameObject__int__o *)v136,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v132,
              0LL);
            Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.recycler;
            if ( Master_WarQuestSelectionMaster )
            {
              ScrollItemRecycler__UpdateDisplay((ScrollItemRecycler_o *)Master_WarQuestSelectionMaster, 0LL);
              return;
            }
          }
        }
        goto LABEL_112;
      }
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)*p_skillDispDataList;
      if ( !*p_skillDispDataList )
        goto LABEL_112;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v159,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v139 = 0.0;
      v160 = v159;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v160,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v160.fields.current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v127, 0LL, 0LL, 0LL);
        v143 = Object;
        if ( !Object )
          sub_B5D69C(0LL, v142);
        v144 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 Object,
                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v152 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v144;
        if ( !v144 )
          sub_B5D69C(0LL, v145);
        *(_QWORD *)&v144->fields.miLineH = this;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v144->fields.miLineH,
          (System_Int32_array **)this,
          v146,
          v147,
          v148,
          v149,
          v150,
          v151);
        if ( !current )
          sub_B5D69C(v153, v154);
        v156 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                 v152,
                 (System_String_o *)current[1].klass,
                 (System_String_o *)current[1].monitor,
                 (int32_t)current[2].monitor,
                 HIDWORD(current[2].monitor),
                 0,
                 v155);
        GameObjectExtensions__SetParent_32436388(v143, this->fields.skillListParent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v143, one, 0LL);
        GameObjectExtensions__SetLocalPosition_32430604(v143, 0.0, -v139, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v143, 1, 0LL);
        v139 = v139 + v156;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v160,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    }
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v16; // x20
  const MethodInfo *v17; // x6
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v19; // x8

  v6 = this;
  if ( (byte_42E9C31 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___,
      (_DWORD)obj,
      index,
      method);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B5D5C4(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7,
                                                               v8,
                                                               v9);
    byte_42E9C31 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !this )
    goto LABEL_10;
  v16 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this;
  this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillListParent,
    (System_Int32_array **)v6,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  skillDispDataList = v6->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v19 = skillDispDataList->fields._items->m_Items[index];
  if ( !v19 )
LABEL_10:
    sub_B5D69C(this, obj);
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v16,
    v19->fields.name,
    v19->fields.detail,
    v19->fields.iconId,
    v19->fields.skillType,
    0,
    v17);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *this,
        FuncDispEntity_o *funcDispEntity,
        SkillLvEntity_o *skillLvEntity,
        ClassBoardCommandSpellEntity_o *commandSpellEntity,
        ClassBoardSquareEntity_o *classBoardSquareEntity,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.funcDispEntity = funcDispEntity;
  sub_B5D560(&this->fields);
  this->fields.skillLvEntity = skillLvEntity;
  sub_B5D560(&this->fields.skillLvEntity);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_B5D560(&this->fields.commandSpellEntity);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_B5D560(&this->fields.classBoardSquareEntity);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
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

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.name = name;
  sub_B5D560(&v14->fields);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_B5D560(v14);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E80 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5E80 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___ctor(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__33_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__33_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__31_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return !ClassBoardClassEntity__IsOpen(entity, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardSquareEntity_o *__fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0___GetOpenSkillList_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_B5D69C(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}