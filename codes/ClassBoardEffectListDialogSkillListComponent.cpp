// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  ClassBoardEffectListDialogSkillListComponent_c *v6; // x8
  int v7; // s0
  int v8; // s1
  int v9; // s2
  struct UnityEngine_Color_o v10; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_41894DB & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_41894DB = 1;
  }
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->DEFAULT_SKILL_LV = 1;
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->EXTRA1_CLASS_BASE_ID = 8;
  v6 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->EXTRA2_CLASS_BASE_ID = 9;
  v6->static_fields->classIconOneDispFixPosY = -1.0;
  v7 = 1050319515;
  v10 = (struct UnityEngine_Color_o)0LL;
  v8 = 1050319515;
  v9 = 1050319515;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->DISABLED_COLOR = v10;
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
    sub_B2C434(this, a);
  }
  v7 = 0;
  v6 = 0;
  return v7 - v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v18; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v19; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  struct System_Int32_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41894D4 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Union_int___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_41894D4 = 1;
  }
  memset(&i, 0, sizeof(i));
  v18 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  for ( i = v35;
        ;
        System_Collections_Generic_List_int___Add(
          v18,
          HIDWORD(i.fields.current[1].klass),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__) )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !i.fields.current )
      sub_B2C434(v21, v22);
    if ( !v18 )
      sub_B2C434(v21, v22);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v19 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v19 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v19->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( static_fields->EXTRA2_CLASS_BASE_ID == id )
    {
      v26 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v26->static_fields->Extra2SortOrderClassIds;
      goto LABEL_25;
    }
    if ( v18 )
    {
      v28 = System_Collections_Generic_List_int___ToArray(
              v18,
              (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_28;
    }
LABEL_31:
    sub_B2C434(v19, v20);
  }
  v24 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v24->static_fields->Extra1SortOrderClassIds;
LABEL_25:
  v27 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_1A9E190 *)Method_System_Linq_Enumerable_Union_int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_28:
  this->fields.arrayForSort = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.arrayForSort,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v10; // x8

  v6 = this;
  if ( (byte_41894D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B2C35C(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_41894D6 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  skillDispDataList = v6->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v10 = skillDispDataList->fields._items->m_Items[index];
  if ( !v10 || !this )
LABEL_10:
    sub_B2C434(this, obj);
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
           v10->fields.detail,
           v8);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
        int32_t baseId,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        System_Int32_array *openedSquareIdArray,
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
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v28; // x22
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v32; // x3
  ClassBoardSquareEntity_array *v33; // x21

  if ( (byte_41894D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v13);
    sub_B2C35C(&Method_System_Func_int__ClassBoardSquareEntity___ctor__, v14);
    sub_B2C35C(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v15);
    sub_B2C35C(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__, v16);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo, v17);
    byte_41894D8 = 1;
  }
  v18 = sub_B2C42C(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B2C434(v19, v20);
  *(_DWORD *)(v18 + 24) = baseId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v18 + 16) = Master_WarQuestSelectionMaster;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), Master_WarQuestSelectionMaster, v22, v23, v24, v25, v26, v27);
  if ( openedSquareIdArray )
  {
    v28 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v28,
      (Il2CppObject *)v18,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__,
      (const MethodInfo_270D828 *)Method_System_Func_int__ClassBoardSquareEntity___ctor__);
    v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v28,
                                                           (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v30 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v29,
            (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                                (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v18 + 24), 0LL);
  }
  v33 = OpenedSquareEntityArray;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v33,
           dispType,
           ignoreTurnOrCountPassive,
           v32);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  int32_t v4; // w21
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
  __int64 v57; // x1
  __int64 v58; // x1
  System_Xml_XmlQualifiedName_o *IsContainsTurnOrCountBuff; // x0
  __int64 v60; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v62; // x26
  signed int max_length; // w8
  int v64; // w25
  int v65; // w24
  unsigned int v66; // w27
  ClassBoardSquareEntity_o *v67; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x19
  int32_t skillType; // w8
  System_Xml_XmlQualifiedName_o *v70; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v73; // x21
  SkillLvEntity_o *v74; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x19
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v76; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x22
  _BOOL8 v78; // x0
  __int64 v79; // x1
  Il2CppObject *current; // x20
  System_String_o *v81; // x0
  __int64 v82; // x1
  System_Xml_XmlQualifiedName_o *v83; // x26
  _BOOL8 v84; // x0
  __int64 v85; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v87; // x0
  FuncDispEntity_o *v88; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v90; // x21
  __int64 v91; // x0
  __int64 v92; // x1
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v95; // w26
  int32_t v96; // w24
  int32_t v97; // w25
  int32_t v98; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v99; // x20
  __int64 v100; // x1
  int v101; // w8
  System_String_o *v102; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t v107; // w24
  System_String_o *v108; // x25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v109; // x20
  int v110; // w23
  _BOOL8 v111; // x0
  __int64 v112; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x26
  __int64 v116; // x8
  __int64 v117; // x1
  __int64 v118; // x8
  __int64 v119; // x25
  int32_t v120; // w24
  int32_t v121; // w8
  Il2CppObject *v122; // x19
  __int64 v123; // x0
  __int64 v124; // x1
  _DWORD *v125; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v127; // x8
  __int64 v128; // x10
  __int64 v129; // x11
  bool v130; // cc
  _DWORD *v131; // x8
  int v132; // w26
  __int64 v133; // x0
  __int64 v134; // x1
  const MethodInfo *v135; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v136; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v138; // x19
  System_String_o *v139; // x0
  __int64 v140; // x1
  System_String_o *v141; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v142; // x8
  _DWORD *v143; // x9
  int32_t v144; // w25
  _DWORD *v145; // x9
  int32_t v146; // w26
  _DWORD *v147; // x8
  int32_t v148; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v149; // x22
  __int64 v150; // x1
  __int64 v151; // x0
  __int64 v152; // x0
  int v153; // w20
  ClassBoardEffectListDialogSkillListComponent___c_c *v154; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_0; // x20
  Il2CppObject *v157; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v158; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v165; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v166; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v167; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v168; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_1; // x20
  Il2CppObject *v170; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v171; // x0
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v178; // x0
  __int64 v180; // x0
  ClassBoardCommandSpellMaster_o *v182; // [xsp+10h] [xbp-180h]
  int v183; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v184; // [xsp+20h] [xbp-170h]
  int32_t v185; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v186; // [xsp+30h] [xbp-160h]
  int v187; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v188; // [xsp+40h] [xbp-150h]
  int v189; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v190; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v191; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v192; // [xsp+60h] [xbp-130h]
  System_String_o *v193; // [xsp+60h] [xbp-130h]
  _WORD v194[26]; // [xsp+68h] [xbp-128h] BYREF
  int v195; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v196; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v197; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v198; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v199; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v200; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v201; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v203; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_41894D9 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_FuncDispMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v17);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v18);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v22);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v23);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v24);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v25);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v30);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v31);
    sub_B2C35C(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__, v32);
    sub_B2C35C(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v33);
    sub_B2C35C(&int___TypeInfo, v34);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v35);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v37);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v40);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v42);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v43);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v44);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v45);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v46);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v47);
    sub_B2C35C(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v48);
    sub_B2C35C(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v49);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v50);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v52);
    sub_B2C35C(&Method_System_String_Join_int___, v53);
    sub_B2C35C(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__, v54);
    sub_B2C35C(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__, v55);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v56);
    sub_B2C35C(&StringLiteral_699/*","*/, v57);
    sub_B2C35C(&StringLiteral_1/*""*/, v58);
    byte_41894D9 = 1;
  }
  v203 = 0LL;
  entity = 0LL;
  v201 = 0LL;
  entitys = 0LL;
  v199 = 0LL;
  v197 = 0LL;
  memset(&v200, 0, sizeof(v200));
  memset(&v198, 0, sizeof(v198));
  memset(&v196, 0, sizeof(v196));
  v195 = 0;
  v191 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v191,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v191;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  v188 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v62 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v192 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FuncDispMaster___);
  v190 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v190,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v64 = 0;
  v186 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v65 = 0;
    v66 = 0;
    v189 = 0;
    v185 = v4;
    v184 = openedSquareArray;
    v182 = v62;
    while ( 1 )
    {
      if ( v66 >= max_length )
      {
        v180 = sub_B2C460(IsContainsTurnOrCountBuff);
        sub_B2C400(v180, 0LL);
      }
      v67 = openedSquareArray->m_Items[v66];
      v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v68,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v68;
      if ( !v67 )
        break;
      skillType = v67->fields.skillType;
      if ( skillType == 1 )
      {
        if ( v4 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                         Master_WarQuestSelectionMaster,
                                                                         &entity,
                                                                         v67->fields.targetId,
                                                                         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
          {
            IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v188;
            if ( !v188 )
              break;
            IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                                           v188,
                                                                           &v203,
                                                                           v67->fields.targetId,
                                                                           v67->fields.upSkillLv,
                                                                           0LL);
            if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_174;
              IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v203;
              if ( !v203 )
                break;
              IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(
                                                                             v203,
                                                                             0LL);
              if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) == 0 )
              {
LABEL_174:
                if ( !v203 )
                  break;
                IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v192;
                if ( !v192 )
                  break;
                IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                                               v192,
                                                                               &v201,
                                                                               v203->fields.funcId,
                                                                               0LL);
                if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
                {
                  if ( !v203 )
                    break;
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                                 (System_String_o *)StringLiteral_699/*","*/,
                                                                                 (System_Collections_Generic_IEnumerable_T__o *)v203->fields.funcId,
                                                                                 (const MethodInfo_209C7C0 *)Method_System_String_Join_int___);
                  if ( !v190 )
                    break;
                  v70 = IsContainsTurnOrCountBuff;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v190,
                          IsContainsTurnOrCountBuff,
                          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v71,
                      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v190,
                      v70,
                      (System_Xml_Schema_XmlSchemaObject_o *)v71,
                      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v190,
                           (System_Type_o *)v70,
                           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v73 = v201;
                  v74 = v203;
                  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v76 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v76, v73, v74, 0LL, v67, 0LL);
                  if ( !v75 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v75,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v186;
                  v4 = v185;
                  openedSquareArray = v184;
                }
                else
                {
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v187 = v64;
                  v183 = v65;
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName(
                                                                                 (SkillEntity_o *)entity,
                                                                                 0LL);
                  if ( !entity )
                    break;
                  v102 = (System_String_o *)IsContainsTurnOrCountBuff;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v67->fields.priority;
                  id = v67->fields.id;
                  iconId = v67->fields.iconId;
                  v107 = v67->fields.skillType;
                  v108 = EffectExplanation;
                  v109 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v109,
                    v102,
                    v108,
                    id,
                    priority,
                    iconId,
                    v107,
                    0LL);
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v191;
                  if ( !v191 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v191,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v109,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v186;
                  v4 = v185;
                  openedSquareArray = v184;
                  v65 = v183;
                  v64 = v187;
                }
              }
            }
          }
        }
      }
      else if ( v4 != 1 && skillType == 2 )
      {
        if ( !v62 )
          break;
        IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                                       v62,
                                                                       &entitys,
                                                                       v67->fields.targetId,
                                                                       v67->fields.upSkillLv,
                                                                       0LL);
        if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
        {
          v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v77,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
          IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)entitys;
          if ( !entitys )
            break;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v194,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
          v200 = *(System_Collections_Generic_List_Enumerator_T__o *)v194;
          while ( 1 )
          {
            v78 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v200,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
            if ( !v78 )
              break;
            current = v200.fields.current;
            if ( !v200.fields.current )
              sub_B2C434(v78, v79);
            if ( !v192 )
              sub_B2C434(0LL, v79);
            if ( FuncDispMaster__IsContainFuncIds(v192, &v199, (System_Int32_array *)v200.fields.current[3].klass, 0LL) )
            {
              v81 = System_String__Join_int_(
                      (System_String_o *)StringLiteral_699/*","*/,
                      (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                      (const MethodInfo_209C7C0 *)Method_System_String_Join_int___);
              if ( !v77 )
                sub_B2C434(v81, v82);
              v83 = (System_Xml_XmlQualifiedName_o *)v81;
              v84 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v77,
                      (WarBoardManager_TaskList_o *)v81,
                      (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
              if ( !v84 )
              {
                if ( !v190 )
                  sub_B2C434(v84, v85);
                if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                        v190,
                        v83,
                        (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v86,
                    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                    v190,
                    v83,
                    (System_Xml_Schema_XmlSchemaObject_o *)v86,
                    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v87 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v190,
                        (System_Type_o *)v83,
                        (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v88 = v199;
                v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v87;
                v90 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                  v90,
                  v88,
                  0LL,
                  (ClassBoardCommandSpellEntity_o *)current,
                  v67,
                  0LL);
                if ( !v89 )
                  sub_B2C434(v91, v92);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v89,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v77,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            else
            {
              klass = (System_String_o *)current[2].klass;
              monitor = (System_String_o *)current[2].monitor;
              v95 = v67->fields.priority;
              v97 = v67->fields.id;
              v96 = v67->fields.iconId;
              v98 = v67->fields.skillType;
              v99 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
              ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                v99,
                klass,
                monitor,
                v97,
                v95,
                v96,
                v98,
                0LL);
              if ( !v191 )
                sub_B2C434(0LL, v100);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v191,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
            }
          }
          *(_DWORD *)&v194[2 * v189 + 20] = 569;
          v65 = ++v195;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v200,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
          Master_WarQuestSelectionMaster = v186;
          v4 = v185;
          openedSquareArray = v184;
          v62 = v182;
          v64 = v65;
          if ( v65 )
          {
            v101 = v65 - 1;
            v189 = v65;
            if ( *(_DWORD *)&v194[2 * v65 + 18] == 569 )
            {
              v64 = --v65;
              v195 = v101;
              v189 = v101;
            }
          }
          else
          {
            v189 = 0;
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v66 >= max_length )
        goto LABEL_65;
    }
LABEL_157:
    sub_B2C434(IsContainsTurnOrCountBuff, v60);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v190;
  if ( !v190 )
    goto LABEL_157;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v194,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v190,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v198 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v194;
  v110 = v64;
  while ( 1 )
  {
    v111 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v198,
             (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v111 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v198.fields.current.fields.value;
    if ( !v198.fields.current.fields.value )
      sub_B2C434(v111, v112);
    if ( SLODWORD(v198.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v198.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B2C434(v111, v112);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v116 = data[3];
        if ( !v116 )
          sub_B2C434(v111, v112);
        if ( !v186 )
          sub_B2C434(0LL, v112);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v186,
               &v197,
               *(_DWORD *)(v116 + 16),
               (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v197 )
            sub_B2C434(0LL, v117);
          Name = SkillEntity__getName((SkillEntity_o *)v197, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v198.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v118 = data[4];
        if ( !v118 )
          sub_B2C434(v111, v112);
        Name = *(System_String_o **)(v118 + 32);
      }
      v119 = sub_B2C374(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v194,
        value,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v120 = 0;
      v193 = Name;
      v196 = *(System_Collections_Generic_List_Enumerator_T__o *)v194;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v196,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v194[2 * v110 + 20] = 947;
        v132 = v195 + 1;
        v195 = v132;
        v110 = v132;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v196,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v132 && *(_DWORD *)&v194[2 * v132 + 18] == 947 )
        {
          v110 = v132 - 1;
          v195 = v132 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v136 = value->fields._items->m_Items[0];
        if ( !v136 )
          sub_B2C434(v133, v134);
        buff = v136->fields.buff;
        if ( !buff )
          sub_B2C434(v133, v134);
        v138 = *(System_String_o **)&buff->fields.isUse;
        if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        }
        v139 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 v138,
                 (System_Int32_array *)v119,
                 v135);
        v141 = v139;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v142 = value->fields._items->m_Items[0];
        if ( !v142 )
          sub_B2C434(v139, v140);
        v143 = v142[1].monitor;
        if ( !v143 )
          sub_B2C434(v139, v140);
        v144 = v143[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v145 = v142[1].monitor;
        if ( !v145 )
          sub_B2C434(v139, v140);
        v146 = v145[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v147 = v142[1].monitor;
        if ( !v147 )
          sub_B2C434(v139, v140);
        v148 = v147[14];
        v149 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v149, v193, v141, v144, v120, v146, v148, 0LL);
        if ( !v191 )
          sub_B2C434(0LL, v150);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v191,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v149,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v122 = v196.fields.current;
      v123 = sub_B2C374(int___TypeInfo, 0LL);
      if ( !v122 )
        sub_B2C434(v123, v124);
      v125 = v122[1].monitor;
      if ( v125 )
      {
        if ( !v188 )
          sub_B2C434(v123, v124);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v188,
                                                               v125[4],
                                                               v125[5],
                                                               0LL);
LABEL_95:
        v127 = (__int64)DispValFromSkill;
      }
      else
      {
        v127 = v123;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v122[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_95;
        }
      }
      if ( !v119 )
        sub_B2C434(DispValFromSkill, v124);
      v128 = *(_QWORD *)(v119 + 24);
      if ( v128 )
      {
        if ( (int)v128 >= 1 )
        {
          v129 = 8LL;
          do
          {
            if ( v129 - 8 >= (unsigned __int64)(unsigned int)v128 )
            {
              v151 = sub_B2C460(DispValFromSkill);
              sub_B2C400(v151, 0LL);
            }
            if ( !v127 )
              sub_B2C434(DispValFromSkill, v124);
            if ( v129 - 8 >= (unsigned __int64)*(unsigned int *)(v127 + 24) )
            {
              v152 = sub_B2C460(DispValFromSkill);
              sub_B2C400(v152, 0LL);
            }
            v130 = v129 - 7 < (int)v128;
            *(_DWORD *)(v119 + 4 * v129) += *(_DWORD *)(v127 + 4 * v129);
            ++v129;
          }
          while ( v130 );
        }
      }
      else
      {
        v119 = v127;
      }
      v131 = v122[2].monitor;
      if ( !v131 )
        sub_B2C434(DispValFromSkill, v124);
      v121 = v131[20];
      if ( v121 > v120 )
        v120 = v121;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v194[2 * v110 + 20] = 1073;
  v153 = ++v195;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v198,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v153 && *(_DWORD *)&v194[2 * v153 + 18] == 1073 )
    v195 = v153 - 1;
  v154 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v154 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  static_fields = v154->static_fields;
  _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v154->vtable._0_Equals.methodPtr) & 4) != 0 && !v154->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v154);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v157 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_0,
      v157,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v158 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v158->__9__33_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v158->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164);
  }
  v165 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v191,
           (System_Func_TSource__TKey__o *)_9__33_0,
           (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v166 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v167 = v165;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v166 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  v168 = v166->static_fields;
  _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v168->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( (BYTE3(v166->vtable._0_Equals.methodPtr) & 4) != 0 && !v166->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v166);
      v168 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v170 = (Il2CppObject *)v168->__9;
    _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_1,
      v170,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v171 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v171->__9__33_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v171->__9__33_1,
      (System_Int32_array **)_9__33_1,
      v172,
      v173,
      v174,
      v175,
      v176,
      v177);
  }
  v178 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v167,
                                                                (System_Func_TSource__TKey__o *)_9__33_1,
                                                                (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v178, (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
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
  sub_B2C2F8(
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
    sub_B2C434(gameObject, v10);
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
  __int64 v15; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x28
  System_String_o *v20; // x0
  System_String_o *v21; // x27
  System_String_o *v22; // x0
  System_String_o *v23; // x26
  System_String_o *v24; // x0
  System_String_o *v25; // x25
  System_String_o *v26; // x0
  System_String_o *v27; // x24
  System_String_o *v28; // x0
  System_String_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x22
  System_String_o *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x20
  System_String_o *v37; // x20
  System_String_o *v38; // x20
  System_String_o *v39; // x20
  System_String_o *v40; // x20
  unsigned __int64 v41; // x8
  System_String_o *v42; // x20
  unsigned __int64 v43; // x8
  System_String_o *v44; // x20
  unsigned __int64 v45; // x8
  System_String_o *v46; // x20
  unsigned __int64 v47; // x8
  __int64 v49; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v51; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41894DA & 1) == 0 )
  {
    sub_B2C35C(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    sub_B2C35C(&StringLiteral_23675/*"{x"*/, v5);
    sub_B2C35C(&StringLiteral_23471/*"{"*/, v6);
    sub_B2C35C(&StringLiteral_23406/*"xx}"*/, v7);
    sub_B2C35C(&StringLiteral_23405/*"xxx}"*/, v8);
    sub_B2C35C(&StringLiteral_23696/*"}"*/, v9);
    sub_B2C35C(&StringLiteral_23678/*"{xxxx"*/, v10);
    sub_B2C35C(&StringLiteral_23676/*"{xx"*/, v11);
    sub_B2C35C(&StringLiteral_23404/*"xxxx}"*/, v12);
    sub_B2C35C(&StringLiteral_23407/*"x}"*/, v13);
    sub_B2C35C(&StringLiteral_23677/*"{xxx"*/, v14);
    byte_41894DA = 1;
  }
  v51 = 0LL;
  if ( funcVals )
  {
    v15 = *(_QWORD *)&funcVals->max_length;
    if ( v15 )
    {
      HIDWORD(v51) = 0;
      if ( (int)v15 >= 1 )
      {
        do
        {
          v16 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v17 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v16,
                  (System_String_o *)StringLiteral_23404/*"xxxx}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v19 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v18,
                  (System_String_o *)StringLiteral_23405/*"xxx}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v21 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v20,
                  (System_String_o *)StringLiteral_23406/*"xx}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v23 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v22,
                  (System_String_o *)StringLiteral_23407/*"x}"*/,
                  0LL);
          v24 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v25 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v24,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v27 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23675/*"{x"*/,
                  v26,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v29 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23676/*"{xx"*/,
                  v28,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          oldValue = System_String__Concat_44307816(
                       (System_String_o *)StringLiteral_23677/*"{xxx"*/,
                       v30,
                       (System_String_o *)StringLiteral_23696/*"}"*/,
                       0LL);
          v31 = System_Int32__ToString((int32_t)&v51 + 4, 0LL);
          v32 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23678/*"{xxxx"*/,
                  v31,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v33 = v32;
          LODWORD(v51) = 10000 * funcVals->m_Items[SHIDWORD(v51) + 1];
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !text )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(text, v17, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v36 = v32;
          LODWORD(v51) = 1000 * funcVals->m_Items[SHIDWORD(v51) + 1];
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v36 )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(v36, v19, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v37 = v32;
          LODWORD(v51) = 100 * funcVals->m_Items[SHIDWORD(v51) + 1];
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v37 )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(v37, v21, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v38 = v32;
          LODWORD(v51) = 10 * funcVals->m_Items[SHIDWORD(v51) + 1];
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v38 )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(v38, v23, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v39 = v32;
          v34 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v51) + 32, 0LL);
          if ( !v39 )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(v39, v25, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v40 = v32;
          v41 = 1717986919LL * funcVals->m_Items[SHIDWORD(v51) + 1];
          LODWORD(v51) = (v41 >> 63) + (SHIDWORD(v41) >> 2);
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v40 )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(v40, v27, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v42 = v32;
          v43 = 1374389535LL * funcVals->m_Items[SHIDWORD(v51) + 1];
          LODWORD(v51) = (v43 >> 63) + (SHIDWORD(v43) >> 5);
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v42 )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(v42, v29, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
            goto LABEL_30;
          v44 = v32;
          v45 = 274877907LL * funcVals->m_Items[SHIDWORD(v51) + 1];
          LODWORD(v51) = (v45 >> 63) + (SHIDWORD(v45) >> 6);
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v44 )
            goto LABEL_31;
          v32 = System_String__Replace_44312768(v44, oldValue, v34, 0LL);
          if ( HIDWORD(v51) >= funcVals->max_length )
          {
LABEL_30:
            v49 = sub_B2C460(v32);
            sub_B2C400(v49, 0LL);
          }
          v46 = v32;
          v47 = 1759218605LL * funcVals->m_Items[SHIDWORD(v51) + 1];
          LODWORD(v51) = (v47 >> 63) + (SHIDWORD(v47) >> 12);
          v34 = System_Int32__ToString((int32_t)&v51, 0LL);
          if ( !v46 )
LABEL_31:
            sub_B2C434(v34, v35);
          text = System_String__Replace_44312768(v46, v33, v34, 0LL);
          ++HIDWORD(v51);
        }
        while ( SHIDWORD(v51) < (signed int)funcVals->max_length );
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
        bool isSupport,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  ClassBoardClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v28; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v30; // w23
  System_Collections_Generic_List_ClassBoardClassEntity__o *v31; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v32; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v34; // x22
  float v35; // s8
  ClassBoardClassEntity_o *current; // x24
  UnityEngine_GameObject_o *Object; // x0
  __int64 v38; // x1
  UnityEngine_GameObject_o *v39; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  _BOOL8 v41; // x0
  __int64 v42; // x1
  ClassBoardEffectListDialogSkillListComponent_c *v43; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  struct UIGrid_o *v48; // x8
  int v49; // w21
  UnityEngine_Object_o *v50; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v52; // s8
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x20
  UnityEngine_GameObject_o *v57; // x0
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41894D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, classBoardBaseEntity);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_B2C35C(&Method_System_Comparison_ClassBoardClassEntity___ctor__, v10);
    sub_B2C35C(&System_Comparison_ClassBoardClassEntity__TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v17);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v20);
    sub_B2C35C(&LocalizationManager_TypeInfo, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_3011/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v23);
    byte_41894D3 = 1;
  }
  entitys = 0LL;
  memset(&v59, 0, sizeof(v59));
  if ( !classBoardBaseEntity || isAll && !isSupport && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_77;
  if ( !ClassBoardClassMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &entitys,
          classBoardBaseEntity->fields.id,
          0LL) )
    return;
  id = classBoardBaseEntity->fields.id;
  v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v28->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_20;
  v30 = classBoardBaseEntity->fields.id;
  if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v30 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_20:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v26);
    v31 = entitys;
    v32 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v32,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ClassBoardClassEntity___ctor__);
    if ( !v31 )
      goto LABEL_77;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v31,
      (System_Comparison_T__o *)v32,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v34 = this->fields.subjectClassLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3011/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/,
                                                                  0LL);
    if ( !v34 )
      goto LABEL_77;
    UILabel__set_text(v34, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  }
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)entitys;
  if ( !entitys )
    goto LABEL_77;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v35 = 0.0;
  v59 = v58;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
    {
      v49 = 81;
      goto LABEL_54;
    }
    current = (ClassBoardClassEntity_o *)v59.fields.current;
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v39 = Object;
    if ( !Object )
      sub_B2C434(0LL, v38);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        Object,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v41 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    if ( v41 )
      break;
    if ( !current )
      sub_B2C434(v41, v42);
    if ( !Component_srcLineSprite )
      sub_B2C434(v41, v42);
    ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_srcLineSprite, current->fields.classId, 0LL);
    if ( isSupport )
    {
      if ( !ClassBoardClassEntity__IsForceFalse(current, 0LL) )
        goto LABEL_48;
    }
    else if ( ClassBoardClassEntity__IsOpen(current, 0LL) )
    {
      goto LABEL_48;
    }
    v43 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v43 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_srcLineSprite,
      v43->static_fields->DISABLED_COLOR,
      0LL);
LABEL_48:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v39, 0LL);
    if ( !classIconGrid )
      sub_B2C434(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v39, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v39, 1, 0LL);
    v48 = this->fields.classIconGrid;
    if ( !v48 )
      sub_B2C434(v46, v47);
    v35 = v35 + (float)(v48->fields.cellHeight * 0.5);
  }
  v49 = 196;
LABEL_54:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  if ( v49 != 196 )
  {
    v50 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
      v52 = -v35;
      GameObjectExtensions__AddLocalPositionX(gameObject, v52, 0LL);
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__AddLocalPositionX(v53, v52, 0LL);
      if ( !isAll
        && System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
             (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
             (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
      {
        Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
        if ( Master_WarQuestSelectionMaster )
        {
          v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
          v55 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          v56 = v54;
          if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
            v55 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPositionX(v56, v55->static_fields->classIconOneDispFixPosY, 0LL);
          Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
          if ( Master_WarQuestSelectionMaster )
          {
            v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
            GameObjectExtensions__AddLocalPositionX(
              v57,
              ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
              0LL);
            goto LABEL_69;
          }
        }
LABEL_77:
        sub_B2C434(Master_WarQuestSelectionMaster, v25);
      }
    }
LABEL_69:
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
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
    sub_B2C434(0LL, v5);
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
    sub_B2C434(0LL, sprite);
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
  ClassBoardClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x4
  System_Collections_Generic_List_ClassBoardClassEntity__o *v39; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v40; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x24
  Il2CppObject *v43; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  bool v51; // w0
  int v52; // w24
  ClassBoardEffectListDialogSkillListComponent_c *v53; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v54; // x8
  int32_t v55; // w23
  int v56; // w25
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD **v59; // x23
  __int64 v60; // x22
  __int16 v61; // w8
  __int64 v62; // x22
  __int64 v63; // x22
  __int64 v64; // x22
  int32_t v65; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v76; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *recycler; // x23
  struct ScrollItemRecycler_o *v79; // x8
  System_Func_T1__T2__TResult__o *v80; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v81; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v84; // x22
  System_Action_T1__T2__o *v85; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v87; // x21
  float v88; // s9
  Il2CppObject *current; // x25
  UnityEngine_GameObject_o *Object; // x0
  __int64 v91; // x1
  UnityEngine_GameObject_o *v92; // x20
  srcLineSprite_o *v93; // x0
  __int64 v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v101; // x22
  __int64 v102; // x0
  __int64 v103; // x1
  const MethodInfo *v104; // x6
  float v105; // s8
  System_String_o *v106; // x0
  System_String_o *v107; // x22
  System_Collections_Generic_List_Enumerator_T__o v108; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+40h] [xbp-60h] BYREF
  int32_t baseIda; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v7 = isAll;
  v9 = baseId;
  baseIda = baseId;
  if ( (byte_41894D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject__int___ctor__, *(_QWORD *)&baseId);
    sub_B2C35C(&System_Action_GameObject__int__TypeInfo, v11);
    sub_B2C35C(&Method_System_Array_Empty_int___, v12);
    sub_B2C35C(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v13);
    sub_B2C35C(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v14);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v16);
    sub_B2C35C(&DataManager_TypeInfo, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v19);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v20);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v21);
    sub_B2C35C(&Method_System_Func_ClassBoardClassEntity__bool___ctor__, v22);
    sub_B2C35C(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v23);
    sub_B2C35C(&Method_System_Func_GameObject__int__float___ctor__, v24);
    sub_B2C35C(&System_Func_GameObject__int__float__TypeInfo, v25);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v26);
    sub_B2C35C(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v27);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v28);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v29);
    sub_B2C35C(&LocalizationManager_TypeInfo, v30);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v31);
    sub_B2C35C(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__, v32);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v33);
    sub_B2C35C(&StringLiteral_3010/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v34);
    sub_B2C35C(&StringLiteral_3009/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v35);
    byte_41894D7 = 1;
  }
  entitys = 0LL;
  memset(&v109, 0, sizeof(v109));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_112;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entitys, v9, 0LL) )
  {
    v39 = entitys;
    v40 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v40 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    static_fields = v40->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v43,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardClassEntity__bool___ctor__);
      v44 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      v44->__9__31_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__31_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v44->__9__31_0,
        (System_Int32_array **)_9__31_0,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    v51 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v39,
            (System_Func_TSource__bool__o *)_9__31_0,
            (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v52 = v51;
  }
  else
  {
    v52 = 1;
  }
  v53 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v53 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v54 = v53->static_fields;
  if ( v9 == v54->EXTRA1_CLASS_BASE_ID )
    goto LABEL_26;
  v55 = baseIda;
  if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v53);
    v54 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v55 == v54->EXTRA2_CLASS_BASE_ID )
  {
LABEL_26:
    v56 = 1;
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
    v56 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v59 = (_QWORD **)Method_System_Array_Empty_int___;
      v60 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v61 = *(_WORD *)(v60 + 306);
      if ( (v61 & 1) == 0 )
      {
        sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v61 = *(_WORD *)(v60 + 306);
      }
      if ( (v61 & 0x400) != 0 )
      {
        v62 = *v59[6];
        if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
          sub_AC505C(*v59[6]);
        if ( !*(_DWORD *)(v62 + 224) )
        {
          v63 = *v59[6];
          if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
            sub_AC505C(*v59[6]);
          j_il2cpp_runtime_class_init_0(v63);
        }
      }
      v64 = *v59[6];
      if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
        sub_AC505C(*v59[6]);
      squareIds = **(System_Int32_array ***)(v64 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v65 = baseIda;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v65, dispType, 0, squareIds, v38);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillDispDataList,
    (System_Int32_array **)OpenSkillList,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( !this->fields.skillDispDataList )
LABEL_112:
    sub_B2C434(Master_WarQuestSelectionMaster, v37);
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
                                                                    (System_String_o *)StringLiteral_3009/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/,
                                                                    0LL);
      if ( !allClosedLabel )
        goto LABEL_112;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      v87 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
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
      if ( (v56 & v52) != 0 )
      {
        v106 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v107 = System_String__Concat_44305532((System_String_o *)StringLiteral_3010/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v106, 0LL);
      }
      else
      {
        v107 = (System_String_o *)StringLiteral_3009/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(v107, 0LL);
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
    v76 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_112;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *p_skillDetailObjForAll,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
        if ( (v56 & v7) != 0 )
        {
          v79 = this->fields.recycler;
          if ( !v79 )
            goto LABEL_112;
          v79->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v80 = (System_Func_T1__T2__TResult__o *)sub_B2C42C(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v80,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          (const MethodInfo_271BC78 *)Method_System_Func_GameObject__int__float___ctor__);
        v81 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_B2C42C(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v81, (System_Func_GameObject__int__float__o *)v80, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v84 = this->fields.recycler;
          v85 = (System_Action_T1__T2__o *)sub_B2C42C(System_Action_GameObject__int__TypeInfo);
          System_Action_object__int____ctor(
            v85,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            (const MethodInfo_24C950C *)Method_System_Action_GameObject__int___ctor__);
          if ( v84 )
          {
            ScrollItemRecycler__Init(
              v84,
              size,
              v76,
              (System_Action_GameObject__int__o *)v85,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v81,
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
        &v108,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v88 = 0.0;
      v109 = v108;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v109,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v109.fields.current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v76, 0LL, 0LL, 0LL);
        v92 = Object;
        if ( !Object )
          sub_B2C434(0LL, v91);
        v93 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                Object,
                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v101 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v93;
        if ( !v93 )
          sub_B2C434(0LL, v94);
        *(_QWORD *)&v93->fields.miLineH = this;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v93->fields.miLineH,
          (System_Int32_array **)this,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100);
        if ( !current )
          sub_B2C434(v102, v103);
        v105 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                 v101,
                 (System_String_o *)current[1].klass,
                 (System_String_o *)current[1].monitor,
                 (int32_t)current[2].monitor,
                 HIDWORD(current[2].monitor),
                 0,
                 v104);
        GameObjectExtensions__SetParent_31331816(v92, this->fields.skillListParent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v92, one, 0LL);
        GameObjectExtensions__SetLocalPosition_31326032(v92, 0.0, -v88, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v92, 1, 0LL);
        v88 = v88 + v105;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v109,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v14; // x20
  const MethodInfo *v15; // x6
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v17; // x8

  v6 = this;
  if ( (byte_41894D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B2C35C(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_41894D5 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !this )
    goto LABEL_10;
  v14 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this;
  this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillListParent,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  skillDispDataList = v6->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v17 = skillDispDataList->fields._items->m_Items[index];
  if ( !v17 )
LABEL_10:
    sub_B2C434(this, obj);
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v14,
    v17->fields.name,
    v17->fields.detail,
    v17->fields.iconId,
    v17->fields.skillType,
    0,
    v15);
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
  sub_B2C2F8(&this->fields, funcDispEntity);
  this->fields.skillLvEntity = skillLvEntity;
  sub_B2C2F8(&this->fields.skillLvEntity, skillLvEntity);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_B2C2F8(&this->fields.commandSpellEntity, commandSpellEntity);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_B2C2F8(&this->fields.classBoardSquareEntity, classBoardSquareEntity);
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
  sub_B2C2F8(&v14->fields, name);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_B2C2F8(v14, detail);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184EEA & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_4184EEA = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__33_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__31_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}